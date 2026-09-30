/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GenerateDebugAnchor
ENTRY_POINT: 0773d68c
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


bool Meta_XR_MRUtilityKit_SceneDebugger__GenerateDebugAnchor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint in_w9;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  long unaff_x19;
  long lVar22;
  undefined4 unaff_w21;
  long *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long lVar23;
  long unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long *plVar24;
  long *in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
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
  undefined4 uStack00000000000000c8;
  int iStack00000000000000cc;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e8;
  long in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000180;
  
  while (((uint)param_1 < in_w9 &&
         (uVar11 = FUN_07a3b850(unaff_x19 + param_1 * 4 + 0x20,0), 3 < *(uint *)(unaff_x25 + 0x18)))
        ) {
    *(undefined8 *)(unaff_x25 + 0x38) = uVar11;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x25 + 0x38),uVar11);
    if (*(uint *)(unaff_x25 + 0x18) < 5) break;
    *(undefined8 *)(unaff_x25 + 0x40) = *unaff_x28;
    thunk_FUN_044bb4b4();
    if ((*(uint *)(unaff_x26 + 0x18) <= uStack00000000000000c0) ||
       (uVar11 = FUN_07a3b850(unaff_x26 + (long)(int)uStack00000000000000c0 * 4 + 0x20,0),
       *(uint *)(unaff_x25 + 0x18) < 6)) break;
    *(undefined8 *)(unaff_x25 + 0x48) = uVar11;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x25 + 0x48),uVar11);
    if (*(uint *)(unaff_x25 + 0x18) < 7) break;
    *(undefined8 *)(unaff_x25 + 0x50) = *unaff_x29;
    thunk_FUN_044bb4b4();
    if ((*(uint *)(unaff_x27 + 0x18) <= uStack00000000000000c0) ||
       (uVar11 = FUN_07a3b850(unaff_x27 + (long)(int)uStack00000000000000c0 * 4 + 0x20,0),
       *(uint *)(unaff_x25 + 0x18) < 8)) break;
    *(undefined8 *)(unaff_x25 + 0x58) = uVar11;
    thunk_FUN_044bb4b4();
    uVar11 = FUN_078b57fc(unaff_x25,0);
    lVar23 = *(long *)PTR_DAT_09f22e40;
    lVar18 = *(long *)(lVar23 + 0x38);
    if (lVar18 == 0) {
      FUN_04482014(lVar23);
      lVar18 = *(long *)(lVar23 + 0x38);
    }
    lVar18 = *(long *)(lVar18 + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_04481fb8();
    }
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar18 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_04481fb8();
    }
    FUN_0771ec00(uVar11,**(undefined8 **)(lVar18 + 0xb8),0);
    iVar5 = iStack00000000000000cc;
    do {
      uStack00000000000000c0 = uStack00000000000000c0 + 1;
      if ((int)*(uint *)(unaff_x24 + 0x18) <= (int)uStack00000000000000c0) {
        iVar6 = FUN_0772052c(0);
        iVar10 = iStack00000000000000cc;
        if (iVar6 <= iVar5) {
          uStack00000000000000bc = FUN_0772052c(0);
          uVar11 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
          uVar11 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31c08,uVar11,
                                *(undefined8 *)PTR_DAT_09f31be8,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c6b48(uVar11,0);
          goto LAB_0773ec98;
        }
        plVar24 = (long *)in_stack_00000048[0x39];
        (**(code **)(*in_stack_00000048 + 0x4f8))
                  (in_stack_00000048,*(undefined8 *)(*in_stack_00000048 + 0x500));
        if (plVar24 == (long *)0x0) goto LAB_0773ecc8;
        lVar18 = *plVar24;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 == 0) goto LAB_0773d888;
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        goto LAB_0773d870;
      }
      if (unaff_x19 == 0) goto LAB_0773ecc8;
      if (*(uint *)(unaff_x19 + 0x18) <= uStack00000000000000c0) goto LAB_0773ecc4;
      if (unaff_x26 == 0) goto LAB_0773ecc8;
      if (*(uint *)(unaff_x26 + 0x18) <= uStack00000000000000c0) goto LAB_0773ecc4;
      if (unaff_x27 == 0) goto LAB_0773ecc8;
      if ((*(uint *)(unaff_x27 + 0x18) <= uStack00000000000000c0) ||
         (*(uint *)(unaff_x24 + 0x18) <= uStack00000000000000c0)) goto LAB_0773ecc4;
      lVar18 = (long)(int)uStack00000000000000c0;
      *(int *)(unaff_x24 + lVar18 * 4 + 0x20) =
           (*(int *)(unaff_x26 + lVar18 * 4 + 0x20) + *(int *)(unaff_x19 + lVar18 * 4 + 0x20)) -
           *(int *)(unaff_x27 + lVar18 * 4 + 0x20);
    } while (in_stack_00000090._4_4_ < 4);
    unaff_x25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
    if (unaff_x25 == 0) goto LAB_0773ecc8;
    if (*(int *)(unaff_x25 + 0x18) == 0) break;
    *(undefined8 *)(unaff_x25 + 0x20) = *(undefined8 *)PTR_DAT_09f31be0;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x25 + 0x20));
    uVar11 = FUN_07a3b850(&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) < 2) break;
    *(undefined8 *)(unaff_x25 + 0x28) = uVar11;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x25 + 0x28),uVar11);
    if (*(uint *)(unaff_x25 + 0x18) < 3) break;
    *(undefined8 *)(unaff_x25 + 0x30) = *(undefined8 *)PTR_DAT_09f31bc0;
    thunk_FUN_044bb4b4();
    param_1 = (long)(int)uStack00000000000000c0;
    in_w9 = *(uint *)(unaff_x19 + 0x18);
  }
