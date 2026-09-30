/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnEnvironmentRaycasterCreated$$Invoke
ENTRY_POINT: 06e0e828
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated__Invoke
               (undefined8 param_1,undefined8 param_2)

{
  bool in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x9;
  undefined8 in_x10;
  
  if (!in_ZR) {
    in_x10 = in_x9;
  }
  uVar1 = thunk_FUN_03d1e194(in_x10);
  thunk_FUN_03d1e194(PTR_DAT_091aa550);
  uVar2 = thunk_FUN_03d2ef40();
  Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar2,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar2,param_2);
}


