/*
FUNCTION_NAME: Drawing.DrawingManager$$.ctor
ENTRY_POINT: 01ee81e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
Drawing_DrawingManager___ctor(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

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
  
  DAT_04842820 = thunk_FUN_01ed93b0(param_1,param_3 + 0x98b,param_4 + 0xaeb);
  FUN_01ebea64();
  FUN_01f151fc();
  FUN_01ed9258(*(undefined8 *)(unaff_x22 + 0x528));
  lVar2 = FUN_01f11124("System");
  if (lVar2 != 0) {
    uVar3 = FUN_01ed924c();
    DAT_048427c8 = thunk_FUN_01ed93b0(uVar3,"System",&DAT_00cc3df8);
  }
  lVar2 = FUN_01f11124("WindowsRuntimeMetadata");
  if (lVar2 != 0) {
    uVar3 = FUN_01ed924c();
    DAT_04842798 = thunk_FUN_01ed93b0(uVar3,"Windows.Foundation","IReference`1");
    DAT_048427a0 = thunk_FUN_01ed93b0(uVar3,"Windows.Foundation","IReferenceArray`1");
    DAT_048427a8 = thunk_FUN_01ed93b0(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_048427a8 = thunk_FUN_01ed93b0(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_048427b8 = thunk_FUN_01ed93b0(uVar3,"Windows.Foundation",&DAT_00cc3df8);
    DAT_048427c0 = thunk_FUN_01ed93b0(uVar3,"Windows.Foundation","IUriRuntimeClass");
  }
  FUN_01ef6484(DAT_048425b8);
  thunk_FUN_01ebea64();
  lVar2 = FUN_01f397d8();
  FUN_01f3d140();
  FUN_01f3ddb8();
  uVar3 = thunk_FUN_01f117cc(DAT_04842640);
  lVar4 = thunk_FUN_01f117cc(DAT_04842638);
  FUN_01ee0fe4(lVar4 + 0x18,lVar2);
  FUN_01ee0fe4(lVar2,lVar4);
  FUN_01ee0fe4(lVar2 + 8,uVar3);
  *(undefined4 *)(lVar2 + 0x28) = 1;
  uVar3 = FUN_01ee7550();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  FUN_01f3b7cc();
  FUN_01ee0904();
  FUN_01efa1e0();
  FUN_01ecbb1c(DAT_048425b8);
  FUN_01ef6484(DAT_048425b8);
  uVar3 = FUN_01ef66f4(DAT_048425b8,"Empty");
  uVar5 = FUN_01ecbb68();
  FUN_01ee7270(uVar3,uVar5);
  DAT_04842828 = 1;
  FUN_01ec05fc(&stack0x00000020,"MONO_REFLECTION_SERIALIZER");
  FUN_01ec05fc(&stack0x00000008,&DAT_00c9ceb4);
  FUN_01f09ab8(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_01ec05fc(&stack0x00000020,"MONO_XMLSERIALIZER_THS");
  FUN_01ec05fc(&stack0x00000008,&DAT_00caf6ff);
  FUN_01f09ab8(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_01f39834(lVar2);
  FUN_01f3987c(*(undefined8 *)(lVar2 + 0x10));
  FUN_01f0a090(&stack0x00000020);
  FUN_01ee8578(&stack0x00000020);
  iVar1 = FUN_01ec05b4();
  if (iVar1 == 0) {
    in_stack_00000008 = (void *)((ulong)&stack0x00000020 | 1);
    if ((in_stack_00000020 & 1) != 0) {
      in_stack_00000008 = in_stack_00000030;
    }
    FUN_01ec03f4(&stack0x00000008,1);
  }
  FUN_01ef9e30();
  FUN_01ef9eb0();
  FUN_01eed268();
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_01ebe210(&stack0x00000038);
  return 1;
}


