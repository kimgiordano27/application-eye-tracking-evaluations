/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 0746f9b8
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


undefined8 Newtonsoft_Json_JsonSerializer__CreateDefault(short param_1)

{
  long lVar1;
  uint unaff_w19;
  undefined8 unaff_x20;
  
  if (param_1 == 0x7c) {
    if (*(int *)(*(long *)PTR_DAT_08f9ff38 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar1 = System_Globalization_ThaiBuddhistCalendar__GetEra();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar1 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    unaff_x20 = *(undefined8 *)(lVar1 + (ulong)unaff_w19 * 8 + 0x20);
  }
  return unaff_x20;
}


