/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 01700ea8
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


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 unaff_w19;
  long unaff_x20;
  
  if (DAT_037780a3 == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033ee010);
    DAT_037780a3 = '\x01';
  }
  uVar2 = FUN_015fd038();
  uVar1 = FUN_017811ec(uVar2,*(undefined4 *)(unaff_x20 + 0x10),unaff_w19,0x1200,0);
  if (0xff < uVar1) {
    FUN_00acb0a4(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
                    /* WARNING: Subroutine does not return */
    FUN_016fc928();
  }
  return;
}


