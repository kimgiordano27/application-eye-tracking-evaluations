/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06031f38
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__System_Collections_IEnumerator_get_Current
               (void)

{
  long lVar1;
  undefined8 in_x9;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  undefined8 uStack0000000000000020;
  
  while( true ) {
    uStack0000000000000020 = in_x9;
    System_Array_EmptyInternalEnumerator<OVRLocatable_TrackingSpacePose>___cctor();
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x23) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    in_x9 = *(undefined8 *)(unaff_x24 + 0x2c);
    unaff_x24 = unaff_x24 + 0x1c;
  }
  lVar1 = *unaff_x26;
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar1 = FUN_066ebd18(0);
  if (lVar1 != 0) {
    FUN_05d5d9b4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


