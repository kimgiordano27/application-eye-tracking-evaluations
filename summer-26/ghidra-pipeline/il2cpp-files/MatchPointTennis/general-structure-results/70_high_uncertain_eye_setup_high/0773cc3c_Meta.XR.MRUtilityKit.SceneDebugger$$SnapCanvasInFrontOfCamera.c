/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$SnapCanvasInFrontOfCamera
ENTRY_POINT: 0773cc3c
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


bool Meta_XR_MRUtilityKit_SceneDebugger__SnapCanvasInFrontOfCamera(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  int *piVar31;
  int iVar32;
  long unaff_x19;
  int unaff_w20;
  undefined4 unaff_w21;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  long lVar33;
  long unaff_x26;
  long *unaff_x27;
  undefined4 unaff_w29;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  int iStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  uint uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  int iStack00000000000000c8;
  int iStack00000000000000cc;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e8;
  long in_stack_00000150;
  long in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 *in_stack_00000178;
  long in_stack_00000180;
  
  FUN_04447ba8(PTR_DAT_09f31558);
  FUN_04447ba8(PTR_DAT_09f1e870);
  FUN_04447ba8(PTR_DAT_09f1e8b0);
  FUN_04447ba8(PTR_DAT_09f31bb0);
  FUN_04447ba8(PTR_DAT_09f31bb8);
  FUN_04447ba8(PTR_DAT_09f31318);
  FUN_04447ba8(PTR_DAT_09f31320);
  FUN_04447ba8(PTR_DAT_09f31348);
  FUN_04447ba8(PTR_DAT_09f30ab8);
  FUN_04447ba8(PTR_DAT_09f312c0);
  FUN_04447ba8(PTR_DAT_09f31420);
  FUN_04447ba8(PTR_DAT_09f20d20);
  FUN_04447ba8(PTR_DAT_09f1e5f0);
  FUN_04447ba8(PTR_DAT_09f31bc0);
  FUN_04447ba8(PTR_DAT_09f31bc8);
  FUN_04447ba8(PTR_DAT_09f31bd0);
  FUN_04447ba8(PTR_DAT_09f31bd8);
  FUN_04447ba8(PTR_DAT_09f31be0);
  FUN_04447ba8(PTR_DAT_09f31be8);
  FUN_04447ba8(PTR_DAT_09f31bf0);
  FUN_04447ba8(PTR_DAT_09f31bf8);
  FUN_04447ba8(PTR_DAT_09f31c00);
  FUN_04447ba8(PTR_DAT_09f31c08);
  FUN_04447ba8(PTR_DAT_09f31c10);
  FUN_04447ba8(PTR_DAT_09f31c18);
  FUN_04447ba8(PTR_DAT_09f31b40);
  FUN_04447ba8(PTR_DAT_09f31c20);
  FUN_04447ba8(PTR_DAT_09f31c28);
  FUN_04447ba8(PTR_DAT_09f31c30);
  FUN_04447ba8(PTR_DAT_09f31c38);
  FUN_04447ba8(PTR_DAT_09f31c40);
  FUN_04447ba8(PTR_DAT_09f31c48);
  FUN_04447ba8(PTR_DAT_09f31c50);
  FUN_04447ba8(PTR_DAT_09f31c58);
  FUN_04447ba8(PTR_DAT_09f31c60);
  *(undefined1 *)(unaff_x19 + 0x22b) = 1;
  iStack00000000000000c8 = 0;
  iStack00000000000000cc = 0;
  in_stack_000000d0 = 0;
  _iStack00000000000000b8 = 0;
  _uStack00000000000000c0 = 0;
  in_stack_000000b0 = 0;
  if (unaff_x27 == (long *)0x0) goto LAB_0773ecc8;
  plVar20 = (long *)unaff_x27[0x3a];
  lVar26 = unaff_x27[0x3b];
  lVar22 = unaff_x27[0x3c];
  plVar10 = (long *)FUN_07715da0();
  iVar4 = (**(code **)(*unaff_x27 + 0x4f8))();
  (**(code **)(*unaff_x27 + 0x498))();
  lVar23 = unaff_x27[0x21];
  lVar28 = unaff_x27[0x1f];
  in_stack_000000d0 = unaff_x27[0x22];
  plVar11 = (long *)FUN_07715da0();
  if (plVar11 == (long *)0x0) goto LAB_0773ecc8;
  lVar24 = *plVar11;
  uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar29 != 0) {
    piVar31 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
        puVar12 = (undefined8 *)(lVar24 + (long)(*piVar31 + 0x2a) * 0x10 + 0x138);
        goto LAB_0773cec8;
      }
      uVar29 = uVar29 - 1;
      piVar31 = piVar31 + 4;
    } while (uVar29 != 0);
  }
  puVar12 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f30ab8,0x2a);
LAB_0773cec8:
  lVar24 = (*(code *)*puVar12)(plVar11,puVar12[1]);
  if (lVar24 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    plVar11 = (long *)FUN_07715da0();
    puVar2 = PTR_DAT_09f31548;
    if (plVar11 == (long *)0x0) goto LAB_0773ecc8;
    lVar24 = *plVar11;
    uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar29 != 0) {
      piVar31 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar12 = (undefined8 *)(lVar24 + (long)(*piVar31 + 0x2a) * 0x10 + 0x138);
          goto LAB_0773cf6c;
        }
        uVar29 = uVar29 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar29 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f30ab8,0x2a);
LAB_0773cf6c:
    uVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    lVar24 = thunk_FUN_04485110(uVar13,*(undefined8 *)puVar2);
    if (lVar24 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      plVar11 = (long *)FUN_07715da0();
      if (plVar11 == (long *)0x0) goto LAB_0773ecc8;
      lVar24 = *plVar11;
      uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar29 != 0) {
        piVar31 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
            puVar12 = (undefined8 *)(lVar24 + (long)(*piVar31 + 0x2a) * 0x10 + 0x138);
            goto LAB_0773d00c;
          }
          uVar29 = uVar29 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar29 != 0);
      }
      puVar12 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f30ab8,0x2a);
