/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 058fb83c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    lVar1 = 0;
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_070c21f8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar1 = FUN_059a3144(in_stack_00000008,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05941350(0x26,0);
    }
    uVar2 = 0x10000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}


