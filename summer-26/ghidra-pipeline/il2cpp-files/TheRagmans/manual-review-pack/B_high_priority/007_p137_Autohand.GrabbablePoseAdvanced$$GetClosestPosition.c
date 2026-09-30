/*
FUNCTION_NAME: Autohand.GrabbablePoseAdvanced$$GetClosestPosition
ENTRY_POINT: 005163c8
PROGRAM: TheRagmans-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined1  [16]
Autohand_GrabbablePoseAdvanced__GetClosestPosition(long param_1,undefined8 param_2,double param_3)

{
  uint *puVar1;
  ulong uVar2;
  bool in_ZR;
  bool in_CY;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  int iStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  
  uStack0000000000000020 = param_2;
  uStack0000000000000030 = param_2;
  _iStack0000000000000000 = param_2;
  uStack0000000000000010 = param_2;
  if (in_CY && !in_ZR) {
    dVar13 = log2(param_3);
  }
  else {
    dVar13 = (double)*(float *)(unaff_x20 + param_1 * 4);
  }
  iVar8 = 0;
  uVar9 = 0;
  dVar15 = 0.0;
  uVar7 = 1;
  do {
    uVar3 = *(uint *)(unaff_x19 + uVar9 * 4);
    if (uVar3 == 0) {
      if (uVar9 + 1 < 0x2c0) {
        lVar4 = 0;
        do {
          if (*(int *)(unaff_x19 + 4 + uVar9 * 4 + lVar4 * 4) != 0) break;
          lVar4 = lVar4 + 1;
        } while (0x2bf - uVar9 != lVar4);
        uVar3 = (int)lVar4 + 1;
      }
      else {
        uVar3 = 1;
      }
      uVar9 = uVar9 + uVar3;
      if (uVar9 == 0x2c0) break;
      uVar6 = uVar3 - 2;
      if (uVar3 < 2 || uVar6 == 0) {
        _iStack0000000000000000 = CONCAT44(uStack0000000000000004,iStack0000000000000000 + uVar3);
      }
      else {
        do {
          iVar8 = iVar8 + 1;
          uVar6 = uVar6 >> 3;
          dVar15 = dVar15 + 3.0;
        } while (uVar6 != 0);
        in_stack_00000040._4_4_ = iVar8;
      }
    }
    else {
      if (uVar3 < 0x100) {
        dVar14 = (double)uVar3;
        dVar10 = (double)*(float *)(unaff_x20 + (ulong)uVar3 * 4);
      }
      else {
        dVar14 = (double)uVar3;
        dVar10 = log2(dVar14);
      }
      uVar5 = (ulong)((dVar13 - dVar10) + 0.5);
      if (0xe < uVar5) {
        uVar5 = 0xf;
      }
      dVar15 = dVar15 + (dVar13 - dVar10) * dVar14;
      uVar2 = uVar5;
      if (uVar5 <= uVar7) {
        uVar2 = uVar7;
      }
      *(int *)((long)&stack0x00000000 + uVar5 * 4) =
           *(int *)((long)&stack0x00000000 + uVar5 * 4) + 1;
      uVar9 = uVar9 + 1;
      uVar7 = uVar2;
    }
  } while (uVar9 < 0x2c0);
  uVar9 = 0;
  puVar1 = (uint *)&stack0x00000048;
  dVar13 = 0.0;
  do {
    uVar3 = *(uint *)register0x00000008;
    if (uVar3 < 0x100) {
      dVar14 = (double)uVar3;
      dVar10 = (double)*(float *)(unaff_x20 + (ulong)uVar3 * 4);
    }
    else {
      dVar14 = (double)uVar3;
      dVar10 = log2(dVar14);
    }
    uVar5 = (ulong)*(uint *)((long)register0x00000008 + 4);
    uVar9 = uVar9 + uVar3 + uVar5;
    if (*(uint *)((long)register0x00000008 + 4) < 0x100) {
      dVar11 = (double)*(float *)(unaff_x20 + uVar5 * 4);
    }
    else {
      dVar11 = log2((double)uVar5);
    }
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + 8);
    dVar13 = (dVar13 - dVar14 * dVar10) - dVar11 * (double)uVar5;
  } while (register0x00000008 < puVar1);
  if (uVar9 == 0) {
    dVar10 = 0.0;
  }
  else {
    dVar10 = (double)uVar9;
    if (uVar9 < 0x100) {
      dVar14 = (double)*(float *)(unaff_x20 + uVar9 * 4);
    }
    else {
      dVar14 = log2(dVar10);
    }
    dVar13 = dVar13 + dVar14 * dVar10;
  }
  if (dVar10 <= dVar13) {
    dVar10 = dVar13;
  }
  auVar12._0_8_ = dVar15 + (double)(uVar7 * 2 + 0x12) + dVar10;
  auVar12._8_8_ = 0;
  return auVar12;
}


