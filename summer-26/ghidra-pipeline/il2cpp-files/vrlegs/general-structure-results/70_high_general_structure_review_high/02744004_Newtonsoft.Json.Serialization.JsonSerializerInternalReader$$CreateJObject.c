/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJObject
ENTRY_POINT: 02744004
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong in_x9;
  
  if (param_1 < in_x9) {
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02743e6c();
    return;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
  uVar1 = thunk_FUN_01a89e68();
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cd7718);
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfa2e0);
  FUN_026ade84(uVar1,uVar2,uVar3,0);
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cfa2e8);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar1,uVar2);
}