LAB_0773d00c:
      lVar24 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if (lVar24 == 0) goto LAB_0773ecc8;
      uVar13 = *(undefined8 *)puVar2;
      lVar14 = thunk_FUN_04485110(lVar24,uVar13);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(lVar24,uVar13);
      }
      lVar14 = *(long *)puVar2;
      plVar11 = (long *)thunk_FUN_04485110(lVar24,lVar14);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(lVar24,lVar14);
      }
      lVar24 = *plVar11;
      uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar29 != 0) {
        piVar31 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == lVar14) {
            puVar12 = (undefined8 *)(lVar24 + (long)*piVar31 * 0x10 + 0x138);
            goto LAB_0773d09c;
          }
          uVar29 = uVar29 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar29 != 0);
      }
      puVar12 = (undefined8 *)FUN_044822ac(plVar11,lVar14,0);
LAB_0773d09c:
      uVar5 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    }
  }
  if ((unaff_x27[0x18] == 0) ||
     (FUN_087dab38(unaff_x27[0x18],0), puVar12 = in_stack_00000178, plVar10 == (long *)0x0))
  goto LAB_0773ecc8;
  lVar24 = *plVar10;
  uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar29 != 0) {
    piVar31 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
        puVar15 = (undefined8 *)(lVar24 + (long)(*piVar31 + 0x22) * 0x10 + 0x138);
        goto LAB_0773d134;
      }
      uVar29 = uVar29 - 1;
      piVar31 = piVar31 + 4;
    } while (uVar29 != 0);
  }
  puVar15 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0x22);
LAB_0773d134:
  uVar29 = (*(code *)*puVar15)(plVar10,puVar15[1]);
  puVar2 = PTR_DAT_09f313c8;
  if ((uVar29 & 1) == 0) {
    if (lVar23 == 0) goto LAB_0773ecc8;
    if (*(int *)(lVar23 + 0x18) < 1) goto LAB_0773d1bc;
    plVar11 = (long *)*puVar12;
    if (plVar11 == (long *)0x0) goto LAB_0773ecc8;
    lVar24 = *plVar11;
    uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar29 != 0) {
      piVar31 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f313c8) {
          puVar15 = (undefined8 *)(lVar24 + (long)(*piVar31 + 5) * 0x10 + 0x138);
          goto LAB_0773d1ec;
        }
        uVar29 = uVar29 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar29 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f313c8,5);
LAB_0773d1ec:
    (*(code *)*puVar15)(plVar11);
    plVar11 = (long *)*puVar12;
    if (plVar11 == (long *)0x0) goto LAB_0773ecc8;
    lVar14 = *plVar11;
    lVar24 = *(long *)puVar2;
    uVar29 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar29 != 0) {
      piVar31 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == lVar24) {
          puVar15 = (undefined8 *)(lVar14 + (long)(*piVar31 + 6) * 0x10 + 0x138);
          goto LAB_0773d260;
        }
        uVar29 = uVar29 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar29 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar11,lVar24,6);
LAB_0773d260:
    iVar6 = (*(code *)*puVar15)(plVar11,puVar15[1]);
    plVar11 = (long *)*puVar12;
    if (plVar11 == (long *)0x0) goto LAB_0773ecc8;
    lVar14 = *plVar11;
    lVar24 = *(long *)puVar2;
    uVar29 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar29 != 0) {
      piVar31 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == lVar24) {
          puVar15 = (undefined8 *)(lVar14 + (long)(*piVar31 + 0xf) * 0x10 + 0x138);
          goto LAB_0773d2d8;
        }
        uVar29 = uVar29 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar29 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar11,lVar24,0xf);
LAB_0773d2d8:
    lVar24 = (*(code *)*puVar15)(plVar11,puVar15[1]);
  }
  else {
LAB_0773d1bc:
    lVar24 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,unaff_w29);
    iVar6 = 0;
  }
  if (unaff_x27[0x18] != 0) {
    FUN_087dae58(unaff_x27[0x18],0);
    if (unaff_x27[0x19] == 0) goto LAB_0773ecc8;
    FUN_087dab38(unaff_x27[0x19],0);
    iStack00000000000000cc = (iVar6 + unaff_w20) - unaff_w24;
    iStack00000000000000c8 = 0;
    lVar14 = *plVar10;
    uVar29 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar29 != 0) {
      piVar31 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar15 = (undefined8 *)(lVar14 + (long)*piVar31 * 0x10 + 0x138);
          goto LAB_0773d368;
        }
        uVar29 = uVar29 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar29 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0);
