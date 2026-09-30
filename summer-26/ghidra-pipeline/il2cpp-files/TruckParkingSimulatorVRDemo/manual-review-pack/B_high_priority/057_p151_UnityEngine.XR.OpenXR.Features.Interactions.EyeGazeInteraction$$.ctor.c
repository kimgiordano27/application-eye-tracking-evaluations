/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 025fd118
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor(void)

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
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  int iVar16;
  undefined8 unaff_x22;
  long lVar17;
  long *unaff_x23;
  long *unaff_x25;
  undefined8 unaff_x26;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  lVar10 = *(long *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x19 + 0x138) = unaff_x22;
  puVar9 = PTR_DAT_02ae4cc0;
  puVar8 = PTR_DAT_02ae4c90;
  if (lVar10 != 0) {
    iVar16 = 0;
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar16) {
        lVar10 = *(long *)(unaff_x19 + 0x148);
        if (lVar10 == 0) {
          uVar12 = FUN_0215a08c(0,**(undefined8 **)(*unaff_x23 + 0xb8),0);
          if ((uVar12 & 1) != 0) {
            lVar10 = *(long *)(unaff_x19 + 0x148);
            goto LAB_025fd1e4;
          }
          uVar11 = FUN_02760680();
          uVar11 = FUN_0215a598(*(undefined8 *)PTR_DAT_02ae4cd8,uVar11,
                                *(undefined8 *)PTR_DAT_02ae4cf0,0);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_011ea084(*unaff_x25);
          }
          FUN_027376dc(uVar11);
        }
        else {
LAB_025fd1e4:
          *(long *)(unaff_x19 + 0x38) = lVar10;
        }
        lVar10 = *(long *)(unaff_x19 + 0xb0);
        if (lVar10 != 0) {
          iVar16 = *(int *)(lVar10 + 0x18);
          *(undefined4 *)(lVar10 + 0x18) = 0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (0 < iVar16) {
            FUN_022ce6ac(*(undefined8 *)(lVar10 + 0x10),0,iVar16,0);
          }
          lVar10 = *(long *)(unaff_x19 + 0xc0);
          if (lVar10 != 0) {
            iVar16 = *(int *)(lVar10 + 0x18);
            *(undefined4 *)(lVar10 + 0x18) = 0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (0 < iVar16) {
              FUN_022ce6ac(*(undefined8 *)(lVar10 + 0x10),0,iVar16,0);
            }
            puVar9 = PTR_DAT_02ae4cc8;
            puVar8 = PTR_DAT_02ae4c80;
            lVar10 = *(long *)(unaff_x19 + 0x118);
            if (lVar10 != 0) {
              bVar7 = false;
              iVar16 = 0;
              goto LAB_025fd270;
            }
          }
        }
        break;
      }
      lVar17 = *(long *)(unaff_x19 + 0x138);
      uVar11 = FUN_01cdae58(lVar10,iVar16,*(undefined8 *)puVar9);
      if (lVar17 == 0) break;
      lVar10 = *(long *)(lVar17 + 0x10);
      lVar14 = *(long *)puVar8;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      if (lVar10 == 0) break;
      uVar6 = *(uint *)(lVar17 + 0x18);
      if (uVar6 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar17 + 0x18) = uVar6 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20) = uVar11;
      }
      else {
        FUN_01cdb11c(lVar17,uVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      lVar10 = *(long *)(unaff_x19 + 0x130);
      iVar16 = iVar16 + 1;
    } while (lVar10 != 0);
  }
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  while( true ) {
    lVar10 = FUN_01cdae58(lVar10,iVar16,*(undefined8 *)puVar9);
    lVar17 = thunk_FUN_01268e40(*(undefined8 *)puVar8);
    FUN_027a880c(lVar17,0);
    if (lVar17 == 0) break;
    iVar16 = iVar16 + 1;
    FUN_027a87a8(lVar17,iVar16,0);
    if (lVar10 == 0) break;
    fVar18 = *(float *)(lVar10 + 0x18) + *(float *)(lVar10 + 0x20) + 0.5;
    fVar19 = *(float *)(lVar10 + 0x1c) + 0.5;
    iVar5 = -0x80000000;
    if (*(float *)(lVar10 + 0x14) != INFINITY) {
      iVar5 = (int)*(float *)(lVar10 + 0x14);
    }
    fVar20 = *(float *)(lVar10 + 0x20) + 0.5;
    iVar1 = -0x80000000;
    if (fVar18 != INFINITY) {
      iVar1 = (int)fVar18;
    }
    iVar2 = -0x80000000;
    if (fVar19 != INFINITY) {
      iVar2 = (int)fVar19;
    }
    iVar3 = -0x80000000;
    if (fVar20 != INFINITY) {
      iVar3 = (int)fVar20;
    }
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    FUN_027a8414(&stack0x00000050,iVar5,*(int *)(unaff_x19 + 0x10c) - iVar1,iVar2,iVar3,0);
    FUN_027a87e4(lVar17,in_stack_00000050,in_stack_00000058,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_027a8600(*(undefined4 *)(lVar10 + 0x1c),*(undefined4 *)(lVar10 + 0x20),
                 *(undefined4 *)(lVar10 + 0x24),*(undefined4 *)(lVar10 + 0x28),
                 *(undefined4 *)(lVar10 + 0x2c),&stack0x00000038,0);
    in_stack_00000028 = in_stack_00000040;
    in_stack_00000020 = in_stack_00000038;
    in_stack_00000030 = in_stack_00000048;
    FUN_027a87c4(lVar17,&stack0x00000020,0);
    FUN_027a87f4(*(undefined4 *)(lVar10 + 0x30),lVar17,0);
    FUN_027a8804(lVar17,0,0);
    lVar14 = *(long *)(unaff_x19 + 0xb0);
    if (lVar14 == 0) break;
    lVar13 = *(long *)(lVar14 + 0x10);
    lVar15 = *(long *)PTR_DAT_02ae4c88;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar6 = *(uint *)(lVar14 + 0x18);
    if (uVar6 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar14 + 0x18) = uVar6 + 1;
      *(long *)(lVar13 + (long)(int)uVar6 * 8 + 0x20) = lVar17;
    }
    else {
      FUN_01cdb11c(lVar14,lVar17,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar4 = *(undefined4 *)(lVar10 + 0x10);
    uVar11 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ae4660);
    FUN_025f60b8(uVar11,uVar4);
    iVar5 = *(int *)(lVar10 + 0x10);
    lVar10 = *(long *)(unaff_x19 + 0xc0);
    if (lVar10 == 0) break;
    lVar17 = *(long *)(lVar10 + 0x10);
    lVar14 = *(long *)PTR_DAT_02ae4c98;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar17 == 0) break;
    uVar6 = *(uint *)(lVar10 + 0x18);
    if (uVar6 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar6 + 1;
      *(undefined8 *)(lVar17 + (long)(int)uVar6 * 8 + 0x20) = uVar11;
    }
    else {
      FUN_01cdb11c(lVar10,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar10 = *(long *)(unaff_x19 + 0x118);
    bVar7 = (bool)(bVar7 | iVar5 == 0x20);
    if (lVar10 == 0) break;
LAB_025fd270:
    if (*(int *)(lVar10 + 0x18) <= iVar16) {
      if (!bVar7) {
        uVar11 = FUN_02760680();
        uVar11 = FUN_0215a598(*(undefined8 *)PTR_DAT_02ae4cf8,uVar11,*(undefined8 *)PTR_DAT_02abb628
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_02ab8108 + 0xe0) == 0) {
          thunk_FUN_011ea084(*(long *)PTR_DAT_02ab8108);
        }
        FUN_02736e4c(uVar11,0);
        fVar18 = (float)FUN_027a82c4(unaff_x26,0);
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_027a8600(0,0,0,0,fVar18 / 5.0,&stack0x00000038,0);
        if (*(int *)(*(long *)PTR_DAT_02ae4c78 + 0xe0) == 0) {
          thunk_FUN_011ea084();
        }
        FUN_027a83bc(0);
        uVar11 = thunk_FUN_01268e40(*(undefined8 *)puVar8);
        FUN_027a88c0(0x3f800000,uVar11,0);
        lVar10 = *(long *)(unaff_x19 + 0xb0);
        if (lVar10 == 0) break;
        lVar17 = *(long *)(lVar10 + 0x10);
        lVar14 = *(long *)PTR_DAT_02ae4c88;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar17 == 0) break;
        uVar6 = *(uint *)(lVar10 + 0x18);
        if (uVar6 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar17 + (long)(int)uVar6 * 8 + 0x20) = uVar11;
        }
        else {
          FUN_01cdb11c(lVar10,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = *(long *)(unaff_x19 + 0xc0);
        uVar11 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ae4660);
        FUN_025f60b8(uVar11,0x20);
        if (lVar10 == 0) break;
        lVar17 = *(long *)(lVar10 + 0x10);
        lVar14 = *(long *)PTR_DAT_02ae4c98;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar17 == 0) break;
        uVar6 = *(uint *)(lVar10 + 0x18);
        if (uVar6 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar17 + (long)(int)uVar6 * 8 + 0x20) = uVar11;
        }
        else {
          FUN_01cdb11c(lVar10,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_025fc18c();
      return;
    }
  }
UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout:
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


