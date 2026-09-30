/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ReferenceResolver
ENTRY_POINT: 05e26dd0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ReferenceResolver(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  
  FUN_03642964(PTR_DAT_07a153e8);
  *(undefined1 *)(unaff_x23 + 0xd0c) = 1;
  FUN_05e17810();
  if (unaff_x20 != 0) {
    uVar1 = FUN_05d1b84c();
    *(undefined8 *)(unaff_x19 + 0x90) = uVar1;
    thunk_FUN_036b7ad0((undefined8 *)(unaff_x19 + 0x90),uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


