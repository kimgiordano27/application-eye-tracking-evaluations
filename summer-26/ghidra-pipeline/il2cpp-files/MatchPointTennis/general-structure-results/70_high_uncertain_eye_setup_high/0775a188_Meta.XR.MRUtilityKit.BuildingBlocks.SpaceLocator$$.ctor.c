/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$.ctor
ENTRY_POINT: 0775a188
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


bool Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator___ctor
               (undefined8 param_1,undefined8 param_2,long param_3)

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
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x19;
  int iVar15;
  long unaff_x20;
  int unaff_w21;
  undefined4 unaff_w22;
  long unaff_x23;
  long lVar16;
  long *unaff_x24;
  long *plVar17;
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
  
  while( true ) {
    lVar10 = thunk_FUN_04484e3c(param_1,param_3);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*unaff_x24 + 0x40)), lVar11 == 0))
    goto LAB_0775aba0;
    if (*(uint *)(unaff_x24 + 3) < 3) goto LAB_0775ab9c;
    unaff_x24[6] = lVar10;
    thunk_FUN_044bb4b4(unaff_x24 + 6,lVar10);
    if ((*(long *)(unaff_x23 + 0x10) == 0) ||
       (lVar10 = FUN_07726f10(*(long *)(unaff_x23 + 0x10),0), lVar10 == 0)) break;
    uStack0000000000000018 = FUN_0952fcb8(lVar10,0);
    lVar10 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000018);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*unaff_x24 + 0x40)), lVar11 == 0))
    goto LAB_0775aba0;
    if (*(uint *)(unaff_x24 + 3) < 4) goto LAB_0775ab9c;
    unaff_x24[7] = lVar10;
    thunk_FUN_044bb4b4(unaff_x24 + 7,lVar10);
    FUN_0771ec00(*(undefined8 *)PTR_DAT_09f329d0,unaff_x24,0);
