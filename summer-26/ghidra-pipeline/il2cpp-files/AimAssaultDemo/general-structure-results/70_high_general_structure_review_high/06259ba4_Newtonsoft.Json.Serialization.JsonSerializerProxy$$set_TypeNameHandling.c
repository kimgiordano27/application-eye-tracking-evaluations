/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameHandling
ENTRY_POINT: 06259ba4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling
               (ulong param_1,double param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong in_x9;
  double dVar4;
  
  if (param_1 < (in_x9 & 0xffffffffffff | 0x7ff0000000000000)) {
    dVar4 = -0.5;
    if (0.0 <= param_2) {
      dVar4 = 0.5;
    }
    dVar4 = dVar4 + (double)param_3 * param_2;
    if ((dVar4 <= DAT_0158afa0) && (DAT_0158b2d8 <= dVar4)) {
      lVar1 = 0;
      if (dVar4 != INFINITY) {
        lVar1 = (long)dVar4 * 10000;
      }
      return lVar1;
    }
    thunk_FUN_037a15ac(PTR_DAT_07d89240);
    uVar2 = thunk_FUN_037788cc();
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07daf090);
    FUN_06251dac(uVar2,uVar3);
  }
  else {
    thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
    uVar2 = thunk_FUN_037788cc();
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07daf0c0);
    FUN_061a843c(uVar2,uVar3,0);
  }
  uVar3 = thunk_FUN_037a15ac(PTR_DAT_07daf0c8);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar2,uVar3);
}


