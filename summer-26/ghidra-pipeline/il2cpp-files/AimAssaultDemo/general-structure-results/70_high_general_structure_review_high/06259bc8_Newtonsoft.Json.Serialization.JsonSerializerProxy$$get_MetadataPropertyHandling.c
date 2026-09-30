/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 06259bc8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling
               (double param_1,double param_2,double param_3)

{
  long lVar1;
  char in_NG;
  char in_OV;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = -0.5;
  if (in_NG == in_OV) {
    dVar4 = param_3;
  }
  dVar4 = dVar4 + param_1;
  if ((dVar4 <= param_2) && (DAT_0158b2d8 <= dVar4)) {
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
  uVar3 = thunk_FUN_037a15ac(PTR_DAT_07daf0c8);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar2,uVar3);
}


