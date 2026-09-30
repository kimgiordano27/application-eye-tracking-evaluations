/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 0534c468
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1
*/


void OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_02f45270();
                    /* try { // try from 0534c470 to 0544c4e7 has its CatchHandler @ 0534c5b0 */
  FUN_050d7b3c(uVar1,0);
  uVar2 = thunk_FUN_02f6ef30(Oculus_Interaction_FirstHoverInteractorGroup_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar1,uVar2);
}


