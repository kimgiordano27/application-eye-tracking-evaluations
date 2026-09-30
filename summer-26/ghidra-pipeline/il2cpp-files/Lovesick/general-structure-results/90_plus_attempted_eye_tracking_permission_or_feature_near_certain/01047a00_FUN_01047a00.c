/*
FUNCTION_NAME: FUN_01047a00
ENTRY_POINT: 01047a00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_01047a00(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if ((DAT_0377600c & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(OVRPlugin_EyeGazeState___TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6278);
    DAT_0377600c = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_033f6278;
  if (lVar2 != 0) {
    FUN_016f27fc(lVar2,param_1,*(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo,0);
    FUN_00fe0764(*(undefined8 *)puVar1,lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


