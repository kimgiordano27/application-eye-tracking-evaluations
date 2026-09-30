/*
FUNCTION_NAME: UnityThreading.ThreadBase$$RunEnumerator
ENTRY_POINT: 036a2d04
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


undefined8 UnityThreading_ThreadBase__RunEnumerator(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  void *in_stack_00000008;
  void *in_stack_00000018;
  byte in_stack_00000020;
  void *in_stack_00000030;
  
  DAT_07ef6178 = thunk_FUN_0369b914(param_1,param_2,&DAT_01668442);
  lVar2 = FUN_0367f798("WindowsRuntimeMetadata");
  if (lVar2 != 0) {
    uVar3 = FUN_0315f4dc();
    DAT_07ef6148 = thunk_FUN_0369b914(uVar3,"Windows.Foundation","IReference`1");
    DAT_07ef6150 = thunk_FUN_0369b914(uVar3,"Windows.Foundation","IReferenceArray`1");
    DAT_07ef6158 = thunk_FUN_0369b914(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_07ef6158 = thunk_FUN_0369b914(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_07ef6168 = thunk_FUN_0369b914(uVar3,"Windows.Foundation",&DAT_01668442);
    DAT_07ef6170 = thunk_FUN_0369b914(uVar3,"Windows.Foundation","IUriRuntimeClass");
  }
  FUN_036a53e0(DAT_07ef5f68);
  thunk_FUN_035807a4();
  lVar2 = FUN_036915c4();
  FUN_036952d4();
  FUN_03695e58();
  uVar3 = thunk_FUN_0367fe20(DAT_07ef5ff0);
  lVar4 = thunk_FUN_0367fe20(DAT_07ef5fe8);
  FUN_036456f0(lVar4 + 0x18,lVar2);
  FUN_036456f0(lVar2,lVar4);
  FUN_036456f0(lVar2 + 8,uVar3);
  *(undefined4 *)(lVar2 + 0x28) = 1;
  uVar3 = FUN_036a209c();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  FUN_03693834();
  FUN_03644f38();
  FUN_036a90f0();
  FUN_0367d690(DAT_07ef5f68);
  FUN_036a53e0(DAT_07ef5f68);
  uVar3 = UnityEngine_PostProcessing_BuiltinDebugViewsComponent__DepthPass(DAT_07ef5f68,"Empty");
  uVar5 = FUN_0367d6dc();
  UnityThreading_TaskExtension_<>c__DisplayClass27_0__<WhenEnded>b__0(uVar3,uVar5);
  DAT_07ef61d8 = 1;
  FUN_0364996c(&stack0x00000020,"MONO_REFLECTION_SERIALIZER");
  FUN_0364996c(&stack0x00000008,&DAT_016765ec);
  FUN_036758c4(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_0364996c(&stack0x00000020,"MONO_XMLSERIALIZER_THS");
  FUN_0364996c(&stack0x00000008,&DAT_01693638);
  FUN_036758c4(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_0369161c(lVar2);
  FUN_03691664(*(undefined8 *)(lVar2 + 0x10));
  FUN_03675f58(&stack0x00000020);
  FUN_036a304c(&stack0x00000020);
  iVar1 = FUN_03679174();
  if (iVar1 == 0) {
    in_stack_00000008 = (void *)((ulong)&stack0x00000020 | 1);
    if ((in_stack_00000020 & 1) != 0) {
      in_stack_00000008 = in_stack_00000030;
    }
    FUN_03678fe0(&stack0x00000008,1);
  }
  FUN_036a8db8();
  FUN_036a8e38();
  FUN_0367a858();
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_036440f8(&stack0x00000038);
  return 1;
}


