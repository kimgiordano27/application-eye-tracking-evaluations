/*
FUNCTION_NAME: FUN_0313e75c
ENTRY_POINT: 0313e75c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0313e75c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo;
  puVar1 = OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo;
  if ((DAT_07557493 & 1) == 0) {
    FUN_03188a78(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo);
    FUN_03188a78(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    DAT_07557493 = 1;
  }
  uVar3 = FUN_03188d04("Cannot marshal field \'%s\' of type \'%s\': Reference type field marshaling is not supported."
                       ,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar3,0);
}