LAB_0775a31c:
    do {
      lVar10 = *(long *)(unaff_x23 + 0x28);
      if (lVar10 == 0) goto LAB_0775ab98;
      if (*(int *)(lVar10 + 0x18) < 1) {
        if (*(long *)(unaff_x23 + 0x30) == 0) goto LAB_0775ab98;
        if (0 < *(int *)(*(long *)(unaff_x23 + 0x30) + 0x18)) goto LAB_0775a344;
      }
      else {
LAB_0775a344:
        plVar17 = *(long **)(unaff_x23 + 0x10);
        uVar12 = FUN_05baf9bc(lVar10,*(undefined8 *)PTR_DAT_09f1e880);
        if ((*(long *)(unaff_x23 + 0x30) == 0) ||
           (uVar13 = FUN_05b062f4(*(long *)(unaff_x23 + 0x30),*(undefined8 *)PTR_DAT_09f2cb68),
           plVar17 == (long *)0x0)) goto LAB_0775ab98;
        (**(code **)(*plVar17 + 0x8e8))
                  (plVar17,uVar12,uVar13,unaff_w22,*(undefined8 *)(*plVar17 + 0x8f0));
        if (3 < (int)unaff_x19[7]) {
          plVar17 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,6);
          iStack0000000000000024 = unaff_w21;
          lVar10 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000020 + 4);
          if (plVar17 == (long *)0x0) goto LAB_0775ab98;
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0))
          goto LAB_0775aba0;
          if ((int)plVar17[3] == 0) goto LAB_0775ab9c;
          plVar17[4] = lVar10;
          thunk_FUN_044bb4b4(plVar17 + 4,lVar10);
          if (*(long *)(unaff_x23 + 0x28) == 0) goto LAB_0775ab98;
          uStack0000000000000020 = *(undefined4 *)(*(long *)(unaff_x23 + 0x28) + 0x18);
          lVar10 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000020);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar17 + 3) < 2) goto LAB_0775ab9c;
          plVar17[5] = lVar10;
          thunk_FUN_044bb4b4(plVar17 + 5,lVar10);
          if (*(long *)(unaff_x23 + 0x30) == 0) goto LAB_0775ab98;
          uStack000000000000001c = *(undefined4 *)(*(long *)(unaff_x23 + 0x30) + 0x18);
          lVar10 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000018 + 4);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar17 + 3) < 3) goto LAB_0775ab9c;
          plVar17[6] = lVar10;
          thunk_FUN_044bb4b4(plVar17 + 6,lVar10);
          plVar14 = *(long **)(unaff_x23 + 0x10);
          if (((plVar14 == (long *)0x0) ||
              (lVar10 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
              lVar10 == 0)) || (lVar10 = FUN_095259a0(lVar10,0), lVar10 == 0)) goto LAB_0775ab98;
          uStack0000000000000018 = FUN_0952fcb8(lVar10,0);
          lVar10 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000018);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar17 + 3) < 4) goto LAB_0775ab9c;
          plVar17[7] = lVar10;
          thunk_FUN_044bb4b4(plVar17 + 7,lVar10);
          plVar14 = *(long **)(unaff_x23 + 0x10);
          if ((plVar14 == (long *)0x0) ||
             (lVar10 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
             lVar10 == 0)) goto LAB_0775ab98;
          uStack0000000000000014 = FUN_0952fcb8(lVar10,0);
          lVar10 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000010 + 4);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar17 + 3) < 5) goto LAB_0775ab9c;
          plVar17[8] = lVar10;
          thunk_FUN_044bb4b4(plVar17 + 8,lVar10);
          if ((*(long *)(unaff_x23 + 0x10) == 0) ||
             (lVar10 = FUN_07726f10(*(long *)(unaff_x23 + 0x10),0), lVar10 == 0)) goto LAB_0775ab98;
          uStack0000000000000010 = FUN_0952fcb8(lVar10,0);
          lVar10 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000010);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar17 + 3) < 6) goto LAB_0775ab9c;
          plVar17[9] = lVar10;
          thunk_FUN_044bb4b4(plVar17 + 9,lVar10);
          FUN_0771ec00(*(undefined8 *)PTR_DAT_09f329b8,plVar17,0);
        }
      }
      plVar17 = *(long **)(unaff_x23 + 0x10);
      if (plVar17 == (long *)0x0) goto LAB_0775ab98;
      plVar17 = (long *)(**(code **)(*plVar17 + 0x4d8))(plVar17,*(undefined8 *)(*plVar17 + 0x4e0));
      if ((*(long *)(unaff_x23 + 0x10) == 0) ||
         (uVar12 = FUN_07726f10(*(long *)(unaff_x23 + 0x10),0), plVar17 == (long *)0x0))
      goto LAB_0775ab98;
      lVar10 = *plVar17;
      bVar2 = *(byte *)(*(long *)PTR_DAT_09f1ed58 + 0x130);
      if ((*(byte *)(lVar10 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f1ed58))
      {
        bVar2 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
        if ((*(byte *)(lVar10 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f31428)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar17);
        }
        FUN_094edf40(plVar17,uVar12,0);
      }
      else {
        lVar10 = FUN_095259a0(plVar17,0);
        if ((lVar10 == 0) ||
           (lVar10 = FUN_04d7a1ac(lVar10,*(undefined8 *)PTR_DAT_09f1eb40), lVar10 == 0))
        goto LAB_0775ab98;
        FUN_094ed400(lVar10,uVar12,0);
      }
      lVar10 = unaff_x19[0x13];
      unaff_w21 = unaff_w21 + 1;
      if (lVar10 == 0) goto LAB_0775ab98;
      iVar8 = *(int *)(lVar10 + 0x18);
      if (iVar8 <= unaff_w21) {
        if (iVar8 < 1) goto Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__Locate;
        iVar15 = 0;
        goto LAB_0775a714;
      }
      unaff_x23 = FUN_05badb74(lVar10,unaff_w21,*(undefined8 *)PTR_DAT_09f30d78);
      if ((unaff_x23 == 0) || (plVar17 = *(long **)(unaff_x23 + 0x10), plVar17 == (long *)0x0))
      goto LAB_0775ab98;
      uVar12 = (**(code **)(*plVar17 + 0x4d8))(plVar17,*(undefined8 *)(*plVar17 + 0x4e0));
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
      }
      uVar9 = FUN_0952c404(uVar12,0,0);
      if ((uVar9 & 1) == 0) {
        uVar12 = (**(code **)(*unaff_x19 + 0x4b8))();
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
        }
        uVar9 = FUN_09531730(uVar12,0,0);
        if ((uVar9 & 1) != 0) {
          plVar17 = *(long **)(unaff_x23 + 0x10);
          if (((plVar17 == (long *)0x0) ||
              (lVar10 = (**(code **)(*plVar17 + 0x4d8))(plVar17,*(undefined8 *)(*plVar17 + 0x4e0)),
              lVar10 == 0)) || (lVar10 = FUN_095258d0(lVar10,0), lVar10 == 0)) goto LAB_0775ab98;
          uVar12 = thunk_FUN_0953ac24(lVar10,0);
          lVar10 = (**(code **)(*unaff_x19 + 0x4b8))();
          if (lVar10 == 0) goto LAB_0775ab98;
          uVar13 = FUN_0952a094(lVar10,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
          }
          uVar9 = FUN_09531730(uVar12,uVar13,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094c6b48(*(undefined8 *)PTR_DAT_09f329d8,0);
            return false;
          }
        }
        goto LAB_0775a31c;
      }
      plVar17 = *(long **)(unaff_x23 + 0x10);
      if (plVar17 == (long *)0x0) goto LAB_0775ab98;
      (**(code **)(*plVar17 + 0x4c8))(plVar17,unaff_x19[5],*(undefined8 *)(*plVar17 + 0x4d0));
      if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_0775ab98;
      FUN_0772e134(*(long *)(unaff_x23 + 0x10),in_stack_00000008,1,0);
    } while ((int)unaff_x19[7] < 4);
    unaff_x24 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,4);
    iStack0000000000000024 = unaff_w21;
    lVar10 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000020 + 4);
    if (unaff_x24 == (long *)0x0) break;
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*unaff_x24 + 0x40)), lVar11 == 0))
    goto LAB_0775aba0;
    if ((int)unaff_x24[3] == 0) goto LAB_0775ab9c;
    unaff_x24[4] = lVar10;
    thunk_FUN_044bb4b4(unaff_x24 + 4,lVar10);
    plVar17 = *(long **)(unaff_x23 + 0x10);
    if (((plVar17 == (long *)0x0) ||
        (lVar10 = (**(code **)(*plVar17 + 0x4d8))(plVar17,*(undefined8 *)(*plVar17 + 0x4e0)),
        lVar10 == 0)) || (lVar10 = FUN_095259a0(lVar10,0), lVar10 == 0)) break;
    uStack0000000000000020 = FUN_0952fcb8(lVar10,0);
    lVar10 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000020);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*unaff_x24 + 0x40)), lVar11 == 0))
    goto LAB_0775aba0;
    if (*(uint *)(unaff_x24 + 3) < 2) goto LAB_0775ab9c;
    unaff_x24[5] = lVar10;
    thunk_FUN_044bb4b4(unaff_x24 + 5,lVar10);
    plVar17 = *(long **)(unaff_x23 + 0x10);
    if ((plVar17 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar17 + 0x4d8))(plVar17,*(undefined8 *)(*plVar17 + 0x4e0)),
       lVar10 == 0)) break;
    uStack000000000000001c = FUN_0952fcb8(lVar10,0);
    param_1 = *(undefined8 *)(unaff_x20 + 0x48);
    param_3 = (long)&stack0x00000018 + 4;
  }
  goto LAB_0775ab98;
  while( true ) {
    iVar8 = 0;
    while (iVar8 < *(int *)(lVar11 + 0x18)) {
      lVar16 = unaff_x19[0x12];
      uVar7 = FUN_05b0452c(lVar11,iVar8,*unaff_x26);
      if (lVar16 == 0) goto LAB_0775ab98;
      FUN_0731c444(lVar16,uVar7,*unaff_x27);
      lVar11 = *(long *)(lVar10 + 0x30);
      iVar8 = iVar8 + 1;
      if (lVar11 == 0) goto LAB_0775ab98;
    }
    lVar10 = unaff_x19[0x13];
    if (lVar10 == 0) goto LAB_0775ab98;
    iVar8 = *(int *)(lVar10 + 0x18);
    iVar15 = iVar15 + 1;
    if (iVar8 <= iVar15) break;
LAB_0775a714:
    lVar10 = FUN_05badb74(lVar10,iVar15,*(undefined8 *)PTR_DAT_09f30d78);
    if ((lVar10 == 0) || (lVar11 = *(long *)(lVar10 + 0x30), lVar11 == 0)) goto LAB_0775ab98;
  }
Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__Locate:
  if (0 < iVar8) {
    iVar8 = 0;
    do {
      lVar10 = FUN_05badb74(lVar10,iVar8,*(undefined8 *)PTR_DAT_09f30d78);
      if ((lVar10 == 0) || (lVar11 = *(long *)(lVar10 + 0x28), lVar11 == 0)) goto LAB_0775ab98;
      iVar15 = 0;
      while (iVar1 = *(int *)(lVar11 + 0x18), iVar15 < iVar1) {
        lVar16 = unaff_x19[0x12];
        lVar11 = FUN_05badb74(lVar11,iVar15,*unaff_x28);
        if ((lVar11 == 0) || (uVar7 = FUN_0952fcb8(lVar11,0), lVar16 == 0)) goto LAB_0775ab98;
        FUN_0731afd4(lVar16,uVar7,lVar10,*unaff_x29);
        lVar11 = *(long *)(lVar10 + 0x28);
        iVar15 = iVar15 + 1;
        if (lVar11 == 0) goto LAB_0775ab98;
      }
      lVar16 = *(long *)(lVar10 + 0x30);
      if (iVar1 < 1) {
        if (lVar16 == 0) goto LAB_0775ab98;
        if (0 < *(int *)(lVar16 + 0x18)) goto LAB_0775a840;
      }
      else {
        if (lVar16 == 0) goto LAB_0775ab98;
LAB_0775a840:
        *(undefined4 *)(lVar16 + 0x18) = 0;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_07a61000(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
        }
        *(undefined4 *)(lVar10 + 0x1c) = 0;
        *(undefined4 *)(lVar10 + 0x20) = 0;
        *(undefined1 *)(lVar10 + 0x40) = 1;
      }
      lVar10 = unaff_x19[0x13];
      if (lVar10 == 0) goto LAB_0775ab98;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar10 + 0x18));
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
    lVar10 = unaff_x19[0x13];
    uVar12 = *(undefined8 *)PTR_DAT_09f329e0;
    if (lVar10 != 0) {
      while (iStack000000000000002c < *(int *)(lVar10 + 0x18)) {
        lVar10 = FUN_04447c90(*(undefined8 *)puVar3,6);
        if (lVar10 == 0) goto LAB_0775ab98;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0775ab9c;
        *(undefined8 *)(lVar10 + 0x20) = uVar12;
        thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x20),uVar12);
        if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_0775ab9c;
        *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)puVar5;
        thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x28));
        uVar12 = FUN_07a3b850((long)&stack0x00000028 + 4,0);
        if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_0775ab9c;
        *(undefined8 *)(lVar10 + 0x30) = uVar12;
        thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x30),uVar12);
        if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_0775ab9c;
        *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)puVar4;
        thunk_FUN_044bb4b4();
        if ((((unaff_x19[0x13] == 0) ||
             (lVar11 = FUN_05badb74(unaff_x19[0x13],iStack000000000000002c,
                                    *(undefined8 *)PTR_DAT_09f30d78), lVar11 == 0)) ||
            (plVar17 = *(long **)(lVar11 + 0x10), plVar17 == (long *)0x0)) ||
           (lVar11 = (**(code **)(*plVar17 + 0x818))(plVar17,*(undefined8 *)(*plVar17 + 0x820)),
           lVar11 == 0)) goto LAB_0775ab98;
        uStack0000000000000028 = *(undefined4 *)(lVar11 + 0x18);
        uVar12 = FUN_07a3b850(&stack0x00000028,0);
        if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_0775ab9c;
        *(undefined8 *)(lVar10 + 0x40) = uVar12;
        thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x40),uVar12);
        if (*(uint *)(lVar10 + 0x18) < 6) goto LAB_0775ab9c;
        *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)puVar6;
        thunk_FUN_044bb4b4();
        uVar12 = FUN_078b57fc(lVar10,0);
        iStack000000000000002c = iStack000000000000002c + 1;
        lVar10 = unaff_x19[0x13];
        if (lVar10 == 0) goto LAB_0775ab98;
      }
      lVar10 = (**(code **)(*unaff_x19 + 0x4b8))();
      if ((lVar10 != 0) && (lVar10 = FUN_0952a094(lVar10,0), lVar10 != 0)) {
        uStack0000000000000028 = FUN_0953d2f8(lVar10,0);
        uVar13 = FUN_07a3b850(&stack0x00000028,0);
        uVar12 = FUN_078b4f58(uVar12,*(undefined8 *)PTR_DAT_09f329e8,uVar13,0);
        plVar17 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
        iStack0000000000000024 = (**(code **)(*unaff_x19 + 0x4f8))();
        lVar10 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,(long)&stack0x00000020 + 4);
        if (plVar17 != (long *)0x0) {
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0)) {
LAB_0775aba0:
            uVar12 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar12,0);
          }
          if ((int)plVar17[3] == 0) {
LAB_0775ab9c:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar17[4] = lVar10;
          thunk_FUN_044bb4b4(plVar17 + 4,lVar10);
          FUN_0771ec00(uVar12,plVar17,0);
          goto LAB_0775ab30;
        }
      }
    }
  }
LAB_0775ab98:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


