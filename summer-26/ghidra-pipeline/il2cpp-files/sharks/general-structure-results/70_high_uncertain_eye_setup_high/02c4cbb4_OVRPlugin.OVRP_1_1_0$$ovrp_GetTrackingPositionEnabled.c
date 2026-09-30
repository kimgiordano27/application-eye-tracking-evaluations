/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingPositionEnabled
ENTRY_POINT: 02c4cbb4
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionEnabled(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  undefined8 uVar10;
  long *unaff_x21;
  long unaff_x22;
  long lVar11;
  
  FUN_017fc350();
  *(undefined1 *)(unaff_x22 + 0x482) = 1;
  lVar8 = *unaff_x21;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar8 = *unaff_x21;
  }
  plVar9 = (long *)FUN_017fc368(lVar8);
  if (unaff_x19 != 0) {
    lVar8 = *plVar9;
    lVar11 = *(long *)(unaff_x19 + 0x30);
    uVar2 = FUN_02c475b8();
    uVar3 = 0;
    if (lVar8 != 0) {
      uVar3 = FUN_02c42414(lVar8);
    }
    uVar4 = FUN_02c42414();
    uVar5 = 0;
    if (lVar11 != 0) {
      uVar5 = FUN_02c42414(lVar11);
    }
    uVar6 = FUN_02c43078();
    FUN_02a4debc(uVar2,uVar3,uVar4,uVar5,uVar6,0);
    uVar7 = FUN_02c43078();
    puVar1 = PTR_DAT_0380c9c8;
    if ((uVar7 >> 1 & 1) == 0) {
      FUN_02c43078();
      FUN_02c3d66c();
      return;
    }
    lVar8 = *(long *)PTR_DAT_0380c9c8;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar8 = *(long *)puVar1;
    }
    uVar10 = **(undefined8 **)(lVar8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_037fa178 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*(long *)PTR_DAT_037fa178);
    }
    lVar8 = FUN_02a4e0dc(uVar10,0,0);
    if (lVar8 != 0) {
      FUN_02a4e180(lVar8,1,0);
      FUN_02a4e1a0(lVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


