/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$.ctor
ENTRY_POINT: 064506a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster___ctor(undefined8 *param_1)

{
  long lVar1;
  int in_w9;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x24;
  
  uVar2 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_0675ff58(uVar2,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x24);
  }
  uVar2 = FUN_06792398(uVar2);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090(lVar1);
  }
  lVar1 = **(long **)(lVar1 + 0xc0);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090(lVar1);
  }
  FUN_035255bc(uVar2,lVar1);
  return;
}


