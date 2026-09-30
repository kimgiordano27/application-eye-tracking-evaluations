/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 05a7fbbc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializerSettings__get_TypeNameAssemblyFormatHandling(long param_1)

{
  uint uVar1;
  uint unaff_w20;
  uint unaff_w22;
  long unaff_x23;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (unaff_w20 < uVar1) {
    *(undefined1 *)(param_1 + unaff_x23 + 0x20) = 1;
    return uVar1 == unaff_w22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


