/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$remove_Error
ENTRY_POINT: 055df8e8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__remove_Error(void)

{
  undefined4 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  undefined4 unaff_w22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  
  if (unaff_w24 < unaff_w21) {
    FUN_056265f0(0);
    unaff_w24 = *(uint *)(unaff_x26 + 8);
  }
  if ((*(ushort *)(*(long *)(unaff_x25 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_0451d8b4(&stack0x00000010,unaff_x20 + (long)(int)unaff_w21 * 2,unaff_w24 - unaff_w21,
               *unaff_x23);
  *unaff_x19 = unaff_w22;
  return 1;
}


