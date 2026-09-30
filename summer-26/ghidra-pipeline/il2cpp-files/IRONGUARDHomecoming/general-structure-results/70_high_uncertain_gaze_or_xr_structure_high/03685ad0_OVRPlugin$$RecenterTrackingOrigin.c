/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 03685ad0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__RecenterTrackingOrigin(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    *(undefined1 *)(unaff_x21 + 0xe78) = 1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_040770d0(uVar1,0);
  return;
}


