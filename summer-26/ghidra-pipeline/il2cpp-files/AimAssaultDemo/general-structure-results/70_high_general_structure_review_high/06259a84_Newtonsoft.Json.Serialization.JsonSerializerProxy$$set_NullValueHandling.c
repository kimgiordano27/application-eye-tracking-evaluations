/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_NullValueHandling
ENTRY_POINT: 06259a84
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__set_NullValueHandling(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long *unaff_x20;
  
  if (*unaff_x20 == *(long *)PTR_DAT_07d8acb8) {
    plVar2 = (long *)thunk_FUN_03778a20();
    if (*plVar2 < *unaff_x19) {
      iVar1 = 1;
    }
    else {
      iVar1 = -(uint)(*unaff_x19 < *plVar2);
    }
    return iVar1;
  }
  thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
  uVar3 = thunk_FUN_037788cc();
  uVar4 = thunk_FUN_037a15ac(PTR_DAT_07daf0b0);
  FUN_061a843c(uVar3,uVar4,0);
  uVar4 = thunk_FUN_037a15ac(PTR_DAT_07daf0b8);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar3,uVar4);
}


