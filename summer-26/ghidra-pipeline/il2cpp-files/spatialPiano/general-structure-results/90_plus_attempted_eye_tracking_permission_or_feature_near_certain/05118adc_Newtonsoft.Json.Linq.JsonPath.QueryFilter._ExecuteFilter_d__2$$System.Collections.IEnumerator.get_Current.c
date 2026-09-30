/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryFilter.<ExecuteFilter>d__2$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05118adc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 93
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;data_collection;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_file_logging_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_02a81aa0();
  FUN_02a81ad4();
  FUN_02a81aa0();
  FUN_02a81ad4();
  thunk_FUN_02f6ef30(Oculus_Interaction_Feedback_FeedbackSettings_OverrideEntry_var);
  uVar1 = FUN_051187b0();
  thunk_FUN_02f6ef30(PTR_DAT_067cb8d0);
  uVar2 = thunk_FUN_02f45270();
  FUN_04fe26bc(uVar2,uVar1,0);
  uVar1 = thunk_FUN_02f6ef30(
                            UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar2,uVar1);
}


