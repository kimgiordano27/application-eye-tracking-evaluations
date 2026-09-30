/*
FUNCTION_NAME: RootMotion.Dynamics.BehaviourBase$$ContainsRemovablePropMuscle
ENTRY_POINT: 02fde460
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 RootMotion_Dynamics_BehaviourBase__ContainsRemovablePropMuscle(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  void *in_stack_00000008;
  void *in_stack_00000018;
  byte in_stack_00000020;
  void *in_stack_00000030;
  
  DAT_073ac9a0 = thunk_FUN_02fccc2c();
  FUN_02fa4d84();
  FUN_030141e0();
  FUN_02fccad4(*(undefined8 *)(unaff_x22 + 0x6a8));
  lVar2 = FUN_03010164("System");
  if (lVar2 != 0) {
    uVar3 = FUN_02fbec00();
    DAT_073ac948 = thunk_FUN_02fccc2c(uVar3,"System",&DAT_013bafb5);
  }
  lVar2 = FUN_03010164("WindowsRuntimeMetadata");
  if (lVar2 != 0) {
    uVar3 = FUN_02fbec00();
    DAT_073ac918 = thunk_FUN_02fccc2c(uVar3,"Windows.Foundation","IReference`1");
    DAT_073ac920 = thunk_FUN_02fccc2c(uVar3,"Windows.Foundation","IReferenceArray`1");
    DAT_073ac928 = thunk_FUN_02fccc2c(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_073ac928 = thunk_FUN_02fccc2c(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_073ac938 = thunk_FUN_02fccc2c(uVar3,"Windows.Foundation",&DAT_013bafb5);
    DAT_073ac940 = thunk_FUN_02fccc2c(uVar3,"Windows.Foundation","IUriRuntimeClass");
  }
  FUN_030328e8(DAT_073ac738);
  thunk_FUN_02fa4d84();
  lVar2 = FUN_02fbd9d8();
  FUN_02fc15ac();
  FUN_02fc22e4();
  uVar3 = thunk_FUN_0301080c(DAT_073ac7c0);
  lVar4 = thunk_FUN_0301080c(DAT_073ac7b8);
  FUN_03027f90(lVar4 + 0x18,lVar2);
  FUN_03027f90(lVar2,lVar4);
  FUN_03027f90(lVar2 + 8,uVar3);
  *(undefined4 *)(lVar2 + 0x28) = 1;
  uVar3 = FUN_02fdd7c4();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  FUN_02fbfc40();
  FUN_030278b0();
  FUN_030365d4();
  FUN_02febe9c(DAT_073ac738);
  FUN_030328e8(DAT_073ac738);
  uVar3 = FUN_03032b58(DAT_073ac738,"Empty");
  uVar5 = FUN_02febee8();
  FUN_02fdd4e4(uVar3,uVar5);
  DAT_073ac9a8 = 1;
  FUN_02f9f888(&stack0x00000020,"MONO_REFLECTION_SERIALIZER");
  FUN_02f9f888(&stack0x00000008,&DAT_0137fd5d);
  FUN_02f9fa80(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_02f9f888(&stack0x00000020,"MONO_XMLSERIALIZER_THS");
  FUN_02f9f888(&stack0x00000008,&DAT_0139b505);
  FUN_02f9fa80(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_02fbda34(lVar2);
  FUN_02fbda7c(*(undefined8 *)(lVar2 + 0x10));
  FUN_02fa01e0(&stack0x00000020);
  FUN_02fde7ec(&stack0x00000020);
  iVar1 = FUN_02fea0ec();
  if (iVar1 == 0) {
    in_stack_00000008 = (void *)((ulong)&stack0x00000020 | 1);
    if ((in_stack_00000020 & 1) != 0) {
      in_stack_00000008 = in_stack_00000030;
    }
    FUN_02fe9f2c(&stack0x00000008,1);
  }
  FUN_030362d0();
  FUN_03036350();
  FUN_02fc7e6c();
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_02fa4530(&stack0x00000038);
  return 1;
}


