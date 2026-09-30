/*
FUNCTION_NAME: OVRPlugin$$CreateEnvironmentRaycasterAsync
ENTRY_POINT: 0575fbd4
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


void OVRPlugin__CreateEnvironmentRaycasterAsync(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_05692378(param_1,param_2,0);
  uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d59a00);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar1,uVar2);
}