LAB_0773ecc4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar21 = piVar21 + 4;
    if (uVar19 == 0) break;
LAB_0773d870:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f313c8) {
      puVar12 = (undefined8 *)(lVar18 + (long)(*piVar21 + 3) * 0x10 + 0x138);
      goto LAB_0773d918;
    }
  }
LAB_0773d888:
  puVar12 = (undefined8 *)FUN_044822ac(plVar24,*(long *)PTR_DAT_09f313c8,3);
LAB_0773d918:
  (*(code *)*puVar12)(plVar24,in_stack_00000048,unaff_w21,iVar10);
  lVar18 = in_stack_00000160;
  if (in_stack_00000080 != (long *)0x0) {
    lVar23 = *in_stack_00000080;
    lVar22 = in_stack_00000048[0x39];
    uVar19 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f312c0) {
          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_0773d9b0;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,2);
LAB_0773d9b0:
    (*(code *)*puVar12)(in_stack_00000080,lVar18,in_stack_00000088,iStack00000000000000cc,lVar22,
                        puVar12[1]);
    if (in_stack_00000050 != 0) {
      FUN_07732130(in_stack_00000050,uStack00000000000000c8,0);
      if (in_stack_00000048[0x19] != 0) {
        FUN_087dae58(in_stack_00000048[0x19],0);
        if (3 < in_stack_00000090._4_4_) {
          lVar23 = *plVar24;
          uVar19 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar19 != 0) {
            piVar21 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f313c8) {
                puVar12 = (undefined8 *)(lVar23 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_0773da50;
              }
              uVar19 = uVar19 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar24,*(long *)PTR_DAT_09f313c8,0);
LAB_0773da50:
          in_stack_000000a8 = (*(code *)*puVar12)(plVar24,puVar12[1]);
          in_stack_00000098 = *(undefined8 *)PTR_DAT_09f31420;
          in_stack_000000a0 = 0xffffffffffffffff;
          uVar11 = FUN_07a742b0(&stack0x00000098,0);
          uVar13 = FUN_07a3b850((long)&stack0x000000c8 + 4,0);
          uVar11 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31bd0,uVar11,
                                *(undefined8 *)PTR_DAT_09f31c58,uVar13,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar11,0);
        }
        if (in_stack_00000088 != 0) {
          FUN_05baf848(in_stack_00000088,*(undefined8 *)PTR_DAT_09f31bb8);
          uStack00000000000000c4 = 0;
          lVar23 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,in_stack_000000d8._4_4_);
          if (in_stack_00000048[0x1a] != 0) {
            FUN_087dab38(in_stack_00000048[0x1a],0);
            lVar22 = *unaff_x22;
            uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar19 != 0) {
              piVar21 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
                  puVar12 = (undefined8 *)(lVar22 + (long)(*piVar21 + 0x22) * 0x10 + 0x138);
                  goto LAB_0773db88;
                }
                uVar19 = uVar19 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar19 != 0);
            }
            puVar12 = (undefined8 *)FUN_044822ac();
