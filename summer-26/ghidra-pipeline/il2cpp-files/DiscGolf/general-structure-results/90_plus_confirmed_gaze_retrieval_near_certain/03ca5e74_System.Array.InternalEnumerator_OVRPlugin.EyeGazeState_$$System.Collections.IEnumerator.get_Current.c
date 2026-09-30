/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03ca5e74
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_get_Current
               (long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  int *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  
  do {
    if ((ulong)*(uint *)(param_1 + 0x18) <= unaff_x22 - 8U) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (param_2 == (long *)0x0) break;
    uVar1 = (**(code **)(*param_2 + 0x1b8))
                      (param_2,*(undefined4 *)(param_1 + unaff_x22 * 4),unaff_w21,
                       *(undefined8 *)(*param_2 + 0x1c0));
    if ((uVar1 & 1) != 0) {
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18(*(long *)(unaff_x20 + 0x20),unaff_x22 + -7);
      }
      FUN_03ca602c();
      return;
    }
    lVar2 = unaff_x22 + -7;
    unaff_x22 = unaff_x22 + 1;
    if (*unaff_x19 + -1 <= lVar2) {
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    param_2 = (long *)FUN_034e9ed4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80));
    param_1 = *(long *)(unaff_x19 + 2);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


