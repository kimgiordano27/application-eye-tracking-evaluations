/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 05e92bc8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


byte Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList(undefined8 *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  undefined4 uStack000000000000000c;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  byte bStack0000000000000057;
  byte bStack0000000000000077;
  byte bStack0000000000000107;
  undefined8 in_stack_00000128;
  
  FUN_03156be4(*param_1);
  bStack0000000000000077 = FUN_05e7b18c(&stack0x00000120,0);
  bStack0000000000000077 = bStack0000000000000077 & 1;
  if (bStack0000000000000077 == 0) {
    *(undefined4 *)(unaff_x19 + 0x4c) = 0;
  }
  else {
    *(undefined4 *)(unaff_x19 + 0x4c) = 8;
  }
  iVar1 = *(int *)(unaff_x19 + 0x4c);
  if (iVar1 == 0) {
    bVar2 = FUN_05e92e80(*(undefined8 *)(unaff_x19 + 0x90));
    if ((bVar2 & 1) == 0) {
      *(undefined4 *)(unaff_x19 + 0x4c) = 8;
    }
    else {
      *(undefined4 *)(unaff_x19 + 0x4c) = 0;
    }
    iVar1 = *(int *)(unaff_x19 + 0x4c);
    if (iVar1 != 0) goto joined_r0x05e92c8c;
    bVar2 = FUN_05e8c8d0(*(undefined8 *)(unaff_x19 + 0x90));
    if ((bVar2 & 1) == 0) {
      *(undefined4 *)(unaff_x19 + 0x4c) = 8;
    }
    else {
      *(undefined4 *)(unaff_x19 + 0x4c) = 0;
    }
    iVar1 = *(int *)(unaff_x19 + 0x4c);
    if (iVar1 != 0) goto joined_r0x05e92c8c;
    bStack0000000000000107 = 1;
  }
  else {
joined_r0x05e92c8c:
    if (iVar1 != 8) {
      return in_stack_00000128._7_1_;
    }
    bStack0000000000000107 =
         FUN_05e931c8(*(undefined8 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x8c),
                      *(undefined8 *)(unaff_x19 + 0x98));
    bStack0000000000000107 = bStack0000000000000107 & 1;
  }
  bStack0000000000000057 = FUN_05c947dc(0);
  bStack0000000000000057 = bStack0000000000000057 & 1;
  if (bStack0000000000000057 == 0) {
    *(undefined4 *)(unaff_x19 + 0x4c) = 9;
  }
  else {
    *(undefined4 *)(unaff_x19 + 0x4c) = 0;
  }
  iVar1 = *(int *)(unaff_x19 + 0x4c);
  if (iVar1 == 0) {
    FUN_03156be4(*(undefined8 *)PTR_DAT_079f5558);
    uVar4 = FUN_05e9ea5c(0);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
    if (*(long *)(unaff_x19 + 0x68) == 0) {
      *(undefined4 *)(unaff_x19 + 0x4c) = 10;
    }
    else {
      *(undefined4 *)(unaff_x19 + 0x4c) = 0;
    }
    if (*(int *)(unaff_x19 + 0x4c) != 0) {
      if (*(int *)(unaff_x19 + 0x4c) != 10) {
        return in_stack_00000128._7_1_;
      }
      FUN_03156be4(*(undefined8 *)PTR_DAT_079fd3f8);
      uVar4 = FUN_05e9eaac(0);
      FUN_03156bd4(uVar4);
      uStack000000000000000c = FUN_05e93134(uVar4);
      uVar3 = FUN_05e8dfac(*(undefined8 *)(unaff_x19 + 0x90));
      FUN_05c94944(uStack000000000000000c,0,uVar3,0);
      goto LAB_05e92e4c;
    }
    lVar5 = *(long *)(unaff_x19 + 0x68);
    FUN_03156bd4(lVar5);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    FUN_03156bd4(uVar4);
    uStack000000000000002c = FUN_05e93134(uVar4);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x68);
    FUN_03156bd4(uVar4);
    uStack000000000000001c = FUN_05e8dfac(uVar4);
    uVar3 = FUN_05e8dfac(*(undefined8 *)(unaff_x19 + 0x90));
    FUN_05c94944(uStack000000000000002c,uStack000000000000001c,uVar3,0);
    *(undefined4 *)(unaff_x19 + 0x4c) = 9;
    iVar1 = *(int *)(unaff_x19 + 0x4c);
  }
  if (iVar1 != 9) {
    return in_stack_00000128._7_1_;
  }
LAB_05e92e4c:
  *(undefined4 *)(unaff_x19 + 0x4c) = 1;
  return bStack0000000000000107 & 1;
}


