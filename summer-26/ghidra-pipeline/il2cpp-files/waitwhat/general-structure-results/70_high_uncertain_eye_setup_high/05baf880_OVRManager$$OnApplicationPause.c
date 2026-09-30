/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 05baf880
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationPause
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s11;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s19;
  float in_s20;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
                    /* catch() { ... } // from try @ 05baf834 with catch @ 05baf880
                       catch() { ... } // from try @ 05baf870 with catch @ 05baf880 */
  param_1 = (param_8 + param_7) - param_1;
  fVar4 = (in_s17 + in_s16) - in_s19;
  FUN_069e7254((unaff_s11 * param_3 + param_4) - in_s20,fVar4,param_1,
               (param_5 - param_6) - unaff_s8 * param_3);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_069e6fbc(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + param_1;
      in_stack_00000068 = in_stack_00000068 + fVar4;
      fVar3 = (float)FUN_069e6fbc(*(long *)(unaff_x19 + 0x28),0);
      FUN_069e7098((unaff_s15 + fVar2) - fVar3,in_stack_00000068 - fVar4,
                   in_stack_00000008._4_4_ - param_1,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


