/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObjectInternal
ENTRY_POINT: 0746f9ec
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonConvert__SerializeObjectInternal
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint unaff_w19;
  
  lVar1 = System_Globalization_ThaiBuddhistCalendar__GetEra(param_2,*param_1,param_4,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
    return *(undefined8 *)(lVar1 + (ulong)unaff_w19 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


