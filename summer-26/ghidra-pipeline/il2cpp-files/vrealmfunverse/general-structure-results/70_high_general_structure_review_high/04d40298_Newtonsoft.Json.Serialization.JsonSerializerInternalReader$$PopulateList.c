/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList
ENTRY_POINT: 04d40298
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000008;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == -1) {
    FUN_04d4044c(param_1,param_2,param_3);
    iVar1 = *(int *)(param_1 + 0x70);
  }
  if ((iVar1 != 0) && ((param_4 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    in_stack_00000008 = 0;
    FUN_04beb8c8(&stack0x00000008,iVar1,0);
    uVar2 = FUN_04c103f8(0,param_2,param_3,0);
    uVar2 = FUN_04beb1b0(in_stack_00000008,uVar2,0,0);
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_063323e0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar2,uVar3);
  }
  return;
}


