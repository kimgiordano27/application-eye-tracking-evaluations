/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 06423378
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__Invoke(long *param_1)

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
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  
  puVar7 = PTR_DAT_07d9fc60;
  if ((DAT_0825ea12 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d8b438);
    FUN_0373b518(PTR_DAT_07d9edc0);
    FUN_0373b518(PTR_DAT_07d8bb08);
    FUN_0373b518(PTR_DAT_07d9fc60);
    FUN_0373b518(PTR_DAT_07d97428);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(PTR_DAT_07da0860);
    DAT_0825ea12 = 1;
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_0825a608 == '\0') {
    FUN_0373b518(PTR_DAT_07d9fc60);
    DAT_0825a608 = '\x01';
  }
  puVar5 = PTR_DAT_07d86398;
  lVar12 = *(long *)puVar7;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar12 = *(long *)puVar7;
  }
  uVar16 = **(undefined8 **)(lVar12 + 0xb8);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar5);
  }
  uVar13 = FUN_075aa744(uVar16,0,0);
  if ((uVar13 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (DAT_0825a608 == '\0') {
      FUN_0373b518(PTR_DAT_07d9fc60);
      DAT_0825a608 = '\x01';
    }
    lVar12 = *(long *)puVar7;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar12 = *(long *)puVar7;
    }
    if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_06423f60;
    uVar10 = FUN_06467660(**(long **)(lVar12 + 0xb8),0);
    uVar10 = uVar10 & 1;
  }
  lVar12 = param_1[4];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,0,param_1[0x16],*(undefined8 *)(*param_1 + 0x220));
    param_1[4] = lVar12;
    thunk_FUN_037aeb94(param_1 + 4,lVar12);
    if (param_1[4] == 0) goto LAB_06423f60;
    FUN_075b9dc8(param_1[4],0);
    param_1[0x2d] = in_stack_00000028;
    param_1[0x2c] = in_stack_00000020;
    param_1[0x2f] = in_stack_00000038;
    param_1[0x2e] = in_stack_00000030;
    param_1[0x29] = in_stack_00000008;
    param_1[0x28] = in_stack_00000000;
    param_1[0x2b] = in_stack_00000018;
    param_1[0x2a] = in_stack_00000010;
  }
  plVar17 = param_1 + 5;
  lVar12 = *plVar17;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[4],param_1[0x18],*(undefined8 *)(*param_1 + 0x220));
    param_1[5] = lVar12;
    thunk_FUN_037aeb94(plVar17,lVar12);
  }
  plVar19 = param_1 + 6;
  lVar12 = *plVar19;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[4],param_1[0x19],*(undefined8 *)(*param_1 + 0x220));
    param_1[6] = lVar12;
    thunk_FUN_037aeb94(plVar19,lVar12);
  }
  plVar18 = param_1 + 7;
  lVar12 = *plVar18;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[4],param_1[0x1a],*(undefined8 *)(*param_1 + 0x220));
    param_1[7] = lVar12;
    thunk_FUN_037aeb94(plVar18,lVar12);
  }
  lVar12 = param_1[8];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[4],param_1[0x1b],*(undefined8 *)(*param_1 + 0x220));
    param_1[8] = lVar12;
    thunk_FUN_037aeb94(param_1 + 8,lVar12);
  }
  lVar12 = param_1[9];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[4],param_1[0x1c],*(undefined8 *)(*param_1 + 0x220));
    param_1[9] = lVar12;
    thunk_FUN_037aeb94(param_1 + 9,lVar12);
  }
  lVar12 = param_1[10];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[4],param_1[0x1f],*(undefined8 *)(*param_1 + 0x220));
    param_1[10] = lVar12;
    thunk_FUN_037aeb94(param_1 + 10,lVar12);
  }
  lVar12 = param_1[0xb];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[4],param_1[0x20],*(undefined8 *)(*param_1 + 0x220));
    param_1[0xb] = lVar12;
    thunk_FUN_037aeb94(param_1 + 0xb,lVar12);
  }
  lVar12 = param_1[0xc];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[8],param_1[0x21],*(undefined8 *)(*param_1 + 0x220));
    param_1[0xc] = lVar12;
    thunk_FUN_037aeb94(param_1 + 0xc,lVar12);
  }
  lVar12 = param_1[0xd];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[0xc],param_1[0x22],*(undefined8 *)(*param_1 + 0x220));
    param_1[0xd] = lVar12;
    thunk_FUN_037aeb94(param_1 + 0xd,lVar12);
  }
  lVar12 = param_1[0xe];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[9],param_1[0x23],*(undefined8 *)(*param_1 + 0x220));
    param_1[0xe] = lVar12;
    thunk_FUN_037aeb94(param_1 + 0xe,lVar12);
  }
  lVar12 = param_1[0xf];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[0xe],param_1[0x24],*(undefined8 *)(*param_1 + 0x220));
    param_1[0xf] = lVar12;
    thunk_FUN_037aeb94(param_1 + 0xf,lVar12);
  }
  lVar12 = param_1[0x12];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[4],param_1[0x17],*(undefined8 *)(*param_1 + 0x220));
    param_1[0x12] = lVar12;
    thunk_FUN_037aeb94(param_1 + 0x12,lVar12);
  }
  lVar12 = param_1[0x10];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[8],param_1[0x1d],*(undefined8 *)(*param_1 + 0x220));
    param_1[0x10] = lVar12;
    thunk_FUN_037aeb94(param_1 + 0x10,lVar12);
  }
  lVar12 = param_1[0x11];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) != 0) {
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_1[9],param_1[0x1e],*(undefined8 *)(*param_1 + 0x220));
    param_1[0x11] = lVar12;
    thunk_FUN_037aeb94(param_1 + 0x11,lVar12);
  }
  lVar12 = param_1[0x25];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar7 = PTR_DAT_07d8bb08;
  plVar1 = param_1 + 0x25;
  uVar13 = FUN_075ac5e0(lVar12,0,0);
  if ((uVar13 & 1) == 0) {
    lVar12 = param_1[0x26];
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar13 = FUN_075ac5e0(lVar12,0,0);
    if ((uVar13 & 1) != 0) goto LAB_06423ab8;
    lVar12 = param_1[0x27];
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar13 = FUN_075ac5e0(lVar12,0,0);
    if ((uVar13 & 1) != 0) goto LAB_06423ab8;
  }
  else {
LAB_06423ab8:
    puVar6 = PTR_DAT_07d8b438;
    if (*plVar19 == 0) goto LAB_06423f60;
    lVar12 = FUN_03f0da94(*plVar19,*(undefined8 *)PTR_DAT_07d8b438);
    *plVar1 = lVar12;
    thunk_FUN_037aeb94(plVar1,lVar12);
    if (*plVar17 == 0) goto LAB_06423f60;
    lVar12 = FUN_03f0da94(*plVar17,*(undefined8 *)puVar6);
    plVar2 = param_1 + 0x26;
    param_1[0x26] = lVar12;
    thunk_FUN_037aeb94(plVar2,lVar12);
    if (param_1[7] == 0) goto LAB_06423f60;
    lVar12 = FUN_03f0da94(param_1[7],*(undefined8 *)puVar6);
    plVar3 = param_1 + 0x27;
    param_1[0x27] = lVar12;
    thunk_FUN_037aeb94(plVar3,lVar12);
    lVar12 = param_1[0x25];
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar13 = FUN_075ac5e0(lVar12,0,0);
    if ((uVar13 & 1) != 0) {
      if ((*plVar19 == 0) || (lVar12 = FUN_075a7484(*plVar19,0), lVar12 == 0)) goto LAB_06423f60;
      lVar12 = FUN_03fe21f8(lVar12,*(undefined8 *)PTR_DAT_07d9edc0);
      *plVar1 = lVar12;
      thunk_FUN_037aeb94(plVar1,lVar12);
      if (*plVar1 == 0) goto LAB_06423f60;
      FUN_075a7dc0(*plVar1,*(undefined8 *)PTR_DAT_07da0860,0);
    }
    lVar12 = *plVar2;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar13 = FUN_075ac5e0(lVar12,0,0);
    if ((uVar13 & 1) != 0) {
      if ((*plVar17 == 0) || (lVar12 = FUN_075a7484(*plVar17,0), lVar12 == 0)) goto LAB_06423f60;
      lVar12 = FUN_03fe21f8(lVar12,*(undefined8 *)PTR_DAT_07d9edc0);
      *plVar2 = lVar12;
      thunk_FUN_037aeb94(plVar2,lVar12);
      if (*plVar2 == 0) goto LAB_06423f60;
      FUN_075a7dc0(*plVar2,*(undefined8 *)PTR_DAT_07da0860,0);
    }
    lVar12 = *plVar3;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar13 = FUN_075ac5e0(lVar12,0,0);
    if ((uVar13 & 1) != 0) {
      if ((*plVar18 == 0) || (lVar12 = FUN_075a7484(*plVar18,0), lVar12 == 0)) goto LAB_06423f60;
      lVar12 = FUN_03fe21f8(lVar12,*(undefined8 *)PTR_DAT_07d9edc0);
      *plVar3 = lVar12;
      thunk_FUN_037aeb94(plVar3,lVar12);
      if (*plVar3 == 0) goto LAB_06423f60;
      FUN_075a7dc0(*plVar3,*(undefined8 *)PTR_DAT_07da0860,0);
    }
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar16 = FUN_075cb860(0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar5);
    }
    uVar13 = FUN_075ac5e0(uVar16,0,0);
    if ((uVar13 & 1) != 0) {
      if (*plVar1 == 0) goto LAB_06423f60;
      FUN_07559f8c(*plVar1,3,0);
      if (*plVar2 == 0) goto LAB_06423f60;
      FUN_07559f8c(*plVar2,1,0);
      if (*plVar3 == 0) goto LAB_06423f60;
      FUN_07559f8c(*plVar3,2,0);
    }
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar16 = FUN_075cb860(0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar5);
  }
  uVar13 = FUN_075ac5e0(uVar16,0,0);
  if ((uVar13 & 1) != 0) {
    if (uVar10 == 0) {
LAB_06423d7c:
      if (*plVar1 == 0) goto LAB_06423f60;
      iVar11 = thunk_FUN_07559f14(*plVar1,0);
      if (iVar11 == 3) goto LAB_06423dd0;
      lVar12 = *plVar1;
      if (lVar12 == 0) goto LAB_06423f60;
      uVar16 = 3;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_07d97428 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar13 = FUN_06488ae4(0);
      if ((uVar13 & 1) != 0) goto LAB_06423d7c;
      if (*plVar1 == 0) goto LAB_06423f60;
      iVar11 = thunk_FUN_07559f14(*plVar1,0);
      if (iVar11 == 1) goto LAB_06423dd0;
      lVar12 = *plVar1;
      if (lVar12 == 0) goto LAB_06423f60;
      uVar16 = 1;
    }
    FUN_07559f8c(lVar12,uVar16,0);
  }