LAB_0773db88:
            uVar19 = (*(code *)*puVar12)();
            puVar3 = PTR_DAT_09f31320;
            if (((uVar19 & 1) == 0) && (0 < *(int *)(in_stack_00000088 + 0x18))) {
              iStack00000000000000b8 = 0;
              iVar10 = 0;
              iVar8 = 0;
              lVar22 = lVar23 + 0x20;
              do {
                lVar14 = FUN_05badb74(in_stack_00000088,iStack00000000000000b8,*(undefined8 *)puVar3
                                     );
                if (lVar14 == 0) goto LAB_0773ecc8;
                if (*(char *)(lVar14 + 0xb9) == '\0') {
                  if (3 < in_stack_00000090._4_4_) {
                    uVar11 = FUN_07a3b850(&stack0x000000b8,0);
                    uVar11 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31bf8,uVar11,0);
                    plVar15 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                    in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                    lVar16 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
                    if (plVar15 == (long *)0x0) goto LAB_0773ecc8;
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_04485110(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) goto LAB_0773eccc;
                    if ((int)plVar15[3] == 0) goto LAB_0773ecc4;
                    plVar15[4] = lVar16;
                    thunk_FUN_044bb4b4(plVar15 + 4,lVar16);
                    FUN_0771ec00(uVar11,plVar15,0);
                  }
                  lVar16 = *plVar24;
                  uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar19 != 0) {
                    piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f313c8) {
                        puVar12 = (undefined8 *)(lVar16 + (long)(*piVar21 + 9) * 0x10 + 0x138);
                        goto LAB_0773ddc0;
                      }
                      uVar19 = uVar19 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_044822ac(plVar24,*(long *)PTR_DAT_09f313c8,9);
LAB_0773ddc0:
                  (*(code *)*puVar12)(plVar24,lVar14,in_stack_00000058,iVar10,iVar8,lVar23,
                                      in_stack_00000090._4_4_,puVar12[1]);
                  lVar16 = *unaff_x22;
                  uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar19 != 0) {
                    piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar12 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
                        goto LAB_0773de38;
                      }
                      uVar19 = uVar19 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_044822ac();
LAB_0773de38:
                  uVar19 = (*(code *)*puVar12)();
                  if ((uVar19 & 1) != 0) {
                    FUN_077322fc(in_stack_00000050,(long)&stack0x000000c0 + 4,lVar14,0);
                  }
                  lVar16 = *unaff_x22;
                  uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar19 != 0) {
                    piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar12 = (undefined8 *)(lVar16 + (long)(*piVar21 + 0x24) * 0x10 + 0x138);
                        goto LAB_0773deb4;
                      }
                      uVar19 = uVar19 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_044822ac();
LAB_0773deb4:
                  iVar7 = (*(code *)*puVar12)();
                  if (iVar7 == 1) {
                    lVar16 = *in_stack_00000080;
                    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar19 != 0) {
                      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f312c0) {
                          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar21 + 8) * 0x10 + 0x138);
                          goto LAB_0773df2c;
                        }
                        uVar19 = uVar19 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar19 != 0);
                    }
                    puVar12 = (undefined8 *)
                              FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,8);
