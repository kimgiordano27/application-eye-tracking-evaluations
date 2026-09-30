/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0
ENTRY_POINT: 06db68f8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 108
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06db6d70) */
/* WARNING: Removing unreachable block (ram,0x06db6bac) */
/* WARNING: Removing unreachable block (ram,0x06db6bb0) */
/* WARNING: Removing unreachable block (ram,0x06db6d5c) */
/* WARNING: Removing unreachable block (ram,0x06db6c40) */

void Meta_XR_EnvironmentDepthRaycaster__<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations_36_0
               (int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if ((*(byte *)(unaff_x20 + 0xbb1) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e90368);
    FUN_03c8f898(PTR_DAT_08e69550);
    FUN_03c8f898(PTR_DAT_08e7a2d8);
    FUN_03c8f898(PTR_DAT_08e7a648);
    FUN_03c8f898(PTR_DAT_08e90370);
    FUN_03c8f898(PTR_DAT_08e90378);
    FUN_03c8f898(PTR_DAT_08e90380);
    FUN_03c8f898(PTR_DAT_08e90388);
    FUN_03c8f898(PTR_DAT_08e90390);
    FUN_03c8f898(PTR_DAT_08e90398);
    FUN_03c8f898(PTR_DAT_08e903a0);
    FUN_03c8f898(PTR_DAT_08e903a8);
    FUN_03c8f898(PTR_DAT_08e903b0);
    FUN_03c8f898(PTR_DAT_08e903b8);
    FUN_03c8f898(PTR_DAT_08e903c0);
    FUN_03c8f898(PTR_DAT_08e903c8);
    *(undefined1 *)(unaff_x20 + 0xbb1) = 1;
  }
  plVar13 = (long *)PTR_DAT_08e69550;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  iVar15 = *param_1;
  lVar14 = *(long *)(param_1 + 8);
  if (iVar15 == 0) {
    in_stack_00000068 = *(undefined8 *)(param_1 + 0xc);
    iVar15 = -1;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((*(long *)(lVar14 + 0x10) != 0) || (*(char *)(lVar14 + 0x28) != '\0')) goto LAB_06db6c54;
    plVar11 = *(long **)(lVar14 + 0x18);
    *(undefined1 *)(lVar14 + 0x28) = 1;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *plVar11;
    uVar12 = *(undefined8 *)(param_1 + 10);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e903a0) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_06db6ca8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e903a0,2);
LAB_06db6ca8:
    lVar8 = (*(code *)*puVar7)(plVar11,uVar12,puVar7[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000068 = FUN_05c0b91c(lVar8,*(undefined8 *)PTR_DAT_08e903c8);
    uVar9 = FUN_05ac7d38(&stack0x00000068,*(undefined8 *)PTR_DAT_08e903c0);
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = in_stack_00000068;
      thunk_FUN_03d233cc(param_1 + 0xc,0);
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_045231f8(param_1 + 2,&stack0x00000068,param_1,*(undefined8 *)PTR_DAT_08e90368);
      return;
    }
  }
  lVar8 = FUN_05ac7d7c(&stack0x00000068,*(undefined8 *)PTR_DAT_08e903b8);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar11 = (long *)(lVar14 + 0x10);
  *plVar11 = lVar8;
  thunk_FUN_03d233cc(plVar11);
  if (*plVar11 == 0) {
    *(undefined1 *)(lVar14 + 0x28) = 0;
  }
  else {
    lVar8 = *(long *)(*plVar11 + 0x30);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_05213710(&stack0x00000018,lVar8,*(undefined8 *)PTR_DAT_08e903b0);
    puVar6 = PTR_DAT_08e903a8;
    puVar5 = PTR_DAT_08e90388;
    puVar4 = PTR_DAT_08e90380;
    puVar3 = PTR_DAT_08e90378;
    puVar2 = PTR_DAT_08e7a648;
    puVar1 = PTR_DAT_08e7a2d8;
    in_stack_00000058 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000060 = in_stack_00000028;
    while (uVar9 = FUN_049dc4d0(&stack0x00000050,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
      if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(long *)(in_stack_00000060 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05213710(&stack0x00000018,*(long *)(in_stack_00000060 + 0x28),*(undefined8 *)puVar6);
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000028;
      while (uVar9 = FUN_049dc4d0(&stack0x00000030,*(undefined8 *)puVar4), lVar8 = in_stack_00000040
            , (uVar9 & 1) != 0) {
        if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(long *)(lVar14 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar9 = FUN_06a4e574(*(long *)(lVar14 + 0x30),*(undefined8 *)(in_stack_00000040 + 0x18),
                             *(undefined8 *)puVar2);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(lVar14 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_06a4e380(*(long *)(lVar14 + 0x30),*(undefined8 *)(lVar8 + 0x18),
                       *(undefined8 *)(lVar8 + 0x20),*(undefined8 *)puVar1);
        }
      }
      if (iVar15 < 0) {
        FUN_049dc4cc(&stack0x00000030,*(undefined8 *)puVar3);
      }
    }
    if (iVar15 < 0) {
      FUN_049dc4cc(&stack0x00000050,*(undefined8 *)PTR_DAT_08e90370);
    }
    *(undefined2 *)(lVar14 + 0x28) = 0x100;
    plVar13 = (long *)PTR_DAT_08e69550;
  }
LAB_06db6c54:
  *param_1 = -2;
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0701e078(param_1 + 2,0);
  return;
}


