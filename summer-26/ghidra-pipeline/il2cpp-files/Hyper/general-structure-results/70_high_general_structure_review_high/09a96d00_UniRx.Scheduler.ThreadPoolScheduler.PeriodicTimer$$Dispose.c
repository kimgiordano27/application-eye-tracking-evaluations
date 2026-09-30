/*
FUNCTION_NAME: UniRx.Scheduler.ThreadPoolScheduler.PeriodicTimer$$Dispose
ENTRY_POINT: 09a96d00
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UniRx_Scheduler_ThreadPoolScheduler_PeriodicTimer__Dispose(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 *puVar2;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x98) = 0;
  *(undefined8 *)(unaff_x21 + 0x90) = 0;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    thunk_FUN_049547bc();
    puVar2 = (undefined8 *)(lVar1 + 0x10);
    *puVar2 = unaff_x19;
    thunk_FUN_049ee3d8(puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


