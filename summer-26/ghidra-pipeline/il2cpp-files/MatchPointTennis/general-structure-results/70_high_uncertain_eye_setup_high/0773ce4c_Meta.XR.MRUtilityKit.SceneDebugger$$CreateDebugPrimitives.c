/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$CreateDebugPrimitives
ENTRY_POINT: 0773ce4c
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


bool Meta_XR_MRUtilityKit_SceneDebugger__CreateDebugPrimitives(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long in_x9;
  ulong uVar22;
  ulong uVar23;
  int *piVar24;
  int unaff_w20;
  undefined4 unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  long lVar25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined4 unaff_w29;
  long in_stack_00000050;
  undefined8 uStack0000000000000060;
  long lStack0000000000000068;
  undefined8 in_stack_00000078;
  long lStack0000000000000088;
  undefined8 in_stack_00000090;
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
  long lStack00000000000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e8;
  long in_stack_00000150;
  long in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 *in_stack_00000178;
  long in_stack_00000180;
  
  lStack00000000000000d0 = unaff_x27[0x22];
  uStack0000000000000060 = param_2;
  lStack0000000000000068 = in_x9;
  lStack0000000000000088 = param_1;
  plVar10 = (long *)FUN_07715da0();
  if (plVar10 == (long *)0x0) goto LAB_0773ecc8;
  lVar19 = *plVar10;
  uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar22 != 0) {
    piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
        puVar11 = (undefined8 *)(lVar19 + (long)(*piVar24 + 0x2a) * 0x10 + 0x138);
        goto LAB_0773cec8;
      }
      uVar22 = uVar22 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar22 != 0);
  }
  puVar11 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0x2a);
LAB_0773cec8:
  lVar19 = (*(code *)*puVar11)(plVar10,puVar11[1]);
  if (lVar19 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    plVar10 = (long *)FUN_07715da0();
    puVar2 = PTR_DAT_09f31548;
    if (plVar10 == (long *)0x0) goto LAB_0773ecc8;
    lVar19 = *plVar10;
    uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar22 != 0) {
      piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar11 = (undefined8 *)(lVar19 + (long)(*piVar24 + 0x2a) * 0x10 + 0x138);
          goto LAB_0773cf6c;
        }
        uVar22 = uVar22 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar22 != 0);
    }
    puVar11 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0x2a);
LAB_0773cf6c:
    uVar12 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    lVar19 = thunk_FUN_04485110(uVar12,*(undefined8 *)puVar2);
    if (lVar19 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      plVar10 = (long *)FUN_07715da0();
      if (plVar10 == (long *)0x0) goto LAB_0773ecc8;
      lVar19 = *plVar10;
      uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar22 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
            puVar11 = (undefined8 *)(lVar19 + (long)(*piVar24 + 0x2a) * 0x10 + 0x138);
            goto LAB_0773d00c;
          }
          uVar22 = uVar22 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar22 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0x2a);
LAB_0773d00c:
      lVar19 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if (lVar19 == 0) goto LAB_0773ecc8;
      uVar12 = *(undefined8 *)puVar2;
      lVar13 = thunk_FUN_04485110(lVar19,uVar12);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(lVar19,uVar12);
      }
      lVar13 = *(long *)puVar2;
      plVar10 = (long *)thunk_FUN_04485110(lVar19,lVar13);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(lVar19,lVar13);
      }
      lVar19 = *plVar10;
      uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar22 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar13) {
            puVar11 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_0773d09c;
          }
          uVar22 = uVar22 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar22 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac(plVar10,lVar13,0);
LAB_0773d09c:
      uVar4 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    }
  }
  if ((unaff_x27[0x18] == 0) ||
     (FUN_087dab38(unaff_x27[0x18],0), puVar11 = in_stack_00000178, unaff_x22 == (long *)0x0))
  goto LAB_0773ecc8;
  lVar19 = *unaff_x22;
  uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar22 != 0) {
    piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
        puVar14 = (undefined8 *)(lVar19 + (long)(*piVar24 + 0x22) * 0x10 + 0x138);
        goto LAB_0773d134;
      }
      uVar22 = uVar22 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar22 != 0);
  }
  puVar14 = (undefined8 *)FUN_044822ac();
LAB_0773d134:
  uVar22 = (*(code *)*puVar14)();
  puVar2 = PTR_DAT_09f313c8;
  if ((uVar22 & 1) == 0) {
    if (lStack0000000000000088 == 0) goto LAB_0773ecc8;
    if (*(int *)(lStack0000000000000088 + 0x18) < 1) goto LAB_0773d1bc;
    plVar10 = (long *)*puVar11;
    if (plVar10 == (long *)0x0) goto LAB_0773ecc8;
    lVar19 = *plVar10;
    uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar22 != 0) {
      piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f313c8) {
          puVar14 = (undefined8 *)(lVar19 + (long)(*piVar24 + 5) * 0x10 + 0x138);
          goto LAB_0773d1ec;
        }
        uVar22 = uVar22 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar22 != 0);
    }
    puVar14 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f313c8,5);
