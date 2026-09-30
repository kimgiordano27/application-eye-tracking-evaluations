/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PlaceWithAnchor$$OnLocateSpace
ENTRY_POINT: 0775a4e0
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


bool Meta_XR_MRUtilityKit_BuildingBlocks_PlaceWithAnchor__OnLocateSpace(undefined4 param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *unaff_x19;
  int iVar16;
  long unaff_x20;
  int unaff_w21;
  undefined4 unaff_w22;
  long unaff_x23;
  long lVar17;
  long *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
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
  
  uStack0000000000000018 = param_1;
  while( true ) {
    lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000018);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*unaff_x24 + 0x40)), lVar13 == 0))
    goto LAB_0775aba0;
    if (*(uint *)(unaff_x24 + 3) < 4) goto LAB_0775ab9c;
    unaff_x24[7] = lVar12;
    thunk_FUN_044bb4b4(unaff_x24 + 7,lVar12);
    plVar14 = *(long **)(unaff_x23 + 0x10);
    if ((plVar14 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
       lVar12 == 0)) break;
    uStack0000000000000014 = FUN_0952fcb8(lVar12,0);
    lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000010 + 4);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*unaff_x24 + 0x40)), lVar13 == 0))
    goto LAB_0775aba0;
    if (*(uint *)(unaff_x24 + 3) < 5) goto LAB_0775ab9c;
    unaff_x24[8] = lVar12;
    thunk_FUN_044bb4b4(unaff_x24 + 8,lVar12);
    if ((*(long *)(unaff_x23 + 0x10) == 0) ||
       (lVar12 = FUN_07726f10(*(long *)(unaff_x23 + 0x10),0), lVar12 == 0)) break;
    uStack0000000000000010 = FUN_0952fcb8(lVar12,0);
    lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000010);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*unaff_x24 + 0x40)), lVar13 == 0))
    goto LAB_0775aba0;
    if (*(uint *)(unaff_x24 + 3) < 6) goto LAB_0775ab9c;
    unaff_x24[9] = lVar12;
    thunk_FUN_044bb4b4(unaff_x24 + 9,lVar12);
    FUN_0771ec00(*(undefined8 *)PTR_DAT_09f329b8,unaff_x24,0);
