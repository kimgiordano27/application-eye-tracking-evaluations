/*
FUNCTION_NAME: Drawing.RedrawScope$$get_isValid
ENTRY_POINT: 01a5a310
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 Drawing_RedrawScope__get_isValid(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *in_stack_00000008;
  void *in_stack_00000018;
  byte in_stack_00000020;
  void *in_stack_00000030;
  
  if (param_1 != 0) {
    uVar2 = FUN_01a50350();
    DAT_0413ae60 = thunk_FUN_01a504b4(uVar2,"System",&DAT_00d914ec);
  }
  lVar3 = FUN_01a897bc("WindowsRuntimeMetadata");
  if (lVar3 != 0) {
    uVar2 = FUN_01a50350();
    DAT_0413ae30 = thunk_FUN_01a504b4(uVar2,"Windows.Foundation","IReference`1");
    DAT_0413ae38 = thunk_FUN_01a504b4(uVar2,"Windows.Foundation","IReferenceArray`1");
    DAT_0413ae40 = thunk_FUN_01a504b4(uVar2,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_0413ae40 = thunk_FUN_01a504b4(uVar2,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_0413ae50 = thunk_FUN_01a504b4(uVar2,"Windows.Foundation",&DAT_00d914ec);
    DAT_0413ae58 = thunk_FUN_01a504b4(uVar2,"Windows.Foundation","IUriRuntimeClass");
  }
  FUN_01a67a38(DAT_0413ac50);
  thunk_FUN_01a2a4a0();
  lVar3 = FUN_01abfeac();
  FUN_01ac39a4();
  FUN_01ac45ec();
  uVar2 = thunk_FUN_01a89e68(DAT_0413acd8);
  lVar4 = thunk_FUN_01a89e68(DAT_0413acd0);
  FUN_01a84680(lVar4 + 0x18,lVar3);
  FUN_01a84680(lVar3,lVar4);
  FUN_01a84680(lVar3 + 8,uVar2);
  *(undefined4 *)(lVar3 + 0x28) = 1;
  uVar2 = FUN_01a5964c();
  *(undefined8 *)(lVar3 + 0x20) = uVar2;
  FUN_01ac2054();
  FUN_01a83fa0();
  FUN_01a6b7d8();
  FUN_01a47bc4(DAT_0413ac50);
  FUN_01a67a38(DAT_0413ac50);
  uVar2 = FUN_01a67cb0(DAT_0413ac50,"Empty");
  uVar5 = FUN_01a47c10();
  FUN_01a5936c(uVar2,uVar5);
  DAT_0413aec0 = 1;
  FUN_01a28a54(&stack0x00000020,"MONO_REFLECTION_SERIALIZER");
  FUN_01a28a54(&stack0x00000008,&DAT_00d4ae9d);
  FUN_01a49b50(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_01a28a54(&stack0x00000020,"MONO_XMLSERIALIZER_THS");
  FUN_01a28a54(&stack0x00000008,&DAT_00d6b41a);
  FUN_01a49b50(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_01abff08(lVar3);
  FUN_01abff50(*(undefined8 *)(lVar3 + 0x10));
  FUN_01a4a1a4(&stack0x00000020);
  FUN_01a5a674(&stack0x00000020);
  iVar1 = FUN_01a9a4e4();
  if (iVar1 == 0) {
    in_stack_00000008 = (void *)((ulong)&stack0x00000020 | 1);
    if ((in_stack_00000020 & 1) != 0) {
      in_stack_00000008 = in_stack_00000030;
    }
    FUN_01a9a324(&stack0x00000008,1);
  }
  FUN_01a6b428();
  FUN_01a6b4a8();
  FUN_01a28568();
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_01a3c9f8(&stack0x00000038);
  return 1;
}