LAB_0773d1ec:
    (*(code *)*puVar14)(plVar10);
    plVar10 = (long *)*puVar11;
    if (plVar10 == (long *)0x0) goto LAB_0773ecc8;
    lVar13 = *plVar10;
    lVar19 = *(long *)puVar2;
    uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar22 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar19) {
          puVar14 = (undefined8 *)(lVar13 + (long)(*piVar24 + 6) * 0x10 + 0x138);
          goto LAB_0773d260;
        }
        uVar22 = uVar22 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar22 != 0);
    }
    puVar14 = (undefined8 *)FUN_044822ac(plVar10,lVar19,6);
LAB_0773d260:
    iVar5 = (*(code *)*puVar14)(plVar10,puVar14[1]);
    plVar10 = (long *)*puVar11;
    if (plVar10 == (long *)0x0) goto LAB_0773ecc8;
    lVar13 = *plVar10;
    lVar19 = *(long *)puVar2;
    uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar22 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar19) {
          puVar14 = (undefined8 *)(lVar13 + (long)(*piVar24 + 0xf) * 0x10 + 0x138);
          goto LAB_0773d2d8;
        }
        uVar22 = uVar22 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar22 != 0);
    }
    puVar14 = (undefined8 *)FUN_044822ac(plVar10,lVar19,0xf);
LAB_0773d2d8:
    lVar19 = (*(code *)*puVar14)(plVar10,puVar14[1]);
  }
  else {
LAB_0773d1bc:
    lVar19 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,unaff_w29);
    iVar5 = 0;
  }
  if (unaff_x27[0x18] != 0) {
    FUN_087dae58(unaff_x27[0x18],0);
    if (unaff_x27[0x19] == 0) goto LAB_0773ecc8;
    FUN_087dab38(unaff_x27[0x19],0);
    iStack00000000000000cc = (iVar5 + unaff_w20) - unaff_w24;
    iStack00000000000000c8 = 0;
    lVar13 = *unaff_x22;
    uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar22 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar14 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0773d368;
        }
        uVar22 = uVar22 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar22 != 0);
    }
    puVar14 = (undefined8 *)FUN_044822ac();
