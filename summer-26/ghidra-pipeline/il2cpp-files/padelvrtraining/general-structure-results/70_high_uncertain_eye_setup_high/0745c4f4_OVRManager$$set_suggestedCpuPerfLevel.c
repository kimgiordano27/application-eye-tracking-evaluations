/*
FUNCTION_NAME: OVRManager$$set_suggestedCpuPerfLevel
ENTRY_POINT: 0745c4f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_suggestedCpuPerfLevel(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  
  FUN_03d2d2b0(PTR_DAT_091fc8e8);
  *(undefined1 *)(unaff_x20 + 0x7e8) = 1;
  puVar1 = PTR_DAT_091fc8e8;
  if ((*(char *)(unaff_x19 + 0x60) != '\0') && (*(char *)(unaff_x19 + 0x50) != '\0')) {
    plVar7 = *(long **)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x19 + 0x60) = 0;
    if (plVar7 == (long *)0x0) goto LAB_0745c800;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 0745c544 to 0755c54f has its CatchHandler @ 0745c214 */
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_0745c57c;
        }
                    /* try { // try from 0745c550 to 0755c557 has its CatchHandler @ 0745c558 */
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0745c4dc with catch @ 0745c558
                       catch(type#2 @ 00000000) { ... } // from try @ 0745c550 with catch @ 0745c558
                        */
      } while (uVar5 != 0);
    }
                    /* try { // try from 0745c55c to 0755c657 has its CatchHandler @ 0745c55c
                       catch() { ... } // from try @ 0745c55c with catch @ 0745c55c
                       catch() { ... } // from try @ 0745c760 with catch @ 0745c55c
                       catch() { ... } // from try @ 0745c840 with catch @ 0745c55c
                       catch() { ... } // from try @ 0745c848 with catch @ 0745c55c
                       catch() { ... } // from try @ 0745c918 with catch @ 0745c55c */
    puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar1,6);
LAB_0745c57c:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (iVar2 != 1) {
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_0745c800;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_0745c5e8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar1,6);
LAB_0745c5e8:
      iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (iVar2 != 0) goto LAB_0745c670;
    }
    if (*(int *)(unaff_x19 + 0x40) == 0) {
      plVar7 = *(long **)(unaff_x19 + 0x38);
      if (plVar7 == (long *)0x0) goto LAB_0745c800;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0921fcf8) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0745c65c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_0921fcf8,0);
LAB_0745c65c:
      (*(code *)*puVar3)(plVar7,puVar3[1]);
      FUN_0745c804();
    }
  }
LAB_0745c670:
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_0745c6c8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar1,6);
LAB_0745c6c8:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (iVar2 != 2) {
      return;
    }
    if (*(int *)(unaff_x19 + 0x40) == 0) {
      if (*(char *)(unaff_x19 + 0x50) != '\0') {
        return;
      }
      if (*(char *)(unaff_x19 + 0x60) != '\0') {
        return;
      }
      plVar7 = *(long **)(unaff_x19 + 0x38);
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0921fcf8) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0745c7e4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_0921fcf8,0);
LAB_0745c7e4:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
        FUN_0745c804();
        return;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x40) != 1) {
        return;
      }
      plVar7 = *(long **)(unaff_x19 + 0x38);
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0921fcf8) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0745c764;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_0921fcf8,0);
LAB_0745c764:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
        FUN_0745c8ac();
        return;
      }
    }
  }
LAB_0745c800:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


