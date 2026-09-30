/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03803d60
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  int in_w8;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long unaff_x21;
  long *plVar5;
  
  plVar5 = *(long **)(unaff_x21 + 0xe28);
  if (in_w8 == 0) {
    thunk_FUN_036a1978();
    param_1 = *unaff_x20;
  }
  lVar3 = *plVar5;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x60);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978(lVar3);
  }
  uVar1 = FUN_071c0684(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *unaff_x20;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *unaff_x20;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x60);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar4 = FUN_071bd1a0(lVar3,0);
    lVar3 = *plVar5;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar3);
    }
    FUN_071c7290(uVar4,0);
  }
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar3 = *unaff_x20;
  }
  puVar2 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x60);
  *puVar2 = 0;
  thunk_FUN_036b7ad0(puVar2,0);
  return;
}


