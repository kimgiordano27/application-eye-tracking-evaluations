/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 05f20d54
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart
               (long param_1,undefined1 param_2 [16])

{
  ulong uVar1;
  long lVar2;
  undefined8 in_x9;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  uStack0000000000000068 = param_2._8_8_;
  uStack0000000000000060 = param_2._0_8_;
  while( true ) {
    uStack0000000000000048 = in_stack_00000008;
    uStack0000000000000040 = in_stack_00000000;
    uStack0000000000000050 = in_stack_00000010;
    uStack0000000000000070 = in_x9;
    uVar1 = (**(code **)(param_1 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    lVar2 = unaff_x21 + (long)(int)unaff_w19 * (long)unaff_w24;
    in_x9 = *(undefined8 *)(lVar2 + 0x30);
    uStack0000000000000068 = *(undefined8 *)(lVar2 + 0x28);
    uStack0000000000000060 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000010 = unaff_x20[2];
    in_stack_00000008 = unaff_x20[1];
    in_stack_00000000 = *unaff_x20;
    param_1 = *unaff_x22;
  }
  return 0xffffffff;
}


