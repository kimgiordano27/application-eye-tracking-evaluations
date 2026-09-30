/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteType
ENTRY_POINT: 0675d56c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ushort * Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType
                   (ushort *param_1)

{
  uint in_w9;
  uint uVar1;
  ushort *unaff_x19;
  ushort *unaff_x20;
  
  do {
    param_1 = param_1 + 1;
    if (unaff_x20 < unaff_x19) {
      uVar1 = (uint)*unaff_x20;
    }
    else {
      uVar1 = 0;
    }
    if (uVar1 != in_w9) {
      if (uVar1 != 0x20) {
        return (ushort *)0x0;
      }
      if (in_w9 != 0xa0) {
        return (ushort *)0x0;
      }
    }
    in_w9 = (uint)*param_1;
    unaff_x20 = unaff_x20 + 1;
    if (in_w9 == 0) {
      return unaff_x20;
    }
  } while( true );
}


