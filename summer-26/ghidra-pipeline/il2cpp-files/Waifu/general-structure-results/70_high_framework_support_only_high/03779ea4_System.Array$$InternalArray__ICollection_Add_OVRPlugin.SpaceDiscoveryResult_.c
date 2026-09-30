/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03779ea4
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>(code *param_1)

{
  (*param_1)(0);
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


