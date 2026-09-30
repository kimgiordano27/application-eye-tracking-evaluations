/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 0314fe30
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueSubmitLayer(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x21;
  
  thunk_FUN_01ad9084(PTR_DAT_03d80210);
  *(undefined1 *)(unaff_x19 + 0xfd2) = 1;
  if (*(char *)(unaff_x21 + 0x70) == '\0') {
    return;
  }
  plVar6 = *(long **)(unaff_x21 + 0x28);
  uVar1 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
  FUN_02fd7524();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_13316) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x14) * 0x10 + 0x138);
        goto LAB_0314fee4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)StringLiteral_13316,0x14);
LAB_0314fee4:
                    /* WARNING: Could not recover jumptable at 0x0314fef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  return;
}


