/*
FUNCTION_NAME: BNG.Grabbable$$get_lastNoCollisionSeconds
ENTRY_POINT: 033467e0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool BNG_Grabbable__get_lastNoCollisionSeconds(long param_1)

{
  uint uVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  bool bVar9;
  uint uVar10;
  void *__s;
  undefined1 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long in_x9;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong __n;
  ulong uVar19;
  ulong uVar20;
  
  *(undefined1 *)(in_x9 + param_1) = 0;
  lVar13 = unaff_x19[5];
  unaff_x19[5] = lVar13 + 1;
  *(undefined1 *)(unaff_x19[2] + lVar13) = 0;
  lVar13 = unaff_x19[5];
  unaff_x19[5] = lVar13 + 1;
  *(undefined1 *)(unaff_x19[2] + lVar13) = 0;
  lVar13 = unaff_x19[5];
  unaff_x19[5] = lVar13 + 1;
  *(undefined1 *)(unaff_x19[2] + lVar13) = 0;
  if (*(int *)((long)unaff_x19 + 0xc4) == 9) {
    uVar11 = 2;
  }
  else {
    uVar11 = 4;
    if ((int)unaff_x19[0x19] < 2 && 1 < *(int *)((long)unaff_x19 + 0xc4)) {
      uVar11 = 0;
    }
  }
  lVar13 = unaff_x19[5];
  unaff_x19[5] = lVar13 + 1;
  *(undefined1 *)(unaff_x19[2] + lVar13) = uVar11;
  lVar13 = unaff_x19[5];
  unaff_x19[5] = lVar13 + 1;
  *(undefined1 *)(unaff_x19[2] + lVar13) = 3;
  *(undefined4 *)(unaff_x19 + 1) = 0x71;
  FUN_033473d0();
  if (unaff_x19[5] != 0) goto LAB_033473c0;
  iVar12 = (int)unaff_x19[1];
  if (iVar12 < 0x5b) {
    if (iVar12 == 0x45) {
      lVar13 = *(long *)(unaff_x19[7] + 0x18);
      if (lVar13 != 0) {
        lVar17 = unaff_x19[8];
        uVar19 = unaff_x19[5];
        uVar16 = unaff_x19[3];
        uVar15 = (ulong)((uint)*(ushort *)(unaff_x19[7] + 0x20) - (int)lVar17);
        if (uVar16 < uVar19 + uVar15) {
          while( true ) {
            uVar20 = uVar16 - uVar19;
            __n = uVar20 & 0xffffffff;
            memcpy((void *)(unaff_x19[2] + uVar19),(void *)(lVar13 + lVar17),__n);
            uVar16 = unaff_x19[3];
            unaff_x19[5] = uVar16;
            if ((uVar19 < uVar16) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
              uVar14 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar19,
                                    (int)uVar16 - (int)uVar19);
              *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
            }
            unaff_x19[8] = unaff_x19[8] + __n;
            FUN_033473d0();
            if (unaff_x19[5] != 0) goto LAB_033473c0;
            uVar16 = unaff_x19[3];
            uVar15 = (ulong)(uint)((int)uVar15 - (int)uVar20);
            if (uVar15 <= uVar16) break;
            lVar17 = unaff_x19[8];
            uVar19 = 0;
            lVar13 = *(long *)(unaff_x19[7] + 0x18);
          }
          lVar17 = unaff_x19[8];
          uVar19 = 0;
          lVar13 = *(long *)(unaff_x19[7] + 0x18);
        }
        memcpy((void *)(unaff_x19[2] + uVar19),(void *)(lVar13 + lVar17),uVar15);
        uVar15 = unaff_x19[5] + uVar15;
        unaff_x19[5] = uVar15;
        if ((uVar19 < uVar15) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
          uVar14 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar19,
                                (int)uVar15 - (int)uVar19);
          *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
        }
        unaff_x19[8] = 0;
      }
      *(undefined4 *)(unaff_x19 + 1) = 0x49;
LAB_03346aa8:
      if (*(long *)(unaff_x19[7] + 0x28) != 0) {
        uVar15 = unaff_x19[5];
        uVar16 = uVar15;
        while( true ) {
          if (uVar16 == unaff_x19[3]) {
            if ((uVar15 < uVar16) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
              uVar14 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar15,
                                    (int)uVar16 - (int)uVar15);
              *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
            }
            FUN_033473d0();
            if (unaff_x19[5] != 0) goto LAB_033473c0;
            uVar16 = 0;
            uVar15 = 0;
          }
          lVar13 = unaff_x19[8];
          lVar17 = *(long *)(unaff_x19[7] + 0x28);
          unaff_x19[8] = lVar13 + 1;
          cVar5 = *(char *)(lVar17 + lVar13);
          unaff_x19[5] = uVar16 + 1;
          *(char *)(unaff_x19[2] + uVar16) = cVar5;
          if (cVar5 == '\0') break;
          uVar16 = unaff_x19[5];
        }
        if ((*(int *)(unaff_x19[7] + 0x44) != 0) && (uVar15 < (ulong)unaff_x19[5])) {
          uVar14 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar15,
                                (int)unaff_x19[5] - (int)uVar15);
          *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
        }
        unaff_x19[8] = 0;
      }
      *(undefined4 *)(unaff_x19 + 1) = 0x5b;
LAB_03346b74:
      if (*(long *)(unaff_x19[7] + 0x38) != 0) {
        uVar15 = unaff_x19[5];
        uVar16 = uVar15;
        while( true ) {
          if (uVar16 == unaff_x19[3]) {
            if ((uVar15 < uVar16) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
              uVar14 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar15,
                                    (int)uVar16 - (int)uVar15);
              *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
            }
            FUN_033473d0();
            if (unaff_x19[5] != 0) goto LAB_033473c0;
            uVar16 = 0;
            uVar15 = 0;
          }
          lVar13 = unaff_x19[8];
          lVar17 = *(long *)(unaff_x19[7] + 0x38);
          unaff_x19[8] = lVar13 + 1;
          cVar5 = *(char *)(lVar17 + lVar13);
          unaff_x19[5] = uVar16 + 1;
          *(char *)(unaff_x19[2] + uVar16) = cVar5;
          if (cVar5 == '\0') break;
          uVar16 = unaff_x19[5];
        }
        if ((*(int *)(unaff_x19[7] + 0x44) != 0) && (uVar15 < (ulong)unaff_x19[5])) {
          uVar14 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar15,
                                (int)unaff_x19[5] - (int)uVar15);
          *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
        }
      }
      *(undefined4 *)(unaff_x19 + 1) = 0x67;
      goto LAB_03346c3c;
    }
    if (iVar12 == 0x49) goto LAB_03346aa8;
  }
  else {
    if (iVar12 == 0x5b) goto LAB_03346b74;
    if (iVar12 != 0x67) goto LAB_03346cc8;
LAB_03346c3c:
    if (*(int *)(unaff_x19[7] + 0x44) != 0) {
      lVar13 = unaff_x19[5];
      if ((ulong)unaff_x19[3] < lVar13 + 2U) {
        FUN_033473d0();
        lVar13 = 0;
        if (unaff_x19[5] != 0) goto LAB_033473c0;
      }
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)uVar14;
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar13 = unaff_x19[5];
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)((ulong)uVar14 >> 8);
      uVar14 = FUN_0334883c(0,0,0);
      *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
    }
    *(undefined4 *)(unaff_x19 + 1) = 0x71;
    FUN_033473d0();
    if (unaff_x19[5] != 0) goto LAB_033473c0;
  }
LAB_03346cc8:
  puVar7 = Method_OVRTask_SetResult<bool>__;
  puVar6 = Method_OVRTask_SetResult<OVRResult<ulong,_OVRPlugin_Result>>__;
  if (((*(int *)(unaff_x20 + 8) == 0) && (*(int *)((long)unaff_x19 + 0xb4) == 0)) &&
     ((unaff_w21 == 0 || ((int)unaff_x19[1] == 0x29a)))) goto LAB_033471f8;
  if (*(int *)((long)unaff_x19 + 0xc4) == 0) {
    uVar10 = FUN_03347460();
LAB_03347160:
    if ((uVar10 & 0xfffffffe) == 2) {
      *(undefined4 *)(unaff_x19 + 1) = 0x29a;
    }
    if ((uVar10 & 0xfffffffd) != 0) {
      if (uVar10 != 1) goto LAB_033471f8;
      goto LAB_03347184;
    }
  }
  else if ((int)unaff_x19[0x19] == 3) {
    do {
      do {
        uVar10 = *(uint *)((long)unaff_x19 + 0xb4);
        if (uVar10 < 0x103) {
          FUN_03346128();
          uVar10 = *(uint *)((long)unaff_x19 + 0xb4);
          if ((unaff_w21 == 0) && (uVar10 < 0x103)) goto LAB_033473b0;
          if (uVar10 == 0) goto LAB_033470d8;
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
          if (2 < uVar10) goto LAB_03346e54;
          uVar15 = (ulong)*(uint *)((long)unaff_x19 + 0xac);
LAB_03346fec:
          uVar10 = *(uint *)((long)unaff_x19 + 0x170c);
          bVar3 = *(byte *)(unaff_x19[0xc] + uVar15);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar10 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar10) = 0;
          uVar10 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar10 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar10) = 0;
          uVar10 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar10 + 1;
          *(byte *)(unaff_x19[0x2e0] + (ulong)uVar10) = bVar3;
          *(short *)((long)unaff_x19 + (ulong)bVar3 * 4 + 0xd4) =
               *(short *)((long)unaff_x19 + (ulong)bVar3 * 4 + 0xd4) + 1;
          iVar12 = *(int *)((long)unaff_x19 + 0xac) + 1;
          bVar9 = *(int *)((long)unaff_x19 + 0x170c) == (int)unaff_x19[0x2e2];
          *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) + -1;
        }
        else {
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
LAB_03346e54:
          uVar15 = (ulong)*(uint *)((long)unaff_x19 + 0xac);
          if (*(uint *)((long)unaff_x19 + 0xac) == 0) goto LAB_03346fec;
          pcVar2 = (char *)(unaff_x19[0xc] + uVar15);
          cVar5 = pcVar2[-1];
          if (((cVar5 != *pcVar2) || (cVar5 != pcVar2[1])) || (cVar5 != pcVar2[2]))
          goto LAB_03346fec;
          pcVar8 = (char *)(unaff_x19[0xc] + uVar15 + 5);
          do {
            pcVar18 = pcVar8;
            if (cVar5 != pcVar18[-2]) {
              pcVar18 = pcVar18 + -2;
              goto LAB_03346f3c;
            }
            if (cVar5 != pcVar18[-1]) {
              pcVar18 = pcVar18 + -1;
              goto LAB_03346f3c;
            }
            if (cVar5 != *pcVar18) goto LAB_03346f3c;
            if (cVar5 != pcVar18[1]) {
              pcVar18 = pcVar18 + 1;
              goto LAB_03346f3c;
            }
            if (cVar5 != pcVar18[2]) {
              pcVar18 = pcVar18 + 2;
              goto LAB_03346f3c;
            }
            if (cVar5 != pcVar18[3]) {
              pcVar18 = pcVar18 + 3;
              goto LAB_03346f3c;
            }
            if (cVar5 != pcVar18[4]) {
              pcVar18 = pcVar18 + 4;
              goto LAB_03346f3c;
            }
          } while ((pcVar18 + 5 < pcVar2 + 0x102) && (pcVar8 = pcVar18 + 8, cVar5 == pcVar18[5]));
          pcVar18 = pcVar18 + 5;
LAB_03346f3c:
          uVar1 = ((int)pcVar18 - (int)(pcVar2 + 0x102)) + 0x102;
          if (uVar1 <= uVar10) {
            uVar10 = uVar1;
          }
          *(uint *)(unaff_x19 + 0x14) = uVar10;
          if (uVar10 < 3) goto LAB_03346fec;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar1) = 1;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar1) = 0;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          bVar4 = puVar6[(ulong)(uVar10 - 3) & 0xff];
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          *(char *)(unaff_x19[0x2e0] + (ulong)uVar1) = (char)(uVar10 - 3);
          bVar3 = *puVar7;
          *(short *)((long)unaff_x19 + (ulong)bVar4 * 4 + 0x4d8) =
               *(short *)((long)unaff_x19 + (ulong)bVar4 * 4 + 0x4d8) + 1;
          *(short *)((long)unaff_x19 + (ulong)bVar3 * 4 + 0x9c8) =
               *(short *)((long)unaff_x19 + (ulong)bVar3 * 4 + 0x9c8) + 1;
          lVar13 = unaff_x19[0x14];
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
          iVar12 = *(int *)((long)unaff_x19 + 0xac) + (int)lVar13;
          bVar9 = *(int *)((long)unaff_x19 + 0x170c) == (int)unaff_x19[0x2e2];
          *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) - (int)lVar13;
        }
        *(int *)((long)unaff_x19 + 0xac) = iVar12;
      } while (!bVar9);
      FUN_03342408();
      unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
      FUN_033473d0(*unaff_x19);
    } while (*(int *)(*unaff_x19 + 0x20) != 0);
  }
  else {
    if ((int)unaff_x19[0x19] != 2) {
      uVar10 = (*(code *)(&PTR_FUN_07272e40)[(long)*(int *)((long)unaff_x19 + 0xc4) * 2])();
      goto LAB_03347160;
    }
    do {
      do {
        if ((*(int *)((long)unaff_x19 + 0xb4) == 0) &&
           (FUN_03346128(), *(int *)((long)unaff_x19 + 0xb4) == 0)) {
          if (unaff_w21 != 0) goto LAB_033470d8;
          goto LAB_033473b0;
        }
        uVar10 = *(uint *)((long)unaff_x19 + 0x170c);
        *(undefined4 *)(unaff_x19 + 0x14) = 0;
        bVar3 = *(byte *)(unaff_x19[0xc] + (ulong)*(uint *)((long)unaff_x19 + 0xac));
        *(uint *)((long)unaff_x19 + 0x170c) = uVar10 + 1;
        *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar10) = 0;
        uVar10 = *(uint *)((long)unaff_x19 + 0x170c);
        *(uint *)((long)unaff_x19 + 0x170c) = uVar10 + 1;
        *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar10) = 0;
        uVar10 = *(uint *)((long)unaff_x19 + 0x170c);
        *(uint *)((long)unaff_x19 + 0x170c) = uVar10 + 1;
        *(byte *)(unaff_x19[0x2e0] + (ulong)uVar10) = bVar3;
        *(short *)((long)unaff_x19 + (ulong)bVar3 * 4 + 0xd4) =
             *(short *)((long)unaff_x19 + (ulong)bVar3 * 4 + 0xd4) + 1;
        *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) + -1;
        *(int *)((long)unaff_x19 + 0xac) = *(int *)((long)unaff_x19 + 0xac) + 1;
      } while (*(int *)((long)unaff_x19 + 0x170c) != (int)unaff_x19[0x2e2]);
      FUN_03342408();
      unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
      FUN_033473d0(*unaff_x19);
    } while (*(int *)(*unaff_x19 + 0x20) != 0);
  }
LAB_033473b0:
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    return false;
  }
LAB_033473c0:
  *(undefined4 *)((long)unaff_x19 + 0x4c) = 0xffffffff;
  return false;
LAB_033470d8:
  *(undefined4 *)((long)unaff_x19 + 0x172c) = 0;
  if (unaff_w21 == 4) {
    FUN_03342408();
    unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
    FUN_033473d0(*unaff_x19);
    uVar10 = 2;
    if (*(int *)(*unaff_x19 + 0x20) != 0) {
      uVar10 = 3;
    }
    goto LAB_03347160;
  }
  if (*(int *)((long)unaff_x19 + 0x170c) != 0) {
    FUN_03342408();
    unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
    FUN_033473d0(*unaff_x19);
    if (*(int *)(*unaff_x19 + 0x20) == 0) goto LAB_033473b0;
  }
LAB_03347184:
  if (unaff_w21 != 5) {
    if (unaff_w21 == 1) {
      FUN_03342338();
    }
    else {
      FUN_03342110();
      if (unaff_w21 == 3) {
        __s = (void *)unaff_x19[0xf];
        uVar15 = (ulong)(*(int *)((long)unaff_x19 + 0x84) - 1);
        *(undefined2 *)((long)__s + uVar15 * 2) = 0;
        memset(__s,0,uVar15 << 1);
        if (*(int *)((long)unaff_x19 + 0xb4) == 0) {
          *(undefined4 *)((long)unaff_x19 + 0xac) = 0;
          unaff_x19[0x13] = 0;
          *(undefined4 *)((long)unaff_x19 + 0x172c) = 0;
        }
      }
    }
  }
  FUN_033473d0();
  if (*(int *)(unaff_x20 + 0x20) != 0) {
LAB_033471f8:
    if (unaff_w21 != 4) {
      return false;
    }
    if ((int)unaff_x19[6] < 1) {
      return true;
    }
    uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
    if ((int)unaff_x19[6] == 2) {
      lVar13 = unaff_x19[5];
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)uVar14;
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar13 = unaff_x19[5];
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)((ulong)uVar14 >> 8);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar13 = unaff_x19[5];
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)((ulong)uVar14 >> 0x10);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar13 = unaff_x19[5];
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)((ulong)uVar14 >> 0x18);
      lVar13 = unaff_x19[5];
      uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)uVar14;
      uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
      lVar13 = unaff_x19[5];
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)((ulong)uVar14 >> 8);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
      lVar13 = unaff_x19[5];
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)((ulong)uVar14 >> 0x10);
      lVar13 = unaff_x19[5];
      lVar17 = unaff_x19[2];
      uVar15 = *(ulong *)(unaff_x20 + 0x10) >> 0x18;
    }
    else {
      lVar13 = unaff_x19[5];
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)((ulong)uVar14 >> 0x18);
      lVar13 = unaff_x19[5];
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)((ulong)uVar14 >> 0x10);
      uVar15 = *(ulong *)(unaff_x20 + 0x60);
      lVar13 = unaff_x19[5];
      unaff_x19[5] = lVar13 + 1;
      *(char *)(unaff_x19[2] + lVar13) = (char)(uVar15 >> 8);
      lVar13 = unaff_x19[5];
      lVar17 = unaff_x19[2];
    }
    unaff_x19[5] = lVar13 + 1;
    *(char *)(lVar17 + lVar13) = (char)uVar15;
    FUN_033473d0();
    if (0 < (int)unaff_x19[6]) {
      *(int *)(unaff_x19 + 6) = -(int)unaff_x19[6];
    }
    return unaff_x19[5] == 0;
  }
  goto LAB_033473c0;
}


