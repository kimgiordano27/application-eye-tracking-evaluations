/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 03389260
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__get_bodyTrackingEnabled(ulong param_1)

{
  undefined8 uVar1;
  long *unaff_x19;
  
  if ((param_1 & 1) != 0) {
    return 1;
  }
  uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
  uVar1 = thunk_FUN_03152714(uVar1,*(undefined8 *)
                                    Method_UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_SetCreateFunction__
                             ,0);
  return uVar1;
}


