/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$.cctor
ENTRY_POINT: 0534d764
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0___cctor(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  long *plVar5;
  long *unaff_x23;
  
  while (unaff_x23 != (long *)0x0) {
    if ((param_1 != 0) &&
       (lVar3 = thunk_FUN_02f45174(param_1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar3 == 0)) {
LAB_0534d7b8:
      uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar4,0);
    }
    if (*(uint *)(unaff_x23 + 3) <= unaff_x22) {
LAB_0534d7b4:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    unaff_x23[unaff_x21] = param_1;
    lVar3 = unaff_x21 + 1;
    if (lVar3 == 0x1e) {
      return;
    }
    plVar5 = *(long **)(unaff_x19 + 0x98);
    lVar1 = FUN_05349bb8();
    if (plVar5 == (long *)0x0) break;
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_02f45174(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
    goto LAB_0534d7b8;
    unaff_x22 = unaff_x21 - 3;
    if (*(uint *)(plVar5 + 3) <= unaff_x22) goto LAB_0534d7b4;
    plVar5[lVar3] = lVar1;
    unaff_x23 = *(long **)(unaff_x19 + 0xa0);
    param_1 = FUN_05349f00();
    unaff_x21 = lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


