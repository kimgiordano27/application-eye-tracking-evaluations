/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ConstructorHandling
ENTRY_POINT: 04f9ca50
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9caec) */
/* WARNING: Removing unreachable block (ram,0x04f9cac0) */

long Newtonsoft_Json_JsonSerializerSettings__get_ConstructorHandling(void)

{
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar1;
  
  if (unaff_x21 == 0) {
    if (*(char *)(unaff_x19 + 0xb0) == '\0') {
      FUN_02d66b58();
      *(undefined1 *)(unaff_x19 + 0xb0) = 1;
    }
    FUN_0506ac34();
    lVar1 = *unaff_x20;
    thunk_FUN_02d6f164();
    if (lVar1 == 0) {
      lVar1 = FUN_04f9cb54();
      thunk_FUN_02d6f164();
      *unaff_x20 = lVar1;
      thunk_FUN_02dd37b4();
    }
  }
  lVar1 = *unaff_x20;
  thunk_FUN_02d6f164();
  return lVar1;
}


