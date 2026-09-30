/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 05608a64
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken(void)

{
  short sVar1;
  short in_w8;
  uint in_w9;
  int in_w10;
  short unaff_w19;
  short *unaff_x23;
  ulong unaff_x24;
  
  while( true ) {
    sVar1 = in_w8;
    if (9 < in_w9) {
      sVar1 = unaff_w19;
    }
    unaff_x24 = unaff_x24 >> 4 & 0xfffffff;
    unaff_x23 = unaff_x23 + -1;
    *unaff_x23 = sVar1 + (short)in_w9;
    if ((in_w10 < 0) && ((uint)unaff_x24 == 0)) break;
    in_w9 = (uint)unaff_x24 & 0xf;
    in_w10 = in_w10 + -1;
  }
  return;
}


