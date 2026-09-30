/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_EqualityComparer
ENTRY_POINT: 04ec5714
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


void Newtonsoft_Json_JsonSerializerSettings__set_EqualityComparer
               (ulong param_1,long param_2,long *param_3)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7eb0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7ee0);
    *(undefined1 *)(unaff_x21 + 0x250) = 1;
  }
  if (param_3 == (long *)0x0) {
    thunk_FUN_02c7737c(PTR_DAT_065c96c8);
    uVar3 = thunk_FUN_02cea894();
    uVar4 = thunk_FUN_02c7737c(PTR_DAT_065e23d8);
    FUN_04e97f6c(uVar3,uVar4,0);
  }
  else {
    if (*(char *)(param_2 + 0x55) == '\0') {
      Newtonsoft_Json_JsonDictionaryAttribute___ctor(param_2,param_3);
      return;
    }
    lVar6 = *param_3;
    bVar1 = *(byte *)(*(long *)PTR_DAT_065f7eb0 + 0x130);
    if ((((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_065f7eb0))
        && (plVar2 = (long *)(**(code **)(lVar6 + 0x238))(param_3,*(undefined8 *)(lVar6 + 0x240)),
           plVar2 != (long *)0x0)) && (*plVar2 == *(long *)PTR_DAT_065f7ee0)) {
      thunk_FUN_02cd342c(param_3,0);
      return;
    }
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar3 = thunk_FUN_02cea894();
    uVar4 = thunk_FUN_02c7737c(PTR_DAT_065f7eb8);
    uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e23d8);
    FUN_04e97fd8(uVar3,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_02c7737c(PTR_DAT_065f7f08);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar3,uVar4);
}