LAB_0773d368:
    uVar29 = (*(code *)*puVar15)(plVar10,puVar15[1]);
    if ((uVar29 & 1) != 0) {
      if (unaff_x27[0x34] == 0) goto LAB_0773ecc8;
      iStack00000000000000c8 = (unaff_w25 - unaff_w23) + *(int *)(unaff_x27[0x34] + 0x18);
    }
    if (3 < iVar4) {
      lVar14 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
      if (lVar14 == 0) goto LAB_0773ecc8;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0773ecc4;
      *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_09f31c48;
      thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x20));
      uVar13 = FUN_07a3b850(&stack0x000000ec,0);
      if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_0773ecc4;
      *(undefined8 *)(lVar14 + 0x28) = uVar13;
      thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x28),uVar13);
      if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_0773ecc4;
      *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_09f31c50;
      thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x30));
      uVar13 = FUN_07a3b850(&stack0x000000e8,0);
      if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_0773ecc4;
      *(undefined8 *)(lVar14 + 0x38) = uVar13;
      thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x38),uVar13);
      if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_0773ecc4;
      *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_09f31c10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x40));
      uVar13 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
      if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_0773ecc4;
      *(undefined8 *)(lVar14 + 0x48) = uVar13;
      thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x48),uVar13);
      if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_0773ecc4;
      *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)PTR_DAT_09f31bd8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x50));
      uVar13 = FUN_07a3b850(&stack0x000000c8,0);
      if (*(uint *)(lVar14 + 0x18) < 8) goto LAB_0773ecc4;
      *(undefined8 *)(lVar14 + 0x58) = uVar13;
      thunk_FUN_044bb4b4();
      uVar13 = FUN_078b57fc(lVar14,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar13,0);
      unaff_w29 = in_stack_000000d8._4_4_;
    }
    lVar16 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,unaff_w29);
    lVar14 = in_stack_00000150;
    puVar1 = PTR_DAT_09f31c40;
    puVar2 = PTR_DAT_09f31bf0;
    _uStack00000000000000c0 = _uStack00000000000000c0 & 0xffffffff00000000;
    if (lVar16 != 0) {
      uVar27 = *(uint *)(lVar16 + 0x18);
      if (0 < (int)uVar27) {
        uVar21 = 0;
        do {
          if (lVar24 == 0) goto LAB_0773ecc8;
          if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_0773ecc4;
          if (unaff_x26 == 0) goto LAB_0773ecc8;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar21) goto LAB_0773ecc4;
          if (lVar14 == 0) goto LAB_0773ecc8;
          if ((*(uint *)(lVar14 + 0x18) <= uVar21) || (uVar27 <= uVar21)) goto LAB_0773ecc4;
          lVar25 = (long)(int)uVar21;
          *(int *)(lVar16 + lVar25 * 4 + 0x20) =
               (*(int *)(unaff_x26 + lVar25 * 4 + 0x20) + *(int *)(lVar24 + lVar25 * 4 + 0x20)) -
               *(int *)(lVar14 + lVar25 * 4 + 0x20);
          if (3 < iVar4) {
            lVar25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
            if (lVar25 == 0) goto LAB_0773ecc8;
            if (*(int *)(lVar25 + 0x18) == 0) goto LAB_0773ecc4;
            *(undefined8 *)(lVar25 + 0x20) = *(undefined8 *)PTR_DAT_09f31be0;
            thunk_FUN_044bb4b4((undefined8 *)(lVar25 + 0x20));
            uVar13 = FUN_07a3b850(&stack0x000000c0,0);
            if (*(uint *)(lVar25 + 0x18) < 2) goto LAB_0773ecc4;
            *(undefined8 *)(lVar25 + 0x28) = uVar13;
            thunk_FUN_044bb4b4((undefined8 *)(lVar25 + 0x28),uVar13);
            if (*(uint *)(lVar25 + 0x18) < 3) goto LAB_0773ecc4;
            *(undefined8 *)(lVar25 + 0x30) = *(undefined8 *)PTR_DAT_09f31bc0;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(lVar24 + 0x18) <= uStack00000000000000c0) ||
               (uVar13 = FUN_07a3b850(lVar24 + (long)(int)uStack00000000000000c0 * 4 + 0x20,0),
               *(uint *)(lVar25 + 0x18) < 4)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar25 + 0x38) = uVar13;
            thunk_FUN_044bb4b4((undefined8 *)(lVar25 + 0x38),uVar13);
            if (*(uint *)(lVar25 + 0x18) < 5) goto LAB_0773ecc4;
            *(undefined8 *)(lVar25 + 0x40) = *(undefined8 *)puVar1;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(unaff_x26 + 0x18) <= uStack00000000000000c0) ||
               (uVar13 = FUN_07a3b850(unaff_x26 + (long)(int)uStack00000000000000c0 * 4 + 0x20,0),
               *(uint *)(lVar25 + 0x18) < 6)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar25 + 0x48) = uVar13;
            thunk_FUN_044bb4b4((undefined8 *)(lVar25 + 0x48),uVar13);
            if (*(uint *)(lVar25 + 0x18) < 7) goto LAB_0773ecc4;
            *(undefined8 *)(lVar25 + 0x50) = *(undefined8 *)puVar2;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(lVar14 + 0x18) <= uStack00000000000000c0) ||
               (uVar13 = FUN_07a3b850(lVar14 + (long)(int)uStack00000000000000c0 * 4 + 0x20,0),
               *(uint *)(lVar25 + 0x18) < 8)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar25 + 0x58) = uVar13;
            thunk_FUN_044bb4b4();
            uVar13 = FUN_078b57fc(lVar25,0);
            lVar33 = *(long *)PTR_DAT_09f22e40;
            lVar25 = *(long *)(lVar33 + 0x38);
            if (lVar25 == 0) {
              FUN_04482014(lVar33);
              lVar25 = *(long *)(lVar33 + 0x38);
            }
            lVar25 = *(long *)(lVar25 + 0x10);
            if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
              lVar25 = FUN_04481fb8();
            }
            if (*(int *)(lVar25 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar25 = *(long *)(*(long *)(lVar33 + 0x38) + 0x10);
            if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
              lVar25 = FUN_04481fb8();
            }
            FUN_0771ec00(uVar13,**(undefined8 **)(lVar25 + 0xb8),0);
          }
          uVar21 = uStack00000000000000c0 + 1;
          _uStack00000000000000c0 = CONCAT44(uStack00000000000000c4,uVar21);
          uVar27 = *(uint *)(lVar16 + 0x18);
        } while ((int)uVar21 < (int)uVar27);
      }
      iVar6 = iStack00000000000000cc;
      iVar7 = FUN_0772052c(0);
      iVar9 = iStack00000000000000cc;
      if (iVar7 <= iVar6) {
        uVar5 = FUN_0772052c(0);
        _iStack00000000000000b8 = CONCAT44(uVar5,iStack00000000000000b8);
        uVar13 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
        uVar13 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31c08,uVar13,*(undefined8 *)PTR_DAT_09f31be8
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c6b48(uVar13,0);
LAB_0773ec98:
        return iVar6 < iVar7;
      }
      plVar11 = (long *)unaff_x27[0x39];
      (**(code **)(*unaff_x27 + 0x4f8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x500));
      if (plVar11 != (long *)0x0) {
        lVar24 = *plVar11;
        uVar29 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar29 != 0) {
          piVar31 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f313c8) {
              puVar15 = (undefined8 *)(lVar24 + (long)(*piVar31 + 3) * 0x10 + 0x138);
              goto LAB_0773d918;
            }
            uVar29 = uVar29 - 1;
            piVar31 = piVar31 + 4;
          } while (uVar29 != 0);
        }
        puVar15 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f313c8,3);
