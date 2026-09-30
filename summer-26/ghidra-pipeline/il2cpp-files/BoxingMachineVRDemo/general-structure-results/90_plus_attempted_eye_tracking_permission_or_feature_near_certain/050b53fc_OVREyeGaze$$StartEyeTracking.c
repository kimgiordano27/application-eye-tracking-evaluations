/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 050b53fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_21;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking(long param_1)

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
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined2 uVar22;
  uint uVar23;
  long lVar24;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar25;
  undefined1 auVar26 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined2 in_stack_00000048;
  ushort uStack000000000000004c;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x7d8));
  FUN_02d6084c(PTR_DAT_0677e7e0);
  FUN_02d6084c(PTR_DAT_0677e7e8);
  FUN_02d6084c(PTR_DAT_0677e7f0);
  FUN_02d6084c(PTR_DAT_067609b8);
  FUN_02d6084c(PTR_DAT_0676aa88);
  FUN_02d6084c(PTR_DAT_06779468);
  FUN_02d6084c(PTR_DAT_0677e7f8);
  FUN_02d6084c(PTR_DAT_0676aa90);
  FUN_02d6084c(PTR_DAT_06779470);
  FUN_02d6084c(PTR_DAT_0677e800);
  FUN_02d6084c(PTR_DAT_0676aa98);
  FUN_02d6084c(PTR_DAT_0677e808);
  FUN_02d6084c(PTR_DAT_06779478);
  FUN_02d6084c(PTR_DAT_0677e810);
  FUN_02d6084c(PTR_DAT_0676aaa0);
  FUN_02d6084c(PTR_DAT_067794b0);
  *(undefined1 *)(unaff_x20 + 0x8b0) = 1;
  puVar16 = PTR_DAT_0676aaa0;
  puVar15 = PTR_DAT_0676aa98;
  puVar14 = PTR_DAT_0676aa90;
  puVar13 = PTR_DAT_067609b8;
  uStack000000000000004c = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  auVar11 = ZEXT816(0);
  auVar8 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  auVar12 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  auVar9 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  auVar26 = ZEXT816(0);
  lVar25 = *(long *)(unaff_x19 + 8);
  _in_stack_00000020 = auVar4;
  switch(*unaff_x19) {
  case 0:
    _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    *unaff_x19 = 0xffffffff;
    break;
  case 1:
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
    goto LAB_050b5718;
  case 2:
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x1a);
    *(undefined8 *)(unaff_x19 + 0x1a) = 0;
    *(undefined8 *)(unaff_x19 + 0x1c) = 0;
    *unaff_x19 = 0xffffffff;
    _in_stack_00000030 = ZEXT816(0);
    goto LAB_050b5914;
  case 3:
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
    goto LAB_050b5e8c;
  case 4:
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x1a);
    *(undefined8 *)(unaff_x19 + 0x1a) = 0;
    *(undefined8 *)(unaff_x19 + 0x1c) = 0;
    *unaff_x19 = 0xffffffff;
    _in_stack_00000030 = ZEXT816(0);
    goto LAB_050b5f3c;
  case 5:
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x22) = 0;
    *unaff_x19 = 0xffffffff;
    goto LAB_050b582c;
  default:
    if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar2 = *(undefined4 *)(lVar25 + 0x8c);
    unaff_x19[0xd] = uVar2;
    unaff_x19[0xe] = uVar2;
    unaff_x19[0xf] = uVar2;
    *(undefined4 *)(lVar25 + 0xa8) = 0;
    _in_stack_00000030 = ZEXT816(0);
    _in_stack_00000010 = ZEXT816(0);
    goto LAB_050b55d8;
  }
LAB_050b5898:
  _in_stack_00000010 = auVar7;
  _in_stack_00000020 = auVar10;
  iVar17 = FUN_0467d250(&stack0x00000030,*(undefined8 *)PTR_DAT_06779470);
  if (iVar17 == 0) {
    if (lVar25 != 0) {
      *(undefined4 *)(lVar25 + 0x8c) = unaff_x19[0xd];
      lVar24 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar19 = FUN_04f8e414(0);
      in_stack_00000048 = *(undefined2 *)(unaff_x19 + 0xc);
      uVar20 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x88),&stack0x00000048);
      uVar21 = thunk_FUN_02dc61f4(PTR_DAT_0677e258);
      uVar19 = FUN_050f0ec0(uVar21,uVar19,uVar20,0);
      uVar19 = FUN_05095eec(lVar25,uVar19,0);
      uVar20 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar19,uVar20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
