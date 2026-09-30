/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 061e73e0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader__ParsePostValue(long param_1)

{
  uint in_w9;
  uint in_w10;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  
  if (in_w9 < in_w10) {
    *(uint *)(unaff_x22 + (long)(int)in_w9 * 4 + 0x20) =
         *(uint *)(param_1 + (unaff_x23 & 0xffffffff) * 4 + 0x20) &
         (-1 << (ulong)(unaff_w21 & 0x1f) ^ 0xffffffffU);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


