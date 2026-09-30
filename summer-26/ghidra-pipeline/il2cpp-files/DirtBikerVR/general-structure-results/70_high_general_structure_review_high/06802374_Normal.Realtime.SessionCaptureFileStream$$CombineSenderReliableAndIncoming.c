/*
FUNCTION_NAME: Normal.Realtime.SessionCaptureFileStream$$CombineSenderReliableAndIncoming
ENTRY_POINT: 06802374
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Normal_Realtime_SessionCaptureFileStream__CombineSenderReliableAndIncoming(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int *unaff_x19;
  long unaff_x20;
  long *plVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084ad988);
  FUN_03a8a718(PTR_DAT_08494c90);
  FUN_03a8a718(PTR_DAT_084ad990);
  *(undefined1 *)(unaff_x20 + 500) = 1;
  puVar14 = PTR_DAT_084ad558;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  auVar10 = ZEXT816(0);
  auVar9 = ZEXT816(0);
  auVar8 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar22 = ZEXT816(0);
  iVar1 = *unaff_x19;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  auVar12 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  plVar20 = *(long **)(unaff_x19 + 8);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (iVar1 < 7) {
    if (iVar1 < 3) {
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          _in_stack_00000040 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
          unaff_x19[0xe] = 0;
          unaff_x19[0xf] = 0;
          unaff_x19[0x10] = 0;
          unaff_x19[0x11] = 0;
          *unaff_x19 = -1;
          goto LAB_06802d38;
        }
        if (iVar1 == 2) {
          _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
          unaff_x19[0x12] = 0;
          unaff_x19[0x13] = 0;
          unaff_x19[0x14] = 0;
          unaff_x19[0x15] = 0;
          *unaff_x19 = -1;
LAB_06802478:
          _in_stack_00000040 = auVar9;
          FUN_0666ef90(&stack0x00000030,0);
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar15 = FUN_067f353c(plVar20,unaff_x19[0xc],0);
          goto LAB_06802a3c;
        }
        goto LAB_068026bc;
      }
      _in_stack_00000040 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
      unaff_x19[0xe] = 0;
      unaff_x19[0xf] = 0;
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      *unaff_x19 = -1;
    }
    else {
      if (iVar1 < 5) {
        if (iVar1 == 3) goto LAB_068025d8;
        if (iVar1 == 4) {
          _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
          unaff_x19[0x16] = 0;
          unaff_x19[0x17] = 0;
          unaff_x19[0x18] = 0;
          unaff_x19[0x19] = 0;
          *unaff_x19 = -1;
          _in_stack_00000040 = ZEXT816(0);
          _in_stack_00000030 = ZEXT816(0);
LAB_06802400:
          uVar15 = FUN_05d6376c(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad980);
          goto LAB_06802a3c;
        }
      }
      else {
        if (iVar1 == 5) {
          _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
          unaff_x19[0x16] = 0;
          unaff_x19[0x17] = 0;
          unaff_x19[0x18] = 0;
          unaff_x19[0x19] = 0;
          *unaff_x19 = -1;
LAB_06802614:
          _in_stack_00000040 = auVar5;
          _in_stack_00000030 = auVar6;
          uVar15 = FUN_05d6376c(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad980);
          goto LAB_06802a3c;
        }
        if (iVar1 == 6) {
          _in_stack_00000040 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
          unaff_x19[0xe] = 0;
          unaff_x19[0xf] = 0;
          unaff_x19[0x10] = 0;
          unaff_x19[0x11] = 0;
          *unaff_x19 = -1;
LAB_068024f0:
          _in_stack_00000030 = auVar11;
          uVar17 = FUN_05d6317c(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c80);
          if ((uVar17 & 1) == 0) {
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
          }
          else {
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            lVar16 = plVar20[0x10];
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar2 = *(int *)((long)plVar20 + 0x8c) + 1;
            if (*(uint *)(lVar16 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            if (*(short *)(lVar16 + (long)(int)uVar2 * 2 + 0x20) == 0x49) {
              lVar16 = FUN_067ee6ac(plVar20,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              _in_stack_00000020 = FUN_058b7208(lVar16,0,*(undefined8 *)PTR_DAT_084ad990);
              uVar17 = FUN_05d63724(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad988);
              auVar22 = _in_stack_00000040;
              auVar12 = _in_stack_00000030;
              if ((uVar17 & 1) == 0) {
                *unaff_x19 = 7;
                *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
                thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
                if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_03fcef68(unaff_x19 + 2,&stack0x00000020);
                return;
              }
              goto LAB_0680268c;
            }
          }
          lVar16 = FUN_067ee7dc(plVar20,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar22 = FUN_067c4c10(lVar16,0,0);
          _in_stack_00000030 = auVar22;
          uVar17 = FUN_0666ef78(&stack0x00000030,0);
          auVar4 = _in_stack_00000040;
          if ((uVar17 & 1) == 0) {
            *unaff_x19 = 8;
            *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
            thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
            if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
            return;
          }
          goto LAB_068027b8;
        }
      }
LAB_068026bc:
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_067eccec(plVar20,0);
      uVar2 = *(uint *)((long)plVar20 + 0x24);
      if (0xc < uVar2) {
LAB_068028e4:
        lVar16 = thunk_FUN_03af1434(PTR_DAT_084883b0);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar15 = FUN_066e1a5c(0);
        uStack000000000000000c = *(undefined4 *)((long)plVar20 + 0x24);
        uVar18 = thunk_FUN_03af1434(PTR_DAT_084ad4a0);
        uVar18 = thunk_FUN_03ac70f4(uVar18,&stack0x0000000c);
        uVar19 = thunk_FUN_03af1434(PTR_DAT_084ad4a8);
        uVar15 = FUN_0683e884(uVar19,uVar15,uVar18,0);
        uVar15 = FUN_067e3658(plVar20,uVar15,0);
        uVar18 = thunk_FUN_03af1434(PTR_DAT_084adc40);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar15,uVar18);
      }
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x665U) != 0) goto LAB_06802d50;
      if (uVar2 != 8) {
        if (uVar2 != 0xc) goto LAB_068028e4;
        lVar16 = FUN_067eee78(plVar20,*(undefined8 *)(unaff_x19 + 10),0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        _in_stack_00000030 = FUN_067c4c10(lVar16,0,0);
        uVar17 = FUN_0666ef78(&stack0x00000030,0);
        auVar4._8_8_ = in_stack_00000048;
        auVar4._0_8_ = in_stack_00000040;
        if ((uVar17 & 1) == 0) {
          *unaff_x19 = 0xc;
          *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
          thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
          if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
          return;
        }
        goto LAB_068025ec;
      }
      lVar16 = FUN_067ecf90(plVar20,1,*(undefined8 *)(unaff_x19 + 10),0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      _in_stack_00000040 = FUN_058b049c(lVar16,0,*(undefined8 *)PTR_DAT_08494c90);
      uVar17 = FUN_05d63134(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c88);
      if ((uVar17 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000040;
        thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
        if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03fcd3f8(unaff_x19 + 2,&stack0x00000040);
        return;
      }
    }
    uVar17 = FUN_05d6317c(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c80);
    if ((uVar17 & 1) == 0) {
LAB_06802d50:
      do {
        puVar13 = PTR_DAT_08486760;
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar16 = plVar20[0x10];
joined_r0x06802d58:
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar2 = *(uint *)((long)plVar20 + 0x8c);
        if (*(uint *)(lVar16 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        uVar3 = *(ushort *)(lVar16 + (long)(int)uVar2 * 2 + 0x20);
        uVar21 = (uint)uVar3;
        if (0x39 < uVar3) {
          if (uVar3 < 0x4f) {
            if (uVar21 == 0x49) {
              lVar16 = FUN_067ee57c(plVar20,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              _in_stack_00000020 = FUN_058b7208(lVar16,0,*(undefined8 *)PTR_DAT_084ad990);
              uVar17 = FUN_05d63724(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad988);
              auVar5 = _in_stack_00000040;
              auVar6 = _in_stack_00000030;
              if ((uVar17 & 1) == 0) {
                *unaff_x19 = 5;
                *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
                thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
                if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_03fcef68(unaff_x19 + 2,&stack0x00000020);
                return;
              }
              goto LAB_06802614;
            }
            if (uVar3 == 0x4e) {
              lVar16 = FUN_067ee44c(plVar20,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              _in_stack_00000020 = FUN_058b7208(lVar16,0,*(undefined8 *)PTR_DAT_084ad990);
              uVar17 = FUN_05d63724(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad988);
              if ((uVar17 & 1) == 0) {
                *unaff_x19 = 4;
                *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
                thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
                if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_03fcef68(unaff_x19 + 2,&stack0x00000020);
                return;
              }
              goto LAB_06802400;
            }
          }
          else {
            if (uVar3 == 0x5d) {
              *(uint *)((long)plVar20 + 0x8c) = uVar2 + 1;
              if ((1 < *(int *)((long)plVar20 + 0x24) - 5U) && (*(int *)((long)plVar20 + 0x24) != 8)
                 ) {
                uVar15 = FUN_067f284c(plVar20,0x5d,0);
                uVar18 = thunk_FUN_03af1434(PTR_DAT_084adc40);
                    /* WARNING: Subroutine does not return */
                FUN_03a8a884(uVar15,uVar18);
              }
              FUN_067e4904(plVar20,0xe,0);
              uVar15 = 0;
              goto LAB_06802a3c;
            }
            if (uVar21 == 0x6e) {
              lVar16 = FUN_067eed80(plVar20,*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar22 = FUN_067c4c10(lVar16,0,0);
              _in_stack_00000030 = auVar22;
              uVar17 = FUN_0666ef78(&stack0x00000030,0);
              auVar4 = _in_stack_00000040;
              if ((uVar17 & 1) == 0) {
                *unaff_x19 = 3;
                *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
                thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
                if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
                return;
              }
              goto LAB_068025ec;
            }
          }
