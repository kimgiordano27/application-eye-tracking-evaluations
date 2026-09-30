/*
FUNCTION_NAME: OVRManager$$InitializeInsightPassthrough
ENTRY_POINT: 0530a250
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__InitializeInsightPassthrough(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  
  if (*(char *)(unaff_x19 + 0x50) != '\0') {
    plVar6 = *(long **)(unaff_x19 + 0x28);
                    /* try { // try from 0530a25c to 0540a26b has its CatchHandler @ 0530a26c */
    *(undefined1 *)(unaff_x19 + 0x60) = 0;
    if (plVar6 == (long *)0x0) goto LAB_0530a4ec;
    lVar3 = *plVar6;
                    /* catch() { ... } // from try @ 0530a1d0 with catch @ 0530a26c
                       catch() { ... } // from try @ 0530a25c with catch @ 0530a26c */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 0530a270 to 0540a273 has its CatchHandler @ 0530a27c */
    if (uVar4 != 0) {
                    /* try { // try from 0530a274 to 0540a27f has its CatchHandler @ 05309848 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 0530a270 with catch @ 0530a27c */
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_0530a2b4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x21,6);
LAB_0530a2b4:
    iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (iVar1 != 1) {
      plVar6 = *(long **)(unaff_x19 + 0x28);
      if (plVar6 == (long *)0x0) goto LAB_0530a4ec;
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
            goto LAB_0530a320;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x21,6);
LAB_0530a320:
      iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      if (iVar1 != 0) goto LAB_0530a3a8;
    }
    if (*(int *)(unaff_x19 + 0x40) == 0) {
      plVar6 = *(long **)(unaff_x19 + 0x38);
      if (plVar6 == (long *)0x0) goto LAB_0530a4ec;
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Unity_Properties_PropertyBag<ResolvedStyleAccess>_TypeInfo) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0530a394;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_02f421d0(plVar6,*(long *)
                                    Unity_Properties_PropertyBag<ResolvedStyleAccess>_TypeInfo,0);
LAB_0530a394:
      (*(code *)*puVar2)(plVar6,puVar2[1]);
      FUN_0530a4f0();
    }
  }
LAB_0530a3a8:
  plVar6 = *(long **)(unaff_x19 + 0x28);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_0530a400;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x21,6);
LAB_0530a400:
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
        FUN_02a81978(0,*(undefined8 *)Unity_Properties_PropertyBag<ResolvedStyleAccess>_TypeInfo);
        FUN_0530a4f0();
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
            if (*(long *)(piVar5 + -2) ==
                *(long *)Unity_Properties_PropertyBag<ResolvedStyleAccess>_TypeInfo) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0530a49c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_02f421d0(plVar6,*(long *)
                                      Unity_Properties_PropertyBag<ResolvedStyleAccess>_TypeInfo,0);
LAB_0530a49c:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
        FUN_0530a588();
        return;
      }
    }
  }
LAB_0530a4ec:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