LAB_0773d368:
    uVar22 = (*(code *)*puVar14)();
    if ((uVar22 & 1) != 0) {
      if (unaff_x27[0x34] == 0) goto LAB_0773ecc8;
      iStack00000000000000c8 = (unaff_w25 - unaff_w23) + *(int *)(unaff_x27[0x34] + 0x18);
    }
    if (3 < in_stack_00000090._4_4_) {
      lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
      if (lVar13 == 0) goto LAB_0773ecc8;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0773ecc4;
      *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)PTR_DAT_09f31c48;
      thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x20));
      uVar12 = FUN_07a3b850(&stack0x000000ec,0);
      if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_0773ecc4;
      *(undefined8 *)(lVar13 + 0x28) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x28),uVar12);
      if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_0773ecc4;
      *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)PTR_DAT_09f31c50;
      thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x30));
      uVar12 = FUN_07a3b850(&stack0x000000e8,0);
      if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_0773ecc4;
      *(undefined8 *)(lVar13 + 0x38) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x38),uVar12);
      if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_0773ecc4;
      *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)PTR_DAT_09f31c10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x40));
      uVar12 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
      if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_0773ecc4;
      *(undefined8 *)(lVar13 + 0x48) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x48),uVar12);
      if (*(uint *)(lVar13 + 0x18) < 7) goto LAB_0773ecc4;
      *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)PTR_DAT_09f31bd8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x50));
      uVar12 = FUN_07a3b850(&stack0x000000c8,0);
      if (*(uint *)(lVar13 + 0x18) < 8) goto LAB_0773ecc4;
      *(undefined8 *)(lVar13 + 0x58) = uVar12;
      thunk_FUN_044bb4b4();
      uVar12 = FUN_078b57fc(lVar13,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar12,0);
      unaff_w29 = in_stack_000000d8._4_4_;
    }
    lVar15 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,unaff_w29);
    lVar13 = in_stack_00000150;
    puVar1 = PTR_DAT_09f31c40;
    puVar2 = PTR_DAT_09f31bf0;
    uStack00000000000000c0 = 0;
    if (lVar15 != 0) {
      uVar21 = *(uint *)(lVar15 + 0x18);
      if (0 < (int)uVar21) {
        do {
          if (lVar19 == 0) goto LAB_0773ecc8;
          if (*(uint *)(lVar19 + 0x18) <= uStack00000000000000c0) goto LAB_0773ecc4;
          if (unaff_x26 == 0) goto LAB_0773ecc8;
          if (*(uint *)(unaff_x26 + 0x18) <= uStack00000000000000c0) goto LAB_0773ecc4;
          if (lVar13 == 0) goto LAB_0773ecc8;
          if ((*(uint *)(lVar13 + 0x18) <= uStack00000000000000c0) ||
             (uVar21 <= uStack00000000000000c0)) goto LAB_0773ecc4;
          lVar20 = (long)(int)uStack00000000000000c0;
          *(int *)(lVar15 + lVar20 * 4 + 0x20) =
               (*(int *)(unaff_x26 + lVar20 * 4 + 0x20) + *(int *)(lVar19 + lVar20 * 4 + 0x20)) -
               *(int *)(lVar13 + lVar20 * 4 + 0x20);
          if (3 < in_stack_00000090._4_4_) {
            lVar20 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
            if (lVar20 == 0) goto LAB_0773ecc8;
            if (*(int *)(lVar20 + 0x18) == 0) goto LAB_0773ecc4;
            *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)PTR_DAT_09f31be0;
            thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x20));
            uVar12 = FUN_07a3b850(&stack0x000000c0,0);
            if (*(uint *)(lVar20 + 0x18) < 2) goto LAB_0773ecc4;
            *(undefined8 *)(lVar20 + 0x28) = uVar12;
            thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x28),uVar12);
            if (*(uint *)(lVar20 + 0x18) < 3) goto LAB_0773ecc4;
            *(undefined8 *)(lVar20 + 0x30) = *(undefined8 *)PTR_DAT_09f31bc0;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(lVar19 + 0x18) <= uStack00000000000000c0) ||
               (uVar12 = FUN_07a3b850(lVar19 + (long)(int)uStack00000000000000c0 * 4 + 0x20,0),
               *(uint *)(lVar20 + 0x18) < 4)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar20 + 0x38) = uVar12;
            thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x38),uVar12);
            if (*(uint *)(lVar20 + 0x18) < 5) goto LAB_0773ecc4;
            *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)puVar1;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(unaff_x26 + 0x18) <= uStack00000000000000c0) ||
               (uVar12 = FUN_07a3b850(unaff_x26 + (long)(int)uStack00000000000000c0 * 4 + 0x20,0),
               *(uint *)(lVar20 + 0x18) < 6)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar20 + 0x48) = uVar12;
            thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x48),uVar12);
            if (*(uint *)(lVar20 + 0x18) < 7) goto LAB_0773ecc4;
            *(undefined8 *)(lVar20 + 0x50) = *(undefined8 *)puVar2;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(lVar13 + 0x18) <= uStack00000000000000c0) ||
               (uVar12 = FUN_07a3b850(lVar13 + (long)(int)uStack00000000000000c0 * 4 + 0x20,0),
               *(uint *)(lVar20 + 0x18) < 8)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar20 + 0x58) = uVar12;
            thunk_FUN_044bb4b4();
            uVar12 = FUN_078b57fc(lVar20,0);
            lVar25 = *(long *)PTR_DAT_09f22e40;
            lVar20 = *(long *)(lVar25 + 0x38);
            if (lVar20 == 0) {
              FUN_04482014(lVar25);
              lVar20 = *(long *)(lVar25 + 0x38);
            }
            lVar20 = *(long *)(lVar20 + 0x10);
            if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
              lVar20 = FUN_04481fb8();
            }
            if (*(int *)(lVar20 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar20 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
            if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
              lVar20 = FUN_04481fb8();
            }
            FUN_0771ec00(uVar12,**(undefined8 **)(lVar20 + 0xb8),0);
          }
          uStack00000000000000c0 = uStack00000000000000c0 + 1;
          uVar21 = *(uint *)(lVar15 + 0x18);
        } while ((int)uStack00000000000000c0 < (int)uVar21);
      }
      iVar5 = iStack00000000000000cc;
      iVar6 = FUN_0772052c(0);
      iVar9 = iStack00000000000000cc;
      if (iVar6 <= iVar5) {
        uStack00000000000000bc = FUN_0772052c(0);
        uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
        uVar12 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31c08,uVar12,*(undefined8 *)PTR_DAT_09f31be8
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c6b48(uVar12,0);
LAB_0773ec98:
        return iVar5 < iVar6;
      }
      plVar10 = (long *)unaff_x27[0x39];
      (**(code **)(*unaff_x27 + 0x4f8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x500));
      if (plVar10 != (long *)0x0) {
        lVar19 = *plVar10;
        uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar22 != 0) {
          piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f313c8) {
              puVar14 = (undefined8 *)(lVar19 + (long)(*piVar24 + 3) * 0x10 + 0x138);
              goto LAB_0773d918;
            }
            uVar22 = uVar22 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar22 != 0);
        }
        puVar14 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f313c8,3);
LAB_0773d918:
        (*(code *)*puVar14)(plVar10,unaff_x27,unaff_w21,iVar9,lVar15,uVar4,in_stack_00000078,0);
        lVar19 = in_stack_00000160;
        iVar9 = iStack00000000000000cc;
        if (unaff_x28 != (long *)0x0) {
          lVar13 = *unaff_x28;
          lVar15 = unaff_x27[0x39];
          uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar22 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f312c0) {
                puVar14 = (undefined8 *)(lVar13 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                goto LAB_0773d9b0;
              }
              uVar22 = uVar22 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 != 0);
          }
          puVar14 = (undefined8 *)FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,2);
LAB_0773d9b0:
          (*(code *)*puVar14)(unaff_x28,lVar19,lStack0000000000000088,iVar9,lVar15,puVar14[1]);
          if (in_stack_00000050 != 0) {
            FUN_07732130(in_stack_00000050,iStack00000000000000c8,0);
            if (unaff_x27[0x19] != 0) {
              FUN_087dae58(unaff_x27[0x19],0);
              if (3 < in_stack_00000090._4_4_) {
                lVar13 = *plVar10;
                uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar22 != 0) {
                  piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f313c8) {
                      puVar14 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                      goto LAB_0773da50;
                    }
                    uVar22 = uVar22 - 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar22 != 0);
                }
                puVar14 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f313c8,0);