LAB_0773df2c:
                    (*(code *)*puVar12)(in_stack_00000080,lVar14,iVar10,puVar12[1]);
                  }
                  *(int *)(lVar14 + 0x28) = iVar10;
                  if (lVar23 == 0) goto LAB_0773ecc8;
                  uVar1 = *(uint *)(lVar23 + 0x18);
                  if (0 < (long)((ulong)uVar1 << 0x20)) {
                    lVar16 = *(long *)(lVar14 + 0x70);
                    uVar19 = 0;
                    do {
                      if (uVar1 <= uVar19) goto LAB_0773ecc4;
                      if (lVar16 == 0) goto LAB_0773ecc8;
                      if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_0773ecc4;
                      *(undefined4 *)(lVar16 + 0x20 + uVar19 * 4) =
                           *(undefined4 *)(lVar22 + uVar19 * 4);
                      lVar17 = *(long *)(lVar14 + 0x78);
                      if (lVar17 == 0) goto LAB_0773ecc8;
                      if (*(uint *)(lVar17 + 0x18) <= uVar19) goto LAB_0773ecc4;
                      *(int *)(lVar22 + uVar19 * 4) =
                           *(int *)(lVar17 + uVar19 * 4 + 0x20) + *(int *)(lVar22 + uVar19 * 4);
                      uVar19 = uVar19 + 1;
                    } while ((long)(int)uVar1 != uVar19);
                  }
                  iVar10 = *(int *)(lVar14 + 0x30) + iVar10;
                }
                else {
                  if (3 < in_stack_00000090._4_4_) {
                    uVar11 = FUN_07a3b850(&stack0x000000b8,0);
                    uVar11 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31c00,uVar11,0);
                    plVar15 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                    in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                    lVar16 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
                    if (plVar15 == (long *)0x0) goto LAB_0773ecc8;
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_04485110(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) goto LAB_0773eccc;
                    if ((int)plVar15[3] == 0) goto LAB_0773ecc4;
                    plVar15[4] = lVar16;
                    thunk_FUN_044bb4b4(plVar15 + 4,lVar16);
                    FUN_0771ec00(uVar11,plVar15,0);
                  }
                  iVar8 = *(int *)(lVar14 + 0x30) + iVar8;
                }
                iStack00000000000000b8 = iStack00000000000000b8 + 1;
              } while (iStack00000000000000b8 < *(int *)(in_stack_00000088 + 0x18));
              lVar23 = *unaff_x22;
              uVar19 = (ulong)*(ushort *)(lVar23 + 0x12e);
              if (uVar19 != 0) {
                piVar21 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
                    puVar12 = (undefined8 *)(lVar23 + (long)(*piVar21 + 0x24) * 0x10 + 0x138);
                    goto LAB_0773e044;
                  }
                  uVar19 = uVar19 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar19 != 0);
              }
              puVar12 = (undefined8 *)FUN_044822ac();
LAB_0773e044:
              iVar8 = (*(code *)*puVar12)();
              uVar9 = in_stack_000000e8;
              if (iVar8 == 1) {
                lVar23 = *in_stack_00000080;
                uVar19 = (ulong)*(ushort *)(lVar23 + 0x12e);
                if (uVar19 != 0) {
                  piVar21 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f312c0) {
                      puVar12 = (undefined8 *)(lVar23 + (long)(*piVar21 + 4) * 0x10 + 0x138);
                      goto LAB_0773e0b4;
                    }
                    uVar19 = uVar19 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar19 != 0);
                }
                puVar12 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,4);
