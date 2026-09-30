/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 0601b2f4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceState(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  thunk_FUN_0329bf60();
  plVar1 = (long *)FUN_031f21dc(*unaff_x21,5);
  lVar2 = thunk_FUN_0322f148(*unaff_x22);
  FUN_0601b4bc(lVar2,0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_0601b4ac:
    uVar4 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_0329bf60(plVar1 + 4,lVar2);
    lVar2 = thunk_FUN_0322f148(*unaff_x22);
    FUN_0601b4bc(lVar2,1);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_0601b4ac;
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = lVar2;
      thunk_FUN_0329bf60(plVar1 + 5,lVar2);
      lVar2 = thunk_FUN_0322f148(*unaff_x22);
      FUN_0601b4bc(lVar2,2);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_0601b4ac;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar2;
        thunk_FUN_0329bf60(plVar1 + 6,lVar2);
        lVar2 = thunk_FUN_0322f148(*unaff_x22);
        FUN_0601b4bc(lVar2,3);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_0601b4ac;
        if (3 < *(uint *)(plVar1 + 3)) {
          plVar1[7] = lVar2;
          thunk_FUN_0329bf60(plVar1 + 7,lVar2);
          lVar2 = thunk_FUN_0322f148(*unaff_x22);
          FUN_0601b4bc(lVar2,4);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
          goto LAB_0601b4ac;
          if (4 < *(uint *)(plVar1 + 3)) {
            plVar1[8] = lVar2;
            thunk_FUN_0329bf60(plVar1 + 8,lVar2);
            *(long *)(unaff_x19 + 0x28) = (long)plVar1;
            thunk_FUN_0329bf60((long *)(unaff_x19 + 0x28),plVar1);
            FUN_05e44034();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