LAB_0773d918:
        (*(code *)*puVar15)(plVar11,unaff_x27,unaff_w21,iVar9,lVar16,uVar5,lVar22,0);
        lVar24 = in_stack_00000160;
        iVar9 = iStack00000000000000cc;
        if (plVar20 != (long *)0x0) {
          lVar14 = *plVar20;
          lVar16 = unaff_x27[0x39];
          uVar29 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar29 != 0) {
            piVar31 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f312c0) {
                puVar15 = (undefined8 *)(lVar14 + (long)(*piVar31 + 2) * 0x10 + 0x138);
                goto LAB_0773d9b0;
              }
              uVar29 = uVar29 - 1;
              piVar31 = piVar31 + 4;
            } while (uVar29 != 0);
          }
          puVar15 = (undefined8 *)FUN_044822ac(plVar20,*(long *)PTR_DAT_09f312c0,2);
LAB_0773d9b0:
          (*(code *)*puVar15)(plVar20,lVar24,lVar23,iVar9,lVar16,puVar15[1]);
          if (lVar26 != 0) {
            FUN_07732130(lVar26,iStack00000000000000c8,0);
            if (unaff_x27[0x19] != 0) {
              FUN_087dae58(unaff_x27[0x19],0);
              if (3 < iVar4) {
                lVar14 = *plVar11;
                uVar29 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar29 != 0) {
                  piVar31 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f313c8) {
                      puVar15 = (undefined8 *)(lVar14 + (long)*piVar31 * 0x10 + 0x138);
                      goto LAB_0773da50;
                    }
                    uVar29 = uVar29 - 1;
                    piVar31 = piVar31 + 4;
                  } while (uVar29 != 0);
                }
                puVar15 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f313c8,0);
LAB_0773da50:
                in_stack_000000a8 = (*(code *)*puVar15)(plVar11,puVar15[1]);
                in_stack_00000098 = *(undefined8 *)PTR_DAT_09f31420;
                in_stack_000000a0 = 0xffffffffffffffff;
                uVar13 = FUN_07a742b0(&stack0x00000098,0);
                uVar17 = FUN_07a3b850((long)&stack0x000000c8 + 4,0);
                uVar13 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31bd0,uVar13,
                                      *(undefined8 *)PTR_DAT_09f31c58,uVar17,0);
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                }
                FUN_094c652c(uVar13,0);
              }
              if (lVar23 != 0) {
                FUN_05baf848(lVar23,*(undefined8 *)PTR_DAT_09f31bb8);
                _uStack00000000000000c0 = _uStack00000000000000c0 & 0xffffffff;
                lVar14 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,in_stack_000000d8._4_4_);
                if (unaff_x27[0x1a] != 0) {
                  FUN_087dab38(unaff_x27[0x1a],0);
                  lVar16 = *plVar10;
                  uVar29 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar29 != 0) {
                    piVar31 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar15 = (undefined8 *)(lVar16 + (long)(*piVar31 + 0x22) * 0x10 + 0x138);
                        goto LAB_0773db88;
                      }
                      uVar29 = uVar29 - 1;
                      piVar31 = piVar31 + 4;
                    } while (uVar29 != 0);
                  }
                  puVar15 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0x22);
LAB_0773db88:
                  uVar29 = (*(code *)*puVar15)(plVar10,puVar15[1]);
                  puVar2 = PTR_DAT_09f31320;
                  if (((uVar29 & 1) == 0) && (0 < *(int *)(lVar23 + 0x18))) {
                    _iStack00000000000000b8 = _iStack00000000000000b8 & 0xffffffff00000000;
                    iVar9 = 0;
                    iVar32 = 0;
                    iVar8 = 0;
                    lVar16 = lVar14 + 0x20;
                    do {
                      lVar25 = FUN_05badb74(lVar23,iVar8,*(undefined8 *)puVar2);
                      if (lVar25 == 0) goto LAB_0773ecc8;
                      if (*(char *)(lVar25 + 0xb9) == '\0') {
                        if (3 < iVar4) {
                          uVar13 = FUN_07a3b850(&stack0x000000b8,0);
                          uVar13 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31bf8,uVar13,0);
                          plVar18 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,iVar4);
                          lVar33 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                      &stack0x00000098);
                          if (plVar18 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar33 != 0) &&
                             (lVar19 = thunk_FUN_04485110(lVar33,*(undefined8 *)(*plVar18 + 0x40)),
                             lVar19 == 0)) goto LAB_0773eccc;
                          if ((int)plVar18[3] == 0) goto LAB_0773ecc4;
                          plVar18[4] = lVar33;
                          thunk_FUN_044bb4b4(plVar18 + 4,lVar33);
                          FUN_0771ec00(uVar13,plVar18,0);
                        }
                        lVar33 = *plVar11;
                        uVar29 = (ulong)*(ushort *)(lVar33 + 0x12e);
                        if (uVar29 != 0) {
                          piVar31 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f313c8) {
                              puVar15 = (undefined8 *)(lVar33 + (long)(*piVar31 + 9) * 0x10 + 0x138)
                              ;
                              goto LAB_0773ddc0;
                            }
                            uVar29 = uVar29 - 1;
                            piVar31 = piVar31 + 4;
                          } while (uVar29 != 0);
                        }
                        puVar15 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f313c8,9);
LAB_0773ddc0:
                        (*(code *)*puVar15)(plVar11,lVar25,puVar12,iVar9,iVar32,lVar14,iVar4,
                                            puVar15[1]);
                        lVar33 = *plVar10;
                        uVar29 = (ulong)*(ushort *)(lVar33 + 0x12e);
                        if (uVar29 != 0) {
                          piVar31 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar15 = (undefined8 *)(lVar33 + (long)*piVar31 * 0x10 + 0x138);
                              goto LAB_0773de38;
                            }
                            uVar29 = uVar29 - 1;
                            piVar31 = piVar31 + 4;
                          } while (uVar29 != 0);
                        }
                        puVar15 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0);
