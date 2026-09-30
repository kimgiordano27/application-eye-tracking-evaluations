/*
FUNCTION_NAME: OVREyeGaze$$OnDestroy
ENTRY_POINT: 050b55bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDestroy(void)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  uint uVar10;
  long lVar11;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined2 uStack0000000000000048;
  ushort uStack000000000000004c;
  
  uVar2 = *(undefined4 *)(unaff_x20 + 0x8c);
  unaff_x19[0xd] = uVar2;
  unaff_x19[0xe] = uVar2;
  unaff_x19[0xf] = uVar2;
  *(undefined4 *)(unaff_x20 + 0xa8) = 0;
LAB_050b55d8:
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar10 = unaff_x19[0xd];
  lVar11 = *(long *)(unaff_x20 + 0x80);
  do {
    uVar1 = uVar10 + 1;
    unaff_x19[0xd] = uVar1;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar3 = *(ushort *)(lVar11 + (long)(int)uVar10 * 2 + 0x20);
    if (uVar3 < 0xe) {
      if (uVar3 == 0) {
        if (*(uint *)(unaff_x20 + 0x88) == uVar10) {
          unaff_x19[0xd] = uVar10;
          lVar11 = FUN_0509f998();
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          auVar12 = FUN_042a4ca0(lVar11,0,*(undefined8 *)PTR_DAT_067794b0);
          _in_stack_00000030 = auVar12;
          uVar5 = FUN_0467d204(&stack0x00000030,*(undefined8 *)PTR_DAT_06779478);
          if ((uVar5 & 1) == 0) {
            *unaff_x19 = 0;
            *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
            thunk_FUN_02dd37b4(unaff_x19 + 0x12,0);
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_032e676c(unaff_x19 + 2,&stack0x00000030);
            return;
          }
          iVar4 = FUN_0467d250(&stack0x00000030,*(undefined8 *)PTR_DAT_06779470);
          if (iVar4 == 0) {
            if (unaff_x20 != 0) {
              *(undefined4 *)(unaff_x20 + 0x8c) = unaff_x19[0xd];
              lVar11 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar6 = FUN_04f8e414(0);
              uStack0000000000000048 = *(undefined2 *)(unaff_x19 + 0xc);
              uVar7 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x88),&stack0x00000048);
              uVar8 = thunk_FUN_02dc61f4(PTR_DAT_0677e258);
              FUN_050f0ec0(uVar8,uVar6,uVar7,0);
              uVar6 = FUN_05095eec();
              uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar6,uVar7);
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          goto LAB_050b55d8;
        }
      }
      else if (uVar3 == 10) {
        *(uint *)(unaff_x20 + 0x8c) = uVar10;
        FUN_050a4fd4();
        uVar1 = *(uint *)(unaff_x20 + 0x8c);
        unaff_x19[0xd] = uVar1;
      }
      else if (uVar3 == 0xd) goto LAB_050b57f0;
    }
    else if ((uVar3 == 0x22) || (uVar3 == 0x27)) {
      if (uVar3 == *(ushort *)(unaff_x19 + 0xc)) {
        FUN_050a605c();
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_04f2db0c(unaff_x19 + 2,0);
        return;
      }
    }
    else if (uVar3 == 0x5c) {
      *(uint *)(unaff_x20 + 0x8c) = uVar1;
      lVar11 = FUN_0509fcfc();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      auVar12 = FUN_042a16bc(lVar11,0,*unaff_x23);
      _in_stack_00000020 = auVar12;
      uVar5 = FUN_0467cf10(&stack0x00000020,*unaff_x24);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
        thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_032e6294(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      uVar5 = FUN_0467cf5c(&stack0x00000020,*unaff_x22);
      if ((uVar5 & 1) == 0) {
        lVar11 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = FUN_04f8e414(0);
        uStack0000000000000048 = *(undefined2 *)(unaff_x19 + 0xc);
        uVar7 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x88),&stack0x00000048);
        uVar8 = thunk_FUN_02dc61f4(PTR_DAT_0677e258);
        FUN_050f0ec0(uVar8,uVar6,uVar7,0);
        uVar6 = FUN_05095eec();
        uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar6,uVar7);
      }
      uVar10 = unaff_x19[0xd];
      unaff_x19[0x10] = uVar10 - 1;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar11 = *(long *)(unaff_x20 + 0x80);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      uStack000000000000004c = *(ushort *)(lVar11 + (long)(int)uVar10 * 2 + 0x20);
      iVar4 = uVar10 + 1;
      unaff_x19[0xd] = iVar4;
      if (uStack000000000000004c < 0x5d) {
        if (uStack000000000000004c < 0x28) {
          if ((uStack000000000000004c != 0x22) && (uStack000000000000004c != 0x27))
          goto switchD_050b57e4_caseD_6f;
        }
        else if (uStack000000000000004c != 0x2f) {
          if (uStack000000000000004c != 0x5c) goto switchD_050b57e4_caseD_6f;
          uVar9 = 0x5c;
          goto LAB_050b5968;
        }
        *(ushort *)(unaff_x19 + 0x11) = uStack000000000000004c;
        goto LAB_050b596c;
      }
      if (uStack000000000000004c < 0x67) {
        if (uStack000000000000004c == 0x62) {
          uVar9 = 8;
        }
        else {
          if (uStack000000000000004c != 0x66) goto switchD_050b57e4_caseD_6f;
          uVar9 = 0xc;
        }
      }
      else {
        switch(uStack000000000000004c) {
        case 0x6e:
          uVar9 = 10;
          break;
        default:
switchD_050b57e4_caseD_6f:
          *(int *)(unaff_x20 + 0x8c) = iVar4;
          lVar11 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_04f8e414(0);
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar7 = FUN_04f73618((long)&stack0x00000048 + 4,0);
          uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06765050);
          uVar7 = FUN_04e83184(uVar8,uVar7,0);
          uVar8 = thunk_FUN_02dc61f4(PTR_DAT_0677e260);
          FUN_050f0ec0(uVar8,uVar6,uVar7,0);
          uVar6 = FUN_05095eec();
          uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar6,uVar7);
        case 0x72:
          uVar9 = 0xd;
          break;
        case 0x74:
          uVar9 = 9;
          break;
        case 0x75:
          *(int *)(unaff_x20 + 0x8c) = iVar4;
          lVar11 = FUN_0509ff1c();
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          auVar12 = FUN_042a31b8(lVar11,0,*(undefined8 *)PTR_DAT_0677e810);
          _in_stack_00000010 = auVar12;
          uVar5 = FUN_0467d088(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e808);
          if ((uVar5 & 1) == 0) {
            *unaff_x19 = 2;
            *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
            thunk_FUN_02dd37b4(unaff_x19 + 0x1a,0);
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_032e6484(unaff_x19 + 2,&stack0x00000010);
            return;
          }
          uVar6 = FUN_0467d0d4(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e800);
          *(short *)(unaff_x19 + 0x11) = (short)uVar6;
          uVar5 = FUN_050f1b88(uVar6,0);
          if ((uVar5 & 1) != 0) {
            *(undefined2 *)(unaff_x19 + 0x11) = 0xfffd;
            goto LAB_050b5954;
          }
          uVar5 = FUN_050f1b54(*(undefined2 *)(unaff_x19 + 0x11),0);
          if ((uVar5 & 1) != 0) goto LAB_050b5e44;
          goto LAB_050b5954;
        }
      }
LAB_050b5968:
      *(undefined2 *)(unaff_x19 + 0x11) = uVar9;
      goto LAB_050b596c;
    }
    uVar10 = uVar1;
    lVar11 = *(long *)(unaff_x20 + 0x80);
  } while( true );
LAB_050b5e44:
  do {
    *(undefined1 *)(unaff_x19 + 0x1e) = 0;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar11 = FUN_0509fcfc();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar12 = FUN_042a16bc(lVar11,0,*unaff_x23);
    _in_stack_00000020 = auVar12;
    uVar5 = FUN_0467cf10(&stack0x00000020,*unaff_x24);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
      thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e6294(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    uVar5 = FUN_0467cf5c(&stack0x00000020,*unaff_x22);
    if ((uVar5 & 1) == 0) {
LAB_050b5fb0:
      *(undefined2 *)(unaff_x19 + 0x11) = 0xfffd;
    }
    else {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar11 = *(long *)(unaff_x20 + 0x80);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar10 = *(uint *)(unaff_x20 + 0x8c);
      if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      if (*(short *)(lVar11 + (long)(int)uVar10 * 2 + 0x20) != 0x5c) goto LAB_050b5fb0;
      if (*(uint *)(lVar11 + 0x18) <= uVar10 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      if (*(short *)(lVar11 + (long)(int)(uVar10 + 1) * 2 + 0x20) != 0x75) goto LAB_050b5fb0;
      *(undefined2 *)((long)unaff_x19 + 0x7a) = *(undefined2 *)(unaff_x19 + 0x11);
      *(uint *)(unaff_x20 + 0x8c) = uVar10 + 2;
      lVar11 = FUN_0509ff1c();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      auVar12 = FUN_042a31b8(lVar11,0,*(undefined8 *)PTR_DAT_0677e810);
      _in_stack_00000010 = auVar12;
      uVar5 = FUN_0467d088(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e808);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
        thunk_FUN_02dd37b4(unaff_x19 + 0x1a,0);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_032e6484(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      uVar6 = FUN_0467d0d4(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e800);
      *(short *)(unaff_x19 + 0x11) = (short)uVar6;
      uVar5 = FUN_050f1b88(uVar6,0);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_050f1b54(*(undefined2 *)(unaff_x19 + 0x11),0);
        *(undefined2 *)((long)unaff_x19 + 0x7a) = 0xfffd;
        if ((uVar5 & 1) != 0) {
          *(undefined1 *)(unaff_x19 + 0x1e) = 1;
        }
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_050a240c();
      FUN_050a600c();
      unaff_x19[0xf] = *(undefined4 *)(unaff_x20 + 0x8c);
    }
  } while (*(char *)(unaff_x19 + 0x1e) != '\0');
LAB_050b5954:
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  unaff_x19[0xd] = *(undefined4 *)(unaff_x20 + 0x8c);
LAB_050b596c:
  FUN_050a240c();
  FUN_050a600c();
  unaff_x19[0xf] = unaff_x19[0xd];
  goto LAB_050b55d8;
LAB_050b57f0:
  *(uint *)(unaff_x20 + 0x8c) = uVar10;
  lVar11 = FUN_0509fbfc();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar12 = FUN_0507b064(lVar11,0,0);
  uVar5 = FUN_04f2d31c();
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 5;
    *(undefined1 (*) [16])(unaff_x19 + 0x20) = auVar12;
    thunk_FUN_02dd37b4(unaff_x19 + 0x20,0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_032e89d4(unaff_x19 + 2);
    return;
  }
  FUN_04f2d338();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  unaff_x19[0xd] = *(undefined4 *)(unaff_x20 + 0x8c);
  goto LAB_050b55d8;
}


