/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0665286c
PROGRAM: Hyper-libil2cpp.so
SCORE: 152
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,int param_2)

{
  int in_w8;
  long lVar1;
  int *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar2;
  
  iVar2 = unaff_w21;
  if (param_2 < in_w8) {
    do {
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      FUN_066526c8();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *unaff_x19);
  }
  *unaff_x19 = unaff_w21;
  if (1 < unaff_w21) {
    lVar1 = *(long *)(unaff_x19 + 4);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) < unaff_w21 + -1)) {
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04980b34();
      }
      FUN_059af6e8(unaff_x19 + 4,unaff_w21 + -1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x60));
      return;
    }
  }
  return;
}


