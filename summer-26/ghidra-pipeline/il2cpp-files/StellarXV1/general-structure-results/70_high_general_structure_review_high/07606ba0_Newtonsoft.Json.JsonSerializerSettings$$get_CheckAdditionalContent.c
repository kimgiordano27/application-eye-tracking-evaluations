/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_CheckAdditionalContent
ENTRY_POINT: 07606ba0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07606c28) */

long Newtonsoft_Json_JsonSerializerSettings__get_CheckAdditionalContent(undefined8 *param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *puStack0000000000000018;
  char cStack0000000000000024;
  
  cStack0000000000000024 = '\0';
  puStack0000000000000018 = param_1;
  FUN_076e7928();
  lVar1 = *unaff_x19;
  thunk_FUN_04085a30();
  if (lVar1 == 0) {
    lVar1 = FUN_07606c78();
    thunk_FUN_04085a30();
    *unaff_x19 = lVar1;
    thunk_FUN_040ec700();
  }
  if (cStack0000000000000024 != '\0') {
    thunk_FUN_0408541c(*puStack0000000000000018,0);
  }
  lVar1 = *unaff_x19;
  thunk_FUN_04085a30();
  return lVar1;
}


