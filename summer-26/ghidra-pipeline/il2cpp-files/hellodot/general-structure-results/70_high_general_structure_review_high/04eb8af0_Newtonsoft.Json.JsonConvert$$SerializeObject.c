/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 04eb8af0
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
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  long *plVar5;
  
  plVar5 = *(long **)(unaff_x22 + 0x9f0);
  if ((*(byte *)(unaff_x20 + 0x1ea) & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f2578);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f2580);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f79f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f79f0);
    *(undefined1 *)(unaff_x20 + 0x1ea) = 1;
  }
  lVar2 = *plVar5;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *plVar5;
  }
  puVar1 = PTR_DAT_065f2580;
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar2 = *plVar5;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    lVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065f2578);
    FUN_04a48c38(lVar3,uVar4,*(undefined8 *)PTR_DAT_065f79f8,0);
    *(long *)(*(long *)(*plVar5 + 0xb8) + 8) = lVar3;
  }
  FUN_0345af7c(param_1 + 0x20,lVar3,*(undefined8 *)puVar1);
  return;
}


