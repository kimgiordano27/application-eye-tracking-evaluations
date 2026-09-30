/*
FUNCTION_NAME: Oculus.Interaction.ControllerAxis2D$$Value
ENTRY_POINT: 051467bc
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


void Oculus_Interaction_ControllerAxis2D__Value(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x21;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = *(long **)(unaff_x21 + 0x600);
  if ((*(byte *)(unaff_x22 + 0x2a) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9600);
    FUN_02f08768(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x2a) = 1;
  }
  puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0510bf10(param_1,*(undefined8 *)puVar1,param_2,0);
  return;
}


