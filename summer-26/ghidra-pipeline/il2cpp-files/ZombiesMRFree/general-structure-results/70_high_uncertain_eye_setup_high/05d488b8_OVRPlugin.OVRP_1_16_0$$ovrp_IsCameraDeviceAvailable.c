/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceAvailable
ENTRY_POINT: 05d488b8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceAvailable
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4,
               uint param_5)

{
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  uStack0000000000000020 = param_3._0_8_;
  uStack0000000000000028 = param_3._8_4_;
  uStack000000000000002c = param_3._12_4_;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uStack000000000000000c = uStack000000000000002c;
  if (param_5 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)param_5 * 0x1c;
    *(undefined8 *)(param_1 + 0x34) = uStack0000000000000034;
    *(ulong *)(param_1 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    *(long *)(param_1 + 0x28) = param_3._8_8_;
    *(undefined8 *)(param_1 + 0x20) = uStack0000000000000020;
    FUN_05d48908();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


