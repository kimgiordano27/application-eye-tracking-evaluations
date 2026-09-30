/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 05feeb30
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__add_InputFocusLost(void)

{
  int iVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 unaff_s8;
  
  iVar1 = FUN_05feeb94();
  if (0 < iVar1) {
    *(undefined4 *)(unaff_x20 + 0xc) = unaff_s8;
    uVar5 = unaff_x21[1];
    uVar4 = *unaff_x21;
    uVar3 = unaff_x21[3];
    uVar2 = unaff_x21[2];
    *(undefined8 *)(unaff_x20 + 0x48) = unaff_x21[4];
    *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
    thunk_FUN_0329bf60(unaff_x20 + 0x28,0);
    *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
    thunk_FUN_0329bf60();
  }
  return 0 < iVar1;
}


