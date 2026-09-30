/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 0569fd00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x23;
  undefined8 *puVar4;
  long unaff_x24;
  undefined8 *puVar5;
  long unaff_x25;
  undefined8 *puVar6;
  undefined2 uStack0000000000000004;
  undefined2 in_stack_00000008;
  undefined2 uStack000000000000000c;
  undefined2 in_stack_00000018;
  undefined2 uStack000000000000001c;
  
  puVar2 = System_Collections_Generic_Stack<BindingRestrictions>_TypeInfo;
  puVar1 = System_Collections_Generic_Stack<Queue<TreePoint>>_TypeInfo;
  puVar6 = *(undefined8 **)(unaff_x25 + 0x9c8);
  puVar5 = *(undefined8 **)(unaff_x24 + 0x9d0);
  puVar4 = *(undefined8 **)(unaff_x23 + 0x9d8);
  if ((DAT_06dbc89e & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_Stack<HashSet<ParameterExpression>>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Stack<Queue<TreePoint>>_TypeInfo);
    FUN_02d965b8(System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Stack<BindingRestrictions>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Stack<CompilerContextData>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Stack<NativeArray<byte>>_TypeInfo);
    DAT_06dbc89e = 1;
  }
  FUN_0552aca4(param_1,0);
  uStack000000000000001c = 0;
  FUN_062fe4d8(&stack0x0000001c,*puVar6,5,0);
  uVar3 = *puVar5;
  in_stack_00000018 = 0;
  *(undefined2 *)(param_1 + 0x10) = uStack000000000000001c;
  FUN_062fe4d8(&stack0x00000018,uVar3,0,0);
  uVar3 = *puVar4;
  uStack000000000000000c = 0;
  *(undefined2 *)(param_1 + 0x12) = in_stack_00000018;
  FUN_062fe4d8(&stack0x0000000c,uVar3,3,0);
  uVar3 = *(undefined8 *)puVar1;
  in_stack_00000008 = 0;
  *(undefined2 *)(param_1 + 0x14) = uStack000000000000000c;
  FUN_062fe4d8(&stack0x00000008,uVar3,0xc,0);
  uVar3 = *(undefined8 *)puVar2;
  uStack0000000000000004 = 0;
  *(undefined2 *)(param_1 + 0x16) = in_stack_00000008;
  FUN_062fe4d8(&stack0x00000004,uVar3,0xd,0);
  *(undefined2 *)(param_1 + 0x18) = uStack0000000000000004;
  FUN_062fe4d8();
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return;
}


