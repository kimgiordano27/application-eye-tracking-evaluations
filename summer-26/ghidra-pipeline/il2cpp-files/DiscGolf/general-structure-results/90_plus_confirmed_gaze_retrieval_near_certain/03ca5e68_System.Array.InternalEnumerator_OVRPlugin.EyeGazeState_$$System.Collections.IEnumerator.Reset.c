/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03ca5e68
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
               (undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  
  while( true ) {
    plVar1 = (long *)FUN_034e9ed4(param_1);
    lVar3 = *(long *)(unaff_x19 + 2);
    if (lVar3 == 0) break;
    if ((ulong)*(uint *)(lVar3 + 0x18) <= unaff_x22 - 8U) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (plVar1 == (long *)0x0) break;
    uVar2 = (**(code **)(*plVar1 + 0x1b8))
                      (plVar1,*(undefined4 *)(lVar3 + unaff_x22 * 4),unaff_w21,
                       *(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18(*(long *)(unaff_x20 + 0x20),unaff_x22 + -7);
      }
      FUN_03ca602c();
      return;
    }
    lVar3 = unaff_x22 + -7;
    unaff_x22 = unaff_x22 + 1;
    if (*unaff_x19 + -1 <= lVar3) {
      return;
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    param_1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


