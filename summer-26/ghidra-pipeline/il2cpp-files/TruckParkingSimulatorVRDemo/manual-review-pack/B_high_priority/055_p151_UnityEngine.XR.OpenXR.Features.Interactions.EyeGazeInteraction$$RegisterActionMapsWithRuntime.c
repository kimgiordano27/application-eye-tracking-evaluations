/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 025fcc04
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime
               (long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  undefined8 *unaff_x20;
  int iVar19;
  long unaff_x21;
  undefined8 *unaff_x22;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  thunk_FUN_011f4b58(*(undefined8 *)(param_1 + 0xc90));
  thunk_FUN_011f4b58(PTR_DAT_02ae4c98);
  thunk_FUN_011f4b58(PTR_DAT_02ae4ca0);
  thunk_FUN_011f4b58(PTR_DAT_02ae4ca8);
  thunk_FUN_011f4b58(PTR_DAT_02ae4cb0);
  thunk_FUN_011f4b58(PTR_DAT_02ae46c0);
  thunk_FUN_011f4b58(PTR_DAT_02ae4cb8);
  thunk_FUN_011f4b58(PTR_DAT_02ae4cc0);
  thunk_FUN_011f4b58(PTR_DAT_02ae4cc8);
  thunk_FUN_011f4b58(PTR_DAT_02ae4cd0);
  thunk_FUN_011f4b58(PTR_DAT_02ab88d0);
  thunk_FUN_011f4b58(PTR_DAT_02ab7b00);
  thunk_FUN_011f4b58(PTR_DAT_02ae4660);
  thunk_FUN_011f4b58(PTR_DAT_02ac3428);
  thunk_FUN_011f4b58(PTR_DAT_02ae4cd8);
  thunk_FUN_011f4b58(PTR_DAT_02ae4c60);
  thunk_FUN_011f4b58(PTR_DAT_02ae4ce0);
  thunk_FUN_011f4b58(PTR_DAT_02ae4ce8);
  thunk_FUN_011f4b58(PTR_DAT_02ae4cf0);
  thunk_FUN_011f4b58(PTR_DAT_02abb628);
  thunk_FUN_011f4b58(PTR_DAT_02ab7bd0);
  thunk_FUN_011f4b58(PTR_DAT_02ae4cf8);
  *(undefined1 *)(unaff_x21 + 0xf65) = 1;
  *(undefined8 *)(unaff_x19 + 0x30) = *unaff_x22;
  lVar12 = FUN_01219524(*unaff_x20,5);
  if (lVar12 == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_025fd70c:
                    /* WARNING: Subroutine does not return */
    FUN_012196e0();
  }
  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_02ae4ce0;
  uVar13 = FUN_02760680();
  uVar4 = *(uint *)(lVar12 + 0x18);
  if ((((uVar4 < 2) || (*(undefined8 *)(lVar12 + 0x28) = uVar13, uVar4 == 2)) ||
      (*(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_02ae4ce8, uVar4 < 4)) ||
     (*(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(unaff_x19 + 0x30), puVar9 = PTR_DAT_02ab8108,
     uVar4 == 4)) goto LAB_025fd70c;
  *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_02ab7bd0;
  uVar13 = FUN_0215a780(lVar12,0);
  lVar12 = *(long *)puVar9;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_011ea084(lVar12);
  }
  FUN_02736f54(uVar13);
  puVar8 = PTR_DAT_02ab7b00;
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  lVar12 = unaff_x19 + 0x50;
  FUN_027a827c(lVar12,*(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x10),0);
  FUN_027a828c(lVar12,**(undefined8 **)(*(long *)puVar8 + 0xb8),0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  fVar20 = *(float *)(*(long *)(unaff_x19 + 0xf8) + 0x18);
  iVar19 = -0x80000000;
  if (fVar20 != INFINITY) {
    iVar19 = (int)fVar20;
  }
  FUN_027a829c(lVar12,iVar19,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a82ac(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x1c),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a82bc(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x24),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a82cc(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x2c),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a82dc(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x30),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a82ec(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x38),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a82fc(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x28),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a830c(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x34),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a831c(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x3c),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a832c(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x44),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a833c(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x40),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a834c(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x44),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  UnityEngine_UIElements_EventCallbackList__get_trickleDownCallbackCount
            (*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x48),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  UnityEngine_UIElements_EventCallbackList__get_bubbleUpCallbackCount
            (*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x4c),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  UnityEngine_UIElements_EventCallbackList__Contains
            (*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x50),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  FUN_027a8384(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x54),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  UnityEngine_UIElements_EventCallbackList__Find
            (*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x58),lVar12,0);
  lVar14 = *(long *)(unaff_x19 + 0xd8);
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) {
    lVar14 = FUN_01219524(*(undefined8 *)PTR_DAT_02ac3428,1);
    *(long *)(unaff_x19 + 0xd8) = lVar14;
    if (lVar14 == 0)
    goto 
    UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  }
  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_025fd70c;
  *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(unaff_x19 + 0x100);
  lVar14 = *(long *)(unaff_x19 + 0xf8);
  if (lVar14 == 0)
  goto 
  UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  fVar20 = (float)*(undefined8 *)(lVar14 + 0x60);
  fVar21 = (float)((ulong)*(undefined8 *)(lVar14 + 0x60) >> 0x20);
  uVar15 = CONCAT44((int)fVar21,(int)fVar20);
  *(ulong *)(unaff_x19 + 0x108) =
       uVar15 ^ (uVar15 ^ 0x8000000080000000) &
                CONCAT44(-(uint)(fVar21 == INFINITY),-(uint)(fVar20 == INFINITY));
  uVar4 = *(uint *)(unaff_x19 + 400);
  iVar19 = -0x80000000;
  if (*(float *)(lVar14 + 0x5c) != INFINITY) {
    iVar19 = (int)*(float *)(lVar14 + 0x5c);
  }
  *(int *)(unaff_x19 + 0x110) = iVar19;
  if ((uVar4 < 8) && ((0xcfU >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(unaff_x19 + 0x114) = *(undefined4 *)(&DAT_0079f398 + (long)(int)uVar4 * 4);
  }
  lVar14 = *(long *)(unaff_x19 + 0x1a0);
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
    if ((uint)*(long *)(lVar14 + 0x18) < 5) goto LAB_025fd70c;
    lVar16 = *(long *)(unaff_x19 + 0x198);
    if (lVar16 == 0)
    goto 
    UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
    if (*(uint *)(lVar16 + 0x18) < 5) goto LAB_025fd70c;
    uVar13 = *(undefined8 *)(lVar14 + 0x60);
    *(undefined8 *)(lVar16 + 0x68) = *(undefined8 *)(lVar14 + 0x68);
    *(undefined8 *)(lVar16 + 0x60) = uVar13;
    lVar14 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar14 == 0)
    goto 
    UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
    if (*(uint *)(lVar14 + 0x18) < 8) goto LAB_025fd70c;
    lVar16 = *(long *)(unaff_x19 + 0x198);
    if (lVar16 == 0)
    goto 
    UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
    if (*(uint *)(lVar16 + 0x18) < 8) goto LAB_025fd70c;
    uVar13 = *(undefined8 *)(lVar14 + 0x90);
    *(undefined8 *)(lVar16 + 0x98) = *(undefined8 *)(lVar14 + 0x98);
    *(undefined8 *)(lVar16 + 0x90) = uVar13;
  }
  lVar14 = *(long *)(unaff_x19 + 0x130);
  if ((lVar14 != 0) && (iVar19 = *(int *)(lVar14 + 0x18), 0 < iVar19)) {
    if (*(long *)(unaff_x19 + 0x138) == 0) {
      uVar13 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ae4cd0);
      FUN_01cda9c4(uVar13,iVar19,*(undefined8 *)PTR_DAT_02ae4cb0);
      lVar14 = *(long *)(unaff_x19 + 0x130);
      *(undefined8 *)(unaff_x19 + 0x138) = uVar13;
      if (lVar14 == 0)
      goto 
      UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout
      ;
    }
    puVar11 = PTR_DAT_02ae4cc0;
    puVar10 = PTR_DAT_02ae4c90;
    iVar19 = 0;
    do {
      if (*(int *)(lVar14 + 0x18) <= iVar19) goto LAB_025fd1bc;
      lVar16 = *(long *)(unaff_x19 + 0x138);
      uVar13 = FUN_01cdae58(lVar14,iVar19,*(undefined8 *)puVar11);
      if (lVar16 == 0) break;
      lVar14 = *(long *)(lVar16 + 0x10);
      lVar17 = *(long *)puVar10;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar14 == 0) break;
      uVar4 = *(uint *)(lVar16 + 0x18);
      if (uVar4 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar4 + 1;
        *(undefined8 *)(lVar14 + (long)(int)uVar4 * 8 + 0x20) = uVar13;
      }
      else {
        FUN_01cdb11c(lVar16,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      lVar14 = *(long *)(unaff_x19 + 0x130);
      iVar19 = iVar19 + 1;
    } while (lVar14 != 0);
    goto 
    UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout;
  }
LAB_025fd1bc:
  lVar14 = *(long *)(unaff_x19 + 0x148);
  if (lVar14 == 0) {
    uVar15 = FUN_0215a08c(0,**(undefined8 **)(*(long *)puVar8 + 0xb8),0);
    if ((uVar15 & 1) != 0) {
      lVar14 = *(long *)(unaff_x19 + 0x148);
      goto LAB_025fd1e4;
    }
    uVar13 = FUN_02760680();
    uVar13 = FUN_0215a598(*(undefined8 *)PTR_DAT_02ae4cd8,uVar13,*(undefined8 *)PTR_DAT_02ae4cf0,0);
    lVar14 = *(long *)puVar9;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_011ea084(lVar14);
    }
    FUN_027376dc(uVar13);
  }
  else {
LAB_025fd1e4:
    *(long *)(unaff_x19 + 0x38) = lVar14;
  }
  lVar14 = *(long *)(unaff_x19 + 0xb0);
  if (lVar14 != 0) {
    iVar19 = *(int *)(lVar14 + 0x18);
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (0 < iVar19) {
      FUN_022ce6ac(*(undefined8 *)(lVar14 + 0x10),0,iVar19,0);
    }
    lVar14 = *(long *)(unaff_x19 + 0xc0);
    if (lVar14 != 0) {
      iVar19 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      in_stack_00000068 = lVar12;
      if (0 < iVar19) {
        FUN_022ce6ac(*(undefined8 *)(lVar14 + 0x10),0,iVar19,0);
      }
      puVar8 = PTR_DAT_02ae4cc8;
      puVar9 = PTR_DAT_02ae4c80;
      lVar12 = *(long *)(unaff_x19 + 0x118);
      if (lVar12 != 0) {
        bVar7 = false;
        iVar19 = 0;
        do {
          if (*(int *)(lVar12 + 0x18) <= iVar19) {
            if (!bVar7) {
              uVar13 = FUN_02760680();
              uVar13 = FUN_0215a598(*(undefined8 *)PTR_DAT_02ae4cf8,uVar13,
                                    *(undefined8 *)PTR_DAT_02abb628,0);
              if (*(int *)(*(long *)PTR_DAT_02ab8108 + 0xe0) == 0) {
                thunk_FUN_011ea084(*(long *)PTR_DAT_02ab8108);
              }
              FUN_02736e4c(uVar13,0);
              fVar20 = (float)FUN_027a82c4(in_stack_00000068,0);
              in_stack_00000038 = 0;
              in_stack_00000040 = 0;
              in_stack_00000048 = 0;
              FUN_027a8600(0,0,0,0,fVar20 / 5.0,&stack0x00000038,0);
              if (*(int *)(*(long *)PTR_DAT_02ae4c78 + 0xe0) == 0) {
                thunk_FUN_011ea084();
              }
              FUN_027a83bc(0);
              uVar13 = thunk_FUN_01268e40(*(undefined8 *)puVar9);
              FUN_027a88c0(0x3f800000,uVar13,0);
              lVar12 = *(long *)(unaff_x19 + 0xb0);
              if (lVar12 == 0) break;
              lVar14 = *(long *)(lVar12 + 0x10);
              lVar16 = *(long *)PTR_DAT_02ae4c88;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar14 == 0) break;
              uVar4 = *(uint *)(lVar12 + 0x18);
              if (uVar4 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar4 + 1;
                *(undefined8 *)(lVar14 + (long)(int)uVar4 * 8 + 0x20) = uVar13;
              }
              else {
                FUN_01cdb11c(lVar12,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              lVar12 = *(long *)(unaff_x19 + 0xc0);
              uVar13 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ae4660);
              FUN_025f60b8(uVar13,0x20);
              if (lVar12 == 0) break;
              lVar14 = *(long *)(lVar12 + 0x10);
              lVar16 = *(long *)PTR_DAT_02ae4c98;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar14 == 0) break;
              uVar4 = *(uint *)(lVar12 + 0x18);
              if (uVar4 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar4 + 1;
                *(undefined8 *)(lVar14 + (long)(int)uVar4 * 8 + 0x20) = uVar13;
              }
              else {
                FUN_01cdb11c(lVar12,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_025fc18c();
            return;
          }
          lVar12 = FUN_01cdae58(lVar12,iVar19,*(undefined8 *)puVar8);
          lVar14 = thunk_FUN_01268e40(*(undefined8 *)puVar9);
          FUN_027a880c(lVar14,0);
          if (lVar14 == 0) break;
          iVar19 = iVar19 + 1;
          FUN_027a87a8(lVar14,iVar19,0);
          if (lVar12 == 0) break;
          fVar20 = *(float *)(lVar12 + 0x18) + *(float *)(lVar12 + 0x20) + 0.5;
          fVar21 = *(float *)(lVar12 + 0x1c) + 0.5;
          iVar6 = -0x80000000;
          if (*(float *)(lVar12 + 0x14) != INFINITY) {
            iVar6 = (int)*(float *)(lVar12 + 0x14);
          }
          fVar22 = *(float *)(lVar12 + 0x20) + 0.5;
          iVar1 = -0x80000000;
          if (fVar20 != INFINITY) {
            iVar1 = (int)fVar20;
          }
          iVar2 = -0x80000000;
          if (fVar21 != INFINITY) {
            iVar2 = (int)fVar21;
          }
          iVar3 = -0x80000000;
          if (fVar22 != INFINITY) {
            iVar3 = (int)fVar22;
          }
          in_stack_00000050 = 0;
          in_stack_00000058 = 0;
          FUN_027a8414(&stack0x00000050,iVar6,*(int *)(unaff_x19 + 0x10c) - iVar1,iVar2,iVar3,0);
          FUN_027a87e4(lVar14,in_stack_00000050,in_stack_00000058,0);
          in_stack_00000038 = 0;
          in_stack_00000040 = 0;
          in_stack_00000048 = 0;
          FUN_027a8600(*(undefined4 *)(lVar12 + 0x1c),*(undefined4 *)(lVar12 + 0x20),
                       *(undefined4 *)(lVar12 + 0x24),*(undefined4 *)(lVar12 + 0x28),
                       *(undefined4 *)(lVar12 + 0x2c),&stack0x00000038,0);
          in_stack_00000028 = in_stack_00000040;
          in_stack_00000020 = in_stack_00000038;
          in_stack_00000030 = in_stack_00000048;
          FUN_027a87c4(lVar14,&stack0x00000020,0);
          FUN_027a87f4(*(undefined4 *)(lVar12 + 0x30),lVar14,0);
          FUN_027a8804(lVar14,0,0);
          lVar16 = *(long *)(unaff_x19 + 0xb0);
          if (lVar16 == 0) break;
          lVar17 = *(long *)(lVar16 + 0x10);
          lVar18 = *(long *)PTR_DAT_02ae4c88;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar17 == 0) break;
          uVar4 = *(uint *)(lVar16 + 0x18);
          if (uVar4 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar4 + 1;
            *(long *)(lVar17 + (long)(int)uVar4 * 8 + 0x20) = lVar14;
          }
          else {
            FUN_01cdb11c(lVar16,lVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          uVar5 = *(undefined4 *)(lVar12 + 0x10);
          uVar13 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ae4660);
          FUN_025f60b8(uVar13,uVar5);
          iVar6 = *(int *)(lVar12 + 0x10);
          lVar12 = *(long *)(unaff_x19 + 0xc0);
          if (lVar12 == 0) break;
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)PTR_DAT_02ae4c98;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 == 0) break;
          uVar4 = *(uint *)(lVar12 + 0x18);
          if (uVar4 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar4 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar4 * 8 + 0x20) = uVar13;
          }
          else {
            FUN_01cdb11c(lVar12,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = *(long *)(unaff_x19 + 0x118);
          bVar7 = (bool)(bVar7 | iVar6 == 0x20);
        } while (lVar12 != 0);
      }
    }
  }
UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout:
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


