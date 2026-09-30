/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 053068e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose(ulong param_1)

{
  long unaff_x21;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8fb0);
    FUN_02f08768(System_Data_DataRowBuilder_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x13a) = 1;
  }
  thunk_FUN_02f45270(*unaff_x22);
  FUN_05054f60();
  FUN_052364c4();
  FUN_05236568();
  return;
}


