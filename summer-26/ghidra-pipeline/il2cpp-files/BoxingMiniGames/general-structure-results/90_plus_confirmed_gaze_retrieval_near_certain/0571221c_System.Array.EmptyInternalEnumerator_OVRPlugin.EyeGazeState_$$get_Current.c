/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 0571221c
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


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__get_Current
          (undefined4 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack0000000000000008;
  
  lVar1 = *(long *)(param_2 + 0x20);
  uStack0000000000000008 = 0;
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x58);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x58);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    uVar3 = FUN_055fcd94(lVar1,param_1,&stack0x00000008,
                         *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x60));
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      uVar4 = thunk_FUN_0367fe20();
      lVar1 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc(lVar1);
      }
      FUN_057120cc(uVar4,param_1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x70));
      lVar1 = *(long *)(param_2 + 0x20);
      uStack0000000000000008 = uVar4;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x58);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar1 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x58);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      uVar4 = uStack0000000000000008;
      lVar1 = **(long **)(lVar1 + 0xb8);
      if (lVar1 == 0) goto LAB_057123e4;
      lVar2 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      FUN_055fb2b8(lVar1,param_1,uVar4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x78));
    }
    return uStack0000000000000008;
  }
LAB_057123e4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


