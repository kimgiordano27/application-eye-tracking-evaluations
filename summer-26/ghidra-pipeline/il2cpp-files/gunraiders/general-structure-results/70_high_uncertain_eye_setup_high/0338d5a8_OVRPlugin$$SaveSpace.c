/*
FUNCTION_NAME: OVRPlugin$$SaveSpace
ENTRY_POINT: 0338d5a8
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


void OVRPlugin__SaveSpace(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  FUN_019b2708();
  (**(code **)(*unaff_x20 + 0x1d8))();
  thunk_FUN_01c273e8(Method_TMPro_FastAction<bool>__ctor__);
  uVar1 = FUN_033704d4();
  thunk_FUN_01c273e8(System_Threading_ParameterizedThreadStart_TypeInfo);
  uVar2 = thunk_FUN_01c496e0();
  thunk_FUN_033584bc(uVar2,uVar1,0);
  uVar1 = thunk_FUN_01c273e8(
                            Method_UnityEngine_UIElements_EventBase<ValidateCommandEvent>_SetCreateFunction__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar1);
}


