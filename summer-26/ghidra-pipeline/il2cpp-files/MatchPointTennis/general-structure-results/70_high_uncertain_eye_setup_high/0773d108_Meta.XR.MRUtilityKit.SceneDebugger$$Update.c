/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$Update
ENTRY_POINT: 0773d108
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SceneDebugger__Update(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long in_x9;
  ulong uVar21;
  int *in_x10;
  int *piVar22;
  long *plVar23;
  int unaff_w20;
  undefined4 unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  long lVar24;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined4 unaff_w29;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
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
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e8;
  long in_stack_00000150;
  long in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000180;
  
  do {
    in_x9 = in_x9 + -1;
    piVar22 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar10 = (undefined8 *)FUN_044822ac();
      goto LAB_0773d134;
    }
    plVar23 = (long *)(in_x10 + 2);
    in_x10 = piVar22;
  } while (*plVar23 != param_3);
  puVar10 = (undefined8 *)(param_1 + (long)(*piVar22 + 0x22) * 0x10 + 0x138);
LAB_0773d134:
  uVar11 = (*(code *)*puVar10)();
  puVar2 = PTR_DAT_09f313c8;
  if ((uVar11 & 1) == 0) {
    if (in_stack_00000088 == 0) goto LAB_0773ecc8;
    if (*(int *)(in_stack_00000088 + 0x18) < 1) goto LAB_0773d1bc;
    plVar23 = (long *)*in_stack_00000058;
    if (plVar23 == (long *)0x0) goto LAB_0773ecc8;
    lVar17 = *plVar23;
    uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar11 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f313c8) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 5) * 0x10 + 0x138);
          goto LAB_0773d1ec;
        }
        uVar11 = uVar11 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f313c8,5);
LAB_0773d1ec:
    (*(code *)*puVar10)(plVar23);
    plVar23 = (long *)*in_stack_00000058;
    if (plVar23 == (long *)0x0) goto LAB_0773ecc8;
    lVar18 = *plVar23;
    lVar17 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar11 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar17) {
          puVar10 = (undefined8 *)(lVar18 + (long)(*piVar22 + 6) * 0x10 + 0x138);
          goto LAB_0773d260;
        }
        uVar11 = uVar11 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar23,lVar17,6);
LAB_0773d260:
    iVar4 = (*(code *)*puVar10)(plVar23,puVar10[1]);
    plVar23 = (long *)*in_stack_00000058;
    if (plVar23 == (long *)0x0) goto LAB_0773ecc8;
    lVar18 = *plVar23;
    lVar17 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar11 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar17) {
          puVar10 = (undefined8 *)(lVar18 + (long)(*piVar22 + 0xf) * 0x10 + 0x138);
          goto LAB_0773d2d8;
        }
        uVar11 = uVar11 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar23,lVar17,0xf);
