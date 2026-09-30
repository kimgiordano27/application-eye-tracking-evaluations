/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingPositionSupported
ENTRY_POINT: 02c4cb4c
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported(ulong param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x21;
  long lVar12;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037fa178);
    FUN_017fc350(PTR_DAT_037f45f0);
    FUN_017fc350(PTR_DAT_0380c9c8);
    *(undefined1 *)(unaff_x21 + 0x10c) = 1;
  }
  uVar8 = FUN_02a4dcd0(0);
  puVar1 = PTR_DAT_037f45f0;
  if ((uVar8 & 1) == 0) {
    if (unaff_x19 == 0) goto LAB_02c4ccf4;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if (DAT_03a25482 == '\0') {
      FUN_017fc350(PTR_DAT_037f45f0);
      DAT_03a25482 = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar9 = *(long *)puVar1;
    }
    plVar10 = (long *)FUN_017fc368(lVar9);
    if (unaff_x19 == 0) goto LAB_02c4ccf4;
    lVar9 = *plVar10;
    lVar12 = *(long *)(unaff_x19 + 0x30);
    uVar2 = FUN_02c475b8();
    uVar3 = 0;
    if (lVar9 != 0) {
      uVar3 = FUN_02c42414(lVar9);
    }
    uVar4 = FUN_02c42414();
    uVar5 = 0;
    if (lVar12 != 0) {
      uVar5 = FUN_02c42414(lVar12);
    }
    uVar6 = FUN_02c43078();
    FUN_02a4debc(uVar2,uVar3,uVar4,uVar5,uVar6,0);
  }
  uVar7 = FUN_02c43078();
  puVar1 = PTR_DAT_0380c9c8;
  if ((uVar7 >> 1 & 1) == 0) {
    FUN_02c43078();
    FUN_02c3d66c();
    return;
  }
  lVar9 = *(long *)PTR_DAT_0380c9c8;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar9 = *(long *)puVar1;
  }
  uVar11 = **(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_037fa178 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)PTR_DAT_037fa178);
  }
  lVar9 = FUN_02a4e0dc(uVar11,0,0);
  if (lVar9 != 0) {
    FUN_02a4e180(lVar9,1,0);
    FUN_02a4e1a0(lVar9);
    return;
  }
LAB_02c4ccf4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


