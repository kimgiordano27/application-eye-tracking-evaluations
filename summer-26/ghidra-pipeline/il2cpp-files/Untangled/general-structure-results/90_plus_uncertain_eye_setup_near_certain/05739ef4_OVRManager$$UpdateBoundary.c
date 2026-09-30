/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 05739ef4
PROGRAM: Untangled-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__UpdateBoundary(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02f07e70(PTR_DAT_06d58a38);
  *(undefined1 *)(unaff_x21 + 0x92c) = 1;
  if (unaff_x20 != 0) {
    uVar1 = 0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      uVar2 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose();
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_04995948();
      }
    }
    return uVar1 & 1;
  }
  thunk_FUN_02f239f0(PTR_DAT_06d02610);
  uVar3 = thunk_FUN_02ef1808();
  uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d39438);
  FUN_05558508(uVar3,uVar4,0);
  uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d58d48);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar3,uVar4);
}


