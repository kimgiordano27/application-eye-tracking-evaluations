/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$MoveNext
ENTRY_POINT: 06031ee8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__MoveNext(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined4 unaff_w21;
  ulong uVar3;
  long *unaff_x26;
  
  lVar1 = thunk_FUN_03ac73c0();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40();
  }
  if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
    uVar3 = 0;
    uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
    do {
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      System_Array_EmptyInternalEnumerator<OVRLocatable_TrackingSpacePose>___cctor();
      uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
  }
  lVar1 = *unaff_x26;
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar1 = FUN_066ebd18(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_05d5d9b4();
  return;
}


