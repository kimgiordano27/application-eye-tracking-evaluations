/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 053aea70
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 163
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar3;
  ulong uVar4;
  long *unaff_x26;
  
                    /* try { // try from 053aea70 to 054aeadb has its CatchHandler @ 053ae83c */
  lVar1 = FUN_059f8194();
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4(lVar3);
  }
  if (lVar1 == 0) {
    FUN_05b1040c(0x10,0);
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar2 = thunk_FUN_03010710(lVar1,lVar3);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe9884(lVar1,lVar3);
  }
  if (0 < *(int *)(lVar2 + 0x18)) {
    uVar4 = 0;
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      FUN_053ae36c();
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)*(int *)(lVar2 + 0x18));
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar1 = FUN_05abbc78(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_050e29b8();
  return;
}


