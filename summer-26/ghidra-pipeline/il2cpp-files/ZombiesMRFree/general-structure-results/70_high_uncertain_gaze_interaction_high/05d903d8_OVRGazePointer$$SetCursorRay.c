/*
FUNCTION_NAME: OVRGazePointer$$SetCursorRay
ENTRY_POINT: 05d903d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ui_interaction;keyword_support
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;eye_or_gaze_keyword_boost_only;functionality_gaze_interaction_hits_2
*/


long OVRGazePointer__SetCursorRay(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined4 unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  FUN_02fe925c();
  FUN_02fe925c(PTR_DAT_06f70788);
  FUN_02fe925c(PTR_DAT_06f73560);
  FUN_02fe925c(PTR_DAT_06f71f10);
  FUN_02fe925c(PTR_DAT_06f6e930);
  *(undefined1 *)(unaff_x21 + 0xc67) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (DAT_0738f334 == '\0') {
    FUN_02fe925c(PTR_DAT_06f73560);
    DAT_0738f334 = '\x01';
  }
  lVar4 = *unaff_x20;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *unaff_x20;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar4 != 0) {
    uVar5 = FUN_05db34fc(lVar4,0);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (DAT_0738f334 == '\0') {
      FUN_02fe925c(PTR_DAT_06f73560);
      DAT_0738f334 = '\x01';
    }
    lVar4 = *unaff_x20;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *unaff_x20;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
    if (lVar4 != 0) {
      uVar6 = OVRSimpleJSON_JSONObject__Add(lVar4,unaff_w19,0);
      lVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f74670);
      FUN_044c2c70(lVar4,uVar6,*(undefined8 *)PTR_DAT_06f74660);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
          return 0;
        }
        uVar17 = FUN_044c30ac(lVar4,0,*(undefined8 *)PTR_DAT_06f746d8);
        lVar8 = *(long *)(lVar4 + 0x10);
        lVar10 = *(long *)PTR_DAT_06f746a8;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar3 = *(uint *)(lVar4 + 0x18);
          if (uVar3 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar3 * 0xc;
            *(uint *)(lVar4 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar8 + 0x20) = uVar17;
            *(undefined4 *)(lVar8 + 0x24) = param_2;
            *(undefined4 *)(lVar8 + 0x28) = param_3;
          }
          else {
            FUN_044c33dc(lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          uVar3 = *(uint *)(lVar4 + 0x18);
          uVar5 = (ulong)uVar3;
          lVar8 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6e930,uVar3 << 1);
          lVar10 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f71f10,uVar3 << 1);
          if (0 < (int)uVar3) {
            uVar13 = 0;
            puVar14 = (undefined4 *)(lVar8 + 0x28);
            lVar15 = uVar5 << 0x20;
            puVar16 = (undefined4 *)(lVar10 + 0x24);
            do {
              uVar17 = FUN_044c30ac(lVar4,uVar13 & 0xffffffff,*(undefined8 *)PTR_DAT_06f746d8);
              if (lVar8 == 0) goto LAB_05d907e0;
              uVar12 = *(uint *)(lVar8 + 0x18);
              if (uVar12 <= uVar13) goto LAB_05d907dc;
              puVar14[-2] = uVar17;
              puVar14[-1] = unaff_s8;
              *puVar14 = param_3;
              if ((ulong)uVar12 <= uVar5 + uVar13) goto LAB_05d907dc;
              lVar11 = lVar8 + (lVar15 >> 0x20) * 0xc;
              *(undefined4 *)(lVar11 + 0x20) = uVar17;
              *(undefined4 *)(lVar11 + 0x24) = unaff_s9;
              *(undefined4 *)(lVar11 + 0x28) = param_3;
              if (lVar10 == 0) goto LAB_05d907e0;
              uVar12 = *(uint *)(lVar10 + 0x18);
              if (uVar12 <= uVar13) goto LAB_05d907dc;
              fVar18 = (float)(int)uVar13 / (float)(int)(uVar3 - 1);
              puVar16[-1] = fVar18;
              *puVar16 = 0;
              if ((ulong)uVar12 <= uVar5 + uVar13) goto LAB_05d907dc;
              uVar13 = uVar13 + 1;
              lVar11 = lVar10 + (lVar15 >> 0x20) * 8;
              puVar14 = puVar14 + 3;
              lVar15 = lVar15 + 0x100000000;
              puVar16 = puVar16 + 2;
              *(float *)(lVar11 + 0x20) = fVar18;
              *(undefined4 *)(lVar11 + 0x24) = 0x3f800000;
            } while (uVar5 != uVar13);
          }
          uVar12 = uVar3 - 1;
          lVar4 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d960,uVar12 * 6);
          if (0 < (int)uVar12) {
            if (lVar4 == 0) goto LAB_05d907e0;
            uVar2 = *(uint *)(lVar4 + 0x18);
            lVar15 = 0;
            iVar9 = 0;
            do {
              uVar7 = (uint)lVar15;
              if (uVar2 <= uVar7) {
LAB_05d907dc:
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              *(int *)(lVar4 + (long)(int)uVar7 * 4 + 0x20) = iVar9;
              if (uVar2 <= uVar7 + 1) goto LAB_05d907dc;
              *(uint *)(lVar4 + (long)(int)(uVar7 + 1) * 4 + 0x20) = uVar3 + iVar9;
              if (uVar2 <= uVar7 + 2) goto LAB_05d907dc;
              iVar1 = uVar3 + iVar9 + 1;
              *(int *)(lVar4 + (long)(int)(uVar7 + 2) * 4 + 0x20) = iVar1;
              if (uVar2 <= uVar7 + 3) goto LAB_05d907dc;
              *(int *)(lVar4 + (long)(int)(uVar7 + 3) * 4 + 0x20) = iVar9;
              if (uVar2 <= uVar7 + 4) goto LAB_05d907dc;
              *(int *)(lVar4 + (long)(int)(uVar7 + 4) * 4 + 0x20) = iVar1;
              if (uVar2 <= uVar7 + 5) goto LAB_05d907dc;
              lVar15 = lVar15 + 6;
              iVar1 = iVar9 + 1;
              iVar9 = iVar9 + 1;
              *(int *)(lVar4 + (long)(int)(uVar7 + 5) * 4 + 0x20) = iVar1;
            } while ((ulong)uVar12 * 6 - lVar15 != 0);
          }
          lVar15 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f70788);
          FUN_068d5b94(lVar15,0);
          if (lVar15 != 0) {
            FUN_068d72e0(lVar15,lVar8,0);
            FUN_068d74e4(lVar15,lVar10,0);
            FUN_068d95cc(lVar15,lVar4,0);
            return lVar15;
          }
        }
      }
    }
  }
LAB_05d907e0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