LAB_0773e0b4:
                (*(code *)*puVar12)(in_stack_00000080,uVar9,puVar12[1]);
              }
              puVar4 = PTR_DAT_09f31bb0;
              puVar2 = PTR_DAT_09f1e8b0;
              iVar8 = *(int *)(in_stack_00000088 + 0x18);
              while (iVar8 = iVar8 + -1, -1 < iVar8) {
                lVar23 = FUN_05badb74(in_stack_00000088,iVar8,*(undefined8 *)puVar3);
                if (lVar23 == 0) goto LAB_0773ecc8;
                if (*(char *)(lVar23 + 0xb9) != '\0') {
                  lVar23 = FUN_05badb74(in_stack_00000088,iVar8,*(undefined8 *)puVar3);
                  if ((lVar23 == 0) ||
                     (FUN_0773caa0(&stack0x000000d0,*(undefined8 *)(lVar23 + 0x18)),
                     in_stack_00000068 == 0)) goto LAB_0773ecc8;
                  FUN_05baf638(in_stack_00000068,iVar8,*(undefined8 *)puVar2);
                  FUN_05baf638(in_stack_00000088,iVar8,*(undefined8 *)puVar4);
                }
              }
            }
            else {
              iVar10 = 0;
            }
            if (in_stack_00000048[0x1a] != 0) {
              FUN_087dae58(in_stack_00000048[0x1a],0);
              if (in_stack_00000048[0x1b] != 0) {
                FUN_087dab38(in_stack_00000048[0x1b],0);
                lVar23 = *unaff_x22;
                uVar19 = (ulong)*(ushort *)(lVar23 + 0x12e);
                if (uVar19 != 0) {
                  piVar21 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
                      puVar12 = (undefined8 *)(lVar23 + (long)(*piVar21 + 0x24) * 0x10 + 0x138);
                      goto LAB_0773e1c8;
                    }
                    uVar19 = uVar19 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar19 != 0);
                }
                puVar12 = (undefined8 *)FUN_044822ac();
LAB_0773e1c8:
                iVar8 = (*(code *)*puVar12)();
                if (iVar8 == 1) {
                  lVar23 = *in_stack_00000080;
                  uVar19 = (ulong)*(ushort *)(lVar23 + 0x12e);
                  if (uVar19 != 0) {
                    piVar21 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f312c0) {
                        puVar12 = (undefined8 *)(lVar23 + (long)(*piVar21 + 5) * 0x10 + 0x138);
                        goto LAB_0773e234;
                      }
                      uVar19 = uVar19 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar12 = (undefined8 *)
                            FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,5);
LAB_0773e234:
                  (*(code *)*puVar12)(in_stack_00000080,puVar12[1]);
                }
                lVar23 = in_stack_00000168;
                if (lVar18 != 0) {
                  if (0 < *(int *)(lVar18 + 0x18)) {
                    uVar19 = 0;
                    do {
                      lVar22 = FUN_05badb74(lVar18,uVar19 & 0xffffffff,
                                            *(undefined8 *)PTR_DAT_09f31320);
                      if (lVar23 == 0) goto LAB_0773ecc8;
                      if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_0773ecc4;
                      if (lVar22 == 0) goto LAB_0773ecc8;
                      lVar14 = *plVar24;
                      uVar11 = *(undefined8 *)(lVar23 + uVar19 * 8 + 0x20);
                      lVar16 = *(long *)(lVar22 + 0xc0);
                      uVar20 = (ulong)*(ushort *)(lVar14 + 0x12e);
                      if (uVar20 != 0) {
                        piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f313c8) {
                            puVar12 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                            goto LAB_0773e2ec;
                          }
                          uVar20 = uVar20 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar20 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_044822ac(plVar24,*(long *)PTR_DAT_09f313c8,0);
LAB_0773e2ec:
                      uVar9 = (*(code *)*puVar12)(plVar24,puVar12[1]);
                      lVar14 = *plVar24;
                      uVar20 = (ulong)*(ushort *)(lVar14 + 0x12e);
                      if (uVar20 != 0) {
                        piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f313c8) {
                            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar21 + 10) * 0x10 + 0x138);
                            goto LAB_0773e354;
                          }
                          uVar20 = uVar20 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar20 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_044822ac(plVar24,*(long *)PTR_DAT_09f313c8,10);
LAB_0773e354:
                      (*(code *)*puVar12)(plVar24,lVar22,iVar10,uVar9,1,0);
                      if (lVar16 == 0) goto LAB_0773ecc8;
                      iVar8 = FUN_094d3ba4(lVar16,0);
                      if (*(long *)(lVar22 + 0x88) == 0) goto LAB_0773ecc8;
                      iVar7 = *(int *)(*(long *)(lVar22 + 0x88) + 0x18);
                      if (iVar7 < iVar8) {
                        if (3 < in_stack_00000090._4_4_) {
                          uVar13 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                                *(undefined8 *)(lVar22 + 0x20),
                                                *(undefined8 *)PTR_DAT_09f31c30,0);
                          lVar17 = *(long *)PTR_DAT_09f22e40;
                          lVar14 = *(long *)(lVar17 + 0x38);
                          if (lVar14 == 0) {
                            FUN_04482014(lVar17);
                            lVar14 = *(long *)(lVar17 + 0x38);
                          }
                          lVar14 = *(long *)(lVar14 + 0x10);
                          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                            lVar14 = FUN_04481fb8();
                          }
                          if (*(int *)(lVar14 + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                          }
                          lVar14 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
                          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                            lVar14 = FUN_04481fb8();
                          }
                          FUN_0771ec00(uVar13,**(undefined8 **)(lVar14 + 0xb8),0);
                        }
                      }
                      else if ((1 < in_stack_00000090._4_4_) && (iVar8 < iVar7)) {
                        uVar13 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                              *(undefined8 *)(lVar22 + 0x20),
                                              *(undefined8 *)PTR_DAT_09f31c38,0);
                        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                        }
                        FUN_094c33b0(uVar13,0);
                      }
                      lVar14 = *unaff_x22;
                      uVar20 = (ulong)*(ushort *)(lVar14 + 0x12e);
                      if (uVar20 != 0) {
                        piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
                            puVar12 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                            goto LAB_0773e514;
                          }
                          uVar20 = uVar20 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar20 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_044822ac();
