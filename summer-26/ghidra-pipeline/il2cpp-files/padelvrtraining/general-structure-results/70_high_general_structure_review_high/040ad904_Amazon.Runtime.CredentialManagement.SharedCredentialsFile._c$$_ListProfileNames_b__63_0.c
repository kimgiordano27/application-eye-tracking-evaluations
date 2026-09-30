/*
FUNCTION_NAME: Amazon.Runtime.CredentialManagement.SharedCredentialsFile.<>c$$<ListProfileNames>b__63_0
ENTRY_POINT: 040ad904
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Amazon_Runtime_CredentialManagement_SharedCredentialsFile_<>c__<ListProfileNames>b__63_0
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  int *unaff_x19;
  long unaff_x20;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 in_stack_00000028;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xd98));
  FUN_03d2d2b0(PTR_DAT_091a3920);
  FUN_03d2d2b0(PTR_DAT_091abcc0);
  FUN_03d2d2b0(PTR_DAT_091abcc8);
  FUN_03d2d2b0(PTR_DAT_091abcd0);
  FUN_03d2d2b0(PTR_DAT_091abcd8);
  FUN_03d2d2b0(PTR_DAT_091abce0);
  FUN_03d2d2b0(PTR_DAT_091a62f8);
  FUN_03d2d2b0(PTR_DAT_091a1020);
  FUN_03d2d2b0(PTR_DAT_091abce8);
  FUN_03d2d2b0(PTR_DAT_091a38c8);
  FUN_03d2d2b0(PTR_DAT_091abcf0);
  FUN_03d2d2b0(PTR_DAT_091a36d0);
  FUN_03d2d2b0(PTR_DAT_091abd00);
  FUN_03d2d2b0(PTR_DAT_091abd08);
  FUN_03d2d2b0(PTR_DAT_091abd18);
  FUN_03d2d2b0(PTR_DAT_091abd20);
  *(undefined1 *)(unaff_x20 + 0x43b) = 1;
  puVar4 = PTR_DAT_091a1260;
  puVar2 = PTR_DAT_091a0c40;
  in_stack_00000028 = 0;
  lVar13 = *(long *)(unaff_x19 + 10);
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
LAB_040adb44:
    uVar7 = FUN_062f9944(&stack0x00000028,*(undefined8 *)PTR_DAT_091a86b0);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar8 = *(long *)puVar4;
    }
    puVar10 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18);
    *puVar10 = uVar7;
    thunk_FUN_03d1023c(puVar10,uVar7);
  }
  else {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(char *)(lVar13 + 0x90) != '\0') goto LAB_040aed9c;
    *(undefined1 *)(lVar13 + 0x90) = 1;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar7 = FUN_050a06e4(*(undefined8 *)PTR_DAT_091abc48);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar8 = *(long *)puVar4;
    }
    lVar8 = *(long *)(lVar8 + 0xb8);
    *(undefined8 *)(lVar8 + 0x1d0) = uVar7;
    thunk_FUN_03d1023c(lVar8 + 0x1d0,uVar7);
    uVar7 = FUN_050a0a8c(*(undefined8 *)PTR_DAT_091abc58);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(undefined8 *)(lVar8 + 0x118) = uVar7;
    thunk_FUN_03d1023c(lVar8 + 0x118);
    if (DAT_098362ca == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a10e8);
      DAT_098362ca = '\x01';
    }
    lVar8 = **(long **)(*(long *)PTR_DAT_091a10e8 + 0xb8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(char *)(lVar8 + 0x108) != '\0') {
      lVar8 = FUN_03fd50cc(lVar8,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      in_stack_00000028 = FUN_0636bf40(lVar8,*(undefined8 *)PTR_DAT_091a86c0);
      uVar9 = FUN_062f9900(&stack0x00000028,*(undefined8 *)PTR_DAT_091a86b8);
      if ((uVar9 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
        thunk_FUN_03d1023c(unaff_x19 + 0xc,0);
        FUN_04e7a694(unaff_x19 + 2,&stack0x00000028);
        return;
      }
      goto LAB_040adb44;
    }
    uVar7 = FUN_08a50974(*(undefined8 *)PTR_DAT_091a36d0,0);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar8 = *(long *)puVar4;
    }
    puVar10 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18);
    *puVar10 = uVar7;
    thunk_FUN_03d1023c(puVar10,uVar7);
  }
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcd8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abb00);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar8 = *(long *)puVar4;
  }
  puVar10 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  *puVar10 = uVar7;
  thunk_FUN_03d1023c(puVar10,uVar7);
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abd20,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abb58);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78) = uVar7;
  thunk_FUN_03d1023c();
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcc0,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abb40);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x278) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x278);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(long *)(lVar13 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x80),*(undefined8 *)PTR_DAT_091abc40);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x280) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x280);
  lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x280);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar8 = *(long *)(lVar8 + 0x38);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar8 = FUN_05a39464(lVar8,4,*(undefined8 *)PTR_DAT_091a0f68);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091a39b0);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x290) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x290);
  if (DAT_098362ca == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a10e8);
    DAT_098362ca = '\x01';
  }
  puVar3 = PTR_DAT_091a10e8;
  if (**(long **)(*(long *)PTR_DAT_091a10e8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(char *)(**(long **)(*(long *)PTR_DAT_091a10e8 + 0xb8) + 0x108) == '\0') {
    uVar7 = FUN_08a50974(*(undefined8 *)PTR_DAT_091a1020,0);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar8 = *(long *)puVar4;
    }
    puVar10 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xd0);
    *puVar10 = uVar7;
    thunk_FUN_03d1023c(puVar10,uVar7);
    lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091a36d0,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091a36b8);
    **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar7;
    thunk_FUN_03d1023c(*(undefined8 *)(*(long *)puVar4 + 0xb8));
    if (**(long **)(*(long *)puVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar9 = FUN_08a4ce5c(**(long **)(*(long *)puVar4 + 0xb8),0);
    if ((uVar9 & 1) == 0) {
      lVar8 = *(long *)puVar4;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar8 = *(long *)puVar4;
      }
      if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_08a4ce98(**(long **)(lVar8 + 0xb8),1,0);
    }
  }
  else {
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar8 = *(long *)puVar4;
    }
    puVar5 = PTR_DAT_091a36b8;
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar8 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091a36b8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd0) = *(undefined8 *)(lVar8 + 0x140);
    thunk_FUN_03d1023c();
    lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)puVar5);
    **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar7;
    thunk_FUN_03d1023c(*(undefined8 *)(*(long *)puVar4 + 0xb8));
  }
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcd0,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abbd0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar8 = *(long *)puVar4;
  }
  puVar10 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x28);
  *puVar10 = uVar7;
  thunk_FUN_03d1023c(puVar10,uVar7);
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abc80,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abb20);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x270) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x270);
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abce0,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abb80);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x288) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x288);
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abc88,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abc08);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = uVar7;
  thunk_FUN_03d1023c();
  uVar7 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcf0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = uVar7;
  thunk_FUN_03d1023c();
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcb8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abbe8);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80) = uVar7;
  thunk_FUN_03d1023c();
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcb0,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abc10);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88) = uVar7;
  thunk_FUN_03d1023c();
  if (DAT_098362ca == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a10e8);
    DAT_098362ca = '\x01';
  }
  if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(char *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x108) == '\0') {
    lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcc8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abb78);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar8 = *(long *)puVar4;
    }
    lVar8 = *(long *)(lVar8 + 0xb8);
    *(undefined8 *)(lVar8 + 0x2a0) = uVar7;
    thunk_FUN_03d1023c(lVar8 + 0x2a0,uVar7);
  }
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091a3920,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091a3918);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar8 = *(long *)puVar4;
  }
  puVar10 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x98);
  *puVar10 = uVar7;
  thunk_FUN_03d1023c(puVar10,uVar7);
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abd08,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abb48);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8) = uVar7;
  thunk_FUN_03d1023c();
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abc98,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abb50);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x1a0) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x1a0);
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abc90,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abbf8);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x1a8) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x1a8);
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abce8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abba8);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0) = uVar7;
  thunk_FUN_03d1023c();
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abd00,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abc18);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30) = uVar7;
  thunk_FUN_03d1023c();
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abd18,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abb68);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x298) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x298);
  lVar8 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abca8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar8,*(undefined8 *)PTR_DAT_091abb70);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x198) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x198);
  if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x28),*(undefined8 *)PTR_DAT_091abc00);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x1b0) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x1b0);
  if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x28),*(undefined8 *)PTR_DAT_091abb98);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x1b8) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x1b8);
  if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x28),*(undefined8 *)PTR_DAT_091abb90);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x1c0) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x1c0);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0) = *(undefined8 *)(lVar13 + 0x20);
  thunk_FUN_03d1023c();
  if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x30),*(undefined8 *)PTR_DAT_091abb30);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x100) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x100);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar7 = FUN_050a0b74(1,*(undefined8 *)PTR_DAT_091abc50);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf0) = uVar7;
  thunk_FUN_03d1023c();
  if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x38),*(undefined8 *)PTR_DAT_091abbc8);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x108) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x108);
  if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x40),*(undefined8 *)PTR_DAT_091abb28);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x128) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x128);
  if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x40),*(undefined8 *)PTR_DAT_091abb18);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x130) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x130);
  if (*(long *)(lVar13 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x48),*(undefined8 *)PTR_DAT_091abc30);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x138) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x138);
  if (*(long *)(lVar13 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x48),*(undefined8 *)PTR_DAT_091abbb8);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x140) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x140);
  if (*(long *)(lVar13 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x58),*(undefined8 *)PTR_DAT_091abc38);
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar8 + 0x158) = uVar7;
  thunk_FUN_03d1023c(lVar8 + 0x158);
  if (*(long *)(lVar13 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(*(long *)(lVar13 + 0x48),*(undefined8 *)PTR_DAT_091abbc0);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x160) = uVar7;
  thunk_FUN_03d1023c(lVar13 + 0x160);
  puVar2 = PTR_DAT_091abd98;
  lVar13 = FUN_08a515f4(*(undefined8 *)PTR_DAT_091abd98,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar13,*(undefined8 *)PTR_DAT_091abbd8);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x1d8) = uVar7;
  thunk_FUN_03d1023c(lVar13 + 0x1d8);
  lVar13 = FUN_08a515f4(*(undefined8 *)puVar2,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f82e34(lVar13,*(undefined8 *)PTR_DAT_091abbe0);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x1e0) = uVar7;
  thunk_FUN_03d1023c(lVar13 + 0x1e0);
  lVar13 = FUN_08a515f4(*(undefined8 *)puVar2,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04f83194(lVar13,*(undefined8 *)PTR_DAT_091abaf8);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x1e8) = uVar7;
  thunk_FUN_03d1023c(lVar13 + 0x1e8);
  lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1e8);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = FUN_04ec1b74(lVar13,*(undefined8 *)PTR_DAT_091ab530);
  lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar13 + 0x1f0) = uVar7;
  thunk_FUN_03d1023c(lVar13 + 0x1f0);
  if (DAT_098362ca == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a10e8);
    DAT_098362ca = '\x01';
  }
  if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(char *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x108) == '\0') {
    uVar7 = FUN_08a509b0(*(undefined8 *)PTR_DAT_091a62f8,0);
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar13 = *(long *)puVar4;
    }
    puVar10 = (undefined8 *)(*(long *)(lVar13 + 0xb8) + 200);
    *puVar10 = uVar7;
    thunk_FUN_03d1023c(puVar10,uVar7);
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 200);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = FUN_04f82e34(lVar13,*(undefined8 *)PTR_DAT_091abbf0);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd8) = uVar7;
    thunk_FUN_03d1023c();
  }
  else {
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar13 = *(long *)puVar4;
    }
    if (**(long **)(lVar13 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar13 = *(long *)(**(long **)(lVar13 + 0xb8) + 0x118);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = FUN_08a4d9c8(lVar13,0);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 200) = uVar7;
    thunk_FUN_03d1023c();
    lVar13 = **(long **)(*(long *)puVar4 + 0xb8);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    (*(long **)(*(long *)puVar4 + 0xb8))[0x1b] = *(long *)(lVar13 + 0x118);
    thunk_FUN_03d1023c();
  }
  lVar13 = *(long *)puVar4;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar13 = *(long *)puVar4;
  }
  lVar8 = **(long **)(lVar13 + 0xb8);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar13 = (*(long **)(lVar13 + 0xb8))[5];
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  *(undefined8 *)(lVar13 + 0x90) = *(undefined8 *)(lVar8 + 0xe8);
  thunk_FUN_03d1023c();
  if (DAT_098362ca == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a10e8);
    DAT_098362ca = '\x01';
  }
  lVar13 = **(long **)(*(long *)puVar3 + 0xb8);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(char *)(lVar13 + 0x108) == '\0') {
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar13 = *(long *)puVar4;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x1d8);
    if (DAT_098362c8 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f90);
      DAT_098362c8 = '\x01';
    }
    puVar2 = PTR_DAT_091a0f90;
    puVar11 = *(undefined4 **)(*(long *)PTR_DAT_091a0f90 + 0xb8);
    uVar17 = *puVar11;
    uVar15 = puVar11[1];
    uVar16 = puVar11[2];
    uVar14 = puVar11[3];
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    uVar1 = DAT_01914fd8;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_040906f8(0,DAT_01914fd8,0xc0c00000,uVar17,uVar15,uVar16,uVar14,lVar13,0);
    uVar7 = FUN_08a509b0(*(undefined8 *)PTR_DAT_091a38c8,0);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48) = uVar7;
    thunk_FUN_03d1023c();
    puVar3 = PTR_DAT_091a0fe0;
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
    lVar8 = *(long *)(lVar13 + 0x10);
    lVar12 = *(long *)PTR_DAT_091a0fe0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar6 = *(uint *)(lVar13 + 0x18);
    if (uVar6 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar6 + 1;
      puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar6 * 8 + 0x20);
      *puVar10 = uVar7;
      thunk_FUN_03d1023c(puVar10);
    }
    else {
      FUN_05a39734(lVar13,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
    lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1d8);
    if (DAT_098362c8 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f90);
      DAT_098362c8 = '\x01';
    }
    puVar11 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
    uVar17 = *puVar11;
    uVar16 = puVar11[1];
    uVar15 = puVar11[2];
    uVar14 = puVar11[3];
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar8 = FUN_040906f8(0,uVar1,DAT_01914dfc,uVar17,uVar16,uVar15,uVar14,lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = FUN_08a4d9c8(lVar8,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar8 = *(long *)(lVar13 + 0x10);
    lVar12 = *(long *)puVar3;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar6 = *(uint *)(lVar13 + 0x18);
    if (uVar6 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar6 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar6 * 8 + 0x20) = uVar7;
      thunk_FUN_03d1023c();
    }
    else {
      FUN_05a39734(lVar13,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
    lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1d8);
    if (DAT_098362c8 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f90);
      DAT_098362c8 = '\x01';
    }
    puVar11 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
    uVar17 = *puVar11;
    uVar16 = puVar11[1];
    uVar15 = puVar11[2];
    uVar14 = puVar11[3];
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar8 = FUN_040906f8(0,uVar1,DAT_01914b7c,uVar17,uVar16,uVar15,uVar14,lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = FUN_08a4d9c8(lVar8,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar8 = *(long *)(lVar13 + 0x10);
    lVar12 = *(long *)puVar3;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar6 = *(uint *)(lVar13 + 0x18);
    if (uVar6 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar6 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar6 * 8 + 0x20) = uVar7;
      thunk_FUN_03d1023c();
    }
    else {
      FUN_05a39734(lVar13,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = FUN_04f82e34(lVar13,*(undefined8 *)PTR_DAT_091a1ae8);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58) = uVar7;
    thunk_FUN_03d1023c();
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = FUN_04f82e34(lVar13,*(undefined8 *)PTR_DAT_091a4010);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90) = uVar7;
    thunk_FUN_03d1023c();
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = FUN_04f82e34(lVar13,*(undefined8 *)PTR_DAT_091a4008);
    lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
    *(undefined8 *)(lVar13 + 0x1c8) = uVar7;
    thunk_FUN_03d1023c(lVar13 + 0x1c8);
  }
  else {
    uVar6 = FUN_03fcfdac(lVar13,0);
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar13 = *(long *)puVar4;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0xb8);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_03e39b18(lVar13,uVar6 == 0,0);
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_040c3bdc(lVar13,0);
    if (*(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_040a5c4c();
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_040bea80(lVar13,0);
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_03e3564c(lVar13,0);
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_040b8338(lVar13,0);
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1a8);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    Amazon_Runtime_Internal_DefaultRequest__get_OriginalStreamPosition(lVar13,0);
    if (*(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_040a6a10();
    if (uVar6 < 2) {
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar13 = *(long *)puVar4;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x98);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_040a7094(lVar13,0x25,0,1);
    }
    else if (uVar6 == 2) {
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar13 = *(long *)puVar4;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x98);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_040a7094(lVar13,0,0,1);
    }
    else if (uVar6 == 3) {
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar13 = *(long *)puVar4;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x98);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_040a7094(lVar13,0,0,1);
    }
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar13 = *(long *)puVar4;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x278);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_040e1700(lVar13,0);
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_04023070(lVar13,0);
    lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1a0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_03e3a4d4(lVar13,0);
  }
LAB_040aed9c:
  *unaff_x19 = -2;
  FUN_0708d778(unaff_x19 + 2,0);
  return;
}


