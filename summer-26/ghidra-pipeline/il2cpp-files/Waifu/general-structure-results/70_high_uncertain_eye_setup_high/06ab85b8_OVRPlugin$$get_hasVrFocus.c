/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 06ab85b8
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasVrFocus(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  
  FUN_0335b6c8(param_1 + 0x668,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x1b0) = 1;
  plVar5 = *(long **)(unaff_x20 + 0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == DAT_083cc668) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 10) * 0x10 + 0x138);
        goto FUN_06ab862c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083cc668,10);
FUN_06ab862c:
                    /* WARNING: Could not recover jumptable at 0x06ab8644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5);
  return;
}


