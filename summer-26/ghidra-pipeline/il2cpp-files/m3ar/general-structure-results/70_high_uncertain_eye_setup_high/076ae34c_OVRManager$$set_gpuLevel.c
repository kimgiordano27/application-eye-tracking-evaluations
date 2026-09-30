/*
FUNCTION_NAME: OVRManager$$set_gpuLevel
ENTRY_POINT: 076ae34c
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__set_gpuLevel(code *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x20;
  long *plVar5;
  long *unaff_x23;
  
  (*param_1)();
  plVar5 = *(long **)(unaff_x20 + 0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_076ae3b0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0406ae20(plVar5,*unaff_x23,4);
LAB_076ae3b0:
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  OVRManager__get_isPowerSavingActive();
  return;
}