LAB_0773e514:
                      uVar20 = (*(code *)*puVar12)();
                      if ((uVar20 & 1) != 0) {
                        FUN_07732404(in_stack_00000050,(long)&stack0x000000c0 + 4,lVar22,lVar16,
                                     in_stack_00000078,0);
                      }
                      lVar14 = *unaff_x22;
                      uVar20 = (ulong)*(ushort *)(lVar14 + 0x12e);
                      if (uVar20 != 0) {
                        piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
                            puVar12 = (undefined8 *)
                                      (lVar14 + (long)(*piVar21 + 0x24) * 0x10 + 0x138);
                            goto LAB_0773e59c;
                          }
                          uVar20 = uVar20 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar20 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_044822ac();
LAB_0773e59c:
                      iVar8 = (*(code *)*puVar12)();
                      if (iVar8 == 1) {
                        lVar14 = *in_stack_00000080;
                        uVar20 = (ulong)*(ushort *)(lVar14 + 0x12e);
                        if (uVar20 != 0) {
                          piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f312c0) {
                              puVar12 = (undefined8 *)(lVar14 + (long)(*piVar21 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_0773e608;
                            }
                            uVar20 = uVar20 - 1;
                            piVar21 = piVar21 + 4;
                          } while (uVar20 != 0);
                        }
                        puVar12 = (undefined8 *)
                                  FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,1);