LAB_06802b20:
          lVar16 = *(long *)(puVar13 + 0x88);
          *(uint *)((long)plVar20 + 0x8c) = uVar2 + 1;
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar17 = FUN_066b9610(uVar21,0);
          if ((uVar17 & 1) == 0) {
            uVar15 = FUN_067f284c(plVar20,uVar21,0);
            uVar18 = thunk_FUN_03af1434(PTR_DAT_084adc40);
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar15,uVar18);
          }
LAB_06802b7c:
          lVar16 = plVar20[0x10];
          goto joined_r0x06802d58;
        }
        if (uVar3 != 0) {
          if (uVar3 < 0x20) {
            if (uVar3 == 9) {
LAB_06802b74:
              *(uint *)((long)plVar20 + 0x8c) = uVar2 + 1;
            }
            else {
              if (uVar3 != 10) {
                if (uVar3 != 0xd) goto LAB_06802b20;
                lVar16 = FUN_067ed574(plVar20,0,*(undefined8 *)(unaff_x19 + 10),0);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                auVar22 = FUN_067c4c10(lVar16,0,0);
                _in_stack_00000030 = auVar22;
                uVar17 = FUN_0666ef78(&stack0x00000030,0);
                auVar8 = _in_stack_00000040;
                if ((uVar17 & 1) == 0) {
                  *unaff_x19 = 0xb;
                  *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
                  thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
                  if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                  }
                  FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
                  return;
                }
                goto LAB_068024bc;
              }
              FUN_067f2950(plVar20,0);
            }
            goto LAB_06802b7c;
          }
          if (uVar3 < 0x2c) {
            if (uVar3 == 0x20) goto LAB_06802b74;
            if ((uVar21 == 0x22) || (uVar21 == 0x27)) {
              lVar16 = FUN_067edce8(plVar20,uVar3,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar22 = FUN_067c4c10(lVar16,0,0);
              _in_stack_00000030 = auVar22;
              uVar17 = FUN_0666ef78(&stack0x00000030,0);
              auVar9 = _in_stack_00000040;
              if ((uVar17 & 1) == 0) {
                *unaff_x19 = 2;
                *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
                thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
                if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
                return;
              }
              goto LAB_06802478;
            }
          }
          else {
            if (uVar3 < 0x2e) {
              if (uVar21 == 0x2c) {
                FUN_067f27e8(plVar20,0);
                goto LAB_06802b7c;
              }
              if (uVar21 != 0x2d) goto LAB_06802b20;
              lVar16 = FUN_067ed674(plVar20,1,1,*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar22 = FUN_058b049c(lVar16,0,*(undefined8 *)PTR_DAT_08494c90);
              _in_stack_00000040 = auVar22;
              uVar17 = FUN_05d63134(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c88);
              auVar11 = _in_stack_00000030;
              if ((uVar17 & 1) == 0) {
                *unaff_x19 = 6;
                *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000040;
                thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
                if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_03fcd3f8(unaff_x19 + 2,&stack0x00000040);
                return;
              }
              goto LAB_068024f0;
            }
            if ((uVar21 - 0x30 < 10) || (uVar21 == 0x2e)) {
              lVar16 = FUN_067ee7dc(plVar20,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar22 = FUN_067c4c10(lVar16,0,0);
              _in_stack_00000030 = auVar22;
              uVar17 = FUN_0666ef78(&stack0x00000030,0);
              auVar10 = _in_stack_00000040;
              if ((uVar17 & 1) == 0) {
                *unaff_x19 = 9;
                *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
                thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
                if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
                return;
              }
              goto LAB_06802a14;
            }
            if (uVar21 == 0x2f) goto LAB_06802fd8;
          }
          goto LAB_06802b20;
        }
        lVar16 = FUN_067eec64(plVar20,*(undefined8 *)(unaff_x19 + 10),0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar22 = FUN_058b049c(lVar16,0,*(undefined8 *)PTR_DAT_08494c90);
        _in_stack_00000040 = auVar22;
        uVar17 = FUN_05d63134(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c88);
        auVar7 = _in_stack_00000030;
        if ((uVar17 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000040;
          thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
          if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_03fcd3f8(unaff_x19 + 2,&stack0x00000040);
          return;
        }
LAB_06802d38:
        _in_stack_00000030 = auVar7;
        uVar17 = FUN_05d6317c(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c80);
        if ((uVar17 & 1) != 0) {
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_067e3c14(plVar20,0,0,0,0);
          uVar15 = 0;
          goto LAB_06802a3c;
        }
      } while( true );
    }
    uVar15 = 0;
  }
  else {
    if (iVar1 < 10) {
      if (iVar1 == 7) {
        _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
        unaff_x19[0x16] = 0;
        unaff_x19[0x17] = 0;
        unaff_x19[0x18] = 0;
        unaff_x19[0x19] = 0;
        *unaff_x19 = -1;
LAB_0680268c:
        _in_stack_00000040 = auVar22;
        _in_stack_00000030 = auVar12;
        uVar15 = FUN_05d6376c(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad980);
        goto LAB_06802a3c;
      }
      if (iVar1 == 8) {
        _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
        unaff_x19[0x12] = 0;
        unaff_x19[0x13] = 0;
        unaff_x19[0x14] = 0;
        unaff_x19[0x15] = 0;
        *unaff_x19 = -1;
LAB_068027b8:
        _in_stack_00000040 = auVar4;
        FUN_0666ef90(&stack0x00000030,0);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar15 = (**(code **)(*plVar20 + 0x248))(plVar20,*(undefined8 *)(*plVar20 + 0x250));
        goto LAB_06802a3c;
      }
      if (iVar1 == 9) {
        _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
        unaff_x19[0x12] = 0;
        unaff_x19[0x13] = 0;
        unaff_x19[0x14] = 0;
        unaff_x19[0x15] = 0;
        *unaff_x19 = -1;
LAB_06802a14:
        _in_stack_00000040 = auVar10;
        FUN_0666ef90(&stack0x00000030,0);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar15 = (**(code **)(*plVar20 + 0x248))(plVar20,*(undefined8 *)(*plVar20 + 0x250));
        goto LAB_06802a3c;
      }
      goto LAB_068026bc;
    }
    if (iVar1 - 10U < 2) {
      _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      unaff_x19[0x14] = 0;
      unaff_x19[0x15] = 0;
      *unaff_x19 = -1;
      goto LAB_068024bc;
    }
    if (iVar1 != 0xc) goto LAB_068026bc;
LAB_068025d8:
    _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
LAB_068025ec:
    _in_stack_00000040 = auVar4;
    FUN_0666ef90(&stack0x00000030,0);
    uVar15 = 0;
  }
LAB_06802a3c:
  puVar13 = PTR_DAT_084adaf8;
  iVar1 = *(int *)(*(long *)puVar14 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar15,*(undefined8 *)puVar13);
  return;
LAB_06802fd8:
  lVar16 = FUN_067edae8(plVar20,0,*(undefined8 *)(unaff_x19 + 10),0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  auVar22 = FUN_067c4c10(lVar16,0,0);
  _in_stack_00000030 = auVar22;
  uVar17 = FUN_0666ef78(&stack0x00000030,0);
  auVar8 = _in_stack_00000040;
  if ((uVar17 & 1) == 0) {
    *unaff_x19 = 10;
    *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
    thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
    if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
    return;
  }
LAB_068024bc:
  _in_stack_00000040 = auVar8;
  FUN_0666ef90(&stack0x00000030,0);
  goto LAB_06802d50;
}


