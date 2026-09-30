/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose
ENTRY_POINT: 025fd178
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 135
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__set_pose
               (long param_1,undefined8 param_2)

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
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long in_x9;
  long lVar16;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  int iVar17;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
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
  
  while( true ) {
    if ((uint)in_x10 < in_w11) {
      *(uint *)(unaff_x22 + 0x18) = (uint)in_x10 + 1;
      *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_2;
    }
    else {
      FUN_01cdb11c(unaff_x22,param_2,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    lVar10 = *(long *)(unaff_x19 + 0x130);
    unaff_w21 = unaff_w21 + 1;
    if (lVar10 == 0)
    goto 
    UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
    if (*(int *)(lVar10 + 0x18) <= unaff_w21) break;
    unaff_x22 = *(long *)(unaff_x19 + 0x138);
    param_2 = FUN_01cdae58(lVar10,unaff_w21,*unaff_x20);
    if (unaff_x22 == 0)
    goto 
    UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
    param_1 = *(long *)(unaff_x22 + 0x10);
    in_x9 = *unaff_x24;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0)
    goto 
    UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
    in_x10 = (long)*(int *)(unaff_x22 + 0x18);
    in_w11 = *(uint *)(param_1 + 0x18);
  }
  lVar10 = *(long *)(unaff_x19 + 0x148);
  if (lVar10 == 0) {
    uVar11 = FUN_0215a08c(0,**(undefined8 **)(*unaff_x23 + 0xb8),0);
    if ((uVar11 & 1) != 0) {
      lVar10 = *(long *)(unaff_x19 + 0x148);
      goto LAB_025fd1e4;
    }
    uVar14 = FUN_02760680();
    uVar14 = FUN_0215a598(*(undefined8 *)PTR_DAT_02ae4cd8,uVar14,*(undefined8 *)PTR_DAT_02ae4cf0,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_011ea084(*unaff_x25);
    }
    FUN_027376dc(uVar14);
  }
  else {
LAB_025fd1e4:
    *(long *)(unaff_x19 + 0x38) = lVar10;
  }
  lVar10 = *(long *)(unaff_x19 + 0xb0);
  if (lVar10 != 0) {
    iVar17 = *(int *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (0 < iVar17) {
      FUN_022ce6ac(*(undefined8 *)(lVar10 + 0x10),0,iVar17,0);
    }
    lVar10 = *(long *)(unaff_x19 + 0xc0);
    if (lVar10 != 0) {
      iVar17 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar17) {
        FUN_022ce6ac(*(undefined8 *)(lVar10 + 0x10),0,iVar17,0);
      }
      puVar9 = PTR_DAT_02ae4cc8;
      puVar8 = PTR_DAT_02ae4c80;
      lVar10 = *(long *)(unaff_x19 + 0x118);
      if (lVar10 != 0) {
        bVar7 = false;
        iVar17 = 0;
        goto LAB_025fd270;
      }
    }
  }
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  while( true ) {
    lVar10 = FUN_01cdae58(lVar10,iVar17,*(undefined8 *)puVar9);
    lVar12 = thunk_FUN_01268e40(*(undefined8 *)puVar8);
    FUN_027a880c(lVar12,0);
    if (lVar12 == 0) break;
    iVar17 = iVar17 + 1;
    FUN_027a87a8(lVar12,iVar17,0);
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
    FUN_027a87e4(lVar12,in_stack_00000050,in_stack_00000058,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_027a8600(*(undefined4 *)(lVar10 + 0x1c),*(undefined4 *)(lVar10 + 0x20),
                 *(undefined4 *)(lVar10 + 0x24),*(undefined4 *)(lVar10 + 0x28),
                 *(undefined4 *)(lVar10 + 0x2c),&stack0x00000038,0);
    in_stack_00000028 = in_stack_00000040;
    in_stack_00000020 = in_stack_00000038;
    in_stack_00000030 = in_stack_00000048;
    FUN_027a87c4(lVar12,&stack0x00000020,0);
    FUN_027a87f4(*(undefined4 *)(lVar10 + 0x30),lVar12,0);
    FUN_027a8804(lVar12,0,0);
    lVar13 = *(long *)(unaff_x19 + 0xb0);
    if (lVar13 == 0) break;
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)PTR_DAT_02ae4c88;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) break;
    uVar6 = *(uint *)(lVar13 + 0x18);
    if (uVar6 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar6 + 1;
      *(long *)(lVar15 + (long)(int)uVar6 * 8 + 0x20) = lVar12;
    }
    else {
      FUN_01cdb11c(lVar13,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar4 = *(undefined4 *)(lVar10 + 0x10);
    uVar14 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ae4660);
    FUN_025f60b8(uVar14,uVar4);
    iVar5 = *(int *)(lVar10 + 0x10);
    lVar10 = *(long *)(unaff_x19 + 0xc0);
    if (lVar10 == 0) break;
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar13 = *(long *)PTR_DAT_02ae4c98;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar6 = *(uint *)(lVar10 + 0x18);
    if (uVar6 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar6 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20) = uVar14;
    }
    else {
      FUN_01cdb11c(lVar10,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar10 = *(long *)(unaff_x19 + 0x118);
    bVar7 = (bool)(bVar7 | iVar5 == 0x20);
    if (lVar10 == 0) break;
LAB_025fd270:
    if (*(int *)(lVar10 + 0x18) <= iVar17) {
      if (!bVar7) {
        uVar14 = FUN_02760680();
        uVar14 = FUN_0215a598(*(undefined8 *)PTR_DAT_02ae4cf8,uVar14,*(undefined8 *)PTR_DAT_02abb628
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_02ab8108 + 0xe0) == 0) {
          thunk_FUN_011ea084(*(long *)PTR_DAT_02ab8108);
        }
        FUN_02736e4c(uVar14,0);
        fVar18 = (float)FUN_027a82c4(unaff_x26,0);
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_027a8600(0,0,0,0,fVar18 / 5.0,&stack0x00000038,0);
        if (*(int *)(*(long *)PTR_DAT_02ae4c78 + 0xe0) == 0) {
          thunk_FUN_011ea084();
        }
        FUN_027a83bc(0);
        uVar14 = thunk_FUN_01268e40(*(undefined8 *)puVar8);
        FUN_027a88c0(0x3f800000,uVar14,0);
        lVar10 = *(long *)(unaff_x19 + 0xb0);
        if (lVar10 == 0) break;
        lVar12 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)PTR_DAT_02ae4c88;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar12 == 0) break;
        uVar6 = *(uint *)(lVar10 + 0x18);
        if (uVar6 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20) = uVar14;
        }
        else {
          FUN_01cdb11c(lVar10,uVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = *(long *)(unaff_x19 + 0xc0);
        uVar14 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ae4660);
        FUN_025f60b8(uVar14,0x20);
        if (lVar10 == 0) break;
        lVar12 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)PTR_DAT_02ae4c98;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar12 == 0) break;
        uVar6 = *(uint *)(lVar10 + 0x18);
        if (uVar6 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20) = uVar14;
        }
        else {
          FUN_01cdb11c(lVar10,uVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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


