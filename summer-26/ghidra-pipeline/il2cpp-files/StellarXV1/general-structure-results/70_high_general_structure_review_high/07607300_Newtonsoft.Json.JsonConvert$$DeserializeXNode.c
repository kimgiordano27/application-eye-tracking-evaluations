/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 07607300
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


/* WARNING: Removing unreachable block (ram,0x07607380) */

long Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  lVar1 = *unaff_x19;
  thunk_FUN_04085a30();
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092d00b0);
    FUN_075bc4a0();
    thunk_FUN_04085a30();
    *unaff_x19 = lVar1;
    thunk_FUN_040ec700();
  }
  if (in_stack_00000020._4_1_ != '\0') {
    thunk_FUN_0408541c(*in_stack_00000018,0);
  }
  lVar1 = *unaff_x19;
  thunk_FUN_04085a30();
  return lVar1;
}


