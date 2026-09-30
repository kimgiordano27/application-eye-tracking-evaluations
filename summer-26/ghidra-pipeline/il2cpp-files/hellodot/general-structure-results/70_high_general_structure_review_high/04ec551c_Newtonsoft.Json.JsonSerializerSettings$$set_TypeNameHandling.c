/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameHandling
ENTRY_POINT: 04ec551c
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


void Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7f00);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c98c8);
  *(undefined1 *)(unaff_x22 + 0x25d) = 1;
  puVar1 = PTR_DAT_065c98c8;
  FUN_04f7383c();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  *(long *)(unaff_x19 + 0x40) = unaff_x20;
  puVar2 = PTR_DAT_065f7f00;
  if (unaff_x20 != 0) {
    uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065dc838);
    FUN_04ea04f4(uVar3,0,*(undefined8 *)puVar2,0);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  }
  uVar3 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04f93908(uVar3,0,0);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  return;
}


