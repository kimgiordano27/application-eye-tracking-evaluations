/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 06acccb0
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking2(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong *in_x9;
  ulong in_x10;
  ulong in_x11;
  long unaff_x19;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(in_x9,0x10);
    if (bVar3) {
      *in_x9 = in_x11;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
    in_x11 = *in_x9 | in_x10;
  }
  *(undefined8 *)(unaff_x19 + 0xf4) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0xec) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0xe4) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 0x10c) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x104) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0xfc) = in_stack_00000000;
  uVar5 = *(undefined8 *)(param_1 + 0x130);
  uVar4 = FUN_03398a84(DAT_083c4708);
  FUN_04ab05b0(uVar4,uVar5,DAT_083f1268);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar4;
  if (*(int *)(unaff_x22 + 0xcd0) != 0) {
    puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x130U >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x130U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (in_stack_00000048 != 0) {
    FUN_05062970();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


