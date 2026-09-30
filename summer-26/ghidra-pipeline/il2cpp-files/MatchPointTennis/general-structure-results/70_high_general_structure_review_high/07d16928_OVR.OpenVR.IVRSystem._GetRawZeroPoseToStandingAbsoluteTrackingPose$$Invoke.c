/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 07d16928
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__Invoke(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  long *unaff_x19;
  undefined8 uVar16;
  long *plVar17;
  long *unaff_x21;
  long *plVar18;
  long unaff_x22;
  long *plVar19;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  
  puVar5 = PTR_DAT_09f1e538;
  lVar12 = *unaff_x21;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar12 = *unaff_x21;
  }
  uVar16 = **(undefined8 **)(lVar12 + 0xb8);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar5);
  }
  uVar13 = FUN_09531730(uVar16,0,0);
  if ((uVar13 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (*(char *)(unaff_x22 + 0x107) == '\0') {
      FUN_04447ba8(PTR_DAT_09f34920);
      *(undefined1 *)(unaff_x22 + 0x107) = 1;
    }
    lVar12 = *unaff_x21;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar12 = *unaff_x21;
    }
    if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_07d17454;
    uVar10 = FUN_07d5a298(**(long **)(lVar12 + 0xb8),0);
    uVar10 = uVar10 & 1;
  }
  lVar12 = unaff_x19[4];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[4] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 4,lVar12);
    if (unaff_x19[4] == 0) goto LAB_07d17454;
    FUN_09539898(unaff_x19[4],0);
    unaff_x19[0x2d] = in_stack_00000028;
    unaff_x19[0x2c] = in_stack_00000020;
    unaff_x19[0x2f] = in_stack_00000038;
    unaff_x19[0x2e] = in_stack_00000030;
    unaff_x19[0x29] = in_stack_00000008;
    unaff_x19[0x28] = in_stack_00000000;
    unaff_x19[0x2b] = in_stack_00000018;
    unaff_x19[0x2a] = in_stack_00000010;
  }
  plVar17 = unaff_x19 + 5;
  lVar12 = *plVar17;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[5] = lVar12;
    thunk_FUN_044bb4b4(plVar17,lVar12);
  }
  plVar19 = unaff_x19 + 6;
  lVar12 = *plVar19;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[6] = lVar12;
    thunk_FUN_044bb4b4(plVar19,lVar12);
  }
  plVar18 = unaff_x19 + 7;
  lVar12 = *plVar18;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[7] = lVar12;
    thunk_FUN_044bb4b4(plVar18,lVar12);
  }
  lVar12 = unaff_x19[8];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[8] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 8,lVar12);
  }
  lVar12 = unaff_x19[9];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[9] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 9,lVar12);
  }
  lVar12 = unaff_x19[10];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[10] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 10,lVar12);
  }
  lVar12 = unaff_x19[0xb];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0xb] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 0xb,lVar12);
  }
  lVar12 = unaff_x19[0xc];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0xc] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 0xc,lVar12);
  }
  lVar12 = unaff_x19[0xd];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0xd] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 0xd,lVar12);
  }
  lVar12 = unaff_x19[0xe];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0xe] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 0xe,lVar12);
  }
  lVar12 = unaff_x19[0xf];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0xf] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 0xf,lVar12);
  }
  lVar12 = unaff_x19[0x12];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0x12] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 0x12,lVar12);
  }
  lVar12 = unaff_x19[0x10];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0x10] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 0x10,lVar12);
  }
  lVar12 = unaff_x19[0x11];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0x11] = lVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 0x11,lVar12);
  }
  lVar12 = unaff_x19[0x25];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  puVar7 = PTR_DAT_09f20368;
  plVar1 = unaff_x19 + 0x25;
  uVar13 = FUN_0952c404(lVar12,0,0);
  if ((uVar13 & 1) == 0) {
    lVar12 = unaff_x19[0x26];
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar13 = FUN_0952c404(lVar12,0,0);
    if ((uVar13 & 1) != 0) goto LAB_07d16fac;
    lVar12 = unaff_x19[0x27];
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar13 = FUN_0952c404(lVar12,0,0);
    if ((uVar13 & 1) != 0) goto LAB_07d16fac;
  }
  else {
LAB_07d16fac:
    puVar6 = PTR_DAT_09f20288;
    if (*plVar19 == 0) goto LAB_07d17454;
    lVar12 = FUN_04c6bfdc(*plVar19,*(undefined8 *)PTR_DAT_09f20288);
    *plVar1 = lVar12;
    thunk_FUN_044bb4b4(plVar1,lVar12);
    if (*plVar17 == 0) goto LAB_07d17454;
    lVar12 = FUN_04c6bfdc(*plVar17,*(undefined8 *)puVar6);
    plVar2 = unaff_x19 + 0x26;
    unaff_x19[0x26] = lVar12;
    thunk_FUN_044bb4b4(plVar2,lVar12);
    if (unaff_x19[7] == 0) goto LAB_07d17454;
    lVar12 = FUN_04c6bfdc(unaff_x19[7],*(undefined8 *)puVar6);
    plVar3 = unaff_x19 + 0x27;
    unaff_x19[0x27] = lVar12;
    thunk_FUN_044bb4b4(plVar3,lVar12);
    lVar12 = unaff_x19[0x25];
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar13 = FUN_0952c404(lVar12,0,0);
    if ((uVar13 & 1) != 0) {
      if ((*plVar19 == 0) || (lVar12 = FUN_095259a0(*plVar19,0), lVar12 == 0)) goto LAB_07d17454;
      lVar12 = FUN_04d7a120(lVar12,*(undefined8 *)PTR_DAT_09f1ef60);
      *plVar1 = lVar12;
      thunk_FUN_044bb4b4(plVar1,lVar12);
      if (*plVar1 == 0) goto LAB_07d17454;
      FUN_09526088(*plVar1,*(undefined8 *)PTR_DAT_09f1f320,0);
    }
    lVar12 = *plVar2;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar13 = FUN_0952c404(lVar12,0,0);
    if ((uVar13 & 1) != 0) {
      if ((*plVar17 == 0) || (lVar12 = FUN_095259a0(*plVar17,0), lVar12 == 0)) goto LAB_07d17454;
      lVar12 = FUN_04d7a120(lVar12,*(undefined8 *)PTR_DAT_09f1ef60);
      *plVar2 = lVar12;
      thunk_FUN_044bb4b4(plVar2,lVar12);
      if (*plVar2 == 0) goto LAB_07d17454;
      FUN_09526088(*plVar2,*(undefined8 *)PTR_DAT_09f1f320,0);
    }
    lVar12 = *plVar3;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar13 = FUN_0952c404(lVar12,0,0);
    if ((uVar13 & 1) != 0) {
      if ((*plVar18 == 0) || (lVar12 = FUN_095259a0(*plVar18,0), lVar12 == 0)) goto LAB_07d17454;
      lVar12 = FUN_04d7a120(lVar12,*(undefined8 *)PTR_DAT_09f1ef60);
      *plVar3 = lVar12;
      thunk_FUN_044bb4b4(plVar3,lVar12);
      if (*plVar3 == 0) goto LAB_07d17454;
      FUN_09526088(*plVar3,*(undefined8 *)PTR_DAT_09f1f320,0);
    }
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar16 = FUN_0954dbc8(0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)puVar5);
    }
    uVar13 = FUN_0952c404(uVar16,0,0);
    if ((uVar13 & 1) != 0) {
      if (*plVar1 == 0) goto LAB_07d17454;
      FUN_094c32c4(*plVar1,3,0);
      if (*plVar2 == 0) goto LAB_07d17454;
      FUN_094c32c4(*plVar2,1,0);
      if (*plVar3 == 0) goto LAB_07d17454;
      FUN_094c32c4(*plVar3,2,0);
    }
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar16 = FUN_0954dbc8(0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar5);
  }
  uVar13 = FUN_0952c404(uVar16,0,0);
  if ((uVar13 & 1) != 0) {
    if (uVar10 == 0) {
LAB_07d17270:
      if (*plVar1 == 0) goto LAB_07d17454;
      iVar11 = thunk_FUN_094c324c(*plVar1,0);
      if (iVar11 == 3) goto LAB_07d172c4;
      lVar12 = *plVar1;
      if (lVar12 == 0) goto LAB_07d17454;
      uVar16 = 3;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_09f26d38 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar13 = FUN_07d7b31c(0);
      if ((uVar13 & 1) != 0) goto LAB_07d17270;
      if (*plVar1 == 0) goto LAB_07d17454;
      iVar11 = thunk_FUN_094c324c(*plVar1,0);
      if (iVar11 == 1) goto LAB_07d172c4;
      lVar12 = *plVar1;
      if (lVar12 == 0) goto LAB_07d17454;
      uVar16 = 1;
    }
    FUN_094c32c4(lVar12,uVar16,0);
  }
