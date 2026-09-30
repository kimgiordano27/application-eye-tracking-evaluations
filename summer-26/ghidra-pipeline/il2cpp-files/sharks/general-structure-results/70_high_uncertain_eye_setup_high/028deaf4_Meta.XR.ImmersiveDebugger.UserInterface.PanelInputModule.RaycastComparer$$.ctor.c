/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule.RaycastComparer$$.ctor
ENTRY_POINT: 028deaf4
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer___ctor
               (undefined8 param_1)

{
  long lVar1;
  long *unaff_x19;
  undefined8 unaff_x20;
  
  FUN_0185daa4(param_1);
  if ((*(ushort *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_0185daa4(*unaff_x19);
  }
  FUN_020ecd70();
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x70) = unaff_x20;
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar1 + 0xb8) + 0x70);
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  FUN_01b7eb9c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xa0));
  return;
}


