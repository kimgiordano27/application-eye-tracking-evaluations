/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Update
ENTRY_POINT: 05ab88c4
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


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Update
               (long *param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  lVar5 = *param_1;
  if (lVar5 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
    lVar5 = *param_1;
  }
  uVar6 = param_2[2];
  uVar8 = param_2[1];
  uVar7 = *param_2;
  lVar4 = *(long *)(param_3 + 0x20);
  lVar2 = param_1[1];
  uVar1 = *(undefined4 *)((long)param_1 + 0xc);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  in_stack_00000020 = uVar7;
  in_stack_00000028 = uVar8;
  in_stack_00000030 = uVar6;
  uVar3 = FUN_0400f4e0(lVar5,&stack0x00000020,(int)lVar2,uVar1,
                       *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50));
  return ~uVar3 >> 0x1f;
}


