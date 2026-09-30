/*
FUNCTION_NAME: UniRx.ReactiveCommandExtensions.<>c$$<BindToOnClick>b__7_0
ENTRY_POINT: 09aa39fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UniRx_ReactiveCommandExtensions_<>c__<BindToOnClick>b__7_0(ulong param_1)

{
  undefined4 uVar1;
  long *unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0acb8e18);
    *(undefined1 *)(unaff_x20 + 0x146) = 1;
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*unaff_x19 != *(long *)PTR_DAT_0acb8e18) {
                    /* WARNING: Subroutine does not return */
    FUN_0494850c();
  }
  if (unaff_x19[6] != 0) {
    uVar1 = UniRx_Scheduler_IgnoreTimeScaleMainThreadScheduler_<DelayAction>d__2__System_IDisposable_Dispose
                      (unaff_x19[6],unaff_x19[0x11],(int)unaff_x19[0xd]);
    *(undefined4 *)(unaff_x19 + 0x14) = uVar1;
    UniRx_ObservableWWW__PostAndGetBytes();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


