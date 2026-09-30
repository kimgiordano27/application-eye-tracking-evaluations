/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateBackground
ENTRY_POINT: 05ab4598
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateBackground
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0322bef4(param_1);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  lVar4 = *param_2;
  if (lVar4 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
    lVar4 = *param_2;
  }
  lVar5 = *(long *)(param_5 + 0x20);
  lVar2 = param_2[1];
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4();
  }
  uVar3 = FUN_0400edd4(lVar4,param_3,param_4,(int)lVar2,uVar1,
                       *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x50));
  return ~uVar3 >> 0x1f;
}


