/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 04c4316c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4s>__ToArray(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  long *unaff_x19;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  lVar3 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_03775678(param_1);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  uVar6 = **(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x78);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x78);
  in_stack_000000c8 = &stack0x00000030;
  in_stack_00000038 = in_stack_00000050;
  in_stack_00000030 = in_stack_00000048;
  in_stack_00000040 = in_stack_00000058;
  (**(code **)(lVar3 + 0x10))(uVar6,lVar3,&stack0x000000a0,&stack0x000000c0,&stack0x00000030);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  uVar2 = in_stack_00000098;
  uVar6 = in_stack_00000090;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  in_stack_000000c0 = uVar6;
  in_stack_000000c8 = (undefined8 *)uVar2;
  FUN_056ec910(&stack0x00000018,&stack0x000000c0);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *unaff_x19;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  uVar6 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x90);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x90);
  in_stack_00000008 = in_stack_00000020;
  in_stack_00000000 = in_stack_00000018;
  in_stack_00000010 = in_stack_00000028;
  in_stack_000000c0 = uVar7;
  in_stack_000000c8 = (undefined8 *)register0x00000008;
  (**(code **)(lVar3 + 0x10))(uVar6,lVar3,&stack0x00000090,&stack0x000000c0);
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  pauVar4 = (undefined1 (*) [16])thunk_FUN_03799158();
  return *pauVar4;
}


