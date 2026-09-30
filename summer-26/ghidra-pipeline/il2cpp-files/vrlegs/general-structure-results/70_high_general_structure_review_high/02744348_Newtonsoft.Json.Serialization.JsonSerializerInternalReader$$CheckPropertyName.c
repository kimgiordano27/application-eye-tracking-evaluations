/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 02744348
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  undefined8 in_stack_00000000;
  
  if (unaff_w21 - 1U < 9999) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar1 = FUN_0274467c(unaff_w21,unaff_w20);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*unaff_x22);
    }
    if (in_stack_00000000._4_4_ <= iVar1) {
      iVar1 = in_stack_00000000._4_4_;
    }
    lVar2 = FUN_02742c20(unaff_w21,unaff_w20,iVar1);
    return (*unaff_x19 & 0x3fffffffffffffff) % 864000000000 + lVar2 |
           *unaff_x19 & 0xc000000000000000;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
  uVar3 = thunk_FUN_01a89e68();
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfa2f0);
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfa2d0);
  FUN_026ade84(uVar3,uVar4,uVar5,0);
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfa300);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar3,uVar4);
}