LAB_0773da50:
                in_stack_000000a8 = (*(code *)*puVar14)(plVar10,puVar14[1]);
                in_stack_00000098 = *(undefined8 *)PTR_DAT_09f31420;
                in_stack_000000a0 = 0xffffffffffffffff;
                uVar12 = FUN_07a742b0(&stack0x00000098,0);
                uVar16 = FUN_07a3b850((long)&stack0x000000c8 + 4,0);
                uVar12 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31bd0,uVar12,
                                      *(undefined8 *)PTR_DAT_09f31c58,uVar16,0);
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                }
                FUN_094c652c(uVar12,0);
              }
              if (lStack0000000000000088 != 0) {
                FUN_05baf848(lStack0000000000000088,*(undefined8 *)PTR_DAT_09f31bb8);
                uStack00000000000000c4 = 0;
                lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,in_stack_000000d8._4_4_);
                if (unaff_x27[0x1a] != 0) {
                  FUN_087dab38(unaff_x27[0x1a],0);
                  lVar15 = *unaff_x22;
                  uVar22 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar22 != 0) {
                    piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar14 = (undefined8 *)(lVar15 + (long)(*piVar24 + 0x22) * 0x10 + 0x138);
                        goto LAB_0773db88;
                      }
                      uVar22 = uVar22 - 1;
                      piVar24 = piVar24 + 4;
                    } while (uVar22 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_044822ac();
LAB_0773db88:
                  uVar22 = (*(code *)*puVar14)();
                  puVar2 = PTR_DAT_09f31320;
                  if (((uVar22 & 1) == 0) && (0 < *(int *)(lStack0000000000000088 + 0x18))) {
                    iStack00000000000000b8 = 0;
                    iVar9 = 0;
                    iVar8 = 0;
                    lVar15 = lVar13 + 0x20;
                    do {
                      lVar20 = FUN_05badb74(lStack0000000000000088,iStack00000000000000b8,
                                            *(undefined8 *)puVar2);
                      if (lVar20 == 0) goto LAB_0773ecc8;
                      if (*(char *)(lVar20 + 0xb9) == '\0') {
                        if (3 < in_stack_00000090._4_4_) {
                          uVar12 = FUN_07a3b850(&stack0x000000b8,0);
                          uVar12 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31bf8,uVar12,0);
                          plVar17 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          in_stack_00000098 =
                               CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                          lVar25 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                      &stack0x00000098);
                          if (plVar17 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar25 != 0) &&
                             (lVar18 = thunk_FUN_04485110(lVar25,*(undefined8 *)(*plVar17 + 0x40)),
                             lVar18 == 0)) goto LAB_0773eccc;
                          if ((int)plVar17[3] == 0) goto LAB_0773ecc4;
                          plVar17[4] = lVar25;
                          thunk_FUN_044bb4b4(plVar17 + 4,lVar25);
                          FUN_0771ec00(uVar12,plVar17,0);
                        }
                        lVar25 = *plVar10;
                        uVar22 = (ulong)*(ushort *)(lVar25 + 0x12e);
                        if (uVar22 != 0) {
                          piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f313c8) {
                              puVar14 = (undefined8 *)(lVar25 + (long)(*piVar24 + 9) * 0x10 + 0x138)
                              ;
                              goto LAB_0773ddc0;
                            }
                            uVar22 = uVar22 - 1;
                            piVar24 = piVar24 + 4;
                          } while (uVar22 != 0);
                        }
                        puVar14 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f313c8,9);
LAB_0773ddc0:
                        (*(code *)*puVar14)(plVar10,lVar20,puVar11,iVar9,iVar8,lVar13,
                                            in_stack_00000090._4_4_,puVar14[1]);
                        lVar25 = *unaff_x22;
                        uVar22 = (ulong)*(ushort *)(lVar25 + 0x12e);
                        if (uVar22 != 0) {
                          piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar14 = (undefined8 *)(lVar25 + (long)*piVar24 * 0x10 + 0x138);
                              goto LAB_0773de38;
                            }
                            uVar22 = uVar22 - 1;
                            piVar24 = piVar24 + 4;
                          } while (uVar22 != 0);
                        }
                        puVar14 = (undefined8 *)FUN_044822ac();
LAB_0773de38:
                        uVar22 = (*(code *)*puVar14)();
                        if ((uVar22 & 1) != 0) {
                          FUN_077322fc(in_stack_00000050,(long)&stack0x000000c0 + 4,lVar20,0);
                        }
                        lVar25 = *unaff_x22;
                        uVar22 = (ulong)*(ushort *)(lVar25 + 0x12e);
                        if (uVar22 != 0) {
                          piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar14 = (undefined8 *)
                                        (lVar25 + (long)(*piVar24 + 0x24) * 0x10 + 0x138);
                              goto LAB_0773deb4;
                            }
                            uVar22 = uVar22 - 1;
                            piVar24 = piVar24 + 4;
                          } while (uVar22 != 0);
                        }
                        puVar14 = (undefined8 *)FUN_044822ac();
LAB_0773deb4:
                        iVar7 = (*(code *)*puVar14)();
                        if (iVar7 == 1) {
                          lVar25 = *unaff_x28;
                          uVar22 = (ulong)*(ushort *)(lVar25 + 0x12e);
                          if (uVar22 != 0) {
                            piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f312c0) {
                                puVar14 = (undefined8 *)
                                          (lVar25 + (long)(*piVar24 + 8) * 0x10 + 0x138);
                                goto LAB_0773df2c;
                              }
                              uVar22 = uVar22 - 1;
                              piVar24 = piVar24 + 4;
                            } while (uVar22 != 0);
                          }
                          puVar14 = (undefined8 *)
                                    FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,8);
