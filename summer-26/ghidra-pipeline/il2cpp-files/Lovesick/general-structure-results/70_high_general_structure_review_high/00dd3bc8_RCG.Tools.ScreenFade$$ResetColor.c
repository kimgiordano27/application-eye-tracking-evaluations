/*
FUNCTION_NAME: RCG.Tools.ScreenFade$$ResetColor
ENTRY_POINT: 00dd3bc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


bool RCG_Tools_ScreenFade__ResetColor(void)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  bool bVar10;
  uint uVar11;
  void *__s;
  undefined1 uVar12;
  uint in_w8;
  int iVar13;
  undefined8 uVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong uVar22;
  ulong __n;
  ulong uVar23;
  ulong uVar24;
  
  lVar19 = unaff_x19[5];
  if (*(int *)((long)unaff_x19 + 0xac) != 0) {
    in_w8 = in_w8 | 0x20;
  }
  unaff_x19[5] = lVar19 + 1;
  *(char *)(unaff_x19[2] + lVar19) = (char)(in_w8 >> 8);
  lVar19 = unaff_x19[5];
  unaff_x19[5] = lVar19 + 1;
  *(byte *)(unaff_x19[2] + lVar19) =
       ((byte)in_w8 + (char)(in_w8 / 0x1f) * -0x1f | (byte)in_w8) ^ 0x1f;
  if (*(int *)((long)unaff_x19 + 0xac) != 0) {
    uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar19 = unaff_x19[5];
    unaff_x19[5] = lVar19 + 1;
    *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 0x18);
    lVar19 = unaff_x19[5];
    unaff_x19[5] = lVar19 + 1;
    *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 0x10);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar19 = unaff_x19[5];
    unaff_x19[5] = lVar19 + 1;
    *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 8);
    lVar19 = unaff_x19[5];
    unaff_x19[5] = lVar19 + 1;
    *(char *)(unaff_x19[2] + lVar19) = (char)uVar14;
  }
  uVar14 = FUN_00dd1898(0,0,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
  *(undefined4 *)(unaff_x19 + 1) = 0x71;
  FUN_00dd4a98();
  if (unaff_x19[5] != 0) goto LAB_00dd4a88;
  iVar13 = (int)unaff_x19[1];
  if (iVar13 == 0x39) {
    uVar14 = FUN_00dd1550(0,0,0);
    *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
    lVar19 = unaff_x19[5];
    unaff_x19[5] = lVar19 + 1;
    *(undefined1 *)(unaff_x19[2] + lVar19) = 0x1f;
    lVar19 = unaff_x19[5];
    unaff_x19[5] = lVar19 + 1;
    *(undefined1 *)(unaff_x19[2] + lVar19) = 0x8b;
    lVar19 = unaff_x19[5];
    unaff_x19[5] = lVar19 + 1;
    *(undefined1 *)(unaff_x19[2] + lVar19) = 8;
    piVar15 = (int *)unaff_x19[7];
    if (piVar15 == (int *)0x0) {
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(undefined1 *)(unaff_x19[2] + lVar19) = 0;
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(undefined1 *)(unaff_x19[2] + lVar19) = 0;
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(undefined1 *)(unaff_x19[2] + lVar19) = 0;
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(undefined1 *)(unaff_x19[2] + lVar19) = 0;
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(undefined1 *)(unaff_x19[2] + lVar19) = 0;
      if (*(int *)((long)unaff_x19 + 0xc4) == 9) {
        uVar12 = 2;
      }
      else {
        uVar12 = 4;
        if ((int)unaff_x19[0x19] < 2 && 1 < *(int *)((long)unaff_x19 + 0xc4)) {
          uVar12 = 0;
        }
      }
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(undefined1 *)(unaff_x19[2] + lVar19) = uVar12;
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(undefined1 *)(unaff_x19[2] + lVar19) = 3;
      *(undefined4 *)(unaff_x19 + 1) = 0x71;
      FUN_00dd4a98();
      if (unaff_x19[5] != 0) goto LAB_00dd4a88;
      iVar13 = (int)unaff_x19[1];
      goto LAB_00dd4018;
    }
    iVar13 = *piVar15;
    iVar3 = piVar15[0x11];
    lVar21 = unaff_x19[5];
    lVar17 = *(long *)(piVar15 + 6);
    lVar20 = *(long *)(piVar15 + 10);
    lVar19 = *(long *)(piVar15 + 0xe);
    unaff_x19[5] = lVar21 + 1;
    *(char *)(unaff_x19[2] + lVar21) =
         iVar13 != 0 | (iVar3 != 0) << 1 | (lVar17 != 0) << 2 | (lVar20 != 0) << 3 |
         (lVar19 != 0) << 4;
    lVar19 = unaff_x19[5];
    uVar14 = *(undefined8 *)(unaff_x19[7] + 8);
    unaff_x19[5] = lVar19 + 1;
    *(char *)(unaff_x19[2] + lVar19) = (char)uVar14;
    lVar19 = unaff_x19[5];
    uVar14 = *(undefined8 *)(unaff_x19[7] + 8);
    unaff_x19[5] = lVar19 + 1;
    *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 8);
    lVar19 = unaff_x19[5];
    uVar14 = *(undefined8 *)(unaff_x19[7] + 8);
    unaff_x19[5] = lVar19 + 1;
    *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 0x10);
    lVar19 = unaff_x19[5];
    uVar14 = *(undefined8 *)(unaff_x19[7] + 8);
    unaff_x19[5] = lVar19 + 1;
    *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 0x18);
    if (*(int *)((long)unaff_x19 + 0xc4) == 9) {
      uVar12 = 2;
    }
    else {
      uVar12 = 4;
      if ((int)unaff_x19[0x19] < 2 && 1 < *(int *)((long)unaff_x19 + 0xc4)) {
        uVar12 = 0;
      }
    }
    lVar19 = unaff_x19[5];
    unaff_x19[5] = lVar19 + 1;
    *(undefined1 *)(unaff_x19[2] + lVar19) = uVar12;
    lVar19 = unaff_x19[5];
    uVar4 = *(undefined4 *)(unaff_x19[7] + 0x14);
    unaff_x19[5] = lVar19 + 1;
    *(char *)(unaff_x19[2] + lVar19) = (char)uVar4;
    lVar19 = unaff_x19[7];
    if (*(long *)(lVar19 + 0x18) != 0) {
      lVar17 = unaff_x19[5];
      uVar4 = *(undefined4 *)(lVar19 + 0x20);
      unaff_x19[5] = lVar17 + 1;
      *(char *)(unaff_x19[2] + lVar17) = (char)uVar4;
      lVar19 = unaff_x19[5];
      uVar4 = *(undefined4 *)(unaff_x19[7] + 0x20);
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)((uint)uVar4 >> 8);
      lVar19 = unaff_x19[7];
    }
    if (*(int *)(lVar19 + 0x44) != 0) {
      uVar14 = FUN_00dd1550(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2],(int)unaff_x19[5]);
      *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
    }
    unaff_x19[8] = 0;
    *(undefined4 *)(unaff_x19 + 1) = 0x45;
LAB_00dd4034:
    lVar19 = *(long *)(unaff_x19[7] + 0x18);
    if (lVar19 != 0) {
      lVar17 = unaff_x19[8];
      uVar23 = unaff_x19[5];
      uVar16 = unaff_x19[3];
      uVar22 = (ulong)((uint)*(ushort *)(unaff_x19[7] + 0x20) - (int)lVar17);
      if (uVar16 < uVar23 + uVar22) {
        while( true ) {
          uVar24 = uVar16 - uVar23;
          __n = uVar24 & 0xffffffff;
          memcpy((void *)(unaff_x19[2] + uVar23),(void *)(lVar19 + lVar17),__n);
          uVar16 = unaff_x19[3];
          unaff_x19[5] = uVar16;
          if ((uVar23 < uVar16) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
            uVar14 = FUN_00dd1550(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar23,
                                  (int)uVar16 - (int)uVar23);
            *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
          }
          unaff_x19[8] = unaff_x19[8] + __n;
          FUN_00dd4a98();
          if (unaff_x19[5] != 0) goto LAB_00dd4a88;
          uVar16 = unaff_x19[3];
          uVar22 = (ulong)(uint)((int)uVar22 - (int)uVar24);
          if (uVar22 <= uVar16) break;
          lVar17 = unaff_x19[8];
          uVar23 = 0;
          lVar19 = *(long *)(unaff_x19[7] + 0x18);
        }
        lVar17 = unaff_x19[8];
        uVar23 = 0;
        lVar19 = *(long *)(unaff_x19[7] + 0x18);
      }
      memcpy((void *)(unaff_x19[2] + uVar23),(void *)(lVar19 + lVar17),uVar22);
      uVar22 = unaff_x19[5] + uVar22;
      unaff_x19[5] = uVar22;
      if ((uVar23 < uVar22) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
        uVar14 = FUN_00dd1550(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar23,
                              (int)uVar22 - (int)uVar23);
        *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
      }
      unaff_x19[8] = 0;
    }
    *(undefined4 *)(unaff_x19 + 1) = 0x49;
LAB_00dd4168:
    if (*(long *)(unaff_x19[7] + 0x28) != 0) {
      uVar22 = unaff_x19[5];
      uVar16 = uVar22;
      while( true ) {
        if (uVar16 == unaff_x19[3]) {
          if ((uVar22 < uVar16) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
            uVar14 = FUN_00dd1550(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar22,
                                  (int)uVar16 - (int)uVar22);
            *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
          }
          FUN_00dd4a98();
          if (unaff_x19[5] != 0) goto LAB_00dd4a88;
          uVar16 = 0;
          uVar22 = 0;
        }
        lVar19 = unaff_x19[8];
        lVar17 = *(long *)(unaff_x19[7] + 0x28);
        unaff_x19[8] = lVar19 + 1;
        cVar5 = *(char *)(lVar17 + lVar19);
        unaff_x19[5] = uVar16 + 1;
        *(char *)(unaff_x19[2] + uVar16) = cVar5;
        if (cVar5 == '\0') break;
        uVar16 = unaff_x19[5];
      }
      if ((*(int *)(unaff_x19[7] + 0x44) != 0) && (uVar22 < (ulong)unaff_x19[5])) {
        uVar14 = FUN_00dd1550(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar22,
                              (int)unaff_x19[5] - (int)uVar22);
        *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
      }
      unaff_x19[8] = 0;
    }
    *(undefined4 *)(unaff_x19 + 1) = 0x5b;
LAB_00dd4234:
    if (*(long *)(unaff_x19[7] + 0x38) != 0) {
      uVar22 = unaff_x19[5];
      uVar16 = uVar22;
      while( true ) {
        if (uVar16 == unaff_x19[3]) {
          if ((uVar22 < uVar16) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
            uVar14 = FUN_00dd1550(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar22,
                                  (int)uVar16 - (int)uVar22);
            *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
          }
          FUN_00dd4a98();
          if (unaff_x19[5] != 0) goto LAB_00dd4a88;
          uVar16 = 0;
          uVar22 = 0;
        }
        lVar19 = unaff_x19[8];
        lVar17 = *(long *)(unaff_x19[7] + 0x38);
        unaff_x19[8] = lVar19 + 1;
        cVar5 = *(char *)(lVar17 + lVar19);
        unaff_x19[5] = uVar16 + 1;
        *(char *)(unaff_x19[2] + uVar16) = cVar5;
        if (cVar5 == '\0') break;
        uVar16 = unaff_x19[5];
      }
      if ((*(int *)(unaff_x19[7] + 0x44) != 0) && (uVar22 < (ulong)unaff_x19[5])) {
        uVar14 = FUN_00dd1550(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar22,
                              (int)unaff_x19[5] - (int)uVar22);
        *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
      }
    }
    *(undefined4 *)(unaff_x19 + 1) = 0x67;
LAB_00dd42fc:
    if (*(int *)(unaff_x19[7] + 0x44) != 0) {
      lVar19 = unaff_x19[5];
      if ((ulong)unaff_x19[3] < lVar19 + 2U) {
        FUN_00dd4a98();
        lVar19 = 0;
        if (unaff_x19[5] != 0) goto LAB_00dd4a88;
      }
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)uVar14;
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 8);
      uVar14 = FUN_00dd1550(0,0,0);
      *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
    }
    *(undefined4 *)(unaff_x19 + 1) = 0x71;
    FUN_00dd4a98();
    if (unaff_x19[5] != 0) goto LAB_00dd4a88;
  }
  else {
LAB_00dd4018:
    if (0x5a < iVar13) {
      if (iVar13 == 0x5b) goto LAB_00dd4234;
      if (iVar13 != 0x67) goto LAB_00dd4388;
      goto LAB_00dd42fc;
    }
    if (iVar13 == 0x45) goto LAB_00dd4034;
    if (iVar13 == 0x49) goto LAB_00dd4168;
  }
LAB_00dd4388:
  puVar8 = Method_OVRRuntimeController_InputFocusLost__;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_Start<HttpWebRequest_<MyGetResponseAsync>d__243>__
  ;
  if (((*(int *)(unaff_x20 + 8) == 0) && (*(int *)((long)unaff_x19 + 0xb4) == 0)) &&
     ((unaff_w21 == 0 || ((int)unaff_x19[1] == 0x29a)))) goto LAB_00dd48c0;
  if (*(int *)((long)unaff_x19 + 0xc4) == 0) {
    uVar11 = FUN_00dd4b28();
LAB_00dd4828:
    if ((uVar11 | 1) == 3) {
      *(undefined4 *)(unaff_x19 + 1) = 0x29a;
    }
    if ((uVar11 & 0xfffffffd) != 0) {
      if (uVar11 != 1) goto LAB_00dd48c0;
      goto LAB_00dd484c;
    }
  }
  else if ((int)unaff_x19[0x19] == 3) {
    do {
      do {
        uVar11 = *(uint *)((long)unaff_x19 + 0xb4);
        if (uVar11 < 0x103) {
          FUN_00dd37dc();
          uVar11 = *(uint *)((long)unaff_x19 + 0xb4);
          if ((unaff_w21 == 0) && (uVar11 < 0x103)) goto LAB_00dd4a78;
          if (uVar11 == 0) goto LAB_00dd47a0;
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
          if (2 < uVar11) goto LAB_00dd4514;
          uVar22 = (ulong)*(uint *)((long)unaff_x19 + 0xac);
LAB_00dd46b4:
          uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
          bVar6 = *(byte *)(unaff_x19[0xc] + uVar22);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar11) = 0;
          uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar11) = 0;
          uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
          *(byte *)(unaff_x19[0x2e0] + (ulong)uVar11) = bVar6;
          *(short *)((long)unaff_x19 + (ulong)bVar6 * 4 + 0xd4) =
               *(short *)((long)unaff_x19 + (ulong)bVar6 * 4 + 0xd4) + 1;
          iVar13 = *(int *)((long)unaff_x19 + 0xac) + 1;
          bVar10 = *(int *)((long)unaff_x19 + 0x170c) == (int)unaff_x19[0x2e2];
          *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) + -1;
        }
        else {
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
LAB_00dd4514:
          uVar22 = (ulong)*(uint *)((long)unaff_x19 + 0xac);
          if (*(uint *)((long)unaff_x19 + 0xac) == 0) goto LAB_00dd46b4;
          pcVar2 = (char *)(unaff_x19[0xc] + uVar22);
          cVar5 = pcVar2[-1];
          if (((cVar5 != *pcVar2) || (cVar5 != pcVar2[1])) || (cVar5 != pcVar2[2]))
          goto LAB_00dd46b4;
          pcVar9 = (char *)(unaff_x19[0xc] + uVar22 + 5);
          do {
            pcVar18 = pcVar9;
            if (cVar5 != pcVar18[-2]) {
              pcVar18 = pcVar18 + -2;
              goto LAB_00dd45fc;
            }
            if (cVar5 != pcVar18[-1]) {
              pcVar18 = pcVar18 + -1;
              goto LAB_00dd45fc;
            }
            if (cVar5 != *pcVar18) goto LAB_00dd45fc;
            if (cVar5 != pcVar18[1]) {
              pcVar18 = pcVar18 + 1;
              goto LAB_00dd45fc;
            }
            if (cVar5 != pcVar18[2]) {
              pcVar18 = pcVar18 + 2;
              goto LAB_00dd45fc;
            }
            if (cVar5 != pcVar18[3]) {
              pcVar18 = pcVar18 + 3;
              goto LAB_00dd45fc;
            }
            if (cVar5 != pcVar18[4]) {
              pcVar18 = pcVar18 + 4;
              goto LAB_00dd45fc;
            }
          } while ((pcVar18 + 5 < pcVar2 + 0x102) && (pcVar9 = pcVar18 + 8, cVar5 == pcVar18[5]));
          pcVar18 = pcVar18 + 5;
LAB_00dd45fc:
          uVar1 = ((int)pcVar18 - (int)(pcVar2 + 0x102)) + 0x102;
          if (uVar1 <= uVar11) {
            uVar11 = uVar1;
          }
          *(uint *)(unaff_x19 + 0x14) = uVar11;
          if (uVar11 < 3) goto LAB_00dd46b4;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar1) = 1;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          bVar6 = puVar8[(ulong)(uVar11 - 3) & 0xff];
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar1) = 0;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          uVar22 = (ulong)bVar6 << 2 | 0x400;
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          bVar6 = *puVar7;
          *(char *)(unaff_x19[0x2e0] + (ulong)uVar1) = (char)(uVar11 - 3);
          *(short *)((long)unaff_x19 + uVar22 + 0xd8) =
               *(short *)((long)unaff_x19 + uVar22 + 0xd8) + 1;
          *(short *)((long)unaff_x19 + (ulong)bVar6 * 4 + 0x9c8) =
               *(short *)((long)unaff_x19 + (ulong)bVar6 * 4 + 0x9c8) + 1;
          lVar19 = unaff_x19[0x14];
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
          iVar13 = *(int *)((long)unaff_x19 + 0xac) + (int)lVar19;
          bVar10 = *(int *)((long)unaff_x19 + 0x170c) == (int)unaff_x19[0x2e2];
          *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) - (int)lVar19;
        }
        *(int *)((long)unaff_x19 + 0xac) = iVar13;
      } while (!bVar10);
      FUN_00dd5f74();
      unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
      FUN_00dd4a98(*unaff_x19);
    } while (*(int *)(*unaff_x19 + 0x20) != 0);
  }
  else {
    if ((int)unaff_x19[0x19] != 2) {
      uVar11 = (*(code *)(&PTR_FUN_033e3730)[(long)*(int *)((long)unaff_x19 + 0xc4) * 2])();
      goto LAB_00dd4828;
    }
    do {
      do {
        if ((*(int *)((long)unaff_x19 + 0xb4) == 0) &&
           (FUN_00dd37dc(), *(int *)((long)unaff_x19 + 0xb4) == 0)) {
          if (unaff_w21 != 0) goto LAB_00dd47a0;
          goto LAB_00dd4a78;
        }
        uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
        *(undefined4 *)(unaff_x19 + 0x14) = 0;
        bVar6 = *(byte *)(unaff_x19[0xc] + (ulong)*(uint *)((long)unaff_x19 + 0xac));
        *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
        *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar11) = 0;
        uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
        *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
        *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar11) = 0;
        uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
        *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
        *(byte *)(unaff_x19[0x2e0] + (ulong)uVar11) = bVar6;
        *(short *)((long)unaff_x19 + (ulong)bVar6 * 4 + 0xd4) =
             *(short *)((long)unaff_x19 + (ulong)bVar6 * 4 + 0xd4) + 1;
        *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) + -1;
        *(int *)((long)unaff_x19 + 0xac) = *(int *)((long)unaff_x19 + 0xac) + 1;
      } while (*(int *)((long)unaff_x19 + 0x170c) != (int)unaff_x19[0x2e2]);
      FUN_00dd5f74();
      unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
      FUN_00dd4a98(*unaff_x19);
    } while (*(int *)(*unaff_x19 + 0x20) != 0);
  }
LAB_00dd4a78:
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    return false;
  }
LAB_00dd4a88:
  *(undefined4 *)((long)unaff_x19 + 0x4c) = 0xffffffff;
  return false;
LAB_00dd47a0:
  *(undefined4 *)((long)unaff_x19 + 0x172c) = 0;
  if (unaff_w21 == 4) {
    FUN_00dd5f74();
    unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
    FUN_00dd4a98(*unaff_x19);
    uVar11 = 2;
    if (*(int *)(*unaff_x19 + 0x20) != 0) {
      uVar11 = 3;
    }
    goto LAB_00dd4828;
  }
  if (*(int *)((long)unaff_x19 + 0x170c) != 0) {
    FUN_00dd5f74();
    unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
    FUN_00dd4a98(*unaff_x19);
    if (*(int *)(*unaff_x19 + 0x20) == 0) goto LAB_00dd4a78;
  }
LAB_00dd484c:
  if (unaff_w21 != 5) {
    if (unaff_w21 == 1) {
      FUN_00dd5ea4();
    }
    else {
      FUN_00dd5c7c();
      if (unaff_w21 == 3) {
        __s = (void *)unaff_x19[0xf];
        uVar22 = (ulong)(*(int *)((long)unaff_x19 + 0x84) - 1);
        *(undefined2 *)((long)__s + uVar22 * 2) = 0;
        memset(__s,0,uVar22 << 1);
        if (*(int *)((long)unaff_x19 + 0xb4) == 0) {
          *(undefined4 *)((long)unaff_x19 + 0xac) = 0;
          unaff_x19[0x13] = 0;
          *(undefined4 *)((long)unaff_x19 + 0x172c) = 0;
        }
      }
    }
  }
  FUN_00dd4a98();
  if (*(int *)(unaff_x20 + 0x20) != 0) {
LAB_00dd48c0:
    if (unaff_w21 != 4) {
      return false;
    }
    if ((int)unaff_x19[6] < 1) {
      return true;
    }
    uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
    if ((int)unaff_x19[6] == 2) {
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)uVar14;
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 8);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 0x10);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 0x18);
      lVar19 = unaff_x19[5];
      uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)uVar14;
      uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 8);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 0x10);
      lVar19 = unaff_x19[5];
      lVar17 = unaff_x19[2];
      uVar22 = *(ulong *)(unaff_x20 + 0x10) >> 0x18;
    }
    else {
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 0x18);
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)((ulong)uVar14 >> 0x10);
      uVar22 = *(ulong *)(unaff_x20 + 0x60);
      lVar19 = unaff_x19[5];
      unaff_x19[5] = lVar19 + 1;
      *(char *)(unaff_x19[2] + lVar19) = (char)(uVar22 >> 8);
      lVar19 = unaff_x19[5];
      lVar17 = unaff_x19[2];
    }
    unaff_x19[5] = lVar19 + 1;
    *(char *)(lVar17 + lVar19) = (char)uVar22;
    FUN_00dd4a98();
    if (0 < (int)unaff_x19[6]) {
      *(int *)(unaff_x19 + 6) = -(int)unaff_x19[6];
    }
    return unaff_x19[5] == 0;
  }
  goto LAB_00dd4a88;
}


