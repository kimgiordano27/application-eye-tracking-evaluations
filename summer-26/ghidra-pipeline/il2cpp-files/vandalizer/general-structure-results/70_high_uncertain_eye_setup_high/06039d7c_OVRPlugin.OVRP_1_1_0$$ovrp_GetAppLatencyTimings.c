/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppLatencyTimings
ENTRY_POINT: 06039d7c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppLatencyTimings(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar4;
  long *unaff_x23;
  
  while (lVar1 = FUN_06035c3c(), unaff_x23 != (long *)0x0) {
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_0322f04c(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar2 == 0)) {
LAB_06039de4:
      uVar3 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar3,0);
    }
    if (*(uint *)(unaff_x23 + 3) <= unaff_x21) {
LAB_06039de0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(long *)((long)unaff_x23 + unaff_x22) = lVar1;
    thunk_FUN_0329bf60((long *)((long)unaff_x23 + unaff_x22),lVar1);
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 8;
    if (unaff_x21 == 0x1a) {
      return;
    }
    plVar4 = *(long **)(unaff_x19 + 0x98);
    lVar1 = FUN_060358cc();
    if (plVar4 == (long *)0x0) break;
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_0322f04c(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
    goto LAB_06039de4;
    if (*(uint *)(plVar4 + 3) <= unaff_x21) goto LAB_06039de0;
    *(long *)((long)plVar4 + unaff_x22) = lVar1;
    thunk_FUN_0329bf60((long *)((long)plVar4 + unaff_x22),lVar1);
    unaff_x23 = *(long **)(unaff_x19 + 0xa0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


