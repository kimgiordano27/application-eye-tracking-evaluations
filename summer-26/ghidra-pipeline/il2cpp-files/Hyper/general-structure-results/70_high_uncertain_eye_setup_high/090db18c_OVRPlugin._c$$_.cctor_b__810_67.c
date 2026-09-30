/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_67
ENTRY_POINT: 090db18c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_67(ulong param_1)

{
  int iVar1;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar2;
  
  plVar2 = *(long **)(unaff_x21 + 0x410);
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac40410);
    *(undefined1 *)(unaff_x20 + 0x5c8) = 1;
  }
  iVar1 = *(int *)(*plVar2 + 0xe4);
  if (unaff_w19 != 0) {
    if (iVar1 == 0) {
      thunk_FUN_049a583c();
    }
    FUN_090dad14(unaff_w19);
    return;
  }
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_090da9b8();
  return;
}


