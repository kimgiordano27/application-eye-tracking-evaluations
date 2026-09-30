/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 079cad80
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


void Newtonsoft_Json_JsonConvert__SerializeObject(long param_1)

{
  long lVar1;
  long *plVar2;
  long *unaff_x20;
  
  lVar1 = (**(code **)(param_1 + 0x238))();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar2 = (long *)FUN_07985144(lVar1,0);
  if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)PTR_DAT_09f402d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_044481e4(plVar2);
  }
  (**(code **)(*unaff_x20 + 0x248))();
  return;
}


