/*
FUNCTION_NAME: OVREyeGaze$$Update
ENTRY_POINT: 050b55c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Update(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  uint uVar9;
  long lVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined2 uStack0000000000000048;
  ushort uStack000000000000004c;
  
  *(undefined4 *)(unaff_x20 + 0xa8) = 0;
LAB_050b55d8:
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar9 = unaff_x19[0xd];
  lVar10 = *(long *)(unaff_x20 + 0x80);
  do {
    uVar1 = uVar9 + 1;
    unaff_x19[0xd] = uVar1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar2 = *(ushort *)(lVar10 + (long)(int)uVar9 * 2 + 0x20);
    if (uVar2 < 0xe) {
      if (uVar2 == 0) {
        if (*(uint *)(unaff_x20 + 0x88) == uVar9) {
          unaff_x19[0xd] = uVar9;
          lVar10 = FUN_0509f998();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          auVar11 = FUN_042a4ca0(lVar10,0,*(undefined8 *)PTR_DAT_067794b0);
          _in_stack_00000030 = auVar11;
          uVar4 = FUN_0467d204(&stack0x00000030,*(undefined8 *)PTR_DAT_06779478);
          if ((uVar4 & 1) == 0) {
            *unaff_x19 = 0;
            *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
            thunk_FUN_02dd37b4(unaff_x19 + 0x12,0);
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_032e676c(unaff_x19 + 2,&stack0x00000030);
            return;
          }
          iVar3 = FUN_0467d250(&stack0x00000030,*(undefined8 *)PTR_DAT_06779470);
          if (iVar3 == 0) {
            if (unaff_x20 != 0) {
              *(undefined4 *)(unaff_x20 + 0x8c) = unaff_x19[0xd];
              lVar10 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar5 = FUN_04f8e414(0);
              uStack0000000000000048 = *(undefined2 *)(unaff_x19 + 0xc);
              uVar6 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x88),&stack0x00000048);
              uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677e258);
              FUN_050f0ec0(uVar7,uVar5,uVar6,0);
              uVar5 = FUN_05095eec();
              uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar5,uVar6);
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          goto LAB_050b55d8;
        }
      }
      else if (uVar2 == 10) {
        *(uint *)(unaff_x20 + 0x8c) = uVar9;
        FUN_050a4fd4();
        uVar1 = *(uint *)(unaff_x20 + 0x8c);
        unaff_x19[0xd] = uVar1;
      }
      else if (uVar2 == 0xd) goto LAB_050b57f0;
    }
    else if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
      if (uVar2 == *(ushort *)(unaff_x19 + 0xc)) {
        FUN_050a605c();
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_04f2db0c(unaff_x19 + 2,0);
        return;
      }
    }
    else if (uVar2 == 0x5c) {
      *(uint *)(unaff_x20 + 0x8c) = uVar1;
      lVar10 = FUN_0509fcfc();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      auVar11 = FUN_042a16bc(lVar10,0,*unaff_x23);
      _in_stack_00000020 = auVar11;
      uVar4 = FUN_0467cf10(&stack0x00000020,*unaff_x24);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
        thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_032e6294(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      uVar4 = FUN_0467cf5c(&stack0x00000020,*unaff_x22);
      if ((uVar4 & 1) == 0) {
        lVar10 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_04f8e414(0);
        uStack0000000000000048 = *(undefined2 *)(unaff_x19 + 0xc);
        uVar6 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x88),&stack0x00000048);
        uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677e258);
        FUN_050f0ec0(uVar7,uVar5,uVar6,0);
        uVar5 = FUN_05095eec();
        uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar5,uVar6);
      }
      uVar9 = unaff_x19[0xd];
      unaff_x19[0x10] = uVar9 - 1;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar10 = *(long *)(unaff_x20 + 0x80);
                    /* try { // try from 050b573c to 051b5777 has its CatchHandler @ 050b573c
                       catch() { ... } // from try @ 050b573c with catch @ 050b573c
                       catch() { ... } // from try @ 050b57a4 with catch @ 050b573c
                       catch() { ... } // from try @ 050b57e0 with catch @ 050b573c
                       catch() { ... } // from try @ 050b5824 with catch @ 050b573c */
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      uStack000000000000004c = *(ushort *)(lVar10 + (long)(int)uVar9 * 2 + 0x20);
      iVar3 = uVar9 + 1;
      unaff_x19[0xd] = iVar3;
      if (uStack000000000000004c < 0x5d) {
        if (uStack000000000000004c < 0x28) {
                    /* try { // try from 050b5778 to 051b5783 has its CatchHandler @ 050b57e0 */
          if ((uStack000000000000004c != 0x22) && (uStack000000000000004c != 0x27))
          goto switchD_050b57e4_caseD_6f;
        }
        else {
                    /* try { // try from 050b57a4 to 051b57db has its CatchHandler @ 050b573c */
          if (uStack000000000000004c != 0x2f) {
            if (uStack000000000000004c != 0x5c) goto switchD_050b57e4_caseD_6f;
            uVar8 = 0x5c;
            goto LAB_050b5968;
          }
        }
        *(ushort *)(unaff_x19 + 0x11) = uStack000000000000004c;
        goto LAB_050b596c;
      }
      if (uStack000000000000004c < 0x67) {
        if (uStack000000000000004c == 0x62) {
          uVar8 = 8;
        }
        else {
                    /* try { // try from 050b5798 to 051b57a3 has its CatchHandler @ 050b57e4 */
          if (uStack000000000000004c != 0x66) goto switchD_050b57e4_caseD_6f;
          uVar8 = 0xc;
        }
      }
      else {
        switch(uStack000000000000004c) {
        case 0x6e:
          uVar8 = 10;
          break;
        default:
switchD_050b57e4_caseD_6f:
          *(int *)(unaff_x20 + 0x8c) = iVar3;
          lVar10 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = FUN_04f8e414(0);
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_04f73618((long)&stack0x00000048 + 4,0);
          uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06765050);
          uVar6 = FUN_04e83184(uVar7,uVar6,0);
          uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677e260);
          FUN_050f0ec0(uVar7,uVar5,uVar6,0);
          uVar5 = FUN_05095eec();
          uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677e818);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar5,uVar6);
        case 0x72:
          uVar8 = 0xd;
          break;
        case 0x74:
          uVar8 = 9;
          break;
        case 0x75:
          *(int *)(unaff_x20 + 0x8c) = iVar3;
          lVar10 = FUN_0509ff1c();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          auVar11 = FUN_042a31b8(lVar10,0,*(undefined8 *)PTR_DAT_0677e810);
          _in_stack_00000010 = auVar11;
          uVar4 = FUN_0467d088(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e808);
          if ((uVar4 & 1) == 0) {
            *unaff_x19 = 2;
            *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
            thunk_FUN_02dd37b4(unaff_x19 + 0x1a,0);
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_032e6484(unaff_x19 + 2,&stack0x00000010);
            return;
          }
          uVar5 = FUN_0467d0d4(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e800);
          *(short *)(unaff_x19 + 0x11) = (short)uVar5;
          uVar4 = FUN_050f1b88(uVar5,0);
          if ((uVar4 & 1) != 0) {
            *(undefined2 *)(unaff_x19 + 0x11) = 0xfffd;
            goto LAB_050b5954;
          }
          uVar4 = FUN_050f1b54(*(undefined2 *)(unaff_x19 + 0x11),0);
          if ((uVar4 & 1) != 0) goto LAB_050b5e44;
          goto LAB_050b5954;
        }
      }
