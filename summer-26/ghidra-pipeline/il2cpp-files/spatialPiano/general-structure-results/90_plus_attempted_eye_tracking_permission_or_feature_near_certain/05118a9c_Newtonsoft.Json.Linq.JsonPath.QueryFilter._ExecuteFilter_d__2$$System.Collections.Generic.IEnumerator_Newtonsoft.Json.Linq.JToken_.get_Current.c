/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryFilter.<ExecuteFilter>d__2$$System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current
ENTRY_POINT: 05118a9c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;data_collection;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_file_logging_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_3
*/


void Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__System_Collections_Generic_IEnumerator<Newtonsoft_Json_Linq_JToken>_get_Current
               (undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  thunk_FUN_02f6670c(param_1);
  uVar1 = FUN_0501716c();
  if ((uVar1 & 1) != 0) {
    uVar2 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
    uVar2 = FUN_02f0880c(uVar2,2);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
    FUN_02a7da48();
    FUN_02a81aa0(uVar2,uVar3);
    FUN_02a81ad4(uVar2,0,uVar3);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
    FUN_02a81aa0(uVar2,uVar3);
    FUN_02a81ad4(uVar2,1,uVar3);
    uVar3 = thunk_FUN_02f6ef30(Oculus_Interaction_Feedback_FeedbackSettings_OverrideEntry_var);
    uVar2 = FUN_051187b0(uVar3,uVar2);
    thunk_FUN_02f6ef30(PTR_DAT_067cb8d0);
    uVar3 = thunk_FUN_02f45270();
    FUN_04fe26bc(uVar3,uVar2,0);
    uVar2 = thunk_FUN_02f6ef30(
                              UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar3,uVar2);
  }
  return;
}


