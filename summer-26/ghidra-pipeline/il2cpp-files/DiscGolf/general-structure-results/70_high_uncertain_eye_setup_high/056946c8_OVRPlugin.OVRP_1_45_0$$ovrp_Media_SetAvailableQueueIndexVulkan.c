/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_Media_SetAvailableQueueIndexVulkan
ENTRY_POINT: 056946c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0__ovrp_Media_SetAvailableQueueIndexVulkan(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long *plVar4;
  long lVar5;
  long *unaff_x22;
  
  uVar1 = FUN_0634eb94(param_1,0,0);
                    /* try { // try from 056946d4 to 057946fb has its CatchHandler @ 05694a70 */
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)unaff_x19[5];
    if (plVar4 == (long *)0x0) goto LAB_05694804;
    lVar5 = unaff_x19[0xd];
    if ((lVar5 != 0) &&
       (lVar2 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
    goto LAB_0569480c;
    if ((*(uint *)(plVar4 + 3) & 0xfffffff8) == 0) goto LAB_05694808;
    plVar4[0xb] = lVar5;
    LeanTween__value(plVar4 + 0xb,lVar5);
  }
  lVar5 = unaff_x19[0xe];
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                    /* try { // try from 05694728 to 0579472b has its CatchHandler @ 05694a24 */
    thunk_FUN_02df485c();
  }
                    /* try { // try from 0569472c to 05794893 has its CatchHandler @ 05693f2c */
  uVar1 = FUN_0634eb94(lVar5,0,0);
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)unaff_x19[5];
    if (plVar4 == (long *)0x0) goto LAB_05694804;
    lVar5 = unaff_x19[0xe];
    if ((lVar5 != 0) &&
       (lVar2 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
    goto LAB_0569480c;
    if (*(uint *)(plVar4 + 3) < 9) goto LAB_05694808;
    plVar4[0xc] = lVar5;
    LeanTween__value(plVar4 + 0xc,lVar5);
  }
  lVar5 = unaff_x19[0xf];
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_0634eb94(lVar5,0,0);
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)unaff_x19[5];
    if (plVar4 == (long *)0x0) {
LAB_05694804:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = unaff_x19[0xf];
    if ((lVar5 != 0) &&
       (lVar2 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
LAB_0569480c:
      uVar3 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar3,0);
    }
    if (*(uint *)(plVar4 + 3) < 10) {
LAB_05694808:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar4[0xd] = lVar5;
    LeanTween__value(plVar4 + 0xd,lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x05694800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x1a8))();
  return;
}


