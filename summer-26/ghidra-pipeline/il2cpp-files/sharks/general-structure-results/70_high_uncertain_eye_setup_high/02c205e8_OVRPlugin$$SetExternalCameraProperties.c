/*
FUNCTION_NAME: OVRPlugin$$SetExternalCameraProperties
ENTRY_POINT: 02c205e8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c20b98) */

void OVRPlugin__SetExternalCameraProperties(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 uVar9;
  long unaff_x20;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  char cStack000000000000000c;
  
  FUN_017fc350(PTR_DAT_0380ba48);
  *(undefined1 *)(unaff_x19 + 0xeeb) = 1;
  if (*(char *)(unaff_x20 + 0xa0) != '\0') {
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa8);
  cStack000000000000000c = '\0';
  FUN_02c317e4(uVar9,&stack0x0000000c,0);
  puVar2 = PTR_DAT_03806cb0;
  if (*(char *)(unaff_x20 + 0xa0) != '\0') goto LAB_02c20af8;
  if (*(int *)(*(long *)PTR_DAT_03806cb0 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar5 = FUN_02c167b0();
  if ((uVar5 & 1) == 0) {
    thunk_FUN_01851c08(PTR_DAT_037ff718);
    uVar9 = thunk_FUN_01861bbc();
    uVar7 = thunk_FUN_01851c08(PTR_DAT_0380ba50);
    FUN_02b22e78(uVar9,uVar7,0);
    uVar7 = thunk_FUN_01851c08(PTR_DAT_0380ba58);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar9,uVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_017f7f68(0);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar6 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x59);
  plVar10 = (long *)(unaff_x20 + 0x90);
  *plVar10 = lVar6;
  thunk_FUN_0188fd20(plVar10);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar6 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x58);
  plVar11 = (long *)(unaff_x20 + 0x98);
  *plVar11 = lVar6;
  thunk_FUN_0188fd20(plVar11);
  if (*plVar10 == 0) {
LAB_02c206d8:
    uVar7 = 0;
  }
  else {
    FUN_02c20178();
    if (*plVar11 == 0) goto LAB_02c206d8;
    uVar7 = FUN_02a43498(0,*plVar11,0);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar8 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x129);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar8;
  thunk_FUN_0188fd20();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar8 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x12a);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar8;
  thunk_FUN_0188fd20();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar8 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x167);
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar8;
  thunk_FUN_0188fd20();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar8 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x168);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar8;
  thunk_FUN_0188fd20();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar4 = FUN_02c20e48(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar4;
  if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar8 = FUN_02bd01ec(uVar4,0x10,0);
  uVar4 = FUN_02bd01a8(uVar8,1,0);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar4;
  lVar6 = 0xb8;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    lVar6 = 0xc0;
  }
  if (*(long *)(unaff_x20 + lVar6) != 0) {
    uVar7 = FUN_02a43498(uVar7,*(long *)(unaff_x20 + lVar6),0);
  }
  puVar3 = PTR_DAT_03806cb8;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  if (*(int *)(*(long *)PTR_DAT_03806cb8 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  puVar1 = (undefined8 *)(unaff_x20 + 0x108);
  uVar5 = FUN_017f7e28(uVar8,uVar7,puVar1,*(undefined8 *)(*(long *)puVar3 + 0xb8));
  if ((uVar5 & 1) == 0) {
    uVar7 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2c00,0x11);
    *puVar1 = uVar7;
    thunk_FUN_0188fd20(puVar1);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar6 = *(long *)puVar3;
    }
    **(undefined8 **)(lVar6 + 0xb8) = 0;
  }
  puVar2 = PTR_DAT_03806cc0;
  if (*(int *)(*(long *)PTR_DAT_03806cc0 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar7 = FUN_02c168f0(0);
  if (DAT_03a25f2b == '\0') {
    FUN_017fc350(PTR_DAT_03806cc0);
    DAT_03a25f2b = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar6 = *(long *)puVar2;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20);
  uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03800c10);
  FUN_02b27cbc(uVar8,uVar7,uVar12,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar8;
  thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x60),uVar8);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar6 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),5);
  plVar10 = (long *)(unaff_x20 + 0x48);
  *plVar10 = lVar6;
  thunk_FUN_0188fd20(plVar10);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),1);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar7;
  thunk_FUN_0188fd20();
  if (*plVar10 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar6 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0xc);
    *plVar10 = lVar6;
    thunk_FUN_0188fd20(plVar10);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),7);
    lVar6 = FUN_02a43498(uVar8,uVar7,0);
    *plVar10 = lVar6;
    thunk_FUN_0188fd20(plVar10);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar6 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x10);
  plVar10 = (long *)(unaff_x20 + 0x38);
  *plVar10 = lVar6;
  thunk_FUN_0188fd20(plVar10);
  if (*plVar10 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar6 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x14);
    *plVar10 = lVar6;
    thunk_FUN_0188fd20(plVar10);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar7;
  thunk_FUN_0188fd20();
  uVar5 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba48,0);
  if (((uVar5 & 1) == 0) &&
     (uVar5 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03803df0,0
                                ), (uVar5 & 1) == 0)) {
    uVar7 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar5 = FUN_02a4fe7c(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380b708,0);
      if ((uVar5 & 1) != 0) goto LAB_02c20a94;
      uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar5 = thunk_FUN_02a4fb2c(uVar7,*(undefined8 *)PTR_DAT_0380ba40,0);
    if (((uVar5 & 1) != 0) ||
       (uVar5 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba28
                                   ,0), (uVar5 & 1) != 0)) goto LAB_02c20a94;
    uVar5 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba38,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba18,0
                                );
      if ((uVar5 & 1) != 0) {
        *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_0380ba20;
        thunk_FUN_0188fd20();
      }
    }
    else {
      *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_0380ba30;
      thunk_FUN_0188fd20();
    }
  }
  else {
LAB_02c20a94:
    *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_0380ba10;
    thunk_FUN_0188fd20();
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),10);
  *(undefined8 *)(unaff_x20 + 200) = uVar7;
  thunk_FUN_0188fd20();
  FUN_02c20ea8();
  if (*(char *)(unaff_x20 + 0xec) != '\0') {
    FUN_02c20178();
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
  }
  *(undefined1 *)(unaff_x20 + 0xa0) = 1;
LAB_02c20af8:
  if (cStack000000000000000c != '\0') {
    thunk_FUN_0184c01c(uVar9,0);
  }
  return;
}


