/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 01da8328
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__EndInvoke(void)

{
  undefined8 uVar1;
  int in_w8;
  int iVar2;
  int *unaff_x19;
  int unaff_w20;
  
  if ((unaff_w20 < 0) || (in_w8 < unaff_w20)) {
    if (9 < in_w8) {
      iVar2 = in_w8 + -9;
      if (-1 < in_w8 + -10) {
        iVar2 = in_w8 + -10;
      }
      in_w8 = iVar2 >> 1;
    }
    if (*(int *)(*(long *)PTR_DAT_0234d4c8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    if (in_w8 % 5 != 4) {
      FUN_01c4f840(0);
      goto LAB_01da8420;
    }
    uVar1 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0234d4c8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar1 = 1;
  }
  FUN_01c4f838(uVar1,0);
LAB_01da8420:
  iVar2 = 10;
  if (*unaff_x19 != 0x7fffffff) {
    iVar2 = *unaff_x19 + 1;
  }
  *unaff_x19 = iVar2;
  return;
}


