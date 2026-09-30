/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_StringEscapeHandling
ENTRY_POINT: 05617268
PROGRAM: Untangled-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_StringEscapeHandling(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  do {
    lVar1 = FUN_0564ec4c(unaff_x20,0);
    *(undefined8 *)(unaff_x21 + lVar1 * 8) = 0;
    lVar1 = FUN_0564ec4c(unaff_x20,0);
    *(undefined8 *)(unaff_x22 + lVar1 * 8) = 0;
    lVar1 = FUN_0564ec4c(unaff_x20,0);
    *(undefined8 *)(unaff_x23 + lVar1 * 8) = 0;
    lVar1 = FUN_0564ec4c(unaff_x20,0);
    unaff_x19[lVar1 + -4] = 0;
    lVar1 = FUN_0564ec4c(unaff_x20,0);
    unaff_x19[lVar1 + -5] = 0;
    lVar1 = FUN_0564ec4c(unaff_x20,0);
    unaff_x19[lVar1 + -6] = 0;
    lVar1 = FUN_0564ec4c(unaff_x20,0);
    unaff_x19[lVar1 + -7] = 0;
    lVar1 = FUN_0564ec4c(unaff_x20,0);
    unaff_x20 = unaff_x20 - 8;
    unaff_x19[lVar1 + -8] = 0;
  } while (7 < unaff_x20);
  if (unaff_x20 < 4) {
    if (unaff_x20 < 2) {
      if (unaff_x20 == 0) {
        return;
      }
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MaxDepth;
    }
  }
  else {
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
    lVar1 = FUN_0564ec4c(unaff_x20,0);
    unaff_x19[lVar1 + -3] = 0;
    lVar1 = FUN_0564ec4c(unaff_x20,0);
    unaff_x19[lVar1 + -2] = 0;
  }
  unaff_x19[1] = 0;
  lVar1 = FUN_0564ec4c(unaff_x20,0);
  unaff_x19[lVar1 + -1] = 0;
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MaxDepth:
  *unaff_x19 = 0;
  return;
}


