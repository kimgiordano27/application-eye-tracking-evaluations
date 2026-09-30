/*
FUNCTION_NAME: Pathfinding.Examples.TurnBasedDoor.<WaitAndClose>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 034e58dc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


long Pathfinding_Examples_TurnBasedDoor_<WaitAndClose>d__6__System_IDisposable_Dispose
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x20;
  long lVar10;
  long *unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  
  thunk_FUN_02fdcff0(param_1);
  puVar2 = PTR_DAT_06f80ae8;
  puVar1 = PTR_DAT_06f7c700;
  FUN_02fe96e0();
  in_stack_00000020 = (**(code **)(*unaff_x20 + 0x278))();
  thunk_FUN_03048534(&stack0x00000020,in_stack_00000020);
  plVar5 = (long *)unaff_x20[2];
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
    FUN_02fe96e0(uVar6,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    in_stack_00000028 = (**(code **)(*unaff_x20 + 0x278))();
    thunk_FUN_03048534(&stack0x00000028);
    in_stack_00000038 = in_stack_00000028;
    in_stack_00000030 = in_stack_00000020;
    lVar7 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f80818,&stack0x00000030);
    puVar1 = PTR_DAT_06f80848;
    lVar3 = thunk_FUN_03010710(lVar7,*(undefined8 *)PTR_DAT_06f80848);
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_03010710(lVar7,*(undefined8 *)puVar1);
      if (lVar3 == 0) goto Pathfinding_Examples_SnapToNode__Update;
      lVar10 = *(long *)puVar1;
      plVar5 = (long *)thunk_FUN_03010710(lVar7,lVar10);
      lVar3 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar10) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_034e4d30;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02feb5b8(plVar5,lVar10,0);
LAB_034e4d30:
      (*(code *)*puVar4)(plVar5);
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar8 = FUN_05b07f44();
    if ((uVar8 & 1) != 0) {
      uVar6 = FUN_034ec470();
      plVar5 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,1);
      if (plVar5 == (long *)0x0) goto Pathfinding_Examples_SnapToNode__Update;
      if ((lVar7 != 0) &&
         (lVar3 = thunk_FUN_03010710(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
        uVar6 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                          ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar6,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      plVar5[4] = lVar7;
      thunk_FUN_03048534(plVar5 + 4,lVar7);
      lVar7 = FUN_05b19d64(uVar6,plVar5,0);
    }
    if (*(long *)(unaff_x29 + 0x28) == in_stack_00000048) {
      return lVar7;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
Pathfinding_Examples_SnapToNode__Update:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


