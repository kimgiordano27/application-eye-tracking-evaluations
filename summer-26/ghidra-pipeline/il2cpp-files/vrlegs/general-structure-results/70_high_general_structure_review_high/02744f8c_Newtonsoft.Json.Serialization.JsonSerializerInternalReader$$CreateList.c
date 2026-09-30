/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 02744f8c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    param_1 = *unaff_x21;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
  if (*(int *)(*(long *)PTR_DAT_03cd3d80 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd3d80);
  }
  lVar2 = FUN_026a8bfc(uVar5,2,0);
  if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc4b20);
  }
  uVar1 = lVar2 + unaff_x19;
  if ((long)uVar1 < 0) {
    uVar1 = uVar1 + 864000000000;
  }
  if (uVar1 < unaff_x22) {
    in_stack_00000018 = 0;
    FUN_02742b00(&stack0x00000018);
    return in_stack_00000018;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
  uVar5 = thunk_FUN_01a89e68();
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfa360);
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfa2b0);
  FUN_026a7658(uVar5,uVar3,uVar4,0);
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfa368);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar5,uVar3);
}


