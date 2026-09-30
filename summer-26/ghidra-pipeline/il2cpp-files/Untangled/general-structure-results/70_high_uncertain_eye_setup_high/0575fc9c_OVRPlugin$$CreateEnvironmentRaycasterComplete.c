/*
FUNCTION_NAME: OVRPlugin$$CreateEnvironmentRaycasterComplete
ENTRY_POINT: 0575fc9c
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateEnvironmentRaycasterComplete(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0569a754();
  uVar1 = thunk_FUN_02f239f0(PTR_DAT_06d59a00);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar2,uVar1);
}