LAB_0773de38:
                        uVar29 = (*(code *)*puVar15)(plVar10,puVar15[1]);
                        if ((uVar29 & 1) != 0) {
                          FUN_077322fc(lVar26,(long)&stack0x000000c0 + 4,lVar25,0);
                        }
                        lVar33 = *plVar10;
                        uVar29 = (ulong)*(ushort *)(lVar33 + 0x12e);
                        if (uVar29 != 0) {
                          piVar31 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar15 = (undefined8 *)
                                        (lVar33 + (long)(*piVar31 + 0x24) * 0x10 + 0x138);
                              goto LAB_0773deb4;
                            }
                            uVar29 = uVar29 - 1;
                            piVar31 = piVar31 + 4;
                          } while (uVar29 != 0);
                        }
                        puVar15 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0x24)
                        ;
LAB_0773deb4:
                        iVar8 = (*(code *)*puVar15)(plVar10,puVar15[1]);
                        if (iVar8 == 1) {
                          lVar33 = *plVar20;
                          uVar29 = (ulong)*(ushort *)(lVar33 + 0x12e);
                          if (uVar29 != 0) {
                            piVar31 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f312c0) {
                                puVar15 = (undefined8 *)
                                          (lVar33 + (long)(*piVar31 + 8) * 0x10 + 0x138);
                                goto LAB_0773df2c;
                              }
                              uVar29 = uVar29 - 1;
                              piVar31 = piVar31 + 4;
                            } while (uVar29 != 0);
                          }
                          puVar15 = (undefined8 *)FUN_044822ac(plVar20,*(long *)PTR_DAT_09f312c0,8);
