/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ContractResolver
ENTRY_POINT: 07612d4c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_ContractResolver(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w20;
  long unaff_x21;
  float unaff_s8;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if ((*(byte *)(unaff_x21 + 0xde3) & 1) == 0) {
    FUN_04077588(PTR_DAT_09287040);
    *(undefined1 *)(unaff_x21 + 0xde3) = 1;
  }
  FUN_076bca34(param_1,0);
  puVar2 = PTR_DAT_09285980;
  if (-1 < unaff_w20) {
    if ((1.0 <= unaff_s8) && (unaff_s8 <= 10.0)) {
      uVar3 = FUN_04077674(*(undefined8 *)PTR_DAT_09287040,unaff_w20);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      thunk_FUN_040ec700((undefined8 *)(param_1 + 0x10),uVar3);
      *(undefined8 *)(param_1 + 0x18) = 0;
      iVar1 = -0x80000000;
      if (unaff_s8 * 100.0 != INFINITY) {
        iVar1 = (int)(unaff_s8 * 100.0);
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(int *)(param_1 + 0x24) = iVar1;
      return;
    }
    uStack000000000000000c = 1;
    uVar3 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&stack0x0000000c);
    in_stack_00000008 = 10;
    uVar4 = thunk_FUN_040b4b34(*(undefined8 *)(puVar2 + 0x48),&stack0x00000008);
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092d8638);
    uVar3 = FUN_074c1ac4(uVar5,uVar3,uVar4,0);
    thunk_FUN_040dedf8(PTR_DAT_09288c08);
    uVar4 = thunk_FUN_040b4efc();
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092d8640);
    FUN_075d19bc(uVar4,uVar5,uVar3,0);
    uVar3 = thunk_FUN_040dedf8(PTR_DAT_092d8630);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar4,uVar3);
  }
  thunk_FUN_040dedf8(PTR_DAT_09288c08);
  uVar3 = thunk_FUN_040b4efc();
  uVar4 = thunk_FUN_040dedf8(PTR_DAT_092b9f00);
  uVar5 = thunk_FUN_040dedf8(PTR_DAT_092b6ff8);
  FUN_075d19bc(uVar3,uVar4,uVar5,0);
  uVar4 = thunk_FUN_040dedf8(PTR_DAT_092d8630);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar3,uVar4);
}


