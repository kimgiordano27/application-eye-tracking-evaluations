/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ReferenceLoopHandling
ENTRY_POINT: 079d787c
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


void Newtonsoft_Json_JsonSerializerSettings__set_ReferenceLoopHandling(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int unaff_w20;
  undefined *puVar3;
  
  thunk_FUN_044adef4(*(undefined8 *)(param_1 + 0xbb0));
  uVar1 = thunk_FUN_0448520c();
  puVar3 = PTR_DAT_09f28360;
  if (unaff_w20 == 0) {
    puVar3 = PTR_DAT_09f28368;
  }
  uVar2 = thunk_FUN_044adef4(puVar3);
  FUN_07a3e070(uVar1,uVar2,0);
  uVar2 = thunk_FUN_044adef4(PTR_DAT_09f42dd8);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar1,uVar2);
}


