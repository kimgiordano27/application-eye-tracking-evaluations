/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcActivationMode
ENTRY_POINT: 0749e7e8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcActivationMode(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar4;
  long *unaff_x23;
  
  while (unaff_x23 != (long *)0x0) {
    if ((param_1 != 0) &&
       (lVar2 = thunk_FUN_03d2ee44(param_1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar2 == 0)) {
LAB_0749e84c:
      uVar3 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar3,0);
    }
    if (*(uint *)(unaff_x23 + 3) <= unaff_x21) {
LAB_0749e848:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    *(long *)((long)unaff_x23 + unaff_x22) = param_1;
    thunk_FUN_03d1023c((long *)((long)unaff_x23 + unaff_x22),param_1);
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 8;
    if (unaff_x21 == 0x1a) {
      return;
    }
    plVar4 = *(long **)(unaff_x19 + 0x98);
    lVar2 = FUN_0749a8f4();
    if (plVar4 == (long *)0x0) break;
    if ((lVar2 != 0) &&
       (lVar1 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar1 == 0))
    goto LAB_0749e84c;
    if (*(uint *)(plVar4 + 3) <= unaff_x21) goto LAB_0749e848;
    *(long *)((long)plVar4 + unaff_x22) = lVar2;
    thunk_FUN_03d1023c((long *)((long)plVar4 + unaff_x22),lVar2);
    unaff_x23 = *(long **)(unaff_x19 + 0xa0);
    param_1 = FUN_0749ac64();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


