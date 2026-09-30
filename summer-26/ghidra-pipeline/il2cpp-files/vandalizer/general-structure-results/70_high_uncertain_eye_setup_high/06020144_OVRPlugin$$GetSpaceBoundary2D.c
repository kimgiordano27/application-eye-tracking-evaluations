/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 06020144
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  if ((int)unaff_x20[3] != 0) {
    unaff_x20[4] = unaff_x21;
    thunk_FUN_0329bf60();
    lVar1 = thunk_FUN_0322f148(*unaff_x22);
    FUN_060202b8(lVar1,1);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_0322f04c(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
LAB_060202a8:
      uVar3 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar3,0);
    }
    if (1 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[5] = lVar1;
      thunk_FUN_0329bf60(unaff_x20 + 5,lVar1);
      lVar1 = thunk_FUN_0322f148(*unaff_x22);
      FUN_060202b8(lVar1,2);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_0322f04c(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
      goto LAB_060202a8;
      if (2 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[6] = lVar1;
        thunk_FUN_0329bf60(unaff_x20 + 6,lVar1);
        lVar1 = thunk_FUN_0322f148(*unaff_x22);
        FUN_060202b8(lVar1,3);
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_0322f04c(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
        goto LAB_060202a8;
        if (3 < *(uint *)(unaff_x20 + 3)) {
          unaff_x20[7] = lVar1;
          thunk_FUN_0329bf60(unaff_x20 + 7,lVar1);
          lVar1 = thunk_FUN_0322f148(*unaff_x22);
          FUN_060202b8(lVar1,4);
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_0322f04c(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
          goto LAB_060202a8;
          if (4 < *(uint *)(unaff_x20 + 3)) {
            unaff_x20[8] = lVar1;
            thunk_FUN_0329bf60(unaff_x20 + 8,lVar1);
            *(long **)(unaff_x19 + 0x10) = unaff_x20;
            thunk_FUN_0329bf60();
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