LAB_0773d2d8:
    lVar17 = (*(code *)*puVar10)(plVar23,puVar10[1]);
  }
  else {
LAB_0773d1bc:
    lVar17 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,unaff_w29);
    iVar4 = 0;
  }
  if (unaff_x27[0x18] != 0) {
    FUN_087dae58(unaff_x27[0x18],0);
    if (unaff_x27[0x19] == 0) goto LAB_0773ecc8;
    FUN_087dab38(unaff_x27[0x19],0);
    iStack00000000000000cc = (iVar4 + unaff_w20) - unaff_w24;
    iStack00000000000000c8 = 0;
    lVar18 = *unaff_x22;
    uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar11 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar10 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0773d368;
        }
        uVar11 = uVar11 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_0773d368:
    uVar11 = (*(code *)*puVar10)();
    if ((uVar11 & 1) != 0) {
      if (unaff_x27[0x34] == 0) goto LAB_0773ecc8;
      iStack00000000000000c8 = (unaff_w25 - unaff_w23) + *(int *)(unaff_x27[0x34] + 0x18);
    }
    if (3 < in_stack_00000090._4_4_) {
      lVar18 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
      if (lVar18 == 0) goto LAB_0773ecc8;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0773ecc4;
      *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)PTR_DAT_09f31c48;
      thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x20));
      uVar12 = FUN_07a3b850(&stack0x000000ec,0);
      if (*(uint *)(lVar18 + 0x18) < 2) goto LAB_0773ecc4;
      *(undefined8 *)(lVar18 + 0x28) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x28),uVar12);
      if (*(uint *)(lVar18 + 0x18) < 3) goto LAB_0773ecc4;
      *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)PTR_DAT_09f31c50;
      thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x30));
      uVar12 = FUN_07a3b850(&stack0x000000e8,0);
      if (*(uint *)(lVar18 + 0x18) < 4) goto LAB_0773ecc4;
      *(undefined8 *)(lVar18 + 0x38) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x38),uVar12);
      if (*(uint *)(lVar18 + 0x18) < 5) goto LAB_0773ecc4;
      *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)PTR_DAT_09f31c10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x40));
      uVar12 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
      if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_0773ecc4;
      *(undefined8 *)(lVar18 + 0x48) = uVar12;
      thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x48),uVar12);
      if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_0773ecc4;
      *(undefined8 *)(lVar18 + 0x50) = *(undefined8 *)PTR_DAT_09f31bd8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x50));
      uVar12 = FUN_07a3b850(&stack0x000000c8,0);
      if (*(uint *)(lVar18 + 0x18) < 8) goto LAB_0773ecc4;
      *(undefined8 *)(lVar18 + 0x58) = uVar12;
      thunk_FUN_044bb4b4();
      uVar12 = FUN_078b57fc(lVar18,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar12,0);
      unaff_w29 = in_stack_000000d8._4_4_;
    }
    lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,unaff_w29);
    lVar18 = in_stack_00000150;
    puVar1 = PTR_DAT_09f31c40;
    puVar2 = PTR_DAT_09f31bf0;
    uStack00000000000000c0 = 0;
    if (lVar13 != 0) {
      uVar20 = *(uint *)(lVar13 + 0x18);
      if (0 < (int)uVar20) {
        do {
          if (lVar17 == 0) goto LAB_0773ecc8;
          if (*(uint *)(lVar17 + 0x18) <= uStack00000000000000c0) goto LAB_0773ecc4;
          if (unaff_x26 == 0) goto LAB_0773ecc8;
          if (*(uint *)(unaff_x26 + 0x18) <= uStack00000000000000c0) goto LAB_0773ecc4;
          if (lVar18 == 0) goto LAB_0773ecc8;
          if ((*(uint *)(lVar18 + 0x18) <= uStack00000000000000c0) ||
             (uVar20 <= uStack00000000000000c0)) goto LAB_0773ecc4;
          lVar19 = (long)(int)uStack00000000000000c0;
          *(int *)(lVar13 + lVar19 * 4 + 0x20) =
               (*(int *)(unaff_x26 + lVar19 * 4 + 0x20) + *(int *)(lVar17 + lVar19 * 4 + 0x20)) -
               *(int *)(lVar18 + lVar19 * 4 + 0x20);
          if (3 < in_stack_00000090._4_4_) {
            lVar19 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
            if (lVar19 == 0) goto LAB_0773ecc8;
            if (*(int *)(lVar19 + 0x18) == 0) goto LAB_0773ecc4;
            *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)PTR_DAT_09f31be0;
            thunk_FUN_044bb4b4((undefined8 *)(lVar19 + 0x20));
            uVar12 = FUN_07a3b850(&stack0x000000c0,0);
            if (*(uint *)(lVar19 + 0x18) < 2) goto LAB_0773ecc4;
            *(undefined8 *)(lVar19 + 0x28) = uVar12;
            thunk_FUN_044bb4b4((undefined8 *)(lVar19 + 0x28),uVar12);
            if (*(uint *)(lVar19 + 0x18) < 3) goto LAB_0773ecc4;
            *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)PTR_DAT_09f31bc0;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(lVar17 + 0x18) <= uStack00000000000000c0) ||
               (uVar12 = FUN_07a3b850(lVar17 + (long)(int)uStack00000000000000c0 * 4 + 0x20,0),
               *(uint *)(lVar19 + 0x18) < 4)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar19 + 0x38) = uVar12;
            thunk_FUN_044bb4b4((undefined8 *)(lVar19 + 0x38),uVar12);
            if (*(uint *)(lVar19 + 0x18) < 5) goto LAB_0773ecc4;
            *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)puVar1;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(unaff_x26 + 0x18) <= uStack00000000000000c0) ||
               (uVar12 = FUN_07a3b850(unaff_x26 + (long)(int)uStack00000000000000c0 * 4 + 0x20,0),
               *(uint *)(lVar19 + 0x18) < 6)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar19 + 0x48) = uVar12;
            thunk_FUN_044bb4b4((undefined8 *)(lVar19 + 0x48),uVar12);
            if (*(uint *)(lVar19 + 0x18) < 7) goto LAB_0773ecc4;
            *(undefined8 *)(lVar19 + 0x50) = *(undefined8 *)puVar2;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(lVar18 + 0x18) <= uStack00000000000000c0) ||
               (uVar12 = FUN_07a3b850(lVar18 + (long)(int)uStack00000000000000c0 * 4 + 0x20,0),
               *(uint *)(lVar19 + 0x18) < 8)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar19 + 0x58) = uVar12;
            thunk_FUN_044bb4b4();
            uVar12 = FUN_078b57fc(lVar19,0);
            lVar24 = *(long *)PTR_DAT_09f22e40;
            lVar19 = *(long *)(lVar24 + 0x38);
            if (lVar19 == 0) {
              FUN_04482014(lVar24);
              lVar19 = *(long *)(lVar24 + 0x38);
            }
            lVar19 = *(long *)(lVar19 + 0x10);
            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
              lVar19 = FUN_04481fb8();
            }
            if (*(int *)(lVar19 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar19 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
              lVar19 = FUN_04481fb8();
            }
            FUN_0771ec00(uVar12,**(undefined8 **)(lVar19 + 0xb8),0);
          }
          uStack00000000000000c0 = uStack00000000000000c0 + 1;
          uVar20 = *(uint *)(lVar13 + 0x18);
        } while ((int)uStack00000000000000c0 < (int)uVar20);
      }
      iVar4 = iStack00000000000000cc;
      iVar5 = FUN_0772052c(0);
      iVar9 = iStack00000000000000cc;
      if (iVar5 <= iVar4) {
        uStack00000000000000bc = FUN_0772052c(0);
        uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
        uVar12 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31c08,uVar12,*(undefined8 *)PTR_DAT_09f31be8
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c6b48(uVar12,0);
LAB_0773ec98:
        return iVar4 < iVar5;
      }
      plVar23 = (long *)unaff_x27[0x39];
      (**(code **)(*unaff_x27 + 0x4f8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x500));
      if (plVar23 != (long *)0x0) {
        lVar17 = *plVar23;
        uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar11 != 0) {
          piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f313c8) {
              puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 3) * 0x10 + 0x138);
              goto LAB_0773d918;
            }
            uVar11 = uVar11 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f313c8,3);
