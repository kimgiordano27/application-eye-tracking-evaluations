/*
FUNCTION_NAME: CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2Int$$Decrypt
ENTRY_POINT: 01c1e684
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 CodeStage_AntiCheat_ObscuredTypes_ObscuredVector2Int__Decrypt(void)

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
  
  lVar2 = FUN_01c4905c();
  if (lVar2 != 0) {
    uVar3 = FUN_01c1cea4();
    DAT_04545040 = thunk_FUN_01c670b4(uVar3,"System",&DAT_00bd51ea);
  }
  lVar2 = FUN_01c4905c("WindowsRuntimeMetadata");
  if (lVar2 != 0) {
    uVar3 = FUN_01c1cea4();
    DAT_04545010 = thunk_FUN_01c670b4(uVar3,"Windows.Foundation","IReference`1");
    DAT_04545018 = thunk_FUN_01c670b4(uVar3,"Windows.Foundation","IReferenceArray`1");
    DAT_04545020 = thunk_FUN_01c670b4(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_04545020 = thunk_FUN_01c670b4(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_04545030 = thunk_FUN_01c670b4(uVar3,"Windows.Foundation",&DAT_00bd51ea);
    DAT_04545038 = thunk_FUN_01c670b4(uVar3,"Windows.Foundation","IUriRuntimeClass");
  }
  FUN_01c2256c(DAT_04544e30);
  thunk_FUN_01beb28c();
  lVar2 = FUN_01c5e1c0();
  FUN_01c61bdc();
  FUN_01c627b8();
  uVar3 = thunk_FUN_01c496e0(DAT_04544eb8);
  lVar4 = thunk_FUN_01c496e0(DAT_04544eb0);
  FUN_01c75fa8(lVar4 + 0x18,lVar2);
  FUN_01c75fa8(lVar2,lVar4);
  FUN_01c75fa8(lVar2 + 8,uVar3);
  *(undefined4 *)(lVar2 + 0x28) = 1;
  uVar3 = FUN_01c1d9c4();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  FUN_01c60298();
  FUN_01c758c8();
  FUN_01c261d4();
  FUN_01c72d70(DAT_04544e30);
  FUN_01c2256c(DAT_04544e30);
  uVar3 = FUN_01c227e4(DAT_04544e30,"Empty");
  uVar5 = FUN_01c72dbc();
  FUN_01c1d6e4(uVar3,uVar5);
  DAT_045450a0 = 1;
  FUN_01beabd4(&stack0x00000020,"MONO_REFLECTION_SERIALIZER");
  FUN_01beabd4(&stack0x00000008,&DAT_00ba2207);
  FUN_01bfa608(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_01beabd4(&stack0x00000020,"MONO_XMLSERIALIZER_THS");
  FUN_01beabd4(&stack0x00000008,&DAT_00bba2bd);
  FUN_01bfa608(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_01c5e21c(lVar2);
  FUN_01c5e264(*(undefined8 *)(lVar2 + 0x10));
  FUN_01bfac10(&stack0x00000020);
  FUN_01c1e9ec(&stack0x00000020);
  iVar1 = FUN_01bfb838();
  if (iVar1 == 0) {
    in_stack_00000008 = (void *)((ulong)&stack0x00000020 | 1);
    if ((in_stack_00000020 & 1) != 0) {
      in_stack_00000008 = in_stack_00000030;
    }
    FUN_01bfb678(&stack0x00000008,1);
  }
  FUN_01c25ed0();
  FUN_01c25f50();
  FUN_01c0175c();
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_01bea600(&stack0x00000038);
  return 1;
}


