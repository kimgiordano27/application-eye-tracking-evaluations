/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 04024990
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int *unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  
  while( true ) {
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_02feb2c4();
    }
    plVar1 = (long *)FUN_03b188f4(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x80));
    lVar3 = *(long *)(unaff_x19 + 4);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if (plVar1 == (long *)0x0) break;
    uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(lVar3 + unaff_x22 * 8 + 0x20));
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
    param_1 = *(long *)(unaff_x20 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


