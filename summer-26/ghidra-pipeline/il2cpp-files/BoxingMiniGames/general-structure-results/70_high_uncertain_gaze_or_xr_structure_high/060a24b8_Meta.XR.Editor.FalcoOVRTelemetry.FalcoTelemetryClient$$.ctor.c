/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.FalcoTelemetryClient$$.ctor
ENTRY_POINT: 060a24b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_Editor_FalcoOVRTelemetry_FalcoTelemetryClient___ctor(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 uStack000000000000004c;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  uVar1 = FUN_060a2d5c();
  if ((uVar1 & 1) != 0) {
    uStack0000000000000054 = unaff_x19[3];
    uStack000000000000004c = (undefined4)unaff_x19[2];
    uVar1 = FUN_060a2de0();
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + 0xa8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      in_stack_00000088 = unaff_x19[1];
      in_stack_00000080 = *unaff_x19;
      in_stack_00000098 = unaff_x19[3];
      in_stack_00000090 = unaff_x19[2];
      uStack0000000000000074 = unaff_x19[3];
      in_stack_000000a8 = unaff_x19[5];
      in_stack_000000a0 = unaff_x19[4];
      in_stack_00000070 = (undefined4)((ulong)unaff_x19[2] >> 0x20);
      in_stack_00000060 = *(undefined8 *)((long)unaff_x19 + 4);
      in_stack_00000068 = (undefined4)*(undefined8 *)((long)unaff_x19 + 0xc);
      uStack000000000000006c = (undefined4)((ulong)*(undefined8 *)((long)unaff_x19 + 0xc) >> 0x20);
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),&stack0x00000080,&stack0x00000060,
                 *(undefined8 *)(lVar2 + 0x28));
    }
  }
  return;
}


