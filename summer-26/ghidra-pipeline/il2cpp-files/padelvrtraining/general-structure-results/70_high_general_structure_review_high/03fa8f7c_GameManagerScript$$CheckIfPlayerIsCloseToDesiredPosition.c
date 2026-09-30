/*
FUNCTION_NAME: GameManagerScript$$CheckIfPlayerIsCloseToDesiredPosition
ENTRY_POINT: 03fa8f7c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void GameManagerScript__CheckIfPlayerIsCloseToDesiredPosition(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long in_stack_00000018;
  
  puVar1 = PTR_DAT_091a4f00;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091a4f00) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x14) * 0x10 + 0x138);
        goto LAB_03fa9020;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370();
LAB_03fa9020:
  uVar4 = (*(code *)*puVar3)();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar6 = FUN_03fa6a4c();
  uVar7 = FUN_06fd246c(uVar4,0);
  if (((uVar7 & 1) == 0) &&
     (bVar2 = FUN_0717781c(uVar4,&stack0x00000018,0), (bVar2 & lVar6 < in_stack_00000018) != 0)) {
    plVar5 = (long *)FUN_083cc47c(0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x47) * 0x10 + 0x138);
          goto LAB_03fa90d4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar5,*(long *)puVar1,0x47);
LAB_03fa90d4:
    lVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar4 = FUN_0636bf40(lVar6,*(undefined8 *)PTR_DAT_091a6c10);
    uVar7 = FUN_062f9900();
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xe) = uVar4;
      thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04e564f0(unaff_x19 + 2);
      return;
    }
    uVar4 = FUN_062f9944();
    *(undefined8 *)(unaff_x19 + 10) = uVar4;
    thunk_FUN_03d1023c();
  }
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 10) = 0;
  thunk_FUN_03d1023c(unaff_x19 + 10,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_0708de18(unaff_x19 + 2,0);
  return;
}