LAB_050b5968:
      *(undefined2 *)(unaff_x19 + 0x11) = uVar8;
      goto LAB_050b596c;
    }
    uVar9 = uVar1;
    lVar10 = *(long *)(unaff_x20 + 0x80);
  } while( true );
LAB_050b5e44:
  do {
    *(undefined1 *)(unaff_x19 + 0x1e) = 0;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar10 = FUN_0509fcfc();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar11 = FUN_042a16bc(lVar10,0,*unaff_x23);
    _in_stack_00000020 = auVar11;
    uVar4 = FUN_0467cf10(&stack0x00000020,*unaff_x24);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
      thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e6294(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    uVar4 = FUN_0467cf5c(&stack0x00000020,*unaff_x22);
    if ((uVar4 & 1) == 0) {
LAB_050b5fb0:
      *(undefined2 *)(unaff_x19 + 0x11) = 0xfffd;
    }
    else {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar10 = *(long *)(unaff_x20 + 0x80);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar9 = *(uint *)(unaff_x20 + 0x8c);
      if (*(uint *)(lVar10 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      if (*(short *)(lVar10 + (long)(int)uVar9 * 2 + 0x20) != 0x5c) goto LAB_050b5fb0;
      if (*(uint *)(lVar10 + 0x18) <= uVar9 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      if (*(short *)(lVar10 + (long)(int)(uVar9 + 1) * 2 + 0x20) != 0x75) goto LAB_050b5fb0;
      *(undefined2 *)((long)unaff_x19 + 0x7a) = *(undefined2 *)(unaff_x19 + 0x11);
      *(uint *)(unaff_x20 + 0x8c) = uVar9 + 2;
      lVar10 = FUN_0509ff1c();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      auVar11 = FUN_042a31b8(lVar10,0,*(undefined8 *)PTR_DAT_0677e810);
      _in_stack_00000010 = auVar11;
      uVar4 = FUN_0467d088(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e808);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
        thunk_FUN_02dd37b4(unaff_x19 + 0x1a,0);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_032e6484(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      uVar5 = FUN_0467d0d4(&stack0x00000010,*(undefined8 *)PTR_DAT_0677e800);
      *(short *)(unaff_x19 + 0x11) = (short)uVar5;
      uVar4 = FUN_050f1b88(uVar5,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_050f1b54(*(undefined2 *)(unaff_x19 + 0x11),0);
        *(undefined2 *)((long)unaff_x19 + 0x7a) = 0xfffd;
        if ((uVar4 & 1) != 0) {
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
  *(uint *)(unaff_x20 + 0x8c) = uVar9;
  lVar10 = FUN_0509fbfc();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar11 = FUN_0507b064(lVar10,0,0);
  uVar4 = FUN_04f2d31c();
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 5;
    *(undefined1 (*) [16])(unaff_x19 + 0x20) = auVar11;
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


