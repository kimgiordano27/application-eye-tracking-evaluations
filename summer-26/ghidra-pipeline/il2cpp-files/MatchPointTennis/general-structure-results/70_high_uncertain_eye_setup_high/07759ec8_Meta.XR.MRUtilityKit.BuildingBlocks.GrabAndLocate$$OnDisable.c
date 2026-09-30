/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$OnDisable
ENTRY_POINT: 07759ec8
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


bool Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__OnDisable(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  int iVar18;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  int iStack0000000000000024;
  undefined4 uStack0000000000000028;
  int iStack000000000000002c;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x990));
  FUN_04447ba8(PTR_DAT_09f1e8c0);
  FUN_04447ba8(PTR_DAT_09f31348);
  FUN_04447ba8(PTR_DAT_09f1ed58);
  FUN_04447ba8(PTR_DAT_09f20d20);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f31428);
  FUN_04447ba8(PTR_DAT_09f1e5f0);
  FUN_04447ba8(PTR_DAT_09f329b8);
  FUN_04447ba8(PTR_DAT_09f329c0);
  FUN_04447ba8(PTR_DAT_09f329c8);
  FUN_04447ba8(PTR_DAT_09f329d0);
  FUN_04447ba8(PTR_DAT_09f329d8);
  FUN_04447ba8(PTR_DAT_09f329e0);
  FUN_04447ba8(PTR_DAT_09f28f78);
  FUN_04447ba8(PTR_DAT_09f329e8);
  *(undefined1 *)(unaff_x20 + 0x28c) = 1;
  puVar7 = PTR_DAT_09f329b0;
  puVar6 = PTR_DAT_09f329a8;
  puVar5 = PTR_DAT_09f1e990;
  puVar4 = PTR_DAT_09f1e8c0;
  puVar3 = PTR_DAT_09f1e5b8;
  uStack0000000000000028 = 0;
  iStack000000000000002c = 0;
  lVar10 = unaff_x19[0x13];
  if (lVar10 != 0) {
    iVar9 = 0;
    do {
      iVar18 = *(int *)(lVar10 + 0x18);
      if (iVar18 <= iVar9) {
        if (iVar18 < 1) goto Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__Locate;
        iVar9 = 0;
        goto LAB_0775a714;
      }
      lVar10 = FUN_05badb74(lVar10,iVar9,*(undefined8 *)PTR_DAT_09f30d78);
      if ((lVar10 == 0) || (plVar11 = *(long **)(lVar10 + 0x10), plVar11 == (long *)0x0)) break;
      uVar12 = (**(code **)(*plVar11 + 0x4d8))(plVar11,*(undefined8 *)(*plVar11 + 0x4e0));
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
      }
      uVar13 = FUN_0952c404(uVar12,0,0);
      if ((uVar13 & 1) == 0) {
        uVar12 = (**(code **)(*unaff_x19 + 0x4b8))();
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
        }
        uVar13 = FUN_09531730(uVar12,0,0);
        if ((uVar13 & 1) != 0) {
          plVar11 = *(long **)(lVar10 + 0x10);
          if (((plVar11 == (long *)0x0) ||
              (lVar14 = (**(code **)(*plVar11 + 0x4d8))(plVar11,*(undefined8 *)(*plVar11 + 0x4e0)),
              lVar14 == 0)) || (lVar14 = FUN_095258d0(lVar14,0), lVar14 == 0)) break;
          uVar12 = thunk_FUN_0953ac24(lVar14,0);
          lVar14 = (**(code **)(*unaff_x19 + 0x4b8))();
          if (lVar14 == 0) break;
          uVar17 = FUN_0952a094(lVar14,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
          }
          uVar13 = FUN_09531730(uVar12,uVar17,0);
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094c6b48(*(undefined8 *)PTR_DAT_09f329d8,0);
            return false;
          }
        }
      }
      else {
        plVar11 = *(long **)(lVar10 + 0x10);
        if (plVar11 == (long *)0x0) break;
        (**(code **)(*plVar11 + 0x4c8))(plVar11,unaff_x19[5],*(undefined8 *)(*plVar11 + 0x4d0));
        if (*(long *)(lVar10 + 0x10) == 0) break;
        FUN_0772e134(*(long *)(lVar10 + 0x10),in_stack_00000008,1,0);
        if (3 < (int)unaff_x19[7]) {
          plVar11 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,4);
          iStack0000000000000024 = iVar9;
          lVar14 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),(long)&stack0x00000020 + 4);
          if (plVar11 == (long *)0x0) break;
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0775aba0;
          if ((int)plVar11[3] == 0) goto LAB_0775ab9c;
          plVar11[4] = lVar14;
          thunk_FUN_044bb4b4(plVar11 + 4,lVar14);
          plVar16 = *(long **)(lVar10 + 0x10);
          if (((plVar16 == (long *)0x0) ||
              (lVar14 = (**(code **)(*plVar16 + 0x4d8))(plVar16,*(undefined8 *)(*plVar16 + 0x4e0)),
              lVar14 == 0)) || (lVar14 = FUN_095259a0(lVar14,0), lVar14 == 0)) break;
          uStack0000000000000020 = FUN_0952fcb8(lVar14,0);
          lVar14 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),&stack0x00000020);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar11 + 3) < 2) goto LAB_0775ab9c;
          plVar11[5] = lVar14;
          thunk_FUN_044bb4b4(plVar11 + 5,lVar14);
          plVar16 = *(long **)(lVar10 + 0x10);
          if ((plVar16 == (long *)0x0) ||
             (lVar14 = (**(code **)(*plVar16 + 0x4d8))(plVar16,*(undefined8 *)(*plVar16 + 0x4e0)),
             lVar14 == 0)) break;
          uStack000000000000001c = FUN_0952fcb8(lVar14,0);
          lVar14 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),(long)&stack0x00000018 + 4);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar11 + 3) < 3) goto LAB_0775ab9c;
          plVar11[6] = lVar14;
          thunk_FUN_044bb4b4(plVar11 + 6,lVar14);
          if ((*(long *)(lVar10 + 0x10) == 0) ||
             (lVar14 = FUN_07726f10(*(long *)(lVar10 + 0x10),0), lVar14 == 0)) break;
          uStack0000000000000018 = FUN_0952fcb8(lVar14,0);
          lVar14 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),&stack0x00000018);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar11 + 3) < 4) goto LAB_0775ab9c;
          plVar11[7] = lVar14;
          thunk_FUN_044bb4b4(plVar11 + 7,lVar14);
          FUN_0771ec00(*(undefined8 *)PTR_DAT_09f329d0,plVar11,0);
        }
      }
      lVar14 = *(long *)(lVar10 + 0x28);
      if (lVar14 == 0) break;
      if (*(int *)(lVar14 + 0x18) < 1) {
        if (*(long *)(lVar10 + 0x30) == 0) break;
        if (0 < *(int *)(*(long *)(lVar10 + 0x30) + 0x18)) goto LAB_0775a344;
      }
      else {
LAB_0775a344:
        plVar11 = *(long **)(lVar10 + 0x10);
        uVar12 = FUN_05baf9bc(lVar14,*(undefined8 *)PTR_DAT_09f1e880);
        if ((*(long *)(lVar10 + 0x30) == 0) ||
           (uVar17 = FUN_05b062f4(*(long *)(lVar10 + 0x30),*(undefined8 *)PTR_DAT_09f2cb68),
           plVar11 == (long *)0x0)) break;
        (**(code **)(*plVar11 + 0x8e8))
                  (plVar11,uVar12,uVar17,unaff_w22 & 1,*(undefined8 *)(*plVar11 + 0x8f0));
        if (3 < (int)unaff_x19[7]) {
          plVar11 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,6);
          iStack0000000000000024 = iVar9;
          lVar14 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),(long)&stack0x00000020 + 4);
          if (plVar11 == (long *)0x0) break;
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0775aba0;
          if ((int)plVar11[3] == 0) goto LAB_0775ab9c;
          plVar11[4] = lVar14;
          thunk_FUN_044bb4b4(plVar11 + 4,lVar14);
          if (*(long *)(lVar10 + 0x28) == 0) break;
          uStack0000000000000020 = *(undefined4 *)(*(long *)(lVar10 + 0x28) + 0x18);
          lVar14 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),&stack0x00000020);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar11 + 3) < 2) goto LAB_0775ab9c;
          plVar11[5] = lVar14;
          thunk_FUN_044bb4b4(plVar11 + 5,lVar14);
          if (*(long *)(lVar10 + 0x30) == 0) break;
          uStack000000000000001c = *(undefined4 *)(*(long *)(lVar10 + 0x30) + 0x18);
          lVar14 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),(long)&stack0x00000018 + 4);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar11 + 3) < 3) goto LAB_0775ab9c;
          plVar11[6] = lVar14;
          thunk_FUN_044bb4b4(plVar11 + 6,lVar14);
          plVar16 = *(long **)(lVar10 + 0x10);
          if (((plVar16 == (long *)0x0) ||
              (lVar14 = (**(code **)(*plVar16 + 0x4d8))(plVar16,*(undefined8 *)(*plVar16 + 0x4e0)),
              lVar14 == 0)) || (lVar14 = FUN_095259a0(lVar14,0), lVar14 == 0)) break;
          uStack0000000000000018 = FUN_0952fcb8(lVar14,0);
          lVar14 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),&stack0x00000018);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar11 + 3) < 4) goto LAB_0775ab9c;
          plVar11[7] = lVar14;
          thunk_FUN_044bb4b4(plVar11 + 7,lVar14);
          plVar16 = *(long **)(lVar10 + 0x10);
          if ((plVar16 == (long *)0x0) ||
             (lVar14 = (**(code **)(*plVar16 + 0x4d8))(plVar16,*(undefined8 *)(*plVar16 + 0x4e0)),
             lVar14 == 0)) break;
          uStack0000000000000014 = FUN_0952fcb8(lVar14,0);
          lVar14 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),(long)&stack0x00000010 + 4);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar11 + 3) < 5) goto LAB_0775ab9c;
          plVar11[8] = lVar14;
          thunk_FUN_044bb4b4(plVar11 + 8,lVar14);
          if ((*(long *)(lVar10 + 0x10) == 0) ||
             (lVar14 = FUN_07726f10(*(long *)(lVar10 + 0x10),0), lVar14 == 0)) break;
          uStack0000000000000010 = FUN_0952fcb8(lVar14,0);
          lVar14 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),&stack0x00000010);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0775aba0;
          if (*(uint *)(plVar11 + 3) < 6) goto LAB_0775ab9c;
          plVar11[9] = lVar14;
          thunk_FUN_044bb4b4(plVar11 + 9,lVar14);
          FUN_0771ec00(*(undefined8 *)PTR_DAT_09f329b8,plVar11,0);
        }
      }
      plVar11 = *(long **)(lVar10 + 0x10);
      if (plVar11 == (long *)0x0) break;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x4d8))(plVar11,*(undefined8 *)(*plVar11 + 0x4e0));
      if ((*(long *)(lVar10 + 0x10) == 0) ||
         (uVar12 = FUN_07726f10(*(long *)(lVar10 + 0x10),0), plVar11 == (long *)0x0)) break;
      lVar10 = *plVar11;
      bVar2 = *(byte *)(*(long *)PTR_DAT_09f1ed58 + 0x130);
      if ((*(byte *)(lVar10 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f1ed58))
      {
        bVar2 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
        if ((*(byte *)(lVar10 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f31428)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar11);
        }
        FUN_094edf40(plVar11,uVar12,0);
      }
      else {
        lVar10 = FUN_095259a0(plVar11,0);
        if ((lVar10 == 0) ||
           (lVar10 = FUN_04d7a1ac(lVar10,*(undefined8 *)PTR_DAT_09f1eb40), lVar10 == 0)) break;
        FUN_094ed400(lVar10,uVar12,0);
      }
      lVar10 = unaff_x19[0x13];
      iVar9 = iVar9 + 1;
      if (lVar10 == 0) break;
    } while( true );
  }
  goto LAB_0775ab98;
  while( true ) {
    iVar18 = 0;
    while (iVar18 < *(int *)(lVar14 + 0x18)) {
      lVar15 = unaff_x19[0x12];
      uVar8 = FUN_05b0452c(lVar14,iVar18,*(undefined8 *)puVar5);
      if (lVar15 == 0) goto LAB_0775ab98;
      FUN_0731c444(lVar15,uVar8,*(undefined8 *)puVar7);
      lVar14 = *(long *)(lVar10 + 0x30);
      iVar18 = iVar18 + 1;
      if (lVar14 == 0) goto LAB_0775ab98;
    }
    lVar10 = unaff_x19[0x13];
    if (lVar10 == 0) goto LAB_0775ab98;
    iVar18 = *(int *)(lVar10 + 0x18);
    iVar9 = iVar9 + 1;
    if (iVar18 <= iVar9) break;
LAB_0775a714:
    lVar10 = FUN_05badb74(lVar10,iVar9,*(undefined8 *)PTR_DAT_09f30d78);
    if ((lVar10 == 0) || (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) goto LAB_0775ab98;
  }
Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__Locate:
  if (0 < iVar18) {
    iVar9 = 0;
    do {
      lVar10 = FUN_05badb74(lVar10,iVar9,*(undefined8 *)PTR_DAT_09f30d78);
      if ((lVar10 == 0) || (lVar14 = *(long *)(lVar10 + 0x28), lVar14 == 0)) goto LAB_0775ab98;
      iVar18 = 0;
      while (iVar1 = *(int *)(lVar14 + 0x18), iVar18 < iVar1) {
        lVar15 = unaff_x19[0x12];
        lVar14 = FUN_05badb74(lVar14,iVar18,*(undefined8 *)puVar4);
        if ((lVar14 == 0) || (uVar8 = FUN_0952fcb8(lVar14,0), lVar15 == 0)) goto LAB_0775ab98;
        FUN_0731afd4(lVar15,uVar8,lVar10,*(undefined8 *)puVar6);
        lVar14 = *(long *)(lVar10 + 0x28);
        iVar18 = iVar18 + 1;
        if (lVar14 == 0) goto LAB_0775ab98;
      }
      lVar15 = *(long *)(lVar10 + 0x30);
      if (iVar1 < 1) {
        if (lVar15 == 0) goto LAB_0775ab98;
        if (0 < *(int *)(lVar15 + 0x18)) goto LAB_0775a840;
      }
      else {
        if (lVar15 == 0) goto LAB_0775ab98;
LAB_0775a840:
        *(undefined4 *)(lVar15 + 0x18) = 0;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        *(undefined4 *)(lVar14 + 0x18) = 0;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_07a61000(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
        }
        *(undefined4 *)(lVar10 + 0x1c) = 0;
        *(undefined4 *)(lVar10 + 0x20) = 0;
        *(undefined1 *)(lVar10 + 0x40) = 1;
      }
      lVar10 = unaff_x19[0x13];
      if (lVar10 == 0) goto LAB_0775ab98;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar10 + 0x18));
  }
  iVar9 = (**(code **)(*unaff_x19 + 0x4f8))();
  puVar6 = PTR_DAT_09f329c8;
  puVar5 = PTR_DAT_09f329c0;
  puVar4 = PTR_DAT_09f28f78;
  puVar3 = PTR_DAT_09f1e5f0;
  if (iVar9 < 4) {
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
             (lVar14 = FUN_05badb74(unaff_x19[0x13],iStack000000000000002c,
                                    *(undefined8 *)PTR_DAT_09f30d78), lVar14 == 0)) ||
            (plVar11 = *(long **)(lVar14 + 0x10), plVar11 == (long *)0x0)) ||
           (lVar14 = (**(code **)(*plVar11 + 0x818))(plVar11,*(undefined8 *)(*plVar11 + 0x820)),
           lVar14 == 0)) goto LAB_0775ab98;
        uStack0000000000000028 = *(undefined4 *)(lVar14 + 0x18);
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
        uVar17 = FUN_07a3b850(&stack0x00000028,0);
        uVar12 = FUN_078b4f58(uVar12,*(undefined8 *)PTR_DAT_09f329e8,uVar17,0);
        plVar11 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
        iStack0000000000000024 = (**(code **)(*unaff_x19 + 0x4f8))();
        lVar10 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,(long)&stack0x00000020 + 4);
        if (plVar11 != (long *)0x0) {
          if ((lVar10 != 0) &&
             (lVar14 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0)) {
LAB_0775aba0:
            uVar12 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar12,0);
          }
          if ((int)plVar11[3] == 0) {
LAB_0775ab9c:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar11[4] = lVar10;
          thunk_FUN_044bb4b4(plVar11 + 4,lVar10);
          FUN_0771ec00(uVar12,plVar11,0);
          goto LAB_0775ab30;
        }
      }
    }
  }
LAB_0775ab98:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