LAB_06423dd0:
  lVar12 = *plVar1;
  if (lVar12 == 0) goto LAB_06423f60;
  if (*(char *)((long)param_1 + 0xaa) != '\0') {
    FUN_075a6b70(lVar12,0,0);
    if (param_1[0x26] == 0) goto LAB_06423f60;
    FUN_075a6b70(param_1[0x26],0,0);
    lVar14 = param_1[0x27];
    if (lVar14 == 0) goto LAB_06423f60;
    bVar8 = 0;
    goto LAB_06423f34;
  }
  bVar8 = FUN_075a6abc(lVar12,0);
  if (*(byte *)(param_1 + 0x15) == (bVar8 & 1)) {
LAB_06423eb4:
    *(undefined1 *)((long)param_1 + 0xab) = 1;
  }
  else {
    if (param_1[0x26] == 0) goto LAB_06423f60;
    bVar8 = FUN_075a6abc(param_1[0x26],0);
    if ((*(byte *)(param_1 + 0x15) ^ 1) == (bVar8 & 1)) goto LAB_06423eb4;
    if (param_1[0x27] == 0) goto LAB_06423f60;
    bVar9 = FUN_075a6abc(param_1[0x27],0);
    bVar4 = *(byte *)(param_1 + 0x15);
    bVar8 = bVar9 & bVar4 != 0;
    if (bVar4 != 0) {
      bVar9 = bVar8;
    }
    bVar15 = bVar4 ^ 1;
    if ((uVar10 != 0) && (bVar4 != 0)) {
      if (*(int *)(*(long *)PTR_DAT_07d97428 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      bVar9 = FUN_06488ae4(0);
      bVar15 = ~bVar9 & 1;
      bVar9 = bVar8;
    }
    if (bVar15 == (bVar9 & 1)) goto LAB_06423eb4;
  }
  if (*plVar1 != 0) {
    FUN_075a6b70(*plVar1,(char)param_1[0x15] == '\0',0);
    if (param_1[0x26] != 0) {
      FUN_075a6b70(param_1[0x26],(char)param_1[0x15],0);
      lVar14 = param_1[0x27];
      bVar8 = (char)param_1[0x15] != '\0';
      lVar12 = 0;
      if ((bool)bVar8) {
        lVar12 = lVar14;
      }
      if ((uVar10 != 0) && ((char)param_1[0x15] != '\0')) {
        if (*(int *)(*(long *)PTR_DAT_07d97428 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        bVar8 = FUN_06488ae4(0);
        lVar14 = lVar12;
      }
      if (lVar14 != 0) {
LAB_06423f34:
        FUN_075a6b70(lVar14,bVar8 & 1,0);
        return;
      }
    }
  }
LAB_06423f60:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


