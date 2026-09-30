/*
FUNCTION_NAME: AkSoundEnginePINVOKE$$CSharp_AkDeviceSettings_uMaxCachePinnedBytes_set
ENTRY_POINT: 02cd1808
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


undefined8 AkSoundEnginePINVOKE__CSharp_AkDeviceSettings_uMaxCachePinnedBytes_set(void)

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
  
  FUN_02c6e1cc();
  FUN_02cee0c4();
  FUN_02cc2068(*(undefined8 *)(unaff_x22 + 0x290));
  lVar2 = FUN_02cea210("System");
  if (lVar2 != 0) {
    uVar3 = FUN_02c74e40();
    DAT_06a85530 = thunk_FUN_02cc21c0(uVar3,"System",&DAT_013c4220);
  }
  lVar2 = FUN_02cea210("WindowsRuntimeMetadata");
  if (lVar2 != 0) {
    uVar3 = FUN_02c74e40();
    DAT_06a85500 = thunk_FUN_02cc21c0(uVar3,"Windows.Foundation","IReference`1");
    DAT_06a85508 = thunk_FUN_02cc21c0(uVar3,"Windows.Foundation","IReferenceArray`1");
    DAT_06a85510 = thunk_FUN_02cc21c0(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_06a85510 = thunk_FUN_02cc21c0(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
    DAT_06a85520 = thunk_FUN_02cc21c0(uVar3,"Windows.Foundation",&DAT_013c4220);
    DAT_06a85528 = thunk_FUN_02cc21c0(uVar3,"Windows.Foundation","IUriRuntimeClass");
  }
  FUN_02c72368(DAT_06a85320);
  thunk_FUN_02c6e1cc();
  lVar2 = FUN_02cab5f8();
  FUN_02caf0f4();
  AkSoundEnginePINVOKE__CSharp_GetDefaultPlatformInitSettings();
  uVar3 = thunk_FUN_02cea894(DAT_06a853a8);
  lVar4 = thunk_FUN_02cea894(DAT_06a853a0);
  FUN_02cd6f1c(lVar4 + 0x18,lVar2);
  FUN_02cd6f1c(lVar2,lVar4);
  FUN_02cd6f1c(lVar2 + 8,uVar3);
  *(undefined4 *)(lVar2 + 0x28) = 1;
  uVar3 = FUN_02cd0b60();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  FUN_02cad7b0();
  FUN_02cd683c();
  FUN_02c76154();
  FUN_02ce1354(DAT_06a85320);
  FUN_02c72368(DAT_06a85320);
  uVar3 = FUN_02c725e0(DAT_06a85320,"Empty");
  uVar5 = FUN_02ce13a0();
  FUN_02cd0880(uVar3,uVar5);
  DAT_06a85590 = 1;
  FUN_02c6e7a4(&stack0x00000020,"MONO_REFLECTION_SERIALIZER");
  FUN_02c6e7a4(&stack0x00000008,&DAT_0138d7fb);
  FUN_02cca930(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_02c6e7a4(&stack0x00000020,"MONO_XMLSERIALIZER_THS");
  FUN_02c6e7a4(&stack0x00000008,&DAT_013a6b8e);
  FUN_02cca930(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_02cab654(lVar2);
  FUN_02cab69c(*(undefined8 *)(lVar2 + 0x10));
  FUN_02ccaf3c(&stack0x00000020);
  FUN_02cd1b88(&stack0x00000020);
  iVar1 = FUN_02c985fc();
  if (iVar1 == 0) {
    in_stack_00000008 = (void *)((ulong)&stack0x00000020 | 1);
    if ((in_stack_00000020 & 1) != 0) {
      in_stack_00000008 = in_stack_00000030;
    }
    FUN_02c9843c(&stack0x00000008,1);
  }
  FUN_02c75da4();
  FUN_02c75e24();
  FUN_02cbe69c();
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_02c700e0(&stack0x00000038);
  return 1;
}


