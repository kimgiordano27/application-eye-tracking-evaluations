/*
FUNCTION_NAME: OVRPlugin.Media$$SyncMrcFrame
ENTRY_POINT: 01dac128
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Media__SyncMrcFrame(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_00fdc2e4(PTR_DAT_0234c670);
  FUN_00fdc2e4(PTR_DAT_0235a1b8);
  FUN_00fdc2e4(PTR_DAT_0234bca8);
  FUN_00fdc2e4(PTR_DAT_02351f50);
  FUN_00fdc2e4(PTR_DAT_02351f60);
  FUN_00fdc2e4(PTR_DAT_0235a1c0);
  FUN_00fdc2e4(PTR_DAT_0235a1c8);
  FUN_00fdc2e4(PTR_DAT_0235a1d0);
  *(undefined1 *)(unaff_x20 + 0xa5a) = 1;
  puVar3 = PTR_DAT_0234c670;
  if (unaff_w19 < -1) {
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar10 = thunk_FUN_010400dc();
    uVar7 = thunk_FUN_010303a8(PTR_DAT_0235a1d8);
    uVar8 = thunk_FUN_010303a8(PTR_DAT_0235a1e0);
    FUN_01c62494(uVar10,uVar7,uVar8,0);
    uVar7 = thunk_FUN_010303a8(PTR_DAT_0235a1e8);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar10,uVar7);
  }
  if (*(int *)(*(long *)PTR_DAT_0234c670 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  if ((unaff_x21 != 0) && (iVar1 = *(int *)(unaff_x21 + 0x20), thunk_FUN_00ffe618(), 1 < iVar1)) {
    if (*(int *)(*(long *)PTR_DAT_0234bca8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar4 = FUN_01dbc264();
    return lVar4;
  }
  puVar2 = PTR_DAT_0234bca8;
  if (unaff_w19 == 0) {
    if (*(int *)(*(long *)PTR_DAT_0234bca8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    if (DAT_0247cb0b == '\0') {
      FUN_00fdc2e4(PTR_DAT_0234bca8);
      DAT_0247cb0b = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
  }
  else {
    lVar4 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a1b8);
    FUN_01dbc5c4();
    plVar6 = (long *)PTR_DAT_0235a1d0;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      plVar6 = (long *)PTR_DAT_0235a1d0;
    }
    PTR_DAT_0235a1d0 = (undefined *)plVar6;
    if (unaff_x21 != 0) {
      lVar5 = *plVar6;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar5 = *plVar6;
      }
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar5 = *plVar6;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02350790);
        FUN_0131039c(lVar9,uVar10,*(undefined8 *)PTR_DAT_0235a1c0,0);
        plVar6 = (long *)(*(long *)(*plVar6 + 0xb8) + 8);
        *plVar6 = lVar9;
        thunk_FUN_0106e12c(plVar6,lVar9);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01da63c8(&stack0x00000008,&stack0x00000028,lVar9,lVar4);
      if (lVar4 == 0) goto LAB_01dac4a8;
      *(undefined8 *)(lVar4 + 0x70) = in_stack_00000018;
      *(undefined8 *)(lVar4 + 0x68) = in_stack_00000010;
      *(undefined8 *)(lVar4 + 0x60) = in_stack_00000008;
      thunk_FUN_0106e12c(lVar4 + 0x60,0);
    }
    puVar3 = PTR_DAT_0235a1d0;
    if (unaff_w19 != -1) {
      lVar5 = *(long *)PTR_DAT_0235a1d0;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar5 = *(long *)puVar3;
      }
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar5 = *(long *)puVar3;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02351f50);
        FUN_01da9ba8(lVar9,uVar10,*(undefined8 *)PTR_DAT_0235a1c8);
        plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        *plVar6 = lVar9;
        thunk_FUN_0106e12c(plVar6,lVar9);
      }
      lVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02351f60);
      FUN_01d912d0(lVar5,0);
      FUN_01db5040(lVar5,lVar9,lVar4,unaff_w19,0xffffffffffffffff);
      if (lVar4 != 0) {
        plVar6 = (long *)(lVar4 + 0x78);
        *plVar6 = lVar5;
        thunk_FUN_0106e12c(plVar6,lVar5);
        if (*plVar6 != 0) {
          return lVar4;
        }
      }
LAB_01dac4a8:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  }
  return lVar4;
}


