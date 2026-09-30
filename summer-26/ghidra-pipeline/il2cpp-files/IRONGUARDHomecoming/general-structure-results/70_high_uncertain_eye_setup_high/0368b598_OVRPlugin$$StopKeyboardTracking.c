/*
FUNCTION_NAME: OVRPlugin$$StopKeyboardTracking
ENTRY_POINT: 0368b598
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 OVRPlugin__StopKeyboardTracking(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0368b258();
  if (uVar1 < 6) {
    return *(undefined4 *)(&DAT_00d4a5f8 + (long)(int)uVar1 * 4);
  }
  thunk_FUN_01efb3a4(Method_System_Text_Encoding_GetBytes__);
  uVar2 = thunk_FUN_01f117cc();
  FUN_0356d160(uVar2,0);
  uVar3 = thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_22__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar3);
}


