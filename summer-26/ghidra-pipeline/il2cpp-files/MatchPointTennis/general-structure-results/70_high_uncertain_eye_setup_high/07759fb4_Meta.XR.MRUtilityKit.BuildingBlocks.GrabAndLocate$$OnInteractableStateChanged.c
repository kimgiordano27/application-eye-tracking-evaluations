/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$OnInteractableStateChanged
ENTRY_POINT: 07759fb4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__OnInteractableStateChanged(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  int iVar17;
  long *unaff_x19;
  long unaff_x20;
  long lVar18;
  uint unaff_w22;
  long unaff_x26;
  undefined8 *puVar19;
  long unaff_x27;
  undefined8 *puVar20;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  int iStack0000000000000024;
  undefined4 uStack0000000000000028;
  int iStack000000000000002c;
  
  puVar19 = *(undefined8 **)(unaff_x26 + 0x990);
  puVar20 = *(undefined8 **)(unaff_x27 + 0x9b0);
  lVar18 = *(long *)(unaff_x20 + 0x5b8);
  iVar8 = 0;
  do {
    iVar17 = *(int *)(param_1 + 0x18);
    if (iVar17 <= iVar8) {
      if (iVar17 < 1) goto Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__Locate;
      iVar8 = 0;
      break;
    }
    lVar9 = FUN_05badb74(param_1,iVar8,*(undefined8 *)PTR_DAT_09f30d78);
    if ((lVar9 == 0) || (plVar10 = *(long **)(lVar9 + 0x10), plVar10 == (long *)0x0))
    goto LAB_0775ab98;
    uVar11 = (**(code **)(*plVar10 + 0x4d8))(plVar10,*(undefined8 *)(*plVar10 + 0x4e0));
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
    }
    uVar12 = FUN_0952c404(uVar11,0,0);
    if ((uVar12 & 1) == 0) {
      uVar11 = (**(code **)(*unaff_x19 + 0x4b8))();
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
      }
      uVar12 = FUN_09531730(uVar11,0,0);
      if ((uVar12 & 1) != 0) {
        plVar10 = *(long **)(lVar9 + 0x10);
        if (((plVar10 == (long *)0x0) ||
            (lVar13 = (**(code **)(*plVar10 + 0x4d8))(plVar10,*(undefined8 *)(*plVar10 + 0x4e0)),
            lVar13 == 0)) || (lVar13 = FUN_095258d0(lVar13,0), lVar13 == 0)) goto LAB_0775ab98;
        uVar11 = thunk_FUN_0953ac24(lVar13,0);
        lVar13 = (**(code **)(*unaff_x19 + 0x4b8))();
        if (lVar13 == 0) goto LAB_0775ab98;
        uVar16 = FUN_0952a094(lVar13,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
        }
        uVar12 = FUN_09531730(uVar11,uVar16,0);
        if ((uVar12 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c6b48(*(undefined8 *)PTR_DAT_09f329d8,0);
          return false;
        }
      }
    }
    else {
      plVar10 = *(long **)(lVar9 + 0x10);
      if (plVar10 == (long *)0x0) goto LAB_0775ab98;
      (**(code **)(*plVar10 + 0x4c8))(plVar10,unaff_x19[5],*(undefined8 *)(*plVar10 + 0x4d0));
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0775ab98;
      FUN_0772e134(*(long *)(lVar9 + 0x10),in_stack_00000008,1,0);
      if (3 < (int)unaff_x19[7]) {
        plVar10 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,4);
        iStack0000000000000024 = iVar8;
        lVar13 = thunk_FUN_04484e3c(*(undefined8 *)(lVar18 + 0x48),(long)&stack0x00000020 + 4);
        if (plVar10 == (long *)0x0) goto LAB_0775ab98;
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_0775aba0;
        if ((int)plVar10[3] == 0) goto LAB_0775ab9c;
        plVar10[4] = lVar13;
        thunk_FUN_044bb4b4(plVar10 + 4,lVar13);
        plVar15 = *(long **)(lVar9 + 0x10);
        if (((plVar15 == (long *)0x0) ||
            (lVar13 = (**(code **)(*plVar15 + 0x4d8))(plVar15,*(undefined8 *)(*plVar15 + 0x4e0)),
            lVar13 == 0)) || (lVar13 = FUN_095259a0(lVar13,0), lVar13 == 0)) goto LAB_0775ab98;
        uStack0000000000000020 = FUN_0952fcb8(lVar13,0);
        lVar13 = thunk_FUN_04484e3c(*(undefined8 *)(lVar18 + 0x48),&stack0x00000020);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar10 + 3) < 2) goto LAB_0775ab9c;
        plVar10[5] = lVar13;
        thunk_FUN_044bb4b4(plVar10 + 5,lVar13);
        plVar15 = *(long **)(lVar9 + 0x10);
        if ((plVar15 == (long *)0x0) ||
           (lVar13 = (**(code **)(*plVar15 + 0x4d8))(plVar15,*(undefined8 *)(*plVar15 + 0x4e0)),
           lVar13 == 0)) goto LAB_0775ab98;
        uStack000000000000001c = FUN_0952fcb8(lVar13,0);
        lVar13 = thunk_FUN_04484e3c(*(undefined8 *)(lVar18 + 0x48),(long)&stack0x00000018 + 4);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar10 + 3) < 3) goto LAB_0775ab9c;
        plVar10[6] = lVar13;
        thunk_FUN_044bb4b4(plVar10 + 6,lVar13);
        if ((*(long *)(lVar9 + 0x10) == 0) ||
           (lVar13 = FUN_07726f10(*(long *)(lVar9 + 0x10),0), lVar13 == 0)) goto LAB_0775ab98;
        uStack0000000000000018 = FUN_0952fcb8(lVar13,0);
        lVar13 = thunk_FUN_04484e3c(*(undefined8 *)(lVar18 + 0x48),&stack0x00000018);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar10 + 3) < 4) goto LAB_0775ab9c;
        plVar10[7] = lVar13;
        thunk_FUN_044bb4b4(plVar10 + 7,lVar13);
        FUN_0771ec00(*(undefined8 *)PTR_DAT_09f329d0,plVar10,0);
      }
    }
    lVar13 = *(long *)(lVar9 + 0x28);
    if (lVar13 == 0) goto LAB_0775ab98;
    if (*(int *)(lVar13 + 0x18) < 1) {
      if (*(long *)(lVar9 + 0x30) == 0) goto LAB_0775ab98;
      if (0 < *(int *)(*(long *)(lVar9 + 0x30) + 0x18)) goto LAB_0775a344;
    }
    else {
LAB_0775a344:
      plVar10 = *(long **)(lVar9 + 0x10);
      uVar11 = FUN_05baf9bc(lVar13,*(undefined8 *)PTR_DAT_09f1e880);
      if ((*(long *)(lVar9 + 0x30) == 0) ||
         (uVar16 = FUN_05b062f4(*(long *)(lVar9 + 0x30),*(undefined8 *)PTR_DAT_09f2cb68),
         plVar10 == (long *)0x0)) goto LAB_0775ab98;
      (**(code **)(*plVar10 + 0x8e8))
                (plVar10,uVar11,uVar16,unaff_w22 & 1,*(undefined8 *)(*plVar10 + 0x8f0));
      if (3 < (int)unaff_x19[7]) {
        plVar10 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,6);
        iStack0000000000000024 = iVar8;
        lVar13 = thunk_FUN_04484e3c(*(undefined8 *)(lVar18 + 0x48),(long)&stack0x00000020 + 4);
        if (plVar10 == (long *)0x0) goto LAB_0775ab98;
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_0775aba0;
        if ((int)plVar10[3] == 0) goto LAB_0775ab9c;
        plVar10[4] = lVar13;
        thunk_FUN_044bb4b4(plVar10 + 4,lVar13);
        if (*(long *)(lVar9 + 0x28) == 0) goto LAB_0775ab98;
        uStack0000000000000020 = *(undefined4 *)(*(long *)(lVar9 + 0x28) + 0x18);
        lVar13 = thunk_FUN_04484e3c(*(undefined8 *)(lVar18 + 0x48),&stack0x00000020);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar10 + 3) < 2) goto LAB_0775ab9c;
        plVar10[5] = lVar13;
        thunk_FUN_044bb4b4(plVar10 + 5,lVar13);
        if (*(long *)(lVar9 + 0x30) == 0) goto LAB_0775ab98;
        uStack000000000000001c = *(undefined4 *)(*(long *)(lVar9 + 0x30) + 0x18);
        lVar13 = thunk_FUN_04484e3c(*(undefined8 *)(lVar18 + 0x48),(long)&stack0x00000018 + 4);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar10 + 3) < 3) goto LAB_0775ab9c;
        plVar10[6] = lVar13;
        thunk_FUN_044bb4b4(plVar10 + 6,lVar13);
        plVar15 = *(long **)(lVar9 + 0x10);
        if (((plVar15 == (long *)0x0) ||
            (lVar13 = (**(code **)(*plVar15 + 0x4d8))(plVar15,*(undefined8 *)(*plVar15 + 0x4e0)),
            lVar13 == 0)) || (lVar13 = FUN_095259a0(lVar13,0), lVar13 == 0)) goto LAB_0775ab98;
        uStack0000000000000018 = FUN_0952fcb8(lVar13,0);
        lVar13 = thunk_FUN_04484e3c(*(undefined8 *)(lVar18 + 0x48),&stack0x00000018);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar10 + 3) < 4) goto LAB_0775ab9c;
        plVar10[7] = lVar13;
        thunk_FUN_044bb4b4(plVar10 + 7,lVar13);
        plVar15 = *(long **)(lVar9 + 0x10);
        if ((plVar15 == (long *)0x0) ||
           (lVar13 = (**(code **)(*plVar15 + 0x4d8))(plVar15,*(undefined8 *)(*plVar15 + 0x4e0)),
           lVar13 == 0)) goto LAB_0775ab98;
        uStack0000000000000014 = FUN_0952fcb8(lVar13,0);
        lVar13 = thunk_FUN_04484e3c(*(undefined8 *)(lVar18 + 0x48),(long)&stack0x00000010 + 4);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar10 + 3) < 5) goto LAB_0775ab9c;
        plVar10[8] = lVar13;
        thunk_FUN_044bb4b4(plVar10 + 8,lVar13);
        if ((*(long *)(lVar9 + 0x10) == 0) ||
           (lVar13 = FUN_07726f10(*(long *)(lVar9 + 0x10),0), lVar13 == 0)) goto LAB_0775ab98;
        uStack0000000000000010 = FUN_0952fcb8(lVar13,0);
        lVar13 = thunk_FUN_04484e3c(*(undefined8 *)(lVar18 + 0x48),&stack0x00000010);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar10 + 3) < 6) goto LAB_0775ab9c;
        plVar10[9] = lVar13;
        thunk_FUN_044bb4b4(plVar10 + 9,lVar13);
        FUN_0771ec00(*(undefined8 *)PTR_DAT_09f329b8,plVar10,0);
      }
    }
    plVar10 = *(long **)(lVar9 + 0x10);
    if (plVar10 == (long *)0x0) goto LAB_0775ab98;
    plVar10 = (long *)(**(code **)(*plVar10 + 0x4d8))(plVar10,*(undefined8 *)(*plVar10 + 0x4e0));
    if ((*(long *)(lVar9 + 0x10) == 0) ||
       (uVar11 = FUN_07726f10(*(long *)(lVar9 + 0x10),0), plVar10 == (long *)0x0))
    goto LAB_0775ab98;
    lVar9 = *plVar10;
    bVar2 = *(byte *)(*(long *)PTR_DAT_09f1ed58 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f1ed58)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f31428)) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(plVar10);
      }
      FUN_094edf40(plVar10,uVar11,0);
    }
    else {
      lVar9 = FUN_095259a0(plVar10,0);
      if ((lVar9 == 0) || (lVar9 = FUN_04d7a1ac(lVar9,*(undefined8 *)PTR_DAT_09f1eb40), lVar9 == 0))
      goto LAB_0775ab98;
      FUN_094ed400(lVar9,uVar11,0);
    }
    param_1 = unaff_x19[0x13];
    iVar8 = iVar8 + 1;
    if (param_1 == 0) goto LAB_0775ab98;
  } while( true );
  while( true ) {
    iVar17 = 0;
    while (iVar17 < *(int *)(lVar9 + 0x18)) {
      lVar13 = unaff_x19[0x12];
      uVar7 = FUN_05b0452c(lVar9,iVar17,*puVar19);
      if (lVar13 == 0) goto LAB_0775ab98;
      FUN_0731c444(lVar13,uVar7,*puVar20);
      lVar9 = *(long *)(lVar18 + 0x30);
      iVar17 = iVar17 + 1;
      if (lVar9 == 0) goto LAB_0775ab98;
    }
    param_1 = unaff_x19[0x13];
    if (param_1 == 0) goto LAB_0775ab98;
    iVar17 = *(int *)(param_1 + 0x18);
    iVar8 = iVar8 + 1;
    if (iVar17 <= iVar8) break;
    lVar18 = FUN_05badb74(param_1,iVar8,*(undefined8 *)PTR_DAT_09f30d78);
    if ((lVar18 == 0) || (lVar9 = *(long *)(lVar18 + 0x30), lVar9 == 0)) goto LAB_0775ab98;
  }
Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__Locate:
  if (0 < iVar17) {
    iVar8 = 0;
    do {
      lVar18 = FUN_05badb74(param_1,iVar8,*(undefined8 *)PTR_DAT_09f30d78);
      if ((lVar18 == 0) || (lVar9 = *(long *)(lVar18 + 0x28), lVar9 == 0)) goto LAB_0775ab98;
      iVar17 = 0;
      while (iVar1 = *(int *)(lVar9 + 0x18), iVar17 < iVar1) {
        lVar13 = unaff_x19[0x12];
        lVar9 = FUN_05badb74(lVar9,iVar17,*unaff_x28);
        if ((lVar9 == 0) || (uVar7 = FUN_0952fcb8(lVar9,0), lVar13 == 0)) goto LAB_0775ab98;
        FUN_0731afd4(lVar13,uVar7,lVar18,*unaff_x29);
        lVar9 = *(long *)(lVar18 + 0x28);
        iVar17 = iVar17 + 1;
        if (lVar9 == 0) goto LAB_0775ab98;
      }
      lVar13 = *(long *)(lVar18 + 0x30);
      if (iVar1 < 1) {
        if (lVar13 == 0) goto LAB_0775ab98;
        if (0 < *(int *)(lVar13 + 0x18)) goto LAB_0775a840;
      }
      else {
        if (lVar13 == 0) goto LAB_0775ab98;
LAB_0775a840:
        *(undefined4 *)(lVar13 + 0x18) = 0;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        *(undefined4 *)(lVar9 + 0x18) = 0;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_07a61000(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
        }
        *(undefined4 *)(lVar18 + 0x1c) = 0;
        *(undefined4 *)(lVar18 + 0x20) = 0;
        *(undefined1 *)(lVar18 + 0x40) = 1;
      }
      param_1 = unaff_x19[0x13];
      if (param_1 == 0) goto LAB_0775ab98;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x18));
  }
  iVar8 = (**(code **)(*unaff_x19 + 0x4f8))();
  puVar6 = PTR_DAT_09f329c8;
  puVar5 = PTR_DAT_09f329c0;
  puVar4 = PTR_DAT_09f28f78;
  puVar3 = PTR_DAT_09f1e5f0;
  if (iVar8 < 4) {
LAB_0775ab30:
    if (unaff_x19[0x13] != 0) {
      return 0 < *(int *)(unaff_x19[0x13] + 0x18);
    }
  }
  else {
    iStack000000000000002c = 0;
    lVar18 = unaff_x19[0x13];
    uVar11 = *(undefined8 *)PTR_DAT_09f329e0;
    if (lVar18 != 0) {
      while (iStack000000000000002c < *(int *)(lVar18 + 0x18)) {
        lVar18 = FUN_04447c90(*(undefined8 *)puVar3,6);
        if (lVar18 == 0) goto LAB_0775ab98;
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0775ab9c;
        *(undefined8 *)(lVar18 + 0x20) = uVar11;
        thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x20),uVar11);
        if (*(uint *)(lVar18 + 0x18) < 2) goto LAB_0775ab9c;
        *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)puVar5;
        thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x28));
        uVar11 = FUN_07a3b850((long)&stack0x00000028 + 4,0);
        if (*(uint *)(lVar18 + 0x18) < 3) goto LAB_0775ab9c;
        *(undefined8 *)(lVar18 + 0x30) = uVar11;
        thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x30),uVar11);
        if (*(uint *)(lVar18 + 0x18) < 4) goto LAB_0775ab9c;
        *(undefined8 *)(lVar18 + 0x38) = *(undefined8 *)puVar4;
        thunk_FUN_044bb4b4();
        if ((((unaff_x19[0x13] == 0) ||
             (lVar9 = FUN_05badb74(unaff_x19[0x13],iStack000000000000002c,
                                   *(undefined8 *)PTR_DAT_09f30d78), lVar9 == 0)) ||
            (plVar10 = *(long **)(lVar9 + 0x10), plVar10 == (long *)0x0)) ||
           (lVar9 = (**(code **)(*plVar10 + 0x818))(plVar10,*(undefined8 *)(*plVar10 + 0x820)),
           lVar9 == 0)) goto LAB_0775ab98;
        uStack0000000000000028 = *(undefined4 *)(lVar9 + 0x18);
        uVar11 = FUN_07a3b850(&stack0x00000028,0);
        if (*(uint *)(lVar18 + 0x18) < 5) goto LAB_0775ab9c;
        *(undefined8 *)(lVar18 + 0x40) = uVar11;
        thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x40),uVar11);
        if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_0775ab9c;
        *(undefined8 *)(lVar18 + 0x48) = *(undefined8 *)puVar6;
        thunk_FUN_044bb4b4();
        uVar11 = FUN_078b57fc(lVar18,0);
        iStack000000000000002c = iStack000000000000002c + 1;
        lVar18 = unaff_x19[0x13];
        if (lVar18 == 0) goto LAB_0775ab98;
      }
      lVar18 = (**(code **)(*unaff_x19 + 0x4b8))();
      if ((lVar18 != 0) && (lVar18 = FUN_0952a094(lVar18,0), lVar18 != 0)) {
        uStack0000000000000028 = FUN_0953d2f8(lVar18,0);
        uVar16 = FUN_07a3b850(&stack0x00000028,0);
        uVar11 = FUN_078b4f58(uVar11,*(undefined8 *)PTR_DAT_09f329e8,uVar16,0);
        plVar10 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
        iStack0000000000000024 = (**(code **)(*unaff_x19 + 0x4f8))();
        lVar18 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,(long)&stack0x00000020 + 4);
        if (plVar10 != (long *)0x0) {
          if ((lVar18 != 0) &&
             (lVar9 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
LAB_0775aba0:
            uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar11,0);
          }
          if ((int)plVar10[3] == 0) {
LAB_0775ab9c:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar10[4] = lVar18;
          thunk_FUN_044bb4b4(plVar10 + 4,lVar18);
          FUN_0771ec00(uVar11,plVar10,0);
          goto LAB_0775ab30;
        }
      }
    }
  }
LAB_0775ab98:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


