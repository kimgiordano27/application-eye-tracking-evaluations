/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 01bbd004
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if ((bRam000000000722bcc7 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06daaf50);
    thunk_FUN_0159f088(PTR_DAT_06db5530);
    bRam000000000722bcc7 = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000004c = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar5 = *(long *)(param_1 + 0x48);
    do {
      if (lVar5 == 0) {
LAB_01bbd128:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar3 = FUN_01bbc6e0(lVar5,8);
      if ((int)uVar3 < 0) {
        return 0;
      }
      lVar5 = *(long *)(param_1 + 0x48);
      if (lVar5 == 0) goto LAB_01bbd128;
      *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) >> 8;
      *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + -8;
      iVar4 = *(int *)(param_1 + 0x18) + -8;
      *(uint *)(param_1 + 0x14) = uVar3 | *(int *)(param_1 + 0x14) << 8;
      *(int *)(param_1 + 0x18) = iVar4;
    } while (0 < iVar4);
  }
  puVar2 = PTR_DAT_06db5530;
  puVar1 = PTR_DAT_06daaf50;
  if (*(long *)(param_1 + 0x70) == 0) {
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
  }
  else {
    uVar6 = FUN_0187ee98(*(long *)(param_1 + 0x70),0);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_03f82cf0(&stack0x00000010,uVar6,*(undefined8 *)puVar1);
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000030 = in_stack_00000010;
  }
  in_stack_00000058 = in_stack_00000038;
  in_stack_00000050 = in_stack_00000030;
  iVar4 = FUN_03f82d08(&stack0x00000050,*(undefined8 *)puVar2);
  if (*(int *)(param_1 + 0x14) == iVar4) {
    *(undefined4 *)(param_1 + 0x10) = 0xc;
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x70);
  uVar6 = thunk_FUN_0159f088(PTR_DAT_06e41920);
  if (lVar5 == 0) {
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
  }
  else {
    uVar6 = thunk_FUN_0159f088(PTR_DAT_06e41920);
    uVar7 = FUN_0187ee98(lVar5,0);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    uVar8 = thunk_FUN_0159f088(PTR_DAT_06daaf50);
    FUN_03f82cf0(&stack0x00000010,uVar7,uVar8);
    in_stack_00000028 = in_stack_00000018;
    in_stack_00000020 = in_stack_00000010;
  }
  in_stack_00000058 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000020;
  uVar7 = thunk_FUN_0159f088(PTR_DAT_06db5530);
  uStack000000000000004c = thunk_FUN_03f82d08(&stack0x00000050,uVar7);
  uVar7 = FUN_032194f0(&stack0x0000004c,0);
  uVar8 = FUN_032194f0((int *)(param_1 + 0x14),0);
  uVar9 = thunk_FUN_0159f088(PTR_DAT_06e1bb00);
  uVar6 = FUN_02526f2c(uVar6,uVar7,uVar9,uVar8,0);
  thunk_FUN_0159f088(PTR_DAT_06da2b60);
  uVar7 = thunk_FUN_015d056c();
  FUN_011a9bc8();
  FUN_04437484(uVar7,uVar6,0);
                    /* try { // try from 01bbd234 to 01cbd44f has its CatchHandler @ 01bbd234
                       catch() { ... } // from try @ 01bbd234 with catch @ 01bbd234
                       catch() { ... } // from try @ 01bbd518 with catch @ 01bbd234
                       catch() { ... } // from try @ 01bbd5d4 with catch @ 01bbd234
                       catch() { ... } // from try @ 01bbd6a8 with catch @ 01bbd234
                       catch() { ... } // from try @ 01bbd6bc with catch @ 01bbd234 */
  uVar6 = thunk_FUN_0159f088(PTR_DAT_06dd9878);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar7,uVar6);
}


