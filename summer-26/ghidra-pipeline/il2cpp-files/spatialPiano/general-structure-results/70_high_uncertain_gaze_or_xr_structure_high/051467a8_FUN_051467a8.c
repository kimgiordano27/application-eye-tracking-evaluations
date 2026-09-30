/*
FUNCTION_NAME: FUN_051467a8
ENTRY_POINT: 051467a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_051467a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_067c9600;
  if ((DAT_06bba02a & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9600);
    FUN_02f08768(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    DAT_06bba02a = 1;
  }
  puVar2 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0510bf10(param_1,*(undefined8 *)puVar2,param_2,0);
  return;
}