LAB_0773d918:
        (*(code *)*puVar10)(plVar23,unaff_x27,unaff_w21,iVar9,lVar13,in_stack_00000070,
                            in_stack_00000078,0);
        lVar17 = in_stack_00000160;
        iVar9 = iStack00000000000000cc;
        if (unaff_x28 != (long *)0x0) {
          lVar18 = *unaff_x28;
          lVar13 = unaff_x27[0x39];
          uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar11 != 0) {
            piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f312c0) {
                puVar10 = (undefined8 *)(lVar18 + (long)(*piVar22 + 2) * 0x10 + 0x138);
                goto LAB_0773d9b0;
              }
              uVar11 = uVar11 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar11 != 0);
          }
          puVar10 = (undefined8 *)FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,2);
LAB_0773d9b0:
          (*(code *)*puVar10)(unaff_x28,lVar17,in_stack_00000088,iVar9,lVar13,puVar10[1]);
          if (in_stack_00000050 != 0) {
            FUN_07732130(in_stack_00000050,iStack00000000000000c8,0);
            if (unaff_x27[0x19] != 0) {
              FUN_087dae58(unaff_x27[0x19],0);
              if (3 < in_stack_00000090._4_4_) {
                lVar18 = *plVar23;
                uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar11 != 0) {
                  piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f313c8) {
                      puVar10 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
                      goto LAB_0773da50;
                    }
                    uVar11 = uVar11 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar11 != 0);
                }
                puVar10 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f313c8,0);
LAB_0773da50:
                in_stack_000000a8 = (*(code *)*puVar10)(plVar23,puVar10[1]);
                in_stack_00000098 = *(undefined8 *)PTR_DAT_09f31420;
                in_stack_000000a0 = 0xffffffffffffffff;
                uVar12 = FUN_07a742b0(&stack0x00000098,0);
                uVar14 = FUN_07a3b850((long)&stack0x000000c8 + 4,0);
                uVar12 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31bd0,uVar12,
                                      *(undefined8 *)PTR_DAT_09f31c58,uVar14,0);
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                }
                FUN_094c652c(uVar12,0);
              }
              if (in_stack_00000088 != 0) {
                FUN_05baf848(in_stack_00000088,*(undefined8 *)PTR_DAT_09f31bb8);
                uStack00000000000000c4 = 0;
                lVar18 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,in_stack_000000d8._4_4_);
                if (unaff_x27[0x1a] != 0) {
                  FUN_087dab38(unaff_x27[0x1a],0);
                  lVar13 = *unaff_x22;
                  uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar11 != 0) {
                    piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar22 + 0x22) * 0x10 + 0x138);
                        goto LAB_0773db88;
                      }
                      uVar11 = uVar11 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_044822ac();