LAB_0773e608:
                        (*(code *)*puVar12)(in_stack_00000080,lVar22,iVar10,puVar12[1]);
                      }
                      *(int *)(lVar22 + 0x28) = iVar10;
                      FUN_0773ca38(&stack0x000000d0,uVar11,lVar22);
                      if (in_stack_00000068 == 0) goto LAB_0773ecc8;
                      lVar14 = *(long *)(in_stack_00000068 + 0x10);
                      lVar16 = *(long *)PTR_DAT_09f1e870;
                      *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
                      if (lVar14 == 0) goto LAB_0773ecc8;
                      uVar1 = *(uint *)(in_stack_00000068 + 0x18);
                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                        *(uint *)(in_stack_00000068 + 0x18) = uVar1 + 1;
                        puVar12 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                        *puVar12 = uVar11;
                        thunk_FUN_044bb4b4(puVar12,uVar11);
                      }
                      else {
                        FUN_05bade44(in_stack_00000068,uVar11,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar14 = *(long *)(in_stack_00000088 + 0x10);
                      lVar16 = *(long *)PTR_DAT_09f31558;
                      *(int *)(in_stack_00000088 + 0x1c) = *(int *)(in_stack_00000088 + 0x1c) + 1;
                      if (lVar14 == 0) goto LAB_0773ecc8;
                      uVar1 = *(uint *)(in_stack_00000088 + 0x18);
                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                        *(uint *)(in_stack_00000088 + 0x18) = uVar1 + 1;
                        plVar15 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar15 = lVar22;
                        thunk_FUN_044bb4b4(plVar15,lVar22);
                      }
                      else {
                        FUN_05bade44(in_stack_00000088,lVar22,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      plVar15 = (long *)(lVar22 + 0xd0);
                      lVar14 = *plVar15;
                      if (lVar14 == 0) goto LAB_0773ecc8;
                      uVar20 = 0;
                      lVar16 = 0x20;
                      iVar10 = *(int *)(lVar22 + 0x30) + iVar10;
                      while ((long)uVar20 < (long)(int)*(uint *)(lVar14 + 0x18)) {
                        if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar14 + lVar16) = 0;
                        thunk_FUN_044bb4b4((undefined8 *)(lVar14 + lVar16),0);
                        lVar14 = *plVar15;
                        uVar20 = uVar20 + 1;
                        lVar16 = lVar16 + 8;
                        if (lVar14 == 0) goto LAB_0773ecc8;
                      }
                      *plVar15 = 0;
                      thunk_FUN_044bb4b4(plVar15,0);
                      if (3 < in_stack_00000090._4_4_) {
                        lVar14 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
                        if (lVar14 == 0) goto LAB_0773ecc8;
                        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_09f31bc8;
                        thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x20));
                        if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(lVar22 + 0x20);
                        thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x28));
                        if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_09f31c20;
                        thunk_FUN_044bb4b4();
                        lVar22 = *plVar24;
                        uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
                        if (uVar20 != 0) {
                          piVar21 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f313c8) {
                              puVar12 = (undefined8 *)(lVar22 + (long)(*piVar21 + 6) * 0x10 + 0x138)
                              ;
                              goto LAB_0773e850;
                            }
                            uVar20 = uVar20 - 1;
                            piVar21 = piVar21 + 4;
                          } while (uVar20 != 0);
                        }
                        puVar12 = (undefined8 *)FUN_044822ac(plVar24,*(long *)PTR_DAT_09f313c8,6);
LAB_0773e850:
                        uStack00000000000000bc = (*(code *)*puVar12)(plVar24,puVar12[1]);
                        uVar11 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                        if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar14 + 0x38) = uVar11;
                        thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x38),uVar11);
                        if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_09f31c60;
                        thunk_FUN_044bb4b4();
                        lVar22 = *in_stack_00000080;
                        uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
                        if (uVar20 != 0) {
                          piVar21 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f312c0) {
                              puVar12 = (undefined8 *)(lVar22 + (long)(*piVar21 + 6) * 0x10 + 0x138)
                              ;
                              goto LAB_0773e908;
                            }
                            uVar20 = uVar20 - 1;
                            piVar21 = piVar21 + 4;
                          } while (uVar20 != 0);
                        }
                        puVar12 = (undefined8 *)
                                  FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,6);
