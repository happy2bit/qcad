/**
 * Copyright (c) 2011-2013 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */
// Auto generated by Testing Dashboard
// File        : scripts/Modify/Mirror/Tests/MirrorTest00.js
// Timestamp   : 2011-08-05 16:37:03
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function MirrorTest00() {
    TdbTest.call(this, 'scripts/Modify/Mirror/Tests/MirrorTest00.js');
}

MirrorTest00.prototype = new TdbTest();

MirrorTest00.prototype.test00 = function() {
    qDebug('running MirrorTest00.test00()...');
    this.setUp();
    this.importFile('scripts/Modify/Mirror/Tests/data/half.dxf');
    var w = objectFromPath('MainWindow::CadToolBar::MainToolsPanel');
    this.sendMouseEvent(w, QEvent.MouseButtonPress, new QPoint(63, 435), Qt.LeftButton, 1, 0);
    var w = objectFromPath('MainWindow::CadToolBar::MainToolsPanel');
    this.sendMouseEvent(w, QEvent.MouseButtonRelease, new QPoint(63, 435), Qt.LeftButton, 0, 0);
    var p = new RVector(5.797351, 13.363415);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.MidButton, 4, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.MidButton, 0, 0);
    this.selectAll();
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::ModifyToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::ModifyToolsPanel::MirrorButton');
    this.setZoom(13.442622950819672, new RVector(1.19533, 1.06829, 0) );
    var p = new RVector(20.005887, 29.506098);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(13.442622950819672, new RVector(1.19533, 1.06829, 0) );
    var p = new RVector(19.708326, 5.180488);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.dlgStart();
    this.dlgAppendCode('var map = new Map()');
    this.dlgAppendCode("map.put('DialogOpenedByTdb/Mode', 'KeepOriginal')");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/UseCurrentAttributes', false)");
    this.dlgAppendCode("WidgetFactory.restoreState(dialog, 'DialogOpenedByTdb', undefined, false, undefined, map)");
    this.dlgEnd();
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.verifyDrawing('MirrorTest00_000.dxf');
    this.tearDown();
    qDebug('finished MirrorTest00.test00()');
};

