/*
FUNCTION_NAME: Oculus.Interaction.ControllerAxis2D$$get_Axis
ENTRY_POINT: 05146738
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


void Oculus_Interaction_ControllerAxis2D__get_Axis(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_067c9600;
  if ((DAT_06bba029 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9600);
    FUN_02f08768(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    DAT_06bba029 = 1;
  }
  puVar2 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0510bee0(param_1,*(undefined8 *)puVar2,0);
  return;
}


