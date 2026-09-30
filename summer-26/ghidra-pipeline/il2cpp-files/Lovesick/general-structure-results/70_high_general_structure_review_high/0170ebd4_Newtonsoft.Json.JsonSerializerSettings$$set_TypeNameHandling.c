/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameHandling
ENTRY_POINT: 0170ebd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(undefined8 *param_1)

{
  long *plVar1;
  int in_w9;
  long *unaff_x19;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01780344(uVar2,0);
  plVar1 = (long *)(**(code **)(*unaff_x19 + 0x268))();
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != *(long *)Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__)
    {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar1);
    }
  }
  return plVar1;
}


