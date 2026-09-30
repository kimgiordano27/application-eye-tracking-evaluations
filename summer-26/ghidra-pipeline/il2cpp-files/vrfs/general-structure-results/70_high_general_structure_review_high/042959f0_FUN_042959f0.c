/*
FUNCTION_NAME: FUN_042959f0
ENTRY_POINT: 042959f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_13;strong_file_logging_hits_13
*/


void FUN_042959f0(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  puVar8 = PTR_DAT_06dfa338;
  if ((bRam000000000723d6b0 & 1) == 0) {
                    /* try { // try from 04295a20 to 04395acb has its CatchHandler @ 04295b3c */
    thunk_FUN_0159f088(PTR_DAT_06dfa338);
    thunk_FUN_0159f088(PTR_DAT_06d90b48);
    thunk_FUN_0159f088(PTR_DAT_06e1d7a8);
    thunk_FUN_0159f088(PTR_DAT_06e67c70);
    bRam000000000723d6b0 = 1;
  }
  plVar9 = (long *)FUN_0160edfc(*(undefined8 *)puVar8,0xf);
  puVar8 = PTR_DAT_06e1d7a8;
  if (plVar9 == (long *)0x0) {
LAB_04295fe8:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(long *)PTR_DAT_06e1d7a8 == 0) {
    lVar12 = 0;
    plVar10 = plVar9;
  }
  else {
    plVar10 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06e1d7a8,*(undefined8 *)(*plVar9 + 0x40));
    if (plVar10 == (long *)0x0) goto LAB_04295fdc;
    lVar12 = *(long *)puVar8;
  }
  auVar14._8_8_ = lVar12;
  auVar14._0_8_ = plVar10;
  if ((int)plVar9[3] != 0) {
    plVar9[4] = lVar12;
    auVar14 = thunk_FUN_01656ef8(plVar9 + 4,lVar12);
    plVar10 = (long *)*param_1;
    if (plVar10 == (long *)0x0) {
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
                    /* try { // try from 04295acc to 04395b13 has its CatchHandler @ 04295938 */
      if (plVar10 == (long *)0x0) goto LAB_04295fe8;
      auVar14 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      lVar13 = auVar14._0_8_;
      if (lVar13 == 0) {
        lVar12 = 0;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = auVar14._8_8_;
        auVar14 = auVar1 << 0x40;
      }
      else {
        auVar14 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40));
        lVar12 = lVar13;
        if (auVar14._0_8_ == 0) goto LAB_04295fdc;
      }
    }
    puVar8 = PTR_DAT_06d90b48;
                    /* try { // try from 04295b14 to 04395b17 has its CatchHandler @ 04295b34 */
                    /* try { // try from 04295b18 to 04395b1b has its CatchHandler @ 04295b30 */
    if (*(uint *)(plVar9 + 3) < 2) goto System_IO_FileStream_WriteDelegate__EndInvoke;
                    /* try { // try from 04295b1c to 04395b23 has its CatchHandler @ 04295938 */
                    /* try { // try from 04295b24 to 04395b2f has its CatchHandler @ 04295b3c */
    plVar9[5] = lVar12;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04295b18 with catch @ 04295b30
                       try { // try from 04295b30 to 04395b53 has its CatchHandler @ 04295938 */
    lVar12 = thunk_FUN_01656ef8(plVar9 + 5,lVar13);
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04295b14 with catch @ 04295b34
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04295988 with catch @ 04295b38
                        */
    if (*(long *)puVar8 == 0) {
      lVar13 = 0;
    }
    else {
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04295a20 with catch @ 04295b3c
                       catch(type#1 @ 06a5a440) { ... } // from try @ 04295b24 with catch @ 04295b3c
                        */
      lVar12 = thunk_FUN_015d0480(*(long *)puVar8,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar12 == 0) goto LAB_04295fdc;
                    /* try { // try from 04295b54 to 04395b57 has its CatchHandler @ 04295b6c */
      lVar13 = *(long *)puVar8;
    }
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = lVar12;
                    /* catch() { ... } // from try @ 04295b54 with catch @ 04295b6c */
    if (*(uint *)(plVar9 + 3) < 3) goto System_IO_FileStream_WriteDelegate__EndInvoke;
    plVar9[6] = lVar13;
                    /* try { // try from 04295b78 to 04395b83 has its CatchHandler @ 04295b98 */
    auVar14 = thunk_FUN_01656ef8(plVar9 + 6,lVar13);
    plVar10 = (long *)param_1[1];
                    /* try { // try from 04295b84 to 04395b8f has its CatchHandler @ 04295938 */
    if (plVar10 == (long *)0x0) {
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
      if (plVar10 == (long *)0x0) goto LAB_04295fe8;
                    /* try { // try from 04295b90 to 04395b97 has its CatchHandler @ 04295b98 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04295b78 with catch @ 04295b98
                       catch(type#2 @ 00000000) { ... } // from try @ 04295b90 with catch @ 04295b98
                        */
      auVar14 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      lVar13 = auVar14._0_8_;
      if (lVar13 == 0) {
        lVar12 = 0;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = auVar14._8_8_;
        auVar14 = auVar2 << 0x40;
      }
      else {
        auVar14 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40));
        lVar12 = lVar13;
        if (auVar14._0_8_ == 0) goto LAB_04295fdc;
      }
    }
    if (*(uint *)(plVar9 + 3) < 4) goto System_IO_FileStream_WriteDelegate__EndInvoke;
    plVar9[7] = lVar12;
    lVar12 = thunk_FUN_01656ef8(plVar9 + 7,lVar13);
    if (*(long *)puVar8 == 0) {
      lVar13 = 0;
    }
    else {
      lVar12 = thunk_FUN_015d0480(*(long *)puVar8,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar12 == 0) goto LAB_04295fdc;
      lVar13 = *(long *)puVar8;
    }
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = lVar12;
    if (*(uint *)(plVar9 + 3) < 5) goto System_IO_FileStream_WriteDelegate__EndInvoke;
    plVar9[8] = lVar13;
    auVar14 = thunk_FUN_01656ef8(plVar9 + 8,lVar13);
    plVar10 = (long *)param_1[2];
    if (plVar10 == (long *)0x0) {
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
      if (plVar10 == (long *)0x0) goto LAB_04295fe8;
      auVar14 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      lVar13 = auVar14._0_8_;
      if (lVar13 == 0) {
        lVar12 = 0;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar14._8_8_;
        auVar14 = auVar3 << 0x40;
      }
      else {
        auVar14 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40));
        lVar12 = lVar13;
        if (auVar14._0_8_ == 0) goto LAB_04295fdc;
      }
    }
    if (*(uint *)(plVar9 + 3) < 6) goto System_IO_FileStream_WriteDelegate__EndInvoke;
    plVar9[9] = lVar12;
    lVar12 = thunk_FUN_01656ef8(plVar9 + 9,lVar13);
    if (*(long *)puVar8 == 0) {
      lVar13 = 0;
    }
    else {
      lVar12 = thunk_FUN_015d0480(*(long *)puVar8,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar12 == 0) goto LAB_04295fdc;
      lVar13 = *(long *)puVar8;
    }
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = lVar12;
    if (*(uint *)(plVar9 + 3) < 7) goto System_IO_FileStream_WriteDelegate__EndInvoke;
    plVar9[10] = lVar13;
    auVar14 = thunk_FUN_01656ef8(plVar9 + 10,lVar13);
    plVar10 = (long *)param_1[3];
    if (plVar10 == (long *)0x0) {
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
      if (plVar10 == (long *)0x0) goto LAB_04295fe8;
      auVar14 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      lVar13 = auVar14._0_8_;
      if (lVar13 == 0) {
        lVar12 = 0;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = auVar14._8_8_;
        auVar14 = auVar4 << 0x40;
      }
      else {
        auVar14 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40));
        lVar12 = lVar13;
        if (auVar14._0_8_ == 0) goto LAB_04295fdc;
      }
    }
    if (*(uint *)(plVar9 + 3) < 8) goto System_IO_FileStream_WriteDelegate__EndInvoke;
    plVar9[0xb] = lVar12;
    lVar12 = thunk_FUN_01656ef8(plVar9 + 0xb,lVar13);
    if (*(long *)puVar8 == 0) {
      lVar13 = 0;
    }
    else {
      lVar12 = thunk_FUN_015d0480(*(long *)puVar8,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar12 == 0) goto LAB_04295fdc;
      lVar13 = *(long *)puVar8;
    }
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = lVar12;
    if (*(uint *)(plVar9 + 3) < 9) goto System_IO_FileStream_WriteDelegate__EndInvoke;
    plVar9[0xc] = lVar13;
    auVar14 = thunk_FUN_01656ef8(plVar9 + 0xc,lVar13);
    plVar10 = (long *)param_1[4];
    if (plVar10 == (long *)0x0) {
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
      if (plVar10 == (long *)0x0) goto LAB_04295fe8;
      auVar14 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      lVar13 = auVar14._0_8_;
      if (lVar13 == 0) {
        lVar12 = 0;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auVar14._8_8_;
        auVar14 = auVar5 << 0x40;
      }
      else {
        auVar14 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40));
        lVar12 = lVar13;
        if (auVar14._0_8_ == 0) goto LAB_04295fdc;
      }
    }
    if (*(uint *)(plVar9 + 3) < 10) goto System_IO_FileStream_WriteDelegate__EndInvoke;
    plVar9[0xd] = lVar12;
    lVar12 = thunk_FUN_01656ef8(plVar9 + 0xd,lVar13);
    if (*(long *)puVar8 == 0) {
      lVar13 = 0;
    }
    else {
      lVar12 = thunk_FUN_015d0480(*(long *)puVar8,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar12 == 0) goto LAB_04295fdc;
      lVar13 = *(long *)puVar8;
    }
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = lVar12;
    if (*(uint *)(plVar9 + 3) < 0xb) goto System_IO_FileStream_WriteDelegate__EndInvoke;
    plVar9[0xe] = lVar13;
    auVar14 = thunk_FUN_01656ef8(plVar9 + 0xe,lVar13);
    plVar10 = (long *)param_1[5];
    if (plVar10 == (long *)0x0) {
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
      if (plVar10 == (long *)0x0) goto LAB_04295fe8;
      auVar14 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      lVar13 = auVar14._0_8_;
      if (lVar13 == 0) {
        lVar12 = 0;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = auVar14._8_8_;
        auVar14 = auVar6 << 0x40;
      }
      else {
        auVar14 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40));
        lVar12 = lVar13;
        if (auVar14._0_8_ == 0) goto LAB_04295fdc;
      }
    }
    if (*(uint *)(plVar9 + 3) < 0xc) goto System_IO_FileStream_WriteDelegate__EndInvoke;
    plVar9[0xf] = lVar12;
    lVar12 = thunk_FUN_01656ef8(plVar9 + 0xf,lVar13);
    if (*(long *)puVar8 == 0) {
      lVar13 = 0;
    }
    else {
      lVar12 = thunk_FUN_015d0480(*(long *)puVar8,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar12 == 0) goto LAB_04295fdc;
      lVar13 = *(long *)puVar8;
    }
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = lVar12;
    if (*(uint *)(plVar9 + 3) < 0xd) goto System_IO_FileStream_WriteDelegate__EndInvoke;
    plVar9[0x10] = lVar13;
    auVar14 = thunk_FUN_01656ef8(plVar9 + 0x10,lVar13);
    plVar10 = (long *)param_1[6];
    if (plVar10 == (long *)0x0) {
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
      if (plVar10 == (long *)0x0) goto LAB_04295fe8;
      auVar14 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      lVar13 = auVar14._0_8_;
      if (lVar13 == 0) {
        lVar12 = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = auVar14._8_8_;
        auVar14 = auVar7 << 0x40;
      }
      else {
        auVar14 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40));
        lVar12 = lVar13;
        if (auVar14._0_8_ == 0) goto LAB_04295fdc;
      }
    }
    puVar8 = PTR_DAT_06e67c70;
    if (0xd < *(uint *)(plVar9 + 3)) {
      plVar9[0x11] = lVar12;
      lVar12 = thunk_FUN_01656ef8(plVar9 + 0x11,lVar13);
      lVar13 = *(long *)puVar8;
      if (lVar13 == 0) {
        lVar13 = 0;
      }
      else {
        lVar12 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar12 == 0) {
LAB_04295fdc:
          uVar11 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar11,0);
        }
        lVar13 = *(long *)puVar8;
      }
      auVar14._8_8_ = lVar13;
      auVar14._0_8_ = lVar12;
      if (0xe < *(uint *)(plVar9 + 3)) {
        plVar9[0x12] = lVar13;
        thunk_FUN_01656ef8();
        FUN_02527034(plVar9,0);
        return;
      }
    }
  }
System_IO_FileStream_WriteDelegate__EndInvoke:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc(auVar14._0_8_,auVar14._8_8_);
}