LAB_0773df2c:
                          (*(code *)*puVar15)(plVar20,lVar25,iVar9,puVar15[1]);
                        }
                        *(int *)(lVar25 + 0x28) = iVar9;
                        if (lVar14 == 0) goto LAB_0773ecc8;
                        uVar27 = *(uint *)(lVar14 + 0x18);
                        if (0 < (long)((ulong)uVar27 << 0x20)) {
                          lVar33 = *(long *)(lVar25 + 0x70);
                          uVar29 = 0;
                          do {
                            if (uVar27 <= uVar29) goto LAB_0773ecc4;
                            if (lVar33 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(lVar33 + 0x18) <= uVar29) goto LAB_0773ecc4;
                            *(undefined4 *)(lVar33 + 0x20 + uVar29 * 4) =
                                 *(undefined4 *)(lVar16 + uVar29 * 4);
                            lVar19 = *(long *)(lVar25 + 0x78);
                            if (lVar19 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(lVar19 + 0x18) <= uVar29) goto LAB_0773ecc4;
                            *(int *)(lVar16 + uVar29 * 4) =
                                 *(int *)(lVar19 + uVar29 * 4 + 0x20) +
                                 *(int *)(lVar16 + uVar29 * 4);
                            uVar29 = uVar29 + 1;
                          } while ((long)(int)uVar27 != uVar29);
                        }
                        iVar9 = *(int *)(lVar25 + 0x30) + iVar9;
                      }
                      else {
                        if (3 < iVar4) {
                          uVar13 = FUN_07a3b850(&stack0x000000b8,0);
                          uVar13 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31c00,uVar13,0);
                          plVar18 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,iVar4);
                          lVar33 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                      &stack0x00000098);
                          if (plVar18 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar33 != 0) &&
                             (lVar19 = thunk_FUN_04485110(lVar33,*(undefined8 *)(*plVar18 + 0x40)),
                             lVar19 == 0)) goto LAB_0773eccc;
                          if ((int)plVar18[3] == 0) goto LAB_0773ecc4;
                          plVar18[4] = lVar33;
                          thunk_FUN_044bb4b4(plVar18 + 4,lVar33);
                          FUN_0771ec00(uVar13,plVar18,0);
                        }
                        iVar32 = *(int *)(lVar25 + 0x30) + iVar32;
                      }
                      iVar8 = iStack00000000000000b8 + 1;
                      _iStack00000000000000b8 = CONCAT44(uStack00000000000000bc,iVar8);
                    } while (iVar8 < *(int *)(lVar23 + 0x18));
                    lVar14 = *plVar10;
                    uVar29 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    if (uVar29 != 0) {
                      piVar31 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
                          puVar12 = (undefined8 *)(lVar14 + (long)(*piVar31 + 0x24) * 0x10 + 0x138);
                          goto LAB_0773e044;
                        }
                        uVar29 = uVar29 - 1;
                        piVar31 = piVar31 + 4;
                      } while (uVar29 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0773e044:
                    iVar8 = (*(code *)*puVar12)(plVar10,puVar12[1]);
                    uVar5 = in_stack_000000e8;
                    if (iVar8 == 1) {
                      lVar14 = *plVar20;
                      uVar29 = (ulong)*(ushort *)(lVar14 + 0x12e);
                      if (uVar29 != 0) {
                        piVar31 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f312c0) {
                            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar31 + 4) * 0x10 + 0x138);
                            goto LAB_0773e0b4;
                          }
                          uVar29 = uVar29 - 1;
                          piVar31 = piVar31 + 4;
                        } while (uVar29 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_044822ac(plVar20,*(long *)PTR_DAT_09f312c0,4);
LAB_0773e0b4:
                      (*(code *)*puVar12)(plVar20,uVar5,puVar12[1]);
                    }
                    puVar3 = PTR_DAT_09f31bb0;
                    puVar1 = PTR_DAT_09f1e8b0;
                    iVar8 = *(int *)(lVar23 + 0x18);
                    while (iVar8 = iVar8 + -1, -1 < iVar8) {
                      lVar14 = FUN_05badb74(lVar23,iVar8,*(undefined8 *)puVar2);
                      if (lVar14 == 0) goto LAB_0773ecc8;
                      if (*(char *)(lVar14 + 0xb9) != '\0') {
                        lVar14 = FUN_05badb74(lVar23,iVar8,*(undefined8 *)puVar2);
                        if ((lVar14 == 0) ||
                           (FUN_0773caa0(&stack0x000000d0,*(undefined8 *)(lVar14 + 0x18)),
                           lVar28 == 0)) goto LAB_0773ecc8;
                        FUN_05baf638(lVar28,iVar8,*(undefined8 *)puVar1);
                        FUN_05baf638(lVar23,iVar8,*(undefined8 *)puVar3);
                      }
                    }
                  }
                  else {
                    iVar9 = 0;
                  }
                  if (unaff_x27[0x1a] != 0) {
                    FUN_087dae58(unaff_x27[0x1a],0);
                    if (unaff_x27[0x1b] != 0) {
                      FUN_087dab38(unaff_x27[0x1b],0);
                      lVar14 = *plVar10;
                      uVar29 = (ulong)*(ushort *)(lVar14 + 0x12e);
                      if (uVar29 != 0) {
                        piVar31 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
                            puVar12 = (undefined8 *)
                                      (lVar14 + (long)(*piVar31 + 0x24) * 0x10 + 0x138);
                            goto LAB_0773e1c8;
                          }
                          uVar29 = uVar29 - 1;
                          piVar31 = piVar31 + 4;
                        } while (uVar29 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0773e1c8:
                      iVar8 = (*(code *)*puVar12)(plVar10,puVar12[1]);
                      if (iVar8 == 1) {
                        lVar14 = *plVar20;
                        uVar29 = (ulong)*(ushort *)(lVar14 + 0x12e);
                        if (uVar29 != 0) {
                          piVar31 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f312c0) {
                              puVar12 = (undefined8 *)(lVar14 + (long)(*piVar31 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_0773e234;
                            }
                            uVar29 = uVar29 - 1;
                            piVar31 = piVar31 + 4;
                          } while (uVar29 != 0);
                        }
                        puVar12 = (undefined8 *)FUN_044822ac(plVar20,*(long *)PTR_DAT_09f312c0,5);
LAB_0773e234:
                        (*(code *)*puVar12)(plVar20,puVar12[1]);
                      }
                      lVar14 = in_stack_00000168;
                      if (lVar24 != 0) {
                        if (0 < *(int *)(lVar24 + 0x18)) {
                          uVar29 = 0;
                          do {
                            lVar16 = FUN_05badb74(lVar24,uVar29 & 0xffffffff,
                                                  *(undefined8 *)PTR_DAT_09f31320);
                            if (lVar14 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(lVar14 + 0x18) <= uVar29) goto LAB_0773ecc4;
                            if (lVar16 == 0) goto LAB_0773ecc8;
                            lVar25 = *plVar11;
                            uVar13 = *(undefined8 *)(lVar14 + uVar29 * 8 + 0x20);
                            lVar33 = *(long *)(lVar16 + 0xc0);
                            uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
                            if (uVar30 != 0) {
                              piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f313c8) {
                                  puVar12 = (undefined8 *)(lVar25 + (long)*piVar31 * 0x10 + 0x138);
                                  goto LAB_0773e2ec;
                                }
                                uVar30 = uVar30 - 1;
                                piVar31 = piVar31 + 4;
                              } while (uVar30 != 0);
                            }
                            puVar12 = (undefined8 *)
                                      FUN_044822ac(plVar11,*(long *)PTR_DAT_09f313c8,0);
LAB_0773e2ec:
                            uVar5 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                            lVar25 = *plVar11;
                            uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
                            if (uVar30 != 0) {
                              piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f313c8) {
                                  puVar12 = (undefined8 *)
                                            (lVar25 + (long)(*piVar31 + 10) * 0x10 + 0x138);
                                  goto LAB_0773e354;
                                }
                                uVar30 = uVar30 - 1;
                                piVar31 = piVar31 + 4;
                              } while (uVar30 != 0);
                            }
                            puVar12 = (undefined8 *)
                                      FUN_044822ac(plVar11,*(long *)PTR_DAT_09f313c8,10);
LAB_0773e354:
                            (*(code *)*puVar12)(plVar11,lVar16,iVar9,uVar5,1,0,plVar10,plVar20);
                            if (lVar33 == 0) goto LAB_0773ecc8;
                            iVar8 = FUN_094d3ba4(lVar33,0);
                            if (*(long *)(lVar16 + 0x88) == 0) goto LAB_0773ecc8;
                            iVar32 = *(int *)(*(long *)(lVar16 + 0x88) + 0x18);
                            if (iVar32 < iVar8) {
                              if (3 < iVar4) {
                                uVar17 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                                      *(undefined8 *)(lVar16 + 0x20),
                                                      *(undefined8 *)PTR_DAT_09f31c30,0);
                                lVar19 = *(long *)PTR_DAT_09f22e40;
                                lVar25 = *(long *)(lVar19 + 0x38);
                                if (lVar25 == 0) {
                                  FUN_04482014(lVar19);
                                  lVar25 = *(long *)(lVar19 + 0x38);
                                }
                                lVar25 = *(long *)(lVar25 + 0x10);
                                if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                                  lVar25 = FUN_04481fb8();
                                }
                                if (*(int *)(lVar25 + 0xe4) == 0) {
                                  thunk_FUN_044a54b4();
                                }
                                lVar25 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
                                if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                                  lVar25 = FUN_04481fb8();
                                }
                                FUN_0771ec00(uVar17,**(undefined8 **)(lVar25 + 0xb8),0);
                              }
                            }
                            else if ((1 < iVar4) && (iVar8 < iVar32)) {
                              uVar17 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                                    *(undefined8 *)(lVar16 + 0x20),
                                                    *(undefined8 *)PTR_DAT_09f31c38,0);
                              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                              }
                              FUN_094c33b0(uVar17,0);
                            }
                            lVar25 = *plVar10;
                            uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
                            if (uVar30 != 0) {
                              piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                  puVar12 = (undefined8 *)(lVar25 + (long)*piVar31 * 0x10 + 0x138);
                                  goto LAB_0773e514;
                                }
                                uVar30 = uVar30 - 1;
                                piVar31 = piVar31 + 4;
                              } while (uVar30 != 0);
                            }
                            puVar12 = (undefined8 *)
                                      FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0);
