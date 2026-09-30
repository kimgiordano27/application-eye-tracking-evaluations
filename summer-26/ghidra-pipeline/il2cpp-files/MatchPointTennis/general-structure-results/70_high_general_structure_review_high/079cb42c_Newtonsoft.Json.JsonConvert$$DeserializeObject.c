/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 079cb42c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (*(char *)(unaff_x19 + 0x10) == '\0') {
    if (unaff_x20 != 0) {
      thunk_FUN_04456600();
      *(long *)(unaff_x19 + 0x30) = unaff_x20;
      thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x30));
      return;
    }
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar1 = thunk_FUN_0448520c();
    uVar2 = thunk_FUN_044adef4(PTR_DAT_09f42490);
    FUN_07996cc8(uVar1,uVar2,0);
  }
  else {
    thunk_FUN_044adef4(PTR_DAT_09f20bb0);
    uVar1 = thunk_FUN_0448520c();
    uVar2 = thunk_FUN_044adef4(PTR_DAT_09f42488);
    FUN_07a3e070(uVar1,uVar2,0);
  }
  uVar2 = thunk_FUN_044adef4(PTR_DAT_09f42498);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar1,uVar2);
}


