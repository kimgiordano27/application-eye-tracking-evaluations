/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 04c42868
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(ulong param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
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
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_03775678();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  uVar7 = **(undefined8 **)(lVar2 + 0xb8);
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  FUN_056ec910(&stack0x00000048,&stack0x00000080);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x60);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  uVar5 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x58);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03775678(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x58);
  in_stack_00000088 = &stack0x00000030;
  in_stack_00000038 = in_stack_00000050;
  in_stack_00000030 = in_stack_00000048;
  in_stack_00000040 = in_stack_00000058;
  in_stack_00000080 = uVar7;
  (**(code **)(lVar2 + 0x10))(uVar5,lVar2,&stack0x00000070,&stack0x00000080,&stack0x00000030);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  uVar5 = in_stack_00000068;
  uVar7 = in_stack_00000060;
  uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  in_stack_00000080 = uVar7;
  in_stack_00000088 = (undefined8 *)uVar5;
  FUN_056ec910(&stack0x00000018,&stack0x00000080);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x78);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  uVar7 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x70);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03775678(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x70);
  in_stack_00000008 = in_stack_00000020;
  in_stack_00000000 = in_stack_00000018;
  in_stack_00000010 = in_stack_00000028;
  in_stack_00000080 = uVar6;
  in_stack_00000088 = (undefined8 *)register0x00000008;
  (**(code **)(lVar2 + 0x10))(uVar7,lVar2,&stack0x00000060,&stack0x00000080);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  pauVar3 = (undefined1 (*) [16])thunk_FUN_03799158();
  return *pauVar3;
}