LAB_0773df2c:
                          (*(code *)*puVar14)(unaff_x28,lVar20,iVar9,puVar14[1]);
                        }
                        *(int *)(lVar20 + 0x28) = iVar9;
                        if (lVar13 == 0) goto LAB_0773ecc8;
                        uVar21 = *(uint *)(lVar13 + 0x18);
                        if (0 < (long)((ulong)uVar21 << 0x20)) {
                          lVar25 = *(long *)(lVar20 + 0x70);
                          uVar22 = 0;
                          do {
                            if (uVar21 <= uVar22) goto LAB_0773ecc4;
                            if (lVar25 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(lVar25 + 0x18) <= uVar22) goto LAB_0773ecc4;
                            *(undefined4 *)(lVar25 + 0x20 + uVar22 * 4) =
                                 *(undefined4 *)(lVar15 + uVar22 * 4);
                            lVar18 = *(long *)(lVar20 + 0x78);
                            if (lVar18 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_0773ecc4;
                            *(int *)(lVar15 + uVar22 * 4) =
                                 *(int *)(lVar18 + uVar22 * 4 + 0x20) +
                                 *(int *)(lVar15 + uVar22 * 4);
                            uVar22 = uVar22 + 1;
                          } while ((long)(int)uVar21 != uVar22);
                        }
                        iVar9 = *(int *)(lVar20 + 0x30) + iVar9;
                      }
                      else {
                        if (3 < in_stack_00000090._4_4_) {
                          uVar12 = FUN_07a3b850(&stack0x000000b8,0);
                          uVar12 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31c00,uVar12,0);
                          plVar17 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          in_stack_00000098 =
                               CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                          lVar25 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                      &stack0x00000098);
                          if (plVar17 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar25 != 0) &&
                             (lVar18 = thunk_FUN_04485110(lVar25,*(undefined8 *)(*plVar17 + 0x40)),
                             lVar18 == 0)) goto LAB_0773eccc;
                          if ((int)plVar17[3] == 0) goto LAB_0773ecc4;
                          plVar17[4] = lVar25;
                          thunk_FUN_044bb4b4(plVar17 + 4,lVar25);
                          FUN_0771ec00(uVar12,plVar17,0);
                        }
                        iVar8 = *(int *)(lVar20 + 0x30) + iVar8;
                      }
                      iStack00000000000000b8 = iStack00000000000000b8 + 1;
                    } while (iStack00000000000000b8 < *(int *)(lStack0000000000000088 + 0x18));
                    lVar13 = *unaff_x22;
                    uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    if (uVar22 != 0) {
                      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
                          puVar11 = (undefined8 *)(lVar13 + (long)(*piVar24 + 0x24) * 0x10 + 0x138);
                          goto LAB_0773e044;
                        }
                        uVar22 = uVar22 - 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar22 != 0);
                    }
                    puVar11 = (undefined8 *)FUN_044822ac();
LAB_0773e044:
                    iVar8 = (*(code *)*puVar11)();
                    uVar4 = in_stack_000000e8;
                    if (iVar8 == 1) {
                      lVar13 = *unaff_x28;
                      uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
                      if (uVar22 != 0) {
                        piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f312c0) {
                            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar24 + 4) * 0x10 + 0x138);
                            goto LAB_0773e0b4;
                          }
                          uVar22 = uVar22 - 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar22 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,4);
