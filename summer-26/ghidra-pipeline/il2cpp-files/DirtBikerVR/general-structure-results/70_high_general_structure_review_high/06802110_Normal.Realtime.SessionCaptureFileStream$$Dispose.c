/*
FUNCTION_NAME: Normal.Realtime.SessionCaptureFileStream$$Dispose
ENTRY_POINT: 06802110
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Normal_Realtime_SessionCaptureFileStream__Dispose(long param_1)

{
  undefined4 in_w9;
  undefined4 *unaff_x19;
  
  *unaff_x19 = in_w9;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


