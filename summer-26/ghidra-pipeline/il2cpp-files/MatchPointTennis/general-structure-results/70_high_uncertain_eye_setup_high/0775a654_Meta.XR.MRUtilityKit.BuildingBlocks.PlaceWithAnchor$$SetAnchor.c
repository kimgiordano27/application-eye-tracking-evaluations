/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PlaceWithAnchor$$SetAnchor
ENTRY_POINT: 0775a654
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


bool Meta_XR_MRUtilityKit_BuildingBlocks_PlaceWithAnchor__SetAnchor(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined **in_x9;
  long *unaff_x19;
  int iVar17;
  long unaff_x20;
  int unaff_w21;
  undefined4 unaff_w22;
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
  
  do {
    lVar16 = *unaff_x24;
    bVar2 = *(byte *)(*(long *)in_x9[0x1ab] + 0x130);
    if ((*(byte *)(lVar16 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)in_x9[0x1ab])) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f31428))
      {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(unaff_x24);
      }
      FUN_094edf40(unaff_x24,param_1,0);
    }
    else {
      lVar16 = FUN_095259a0(unaff_x24,0);
      if ((lVar16 == 0) ||
         (lVar16 = FUN_04d7a1ac(lVar16,*(undefined8 *)PTR_DAT_09f1eb40), lVar16 == 0))
      goto LAB_0775ab98;
      FUN_094ed400(lVar16,param_1,0);
    }
    lVar16 = unaff_x19[0x13];
    unaff_w21 = unaff_w21 + 1;
    if (lVar16 == 0) goto LAB_0775ab98;
    iVar8 = *(int *)(lVar16 + 0x18);
    if (iVar8 <= unaff_w21) {
      if (iVar8 < 1) goto Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__Locate;
      iVar17 = 0;
      break;
    }
    lVar16 = FUN_05badb74(lVar16,unaff_w21,*(undefined8 *)PTR_DAT_09f30d78);
    if ((lVar16 == 0) || (plVar9 = *(long **)(lVar16 + 0x10), plVar9 == (long *)0x0))
    goto LAB_0775ab98;
    uVar10 = (**(code **)(*plVar9 + 0x4d8))(plVar9,*(undefined8 *)(*plVar9 + 0x4e0));
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
    }
    uVar11 = FUN_0952c404(uVar10,0,0);
    if ((uVar11 & 1) == 0) {
      uVar10 = (**(code **)(*unaff_x19 + 0x4b8))();
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
      }
      uVar11 = FUN_09531730(uVar10,0,0);
      if ((uVar11 & 1) != 0) {
        plVar9 = *(long **)(lVar16 + 0x10);
        if (((plVar9 == (long *)0x0) ||
            (lVar12 = (**(code **)(*plVar9 + 0x4d8))(plVar9,*(undefined8 *)(*plVar9 + 0x4e0)),
            lVar12 == 0)) || (lVar12 = FUN_095258d0(lVar12,0), lVar12 == 0)) goto LAB_0775ab98;
        uVar10 = thunk_FUN_0953ac24(lVar12,0);
        lVar12 = (**(code **)(*unaff_x19 + 0x4b8))();
        if (lVar12 == 0) goto LAB_0775ab98;
        uVar15 = FUN_0952a094(lVar12,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
        }
        uVar11 = FUN_09531730(uVar10,uVar15,0);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c6b48(*(undefined8 *)PTR_DAT_09f329d8,0);
          return false;
        }
      }
    }
    else {
      plVar9 = *(long **)(lVar16 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_0775ab98;
      (**(code **)(*plVar9 + 0x4c8))(plVar9,unaff_x19[5],*(undefined8 *)(*plVar9 + 0x4d0));
      if (*(long *)(lVar16 + 0x10) == 0) goto LAB_0775ab98;
      FUN_0772e134(*(long *)(lVar16 + 0x10),in_stack_00000008,1,0);
      if (3 < (int)unaff_x19[7]) {
        plVar9 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,4);
        iStack0000000000000024 = unaff_w21;
        lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000020 + 4);
        if (plVar9 == (long *)0x0) goto LAB_0775ab98;
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
        goto LAB_0775aba0;
        if ((int)plVar9[3] == 0) goto LAB_0775ab9c;
        plVar9[4] = lVar12;
        thunk_FUN_044bb4b4(plVar9 + 4,lVar12);
        plVar14 = *(long **)(lVar16 + 0x10);
        if (((plVar14 == (long *)0x0) ||
            (lVar12 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
            lVar12 == 0)) || (lVar12 = FUN_095259a0(lVar12,0), lVar12 == 0)) goto LAB_0775ab98;
        uStack0000000000000020 = FUN_0952fcb8(lVar12,0);
        lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000020);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar9 + 3) < 2) goto LAB_0775ab9c;
        plVar9[5] = lVar12;
        thunk_FUN_044bb4b4(plVar9 + 5,lVar12);
        plVar14 = *(long **)(lVar16 + 0x10);
        if ((plVar14 == (long *)0x0) ||
           (lVar12 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
           lVar12 == 0)) goto LAB_0775ab98;
        uStack000000000000001c = FUN_0952fcb8(lVar12,0);
        lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000018 + 4);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar9 + 3) < 3) goto LAB_0775ab9c;
        plVar9[6] = lVar12;
        thunk_FUN_044bb4b4(plVar9 + 6,lVar12);
        if ((*(long *)(lVar16 + 0x10) == 0) ||
           (lVar12 = FUN_07726f10(*(long *)(lVar16 + 0x10),0), lVar12 == 0)) goto LAB_0775ab98;
        uStack0000000000000018 = FUN_0952fcb8(lVar12,0);
        lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000018);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar9 + 3) < 4) goto LAB_0775ab9c;
        plVar9[7] = lVar12;
        thunk_FUN_044bb4b4(plVar9 + 7,lVar12);
        FUN_0771ec00(*(undefined8 *)PTR_DAT_09f329d0,plVar9,0);
      }
    }
    lVar12 = *(long *)(lVar16 + 0x28);
    if (lVar12 == 0) goto LAB_0775ab98;
    if (*(int *)(lVar12 + 0x18) < 1) {
      if (*(long *)(lVar16 + 0x30) == 0) goto LAB_0775ab98;
      if (0 < *(int *)(*(long *)(lVar16 + 0x30) + 0x18)) goto LAB_0775a344;
    }
    else {
LAB_0775a344:
      plVar9 = *(long **)(lVar16 + 0x10);
      uVar10 = FUN_05baf9bc(lVar12,*(undefined8 *)PTR_DAT_09f1e880);
      if ((*(long *)(lVar16 + 0x30) == 0) ||
         (uVar15 = FUN_05b062f4(*(long *)(lVar16 + 0x30),*(undefined8 *)PTR_DAT_09f2cb68),
         plVar9 == (long *)0x0)) goto LAB_0775ab98;
      (**(code **)(*plVar9 + 0x8e8))
                (plVar9,uVar10,uVar15,unaff_w22,*(undefined8 *)(*plVar9 + 0x8f0));
      if (3 < (int)unaff_x19[7]) {
        plVar9 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,6);
        iStack0000000000000024 = unaff_w21;
        lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000020 + 4);
        if (plVar9 == (long *)0x0) goto LAB_0775ab98;
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
        goto LAB_0775aba0;
        if ((int)plVar9[3] == 0) goto LAB_0775ab9c;
        plVar9[4] = lVar12;
        thunk_FUN_044bb4b4(plVar9 + 4,lVar12);
        if (*(long *)(lVar16 + 0x28) == 0) goto LAB_0775ab98;
        uStack0000000000000020 = *(undefined4 *)(*(long *)(lVar16 + 0x28) + 0x18);
        lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000020);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar9 + 3) < 2) goto LAB_0775ab9c;
        plVar9[5] = lVar12;
        thunk_FUN_044bb4b4(plVar9 + 5,lVar12);
        if (*(long *)(lVar16 + 0x30) == 0) goto LAB_0775ab98;
        uStack000000000000001c = *(undefined4 *)(*(long *)(lVar16 + 0x30) + 0x18);
        lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000018 + 4);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar9 + 3) < 3) goto LAB_0775ab9c;
        plVar9[6] = lVar12;
        thunk_FUN_044bb4b4(plVar9 + 6,lVar12);
        plVar14 = *(long **)(lVar16 + 0x10);
        if (((plVar14 == (long *)0x0) ||
            (lVar12 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
            lVar12 == 0)) || (lVar12 = FUN_095259a0(lVar12,0), lVar12 == 0)) goto LAB_0775ab98;
        uStack0000000000000018 = FUN_0952fcb8(lVar12,0);
        lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000018);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar9 + 3) < 4) goto LAB_0775ab9c;
        plVar9[7] = lVar12;
        thunk_FUN_044bb4b4(plVar9 + 7,lVar12);
        plVar14 = *(long **)(lVar16 + 0x10);
        if ((plVar14 == (long *)0x0) ||
           (lVar12 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
           lVar12 == 0)) goto LAB_0775ab98;
        uStack0000000000000014 = FUN_0952fcb8(lVar12,0);
        lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000010 + 4);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar9 + 3) < 5) goto LAB_0775ab9c;
        plVar9[8] = lVar12;
        thunk_FUN_044bb4b4(plVar9 + 8,lVar12);
        if ((*(long *)(lVar16 + 0x10) == 0) ||
           (lVar12 = FUN_07726f10(*(long *)(lVar16 + 0x10),0), lVar12 == 0)) goto LAB_0775ab98;
        uStack0000000000000010 = FUN_0952fcb8(lVar12,0);
        lVar12 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000010);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
        goto LAB_0775aba0;
        if (*(uint *)(plVar9 + 3) < 6) goto LAB_0775ab9c;
        plVar9[9] = lVar12;
        thunk_FUN_044bb4b4(plVar9 + 9,lVar12);
        FUN_0771ec00(*(undefined8 *)PTR_DAT_09f329b8,plVar9,0);
      }
    }
    plVar9 = *(long **)(lVar16 + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_0775ab98;
    unaff_x24 = (long *)(**(code **)(*plVar9 + 0x4d8))(plVar9,*(undefined8 *)(*plVar9 + 0x4e0));
    if ((*(long *)(lVar16 + 0x10) == 0) ||
       (param_1 = FUN_07726f10(*(long *)(lVar16 + 0x10),0), unaff_x24 == (long *)0x0))
    goto LAB_0775ab98;
    in_x9 = &PTR_DAT_09f1e000;
  } while( true );
  while( true ) {
    iVar8 = 0;
    while (iVar8 < *(int *)(lVar12 + 0x18)) {
      lVar13 = unaff_x19[0x12];
      uVar7 = FUN_05b0452c(lVar12,iVar8,*unaff_x26);
      if (lVar13 == 0) goto LAB_0775ab98;
      FUN_0731c444(lVar13,uVar7,*unaff_x27);
      lVar12 = *(long *)(lVar16 + 0x30);
      iVar8 = iVar8 + 1;
      if (lVar12 == 0) goto LAB_0775ab98;
    }
    lVar16 = unaff_x19[0x13];
    if (lVar16 == 0) goto LAB_0775ab98;
    iVar8 = *(int *)(lVar16 + 0x18);
    iVar17 = iVar17 + 1;
    if (iVar8 <= iVar17) break;
    lVar16 = FUN_05badb74(lVar16,iVar17,*(undefined8 *)PTR_DAT_09f30d78);
    if ((lVar16 == 0) || (lVar12 = *(long *)(lVar16 + 0x30), lVar12 == 0)) goto LAB_0775ab98;
  }
Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__Locate:
  if (0 < iVar8) {
    iVar8 = 0;
    do {
      lVar16 = FUN_05badb74(lVar16,iVar8,*(undefined8 *)PTR_DAT_09f30d78);
      if ((lVar16 == 0) || (lVar12 = *(long *)(lVar16 + 0x28), lVar12 == 0)) goto LAB_0775ab98;
      iVar17 = 0;
      while (iVar1 = *(int *)(lVar12 + 0x18), iVar17 < iVar1) {
        lVar13 = unaff_x19[0x12];
        lVar12 = FUN_05badb74(lVar12,iVar17,*unaff_x28);
        if ((lVar12 == 0) || (uVar7 = FUN_0952fcb8(lVar12,0), lVar13 == 0)) goto LAB_0775ab98;
        FUN_0731afd4(lVar13,uVar7,lVar16,*unaff_x29);
        lVar12 = *(long *)(lVar16 + 0x28);
        iVar17 = iVar17 + 1;
        if (lVar12 == 0) goto LAB_0775ab98;
      }
      lVar13 = *(long *)(lVar16 + 0x30);
      if (iVar1 < 1) {
        if (lVar13 == 0) goto LAB_0775ab98;
        if (0 < *(int *)(lVar13 + 0x18)) goto LAB_0775a840;
      }
      else {
        if (lVar13 == 0) goto LAB_0775ab98;
LAB_0775a840:
        *(undefined4 *)(lVar13 + 0x18) = 0;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_07a61000(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
        }
        *(undefined4 *)(lVar16 + 0x1c) = 0;
        *(undefined4 *)(lVar16 + 0x20) = 0;
        *(undefined1 *)(lVar16 + 0x40) = 1;
      }
      lVar16 = unaff_x19[0x13];
      if (lVar16 == 0) goto LAB_0775ab98;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar16 + 0x18));
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
    lVar16 = unaff_x19[0x13];
    uVar10 = *(undefined8 *)PTR_DAT_09f329e0;
    if (lVar16 != 0) {
      while (iStack000000000000002c < *(int *)(lVar16 + 0x18)) {
        lVar16 = FUN_04447c90(*(undefined8 *)puVar3,6);
        if (lVar16 == 0) goto LAB_0775ab98;
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0775ab9c;
        *(undefined8 *)(lVar16 + 0x20) = uVar10;
        thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x20),uVar10);
        if (*(uint *)(lVar16 + 0x18) < 2) goto LAB_0775ab9c;
        *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)puVar5;
        thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x28));
        uVar10 = FUN_07a3b850((long)&stack0x00000028 + 4,0);
        if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_0775ab9c;
        *(undefined8 *)(lVar16 + 0x30) = uVar10;
        thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x30),uVar10);
        if (*(uint *)(lVar16 + 0x18) < 4) goto LAB_0775ab9c;
        *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)puVar4;
        thunk_FUN_044bb4b4();
        if ((((unaff_x19[0x13] == 0) ||
             (lVar12 = FUN_05badb74(unaff_x19[0x13],iStack000000000000002c,
                                    *(undefined8 *)PTR_DAT_09f30d78), lVar12 == 0)) ||
            (plVar9 = *(long **)(lVar12 + 0x10), plVar9 == (long *)0x0)) ||
           (lVar12 = (**(code **)(*plVar9 + 0x818))(plVar9,*(undefined8 *)(*plVar9 + 0x820)),
           lVar12 == 0)) goto LAB_0775ab98;
        uStack0000000000000028 = *(undefined4 *)(lVar12 + 0x18);
        uVar10 = FUN_07a3b850(&stack0x00000028,0);
        if (*(uint *)(lVar16 + 0x18) < 5) goto LAB_0775ab9c;
        *(undefined8 *)(lVar16 + 0x40) = uVar10;
        thunk_FUN_044bb4b4((undefined8 *)(lVar16 + 0x40),uVar10);
        if (*(uint *)(lVar16 + 0x18) < 6) goto LAB_0775ab9c;
        *(undefined8 *)(lVar16 + 0x48) = *(undefined8 *)puVar6;
        thunk_FUN_044bb4b4();
        uVar10 = FUN_078b57fc(lVar16,0);
        iStack000000000000002c = iStack000000000000002c + 1;
        lVar16 = unaff_x19[0x13];
        if (lVar16 == 0) goto LAB_0775ab98;
      }
      lVar16 = (**(code **)(*unaff_x19 + 0x4b8))();
      if ((lVar16 != 0) && (lVar16 = FUN_0952a094(lVar16,0), lVar16 != 0)) {
        uStack0000000000000028 = FUN_0953d2f8(lVar16,0);
        uVar15 = FUN_07a3b850(&stack0x00000028,0);
        uVar10 = FUN_078b4f58(uVar10,*(undefined8 *)PTR_DAT_09f329e8,uVar15,0);
        plVar9 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
        iStack0000000000000024 = (**(code **)(*unaff_x19 + 0x4f8))();
        lVar16 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,(long)&stack0x00000020 + 4);
        if (plVar9 != (long *)0x0) {
          if ((lVar16 != 0) &&
             (lVar12 = thunk_FUN_04485110(lVar16,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
LAB_0775aba0:
            uVar10 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar10,0);
          }
          if ((int)plVar9[3] == 0) {
LAB_0775ab9c:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar9[4] = lVar16;
          thunk_FUN_044bb4b4(plVar9 + 4,lVar16);
          FUN_0771ec00(uVar10,plVar9,0);
          goto LAB_0775ab30;
        }
      }
    }
  }
LAB_0775ab98:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