LAB_0773db88:
                  uVar11 = (*(code *)*puVar10)();
                  puVar2 = PTR_DAT_09f31320;
                  if (((uVar11 & 1) == 0) && (0 < *(int *)(in_stack_00000088 + 0x18))) {
                    iStack00000000000000b8 = 0;
                    iVar9 = 0;
                    iVar7 = 0;
                    lVar13 = lVar18 + 0x20;
                    do {
                      lVar19 = FUN_05badb74(in_stack_00000088,iStack00000000000000b8,
                                            *(undefined8 *)puVar2);
                      if (lVar19 == 0) goto LAB_0773ecc8;
                      if (*(char *)(lVar19 + 0xb9) == '\0') {
                        if (3 < in_stack_00000090._4_4_) {
                          uVar12 = FUN_07a3b850(&stack0x000000b8,0);
                          uVar12 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31bf8,uVar12,0);
                          plVar15 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          in_stack_00000098 =
                               CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                          lVar24 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                      &stack0x00000098);
                          if (plVar15 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar24 != 0) &&
                             (lVar16 = thunk_FUN_04485110(lVar24,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar16 == 0)) goto LAB_0773eccc;
                          if ((int)plVar15[3] == 0) goto LAB_0773ecc4;
                          plVar15[4] = lVar24;
                          thunk_FUN_044bb4b4(plVar15 + 4,lVar24);
                          FUN_0771ec00(uVar12,plVar15,0);
                        }
                        lVar24 = *plVar23;
                        uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
                        if (uVar11 != 0) {
                          piVar22 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f313c8) {
                              puVar10 = (undefined8 *)(lVar24 + (long)(*piVar22 + 9) * 0x10 + 0x138)
                              ;
                              goto LAB_0773ddc0;
                            }
                            uVar11 = uVar11 - 1;
                            piVar22 = piVar22 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f313c8,9);
LAB_0773ddc0:
                        (*(code *)*puVar10)(plVar23,lVar19,in_stack_00000058,iVar9,iVar7,lVar18,
                                            in_stack_00000090._4_4_,puVar10[1]);
                        lVar24 = *unaff_x22;
                        uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
                        if (uVar11 != 0) {
                          piVar22 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar10 = (undefined8 *)(lVar24 + (long)*piVar22 * 0x10 + 0x138);
                              goto LAB_0773de38;
                            }
                            uVar11 = uVar11 - 1;
                            piVar22 = piVar22 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_044822ac();
LAB_0773de38:
                        uVar11 = (*(code *)*puVar10)();
                        if ((uVar11 & 1) != 0) {
                          FUN_077322fc(in_stack_00000050,(long)&stack0x000000c0 + 4,lVar19,0);
                        }
                        lVar24 = *unaff_x22;
                        uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
                        if (uVar11 != 0) {
                          piVar22 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar10 = (undefined8 *)
                                        (lVar24 + (long)(*piVar22 + 0x24) * 0x10 + 0x138);
                              goto LAB_0773deb4;
                            }
                            uVar11 = uVar11 - 1;
                            piVar22 = piVar22 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_044822ac();
LAB_0773deb4:
                        iVar6 = (*(code *)*puVar10)();
                        if (iVar6 == 1) {
                          lVar24 = *unaff_x28;
                          uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
                          if (uVar11 != 0) {
                            piVar22 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f312c0) {
                                puVar10 = (undefined8 *)
                                          (lVar24 + (long)(*piVar22 + 8) * 0x10 + 0x138);
                                goto LAB_0773df2c;
                              }
                              uVar11 = uVar11 - 1;
                              piVar22 = piVar22 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar10 = (undefined8 *)
                                    FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,8);
LAB_0773df2c:
                          (*(code *)*puVar10)(unaff_x28,lVar19,iVar9,puVar10[1]);
                        }
                        *(int *)(lVar19 + 0x28) = iVar9;
                        if (lVar18 == 0) goto LAB_0773ecc8;
                        uVar20 = *(uint *)(lVar18 + 0x18);
                        if (0 < (long)((ulong)uVar20 << 0x20)) {
                          lVar24 = *(long *)(lVar19 + 0x70);
                          uVar11 = 0;
                          do {
                            if (uVar20 <= uVar11) goto LAB_0773ecc4;
                            if (lVar24 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_0773ecc4;
                            *(undefined4 *)(lVar24 + 0x20 + uVar11 * 4) =
                                 *(undefined4 *)(lVar13 + uVar11 * 4);
                            lVar16 = *(long *)(lVar19 + 0x78);
                            if (lVar16 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_0773ecc4;
                            *(int *)(lVar13 + uVar11 * 4) =
                                 *(int *)(lVar16 + uVar11 * 4 + 0x20) +
                                 *(int *)(lVar13 + uVar11 * 4);
                            uVar11 = uVar11 + 1;
                          } while ((long)(int)uVar20 != uVar11);
                        }
                        iVar9 = *(int *)(lVar19 + 0x30) + iVar9;
                      }
                      else {
                        if (3 < in_stack_00000090._4_4_) {
                          uVar12 = FUN_07a3b850(&stack0x000000b8,0);
                          uVar12 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31c00,uVar12,0);
                          plVar15 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          in_stack_00000098 =
                               CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                          lVar24 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                      &stack0x00000098);
                          if (plVar15 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar24 != 0) &&
                             (lVar16 = thunk_FUN_04485110(lVar24,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar16 == 0)) goto LAB_0773eccc;
                          if ((int)plVar15[3] == 0) goto LAB_0773ecc4;
                          plVar15[4] = lVar24;
                          thunk_FUN_044bb4b4(plVar15 + 4,lVar24);
                          FUN_0771ec00(uVar12,plVar15,0);
                        }
                        iVar7 = *(int *)(lVar19 + 0x30) + iVar7;
                      }
                      iStack00000000000000b8 = iStack00000000000000b8 + 1;
                    } while (iStack00000000000000b8 < *(int *)(in_stack_00000088 + 0x18));
                    lVar18 = *unaff_x22;
                    uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
                    if (uVar11 != 0) {
                      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f30ab8) {
                          puVar10 = (undefined8 *)(lVar18 + (long)(*piVar22 + 0x24) * 0x10 + 0x138);
                          goto LAB_0773e044;
                        }
                        uVar11 = uVar11 - 1;
                        piVar22 = piVar22 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_044822ac();
