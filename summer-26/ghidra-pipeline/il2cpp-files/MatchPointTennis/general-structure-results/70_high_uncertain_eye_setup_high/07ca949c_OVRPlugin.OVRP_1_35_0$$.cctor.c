/*
FUNCTION_NAME: OVRPlugin.OVRP_1_35_0$$.cctor
ENTRY_POINT: 07ca949c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_35_0___cctor(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *plVar4;
  
  while (unaff_x21 < param_1) {
    *(long *)((long)unaff_x23 + unaff_x22) = unaff_x20;
    thunk_FUN_044bb4b4((long *)((long)unaff_x23 + unaff_x22),unaff_x20);
    plVar4 = *(long **)(unaff_x19 + 0xa0);
    lVar1 = FUN_07ca5368();
    if (plVar4 == (long *)0x0) {
LAB_07ca9518:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_04485110(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
LAB_07ca9520:
      uVar3 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar3,0);
    }
    if (*(uint *)(plVar4 + 3) <= unaff_x21) break;
    *(long *)((long)plVar4 + unaff_x22) = lVar1;
    thunk_FUN_044bb4b4((long *)((long)plVar4 + unaff_x22),lVar1);
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 8;
    if (unaff_x21 == 0x1a) {
      return;
    }
    unaff_x23 = *(long **)(unaff_x19 + 0x98);
    unaff_x20 = FUN_07ca4ff8();
    if (unaff_x23 == (long *)0x0) goto LAB_07ca9518;
    if ((unaff_x20 != 0) &&
       (lVar1 = thunk_FUN_04485110(unaff_x20,*(undefined8 *)(*unaff_x23 + 0x40)), lVar1 == 0))
    goto LAB_07ca9520;
    param_1 = (ulong)*(uint *)(unaff_x23 + 3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


