/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 025fd1f8
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 113
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined4 in_w9;
  long lVar15;
  long unaff_x19;
  int iVar16;
  undefined8 unaff_x26;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = in_w9;
  if (0 < (int)param_4) {
    FUN_022ce6ac(*(undefined8 *)(param_1 + 0x10),0,param_4,0);
  }
  lVar13 = *(long *)(unaff_x19 + 0xc0);
  if (lVar13 != 0) {
    iVar16 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (0 < iVar16) {
      FUN_022ce6ac(*(undefined8 *)(lVar13 + 0x10),0,iVar16,0);
    }
    puVar9 = PTR_DAT_02ae4cc8;
    puVar8 = PTR_DAT_02ae4c80;
    lVar13 = *(long *)(unaff_x19 + 0x118);
    if (lVar13 != 0) {
      bVar7 = false;
      iVar16 = 0;
      do {
        if (*(int *)(lVar13 + 0x18) <= iVar16) {
          if (!bVar7) {
            uVar12 = FUN_02760680();
            uVar12 = FUN_0215a598(*(undefined8 *)PTR_DAT_02ae4cf8,uVar12,
                                  *(undefined8 *)PTR_DAT_02abb628,0);
            if (*(int *)(*(long *)PTR_DAT_02ab8108 + 0xe0) == 0) {
              thunk_FUN_011ea084(*(long *)PTR_DAT_02ab8108);
            }
            FUN_02736e4c(uVar12,0);
            fVar17 = (float)FUN_027a82c4(unaff_x26,0);
            in_stack_00000038 = 0;
            in_stack_00000040 = 0;
            in_stack_00000048 = 0;
            FUN_027a8600(0,0,0,0,fVar17 / 5.0,&stack0x00000038,0);
            if (*(int *)(*(long *)PTR_DAT_02ae4c78 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            FUN_027a83bc(0);
            uVar12 = thunk_FUN_01268e40(*(undefined8 *)puVar8);
            FUN_027a88c0(0x3f800000,uVar12,0);
            lVar13 = *(long *)(unaff_x19 + 0xb0);
            if (lVar13 == 0) break;
            lVar10 = *(long *)(lVar13 + 0x10);
            lVar11 = *(long *)PTR_DAT_02ae4c88;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar10 == 0) break;
            uVar6 = *(uint *)(lVar13 + 0x18);
            if (uVar6 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar6 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20) = uVar12;
            }
            else {
              FUN_01cdb11c(lVar13,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            lVar13 = *(long *)(unaff_x19 + 0xc0);
            uVar12 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ae4660);
            FUN_025f60b8(uVar12,0x20);
            if (lVar13 == 0) break;
            lVar10 = *(long *)(lVar13 + 0x10);
            lVar11 = *(long *)PTR_DAT_02ae4c98;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar10 == 0) break;
            uVar6 = *(uint *)(lVar13 + 0x18);
            if (uVar6 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar6 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20) = uVar12;
            }
            else {
              FUN_01cdb11c(lVar13,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_025fc18c();
          return;
        }
        lVar13 = FUN_01cdae58(lVar13,iVar16,*(undefined8 *)puVar9);
        lVar10 = thunk_FUN_01268e40(*(undefined8 *)puVar8);
        FUN_027a880c(lVar10,0);
        if (lVar10 == 0) break;
        iVar16 = iVar16 + 1;
        FUN_027a87a8(lVar10,iVar16,0);
        if (lVar13 == 0) break;
        fVar17 = *(float *)(lVar13 + 0x18) + *(float *)(lVar13 + 0x20) + 0.5;
        fVar18 = *(float *)(lVar13 + 0x1c) + 0.5;
        iVar5 = -0x80000000;
        if (*(float *)(lVar13 + 0x14) != INFINITY) {
          iVar5 = (int)*(float *)(lVar13 + 0x14);
        }
        fVar19 = *(float *)(lVar13 + 0x20) + 0.5;
        iVar1 = -0x80000000;
        if (fVar17 != INFINITY) {
          iVar1 = (int)fVar17;
        }
        iVar2 = -0x80000000;
        if (fVar18 != INFINITY) {
          iVar2 = (int)fVar18;
        }
        iVar3 = -0x80000000;
        if (fVar19 != INFINITY) {
          iVar3 = (int)fVar19;
        }
        in_stack_00000050 = 0;
        in_stack_00000058 = 0;
        FUN_027a8414(&stack0x00000050,iVar5,*(int *)(unaff_x19 + 0x10c) - iVar1,iVar2,iVar3,0);
        FUN_027a87e4(lVar10,in_stack_00000050,in_stack_00000058,0);
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_027a8600(*(undefined4 *)(lVar13 + 0x1c),*(undefined4 *)(lVar13 + 0x20),
                     *(undefined4 *)(lVar13 + 0x24),*(undefined4 *)(lVar13 + 0x28),
                     *(undefined4 *)(lVar13 + 0x2c),&stack0x00000038,0);
        in_stack_00000028 = in_stack_00000040;
        in_stack_00000020 = in_stack_00000038;
        in_stack_00000030 = in_stack_00000048;
        FUN_027a87c4(lVar10,&stack0x00000020,0);
        FUN_027a87f4(*(undefined4 *)(lVar13 + 0x30),lVar10,0);
        FUN_027a8804(lVar10,0,0);
        lVar11 = *(long *)(unaff_x19 + 0xb0);
        if (lVar11 == 0) break;
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar15 = *(long *)PTR_DAT_02ae4c88;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) break;
        uVar6 = *(uint *)(lVar11 + 0x18);
        if (uVar6 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar6 + 1;
          *(long *)(lVar14 + (long)(int)uVar6 * 8 + 0x20) = lVar10;
        }
        else {
          FUN_01cdb11c(lVar11,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        uVar4 = *(undefined4 *)(lVar13 + 0x10);
        uVar12 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ae4660);
        FUN_025f60b8(uVar12,uVar4);
        iVar5 = *(int *)(lVar13 + 0x10);
        lVar13 = *(long *)(unaff_x19 + 0xc0);
        if (lVar13 == 0) break;
        lVar10 = *(long *)(lVar13 + 0x10);
        lVar11 = *(long *)PTR_DAT_02ae4c98;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar6 = *(uint *)(lVar13 + 0x18);
        if (uVar6 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20) = uVar12;
        }
        else {
          FUN_01cdb11c(lVar13,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        lVar13 = *(long *)(unaff_x19 + 0x118);
        bVar7 = (bool)(bVar7 | iVar5 == 0x20);
      } while (lVar13 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