LAB_0773e514:
                            uVar30 = (*(code *)*puVar12)(plVar10,puVar12[1]);
                            if ((uVar30 & 1) != 0) {
                              FUN_07732404(lVar26,(long)&stack0x000000c0 + 4,lVar16,lVar33,lVar22,0)
                              ;
                            }
                            lVar25 = *plVar10;
                            uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
                            if (uVar30 != 0) {
                              piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                  puVar12 = (undefined8 *)
                                            (lVar25 + (long)(*piVar31 + 0x24) * 0x10 + 0x138);
                                  goto LAB_0773e59c;
                                }
                                uVar30 = uVar30 - 1;
                                piVar31 = piVar31 + 4;
                              } while (uVar30 != 0);
                            }
                            puVar12 = (undefined8 *)
                                      FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0773e59c:
                            iVar8 = (*(code *)*puVar12)(plVar10,puVar12[1]);
                            if (iVar8 == 1) {
                              lVar25 = *plVar20;
                              uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
                              if (uVar30 != 0) {
                                piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f312c0) {
                                    puVar12 = (undefined8 *)
                                              (lVar25 + (long)(*piVar31 + 1) * 0x10 + 0x138);
                                    goto LAB_0773e608;
                                  }
                                  uVar30 = uVar30 - 1;
                                  piVar31 = piVar31 + 4;
                                } while (uVar30 != 0);
                              }
                              puVar12 = (undefined8 *)
                                        FUN_044822ac(plVar20,*(long *)PTR_DAT_09f312c0,1);
LAB_0773e608:
                              (*(code *)*puVar12)(plVar20,lVar16,iVar9,puVar12[1]);
                            }
                            *(int *)(lVar16 + 0x28) = iVar9;
                            FUN_0773ca38(&stack0x000000d0,uVar13,lVar16);
                            if (lVar28 == 0) goto LAB_0773ecc8;
                            lVar25 = *(long *)(lVar28 + 0x10);
                            lVar33 = *(long *)PTR_DAT_09f1e870;
                            *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
                            if (lVar25 == 0) goto LAB_0773ecc8;
                            uVar27 = *(uint *)(lVar28 + 0x18);
                            if (uVar27 < *(uint *)(lVar25 + 0x18)) {
                              *(uint *)(lVar28 + 0x18) = uVar27 + 1;
                              puVar12 = (undefined8 *)(lVar25 + (long)(int)uVar27 * 8 + 0x20);
                              *puVar12 = uVar13;
                              thunk_FUN_044bb4b4(puVar12,uVar13);
                            }
                            else {
                              FUN_05bade44(lVar28,uVar13,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar25 = *(long *)(lVar23 + 0x10);
                            lVar33 = *(long *)PTR_DAT_09f31558;
                            *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
                            if (lVar25 == 0) goto LAB_0773ecc8;
                            uVar27 = *(uint *)(lVar23 + 0x18);
                            if (uVar27 < *(uint *)(lVar25 + 0x18)) {
                              *(uint *)(lVar23 + 0x18) = uVar27 + 1;
                              plVar18 = (long *)(lVar25 + (long)(int)uVar27 * 8 + 0x20);
                              *plVar18 = lVar16;
                              thunk_FUN_044bb4b4(plVar18,lVar16);
                            }
                            else {
                              FUN_05bade44(lVar23,lVar16,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
                            }
                            plVar18 = (long *)(lVar16 + 0xd0);
                            lVar25 = *plVar18;
                            if (lVar25 == 0) goto LAB_0773ecc8;
                            uVar30 = 0;
                            lVar33 = 0x20;
                            iVar9 = *(int *)(lVar16 + 0x30) + iVar9;
                            while ((long)uVar30 < (long)(int)*(uint *)(lVar25 + 0x18)) {
                              if (*(uint *)(lVar25 + 0x18) <= uVar30) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar25 + lVar33) = 0;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar25 + lVar33),0);
                              lVar25 = *plVar18;
                              uVar30 = uVar30 + 1;
                              lVar33 = lVar33 + 8;
                              if (lVar25 == 0) goto LAB_0773ecc8;
                            }
                            *plVar18 = 0;
                            thunk_FUN_044bb4b4(plVar18,0);
                            if (3 < iVar4) {
                              lVar25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
                              if (lVar25 == 0) goto LAB_0773ecc8;
                              if (*(int *)(lVar25 + 0x18) == 0) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar25 + 0x20) = *(undefined8 *)PTR_DAT_09f31bc8;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar25 + 0x20));
                              if (*(uint *)(lVar25 + 0x18) < 2) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar25 + 0x28) = *(undefined8 *)(lVar16 + 0x20);
                              thunk_FUN_044bb4b4((undefined8 *)(lVar25 + 0x28));
                              if (*(uint *)(lVar25 + 0x18) < 3) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar25 + 0x30) = *(undefined8 *)PTR_DAT_09f31c20;
                              thunk_FUN_044bb4b4();
                              lVar16 = *plVar11;
                              uVar30 = (ulong)*(ushort *)(lVar16 + 0x12e);
                              if (uVar30 != 0) {
                                piVar31 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f313c8) {
                                    puVar12 = (undefined8 *)
                                              (lVar16 + (long)(*piVar31 + 6) * 0x10 + 0x138);
                                    goto LAB_0773e850;
                                  }
                                  uVar30 = uVar30 - 1;
                                  piVar31 = piVar31 + 4;
                                } while (uVar30 != 0);
                              }
                              puVar12 = (undefined8 *)
                                        FUN_044822ac(plVar11,*(long *)PTR_DAT_09f313c8,6);
