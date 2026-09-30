/*
FUNCTION_NAME: Normal.Realtime.SessionCaptureFileStream$$ReadVarint32FromStream
ENTRY_POINT: 068023b0
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


void Normal_Realtime_SessionCaptureFileStream__ReadVarint32FromStream(void)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int in_w8;
  undefined4 *unaff_x19;
  long *plVar13;
  uint uVar14;
  long unaff_x22;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  auVar6 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar16 = ZEXT816(0);
  plVar15 = *(long **)(unaff_x22 + 0x558);
  plVar13 = *(long **)(unaff_x19 + 8);
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000018 = 0;
  if (in_w8 < 7) {
    if (in_w8 < 3) {
      if (in_w8 != 0) {
        if (in_w8 == 1) {
          _in_stack_00000040 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
          *(undefined8 *)(unaff_x19 + 0xe) = 0;
          *(undefined8 *)(unaff_x19 + 0x10) = 0;
          *unaff_x19 = 0xffffffff;
          goto LAB_06802d38;
        }
        if (in_w8 == 2) {
          _uStack0000000000000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
          *(undefined8 *)(unaff_x19 + 0x12) = 0;
          *(undefined8 *)(unaff_x19 + 0x14) = 0;
          *unaff_x19 = 0xffffffff;
LAB_06802478:
          FUN_0666ef90(&stack0x00000030,0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar8 = FUN_067f353c(plVar13,unaff_x19[0xc],0);
          goto LAB_06802a3c;
        }
        goto LAB_068026bc;
      }
      _in_stack_00000040 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *unaff_x19 = 0xffffffff;
    }
    else {
      if (in_w8 < 5) {
        if (in_w8 == 3) goto LAB_068025d8;
        if (in_w8 == 4) {
          _uStack0000000000000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
          *(undefined8 *)(unaff_x19 + 0x16) = 0;
          *(undefined8 *)(unaff_x19 + 0x18) = 0;
          *unaff_x19 = 0xffffffff;
          _uStack0000000000000030 = ZEXT816(0);
LAB_06802400:
          uVar8 = FUN_05d6376c(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad980);
          goto LAB_06802a3c;
        }
      }
      else {
        if (in_w8 == 5) {
          _uStack0000000000000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
          *(undefined8 *)(unaff_x19 + 0x16) = 0;
          *(undefined8 *)(unaff_x19 + 0x18) = 0;
          *unaff_x19 = 0xffffffff;
LAB_06802614:
          _uStack0000000000000030 = auVar16;
          uVar8 = FUN_05d6376c(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad980);
          goto LAB_06802a3c;
        }
        if (in_w8 == 6) {
          _in_stack_00000040 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
          *(undefined8 *)(unaff_x19 + 0xe) = 0;
          *(undefined8 *)(unaff_x19 + 0x10) = 0;
          *unaff_x19 = 0xffffffff;
LAB_068024f0:
          _uStack0000000000000030 = auVar5;
          uVar10 = FUN_05d6317c(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c80);
          if ((uVar10 & 1) == 0) {
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
          }
          else {
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            lVar9 = plVar13[0x10];
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar1 = *(int *)((long)plVar13 + 0x8c) + 1;
            if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            if (*(short *)(lVar9 + (long)(int)uVar1 * 2 + 0x20) == 0x49) {
              lVar9 = FUN_067ee6ac(plVar13,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              _uStack0000000000000020 = FUN_058b7208(lVar9,0,*(undefined8 *)PTR_DAT_084ad990);
              uVar10 = FUN_05d63724(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad988);
              auVar6 = _uStack0000000000000030;
              if ((uVar10 & 1) == 0) {
                *unaff_x19 = 7;
                *(undefined1 (*) [16])(unaff_x19 + 0x16) = _uStack0000000000000020;
                thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
                if (*(int *)(*plVar15 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_03fcef68(unaff_x19 + 2,&stack0x00000020);
                return;
              }
              goto LAB_0680268c;
            }
          }
          lVar9 = FUN_067ee7dc(plVar13,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar16 = FUN_067c4c10(lVar9,0,0);
          _uStack0000000000000030 = auVar16;
          uVar10 = FUN_0666ef78(&stack0x00000030,0);
          if ((uVar10 & 1) == 0) {
            *unaff_x19 = 8;
            *(undefined1 (*) [16])(unaff_x19 + 0x12) = _uStack0000000000000030;
            thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
            if (*(int *)(*plVar15 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
            return;
          }
          goto LAB_068027b8;
        }
      }
LAB_068026bc:
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_067eccec(plVar13,0);
      uVar1 = *(uint *)((long)plVar13 + 0x24);
      if (0xc < uVar1) {
LAB_068028e4:
        lVar9 = thunk_FUN_03af1434(PTR_DAT_084883b0);
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar8 = FUN_066e1a5c(0);
        uStack000000000000000c = *(undefined4 *)((long)plVar13 + 0x24);
        uVar11 = thunk_FUN_03af1434(PTR_DAT_084ad4a0);
        uVar11 = thunk_FUN_03ac70f4(uVar11,&stack0x0000000c);
        uVar12 = thunk_FUN_03af1434(PTR_DAT_084ad4a8);
        uVar8 = FUN_0683e884(uVar12,uVar8,uVar11,0);
        uVar8 = FUN_067e3658(plVar13,uVar8,0);
        uVar11 = thunk_FUN_03af1434(PTR_DAT_084adc40);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar8,uVar11);
      }
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x665U) != 0) goto LAB_06802d50;
      if (uVar1 != 8) {
        if (uVar1 != 0xc) goto LAB_068028e4;
        lVar9 = FUN_067eee78(plVar13,*(undefined8 *)(unaff_x19 + 10),0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        _uStack0000000000000030 = FUN_067c4c10(lVar9,0,0);
        uVar10 = FUN_0666ef78(&stack0x00000030,0);
        if ((uVar10 & 1) == 0) {
          *unaff_x19 = 0xc;
          *(undefined1 (*) [16])(unaff_x19 + 0x12) = _uStack0000000000000030;
          thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
          if (*(int *)(*plVar15 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
          return;
        }
        goto LAB_068025ec;
      }
      lVar9 = FUN_067ecf90(plVar13,1,*(undefined8 *)(unaff_x19 + 10),0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      _in_stack_00000040 = FUN_058b049c(lVar9,0,*(undefined8 *)PTR_DAT_08494c90);
      uVar10 = FUN_05d63134(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c88);
      if ((uVar10 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000040;
        thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
        if (*(int *)(*plVar15 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03fcd3f8(unaff_x19 + 2,&stack0x00000040);
        return;
      }
    }
    uVar10 = FUN_05d6317c(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c80);
    if ((uVar10 & 1) == 0) {
LAB_06802d50:
      do {
        puVar7 = PTR_DAT_08486760;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar9 = plVar13[0x10];
joined_r0x06802d58:
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar1 = *(uint *)((long)plVar13 + 0x8c);
        if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        uVar3 = *(ushort *)(lVar9 + (long)(int)uVar1 * 2 + 0x20);
        uVar14 = (uint)uVar3;
        if (0x39 < uVar3) {
          if (uVar3 < 0x4f) {
            if (uVar14 == 0x49) {
              lVar9 = FUN_067ee57c(plVar13,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              _uStack0000000000000020 = FUN_058b7208(lVar9,0,*(undefined8 *)PTR_DAT_084ad990);
              uVar10 = FUN_05d63724(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad988);
              auVar16 = _uStack0000000000000030;
              if ((uVar10 & 1) == 0) {
                *unaff_x19 = 5;
                *(undefined1 (*) [16])(unaff_x19 + 0x16) = _uStack0000000000000020;
                thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
                if (*(int *)(*plVar15 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_03fcef68(unaff_x19 + 2,&stack0x00000020);
                return;
              }
              goto LAB_06802614;
            }
            if (uVar3 == 0x4e) {
              lVar9 = FUN_067ee44c(plVar13,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              _uStack0000000000000020 = FUN_058b7208(lVar9,0,*(undefined8 *)PTR_DAT_084ad990);
              uVar10 = FUN_05d63724(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad988);
              if ((uVar10 & 1) == 0) {
                *unaff_x19 = 4;
                *(undefined1 (*) [16])(unaff_x19 + 0x16) = _uStack0000000000000020;
                thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
                if (*(int *)(*plVar15 + 0xe4) == 0) {
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
              *(uint *)((long)plVar13 + 0x8c) = uVar1 + 1;
              if ((1 < *(int *)((long)plVar13 + 0x24) - 5U) && (*(int *)((long)plVar13 + 0x24) != 8)
                 ) {
                uVar8 = FUN_067f284c(plVar13,0x5d,0);
                uVar11 = thunk_FUN_03af1434(PTR_DAT_084adc40);
                    /* WARNING: Subroutine does not return */
                FUN_03a8a884(uVar8,uVar11);
              }
              FUN_067e4904(plVar13,0xe,0);
              uVar8 = 0;
              goto LAB_06802a3c;
            }
            if (uVar14 == 0x6e) {
              lVar9 = FUN_067eed80(plVar13,*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar16 = FUN_067c4c10(lVar9,0,0);
              _uStack0000000000000030 = auVar16;
              uVar10 = FUN_0666ef78(&stack0x00000030,0);
              if ((uVar10 & 1) == 0) {
                *unaff_x19 = 3;
                *(undefined1 (*) [16])(unaff_x19 + 0x12) = _uStack0000000000000030;
                thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
                if (*(int *)(*plVar15 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
                return;
              }
              goto LAB_068025ec;
            }
          }
LAB_06802b20:
          lVar9 = *(long *)(puVar7 + 0x88);
          *(uint *)((long)plVar13 + 0x8c) = uVar1 + 1;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar10 = FUN_066b9610(uVar14,0);
          if ((uVar10 & 1) == 0) {
            uVar8 = FUN_067f284c(plVar13,uVar14,0);
            uVar11 = thunk_FUN_03af1434(PTR_DAT_084adc40);
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar8,uVar11);
          }
LAB_06802b7c:
          lVar9 = plVar13[0x10];
          goto joined_r0x06802d58;
        }
        if (uVar3 != 0) {
          if (uVar3 < 0x20) {
            if (uVar3 == 9) {
LAB_06802b74:
              *(uint *)((long)plVar13 + 0x8c) = uVar1 + 1;
            }
            else {
              if (uVar3 != 10) {
                if (uVar3 != 0xd) goto LAB_06802b20;
                lVar9 = FUN_067ed574(plVar13,0,*(undefined8 *)(unaff_x19 + 10),0);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                auVar16 = FUN_067c4c10(lVar9,0,0);
                _uStack0000000000000030 = auVar16;
                uVar10 = FUN_0666ef78(&stack0x00000030,0);
                if ((uVar10 & 1) == 0) {
                  *unaff_x19 = 0xb;
                  *(undefined1 (*) [16])(unaff_x19 + 0x12) = _uStack0000000000000030;
                  thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
                  if (*(int *)(*plVar15 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                  }
                  FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
                  return;
                }
                goto LAB_068024bc;
              }
              FUN_067f2950(plVar13,0);
            }
            goto LAB_06802b7c;
          }
          if (uVar3 < 0x2c) {
            if (uVar3 == 0x20) goto LAB_06802b74;
            if ((uVar14 == 0x22) || (uVar14 == 0x27)) {
              lVar9 = FUN_067edce8(plVar13,uVar3,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar16 = FUN_067c4c10(lVar9,0,0);
              _uStack0000000000000030 = auVar16;
              uVar10 = FUN_0666ef78(&stack0x00000030,0);
              if ((uVar10 & 1) == 0) {
                *unaff_x19 = 2;
                *(undefined1 (*) [16])(unaff_x19 + 0x12) = _uStack0000000000000030;
                thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
                if (*(int *)(*plVar15 + 0xe4) == 0) {
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
              if (uVar14 == 0x2c) {
                FUN_067f27e8(plVar13,0);
                goto LAB_06802b7c;
              }
              if (uVar14 != 0x2d) goto LAB_06802b20;
              lVar9 = FUN_067ed674(plVar13,1,1,*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar16 = FUN_058b049c(lVar9,0,*(undefined8 *)PTR_DAT_08494c90);
              _in_stack_00000040 = auVar16;
              uVar10 = FUN_05d63134(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c88);
              auVar5 = _uStack0000000000000030;
              if ((uVar10 & 1) == 0) {
                *unaff_x19 = 6;
                *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000040;
                thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
                if (*(int *)(*plVar15 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_03fcd3f8(unaff_x19 + 2,&stack0x00000040);
                return;
              }
              goto LAB_068024f0;
            }
            if ((uVar14 - 0x30 < 10) || (uVar14 == 0x2e)) {
              lVar9 = FUN_067ee7dc(plVar13,unaff_x19[0xc],*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar16 = FUN_067c4c10(lVar9,0,0);
              _uStack0000000000000030 = auVar16;
              uVar10 = FUN_0666ef78(&stack0x00000030,0);
              if ((uVar10 & 1) == 0) {
                *unaff_x19 = 9;
                *(undefined1 (*) [16])(unaff_x19 + 0x12) = _uStack0000000000000030;
                thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
                if (*(int *)(*plVar15 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
                return;
              }
              goto LAB_06802a14;
            }
            if (uVar14 == 0x2f) goto LAB_06802fd8;
          }
          goto LAB_06802b20;
        }
        lVar9 = FUN_067eec64(plVar13,*(undefined8 *)(unaff_x19 + 10),0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar16 = FUN_058b049c(lVar9,0,*(undefined8 *)PTR_DAT_08494c90);
        _in_stack_00000040 = auVar16;
        uVar10 = FUN_05d63134(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c88);
        auVar4 = _uStack0000000000000030;
        if ((uVar10 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000040;
          thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
          if (*(int *)(*plVar15 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_03fcd3f8(unaff_x19 + 2,&stack0x00000040);
          return;
        }
LAB_06802d38:
        _uStack0000000000000030 = auVar4;
        uVar10 = FUN_05d6317c(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c80);
        if ((uVar10 & 1) != 0) {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_067e3c14(plVar13,0,0,0,0);
          uVar8 = 0;
          goto LAB_06802a3c;
        }
      } while( true );
    }
    uVar8 = 0;
  }
  else {
    if (in_w8 < 10) {
      if (in_w8 == 7) {
        _uStack0000000000000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
        *(undefined8 *)(unaff_x19 + 0x16) = 0;
        *(undefined8 *)(unaff_x19 + 0x18) = 0;
        *unaff_x19 = 0xffffffff;
LAB_0680268c:
        _uStack0000000000000030 = auVar6;
        uVar8 = FUN_05d6376c(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad980);
        goto LAB_06802a3c;
      }
      if (in_w8 == 8) {
        _uStack0000000000000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
        *(undefined8 *)(unaff_x19 + 0x12) = 0;
        *(undefined8 *)(unaff_x19 + 0x14) = 0;
        *unaff_x19 = 0xffffffff;
LAB_068027b8:
        FUN_0666ef90(&stack0x00000030,0);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar8 = (**(code **)(*plVar13 + 0x248))(plVar13,*(undefined8 *)(*plVar13 + 0x250));
        goto LAB_06802a3c;
      }
      if (in_w8 == 9) {
        _uStack0000000000000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
        *(undefined8 *)(unaff_x19 + 0x12) = 0;
        *(undefined8 *)(unaff_x19 + 0x14) = 0;
        *unaff_x19 = 0xffffffff;
LAB_06802a14:
        FUN_0666ef90(&stack0x00000030,0);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar8 = (**(code **)(*plVar13 + 0x248))(plVar13,*(undefined8 *)(*plVar13 + 0x250));
        goto LAB_06802a3c;
      }
      goto LAB_068026bc;
    }
    if (in_w8 - 10U < 2) {
      _uStack0000000000000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
      *(undefined8 *)(unaff_x19 + 0x12) = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = 0;
      *unaff_x19 = 0xffffffff;
      goto LAB_068024bc;
    }
    if (in_w8 != 0xc) goto LAB_068026bc;
LAB_068025d8:
    _uStack0000000000000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    *unaff_x19 = 0xffffffff;
LAB_068025ec:
    FUN_0666ef90(&stack0x00000030,0);
    uVar8 = 0;
  }
LAB_06802a3c:
  puVar7 = PTR_DAT_084adaf8;
  iVar2 = *(int *)(*plVar15 + 0xe4);
  *unaff_x19 = 0xfffffffe;
  if (iVar2 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar8,*(undefined8 *)puVar7);
  return;
LAB_06802fd8:
  lVar9 = FUN_067edae8(plVar13,0,*(undefined8 *)(unaff_x19 + 10),0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  auVar16 = FUN_067c4c10(lVar9,0,0);
  _uStack0000000000000030 = auVar16;
  uVar10 = FUN_0666ef78(&stack0x00000030,0);
  if ((uVar10 & 1) == 0) {
    *unaff_x19 = 10;
    *(undefined1 (*) [16])(unaff_x19 + 0x12) = _uStack0000000000000030;
    thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
    if (*(int *)(*plVar15 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
    return;
  }
LAB_068024bc:
  FUN_0666ef90(&stack0x00000030,0);
  goto LAB_06802d50;
}


