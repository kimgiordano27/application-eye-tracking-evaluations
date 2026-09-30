/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 050b54d4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(void)

{
  uint uVar1;
  undefined4 uVar2;
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined2 uVar24;
  uint uVar25;
  long lVar26;
  undefined4 *unaff_x19;
  long lVar27;
  undefined8 *unaff_x22;
  undefined1 auVar28 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined2 in_stack_00000048;
  ushort uStack000000000000004c;
  
  puVar18 = PTR_DAT_0676aaa0;
  puVar17 = PTR_DAT_0676aa98;
  puVar16 = PTR_DAT_067609b8;
  uStack000000000000004c = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  auVar13 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  auVar14 = ZEXT816(0);
  auVar12 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  auVar11 = ZEXT816(0);
  auVar9 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  auVar28 = ZEXT816(0);
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  auVar15 = ZEXT816(0);
  auVar8 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  lVar27 = *(long *)(unaff_x19 + 8);
  _uStack0000000000000020 = auVar4;
  switch(*unaff_x19) {
  case 0:
    _uStack0000000000000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    *unaff_x19 = 0xffffffff;
    break;
  case 1:
    _uStack0000000000000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
    goto LAB_050b5718;
  case 2:
    _uStack0000000000000010 = *(undefined1 (*) [16])(unaff_x19 + 0x1a);
    *(undefined8 *)(unaff_x19 + 0x1a) = 0;
    *(undefined8 *)(unaff_x19 + 0x1c) = 0;
    *unaff_x19 = 0xffffffff;
    _uStack0000000000000030 = ZEXT816(0);
    _uStack0000000000000000 = ZEXT816(0);
    goto LAB_050b5914;
  case 3:
    _uStack0000000000000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
    goto LAB_050b5e8c;
  case 4:
    _uStack0000000000000010 = *(undefined1 (*) [16])(unaff_x19 + 0x1a);
    *(undefined8 *)(unaff_x19 + 0x1a) = 0;
    *(undefined8 *)(unaff_x19 + 0x1c) = 0;
    *unaff_x19 = 0xffffffff;
    _uStack0000000000000030 = ZEXT816(0);
    _uStack0000000000000000 = ZEXT816(0);
    goto LAB_050b5f3c;
  case 5:
    _uStack0000000000000000 = *(undefined1 (*) [16])(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x22) = 0;
    *unaff_x19 = 0xffffffff;
    goto LAB_050b582c;
  default:
    if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar2 = *(undefined4 *)(lVar27 + 0x8c);
    unaff_x19[0xd] = uVar2;
    unaff_x19[0xe] = uVar2;
    unaff_x19[0xf] = uVar2;
    *(undefined4 *)(lVar27 + 0xa8) = 0;
    _uStack0000000000000030 = ZEXT816(0);
    _uStack0000000000000000 = ZEXT816(0);
    _uStack0000000000000010 = ZEXT816(0);
    goto LAB_050b55d8;
  }
LAB_050b5898:
  _uStack0000000000000000 = auVar8;
  _uStack0000000000000010 = auVar9;
  _uStack0000000000000020 = auVar12;
  iVar19 = FUN_0467d250(&stack0x00000030,*(undefined8 *)PTR_DAT_06779470);
  if (iVar19 == 0) {
    if (lVar27 != 0) {
      *(undefined4 *)(lVar27 + 0x8c) = unaff_x19[0xd];
      lVar26 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar21 = FUN_04f8e414(0);
      in_stack_00000048 = *(undefined2 *)(unaff_x19 + 0xc);
      uVar22 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x88),&stack0x00000048);
      uVar23 = thunk_FUN_02dc61f4(PTR_DAT_0677e258);
      uVar21 = FUN_050f0ec0(uVar23,uVar21,uVar22,0);
      uVar21 = FUN_05095eec(lVar27,uVar21,0);
      uVar22 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar21,uVar22);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
