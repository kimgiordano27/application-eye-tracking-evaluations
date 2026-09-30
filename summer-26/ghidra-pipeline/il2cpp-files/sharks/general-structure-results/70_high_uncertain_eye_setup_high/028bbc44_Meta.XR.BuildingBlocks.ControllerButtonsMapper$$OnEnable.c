/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$OnEnable
ENTRY_POINT: 028bbc44
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__OnEnable(long param_1)

{
  int iVar1;
  ushort uVar2;
  long unaff_x19;
  long unaff_x21;
  
  uVar2 = *(ushort *)(param_1 + 0x135);
  if ((uVar2 & 1) == 0) {
    FUN_0185daa4(param_1);
    param_1 = *(long *)(unaff_x21 + 0x20);
    uVar2 = *(ushort *)(param_1 + 0x135);
  }
  iVar1 = *(int *)(unaff_x19 + 0x14);
  if ((uVar2 & 1) == 0) {
    FUN_0185daa4(param_1);
  }
  if (iVar1 < 0) {
    FUN_02beef4c(0);
  }
  return;
}