LAB_0773e0b4:
                      (*(code *)*puVar11)(unaff_x28,uVar4,puVar11[1]);
                    }
                    puVar3 = PTR_DAT_09f31bb0;
                    puVar1 = PTR_DAT_09f1e8b0;
                    iVar8 = *(int *)(lStack0000000000000088 + 0x18);
                    while (iVar8 = iVar8 + -1, -1 < iVar8) {
                      lVar13 = FUN_05badb74(lStack0000000000000088,iVar8,*(undefined8 *)puVar2);
                      if (lVar13 == 0) goto LAB_0773ecc8;
                      if (*(char *)(lVar13 + 0xb9) != '\0') {
                        lVar13 = FUN_05badb74(lStack0000000000000088,iVar8,*(undefined8 *)puVar2);
                        if ((lVar13 == 0) ||
                           (FUN_0773caa0(&stack0x000000d0,*(undefined8 *)(lVar13 + 0x18)),
                           lStack0000000000000068 == 0)) goto LAB_0773ecc8;
                        FUN_05baf638(lStack0000000000000068,iVar8,*(undefined8 *)puVar1);
                        FUN_05baf638(lStack0000000000000088,iVar8,*(undefined8 *)puVar3);
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
                      lVar13 = *unaff_x22;
                      uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
                      if (uVar22 != 0) {
                        piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
                            puVar11 = (undefined8 *)
                                      (lVar13 + (long)(*piVar24 + 0x24) * 0x10 + 0x138);
                            goto LAB_0773e1c8;
                          }
                          uVar22 = uVar22 - 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar22 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_044822ac();
LAB_0773e1c8:
                      iVar8 = (*(code *)*puVar11)();
                      if (iVar8 == 1) {
                        lVar13 = *unaff_x28;
                        uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
                        if (uVar22 != 0) {
                          piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f312c0) {
                              puVar11 = (undefined8 *)(lVar13 + (long)(*piVar24 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_0773e234;
                            }
                            uVar22 = uVar22 - 1;
                            piVar24 = piVar24 + 4;
                          } while (uVar22 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,5);
LAB_0773e234:
                        (*(code *)*puVar11)(unaff_x28,puVar11[1]);
                      }
                      lVar13 = in_stack_00000168;
                      if (lVar19 != 0) {
                        if (0 < *(int *)(lVar19 + 0x18)) {
                          uVar22 = 0;
                          do {
                            lVar15 = FUN_05badb74(lVar19,uVar22 & 0xffffffff,
                                                  *(undefined8 *)PTR_DAT_09f31320);
                            if (lVar13 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_0773ecc4;
                            if (lVar15 == 0) goto LAB_0773ecc8;
                            lVar20 = *plVar10;
                            uVar12 = *(undefined8 *)(lVar13 + uVar22 * 8 + 0x20);
                            lVar25 = *(long *)(lVar15 + 0xc0);
                            uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
                            if (uVar23 != 0) {
                              piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f313c8) {
                                  puVar11 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
                                  goto LAB_0773e2ec;
                                }
                                uVar23 = uVar23 - 1;
                                piVar24 = piVar24 + 4;
                              } while (uVar23 != 0);
                            }
                            puVar11 = (undefined8 *)
                                      FUN_044822ac(plVar10,*(long *)PTR_DAT_09f313c8,0);
LAB_0773e2ec:
                            uVar4 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                            lVar20 = *plVar10;
                            uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
                            if (uVar23 != 0) {
                              piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f313c8) {
                                  puVar11 = (undefined8 *)
                                            (lVar20 + (long)(*piVar24 + 10) * 0x10 + 0x138);
                                  goto LAB_0773e354;
                                }
                                uVar23 = uVar23 - 1;
                                piVar24 = piVar24 + 4;
                              } while (uVar23 != 0);
                            }
                            puVar11 = (undefined8 *)
                                      FUN_044822ac(plVar10,*(long *)PTR_DAT_09f313c8,10);
LAB_0773e354:
                            (*(code *)*puVar11)(plVar10,lVar15,iVar9,uVar4,1,0);
                            if (lVar25 == 0) goto LAB_0773ecc8;
                            iVar8 = FUN_094d3ba4(lVar25,0);
                            if (*(long *)(lVar15 + 0x88) == 0) goto LAB_0773ecc8;
                            iVar7 = *(int *)(*(long *)(lVar15 + 0x88) + 0x18);
                            if (iVar7 < iVar8) {
                              if (3 < in_stack_00000090._4_4_) {
                                uVar16 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                                      *(undefined8 *)(lVar15 + 0x20),
                                                      *(undefined8 *)PTR_DAT_09f31c30,0);
                                lVar18 = *(long *)PTR_DAT_09f22e40;
                                lVar20 = *(long *)(lVar18 + 0x38);
                                if (lVar20 == 0) {
                                  FUN_04482014(lVar18);
                                  lVar20 = *(long *)(lVar18 + 0x38);
                                }
                                lVar20 = *(long *)(lVar20 + 0x10);
                                if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                                  lVar20 = FUN_04481fb8();
                                }
                                if (*(int *)(lVar20 + 0xe4) == 0) {
                                  thunk_FUN_044a54b4();
                                }
                                lVar20 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
                                if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                                  lVar20 = FUN_04481fb8();
                                }
                                FUN_0771ec00(uVar16,**(undefined8 **)(lVar20 + 0xb8),0);
                              }
                            }
                            else if ((1 < in_stack_00000090._4_4_) && (iVar8 < iVar7)) {
                              uVar16 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                                    *(undefined8 *)(lVar15 + 0x20),
                                                    *(undefined8 *)PTR_DAT_09f31c38,0);
                              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                              }
                              FUN_094c33b0(uVar16,0);
                            }
                            lVar20 = *unaff_x22;
                            uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
                            if (uVar23 != 0) {
                              piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                  puVar11 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
                                  goto LAB_0773e514;
                                }
                                uVar23 = uVar23 - 1;
                                piVar24 = piVar24 + 4;
                              } while (uVar23 != 0);
                            }
                            puVar11 = (undefined8 *)FUN_044822ac();
LAB_0773e514:
                            uVar23 = (*(code *)*puVar11)();
                            if ((uVar23 & 1) != 0) {
                              FUN_07732404(in_stack_00000050,(long)&stack0x000000c0 + 4,lVar15,
                                           lVar25,in_stack_00000078,0);
                            }
                            lVar20 = *unaff_x22;
                            uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
                            if (uVar23 != 0) {
                              piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                  puVar11 = (undefined8 *)
                                            (lVar20 + (long)(*piVar24 + 0x24) * 0x10 + 0x138);
                                  goto LAB_0773e59c;
                                }
                                uVar23 = uVar23 - 1;
                                piVar24 = piVar24 + 4;
                              } while (uVar23 != 0);
                            }
                            puVar11 = (undefined8 *)FUN_044822ac();
