/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_CancelFuture
ENTRY_POINT: 090d7828
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_103_0__ovrp_CancelFuture(ulong param_1)

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
    thunk_FUN_049ee3d8((long)unaff_x23 + unaff_x22,unaff_x20);
    plVar4 = *(long **)(unaff_x19 + 0xa0);
    lVar1 = FUN_090d37cc();
    if (plVar4 == (long *)0x0) {
OVRPlugin_OVRP_1_103_0__ovrp_StartColocationAdvertisement:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_04983e64(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
LAB_090d78ac:
      uVar3 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar3,0);
    }
    if (*(uint *)(plVar4 + 3) <= unaff_x21) break;
    *(long *)((long)plVar4 + unaff_x22) = lVar1;
    thunk_FUN_049ee3d8((long)plVar4 + unaff_x22,lVar1);
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 8;
    if (unaff_x21 == 0x1a) {
      return;
    }
    unaff_x23 = *(long **)(unaff_x19 + 0x98);
    unaff_x20 = FUN_090d345c();
    if (unaff_x23 == (long *)0x0) goto OVRPlugin_OVRP_1_103_0__ovrp_StartColocationAdvertisement;
    if ((unaff_x20 != 0) &&
       (lVar1 = thunk_FUN_04983e64(unaff_x20,*(undefined8 *)(*unaff_x23 + 0x40)), lVar1 == 0))
    goto LAB_090d78ac;
    param_1 = (ulong)*(uint *)(unaff_x23 + 3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


