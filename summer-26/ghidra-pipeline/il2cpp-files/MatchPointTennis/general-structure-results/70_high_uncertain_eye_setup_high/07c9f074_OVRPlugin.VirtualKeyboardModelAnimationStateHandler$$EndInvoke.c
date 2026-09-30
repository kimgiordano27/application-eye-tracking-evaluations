/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$EndInvoke
ENTRY_POINT: 07c9f074
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__EndInvoke(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4f510);
    *(undefined1 *)(unaff_x20 + 0x9e0) = 1;
  }
  FUN_07ca5d8c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  lVar1 = thunk_FUN_0448520c(*unaff_x22);
  FUN_07a80df4(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x10),uVar2);
  *(long *)(unaff_x19 + 0xd0) = lVar1;
  thunk_FUN_044bb4b4((long *)(unaff_x19 + 0xd0),lVar1);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  lVar1 = thunk_FUN_0448520c(*unaff_x22);
  FUN_07a80df4(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x10),uVar2);
  *(long *)(unaff_x19 + 0xd8) = lVar1;
  thunk_FUN_044bb4b4((long *)(unaff_x19 + 0xd8),lVar1);
  return;
}