LAB_0773e59c:
                            iVar8 = (*(code *)*puVar11)();
                            if (iVar8 == 1) {
                              lVar20 = *unaff_x28;
                              uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
                              if (uVar23 != 0) {
                                piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f312c0) {
                                    puVar11 = (undefined8 *)
                                              (lVar20 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                                    goto LAB_0773e608;
                                  }
                                  uVar23 = uVar23 - 1;
                                  piVar24 = piVar24 + 4;
                                } while (uVar23 != 0);
                              }
                              puVar11 = (undefined8 *)
                                        FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,1);
LAB_0773e608:
                              (*(code *)*puVar11)(unaff_x28,lVar15,iVar9,puVar11[1]);
                            }
                            *(int *)(lVar15 + 0x28) = iVar9;
                            FUN_0773ca38(&stack0x000000d0,uVar12,lVar15);
                            if (lStack0000000000000068 == 0) goto LAB_0773ecc8;
                            lVar20 = *(long *)(lStack0000000000000068 + 0x10);
                            lVar25 = *(long *)PTR_DAT_09f1e870;
                            *(int *)(lStack0000000000000068 + 0x1c) =
                                 *(int *)(lStack0000000000000068 + 0x1c) + 1;
                            if (lVar20 == 0) goto LAB_0773ecc8;
                            uVar21 = *(uint *)(lStack0000000000000068 + 0x18);
                            if (uVar21 < *(uint *)(lVar20 + 0x18)) {
                              *(uint *)(lStack0000000000000068 + 0x18) = uVar21 + 1;
                              puVar11 = (undefined8 *)(lVar20 + (long)(int)uVar21 * 8 + 0x20);
                              *puVar11 = uVar12;
                              thunk_FUN_044bb4b4(puVar11,uVar12);
                            }
                            else {
                              FUN_05bade44(lStack0000000000000068,uVar12,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar20 = *(long *)(lStack0000000000000088 + 0x10);
                            lVar25 = *(long *)PTR_DAT_09f31558;
                            *(int *)(lStack0000000000000088 + 0x1c) =
                                 *(int *)(lStack0000000000000088 + 0x1c) + 1;
                            if (lVar20 == 0) goto LAB_0773ecc8;
                            uVar21 = *(uint *)(lStack0000000000000088 + 0x18);
                            if (uVar21 < *(uint *)(lVar20 + 0x18)) {
                              *(uint *)(lStack0000000000000088 + 0x18) = uVar21 + 1;
                              plVar17 = (long *)(lVar20 + (long)(int)uVar21 * 8 + 0x20);
                              *plVar17 = lVar15;
                              thunk_FUN_044bb4b4(plVar17,lVar15);
                            }
                            else {
                              FUN_05bade44(lStack0000000000000088,lVar15,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                            }
                            plVar17 = (long *)(lVar15 + 0xd0);
                            lVar20 = *plVar17;
                            if (lVar20 == 0) goto LAB_0773ecc8;
                            uVar23 = 0;
                            lVar25 = 0x20;
                            iVar9 = *(int *)(lVar15 + 0x30) + iVar9;
                            while ((long)uVar23 < (long)(int)*(uint *)(lVar20 + 0x18)) {
                              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar20 + lVar25) = 0;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar20 + lVar25),0);
                              lVar20 = *plVar17;
                              uVar23 = uVar23 + 1;
                              lVar25 = lVar25 + 8;
                              if (lVar20 == 0) goto LAB_0773ecc8;
                            }
                            *plVar17 = 0;
                            thunk_FUN_044bb4b4(plVar17,0);
                            if (3 < in_stack_00000090._4_4_) {
                              lVar20 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
                              if (lVar20 == 0) goto LAB_0773ecc8;
                              if (*(int *)(lVar20 + 0x18) == 0) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)PTR_DAT_09f31bc8;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x20));
                              if (*(uint *)(lVar20 + 0x18) < 2) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar20 + 0x28) = *(undefined8 *)(lVar15 + 0x20);
                              thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x28));
                              if (*(uint *)(lVar20 + 0x18) < 3) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar20 + 0x30) = *(undefined8 *)PTR_DAT_09f31c20;
                              thunk_FUN_044bb4b4();
                              lVar15 = *plVar10;
                              uVar23 = (ulong)*(ushort *)(lVar15 + 0x12e);
                              if (uVar23 != 0) {
                                piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f313c8) {
                                    puVar11 = (undefined8 *)
                                              (lVar15 + (long)(*piVar24 + 6) * 0x10 + 0x138);
                                    goto LAB_0773e850;
                                  }
                                  uVar23 = uVar23 - 1;
                                  piVar24 = piVar24 + 4;
                                } while (uVar23 != 0);
                              }
                              puVar11 = (undefined8 *)
                                        FUN_044822ac(plVar10,*(long *)PTR_DAT_09f313c8,6);
LAB_0773e850:
                              uStack00000000000000bc = (*(code *)*puVar11)(plVar10,puVar11[1]);
                              uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                              if (*(uint *)(lVar20 + 0x18) < 4) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar20 + 0x38) = uVar12;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar20 + 0x38),uVar12);
                              if (*(uint *)(lVar20 + 0x18) < 5) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)PTR_DAT_09f31c60;
                              thunk_FUN_044bb4b4();
                              lVar15 = *unaff_x28;
                              uVar23 = (ulong)*(ushort *)(lVar15 + 0x12e);
                              if (uVar23 != 0) {
                                piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f312c0) {
                                    puVar11 = (undefined8 *)
                                              (lVar15 + (long)(*piVar24 + 6) * 0x10 + 0x138);
                                    goto LAB_0773e908;
                                  }
                                  uVar23 = uVar23 - 1;
                                  piVar24 = piVar24 + 4;
                                } while (uVar23 != 0);
                              }
                              puVar11 = (undefined8 *)
                                        FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,6);
