/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 060b7098
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusAcquired(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
                    /* catch() { ... } // from try @ 060b7040 with catch @ 060b70d0
                       catch() { ... } // from try @ 060b70c0 with catch @ 060b70d0 */
                    /* try { // try from 060b70d4 to 061b70d7 has its CatchHandler @ 060b70e0 */
                    /* try { // try from 060b70d8 to 061b70e3 has its CatchHandler @ 060b6c74 */
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_060b70dc;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
  }
                    /* try { // try from 060b70c0 to 061b70cf has its CatchHandler @ 060b70d0 */
  puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060b70dc:
                    /* catch() { ... } // from try @ 060b70d4 with catch @ 060b70e0 */
  iVar1 = (*(code *)*puVar2)();
  if ((iVar1 == 0) && (*(int *)(unaff_x19 + 0x40) == 0)) {
    plVar6 = *(long **)(unaff_x19 + 0x38);
    if (plVar6 == (long *)0x0) goto LAB_060b72a8;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a209e0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_060b7150;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)PTR_DAT_07a209e0,0);
LAB_060b7150:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
    FUN_060b72ac();
  }
  plVar6 = *(long **)(unaff_x19 + 0x28);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_060b71bc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*unaff_x21,6);
LAB_060b71bc:
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
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_03156cec(0,*(undefined8 *)PTR_DAT_07a209e0);
        FUN_060b72ac();
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
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a209e0) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_060b7258;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)PTR_DAT_07a209e0,0);
LAB_060b7258:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
        FUN_060b7348();
        return;
      }
    }
  }
LAB_060b72a8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


