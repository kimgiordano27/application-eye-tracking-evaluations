/*
FUNCTION_NAME: OVRManager$$add_TrackingAcquired
ENTRY_POINT: 05cf8ef0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_TrackingAcquired
               (float param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  
  if (param_4 != 0) {
    FUN_06904354(unaff_s8 + param_1,in_stack_00000020,unaff_s9 + param_3,param_4,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_05cf59f0(uStack000000000000001c,uStack0000000000000018,uStack0000000000000014,
                   *(long *)(unaff_x19 + 0x20),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_05cf598c(uStack0000000000000010,uStack000000000000000c,uStack0000000000000008,
                     in_stack_00000000._4_4_,*(long *)(unaff_x19 + 0x20),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