LAB_0773e850:
                              uVar5 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                              _iStack00000000000000b8 = CONCAT44(uVar5,iStack00000000000000b8);
                              uVar13 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                              if (*(uint *)(lVar25 + 0x18) < 4) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar25 + 0x38) = uVar13;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar25 + 0x38),uVar13);
                              if (*(uint *)(lVar25 + 0x18) < 5) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar25 + 0x40) = *(undefined8 *)PTR_DAT_09f31c60;
                              thunk_FUN_044bb4b4();
                              lVar16 = *plVar20;
                              uVar30 = (ulong)*(ushort *)(lVar16 + 0x12e);
                              if (uVar30 != 0) {
                                piVar31 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f312c0) {
                                    puVar12 = (undefined8 *)
                                              (lVar16 + (long)(*piVar31 + 6) * 0x10 + 0x138);
                                    goto LAB_0773e908;
                                  }
                                  uVar30 = uVar30 - 1;
                                  piVar31 = piVar31 + 4;
                                } while (uVar30 != 0);
                              }
                              puVar12 = (undefined8 *)
                                        FUN_044822ac(plVar20,*(long *)PTR_DAT_09f312c0,6);
LAB_0773e908:
                              uVar5 = (*(code *)*puVar12)(plVar20,puVar12[1]);
                              _iStack00000000000000b8 = CONCAT44(uVar5,iStack00000000000000b8);
                              uVar13 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                              if (*(uint *)(lVar25 + 0x18) < 6) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar25 + 0x48) = uVar13;
                              thunk_FUN_044bb4b4();
                              uVar13 = FUN_078b57fc(lVar25,0);
                              plVar18 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                              in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,iVar4);
                              lVar16 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                          &stack0x00000098);
                              if (plVar18 == (long *)0x0) goto LAB_0773ecc8;
                              if ((lVar16 != 0) &&
                                 (lVar25 = thunk_FUN_04485110(lVar16,*(undefined8 *)
                                                                      (*plVar18 + 0x40)),
                                 lVar25 == 0)) goto LAB_0773eccc;
                              if ((int)plVar18[3] == 0) goto LAB_0773ecc4;
                              plVar18[4] = lVar16;
                              thunk_FUN_044bb4b4(plVar18 + 4,lVar16);
                              FUN_0771ec00(uVar13,plVar18,0);
                            }
                            uVar29 = uVar29 + 1;
                          } while ((long)uVar29 < (long)*(int *)(lVar24 + 0x18));
                        }
                        lVar26 = *plVar10;
                        uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
                        if (uVar29 != 0) {
                          piVar31 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar12 = (undefined8 *)
                                        (lVar26 + (long)(*piVar31 + 0x16) * 0x10 + 0x138);
                              goto LAB_0773ea3c;
                            }
                            uVar29 = uVar29 - 1;
                            piVar31 = piVar31 + 4;
                          } while (uVar29 != 0);
                        }
                        puVar12 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0x16)
                        ;
LAB_0773ea3c:
                        iVar9 = (*(code *)*puVar12)(plVar10,puVar12[1]);
                        if (iVar9 == 4) {
                          lVar26 = *plVar10;
                          uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
                          if (uVar29 != 0) {
                            piVar31 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                puVar12 = (undefined8 *)
                                          (lVar26 + (long)(*piVar31 + 0x1a) * 0x10 + 0x138);
                                goto LAB_0773eaa8;
                              }
                              uVar29 = uVar29 - 1;
                              piVar31 = piVar31 + 4;
                            } while (uVar29 != 0);
                          }
                          puVar12 = (undefined8 *)
                                    FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0x1a);
LAB_0773eaa8:
                          uVar13 = (*(code *)*puVar12)(plVar10,puVar12[1]);
                          lVar26 = *plVar11;
                          uVar29 = (ulong)*(ushort *)(lVar26 + 0x12e);
                          if (uVar29 != 0) {
                            piVar31 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f313c8) {
                                puVar12 = (undefined8 *)
                                          (lVar26 + (long)(*piVar31 + 0xe) * 0x10 + 0x138);
                                goto LAB_0773eb18;
                              }
                              uVar29 = uVar29 - 1;
                              piVar31 = piVar31 + 4;
                            } while (uVar29 != 0);
                          }
                          puVar12 = (undefined8 *)
                                    FUN_044822ac(plVar11,*(long *)PTR_DAT_09f313c8,0xe);
LAB_0773eb18:
                          (*(code *)*puVar12)(uVar13,plVar11,lVar23,puVar12[1]);
                        }
                        lVar26 = in_stack_00000180;
                        if (3 < iVar4) {
                          lVar22 = *plVar11;
                          uVar29 = (ulong)*(ushort *)(lVar22 + 0x12e);
                          if (uVar29 != 0) {
                            piVar31 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_09f313c8) {
                                puVar12 = (undefined8 *)
                                          (lVar22 + (long)(*piVar31 + 6) * 0x10 + 0x138);
                                goto LAB_0773eb94;
                              }
                              uVar29 = uVar29 - 1;
                              piVar31 = piVar31 + 4;
                            } while (uVar29 != 0);
                          }
                          puVar12 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f313c8,6);
LAB_0773eb94:
                          uVar5 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                          _iStack00000000000000b8 = CONCAT44(uVar5,iStack00000000000000b8);
                          uVar13 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                          if (lVar26 == 0) goto LAB_0773ecc8;
                          in_stack_000000b0 = FUN_087dad08(lVar26,0);
                          uVar17 = FUN_07a3c8f0(&stack0x000000b0,0);
                          uVar13 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31c18,uVar13,
                                                *(undefined8 *)PTR_DAT_09f31c28,uVar17,0);
                          plVar20 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,iVar4);
                          lVar26 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                      &stack0x00000098);
                          if (plVar20 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar26 != 0) &&
                             (lVar22 = thunk_FUN_04485110(lVar26,*(undefined8 *)(*plVar20 + 0x40)),
                             lVar22 == 0)) {
LAB_0773eccc:
                            uVar13 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                            FUN_04447d10(uVar13,0);
                          }
                          if ((int)plVar20[3] == 0) {
LAB_0773ecc4:
                    /* WARNING: Subroutine does not return */
                            FUN_04447e4c();
                          }
                          plVar20[4] = lVar26;
                          thunk_FUN_044bb4b4(plVar20 + 4,lVar26);
                          FUN_0771ec00(uVar13,plVar20,0);
                        }
                        if (unaff_x27[0x1b] != 0) {
                          FUN_087dae58(unaff_x27[0x1b],0);
                          goto LAB_0773ec98;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0773ecc8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


