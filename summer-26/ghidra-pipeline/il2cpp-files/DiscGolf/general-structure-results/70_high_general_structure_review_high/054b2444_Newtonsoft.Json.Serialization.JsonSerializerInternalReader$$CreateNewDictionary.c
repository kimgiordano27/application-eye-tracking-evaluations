/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 054b2444
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((DAT_06dbacb6 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a21558);
    DAT_06dbacb6 = 1;
  }
  if (param_1 != (long *)0x0) {
    if (*param_1 != *(long *)PTR_DAT_06a21558) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(param_1);
    }
    plVar1 = param_1 + 0xe;
    lVar2 = *plVar1;
    *plVar1 = 0;
    LeanTween__value(plVar1,0);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x054b24b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),param_1,*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


