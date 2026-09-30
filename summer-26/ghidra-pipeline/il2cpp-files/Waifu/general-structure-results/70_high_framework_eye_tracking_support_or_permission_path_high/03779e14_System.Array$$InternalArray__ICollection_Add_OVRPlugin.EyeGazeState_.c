/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03779e14
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;weak_pose_support;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = (code *)FUN_033d1b68();
  *(code **)(unaff_x20 + 0xf30) = pcVar1;
  (*pcVar1)();
  if (DAT_086ece78 == (code *)0x0) {
    DAT_086ece78 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_volume(System.Single)");
  }
  (*DAT_086ece78)(0x3f800000);
  if (DAT_086ece48 == (code *)0x0) {
    DAT_086ece48 = (code *)FUN_033d1b68(
                                       "UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)"
                                       );
  }
  (*DAT_086ece48)(0x3f800000);
  if (DAT_086ecef8 == (code *)0x0) {
    DAT_086ecef8 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_panStereo(System.Single)");
  }
  (*DAT_086ecef8)(0);
  if (DAT_086ecf08 == (code *)0x0) {
    DAT_086ecf08 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_spatialBlend(System.Single)");
  }
  (*DAT_086ecf08)(0x3f800000);
  if (DAT_086ecf18 == (code *)0x0) {
    DAT_086ecf18 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_reverbZoneMix(System.Single)")
    ;
  }
  (*DAT_086ecf18)(0x3f800000);
  if (DAT_086ecf20 == (code *)0x0) {
    DAT_086ecf20 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_dopplerLevel(System.Single)");
  }
  (*DAT_086ecf20)(0x3f800000);
  if (DAT_086ecf28 == (code *)0x0) {
    DAT_086ecf28 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_spread(System.Single)");
  }
  (*DAT_086ecf28)(0x3f800000);
  if (DAT_086ecf40 == (code *)0x0) {
    DAT_086ecf40 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_minDistance(System.Single)");
  }
  (*DAT_086ecf40)(0x3f800000);
  if (DAT_086ecf50 == (code *)0x0) {
    DAT_086ecf50 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_maxDistance(System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03779fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_086ecf50)(0x43fa0000);
  return;
}


