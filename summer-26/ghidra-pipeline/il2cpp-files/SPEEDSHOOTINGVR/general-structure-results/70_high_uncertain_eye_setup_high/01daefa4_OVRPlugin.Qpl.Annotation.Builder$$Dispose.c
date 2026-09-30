/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 01daefa4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Dispose(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_010303a8(*(undefined8 *)(param_1 + 0xe28));
  uVar1 = thunk_FUN_010400dc();
  uVar2 = thunk_FUN_010303a8(PTR_DAT_02359f58);
  FUN_01c66cb4(uVar1,uVar2,0);
  uVar2 = thunk_FUN_010303a8(PTR_DAT_0235a318);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar1,uVar2);
}


