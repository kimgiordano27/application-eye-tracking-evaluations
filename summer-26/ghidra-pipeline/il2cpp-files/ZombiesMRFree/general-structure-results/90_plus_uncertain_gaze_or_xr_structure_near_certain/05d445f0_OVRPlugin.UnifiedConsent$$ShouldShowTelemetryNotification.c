/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryNotification
ENTRY_POINT: 05d445f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_06902bf8(0);
  uStack0000000000000054 = uStack0000000000000014;
  in_stack_00000050 = uStack0000000000000010;
  in_stack_00000048 = uStack0000000000000008;
  uStack000000000000004c = uStack000000000000000c;
  in_stack_00000040 = in_stack_00000000;
  unaff_x19[1] = _uStack0000000000000008;
  *unaff_x19 = in_stack_00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  uVar1 = FUN_05d446c0();
  if ((((uVar1 & 1) == 0) || (*(long *)(unaff_x21 + 0x70) == 0)) ||
     (uVar1 = FUN_05d44720(), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_05d440b4();
    if (*(long *)(unaff_x21 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_05d4b4ec(&stack0x00000040,*(long *)(unaff_x21 + 0x70),unaff_w20,0);
    uVar2 = 1;
    unaff_x19[1] = CONCAT44(uStack000000000000004c,in_stack_00000048);
    *unaff_x19 = in_stack_00000040;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(in_stack_00000050,uStack000000000000004c);
  }
  return uVar2;
}


