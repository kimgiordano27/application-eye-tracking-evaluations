/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$set_Value
ENTRY_POINT: 0431b60c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0431b720) */
/* WARNING: Removing unreachable block (ram,0x0431b798) */

void OVRManager_Observable<Int32Enum>__set_Value(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  
  lVar1 = FUN_0648e7a4();
  if (lVar1 != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar2 = (long *)FUN_046fabb8(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar2[7] = (long)unaff_x19;
    LeanTween__value();
    (**(code **)(*unaff_x19 + 0x198))();
    if (plVar2 != (long *)0x0) {
      lVar1 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_069fbff0) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0431b708;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02dd004c(plVar2,*(long *)PTR_DAT_069fbff0,0);
LAB_0431b708:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0
       ) {
      FUN_02dcfd18();
    }
    FUN_065b7634();
  }
  return;
}


