/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$UnregisterRaycaster
ENTRY_POINT: 06ddeb70
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__UnregisterRaycaster
               (long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong in_x9;
  undefined2 unaff_w19;
  int unaff_w20;
  long unaff_x22;
  
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_03d8f26c(param_1);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  if (*param_2 == 0) {
    FUN_07199aec(0x32,0);
  }
  if ((unaff_w20 < 0) || (*(int *)((long)param_2 + 0xc) <= unaff_w20)) {
    FUN_07199dd4(0);
  }
  lVar2 = *param_2;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = (int)param_2[1] + unaff_w20;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  *(undefined2 *)(lVar2 + (long)(int)uVar1 * 2 + 0x20) = unaff_w19;
  return;
}


