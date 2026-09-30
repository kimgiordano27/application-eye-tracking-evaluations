/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$get_TelemetryAnnotation
ENTRY_POINT: 05f45ad0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Manager_WatchManager__get_TelemetryAnnotation
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  ulong uVar1;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  
  uStack00000000000000b4 = param_4._8_8_;
  uVar3 = param_4._0_8_;
  uStack0000000000000008 = param_3._8_8_;
  uStack0000000000000000 = param_3._0_8_;
  uVar2 = param_2._8_8_;
  uStack0000000000000010 = param_2._0_8_;
  while( true ) {
    uStack0000000000000018 = (undefined4)uVar2;
    uStack000000000000001c = (undefined4)((ulong)uVar2 >> 0x20);
    uStack00000000000000b0 = (undefined4)((ulong)uVar3 >> 0x20);
    uStack0000000000000098 = in_stack_00000038;
    uStack0000000000000090 = in_stack_00000030;
    uStack00000000000000a8 = uStack0000000000000048;
    uStack00000000000000ac = uStack000000000000004c;
    uStack00000000000000a0 = in_stack_00000040;
    uStack0000000000000084 = uStack0000000000000024;
    uStack000000000000007c = uStack000000000000001c;
    uStack0000000000000080 = uStack0000000000000020;
    uStack0000000000000060 = uStack0000000000000000;
    uStack0000000000000068 = uStack0000000000000008;
    uStack0000000000000070 = uStack0000000000000010;
    uStack0000000000000078 = uStack0000000000000018;
    uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x24 = unaff_x24 + -1;
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uStack00000000000000b4 = unaff_x23[10];
    in_stack_00000038 = *(undefined8 *)((long)unaff_x23 + 0x34);
    in_stack_00000030 = *(undefined8 *)((long)unaff_x23 + 0x2c);
    in_stack_00000040 = *(undefined8 *)((long)unaff_x23 + 0x3c);
    uStack0000000000000050 = (undefined4)((ulong)unaff_x23[9] >> 0x20);
    uStack0000000000000048 = (undefined4)*(undefined8 *)((long)unaff_x23 + 0x44);
    uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)((long)unaff_x23 + 0x44) >> 0x20);
    uStack0000000000000024 = *(undefined8 *)((long)unaff_x20 + 0x24);
    uStack0000000000000008 = unaff_x20[1];
    uStack0000000000000000 = *unaff_x20;
    uVar2 = unaff_x20[3];
    uStack0000000000000010 = unaff_x20[2];
    uVar3 = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    uStack0000000000000020 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0x1c) >> 0x20);
    unaff_x23 = (undefined8 *)((long)unaff_x23 + 0x2c);
  }
  return 0xffffffff;
}


