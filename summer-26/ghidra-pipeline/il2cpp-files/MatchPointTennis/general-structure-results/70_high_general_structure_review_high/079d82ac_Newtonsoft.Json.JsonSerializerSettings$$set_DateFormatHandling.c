/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateFormatHandling
ENTRY_POINT: 079d82ac
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


long Newtonsoft_Json_JsonSerializerSettings__set_DateFormatHandling(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((DAT_0a524d57 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f286d8);
    DAT_0a524d57 = 1;
  }
  plVar3 = (long *)(param_1 + 0x40);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
                    /* try { // try from 079d82e0 to 07ad82e7 has its CatchHandler @ 079d84a4 */
    uVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f286d8);
    FUN_07a80df4(uVar2,0);
    FUN_044819d0(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}


