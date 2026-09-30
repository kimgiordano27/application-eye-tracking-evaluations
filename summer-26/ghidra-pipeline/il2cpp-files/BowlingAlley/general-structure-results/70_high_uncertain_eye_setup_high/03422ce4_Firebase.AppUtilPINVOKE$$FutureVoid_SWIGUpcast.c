/*
FUNCTION_NAME: Firebase.AppUtilPINVOKE$$FutureVoid_SWIGUpcast
ENTRY_POINT: 03422ce4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Firebase_AppUtilPINVOKE__FutureVoid_SWIGUpcast(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xee9) = in_w8;
  puVar1 = PTR_DAT_072798f8;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar2 = OVRPlugin_OVRP_1_58_0___cctor();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  if ((uVar2 & 1) == 0) {
    FUN_06bb23f0(*(undefined8 *)PTR_DAT_0727aa38,0);
    return;
  }
  FUN_06bb2a00(*(undefined8 *)PTR_DAT_0727aa30,0);
  return;
}


