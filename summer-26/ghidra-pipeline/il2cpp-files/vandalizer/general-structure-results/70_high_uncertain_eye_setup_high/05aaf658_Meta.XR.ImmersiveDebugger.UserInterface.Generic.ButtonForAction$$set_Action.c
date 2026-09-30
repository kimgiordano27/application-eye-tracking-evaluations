/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonForAction$$set_Action
ENTRY_POINT: 05aaf658
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonForAction__set_Action(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong in_x9;
  void *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_0322bef4();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  if (*unaff_x21 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
  }
  if ((unaff_w20 < 0) || (*(int *)((long)unaff_x21 + 0xc) <= unaff_w20)) {
    FUN_05e22bd8(0);
  }
  lVar2 = *unaff_x21;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = (int)unaff_x21[1] + unaff_w20;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  memcpy(unaff_x19,(void *)(lVar2 + (long)(int)uVar1 * 0x60 + 0x20),0x60);
  return;
}