LAB_0773e044:
                    iVar7 = (*(code *)*puVar10)();
                    uVar8 = in_stack_000000e8;
                    if (iVar7 == 1) {
                      lVar18 = *unaff_x28;
                      uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
                      if (uVar11 != 0) {
                        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f312c0) {
                            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar22 + 4) * 0x10 + 0x138);
                            goto LAB_0773e0b4;
                          }
                          uVar11 = uVar11 - 1;
                          piVar22 = piVar22 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,4);
LAB_0773e0b4:
                      (*(code *)*puVar10)(unaff_x28,uVar8,puVar10[1]);
                    }
                    puVar3 = PTR_DAT_09f31bb0;
                    puVar1 = PTR_DAT_09f1e8b0;
                    iVar7 = *(int *)(in_stack_00000088 + 0x18);
                    while (iVar7 = iVar7 + -1, -1 < iVar7) {
                      lVar18 = FUN_05badb74(in_stack_00000088,iVar7,*(undefined8 *)puVar2);
                      if (lVar18 == 0) goto LAB_0773ecc8;
                      if (*(char *)(lVar18 + 0xb9) != '\0') {
                        lVar18 = FUN_05badb74(in_stack_00000088,iVar7,*(undefined8 *)puVar2);
                        if ((lVar18 == 0) ||
                           (FUN_0773caa0(&stack0x000000d0,*(undefined8 *)(lVar18 + 0x18)),
                           in_stack_00000068 == 0)) goto LAB_0773ecc8;
                        FUN_05baf638(in_stack_00000068,iVar7,*(undefined8 *)puVar1);
                        FUN_05baf638(in_stack_00000088,iVar7,*(undefined8 *)puVar3);
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
                      lVar18 = *unaff_x22;
                      uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
                      if (uVar11 != 0) {
                        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f30ab8) {
                            puVar10 = (undefined8 *)
                                      (lVar18 + (long)(*piVar22 + 0x24) * 0x10 + 0x138);
                            goto LAB_0773e1c8;
                          }
                          uVar11 = uVar11 - 1;
                          piVar22 = piVar22 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_044822ac();
LAB_0773e1c8:
                      iVar7 = (*(code *)*puVar10)();
                      if (iVar7 == 1) {
                        lVar18 = *unaff_x28;
                        uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
                        if (uVar11 != 0) {
                          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f312c0) {
                              puVar10 = (undefined8 *)(lVar18 + (long)(*piVar22 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_0773e234;
                            }
                            uVar11 = uVar11 - 1;
                            piVar22 = piVar22 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,5);
LAB_0773e234:
                        (*(code *)*puVar10)(unaff_x28,puVar10[1]);
                      }
                      lVar18 = in_stack_00000168;
                      if (lVar17 != 0) {
                        if (0 < *(int *)(lVar17 + 0x18)) {
                          uVar11 = 0;
                          do {
                            lVar13 = FUN_05badb74(lVar17,uVar11 & 0xffffffff,
                                                  *(undefined8 *)PTR_DAT_09f31320);
                            if (lVar18 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0773ecc4;
                            if (lVar13 == 0) goto LAB_0773ecc8;
                            lVar19 = *plVar23;
                            uVar12 = *(undefined8 *)(lVar18 + uVar11 * 8 + 0x20);
                            lVar24 = *(long *)(lVar13 + 0xc0);
                            uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
                            if (uVar21 != 0) {
                              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f313c8) {
                                  puVar10 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                                  goto LAB_0773e2ec;
                                }
                                uVar21 = uVar21 - 1;
                                piVar22 = piVar22 + 4;
                              } while (uVar21 != 0);
                            }
                            puVar10 = (undefined8 *)
                                      FUN_044822ac(plVar23,*(long *)PTR_DAT_09f313c8,0);
LAB_0773e2ec:
                            uVar8 = (*(code *)*puVar10)(plVar23,puVar10[1]);
                            lVar19 = *plVar23;
                            uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
                            if (uVar21 != 0) {
                              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f313c8) {
                                  puVar10 = (undefined8 *)
                                            (lVar19 + (long)(*piVar22 + 10) * 0x10 + 0x138);
                                  goto LAB_0773e354;
                                }
                                uVar21 = uVar21 - 1;
                                piVar22 = piVar22 + 4;
                              } while (uVar21 != 0);
                            }
                            puVar10 = (undefined8 *)
                                      FUN_044822ac(plVar23,*(long *)PTR_DAT_09f313c8,10);
LAB_0773e354:
                            (*(code *)*puVar10)(plVar23,lVar13,iVar9,uVar8,1,0);
                            if (lVar24 == 0) goto LAB_0773ecc8;
                            iVar7 = FUN_094d3ba4(lVar24,0);
                            if (*(long *)(lVar13 + 0x88) == 0) goto LAB_0773ecc8;
                            iVar6 = *(int *)(*(long *)(lVar13 + 0x88) + 0x18);
                            if (iVar6 < iVar7) {
                              if (3 < in_stack_00000090._4_4_) {
                                uVar14 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                                      *(undefined8 *)(lVar13 + 0x20),
                                                      *(undefined8 *)PTR_DAT_09f31c30,0);
                                lVar16 = *(long *)PTR_DAT_09f22e40;
                                lVar19 = *(long *)(lVar16 + 0x38);
                                if (lVar19 == 0) {
                                  FUN_04482014(lVar16);
                                  lVar19 = *(long *)(lVar16 + 0x38);
                                }
                                lVar19 = *(long *)(lVar19 + 0x10);
                                if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                                  lVar19 = FUN_04481fb8();
                                }
                                if (*(int *)(lVar19 + 0xe4) == 0) {
                                  thunk_FUN_044a54b4();
                                }
                                lVar19 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
                                if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                                  lVar19 = FUN_04481fb8();
                                }
                                FUN_0771ec00(uVar14,**(undefined8 **)(lVar19 + 0xb8),0);
                              }
                            }
                            else if ((1 < in_stack_00000090._4_4_) && (iVar7 < iVar6)) {
                              uVar14 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                                    *(undefined8 *)(lVar13 + 0x20),
                                                    *(undefined8 *)PTR_DAT_09f31c38,0);
                              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                              }
                              FUN_094c33b0(uVar14,0);
                            }
                            lVar19 = *unaff_x22;
                            uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
                            if (uVar21 != 0) {
                              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                  puVar10 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                                  goto LAB_0773e514;
                                }
                                uVar21 = uVar21 - 1;
                                piVar22 = piVar22 + 4;
                              } while (uVar21 != 0);
                            }
                            puVar10 = (undefined8 *)FUN_044822ac();
