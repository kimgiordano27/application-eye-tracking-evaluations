/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 0569eaa8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  ulong unaff_x21;
  long unaff_x22;
  
  while( true ) {
    puVar1 = PTR_DAT_069fb990;
    unaff_x21 = unaff_x21 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x21) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    FUN_0631ec50(*(undefined8 *)(unaff_x22 + unaff_x21 * 8),*(undefined8 *)(unaff_x19 + 0x68),0);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar2 = FUN_0632b414(*(long *)(unaff_x19 + 0x48),0);
    FUN_0631ebb4(uVar4,uVar2,0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x80);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar3 = FUN_0634eb94(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0569eb64;
      FUN_0632237c(*(long *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x19 + 0x88),
                   *(undefined8 *)(unaff_x19 + 0x48),0);
    }
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x19 + 0x30);
    LeanTween__value();
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x19 + 0x48);
    LeanTween__value();
    *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x19 + 0x68);
    LeanTween__value((undefined8 *)(unaff_x19 + 0x70));
    return;
  }
LAB_0569eb64:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


