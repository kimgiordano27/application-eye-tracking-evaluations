/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 049ace14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 154
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose(void)

{
  char in_NG;
  char in_OV;
  long lVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  
  if (in_NG == in_OV) {
    lVar1 = *(long *)(unaff_x19 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    Newtonsoft_Json_Linq_JObject__LoadAsync(lVar1,0,*(undefined4 *)(lVar1 + 0x18),0);
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0xffffffff00000000;
    Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(unaff_x19 + 0x18),0,unaff_w20,0);
  }
  *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x19 + 0x2c) + 1;
  return;
}


