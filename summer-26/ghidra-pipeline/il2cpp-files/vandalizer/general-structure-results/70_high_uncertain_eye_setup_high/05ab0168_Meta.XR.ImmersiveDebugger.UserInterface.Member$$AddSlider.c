/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$AddSlider
ENTRY_POINT: 05ab0168
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


void Meta_XR_ImmersiveDebugger_UserInterface_Member__AddSlider
               (long *param_1,int param_2,void *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  if (*param_1 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
  }
  if ((param_2 < 0) || (*(int *)((long)param_1 + 0xc) <= param_2)) {
    FUN_05e22bd8(0);
  }
  lVar3 = *param_1;
  lVar2 = param_1[1];
  memcpy(&stack0x00000070,param_3,0x70);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = (int)lVar2 + param_2;
  memcpy(&stack0x00000000,&stack0x00000070,0x70);
  if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  memcpy((void *)(lVar3 + (long)(int)uVar1 * 0x70 + 0x20),&stack0x00000000,0x70);
  return;
}