LAB_0773e514:
                            uVar21 = (*(code *)*puVar10)();
                            if ((uVar21 & 1) != 0) {
                              FUN_07732404(in_stack_00000050,(long)&stack0x000000c0 + 4,lVar13,
                                           lVar24,in_stack_00000078,0);
                            }
                            lVar19 = *unaff_x22;
                            uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
                            if (uVar21 != 0) {
                              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                  puVar10 = (undefined8 *)
                                            (lVar19 + (long)(*piVar22 + 0x24) * 0x10 + 0x138);
                                  goto LAB_0773e59c;
                                }
                                uVar21 = uVar21 - 1;
                                piVar22 = piVar22 + 4;
                              } while (uVar21 != 0);
                            }
                            puVar10 = (undefined8 *)FUN_044822ac();
LAB_0773e59c:
                            iVar7 = (*(code *)*puVar10)();
                            if (iVar7 == 1) {
                              lVar19 = *unaff_x28;
                              uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
                              if (uVar21 != 0) {
                                piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f312c0) {
                                    puVar10 = (undefined8 *)
                                              (lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                                    goto LAB_0773e608;
                                  }
                                  uVar21 = uVar21 - 1;
                                  piVar22 = piVar22 + 4;
                                } while (uVar21 != 0);
                              }
                              puVar10 = (undefined8 *)
                                        FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,1);