LAB_07d172c4:
  lVar12 = *plVar1;
  if (lVar12 == 0) goto LAB_07d17454;
  if (*(char *)((long)unaff_x19 + 0xaa) != '\0') {
    FUN_0952508c(lVar12,0,0);
    if (unaff_x19[0x26] == 0) goto LAB_07d17454;
    FUN_0952508c(unaff_x19[0x26],0,0);
    lVar14 = unaff_x19[0x27];
    if (lVar14 == 0) goto LAB_07d17454;
    bVar8 = 0;
    goto LAB_07d17428;
  }
  bVar8 = FUN_09524fd8(lVar12,0);
  if (*(byte *)(unaff_x19 + 0x15) == (bVar8 & 1)) {
LAB_07d173a8:
    *(undefined1 *)((long)unaff_x19 + 0xab) = 1;
  }
  else {
    if (unaff_x19[0x26] == 0) goto LAB_07d17454;
    bVar8 = FUN_09524fd8(unaff_x19[0x26],0);
    if ((*(byte *)(unaff_x19 + 0x15) ^ 1) == (bVar8 & 1)) goto LAB_07d173a8;
    if (unaff_x19[0x27] == 0) goto LAB_07d17454;
    bVar9 = FUN_09524fd8(unaff_x19[0x27],0);
    bVar4 = *(byte *)(unaff_x19 + 0x15);
    bVar8 = bVar9 & bVar4 != 0;
    if (bVar4 != 0) {
      bVar9 = bVar8;
    }
    bVar15 = bVar4 ^ 1;
    if ((uVar10 != 0) && (bVar4 != 0)) {
      if (*(int *)(*(long *)PTR_DAT_09f26d38 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      bVar9 = FUN_07d7b31c(0);
      bVar15 = ~bVar9 & 1;
      bVar9 = bVar8;
    }
    if (bVar15 == (bVar9 & 1)) goto LAB_07d173a8;
  }
  if (*plVar1 != 0) {
    FUN_0952508c(*plVar1,(char)unaff_x19[0x15] == '\0',0);
    if (unaff_x19[0x26] != 0) {
      FUN_0952508c(unaff_x19[0x26],(char)unaff_x19[0x15],0);
      lVar14 = unaff_x19[0x27];
      bVar8 = (char)unaff_x19[0x15] != '\0';
      lVar12 = 0;
      if ((bool)bVar8) {
        lVar12 = lVar14;
      }
      if ((uVar10 != 0) && ((char)unaff_x19[0x15] != '\0')) {
        if (*(int *)(*(long *)PTR_DAT_09f26d38 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        bVar8 = FUN_07d7b31c(0);
        lVar14 = lVar12;
      }
      if (lVar14 != 0) {
LAB_07d17428:
        FUN_0952508c(lVar14,bVar8 & 1,0);
        return;
      }
    }
  }
LAB_07d17454:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


