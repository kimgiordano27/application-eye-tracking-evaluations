/*
FUNCTION_NAME: Amazon.Runtime.CredentialManagement.Internal.CredentialProfilePropertyMapping$$ValidateNoReservedProperties
ENTRY_POINT: 040adbac
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


void Amazon_Runtime_CredentialManagement_Internal_CredentialProfilePropertyMapping__ValidateNoReservedProperties
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x25;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar5 = *unaff_x22;
  }
  *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8) = unaff_x20;
  thunk_FUN_03d1023c();
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abd20,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abb58);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78) = uVar6;
  thunk_FUN_03d1023c();
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcc0,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abb40);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x278) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x278);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(long *)(unaff_x21 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x80),*(undefined8 *)PTR_DAT_091abc40);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x280) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x280);
  lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x280);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = *(long *)(lVar5 + 0x38);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = FUN_05a39464(lVar5,4,*(undefined8 *)PTR_DAT_091a0f68);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091a39b0);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x290) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x290);
  if (DAT_098362ca == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a10e8);
    DAT_098362ca = '\x01';
  }
  puVar2 = PTR_DAT_091a10e8;
  if (**(long **)(*(long *)PTR_DAT_091a10e8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(char *)(**(long **)(*(long *)PTR_DAT_091a10e8 + 0xb8) + 0x108) == '\0') {
    uVar6 = FUN_08a50974(*(undefined8 *)PTR_DAT_091a1020,0);
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar5 = *unaff_x22;
    }
    puVar8 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0xd0);
    *puVar8 = uVar6;
    thunk_FUN_03d1023c(puVar8,uVar6);
    lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091a36d0,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091a36b8);
    **(undefined8 **)(*unaff_x22 + 0xb8) = uVar6;
    thunk_FUN_03d1023c(*(undefined8 *)(*unaff_x22 + 0xb8));
    if (**(long **)(*unaff_x22 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = FUN_08a4ce5c(**(long **)(*unaff_x22 + 0xb8),0);
    if ((uVar7 & 1) == 0) {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar5 = *unaff_x22;
      }
      if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_08a4ce98(**(long **)(lVar5 + 0xb8),1,0);
    }
  }
  else {
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar5 = *unaff_x22;
    }
    puVar3 = PTR_DAT_091a36b8;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091a36b8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0) = *(undefined8 *)(lVar5 + 0x140);
    thunk_FUN_03d1023c();
    lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)puVar3);
    **(undefined8 **)(*unaff_x22 + 0xb8) = uVar6;
    thunk_FUN_03d1023c(*(undefined8 *)(*unaff_x22 + 0xb8));
  }
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcd0,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abbd0);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar5 = *unaff_x22;
  }
  puVar8 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x28);
  *puVar8 = uVar6;
  thunk_FUN_03d1023c(puVar8,uVar6);
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abc80,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abb20);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x270) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x270);
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abce0,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abb80);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x288) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x288);
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abc88,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abc08);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40) = uVar6;
  thunk_FUN_03d1023c();
  uVar6 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcf0,0);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = uVar6;
  thunk_FUN_03d1023c();
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcb8,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abbe8);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80) = uVar6;
  thunk_FUN_03d1023c();
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcb0,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abc10);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88) = uVar6;
  thunk_FUN_03d1023c();
  if (DAT_098362ca == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a10e8);
    DAT_098362ca = '\x01';
  }
  if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(char *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x108) == '\0') {
    lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abcc8,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abb78);
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar5 = *unaff_x22;
    }
    lVar5 = *(long *)(lVar5 + 0xb8);
    *(undefined8 *)(lVar5 + 0x2a0) = uVar6;
    thunk_FUN_03d1023c(lVar5 + 0x2a0,uVar6);
  }
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091a3920,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091a3918);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar5 = *unaff_x22;
  }
  puVar8 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x98);
  *puVar8 = uVar6;
  thunk_FUN_03d1023c(puVar8,uVar6);
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abd08,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abb48);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8) = uVar6;
  thunk_FUN_03d1023c();
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abc98,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abb50);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x1a0) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x1a0);
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abc90,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abbf8);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x1a8) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x1a8);
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abce8,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abba8);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0) = uVar6;
  thunk_FUN_03d1023c();
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abd00,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abc18);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30) = uVar6;
  thunk_FUN_03d1023c();
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abd18,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abb68);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x298) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x298);
  lVar5 = FUN_08a50974(*(undefined8 *)PTR_DAT_091abca8,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abb70);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x198) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x198);
  if (*(long *)(unaff_x21 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x28),*(undefined8 *)PTR_DAT_091abc00);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x1b0) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x1b0);
  if (*(long *)(unaff_x21 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x28),*(undefined8 *)PTR_DAT_091abb98);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x1b8) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x1b8);
  if (*(long *)(unaff_x21 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x28),*(undefined8 *)PTR_DAT_091abb90);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x1c0) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x1c0);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0) = *(undefined8 *)(unaff_x21 + 0x20);
  thunk_FUN_03d1023c();
  if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x30),*(undefined8 *)PTR_DAT_091abb30);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x100) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x100);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar6 = FUN_050a0b74(1,*(undefined8 *)PTR_DAT_091abc50);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0) = uVar6;
  thunk_FUN_03d1023c();
  if (*(long *)(unaff_x21 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x38),*(undefined8 *)PTR_DAT_091abbc8);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x108) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x108);
  if (*(long *)(unaff_x21 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x40),*(undefined8 *)PTR_DAT_091abb28);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x128) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x128);
  if (*(long *)(unaff_x21 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x40),*(undefined8 *)PTR_DAT_091abb18);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x130) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x130);
  if (*(long *)(unaff_x21 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x48),*(undefined8 *)PTR_DAT_091abc30);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x138) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x138);
  if (*(long *)(unaff_x21 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x48),*(undefined8 *)PTR_DAT_091abbb8);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x140) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x140);
  if (*(long *)(unaff_x21 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x58),*(undefined8 *)PTR_DAT_091abc38);
  lVar5 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar5 + 0x158) = uVar6;
  thunk_FUN_03d1023c(lVar5 + 0x158);
  if (*(long *)(unaff_x21 + 0x48) != 0) {
    uVar6 = FUN_04f82e34(*(long *)(unaff_x21 + 0x48),*(undefined8 *)PTR_DAT_091abbc0);
    lVar5 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar5 + 0x160) = uVar6;
    thunk_FUN_03d1023c(lVar5 + 0x160);
    puVar3 = PTR_DAT_091abd98;
    lVar5 = FUN_08a515f4(*(undefined8 *)PTR_DAT_091abd98,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abbd8);
    lVar5 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar5 + 0x1d8) = uVar6;
    thunk_FUN_03d1023c(lVar5 + 0x1d8);
    lVar5 = FUN_08a515f4(*(undefined8 *)puVar3,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abbe0);
    lVar5 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar5 + 0x1e0) = uVar6;
    thunk_FUN_03d1023c(lVar5 + 0x1e0);
    lVar5 = FUN_08a515f4(*(undefined8 *)puVar3,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar6 = FUN_04f83194(lVar5,*(undefined8 *)PTR_DAT_091abaf8);
    lVar5 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar5 + 0x1e8) = uVar6;
    thunk_FUN_03d1023c(lVar5 + 0x1e8);
    lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1e8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar6 = FUN_04ec1b74(lVar5,*(undefined8 *)PTR_DAT_091ab530);
    lVar5 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar5 + 0x1f0) = uVar6;
    thunk_FUN_03d1023c(lVar5 + 0x1f0);
    if (DAT_098362ca == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a10e8);
      DAT_098362ca = '\x01';
    }
    if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(char *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x108) == '\0') {
      uVar6 = FUN_08a509b0(*(undefined8 *)PTR_DAT_091a62f8,0);
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar5 = *unaff_x22;
      }
      puVar8 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 200);
      *puVar8 = uVar6;
      thunk_FUN_03d1023c(puVar8,uVar6);
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 200);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091abbf0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8) = uVar6;
      thunk_FUN_03d1023c();
    }
    else {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar5 = *unaff_x22;
      }
      if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar5 = *(long *)(**(long **)(lVar5 + 0xb8) + 0x118);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar6 = FUN_08a4d9c8(lVar5,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200) = uVar6;
      thunk_FUN_03d1023c();
      lVar5 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      (*(long **)(*unaff_x22 + 0xb8))[0x1b] = *(long *)(lVar5 + 0x118);
      thunk_FUN_03d1023c();
    }
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar5 = *unaff_x22;
    }
    lVar9 = **(long **)(lVar5 + 0xb8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = (*(long **)(lVar5 + 0xb8))[5];
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    *(undefined8 *)(lVar5 + 0x90) = *(undefined8 *)(lVar9 + 0xe8);
    thunk_FUN_03d1023c();
    if (DAT_098362ca == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a10e8);
      DAT_098362ca = '\x01';
    }
    lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(char *)(lVar5 + 0x108) == '\0') {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar5 = *unaff_x22;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1d8);
      if (DAT_098362c8 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f90);
        DAT_098362c8 = '\x01';
      }
      puVar2 = PTR_DAT_091a0f90;
      puVar10 = *(undefined4 **)(*(long *)PTR_DAT_091a0f90 + 0xb8);
      uVar15 = *puVar10;
      uVar13 = puVar10[1];
      uVar14 = puVar10[2];
      uVar12 = puVar10[3];
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      uVar1 = DAT_01914fd8;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_040906f8(0,DAT_01914fd8,0xc0c00000,uVar15,uVar13,uVar14,uVar12,lVar5,0);
      uVar6 = FUN_08a509b0(*(undefined8 *)PTR_DAT_091a38c8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48) = uVar6;
      thunk_FUN_03d1023c();
      puVar3 = PTR_DAT_091a0fe0;
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar6 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      lVar9 = *(long *)(lVar5 + 0x10);
      lVar11 = *(long *)PTR_DAT_091a0fe0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar4 = *(uint *)(lVar5 + 0x18);
      if (uVar4 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar4 + 1;
        puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar4 * 8 + 0x20);
        *puVar8 = uVar6;
        thunk_FUN_03d1023c(puVar8);
      }
      else {
        FUN_05a39734(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
      lVar9 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1d8);
      if (DAT_098362c8 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f90);
        DAT_098362c8 = '\x01';
      }
      puVar10 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      uVar15 = *puVar10;
      uVar14 = puVar10[1];
      uVar13 = puVar10[2];
      uVar12 = puVar10[3];
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar9 = FUN_040906f8(0,uVar1,DAT_01914dfc,uVar15,uVar14,uVar13,uVar12,lVar9,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar6 = FUN_08a4d9c8(lVar9,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar9 = *(long *)(lVar5 + 0x10);
      lVar11 = *(long *)puVar3;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar4 = *(uint *)(lVar5 + 0x18);
      if (uVar4 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar4 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar4 * 8 + 0x20) = uVar6;
        thunk_FUN_03d1023c();
      }
      else {
        FUN_05a39734(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
      lVar9 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1d8);
      if (DAT_098362c8 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f90);
        DAT_098362c8 = '\x01';
      }
      puVar10 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      uVar15 = *puVar10;
      uVar14 = puVar10[1];
      uVar13 = puVar10[2];
      uVar12 = puVar10[3];
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar9 = FUN_040906f8(0,uVar1,DAT_01914b7c,uVar15,uVar14,uVar13,uVar12,lVar9,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar6 = FUN_08a4d9c8(lVar9,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar9 = *(long *)(lVar5 + 0x10);
      lVar11 = *(long *)puVar3;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar4 = *(uint *)(lVar5 + 0x18);
      if (uVar4 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar4 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar4 * 8 + 0x20) = uVar6;
        thunk_FUN_03d1023c();
      }
      else {
        FUN_05a39734(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091a1ae8);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58) = uVar6;
      thunk_FUN_03d1023c();
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091a4010);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90) = uVar6;
      thunk_FUN_03d1023c();
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar6 = FUN_04f82e34(lVar5,*(undefined8 *)PTR_DAT_091a4008);
      lVar5 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar5 + 0x1c8) = uVar6;
      thunk_FUN_03d1023c(lVar5 + 0x1c8);
    }
    else {
      uVar4 = FUN_03fcfdac(lVar5,0);
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar5 = *unaff_x22;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_03e39b18(lVar5,uVar4 == 0,0);
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_040c3bdc(lVar5,0);
      if (*(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_040a5c4c();
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_040bea80(lVar5,0);
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_03e3564c(lVar5,0);
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_040b8338(lVar5,0);
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1a8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      Amazon_Runtime_Internal_DefaultRequest__get_OriginalStreamPosition(lVar5,0);
      if (*(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_040a6a10();
      if (uVar4 < 2) {
        lVar5 = *unaff_x22;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar5 = *unaff_x22;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_040a7094(lVar5,0x25,0,1);
      }
      else if (uVar4 == 2) {
        lVar5 = *unaff_x22;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar5 = *unaff_x22;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_040a7094(lVar5,0,0,1);
      }
      else if (uVar4 == 3) {
        lVar5 = *unaff_x22;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar5 = *unaff_x22;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_040a7094(lVar5,0,0,1);
      }
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar5 = *unaff_x22;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x278);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_040e1700(lVar5,0);
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_04023070(lVar5,0);
      lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1a0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_03e3a4d4(lVar5,0);
    }
    *unaff_x19 = 0xfffffffe;
    FUN_0708d778(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