LAB_0773e608:
                              (*(code *)*puVar10)(unaff_x28,lVar13,iVar9,puVar10[1]);
                            }
                            *(int *)(lVar13 + 0x28) = iVar9;
                            FUN_0773ca38(&stack0x000000d0,uVar12,lVar13);
                            if (in_stack_00000068 == 0) goto LAB_0773ecc8;
                            lVar19 = *(long *)(in_stack_00000068 + 0x10);
                            lVar24 = *(long *)PTR_DAT_09f1e870;
                            *(int *)(in_stack_00000068 + 0x1c) =
                                 *(int *)(in_stack_00000068 + 0x1c) + 1;
                            if (lVar19 == 0) goto LAB_0773ecc8;
                            uVar20 = *(uint *)(in_stack_00000068 + 0x18);
                            if (uVar20 < *(uint *)(lVar19 + 0x18)) {
                              *(uint *)(in_stack_00000068 + 0x18) = uVar20 + 1;
                              puVar10 = (undefined8 *)(lVar19 + (long)(int)uVar20 * 8 + 0x20);
                              *puVar10 = uVar12;
                              thunk_FUN_044bb4b4(puVar10,uVar12);
                            }
                            else {
                              FUN_05bade44(in_stack_00000068,uVar12,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar19 = *(long *)(in_stack_00000088 + 0x10);
                            lVar24 = *(long *)PTR_DAT_09f31558;
                            *(int *)(in_stack_00000088 + 0x1c) =
                                 *(int *)(in_stack_00000088 + 0x1c) + 1;
                            if (lVar19 == 0) goto LAB_0773ecc8;
                            uVar20 = *(uint *)(in_stack_00000088 + 0x18);
                            if (uVar20 < *(uint *)(lVar19 + 0x18)) {
                              *(uint *)(in_stack_00000088 + 0x18) = uVar20 + 1;
                              plVar15 = (long *)(lVar19 + (long)(int)uVar20 * 8 + 0x20);
                              *plVar15 = lVar13;
                              thunk_FUN_044bb4b4(plVar15,lVar13);
                            }
                            else {
                              FUN_05bade44(in_stack_00000088,lVar13,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
                            }
                            plVar15 = (long *)(lVar13 + 0xd0);
                            lVar19 = *plVar15;
                            if (lVar19 == 0) goto LAB_0773ecc8;
                            uVar21 = 0;
                            lVar24 = 0x20;
                            iVar9 = *(int *)(lVar13 + 0x30) + iVar9;
                            while ((long)uVar21 < (long)(int)*(uint *)(lVar19 + 0x18)) {
                              if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar19 + lVar24) = 0;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar19 + lVar24),0);
                              lVar19 = *plVar15;
                              uVar21 = uVar21 + 1;
                              lVar24 = lVar24 + 8;
                              if (lVar19 == 0) goto LAB_0773ecc8;
                            }
                            *plVar15 = 0;
                            thunk_FUN_044bb4b4(plVar15,0);
                            if (3 < in_stack_00000090._4_4_) {
                              lVar19 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
                              if (lVar19 == 0) goto LAB_0773ecc8;
                              if (*(int *)(lVar19 + 0x18) == 0) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)PTR_DAT_09f31bc8;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar19 + 0x20));
                              if (*(uint *)(lVar19 + 0x18) < 2) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(lVar13 + 0x20);
                              thunk_FUN_044bb4b4((undefined8 *)(lVar19 + 0x28));
                              if (*(uint *)(lVar19 + 0x18) < 3) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)PTR_DAT_09f31c20;
                              thunk_FUN_044bb4b4();
                              lVar13 = *plVar23;
                              uVar21 = (ulong)*(ushort *)(lVar13 + 0x12e);
                              if (uVar21 != 0) {
                                piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f313c8) {
                                    puVar10 = (undefined8 *)
                                              (lVar13 + (long)(*piVar22 + 6) * 0x10 + 0x138);
                                    goto LAB_0773e850;
                                  }
                                  uVar21 = uVar21 - 1;
                                  piVar22 = piVar22 + 4;
                                } while (uVar21 != 0);
                              }
                              puVar10 = (undefined8 *)
                                        FUN_044822ac(plVar23,*(long *)PTR_DAT_09f313c8,6);
LAB_0773e850:
                              uStack00000000000000bc = (*(code *)*puVar10)(plVar23,puVar10[1]);
                              uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                              if (*(uint *)(lVar19 + 0x18) < 4) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar19 + 0x38) = uVar12;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar19 + 0x38),uVar12);
                              if (*(uint *)(lVar19 + 0x18) < 5) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)PTR_DAT_09f31c60;
                              thunk_FUN_044bb4b4();
                              lVar13 = *unaff_x28;
                              uVar21 = (ulong)*(ushort *)(lVar13 + 0x12e);
                              if (uVar21 != 0) {
                                piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f312c0) {
                                    puVar10 = (undefined8 *)
                                              (lVar13 + (long)(*piVar22 + 6) * 0x10 + 0x138);
                                    goto LAB_0773e908;
                                  }
                                  uVar21 = uVar21 - 1;
                                  piVar22 = piVar22 + 4;
                                } while (uVar21 != 0);
                              }
                              puVar10 = (undefined8 *)
                                        FUN_044822ac(unaff_x28,*(long *)PTR_DAT_09f312c0,6);
