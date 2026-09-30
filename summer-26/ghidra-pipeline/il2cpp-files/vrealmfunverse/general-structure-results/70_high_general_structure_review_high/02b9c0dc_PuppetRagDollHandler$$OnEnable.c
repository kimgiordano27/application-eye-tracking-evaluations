/*
FUNCTION_NAME: PuppetRagDollHandler$$OnEnable
ENTRY_POINT: 02b9c0dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 PuppetRagDollHandler__OnEnable(undefined8 param_1)

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
  
  DAT_066def80 = param_1;
  lVar2 = FUN_02b78fbc("WindowsRuntimeMetadata");
  if (lVar2 != 0) {
    uVar3 = FUN_02b78ea4();
    DAT_066def50 = thunk_FUN_02b94cf8(uVar3,"Windows.Foundation","IReference`1");
    DAT_066def58 = thunk_FUN_02b94cf8(uVar3,"Windows.Foundation","IReferenceArray`1");
    DAT_066def60 = thunk_FUN_02b94cf8(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_066def60 = thunk_FUN_02b94cf8(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_066def70 = thunk_FUN_02b94cf8(uVar3,"Windows.Foundation",&DAT_0104b778);
    DAT_066def78 = thunk_FUN_02b94cf8(uVar3,"Windows.Foundation","IUriRuntimeClass");
  }
  FUN_02b9e7ac(DAT_066ded70);
  thunk_FUN_02b3c83c();
  lVar2 = FUN_02b8a928();
  FUN_02b8e638();
  FUN_02b8f1bc();
  uVar3 = thunk_FUN_02b79644(DAT_066dedf8);
  lVar4 = thunk_FUN_02b79644(DAT_066dedf0);
  FUN_02b3f3ec(lVar4 + 0x18,lVar2);
  FUN_02b3f3ec(lVar2,lVar4);
  FUN_02b3f3ec(lVar2 + 8,uVar3);
  *(undefined4 *)(lVar2 + 0x28) = 1;
  uVar3 = FUN_02b9b468();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  FUN_02b8cb98();
  FUN_02b3ec90();
  FUN_02ba24bc();
  FUN_02b76eac(DAT_066ded70);
  FUN_02b9e7ac(DAT_066ded70);
  uVar3 = FUN_02b9ea2c(DAT_066ded70,"Empty");
  uVar5 = FUN_02b76ef8();
  FUN_02b9b184(uVar3,uVar5);
  DAT_066defe0 = 1;
  FUN_02b43670(&stack0x00000020,"MONO_REFLECTION_SERIALIZER");
  FUN_02b43670(&stack0x00000008,&DAT_0105aac7);
  FUN_02b6f188(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_02b43670(&stack0x00000020,"MONO_XMLSERIALIZER_THS");
  FUN_02b43670(&stack0x00000008,&DAT_0107ab0e);
  FUN_02b6f188(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_02b8a980(lVar2);
  FUN_02b8a9c8(*(undefined8 *)(lVar2 + 0x10));
  FUN_02b6f798(&stack0x00000020);
  FUN_02b9c418(&stack0x00000020);
  iVar1 = FUN_02b729b4();
  if (iVar1 == 0) {
    in_stack_00000008 = (void *)((ulong)&stack0x00000020 | 1);
    if ((in_stack_00000020 & 1) != 0) {
      in_stack_00000008 = in_stack_00000030;
    }
    FUN_02b72820(&stack0x00000008,1);
  }
  FUN_02ba2184();
  FUN_02ba2204();
  FUN_02b74098();
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_02b3de74(&stack0x00000038);
  return 1;
}


