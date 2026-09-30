/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 04eb881c
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


void Newtonsoft_Json_JsonConvert__SerializeObject(long param_1)

{
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
  undefined8 *unaff_x23;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x910));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7918);
  *(undefined1 *)(unaff_x22 + 0x1e4) = 1;
  uVar1 = *unaff_x23;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f3fb68(uVar1,0);
  if (unaff_x19 != 0) {
    FUN_04e3dfc4();
    FUN_04f3fb68(*unaff_x23,0);
    FUN_04e3dfc4();
    (**(code **)(*unaff_x20 + 0x1c8))();
    FUN_04f3fb68(*unaff_x23,0);
    FUN_04e3dfc4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