LAB_0773e908:
                              uStack00000000000000bc = (*(code *)*puVar10)(unaff_x28,puVar10[1]);
                              uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                              if (*(uint *)(lVar19 + 0x18) < 6) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar19 + 0x48) = uVar12;
                              thunk_FUN_044bb4b4();
                              uVar12 = FUN_078b57fc(lVar19,0);
                              plVar15 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                              in_stack_00000098 =
                                   CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                              lVar13 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                          &stack0x00000098);
                              if (plVar15 == (long *)0x0) goto LAB_0773ecc8;
                              if ((lVar13 != 0) &&
                                 (lVar19 = thunk_FUN_04485110(lVar13,*(undefined8 *)
                                                                      (*plVar15 + 0x40)),
                                 lVar19 == 0)) goto LAB_0773eccc;
                              if ((int)plVar15[3] == 0) goto LAB_0773ecc4;
                              plVar15[4] = lVar13;
                              thunk_FUN_044bb4b4(plVar15 + 4,lVar13);
                              FUN_0771ec00(uVar12,plVar15,0);
                            }
                            uVar11 = uVar11 + 1;
                          } while ((long)uVar11 < (long)*(int *)(lVar17 + 0x18));
                        }
                        lVar17 = *unaff_x22;
                        uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar11 != 0) {
                          piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar10 = (undefined8 *)
                                        (lVar17 + (long)(*piVar22 + 0x16) * 0x10 + 0x138);
                              goto LAB_0773ea3c;
                            }
                            uVar11 = uVar11 - 1;
                            piVar22 = piVar22 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_044822ac();
LAB_0773ea3c:
                        iVar9 = (*(code *)*puVar10)();
                        if (iVar9 == 4) {
                          lVar17 = *unaff_x22;
                          uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
                          if (uVar11 != 0) {
                            piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                puVar10 = (undefined8 *)
                                          (lVar17 + (long)(*piVar22 + 0x1a) * 0x10 + 0x138);
                                goto LAB_0773eaa8;
                              }
                              uVar11 = uVar11 - 1;
                              piVar22 = piVar22 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar10 = (undefined8 *)FUN_044822ac();
LAB_0773eaa8:
                          uVar12 = (*(code *)*puVar10)();
                          lVar17 = *plVar23;
                          uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
                          if (uVar11 != 0) {
                            piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f313c8) {
                                puVar10 = (undefined8 *)
                                          (lVar17 + (long)(*piVar22 + 0xe) * 0x10 + 0x138);
                                goto LAB_0773eb18;
                              }
                              uVar11 = uVar11 - 1;
                              piVar22 = piVar22 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar10 = (undefined8 *)
                                    FUN_044822ac(plVar23,*(long *)PTR_DAT_09f313c8,0xe);
LAB_0773eb18:
                          (*(code *)*puVar10)(uVar12,plVar23,in_stack_00000088,puVar10[1]);
                        }
                        lVar17 = in_stack_00000180;
                        if (3 < in_stack_00000090._4_4_) {
                          lVar18 = *plVar23;
                          uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
                          if (uVar11 != 0) {
                            piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_09f313c8) {
                                puVar10 = (undefined8 *)
                                          (lVar18 + (long)(*piVar22 + 6) * 0x10 + 0x138);
                                goto LAB_0773eb94;
                              }
                              uVar11 = uVar11 - 1;
                              piVar22 = piVar22 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar10 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f313c8,6);
LAB_0773eb94:
                          uStack00000000000000bc = (*(code *)*puVar10)(plVar23,puVar10[1]);
                          uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                          if (lVar17 == 0) goto LAB_0773ecc8;
                          in_stack_000000b0 = FUN_087dad08(lVar17,0);
                          uVar14 = FUN_07a3c8f0(&stack0x000000b0,0);
                          uVar12 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31c18,uVar12,
                                                *(undefined8 *)PTR_DAT_09f31c28,uVar14,0);
                          plVar23 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          in_stack_00000098 =
                               CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                          lVar17 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,
                                                      &stack0x00000098);
                          if (plVar23 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar17 != 0) &&
                             (lVar18 = thunk_FUN_04485110(lVar17,*(undefined8 *)(*plVar23 + 0x40)),
                             lVar18 == 0)) {
LAB_0773eccc:
                            uVar12 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                            FUN_04447d10(uVar12,0);
                          }
                          if ((int)plVar23[3] == 0) {
LAB_0773ecc4:
                    /* WARNING: Subroutine does not return */
                            FUN_04447e4c();
                          }
                          plVar23[4] = lVar17;
                          thunk_FUN_044bb4b4(plVar23 + 4,lVar17);
                          FUN_0771ec00(uVar12,plVar23,0);
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


