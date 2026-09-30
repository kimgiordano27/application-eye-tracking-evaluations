/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$.ctor
ENTRY_POINT: 0592d04c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor(ushort *param_1)

{
  undefined4 in_w8;
  ulong in_x9;
  ulong in_x10;
  ulong in_x11;
  ulong *unaff_x19;
  int unaff_w21;
  
  do {
    param_1 = param_1 + 1;
    if (in_x11 < in_x10) {
      return in_w8;
    }
    do {
      unaff_w21 = unaff_w21 + -1;
      if (unaff_w21 < 0) {
        *unaff_x19 = in_x11;
        return 1;
      }
      if (in_x9 < in_x11) {
        return 0;
      }
      in_x11 = in_x11 * 10;
    } while ((ulong)*param_1 == 0);
    in_w8 = 0;
    in_x10 = in_x11;
    in_x11 = (in_x11 + *param_1) - 0x30;
  } while( true );
}


