/*
FUNCTION_NAME: OVRManager$$set_suggestedGpuPerfLevel
ENTRY_POINT: 0745c640
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_suggestedGpuPerfLevel(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  
  puVar2 = (undefined8 *)FUN_03d8f370();
  (*(code *)*puVar2)();
  FUN_0745c804();
  plVar6 = *(long **)(unaff_x19 + 0x28);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
                    /* try { // try from 0745c6b8 to 0755c6e3 has its CatchHandler @ 0745c868 */
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_0745c6c8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*unaff_x21,6);
LAB_0745c6c8:
    iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (iVar1 != 2) {
      return;
    }
    if (*(int *)(unaff_x19 + 0x40) == 0) {
      if (*(char *)(unaff_x19 + 0x50) != '\0') {
        return;
      }
      if (*(char *)(unaff_x19 + 0x60) != '\0') {
        return;
      }
      plVar6 = *(long **)(unaff_x19 + 0x38);
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0921fcf8) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0745c7e4;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_0921fcf8,0);
LAB_0745c7e4:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
        FUN_0745c804();
        return;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x40) != 1) {
        return;
      }
      plVar6 = *(long **)(unaff_x19 + 0x38);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0921fcf8) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0745c764;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_0921fcf8,0);
LAB_0745c764:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
        FUN_0745c8ac();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


