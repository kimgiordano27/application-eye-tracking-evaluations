/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingPositionEnabled
ENTRY_POINT: 02c4cc1c
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingPositionEnabled(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined4 unaff_w20;
  undefined8 uVar5;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  
  uVar2 = FUN_02c43078();
  FUN_02a4debc(unaff_w20,unaff_w21,unaff_w23,unaff_w22,uVar2,0);
  uVar3 = FUN_02c43078();
  puVar1 = PTR_DAT_0380c9c8;
  if ((uVar3 >> 1 & 1) == 0) {
    FUN_02c43078();
    FUN_02c3d66c();
    return;
  }
  lVar4 = *(long *)PTR_DAT_0380c9c8;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar4 = *(long *)puVar1;
  }
  uVar5 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_037fa178 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)PTR_DAT_037fa178);
  }
  lVar4 = FUN_02a4e0dc(uVar5,0,0);
  if (lVar4 != 0) {
    FUN_02a4e180(lVar4,1,0);
    FUN_02a4e1a0(lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


