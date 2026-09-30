/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 0338d4b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__EnumerateSpaceSupportedComponents(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long *unaff_x25;
  
  uVar1 = FUN_0338d710();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_032e935c(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    return uVar1;
  }
  thunk_FUN_01c273e8(PTR_DAT_042305b0);
  FUN_019b5f60();
  uVar1 = FUN_03295500(0);
  FUN_019b2708();
  (**(code **)(*unaff_x20 + 0x1d8))();
  uVar3 = thunk_FUN_01c273e8(Method_TMPro_FastAction<bool>__ctor__);
  uVar1 = FUN_033704d4(uVar3,uVar1);
  thunk_FUN_01c273e8(System_Threading_ParameterizedThreadStart_TypeInfo);
  uVar3 = thunk_FUN_01c496e0();
  thunk_FUN_033584bc(uVar3,uVar1,0);
  uVar1 = thunk_FUN_01c273e8(
                            Method_UnityEngine_UIElements_EventBase<ValidateCommandEvent>_SetCreateFunction__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3,uVar1);
}


