/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 040249b0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__Dispose(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  int *unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  
  do {
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if (param_2 == (long *)0x0) break;
    uVar2 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(param_1 + unaff_x22 * 8 + 0x20))
    ;
    unaff_x22 = unaff_x22 + 1;
    if ((uVar2 & 1) != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      FUN_04024b78();
      return;
    }
    if ((long)(*unaff_x19 + -1) <= (long)unaff_x22) {
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    param_2 = (long *)FUN_03b188f4(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x80));
    param_1 = *(long *)(unaff_x19 + 4);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


