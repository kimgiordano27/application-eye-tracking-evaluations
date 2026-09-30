/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnDisable
ENTRY_POINT: 06d7d5cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnDisable(void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w23;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  ulong in_stack_00000020;
  uint in_stack_00000028;
  ulong in_stack_00000030;
  uint in_stack_00000038;
  
  FUN_06d7d6a4();
  if (unaff_w23 - 2U < 2) {
    if ((((*(long *)(unaff_x19 + 0x58) == 0) || (lVar1 = FUN_06d7e248(), lVar1 == 0)) ||
        (FUN_085eb410(uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
                      uStack000000000000001c,lVar1,0), *(long *)(unaff_x19 + 0x60) == 0)) ||
       (lVar1 = FUN_06d7e248(), lVar1 == 0)) goto LAB_06d7d6a0;
    FUN_085eb410(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                 uStack000000000000000c,lVar1,0);
    if (unaff_w23 == 3) goto LAB_06d7d630;
  }
  else if (unaff_w23 == 1) {
LAB_06d7d630:
    unaff_d8 = in_stack_00000030 & 0xffffffff;
    unaff_d11 = (ulong)in_stack_00000038;
    unaff_d10 = in_stack_00000020 & 0xffffffff;
    unaff_d13 = (ulong)in_stack_00000028;
    unaff_d9 = in_stack_00000030 >> 0x20;
    unaff_d12 = in_stack_00000020 >> 0x20;
  }
  if ((*(long *)(unaff_x19 + 0x58) != 0) &&
     (FUN_06d7e270(unaff_d8,unaff_d9,unaff_d11), *(long *)(unaff_x19 + 0x60) != 0)) {
    FUN_06d7e270(unaff_d10,unaff_d12,unaff_d13);
    return;
  }
LAB_06d7d6a0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


