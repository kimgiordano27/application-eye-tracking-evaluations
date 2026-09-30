/*
FUNCTION_NAME: OVRPlugin$$EraseSpace
ENTRY_POINT: 0338d69c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EraseSpace(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_033704d4();
  thunk_FUN_01c273e8(System_Threading_ParameterizedThreadStart_TypeInfo);
  uVar2 = thunk_FUN_01c496e0();
  thunk_FUN_03358524(uVar2,uVar1);
  uVar1 = thunk_FUN_01c273e8(
                            Method_UnityEngine_UIElements_EventBase<ValidateCommandEvent>_SetCreateFunction__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar1);
}


