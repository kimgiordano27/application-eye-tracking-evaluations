/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 0710fbf4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  FUN_0713a2f0();
  if ((DAT_0941c22a & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69d78);
    DAT_0941c22a = 1;
  }
  uVar1 = *(undefined8 *)PTR_DAT_08e810f0;
  if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0710fcf0(uVar1);
  if (unaff_x19 != 0) {
    FUN_06ffe4e4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


