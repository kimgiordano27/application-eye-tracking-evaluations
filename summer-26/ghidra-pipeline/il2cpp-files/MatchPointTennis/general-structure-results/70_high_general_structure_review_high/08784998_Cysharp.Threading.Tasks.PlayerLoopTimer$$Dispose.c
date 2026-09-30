/*
FUNCTION_NAME: Cysharp.Threading.Tasks.PlayerLoopTimer$$Dispose
ENTRY_POINT: 08784998
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void Cysharp_Threading_Tasks_PlayerLoopTimer__Dispose(void)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x24;
  undefined8 uVar9;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  int iStack000000000000004c;
  
  plVar7 = (long *)(unaff_x20 + 0x48);
  *plVar7 = in_stack_00000008;
  thunk_FUN_044bb4b4(plVar7);
  *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000010;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x58),in_stack_00000010);
  iStack000000000000004c = in_stack_00000018;
  *(int *)(unaff_x20 + 0x30) = in_stack_00000018;
  if ((((*(char *)(unaff_x19 + 0xe) == '\0') || (*(int *)(unaff_x20 + 0x28) == 1)) &&
      (in_stack_00000018 == 0x197)) && (*plVar7 != 0)) {
    lVar3 = FUN_0882a490(*plVar7,*(undefined8 *)PTR_DAT_09f7f3e8,0);
    uVar4 = FUN_078b4450(lVar3,0);
    if ((uVar4 & 1) == 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar5 = FUN_078b8f94(lVar3,0);
      uVar4 = thunk_FUN_078b3114(uVar5,*(undefined8 *)PTR_DAT_09f35858,0);
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(unaff_x20 + 0x2d) = 1;
      }
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar5 = (**(code **)(*plVar7 + 0x268))
                      (plVar7,*(undefined8 *)PTR_DAT_09f7fdb8,*(undefined8 *)(*plVar7 + 0x270));
    *(undefined8 *)(unaff_x20 + 0x40) = uVar5;
    thunk_FUN_044bb4b4();
  }
  else if (in_stack_00000018 == 200) {
    bVar2 = *plVar7 != 0;
    goto LAB_08784a94;
  }
  bVar2 = false;
LAB_08784a94:
  *(bool *)(unaff_x20 + 0x2c) = bVar2;
  if ((*(long *)(unaff_x20 + 0x40) == 0) &&
     ((iVar1 = *(int *)(unaff_x20 + 0x30), iVar1 == 0x197 || (iVar1 == 0x191)))) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    thunk_FUN_044adef4(PTR_DAT_09f7f578);
    uVar5 = thunk_FUN_0448520c();
    uVar6 = thunk_FUN_044adef4(PTR_DAT_09f7f4c0);
    FUN_08775610(uVar5,uVar9,uVar6,iVar1,uVar8,0);
    if (*(int *)(unaff_x20 + 0x30) == 0x197) {
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09f894f0);
    }
    else {
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09f894f8);
    }
    thunk_FUN_044adef4(PTR_DAT_09f2b7f0);
    uVar8 = thunk_FUN_0448520c();
    FUN_088453e8(uVar8,uVar6,0,7,uVar5,0);
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f89500);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar8,uVar5);
  }
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_0795995c(unaff_x19 + 2,0);
  return;
}


