/*
FUNCTION_NAME: OVRPlugin$$get_recommendedMSAALevel
ENTRY_POINT: 02c196c0
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_recommendedMSAALevel(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  long *unaff_x22;
  long unaff_x23;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  
  FUN_017fc350(PTR_DAT_0380b790);
  *(undefined1 *)(unaff_x23 + 0xeb7) = 1;
  uVar6 = *unaff_x21;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bddb5c(uVar6,0);
  if (unaff_x20 == 0) {
LAB_02c19860:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  plVar2 = (long *)FUN_02adfbec();
  if (plVar2 == (long *)0x0) {
    plVar5 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380b798,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0380b788 + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0380b788)) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(plVar2);
    }
    uVar9 = 0;
    plVar5 = plVar2;
    do {
      plVar5 = (long *)plVar5[8];
      uVar9 = uVar9 + 1;
    } while (plVar5 != (long *)0x0);
    if (uVar9 == 1) {
      if (plVar2 == (long *)0x0) goto LAB_02c19860;
      uVar6 = FUN_02c1987c(plVar2);
      goto LAB_02c1983c;
    }
    plVar5 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380b798,uVar9);
    if (0 < (int)uVar9) {
      uVar7 = 0;
      plVar8 = plVar5 + 4;
      do {
        if ((plVar2 == (long *)0x0) || (lVar3 = FUN_02c1987c(plVar2), plVar5 == (long *)0x0))
        goto LAB_02c19860;
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_01861ac0(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)) {
          uVar6 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar6,0);
        }
        if (*(uint *)(plVar5 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        *plVar8 = lVar3;
        thunk_FUN_0188fd20(plVar8,lVar3);
        plVar2 = (long *)plVar2[8];
        uVar7 = uVar7 + 1;
        plVar8 = plVar8 + 1;
      } while (uVar9 != uVar7);
    }
  }
  uVar6 = FUN_02c19518(plVar5);
LAB_02c1983c:
  *(undefined8 *)(unaff_x19 + 0x10) = uVar6;
  thunk_FUN_0188fd20((undefined8 *)(unaff_x19 + 0x10),uVar6);
  return;
}


