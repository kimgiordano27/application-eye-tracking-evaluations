/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResLevel
ENTRY_POINT: 07c5bca0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_tiledMultiResLevel(float param_1,float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar2 = *(float *)(unaff_x19 + 0x28);
    FUN_07c57588(param_1 * fVar2,param_2 * fVar2,param_3 * fVar2,&stack0x00000030,
                 *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x10),4);
    lVar1 = *(long *)(unaff_x19 + 0x38);
    if (lVar1 != 0) {
      in_stack_00000068 = in_stack_00000038;
      in_stack_00000060 = in_stack_00000030;
      in_stack_00000078 = in_stack_00000048;
      in_stack_00000070 = in_stack_00000040;
      in_stack_00000080 = in_stack_00000050;
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),&stack0x00000060,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


