/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.cctor
ENTRY_POINT: 05712284
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
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  long unaff_x20;
  long lVar4;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0367c9fc();
  }
  lVar4 = **(long **)(param_2 + 0xb8);
  if (lVar4 != 0) {
    lVar1 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    uVar2 = FUN_055fcd94(lVar4,unaff_w19,&stack0x00000008,
                         *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x60));
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      uVar3 = thunk_FUN_0367fe20();
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      FUN_057120cc(uVar3,unaff_w19,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x70));
      lVar4 = *(long *)(unaff_x20 + 0x20);
      in_stack_00000008 = uVar3;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x58);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x58);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      uVar3 = in_stack_00000008;
      lVar4 = **(long **)(lVar4 + 0xb8);
      if (lVar4 == 0) goto LAB_057123e4;
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      FUN_055fb2b8(lVar4,unaff_w19,uVar3,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x78));
    }
    return in_stack_00000008;
  }
LAB_057123e4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