LAB_0773e908:
                              uStack00000000000000bc = (*(code *)*puVar11)(unaff_x28,puVar11[1]);
                              uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                              if (*(uint *)(lVar20 + 0x18) < 6) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar20 + 0x48) = uVar12;
                              thunk_FUN_044bb4b4();
                              uVar12 = FUN_078b57fc(lVar20,0);
                              plVar17 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                              in_stack_00000098 =
                                   CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                              lVar15 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                          &stack0x00000098);
                              if (plVar17 == (long *)0x0) goto LAB_0773ecc8;
                              if ((lVar15 != 0) &&
                                 (lVar20 = thunk_FUN_04485110(lVar15,*(undefined8 *)
                                                                      (*plVar17 + 0x40)),
                                 lVar20 == 0)) goto LAB_0773eccc;
                              if ((int)plVar17[3] == 0) goto LAB_0773ecc4;
                              plVar17[4] = lVar15;
                              thunk_FUN_044bb4b4(plVar17 + 4,lVar15);
                              FUN_0771ec00(uVar12,plVar17,0);
                            }
                            uVar22 = uVar22 + 1;
                          } while ((long)uVar22 < (long)*(int *)(lVar19 + 0x18));
                        }
                        lVar19 = *unaff_x22;
                        uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
                        if (uVar22 != 0) {
                          piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar11 = (undefined8 *)
                                        (lVar19 + (long)(*piVar24 + 0x16) * 0x10 + 0x138);
                              goto LAB_0773ea3c;
                            }
                            uVar22 = uVar22 - 1;
                            piVar24 = piVar24 + 4;
                          } while (uVar22 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_044822ac();
LAB_0773ea3c:
                        iVar9 = (*(code *)*puVar11)();
                        if (iVar9 == 4) {
                          lVar19 = *unaff_x22;
                          uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
                          if (uVar22 != 0) {
                            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                puVar11 = (undefined8 *)
                                          (lVar19 + (long)(*piVar24 + 0x1a) * 0x10 + 0x138);
                                goto LAB_0773eaa8;
                              }
                              uVar22 = uVar22 - 1;
                              piVar24 = piVar24 + 4;
                            } while (uVar22 != 0);
                          }
                          puVar11 = (undefined8 *)FUN_044822ac();
LAB_0773eaa8:
                          uVar12 = (*(code *)*puVar11)();
                          lVar19 = *plVar10;
                          uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
                          if (uVar22 != 0) {
                            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f313c8) {
                                puVar11 = (undefined8 *)
                                          (lVar19 + (long)(*piVar24 + 0xe) * 0x10 + 0x138);
                                goto LAB_0773eb18;
                              }
                              uVar22 = uVar22 - 1;
                              piVar24 = piVar24 + 4;
                            } while (uVar22 != 0);
                          }
                          puVar11 = (undefined8 *)
                                    FUN_044822ac(plVar10,*(long *)PTR_DAT_09f313c8,0xe);
LAB_0773eb18:
                          (*(code *)*puVar11)(uVar12,plVar10,lStack0000000000000088,puVar11[1]);
                        }
                        lVar19 = in_stack_00000180;
                        if (3 < in_stack_00000090._4_4_) {
                          lVar13 = *plVar10;
                          uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
                          if (uVar22 != 0) {
                            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09f313c8) {
                                puVar11 = (undefined8 *)
                                          (lVar13 + (long)(*piVar24 + 6) * 0x10 + 0x138);
                                goto LAB_0773eb94;
                              }
                              uVar22 = uVar22 - 1;
                              piVar24 = piVar24 + 4;
                            } while (uVar22 != 0);
                          }
                          puVar11 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f313c8,6);
LAB_0773eb94:
                          uStack00000000000000bc = (*(code *)*puVar11)(plVar10,puVar11[1]);
                          uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                          if (lVar19 == 0) goto LAB_0773ecc8;
                          in_stack_000000b0 = FUN_087dad08(lVar19,0);
                          uVar16 = FUN_07a3c8f0(&stack0x000000b0,0);
                          uVar12 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31c18,uVar12,
                                                *(undefined8 *)PTR_DAT_09f31c28,uVar16,0);
                          plVar10 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          in_stack_00000098 =
                               CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                          lVar19 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                      &stack0x00000098);
                          if (plVar10 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar19 != 0) &&
                             (lVar13 = thunk_FUN_04485110(lVar19,*(undefined8 *)(*plVar10 + 0x40)),
                             lVar13 == 0)) {
LAB_0773eccc:
                            uVar12 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                            FUN_04447d10(uVar12,0);
                          }
                          if ((int)plVar10[3] == 0) {
LAB_0773ecc4:
                    /* WARNING: Subroutine does not return */
                            FUN_04447e4c();
                          }
                          plVar10[4] = lVar19;
                          thunk_FUN_044bb4b4(plVar10 + 4,lVar19);
                          FUN_0771ec00(uVar12,plVar10,0);
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


