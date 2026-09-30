/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_SetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 056a717c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin_OVRP_1_99_0__ovrp_SetTrackingPoseEnabledForInvisibleSession(void)

{
  int iVar1;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  FUN_056a9f68();
  auVar2 = OVRPlugin_<>c__<_cctor>b__807_26(&stack0x00000018,0);
  if (*(int *)(*(long *)PTR_DAT_06a0d468 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar1 = FUN_056a45ec(auVar2._0_8_,auVar2._8_8_,&stack0x00000030,0);
  thunk_FUN_056a9c0c(&stack0x00000018,0);
  if (iVar1 == 0) {
    *unaff_x20 = unaff_x19;
    LeanTween__value();
  }
  FUN_056a7614(&stack0x00000030);
  return iVar1 == 0;
}


