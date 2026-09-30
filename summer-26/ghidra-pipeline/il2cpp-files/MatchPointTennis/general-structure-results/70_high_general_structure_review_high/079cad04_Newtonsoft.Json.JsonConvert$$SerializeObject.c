/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 079cad04
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  long *unaff_x20;
  
  *(undefined1 *)(param_1 + -0xa8) = 0;
  thunk_FUN_044bb4b4();
  uVar1 = (**(code **)(*unaff_x19 + 0x208))();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = (**(code **)(*unaff_x19 + 0x218))();
  if (lVar2 == 0) {
LAB_079cadec:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar3 = (long *)FUN_079b8f48(lVar2,0);
  if ((plVar3 == (long *)0x0) || (*plVar3 == *(long *)PTR_DAT_09f40388)) {
    (**(code **)(*unaff_x20 + 0x228))();
    lVar2 = (**(code **)(*unaff_x19 + 0x238))();
    if (lVar2 == 0) goto LAB_079cadec;
    plVar3 = (long *)FUN_07985144(lVar2,0);
    if ((plVar3 == (long *)0x0) || (*plVar3 == *(long *)PTR_DAT_09f402d8)) {
      (**(code **)(*unaff_x20 + 0x248))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_044481e4(plVar3);
}


