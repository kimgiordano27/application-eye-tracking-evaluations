/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 05ac3a70
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(long param_1)

{
  uint in_w9;
  int unaff_w19;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  
                    /* try { // try from 05ac3a74 to 05bc3a77 has its CatchHandler @ 05ac3ccc */
                    /* try { // try from 05ac3a78 to 05bc3b17 has its CatchHandler @ 05ac3194 */
  if ((unaff_w23 < in_w9) && (unaff_w23 + unaff_w19 < *(uint *)(unaff_x22 + 0x18))) {
    *(uint *)(unaff_x22 + (long)(int)(unaff_w23 + unaff_w19) * 4 + 0x20) =
         *(uint *)(param_1 + (ulong)unaff_w23 * 4 + 0x20) &
         (-1 << (ulong)(unaff_w21 & 0x1f) ^ 0xffffffffU);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


