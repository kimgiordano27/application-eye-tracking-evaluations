/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$BeginInvoke
ENTRY_POINT: 01da8240
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_LogCallback2DelegateType__BeginInvoke(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  int *unaff_x19;
  long unaff_x20;
  
  FUN_00fdc2e4();
  *(undefined1 *)(unaff_x20 + 0x970) = 1;
  puVar1 = PTR_DAT_0234cc30;
  if (*unaff_x19 < 10) {
    lVar3 = *(long *)PTR_DAT_0234cc30;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar3 = *(long *)puVar1;
    }
    bVar2 = *(char *)(*(long *)(lVar3 + 0xb8) + 8) != '\0';
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


