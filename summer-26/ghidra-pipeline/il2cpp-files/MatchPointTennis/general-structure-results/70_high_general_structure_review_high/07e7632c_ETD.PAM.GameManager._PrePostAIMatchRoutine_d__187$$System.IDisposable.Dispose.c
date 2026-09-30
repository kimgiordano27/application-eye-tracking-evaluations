/*
FUNCTION_NAME: ETD.PAM.GameManager.<PrePostAIMatchRoutine>d__187$$System.IDisposable.Dispose
ENTRY_POINT: 07e7632c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void ETD_PAM_GameManager_<PrePostAIMatchRoutine>d__187__System_IDisposable_Dispose
               (undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  undefined8 *unaff_x22;
  float unaff_s8;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  lVar1 = FUN_09303bd0(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar1 = thunk_FUN_0953ac24(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar1 = FUN_095259a0(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0952a454(lVar1,0.0 < fStack000000000000001c,0);
  plVar3 = *(long **)(unaff_x20 + 0x130);
  uVar2 = FUN_07a50924((long)&stack0x00000018 + 4,*unaff_x22,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44(uVar2,uVar2);
  }
  (**(code **)(*plVar3 + 0x558))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
  if (*(long *)(unaff_x20 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar1 = FUN_09303bd0(*(long *)(unaff_x20 + 0x148),0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar1 = thunk_FUN_0953ac24(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar1 = FUN_095259a0(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0952a454(lVar1,0.0 < fStack0000000000000018,0);
  plVar3 = *(long **)(unaff_x20 + 0x148);
  uVar2 = FUN_07a50924(&stack0x00000018,*unaff_x22,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44(uVar2,uVar2);
  }
  (**(code **)(*plVar3 + 0x558))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
  if (*(long *)(unaff_x20 + 0x150) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar1 = FUN_09303bd0(*(long *)(unaff_x20 + 0x150),0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar1 = thunk_FUN_0953ac24(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar1 = FUN_095259a0(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0952a454(lVar1,0.0 < in_stack_00000010._4_4_,0);
  plVar3 = *(long **)(unaff_x20 + 0x150);
  uVar2 = FUN_07a50924((long)&stack0x00000010 + 4,*unaff_x22,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44(uVar2,uVar2);
  }
  (**(code **)(*plVar3 + 0x558))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
  if (*(long *)(unaff_x20 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar1 = FUN_09303bd0(*(long *)(unaff_x20 + 0x158),0);
  if (lVar1 != 0) {
    lVar1 = thunk_FUN_0953ac24(lVar1,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar1 = FUN_095259a0(lVar1,0);
    if (lVar1 != 0) {
      FUN_0952a454(lVar1,0.0 < unaff_s8,0);
      plVar3 = *(long **)(unaff_x20 + 0x158);
      uVar2 = FUN_07a50924(&stack0x00000010,*unaff_x22,0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x558))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
        *unaff_x19 = 0xfffffffe;
        FUN_0795b53c(unaff_x19 + 2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar2,uVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