LAB_0775a61c:
    do {
      plVar14 = *(long **)(unaff_x23 + 0x10);
      if (plVar14 == (long *)0x0) goto LAB_0775ab98;
      plVar14 = (long *)(**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0));
      if ((*(long *)(unaff_x23 + 0x10) == 0) ||
         (uVar15 = FUN_07726f10(*(long *)(unaff_x23 + 0x10),0), plVar14 == (long *)0x0))
      goto LAB_0775ab98;
      lVar12 = *plVar14;
      bVar2 = *(byte *)(*(long *)PTR_DAT_09f1ed58 + 0x130);
      if ((*(byte *)(lVar12 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f1ed58))
      {
        bVar2 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
        if ((*(byte *)(lVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f31428)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar14);
        }
        FUN_094edf40(plVar14,uVar15,0);
      }
      else {
        lVar12 = FUN_095259a0(plVar14,0);
        if ((lVar12 == 0) ||
           (lVar12 = FUN_04d7a1ac(lVar12,*(undefined8 *)PTR_DAT_09f1eb40), lVar12 == 0))
        goto LAB_0775ab98;
        FUN_094ed400(lVar12,uVar15,0);
      }
      lVar12 = unaff_x19[0x13];
      unaff_w21 = unaff_w21 + 1;
      if (lVar12 == 0) goto LAB_0775ab98;
      iVar8 = *(int *)(lVar12 + 0x18);
      if (iVar8 <= unaff_w21) {
        if (iVar8 < 1) goto Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__Locate;
        iVar16 = 0;
        goto LAB_0775a714;
      }
      unaff_x23 = FUN_05badb74(lVar12,unaff_w21,*(undefined8 *)PTR_DAT_09f30d78);
      if ((unaff_x23 == 0) || (plVar14 = *(long **)(unaff_x23 + 0x10), plVar14 == (long *)0x0))
      goto LAB_0775ab98;
      uVar15 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0));
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
      }
      uVar9 = FUN_0952c404(uVar15,0,0);
      if ((uVar9 & 1) == 0) {
        uVar15 = (**(code **)(*unaff_x19 + 0x4b8))();
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
        }
        uVar9 = FUN_09531730(uVar15,0,0);
        if ((uVar9 & 1) != 0) {
          plVar14 = *(long **)(unaff_x23 + 0x10);
          if (((plVar14 == (long *)0x0) ||
              (lVar12 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
              lVar12 == 0)) || (lVar12 = FUN_095258d0(lVar12,0), lVar12 == 0)) goto LAB_0775ab98;
          uVar15 = thunk_FUN_0953ac24(lVar12,0);
          lVar12 = (**(code **)(*unaff_x19 + 0x4b8))();
          if (lVar12 == 0) goto LAB_0775ab98;
          uVar11 = FUN_0952a094(lVar12,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
          }
          uVar9 = FUN_09531730(uVar15,uVar11,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094c6b48(*(undefined8 *)PTR_DAT_09f329d8,0);
            return false;
          }
        }
      }
      else {
        plVar14 = *(long **)(unaff_x23 + 0x10);
        if (plVar14 == (long *)0x0) goto LAB_0775ab98;
        (**(code **)(*plVar14 + 0x4c8))(plVar14,unaff_x19[5],*(undefined8 *)(*plVar14 + 0x4d0));
        if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_0775ab98;
        FUN_0772e134(*(long *)(unaff_x23 + 0x10),in_stack_00000008,1,0);
        if (3 < (int)unaff_x19[7]) {
          plVar14 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,4);
          iStack0000000000000024 = unaff_w21;
          lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000020 + 4);
          if (plVar14 == (long *)0x0) goto LAB_0775ab98;
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0))
          goto LAB_0775aba0;
          if ((int)plVar14[3] == 0) goto LAB_0775ab9c;
          plVar14[4] = lVar12;
          thunk_FUN_044bb4b4(plVar14 + 4,lVar12);
          plVar10 = *(long **)(unaff_x23 + 0x10);
          if (((plVar10 == (long *)0x0) ||
              (lVar12 = (**(code **)(*plVar10 + 0x4d8))(plVar10,*(undefined8 *)(*plVar10 + 0x4e0)),
              lVar12 == 0)) || (lVar12 = FUN_095259a0(lVar12,0), lVar12 == 0)) goto LAB_0775ab98;
          uStack0000000000000020 = FUN_0952fcb8(lVar12,0);
          lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000020);
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar14 + 3) < 2) goto LAB_0775ab9c;
          plVar14[5] = lVar12;
          thunk_FUN_044bb4b4(plVar14 + 5,lVar12);
          plVar10 = *(long **)(unaff_x23 + 0x10);
          if ((plVar10 == (long *)0x0) ||
             (lVar12 = (**(code **)(*plVar10 + 0x4d8))(plVar10,*(undefined8 *)(*plVar10 + 0x4e0)),
             lVar12 == 0)) goto LAB_0775ab98;
          uStack000000000000001c = FUN_0952fcb8(lVar12,0);
          lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000018 + 4);
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar14 + 3) < 3) goto LAB_0775ab9c;
          plVar14[6] = lVar12;
          thunk_FUN_044bb4b4(plVar14 + 6,lVar12);
          if ((*(long *)(unaff_x23 + 0x10) == 0) ||
             (lVar12 = FUN_07726f10(*(long *)(unaff_x23 + 0x10),0), lVar12 == 0)) goto LAB_0775ab98;
          uStack0000000000000018 = FUN_0952fcb8(lVar12,0);
          lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000018);
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar14 + 3) < 4) goto LAB_0775ab9c;
          plVar14[7] = lVar12;
          thunk_FUN_044bb4b4(plVar14 + 7,lVar12);
          FUN_0771ec00(*(undefined8 *)PTR_DAT_09f329d0,plVar14,0);
        }
      }
      lVar12 = *(long *)(unaff_x23 + 0x28);
      if (lVar12 == 0) goto LAB_0775ab98;
      if (*(int *)(lVar12 + 0x18) < 1) {
        if (*(long *)(unaff_x23 + 0x30) == 0) goto LAB_0775ab98;
        if (*(int *)(*(long *)(unaff_x23 + 0x30) + 0x18) < 1) goto LAB_0775a61c;
      }
      plVar14 = *(long **)(unaff_x23 + 0x10);
      uVar15 = FUN_05baf9bc(lVar12,*(undefined8 *)PTR_DAT_09f1e880);
      if ((*(long *)(unaff_x23 + 0x30) == 0) ||
         (uVar11 = FUN_05b062f4(*(long *)(unaff_x23 + 0x30),*(undefined8 *)PTR_DAT_09f2cb68),
         plVar14 == (long *)0x0)) goto LAB_0775ab98;
      (**(code **)(*plVar14 + 0x8e8))
                (plVar14,uVar15,uVar11,unaff_w22,*(undefined8 *)(*plVar14 + 0x8f0));
    } while ((int)unaff_x19[7] < 4);
    unaff_x24 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,6);
    iStack0000000000000024 = unaff_w21;
    lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000020 + 4);
    if (unaff_x24 == (long *)0x0) break;
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*unaff_x24 + 0x40)), lVar13 == 0))
    goto LAB_0775aba0;
    if ((int)unaff_x24[3] == 0) goto LAB_0775ab9c;
    unaff_x24[4] = lVar12;
    thunk_FUN_044bb4b4(unaff_x24 + 4,lVar12);
    if (*(long *)(unaff_x23 + 0x28) == 0) break;
    uStack0000000000000020 = *(undefined4 *)(*(long *)(unaff_x23 + 0x28) + 0x18);
    lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000020);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*unaff_x24 + 0x40)), lVar13 == 0))
    goto LAB_0775aba0;
    if (*(uint *)(unaff_x24 + 3) < 2) goto LAB_0775ab9c;
    unaff_x24[5] = lVar12;
    thunk_FUN_044bb4b4(unaff_x24 + 5,lVar12);
    if (*(long *)(unaff_x23 + 0x30) == 0) break;
    uStack000000000000001c = *(undefined4 *)(*(long *)(unaff_x23 + 0x30) + 0x18);
    lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000018 + 4);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*unaff_x24 + 0x40)), lVar13 == 0))
    goto LAB_0775aba0;
    if (*(uint *)(unaff_x24 + 3) < 3) goto LAB_0775ab9c;
    unaff_x24[6] = lVar12;
    thunk_FUN_044bb4b4(unaff_x24 + 6,lVar12);
    plVar14 = *(long **)(unaff_x23 + 0x10);
    if (((plVar14 == (long *)0x0) ||
        (lVar12 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
        lVar12 == 0)) || (lVar12 = FUN_095259a0(lVar12,0), lVar12 == 0)) break;
    uStack0000000000000018 = FUN_0952fcb8(lVar12,0);
  }
  goto LAB_0775ab98;
  while( true ) {
    iVar8 = 0;
    while (iVar8 < *(int *)(lVar13 + 0x18)) {
      lVar17 = unaff_x19[0x12];
      uVar7 = FUN_05b0452c(lVar13,iVar8,*unaff_x26);
      if (lVar17 == 0) goto LAB_0775ab98;
      FUN_0731c444(lVar17,uVar7,*unaff_x27);
      lVar13 = *(long *)(lVar12 + 0x30);
      iVar8 = iVar8 + 1;
      if (lVar13 == 0) goto LAB_0775ab98;
    }
    lVar12 = unaff_x19[0x13];
    if (lVar12 == 0) goto LAB_0775ab98;
    iVar8 = *(int *)(lVar12 + 0x18);
    iVar16 = iVar16 + 1;
    if (iVar8 <= iVar16) break;
LAB_0775a714:
    lVar12 = FUN_05badb74(lVar12,iVar16,*(undefined8 *)PTR_DAT_09f30d78);
    if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x30), lVar13 == 0)) goto LAB_0775ab98;
  }
Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__Locate:
  if (0 < iVar8) {
    iVar8 = 0;
    do {
      lVar12 = FUN_05badb74(lVar12,iVar8,*(undefined8 *)PTR_DAT_09f30d78);
      if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x28), lVar13 == 0)) goto LAB_0775ab98;
      iVar16 = 0;
      while (iVar1 = *(int *)(lVar13 + 0x18), iVar16 < iVar1) {
        lVar17 = unaff_x19[0x12];
        lVar13 = FUN_05badb74(lVar13,iVar16,*unaff_x28);
        if ((lVar13 == 0) || (uVar7 = FUN_0952fcb8(lVar13,0), lVar17 == 0)) goto LAB_0775ab98;
        FUN_0731afd4(lVar17,uVar7,lVar12,*unaff_x29);
        lVar13 = *(long *)(lVar12 + 0x28);
        iVar16 = iVar16 + 1;
        if (lVar13 == 0) goto LAB_0775ab98;
      }
      lVar17 = *(long *)(lVar12 + 0x30);
      if (iVar1 < 1) {
        if (lVar17 == 0) goto LAB_0775ab98;
        if (0 < *(int *)(lVar17 + 0x18)) goto LAB_0775a840;
      }
      else {
        if (lVar17 == 0) goto LAB_0775ab98;
LAB_0775a840:
        *(undefined4 *)(lVar17 + 0x18) = 0;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        *(undefined4 *)(lVar13 + 0x18) = 0;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_07a61000(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
        }
        *(undefined4 *)(lVar12 + 0x1c) = 0;
        *(undefined4 *)(lVar12 + 0x20) = 0;
        *(undefined1 *)(lVar12 + 0x40) = 1;
      }
      lVar12 = unaff_x19[0x13];
      if (lVar12 == 0) goto LAB_0775ab98;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar12 + 0x18));
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
    lVar12 = unaff_x19[0x13];
    uVar15 = *(undefined8 *)PTR_DAT_09f329e0;
    if (lVar12 != 0) {
      while (iStack000000000000002c < *(int *)(lVar12 + 0x18)) {
        lVar12 = FUN_04447c90(*(undefined8 *)puVar3,6);
        if (lVar12 == 0) goto LAB_0775ab98;
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0775ab9c;
        *(undefined8 *)(lVar12 + 0x20) = uVar15;
        thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x20),uVar15);
        if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_0775ab9c;
        *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)puVar5;
        thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x28));
        uVar15 = FUN_07a3b850((long)&stack0x00000028 + 4,0);
        if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0775ab9c;
        *(undefined8 *)(lVar12 + 0x30) = uVar15;
        thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x30),uVar15);
        if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_0775ab9c;
        *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)puVar4;
        thunk_FUN_044bb4b4();
        if ((((unaff_x19[0x13] == 0) ||
             (lVar13 = FUN_05badb74(unaff_x19[0x13],iStack000000000000002c,
                                    *(undefined8 *)PTR_DAT_09f30d78), lVar13 == 0)) ||
            (plVar14 = *(long **)(lVar13 + 0x10), plVar14 == (long *)0x0)) ||
           (lVar13 = (**(code **)(*plVar14 + 0x818))(plVar14,*(undefined8 *)(*plVar14 + 0x820)),
           lVar13 == 0)) goto LAB_0775ab98;
        uStack0000000000000028 = *(undefined4 *)(lVar13 + 0x18);
        uVar15 = FUN_07a3b850(&stack0x00000028,0);
        if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_0775ab9c;
        *(undefined8 *)(lVar12 + 0x40) = uVar15;
        thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x40),uVar15);
        if (*(uint *)(lVar12 + 0x18) < 6) goto LAB_0775ab9c;
        *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)puVar6;
        thunk_FUN_044bb4b4();
        uVar15 = FUN_078b57fc(lVar12,0);
        iStack000000000000002c = iStack000000000000002c + 1;
        lVar12 = unaff_x19[0x13];
        if (lVar12 == 0) goto LAB_0775ab98;
      }
      lVar12 = (**(code **)(*unaff_x19 + 0x4b8))();
      if ((lVar12 != 0) && (lVar12 = FUN_0952a094(lVar12,0), lVar12 != 0)) {
        uStack0000000000000028 = FUN_0953d2f8(lVar12,0);
        uVar11 = FUN_07a3b850(&stack0x00000028,0);
        uVar15 = FUN_078b4f58(uVar15,*(undefined8 *)PTR_DAT_09f329e8,uVar11,0);
        plVar14 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
        iStack0000000000000024 = (**(code **)(*unaff_x19 + 0x4f8))();
        lVar12 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,(long)&stack0x00000020 + 4);
        if (plVar14 != (long *)0x0) {
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0)) {
LAB_0775aba0:
            uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar15,0);
          }
          if ((int)plVar14[3] == 0) {
LAB_0775ab9c:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar14[4] = lVar12;
          thunk_FUN_044bb4b4(plVar14 + 4,lVar12);
          FUN_0771ec00(uVar15,plVar14,0);
          goto LAB_0775ab30;
        }
      }
    }
  }
LAB_0775ab98:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


