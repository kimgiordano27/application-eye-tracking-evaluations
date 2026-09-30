/*
FUNCTION_NAME: OVRManager$$LateUpdate
ENTRY_POINT: 0530e91c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__LateUpdate(long *param_1)

{
  undefined4 *puVar1;
  long unaff_x19;
  undefined1 in_q3 [16];
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 uStack0000000000000030;
  
  _uStack0000000000000018 = in_q3._8_8_;
  uStack0000000000000014 = in_q3._4_4_;
  uStack0000000000000010 = in_q3._0_4_;
  puVar1 = *(undefined4 **)(*param_1 + 0xb8);
  uStack0000000000000000 = *puVar1;
  uStack0000000000000004 = puVar1[1];
  uStack0000000000000008 = puVar1[2];
  uStack0000000000000030 = 0;
  uStack0000000000000020 = uStack0000000000000010;
  uStack0000000000000024 = uStack0000000000000014;
  FUN_052ca09c();
  if (unaff_x19 != 0) {
    FUN_0530c9f8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8(uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
               uStack000000000000001c,uStack0000000000000020,uStack0000000000000024);
}


