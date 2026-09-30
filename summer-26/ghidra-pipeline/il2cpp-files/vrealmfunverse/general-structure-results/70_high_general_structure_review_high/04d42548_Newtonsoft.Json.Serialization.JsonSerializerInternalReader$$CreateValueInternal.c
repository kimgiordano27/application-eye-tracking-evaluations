/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateValueInternal
ENTRY_POINT: 04d42548
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (uVar1 == *(uint *)(param_1 + 0x40)) {
    uVar2 = FUN_04d42598();
    return uVar2;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x3c) = uVar1 + 1;
  if (lVar3 != 0) {
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      return (ulong)*(byte *)(lVar3 + (int)uVar1 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


