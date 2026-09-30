/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 07c8a690
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
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  plVar1 = (long *)FUN_04447c90();
  lVar2 = thunk_FUN_0448520c(*unaff_x22);
  FUN_07c8a840(lVar2,0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_07c8a830:
    uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
    lVar2 = thunk_FUN_0448520c(*unaff_x22);
    FUN_07c8a840(lVar2,1);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07c8a830;
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 5,lVar2);
      lVar2 = thunk_FUN_0448520c(*unaff_x22);
      FUN_07c8a840(lVar2,2);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07c8a830;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar2;
        thunk_FUN_044bb4b4(plVar1 + 6,lVar2);
        lVar2 = thunk_FUN_0448520c(*unaff_x22);
        FUN_07c8a840(lVar2,3);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_07c8a830;
        if (3 < *(uint *)(plVar1 + 3)) {
          plVar1[7] = lVar2;
          thunk_FUN_044bb4b4(plVar1 + 7,lVar2);
          lVar2 = thunk_FUN_0448520c(*unaff_x22);
          FUN_07c8a840(lVar2,4);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
          goto LAB_07c8a830;
          if (4 < *(uint *)(plVar1 + 3)) {
            plVar1[8] = lVar2;
            thunk_FUN_044bb4b4(plVar1 + 8,lVar2);
            *(long *)(unaff_x19 + 0x28) = (long)plVar1;
            thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x28),plVar1);
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


