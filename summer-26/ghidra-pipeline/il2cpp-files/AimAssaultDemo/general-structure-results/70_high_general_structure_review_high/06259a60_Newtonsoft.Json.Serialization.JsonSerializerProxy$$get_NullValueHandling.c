/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_NullValueHandling
ENTRY_POINT: 06259a60
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


int Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling
              (ulong param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d8acb8);
    *(undefined1 *)(unaff_x21 + 0xa7a) = 1;
  }
  if (param_3 != (long *)0x0) {
    if (*param_3 != *(long *)PTR_DAT_07d8acb8) {
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar2 = thunk_FUN_037788cc();
      uVar3 = thunk_FUN_037a15ac(PTR_DAT_07daf0b0);
      FUN_061a843c(uVar2,uVar3,0);
      uVar3 = thunk_FUN_037a15ac(PTR_DAT_07daf0b8);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar2,uVar3);
    }
    plVar1 = (long *)thunk_FUN_03778a20(param_3);
    if (*param_2 <= *plVar1) {
      return -(uint)(*param_2 < *plVar1);
    }
  }
  return 1;
}


