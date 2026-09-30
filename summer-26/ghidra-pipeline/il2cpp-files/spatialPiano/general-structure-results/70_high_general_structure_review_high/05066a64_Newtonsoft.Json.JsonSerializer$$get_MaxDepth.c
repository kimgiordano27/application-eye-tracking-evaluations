/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_MaxDepth
ENTRY_POINT: 05066a64
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_MaxDepth(ulong param_1,undefined1 param_2)

{
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  
  while( true ) {
    if (param_1 <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    *(undefined1 *)(unaff_x24 + unaff_x23) = param_2;
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x21 == unaff_x23) break;
    param_2 = FUN_04f69818();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
  }
  *(long *)(unaff_x20 + 0x18) = unaff_x22;
  return;
}


