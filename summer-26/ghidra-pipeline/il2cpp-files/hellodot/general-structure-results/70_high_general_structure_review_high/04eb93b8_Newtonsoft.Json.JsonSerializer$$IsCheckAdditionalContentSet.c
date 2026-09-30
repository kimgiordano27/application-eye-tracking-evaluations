/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$IsCheckAdditionalContentSet
ENTRY_POINT: 04eb93b8
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__IsCheckAdditionalContentSet(undefined8 param_1)

{
  long unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  
  FUN_047b3b70();
  *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10) = param_1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a697be == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc868);
    DAT_06a697be = '\x01';
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (unaff_x21 != 0) {
    FUN_04fb0664();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


