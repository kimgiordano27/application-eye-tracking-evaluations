/*
FUNCTION_NAME: OVRPlugin$$GetLayerTextureStageCount
ENTRY_POINT: 03150908
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__GetLayerTextureStageCount(float param_1,float param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  double __x;
  double dVar5;
  double in_stack_00000008;
  
  if (DAT_03fed2db == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed2db = '\x01';
  }
  puVar3 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  dVar5 = (double)param_1;
  dVar4 = modf(dVar5,&stack0x00000008);
  if (0.0 <= param_1) {
    if (dVar4 == 0.5) {
      dVar4 = 1.0;
      goto LAB_0315098c;
    }
    dVar5 = (double)(long)(dVar5 + 0.5);
  }
  else if (dVar4 == -0.5) {
    dVar4 = -1.0;
LAB_0315098c:
    dVar5 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar5 = in_stack_00000008 + dVar4;
    }
  }
  else {
    dVar5 = (double)(long)(dVar5 + -0.5);
  }
  if (DAT_03fed2db == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed2db = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  __x = (double)param_2;
  dVar4 = modf(__x,&stack0x00000008);
  if (0.0 <= param_2) {
    if (dVar4 != 0.5) {
      in_stack_00000008 = (double)(long)(__x + 0.5);
      goto LAB_03150a4c;
    }
    dVar4 = 1.0;
  }
  else {
    if (dVar4 != -0.5) {
      in_stack_00000008 = (double)(long)(__x + -0.5);
      goto LAB_03150a4c;
    }
    dVar4 = -1.0;
  }
  if (((long)in_stack_00000008 & 1U) != 0) {
    in_stack_00000008 = in_stack_00000008 + dVar4;
  }
LAB_03150a4c:
  uVar1 = 0x8000000000000000;
  if (in_stack_00000008 != INFINITY) {
    uVar1 = (ulong)(uint)(int)in_stack_00000008 << 0x20;
  }
  uVar2 = 0x80000000;
  if (dVar5 != INFINITY) {
    uVar2 = (ulong)(uint)(int)dVar5;
  }
  return uVar1 | uVar2;
}