LAB_050b55d8:
  do {
    if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar25 = unaff_x19[0xd];
    lVar26 = *(long *)(lVar27 + 0x80);
LAB_050b55e8:
    uVar1 = uVar25 + 1;
    unaff_x19[0xd] = uVar1;
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar26 + 0x18) <= uVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar3 = *(ushort *)(lVar26 + (long)(int)uVar25 * 2 + 0x20);
    if (uVar3 < 0xe) {
      if (uVar3 == 0) {
        if (*(uint *)(lVar27 + 0x88) == uVar25) {
          unaff_x19[0xd] = uVar25;
          lVar26 = FUN_0509f998(lVar27,1,*(undefined8 *)(unaff_x19 + 10),0);
          if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          auVar28 = FUN_042a4ca0(lVar26,0,*(undefined8 *)PTR_DAT_067794b0);
          _uStack0000000000000030 = auVar28;
          uVar20 = FUN_0467d204(&stack0x00000030,*(undefined8 *)PTR_DAT_06779478);
          auVar8 = _uStack0000000000000000;
          auVar9 = _uStack0000000000000010;
          auVar12 = _uStack0000000000000020;
          if ((uVar20 & 1) == 0) {
            *unaff_x19 = 0;
            *(undefined1 (*) [16])(unaff_x19 + 0x12) = _uStack0000000000000030;
            thunk_FUN_02dd37b4(unaff_x19 + 0x12,0);
            if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_032e676c(unaff_x19 + 2,&stack0x00000030);
            return;
          }
          goto LAB_050b5898;
        }
      }
      else if (uVar3 == 10) {
        *(uint *)(lVar27 + 0x8c) = uVar25;
        FUN_050a4fd4(lVar27,0);
        uVar1 = *(uint *)(lVar27 + 0x8c);
        unaff_x19[0xd] = uVar1;
      }
      else if (uVar3 == 0xd) break;
LAB_050b5678:
      uVar25 = uVar1;
      lVar26 = *(long *)(lVar27 + 0x80);
      goto LAB_050b55e8;
    }
    if ((uVar3 == 0x22) || (uVar3 == 0x27)) {
      if (uVar3 == *(ushort *)(unaff_x19 + 0xc)) {
        FUN_050a605c(lVar27,uVar25,unaff_x19[0xe],unaff_x19[0xf],0);
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_04f2db0c(unaff_x19 + 2,0);
        return;
      }
      goto LAB_050b5678;
    }
    if (uVar3 != 0x5c) goto LAB_050b5678;
    *(uint *)(lVar27 + 0x8c) = uVar1;
    lVar26 = FUN_0509fcfc(lVar27,0,1,*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar28 = FUN_042a16bc(lVar26,0,*(undefined8 *)puVar18);
    _uStack0000000000000020 = auVar28;
    uVar20 = FUN_0467cf10(&stack0x00000020,*(undefined8 *)puVar17);
    auVar5 = _uStack0000000000000030;
    auVar6 = _uStack0000000000000000;
    auVar7 = _uStack0000000000000010;
    if ((uVar20 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _uStack0000000000000020;
      thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
      if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e6294(unaff_x19 + 2,&stack0x00000020);
      return;
    }
LAB_050b5718:
    _uStack0000000000000030 = auVar5;
    _uStack0000000000000000 = auVar6;
    _uStack0000000000000010 = auVar7;
    uVar20 = FUN_0467cf5c(&stack0x00000020,*unaff_x22);
    if ((uVar20 & 1) == 0) {
      lVar26 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar21 = FUN_04f8e414(0);
      in_stack_00000048 = *(undefined2 *)(unaff_x19 + 0xc);
      uVar22 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x88),&stack0x00000048);
      uVar23 = thunk_FUN_02dc61f4(PTR_DAT_0677e258);
      uVar21 = FUN_050f0ec0(uVar23,uVar21,uVar22,0);
      uVar21 = FUN_05095eec(lVar27,uVar21,0);
      uVar22 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar21,uVar22);
    }
    uVar25 = unaff_x19[0xd];
    unaff_x19[0x10] = uVar25 - 1;
    if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar26 = *(long *)(lVar27 + 0x80);
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar26 + 0x18) <= uVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uStack000000000000004c = *(ushort *)(lVar26 + (long)(int)uVar25 * 2 + 0x20);
    iVar19 = uVar25 + 1;
    unaff_x19[0xd] = iVar19;
    if (uStack000000000000004c < 0x5d) {
      if (uStack000000000000004c < 0x28) {
        if ((uStack000000000000004c != 0x22) && (uStack000000000000004c != 0x27)) {
switchD_050b57e4_caseD_6f:
          *(int *)(lVar27 + 0x8c) = iVar19;
          lVar26 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar21 = FUN_04f8e414(0);
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar22 = FUN_04f73618(&stack0x0000004c,0);
          uVar23 = thunk_FUN_02dc61f4(PTR_DAT_06765050);
          uVar22 = FUN_04e83184(uVar23,uVar22,0);
          uVar23 = thunk_FUN_02dc61f4(PTR_DAT_0677e260);
          uVar21 = FUN_050f0ec0(uVar23,uVar21,uVar22,0);
          uVar21 = FUN_05095eec(lVar27,uVar21,0);
          uVar22 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar21,uVar22);
        }
      }
      else if (uStack000000000000004c != 0x2f) {
        if (uStack000000000000004c != 0x5c) goto switchD_050b57e4_caseD_6f;
        uVar24 = 0x5c;
        goto LAB_050b5968;
      }
      *(ushort *)(unaff_x19 + 0x11) = uStack000000000000004c;
    }
    else {
      if (uStack000000000000004c < 0x67) {
        if (uStack000000000000004c == 0x62) {
          uVar24 = 8;
        }
        else {
          if (uStack000000000000004c != 0x66) goto switchD_050b57e4_caseD_6f;
          uVar24 = 0xc;
        }
      }
      else {
        switch(uStack000000000000004c) {
        case 0x6e:
          uVar24 = 10;
          break;
        default:
          goto switchD_050b57e4_caseD_6f;
        case 0x72:
          uVar24 = 0xd;
          break;
        case 0x74:
          uVar24 = 9;
          break;
        case 0x75:
          *(int *)(lVar27 + 0x8c) = iVar19;
          lVar26 = FUN_0509ff1c(lVar27,*(undefined8 *)(unaff_x19 + 10),0);
          if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          auVar28 = FUN_042a31b8(lVar26,0,*(undefined8 *)PTR_DAT_0677e810);
          _uStack0000000000000010 = auVar28;
          uVar20 = FUN_0467d088(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e808);
          if ((uVar20 & 1) == 0) {
            *unaff_x19 = 2;
            *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _uStack0000000000000010;
            thunk_FUN_02dd37b4(unaff_x19 + 0x1a,0);
            if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_032e6484(unaff_x19 + 2,&stack0x00000010);
            return;
          }
LAB_050b5914:
          uVar21 = FUN_0467d0d4(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e800);
          *(short *)(unaff_x19 + 0x11) = (short)uVar21;
          uVar20 = FUN_050f1b88(uVar21,0);
          if ((uVar20 & 1) == 0) {
            uVar20 = FUN_050f1b54(*(undefined2 *)(unaff_x19 + 0x11),0);
            if ((uVar20 & 1) != 0) {
              do {
                *(undefined1 *)(unaff_x19 + 0x1e) = 0;
                if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                lVar26 = FUN_0509fcfc(lVar27,2,1,*(undefined8 *)(unaff_x19 + 10),0);
                if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                auVar28 = FUN_042a16bc(lVar26,0,*(undefined8 *)puVar18);
                _uStack0000000000000020 = auVar28;
                uVar20 = FUN_0467cf10(&stack0x00000020,*(undefined8 *)puVar17);
                auVar28 = _uStack0000000000000010;
                auVar13 = _uStack0000000000000030;
                auVar15 = _uStack0000000000000000;
                if ((uVar20 & 1) == 0) {
                  *unaff_x19 = 3;
                  *(undefined1 (*) [16])(unaff_x19 + 0x16) = _uStack0000000000000020;
                  thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
                  if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_032e6294(unaff_x19 + 2,&stack0x00000020);
                  return;
                }
LAB_050b5e8c:
                _uStack0000000000000010 = auVar28;
                _uStack0000000000000030 = auVar13;
                _uStack0000000000000000 = auVar15;
                uVar20 = FUN_0467cf5c(&stack0x00000020,*unaff_x22);
                if ((uVar20 & 1) == 0) {
LAB_050b5fb0:
                  *(undefined2 *)(unaff_x19 + 0x11) = 0xfffd;
                }
                else {
                  if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  lVar26 = *(long *)(lVar27 + 0x80);
                  if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  uVar25 = *(uint *)(lVar27 + 0x8c);
                  if (*(uint *)(lVar26 + 0x18) <= uVar25) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60af0();
                  }
                  if (*(short *)(lVar26 + (long)(int)uVar25 * 2 + 0x20) != 0x5c) goto LAB_050b5fb0;
                  if (*(uint *)(lVar26 + 0x18) <= uVar25 + 1) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60af0();
                  }
                  if (*(short *)(lVar26 + (long)(int)(uVar25 + 1) * 2 + 0x20) != 0x75)
                  goto LAB_050b5fb0;
                  *(undefined2 *)((long)unaff_x19 + 0x7a) = *(undefined2 *)(unaff_x19 + 0x11);
                  *(uint *)(lVar27 + 0x8c) = uVar25 + 2;
                  lVar26 = FUN_0509ff1c(lVar27,*(undefined8 *)(unaff_x19 + 10),0);
                  if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  auVar28 = FUN_042a31b8(lVar26,0,*(undefined8 *)PTR_DAT_0677e810);
                  _uStack0000000000000010 = auVar28;
                  uVar20 = FUN_0467d088(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e808);
                  if ((uVar20 & 1) == 0) {
                    *unaff_x19 = 4;
                    *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _uStack0000000000000010;
                    thunk_FUN_02dd37b4(unaff_x19 + 0x1a,0);
                    if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    FUN_032e6484(unaff_x19 + 2,&stack0x00000010);
                    return;
                  }
LAB_050b5f3c:
                  uVar21 = FUN_0467d0d4(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e800);
                  *(short *)(unaff_x19 + 0x11) = (short)uVar21;
                  uVar20 = FUN_050f1b88(uVar21,0);
                  if ((uVar20 & 1) == 0) {
                    uVar20 = FUN_050f1b54(*(undefined2 *)(unaff_x19 + 0x11),0);
                    *(undefined2 *)((long)unaff_x19 + 0x7a) = 0xfffd;
                    if ((uVar20 & 1) != 0) {
                      *(undefined1 *)(unaff_x19 + 0x1e) = 1;
                    }
                  }
                  if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  FUN_050a240c(lVar27,0);
                  FUN_050a600c(lVar27,*(undefined2 *)((long)unaff_x19 + 0x7a),unaff_x19[0xf],
                               unaff_x19[0x10],0);
                  unaff_x19[0xf] = *(undefined4 *)(lVar27 + 0x8c);
                }
              } while (*(char *)(unaff_x19 + 0x1e) != '\0');
            }
          }
          else {
            *(undefined2 *)(unaff_x19 + 0x11) = 0xfffd;
          }
          if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          unaff_x19[0xd] = *(undefined4 *)(lVar27 + 0x8c);
          goto LAB_050b596c;
        }
      }
