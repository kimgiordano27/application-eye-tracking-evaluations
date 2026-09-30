/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 033fa088
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_03401924();
  plVar2 = (long *)thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9477);
  FUN_0327742c(plVar2,uVar1,1,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
  if ((uVar3 & 1) != 0) {
    FUN_032fa0b0(plVar2,0);
    if (((unaff_x19 != 0) && (*(int *)(unaff_x19 + 0x10) != 0)) && (in_stack_00000008._4_4_ == 6)) {
      uVar1 = thunk_FUN_01dd295c(StringLiteral_887);
      uVar1 = FUN_01d7d9bc(uVar1,1);
      FUN_01a94b18();
      FUN_01a952f4(uVar1);
      FUN_01a95328(uVar1,0);
      uVar4 = thunk_FUN_01dd295c(StringLiteral_9478);
      uVar1 = FUN_033d6e50(uVar4,uVar1,0);
      thunk_FUN_01dd295c(StringLiteral_9479);
      uVar4 = thunk_FUN_01de27b8();
      FUN_033f3590(uVar4,uVar1);
      uVar1 = thunk_FUN_01dd295c(StringLiteral_9481);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar4,uVar1);
    }
    FUN_0332a064(in_stack_00000008._4_4_);
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_03400608();
  return;
}