LAB_050b55d8:
  do {
    if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar23 = unaff_x19[0xd];
    lVar24 = *(long *)(lVar25 + 0x80);
LAB_050b55e8:
    uVar1 = uVar23 + 1;
    unaff_x19[0xd] = uVar1;
    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar24 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar3 = *(ushort *)(lVar24 + (long)(int)uVar23 * 2 + 0x20);
    if (uVar3 < 0xe) {
      if (uVar3 == 0) {
        if (*(uint *)(lVar25 + 0x88) == uVar23) {
          unaff_x19[0xd] = uVar23;
          lVar24 = FUN_0509f998(lVar25,1,*(undefined8 *)(unaff_x19 + 10),0);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          auVar26 = FUN_042a4ca0(lVar24,0,*(undefined8 *)PTR_DAT_067794b0);
          _in_stack_00000030 = auVar26;
          uVar18 = FUN_0467d204(&stack0x00000030,*(undefined8 *)PTR_DAT_06779478);
          auVar7 = _in_stack_00000010;
          auVar10 = _in_stack_00000020;
          if ((uVar18 & 1) == 0) {
            *unaff_x19 = 0;
            *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
            thunk_FUN_02dd37b4(unaff_x19 + 0x12,0);
            if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_032e676c(unaff_x19 + 2,&stack0x00000030);
            return;
          }
          goto LAB_050b5898;
        }
      }
      else if (uVar3 == 10) {
        *(uint *)(lVar25 + 0x8c) = uVar23;
        FUN_050a4fd4(lVar25,0);
        uVar1 = *(uint *)(lVar25 + 0x8c);
        unaff_x19[0xd] = uVar1;
      }
      else if (uVar3 == 0xd) break;
LAB_050b5678:
      uVar23 = uVar1;
      lVar24 = *(long *)(lVar25 + 0x80);
      goto LAB_050b55e8;
    }
    if ((uVar3 == 0x22) || (uVar3 == 0x27)) {
      if (uVar3 == *(ushort *)(unaff_x19 + 0xc)) {
        FUN_050a605c(lVar25,uVar23,unaff_x19[0xe],unaff_x19[0xf],0);
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_04f2db0c(unaff_x19 + 2,0);
        return;
      }
      goto LAB_050b5678;
    }
    if (uVar3 != 0x5c) goto LAB_050b5678;
    *(uint *)(lVar25 + 0x8c) = uVar1;
    lVar24 = FUN_0509fcfc(lVar25,0,1,*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar26 = FUN_042a16bc(lVar24,0,*(undefined8 *)puVar16);
    _in_stack_00000020 = auVar26;
    uVar18 = FUN_0467cf10(&stack0x00000020,*(undefined8 *)puVar15);
    auVar5 = _in_stack_00000030;
    auVar6 = _in_stack_00000010;
    if ((uVar18 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
      thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e6294(unaff_x19 + 2,&stack0x00000020);
      return;
    }
LAB_050b5718:
    _in_stack_00000030 = auVar5;
    _in_stack_00000010 = auVar6;
    uVar18 = FUN_0467cf5c(&stack0x00000020,*(undefined8 *)puVar14);
    if ((uVar18 & 1) == 0) {
      lVar24 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar19 = FUN_04f8e414(0);
      in_stack_00000048 = *(undefined2 *)(unaff_x19 + 0xc);
      uVar20 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x88),&stack0x00000048);
      uVar21 = thunk_FUN_02dc61f4(PTR_DAT_0677e258);
      uVar19 = FUN_050f0ec0(uVar21,uVar19,uVar20,0);
      uVar19 = FUN_05095eec(lVar25,uVar19,0);
      uVar20 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar19,uVar20);
    }
    uVar23 = unaff_x19[0xd];
    unaff_x19[0x10] = uVar23 - 1;
    if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar24 = *(long *)(lVar25 + 0x80);
    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar24 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uStack000000000000004c = *(ushort *)(lVar24 + (long)(int)uVar23 * 2 + 0x20);
    iVar17 = uVar23 + 1;
    unaff_x19[0xd] = iVar17;
    if (uStack000000000000004c < 0x5d) {
      if (uStack000000000000004c < 0x28) {
        if ((uStack000000000000004c != 0x22) && (uStack000000000000004c != 0x27)) {
switchD_050b57e4_caseD_6f:
          *(int *)(lVar25 + 0x8c) = iVar17;
          lVar24 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
          if (*(int *)(lVar24 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar19 = FUN_04f8e414(0);
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar20 = FUN_04f73618(&stack0x0000004c,0);
          uVar21 = thunk_FUN_02dc61f4(PTR_DAT_06765050);
          uVar20 = FUN_04e83184(uVar21,uVar20,0);
          uVar21 = thunk_FUN_02dc61f4(PTR_DAT_0677e260);
          uVar19 = FUN_050f0ec0(uVar21,uVar19,uVar20,0);
          uVar19 = FUN_05095eec(lVar25,uVar19,0);
          uVar20 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar19,uVar20);
        }
      }
      else if (uStack000000000000004c != 0x2f) {
        if (uStack000000000000004c != 0x5c) goto switchD_050b57e4_caseD_6f;
        uVar22 = 0x5c;
        goto LAB_050b5968;
      }
      *(ushort *)(unaff_x19 + 0x11) = uStack000000000000004c;
    }
    else {
      if (uStack000000000000004c < 0x67) {
        if (uStack000000000000004c == 0x62) {
          uVar22 = 8;
        }
        else {
          if (uStack000000000000004c != 0x66) goto switchD_050b57e4_caseD_6f;
          uVar22 = 0xc;
        }
      }
      else {
        switch(uStack000000000000004c) {
        case 0x6e:
          uVar22 = 10;
          break;
        default:
          goto switchD_050b57e4_caseD_6f;
        case 0x72:
          uVar22 = 0xd;
          break;
        case 0x74:
          uVar22 = 9;
          break;
        case 0x75:
          *(int *)(lVar25 + 0x8c) = iVar17;
          lVar24 = FUN_0509ff1c(lVar25,*(undefined8 *)(unaff_x19 + 10),0);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          auVar26 = FUN_042a31b8(lVar24,0,*(undefined8 *)PTR_DAT_0677e810);
          _in_stack_00000010 = auVar26;
          uVar18 = FUN_0467d088(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e808);
          if ((uVar18 & 1) == 0) {
            *unaff_x19 = 2;
            *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
            thunk_FUN_02dd37b4(unaff_x19 + 0x1a,0);
            if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_032e6484(unaff_x19 + 2,&stack0x00000010);
            return;
          }
LAB_050b5914:
          uVar19 = FUN_0467d0d4(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e800);
          *(short *)(unaff_x19 + 0x11) = (short)uVar19;
          uVar18 = FUN_050f1b88(uVar19,0);
          if ((uVar18 & 1) == 0) {
            uVar18 = FUN_050f1b54(*(undefined2 *)(unaff_x19 + 0x11),0);
            if ((uVar18 & 1) != 0) {
              do {
                *(undefined1 *)(unaff_x19 + 0x1e) = 0;
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                lVar24 = FUN_0509fcfc(lVar25,2,1,*(undefined8 *)(unaff_x19 + 10),0);
                if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                auVar26 = FUN_042a16bc(lVar24,0,*(undefined8 *)puVar16);
                _in_stack_00000020 = auVar26;
                uVar18 = FUN_0467cf10(&stack0x00000020,*(undefined8 *)puVar15);
                auVar26 = _in_stack_00000010;
                auVar11 = _in_stack_00000030;
                if ((uVar18 & 1) == 0) {
                  *unaff_x19 = 3;
                  *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
                  thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
                  if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_032e6294(unaff_x19 + 2,&stack0x00000020);
                  return;
                }
LAB_050b5e8c:
                _in_stack_00000010 = auVar26;
                _in_stack_00000030 = auVar11;
                uVar18 = FUN_0467cf5c(&stack0x00000020,*(undefined8 *)puVar14);
                if ((uVar18 & 1) == 0) {
LAB_050b5fb0:
                  *(undefined2 *)(unaff_x19 + 0x11) = 0xfffd;
                }
                else {
                  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  lVar24 = *(long *)(lVar25 + 0x80);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  uVar23 = *(uint *)(lVar25 + 0x8c);
                  if (*(uint *)(lVar24 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60af0();
                  }
                  if (*(short *)(lVar24 + (long)(int)uVar23 * 2 + 0x20) != 0x5c) goto LAB_050b5fb0;
                  if (*(uint *)(lVar24 + 0x18) <= uVar23 + 1) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60af0();
                  }
                  if (*(short *)(lVar24 + (long)(int)(uVar23 + 1) * 2 + 0x20) != 0x75)
                  goto LAB_050b5fb0;
                  *(undefined2 *)((long)unaff_x19 + 0x7a) = *(undefined2 *)(unaff_x19 + 0x11);
                  *(uint *)(lVar25 + 0x8c) = uVar23 + 2;
                  lVar24 = FUN_0509ff1c(lVar25,*(undefined8 *)(unaff_x19 + 10),0);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  auVar26 = FUN_042a31b8(lVar24,0,*(undefined8 *)PTR_DAT_0677e810);
                  _in_stack_00000010 = auVar26;
                  uVar18 = FUN_0467d088(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e808);
                  if ((uVar18 & 1) == 0) {
                    *unaff_x19 = 4;
                    *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
                    thunk_FUN_02dd37b4(unaff_x19 + 0x1a,0);
                    if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    FUN_032e6484(unaff_x19 + 2,&stack0x00000010);
                    return;
                  }
LAB_050b5f3c:
                  uVar19 = FUN_0467d0d4(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e800);
                  *(short *)(unaff_x19 + 0x11) = (short)uVar19;
                  uVar18 = FUN_050f1b88(uVar19,0);
                  if ((uVar18 & 1) == 0) {
                    uVar18 = FUN_050f1b54(*(undefined2 *)(unaff_x19 + 0x11),0);
                    *(undefined2 *)((long)unaff_x19 + 0x7a) = 0xfffd;
                    if ((uVar18 & 1) != 0) {
                      *(undefined1 *)(unaff_x19 + 0x1e) = 1;
                    }
                  }
                  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  FUN_050a240c(lVar25,0);
                  FUN_050a600c(lVar25,*(undefined2 *)((long)unaff_x19 + 0x7a),unaff_x19[0xf],
                               unaff_x19[0x10],0);
                  unaff_x19[0xf] = *(undefined4 *)(lVar25 + 0x8c);
                }
              } while (*(char *)(unaff_x19 + 0x1e) != '\0');
            }
          }
          else {
            *(undefined2 *)(unaff_x19 + 0x11) = 0xfffd;
          }
          if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          unaff_x19[0xd] = *(undefined4 *)(lVar25 + 0x8c);
          goto LAB_050b596c;
        }
      }
LAB_050b5968:
      *(undefined2 *)(unaff_x19 + 0x11) = uVar22;
    }
LAB_050b596c:
    FUN_050a240c(lVar25,0);
    FUN_050a600c(lVar25,*(undefined2 *)(unaff_x19 + 0x11),unaff_x19[0xf],unaff_x19[0x10],0);
    unaff_x19[0xf] = unaff_x19[0xd];
  } while( true );
  *(uint *)(lVar25 + 0x8c) = uVar23;
  lVar24 = FUN_0509fbfc(lVar25,1,*(undefined8 *)(unaff_x19 + 10),0);
  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar26 = FUN_0507b064(lVar24,0,0);
  uVar18 = FUN_04f2d31c();
  auVar8 = _in_stack_00000030;
  auVar9 = _in_stack_00000010;
  auVar12 = _in_stack_00000020;
  if ((uVar18 & 1) == 0) {
    *unaff_x19 = 5;
    *(undefined1 (*) [16])(unaff_x19 + 0x20) = auVar26;
    thunk_FUN_02dd37b4(unaff_x19 + 0x20,0);
    if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_032e89d4(unaff_x19 + 2);
    return;
  }
LAB_050b582c:
  _in_stack_00000030 = auVar8;
  _in_stack_00000010 = auVar9;
  _in_stack_00000020 = auVar12;
  FUN_04f2d338();
  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  unaff_x19[0xd] = *(undefined4 *)(lVar25 + 0x8c);
  goto LAB_050b55d8;
}