LAB_0773e908:
                        uStack00000000000000bc = (*(code *)*puVar12)(in_stack_00000080,puVar12[1]);
                        uVar11 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                        if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar14 + 0x48) = uVar11;
                        thunk_FUN_044bb4b4();
                        uVar11 = FUN_078b57fc(lVar14,0);
                        plVar15 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                        in_stack_00000098 =
                             CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                        lVar22 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098
                                                   );
                        if (plVar15 == (long *)0x0) goto LAB_0773ecc8;
                        if ((lVar22 != 0) &&
                           (lVar14 = thunk_FUN_04485110(lVar22,*(undefined8 *)(*plVar15 + 0x40)),
                           lVar14 == 0)) goto LAB_0773eccc;
                        if ((int)plVar15[3] == 0) goto LAB_0773ecc4;
                        plVar15[4] = lVar22;
                        thunk_FUN_044bb4b4(plVar15 + 4,lVar22);
                        FUN_0771ec00(uVar11,plVar15,0);
                      }
                      uVar19 = uVar19 + 1;
                    } while ((long)uVar19 < (long)*(int *)(lVar18 + 0x18));
                  }
                  lVar18 = *unaff_x22;
                  uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
                  if (uVar19 != 0) {
                    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar12 = (undefined8 *)(lVar18 + (long)(*piVar21 + 0x16) * 0x10 + 0x138);
                        goto LAB_0773ea3c;
                      }
                      uVar19 = uVar19 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_044822ac();
LAB_0773ea3c:
                  iVar10 = (*(code *)*puVar12)();
                  if (iVar10 == 4) {
                    lVar18 = *unaff_x22;
                    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
                    if (uVar19 != 0) {
                      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
                          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar21 + 0x1a) * 0x10 + 0x138);
                          goto LAB_0773eaa8;
                        }
                        uVar19 = uVar19 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar19 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_044822ac();
LAB_0773eaa8:
                    uVar11 = (*(code *)*puVar12)();
                    lVar18 = *plVar24;
                    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
                    if (uVar19 != 0) {
                      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f313c8) {
                          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar21 + 0xe) * 0x10 + 0x138);
                          goto LAB_0773eb18;
                        }
                        uVar19 = uVar19 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar19 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_044822ac(plVar24,*(long *)PTR_DAT_09f313c8,0xe);
LAB_0773eb18:
                    (*(code *)*puVar12)(uVar11,plVar24,in_stack_00000088,puVar12[1]);
                  }
                  lVar18 = in_stack_00000180;
                  if (3 < in_stack_00000090._4_4_) {
                    lVar23 = *plVar24;
                    uVar19 = (ulong)*(ushort *)(lVar23 + 0x12e);
                    if (uVar19 != 0) {
                      piVar21 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f313c8) {
                          puVar12 = (undefined8 *)(lVar23 + (long)(*piVar21 + 6) * 0x10 + 0x138);
                          goto LAB_0773eb94;
                        }
                        uVar19 = uVar19 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar19 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_044822ac(plVar24,*(long *)PTR_DAT_09f313c8,6);
LAB_0773eb94:
                    uStack00000000000000bc = (*(code *)*puVar12)(plVar24,puVar12[1]);
                    uVar11 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                    if (lVar18 == 0) goto LAB_0773ecc8;
                    in_stack_000000b0 = FUN_087dad08(lVar18,0);
                    uVar13 = FUN_07a3c8f0(&stack0x000000b0,0);
                    uVar11 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31c18,uVar11,
                                          *(undefined8 *)PTR_DAT_09f31c28,uVar13,0);
                    plVar24 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                    in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                    lVar18 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
                    if (plVar24 == (long *)0x0) goto LAB_0773ecc8;
                    if ((lVar18 != 0) &&
                       (lVar23 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*plVar24 + 0x40)),
                       lVar23 == 0)) {
LAB_0773eccc:
                      uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                      FUN_04447d10(uVar11,0);
                    }
                    if ((int)plVar24[3] == 0) goto LAB_0773ecc4;
                    plVar24[4] = lVar18;
                    thunk_FUN_044bb4b4(plVar24 + 4,lVar18);
                    FUN_0771ec00(uVar11,plVar24,0);
                  }
                  if (in_stack_00000048[0x1b] != 0) {
                    FUN_087dae58(in_stack_00000048[0x1b],0);
LAB_0773ec98:
                    return iVar5 < iVar6;
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


