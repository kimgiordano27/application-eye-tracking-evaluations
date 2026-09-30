/*
FUNCTION_NAME: OVRManager$$UpdateInsightPassthrough
ENTRY_POINT: 05739c8c
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


uint OVRManager__UpdateInsightPassthrough(void)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  FUN_02f07e70(PTR_DAT_06d58a38);
  *(undefined1 *)(unaff_x21 + 0x928) = 1;
  in_stack_00000008 = 0;
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_05739cf8();
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar1 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                      (*(long *)(unaff_x19 + 0x18),uVar2,&stack0x00000008,
                       *(undefined8 *)PTR_DAT_06d58a38);
  }
  return uVar1 & 1;
}


