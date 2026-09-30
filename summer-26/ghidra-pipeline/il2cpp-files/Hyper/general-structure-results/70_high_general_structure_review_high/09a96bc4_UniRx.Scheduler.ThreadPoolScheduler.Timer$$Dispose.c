/*
FUNCTION_NAME: UniRx.Scheduler.ThreadPoolScheduler.Timer$$Dispose
ENTRY_POINT: 09a96bc4
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UniRx_Scheduler_ThreadPoolScheduler_Timer__Dispose(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char cStack000000000000002c;
  
  FUN_04947ee4(PTR_DAT_0ac34b50);
  FUN_04947ee4(PTR_DAT_0acb8d48);
  *(undefined1 *)(unaff_x21 + 199) = 1;
  cStack000000000000002c = '\0';
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (unaff_x19 != 0) {
    iVar1 = *(int *)(unaff_x19 + 0x70);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    FUN_076ca1ac(&stack0x00000008);
    if (cStack000000000000002c != '\0') {
      if (unaff_x20 == 0) goto LAB_09a96cd0;
      FUN_09a96cd4();
    }
    puVar3 = PTR_DAT_0acb8d40;
    if (iVar1 == 0) {
      if (*(int *)(*(long *)PTR_DAT_0acb8d40 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(&stack0x00000008,uVar4,*(undefined8 *)PTR_DAT_0acb8d38);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0ac34b50 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      puVar2 = PTR_DAT_0acb8d30;
      uVar4 = FUN_09a96d30(iVar1,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)puVar3);
      }
      FUN_07b6c824(&stack0x00000008,uVar4,*(undefined8 *)puVar2);
    }
    return;
  }
LAB_09a96cd0:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


