/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 0575ade0
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnumerateSpaceSupportedComponents(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long *plVar7;
  long *unaff_x22;
  long unaff_x24;
  
  iVar1 = FUN_0572fd34();
  if (0 < iVar1) {
    lVar6 = 0;
    plVar7 = unaff_x22 + 4;
    do {
      lVar2 = FUN_0572902c();
      lVar5 = *(long *)(unaff_x24 + 0x20);
      if (lVar5 == 0) goto LAB_0575af20;
      if (*(uint *)(lVar5 + 0x18) <= (uint)lVar6) goto LAB_0575af24;
      plVar3 = *(long **)(lVar5 + lVar6 * 8 + 0x20);
      if (plVar3 == (long *)0x0) goto LAB_0575af20;
      uVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if ((lVar2 == 0) || (lVar2 = FUN_05743620(lVar2,uVar4), unaff_x22 == (long *)0x0))
      goto LAB_0575af20;
      if ((lVar2 != 0) &&
         (lVar5 = thunk_FUN_02ef170c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0))
      goto LAB_0575afe4;
      if (*(uint *)(unaff_x22 + 3) <= (uint)lVar6) goto LAB_0575af24;
      *plVar7 = lVar2;
      thunk_FUN_02f411dc(plVar7,lVar2);
      iVar1 = FUN_0572fd34();
      lVar6 = lVar6 + 1;
      plVar7 = plVar7 + 1;
    } while ((int)lVar6 < iVar1);
  }
  lVar6 = FUN_02f07f14(*unaff_x20,1);
  if (lVar6 != 0) {
    if ((unaff_x22 != (long *)0x0) && (lVar2 = thunk_FUN_02ef170c(), lVar2 == 0)) {
LAB_0575afe4:
      uVar4 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar4,0);
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0575af24:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(long **)(lVar6 + 0x20) = unaff_x22;
    thunk_FUN_02f411dc();
    if (*(long *)(unaff_x24 + 0x30) != 0) {
      FUN_056e4c2c(*(long *)(unaff_x24 + 0x30),lVar6,0);
      return;
    }
  }
LAB_0575af20:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


