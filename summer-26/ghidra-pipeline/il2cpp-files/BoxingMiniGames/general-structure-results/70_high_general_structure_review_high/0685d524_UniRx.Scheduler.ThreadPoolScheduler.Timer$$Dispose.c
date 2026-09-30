/*
FUNCTION_NAME: UniRx.Scheduler.ThreadPoolScheduler.Timer$$Dispose
ENTRY_POINT: 0685d524
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UniRx_Scheduler_ThreadPoolScheduler_Timer__Dispose(void)

{
  int iVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0xc33) & 1) == 0) {
    FUN_03642964(PTR_DAT_07a4b6a8);
    *(undefined1 *)(unaff_x20 + 0xc33) = 1;
  }
  iVar1 = thunk_FUN_0367c470(unaff_x19 + 0x118,1,0,0);
  if (iVar1 != 1) {
    *(undefined1 *)(unaff_x19 + 0x88) = 1;
    if (*(long *)(unaff_x19 + 0x110) != 0) {
      FUN_06781054(*(long *)(unaff_x19 + 0x110),0);
    }
    if (*(long *)(unaff_x19 + 0x108) != 0) {
      FUN_052b2fbc(*(long *)(unaff_x19 + 0x108),*(undefined8 *)PTR_DAT_07a4b6a8);
    }
    plVar2 = *(long **)(unaff_x19 + 0x100);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      *(undefined8 *)(unaff_x19 + 0x100) = 0;
      thunk_FUN_036b7ad0(unaff_x19 + 0x100,0);
    }
  }
  return;
}