LAB_050b5968:
      *(undefined2 *)(unaff_x19 + 0x11) = uVar24;
    }
LAB_050b596c:
    FUN_050a240c(lVar27,0);
    FUN_050a600c(lVar27,*(undefined2 *)(unaff_x19 + 0x11),unaff_x19[0xf],unaff_x19[0x10],0);
    unaff_x19[0xf] = unaff_x19[0xd];
  } while( true );
  *(uint *)(lVar27 + 0x8c) = uVar25;
  lVar26 = FUN_0509fbfc(lVar27,1,*(undefined8 *)(unaff_x19 + 10),0);
  if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar28 = FUN_0507b064(lVar26,0,0);
  _uStack0000000000000000 = auVar28;
  uVar20 = FUN_04f2d31c();
  auVar10 = _uStack0000000000000030;
  auVar11 = _uStack0000000000000010;
  auVar14 = _uStack0000000000000020;
  if ((uVar20 & 1) == 0) {
    *unaff_x19 = 5;
    *(undefined1 (*) [16])(unaff_x19 + 0x20) = _uStack0000000000000000;
    thunk_FUN_02dd37b4(unaff_x19 + 0x20,0);
    if (*(int *)(*(long *)puVar16 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_032e89d4(unaff_x19 + 2);
    return;
  }
LAB_050b582c:
  _uStack0000000000000030 = auVar10;
  _uStack0000000000000010 = auVar11;
  _uStack0000000000000020 = auVar14;
  FUN_04f2d338();
  if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  unaff_x19[0xd] = *(undefined4 *)(lVar27 + 0x8c);
  goto LAB_050b55d8;
}


