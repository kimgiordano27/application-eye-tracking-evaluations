/*
FUNCTION_NAME: OVRManager$$get_gpuLevel
ENTRY_POINT: 076ae2c0
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__get_gpuLevel(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  
  FUN_0403162c(PTR_DAT_08f6a1b8);
  *(undefined1 *)(unaff_x21 + 0x7f) = 1;
  puVar1 = PTR_DAT_08f6a1b8;
  if (*(char *)(unaff_x20 + 0x6c) == '\0') {
    return;
  }
  plVar6 = *(long **)(unaff_x20 + 0x28);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f6a1b8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076ae348;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f6a1b8,0);
LAB_076ae348:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
    plVar6 = *(long **)(unaff_x20 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_076ae3b0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar1,4);
LAB_076ae3b0:
      (*(code *)*puVar2)(plVar6,puVar2[1]);
      OVRManager__get_isPowerSavingActive();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


