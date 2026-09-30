/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 017012d0
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


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (param_1 != 0) {
    if (DAT_037780a3 == '\0') {
                    /* try { // try from 017012e8 to 01801313 has its CatchHandler @ 017014a4 */
      thunk_FUN_00d48444(PTR_DAT_033ee010);
      DAT_037780a3 = '\x01';
    }
    uVar1 = FUN_015fd038();
                    /* try { // try from 01701314 to 0180131f has its CatchHandler @ 01701498 */
    uVar1 = FUN_017811ec(uVar1,*(undefined4 *)(unaff_x20 + 0x10),param_2,0x1000,0);
    return uVar1;
  }
  return 0;
}


