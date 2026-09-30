/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameImageFlipped
ENTRY_POINT: 07403e88
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameImageFlipped(long param_1)

{
  long lVar1;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x22;
  float fVar2;
  undefined8 uStack0000000000000020;
  float fStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  
  param_1 = param_1 + unaff_x22 * 0x1c;
  uStack0000000000000038 = *(undefined4 *)(param_1 + 0x38);
  uStack0000000000000030 = *(undefined8 *)(param_1 + 0x30);
  fVar2 = *(float *)(unaff_x20 + 0x3c);
  fStack0000000000000028 = (float)*(undefined8 *)(param_1 + 0x28);
  uStack0000000000000020 =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar2,
                (float)*(undefined8 *)(param_1 + 0x20) * fVar2);
  _fStack0000000000000028 =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20),fStack0000000000000028 * fVar2
               );
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
    OVRLocatable_TrackingSpacePose__ComputeWorldPosition
              (&stack0x00000040,&stack0x00000020,lVar1 + unaff_x22 * 0x1c + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


