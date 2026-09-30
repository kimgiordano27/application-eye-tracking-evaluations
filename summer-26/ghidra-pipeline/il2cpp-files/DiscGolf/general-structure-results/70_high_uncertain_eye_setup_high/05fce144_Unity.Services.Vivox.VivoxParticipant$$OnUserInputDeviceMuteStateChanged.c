/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxParticipant$$OnUserInputDeviceMuteStateChanged
ENTRY_POINT: 05fce144
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte Unity_Services_Vivox_VivoxParticipant__OnUserInputDeviceMuteStateChanged
               (long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auStack_48 [12];
  int local_3c;
  byte local_34;
  
  puVar1 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
  if ((DAT_06dc4813 & 1) == 0) {
    FUN_02d965b8(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
    DAT_06dc4813 = 1;
  }
  if ((*(int *)(*(long *)puVar1 + 0xe4) == 0) &&
     (thunk_FUN_02df485c(), *(int *)(*(long *)puVar1 + 0xe4) == 0)) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_05fc2770();
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05fb4724(auStack_48,param_1,*param_2,param_2[1],0);
    if (1 < local_3c) {
      return local_34 & 1;
    }
  }
  return 1;
}


