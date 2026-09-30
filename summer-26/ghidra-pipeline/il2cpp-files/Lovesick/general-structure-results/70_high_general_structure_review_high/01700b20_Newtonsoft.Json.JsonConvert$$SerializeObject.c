/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 01700b20
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  thunk_FUN_00d48444();
  *(undefined1 *)(unaff_x20 + 0x984) = 1;
  puVar1 = StringLiteral_2672;
  if (unaff_x19 == 0) {
    in_stack_00000008 = 0;
    FUN_0174cb44(&stack0x00000008,0,0);
  }
  else {
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_017319b4(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    in_stack_00000008 = FUN_0174fbf0();
  }
  return in_stack_00000008;
}


