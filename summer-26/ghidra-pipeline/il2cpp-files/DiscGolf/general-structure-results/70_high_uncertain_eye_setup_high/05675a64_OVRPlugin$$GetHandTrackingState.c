/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingState
ENTRY_POINT: 05675a64
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandTrackingState(void)

{
  undefined4 uVar1;
  char cVar2;
  int in_w8;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  
  *(undefined4 *)(unaff_x19 + 0x1b8) = 4;
  if (((in_w8 == 0) && (unaff_w23 == 0)) && (unaff_w24 != 0)) {
    uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x19 + 200);
    cVar2 = *(char *)(unaff_x19 + 0x7c);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0564d1f4(uVar1,uVar3,2,unaff_x19 + 0x218,0,cVar2 != '\0',&stack0x0000006c,0);
  }
  FUN_05675cdc();
  return;
}


