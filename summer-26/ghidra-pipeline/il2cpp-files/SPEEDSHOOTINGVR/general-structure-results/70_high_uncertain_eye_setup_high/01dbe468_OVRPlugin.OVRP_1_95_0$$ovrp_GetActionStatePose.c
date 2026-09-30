/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_GetActionStatePose
ENTRY_POINT: 01dbe468
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_95_0__ovrp_GetActionStatePose(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  
  FUN_00fdc2e4();
  *(undefined1 *)(unaff_x19 + 0x10e) = 1;
  puVar1 = PTR_DAT_0234bca8;
  lVar2 = *(long *)PTR_DAT_0234bca8;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = (undefined8 *)FUN_00fdc2fc(lVar2);
  return *puVar3;
}


