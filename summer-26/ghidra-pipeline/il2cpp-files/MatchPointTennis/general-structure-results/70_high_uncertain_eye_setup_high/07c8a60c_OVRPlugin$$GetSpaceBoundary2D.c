/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 07c8a60c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  undefined4 uVar8;
  
  puVar3 = PTR_DAT_09f50bc8;
  puVar2 = PTR_DAT_09f50bc0;
  puVar1 = PTR_DAT_09f4e7f8;
  if (DAT_0a51bf43 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    DAT_0a51bf43 = '\x01';
  }
  uVar8 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x18) = uVar8;
  uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_07c2df80(uVar4,0);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x20),uVar4);
  plVar5 = (long *)FUN_04447c90(*(undefined8 *)puVar2,5);
  lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_07c8a840(lVar6,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_07c8a830:
    uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_044bb4b4(plVar5 + 4,lVar6);
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_07c8a840(lVar6,1);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_07c8a830;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = lVar6;
      thunk_FUN_044bb4b4(plVar5 + 5,lVar6);
      lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
      FUN_07c8a840(lVar6,2);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_07c8a830;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar6;
        thunk_FUN_044bb4b4(plVar5 + 6,lVar6);
        lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
        FUN_07c8a840(lVar6,3);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_07c8a830;
        if (3 < *(uint *)(plVar5 + 3)) {
          plVar5[7] = lVar6;
          thunk_FUN_044bb4b4(plVar5 + 7,lVar6);
          lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
          FUN_07c8a840(lVar6,4);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto LAB_07c8a830;
          if (4 < *(uint *)(plVar5 + 3)) {
            plVar5[8] = lVar6;
            thunk_FUN_044bb4b4(plVar5 + 8,lVar6);
            *(long *)(unaff_x19 + 0x28) = (long)plVar5;
            thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x28),plVar5);
            FUN_07a80df4();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


