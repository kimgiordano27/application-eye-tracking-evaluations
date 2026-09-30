/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$IsFocussed
ENTRY_POINT: 0519bbd0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__IsFocussed(long param_1)

{
  long in_x9;
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + in_x9 * 0x20;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  LeanTween__value(unaff_x19 + 0x10,0);
  *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + 1;
  return 1;
}


