/*
FUNCTION_NAME: BNG.Grabbable$$set_requestSpringTime
ENTRY_POINT: 03346870
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool BNG_Grabbable__set_requestSpringTime(void)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  bool bVar10;
  uint uVar11;
  undefined8 uVar12;
  void *__s;
  undefined1 in_w8;
  int iVar13;
  long lVar14;
  long in_x9;
  long lVar15;
  long in_x10;
  ulong uVar16;
  long in_x11;
  char *pcVar17;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong uVar18;
  ulong __n;
  ulong uVar19;
  ulong uVar20;
  
  unaff_x19[5] = in_x11;
  *(undefined1 *)(in_x10 + in_x9) = in_w8;
  lVar14 = unaff_x19[7];
  if (*(long *)(lVar14 + 0x18) != 0) {
    lVar15 = unaff_x19[5];
    uVar3 = *(undefined4 *)(lVar14 + 0x20);
    unaff_x19[5] = lVar15 + 1;
    *(char *)(unaff_x19[2] + lVar15) = (char)uVar3;
    lVar14 = unaff_x19[5];
    uVar3 = *(undefined4 *)(unaff_x19[7] + 0x20);
    unaff_x19[5] = lVar14 + 1;
    *(char *)(unaff_x19[2] + lVar14) = (char)((uint)uVar3 >> 8);
    lVar14 = unaff_x19[7];
  }
  if (*(int *)(lVar14 + 0x44) != 0) {
    uVar12 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2],(int)unaff_x19[5]);
    *(undefined8 *)(unaff_x20 + 0x60) = uVar12;
  }
  unaff_x19[8] = 0;
  *(undefined4 *)(unaff_x19 + 1) = 0x45;
  lVar14 = *(long *)(unaff_x19[7] + 0x18);
  if (lVar14 != 0) {
    lVar15 = unaff_x19[8];
    uVar19 = unaff_x19[5];
    uVar16 = unaff_x19[3];
    uVar18 = (ulong)((uint)*(ushort *)(unaff_x19[7] + 0x20) - (int)lVar15);
    if (uVar16 < uVar19 + uVar18) {
      while( true ) {
        uVar20 = uVar16 - uVar19;
        __n = uVar20 & 0xffffffff;
        memcpy((void *)(unaff_x19[2] + uVar19),(void *)(lVar14 + lVar15),__n);
        uVar16 = unaff_x19[3];
        unaff_x19[5] = uVar16;
        if ((uVar19 < uVar16) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
          uVar12 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar19,
                                (int)uVar16 - (int)uVar19);
          *(undefined8 *)(unaff_x20 + 0x60) = uVar12;
        }
        unaff_x19[8] = unaff_x19[8] + __n;
        FUN_033473d0();
        if (unaff_x19[5] != 0) goto LAB_033473c0;
        uVar16 = unaff_x19[3];
        uVar18 = (ulong)(uint)((int)uVar18 - (int)uVar20);
        if (uVar18 <= uVar16) break;
        lVar15 = unaff_x19[8];
        uVar19 = 0;
        lVar14 = *(long *)(unaff_x19[7] + 0x18);
      }
      lVar15 = unaff_x19[8];
      uVar19 = 0;
      lVar14 = *(long *)(unaff_x19[7] + 0x18);
    }
    memcpy((void *)(unaff_x19[2] + uVar19),(void *)(lVar14 + lVar15),uVar18);
    uVar18 = unaff_x19[5] + uVar18;
    unaff_x19[5] = uVar18;
    if ((uVar19 < uVar18) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
      uVar12 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar19,
                            (int)uVar18 - (int)uVar19);
      *(undefined8 *)(unaff_x20 + 0x60) = uVar12;
    }
    unaff_x19[8] = 0;
  }
  *(undefined4 *)(unaff_x19 + 1) = 0x49;
  if (*(long *)(unaff_x19[7] + 0x28) != 0) {
    uVar18 = unaff_x19[5];
    uVar16 = uVar18;
    while( true ) {
      if (uVar16 == unaff_x19[3]) {
        if ((uVar18 < uVar16) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
          uVar12 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar18,
                                (int)uVar16 - (int)uVar18);
          *(undefined8 *)(unaff_x20 + 0x60) = uVar12;
        }
        FUN_033473d0();
        if (unaff_x19[5] != 0) goto LAB_033473c0;
        uVar16 = 0;
        uVar18 = 0;
      }
      lVar14 = unaff_x19[8];
      lVar15 = *(long *)(unaff_x19[7] + 0x28);
      unaff_x19[8] = lVar14 + 1;
      cVar4 = *(char *)(lVar15 + lVar14);
      unaff_x19[5] = uVar16 + 1;
      *(char *)(unaff_x19[2] + uVar16) = cVar4;
      if (cVar4 == '\0') break;
      uVar16 = unaff_x19[5];
    }
    if ((*(int *)(unaff_x19[7] + 0x44) != 0) && (uVar18 < (ulong)unaff_x19[5])) {
      uVar12 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar18,
                            (int)unaff_x19[5] - (int)uVar18);
      *(undefined8 *)(unaff_x20 + 0x60) = uVar12;
    }
    unaff_x19[8] = 0;
  }
  *(undefined4 *)(unaff_x19 + 1) = 0x5b;
  if (*(long *)(unaff_x19[7] + 0x38) != 0) {
    uVar18 = unaff_x19[5];
    uVar16 = uVar18;
    while( true ) {
      if (uVar16 == unaff_x19[3]) {
        if ((uVar18 < uVar16) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
          uVar12 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar18,
                                (int)uVar16 - (int)uVar18);
          *(undefined8 *)(unaff_x20 + 0x60) = uVar12;
        }
        FUN_033473d0();
        if (unaff_x19[5] != 0) goto LAB_033473c0;
        uVar16 = 0;
        uVar18 = 0;
      }
      lVar14 = unaff_x19[8];
      lVar15 = *(long *)(unaff_x19[7] + 0x38);
      unaff_x19[8] = lVar14 + 1;
      cVar4 = *(char *)(lVar15 + lVar14);
      unaff_x19[5] = uVar16 + 1;
      *(char *)(unaff_x19[2] + uVar16) = cVar4;
      if (cVar4 == '\0') break;
      uVar16 = unaff_x19[5];
    }
    if ((*(int *)(unaff_x19[7] + 0x44) != 0) && (uVar18 < (ulong)unaff_x19[5])) {
      uVar12 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar18,
                            (int)unaff_x19[5] - (int)uVar18);
      *(undefined8 *)(unaff_x20 + 0x60) = uVar12;
    }
  }
  *(undefined4 *)(unaff_x19 + 1) = 0x67;
  if (*(int *)(unaff_x19[7] + 0x44) != 0) {
    lVar14 = unaff_x19[5];
    if ((ulong)unaff_x19[3] < lVar14 + 2U) {
      FUN_033473d0();
      lVar14 = 0;
      if (unaff_x19[5] != 0) goto LAB_033473c0;
    }
    uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
    unaff_x19[5] = lVar14 + 1;
    *(char *)(unaff_x19[2] + lVar14) = (char)uVar12;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar14 = unaff_x19[5];
    unaff_x19[5] = lVar14 + 1;
    *(char *)(unaff_x19[2] + lVar14) = (char)((ulong)uVar12 >> 8);
    uVar12 = FUN_0334883c(0,0,0);
    *(undefined8 *)(unaff_x20 + 0x60) = uVar12;
  }
  *(undefined4 *)(unaff_x19 + 1) = 0x71;
  FUN_033473d0();
  puVar8 = Method_OVRTask_SetResult<bool>__;
  puVar7 = Method_OVRTask_SetResult<OVRResult<ulong,_OVRPlugin_Result>>__;
  if (unaff_x19[5] != 0) goto LAB_033473c0;
  if (((*(int *)(unaff_x20 + 8) == 0) && (*(int *)((long)unaff_x19 + 0xb4) == 0)) &&
     ((unaff_w21 == 0 || ((int)unaff_x19[1] == 0x29a)))) goto LAB_033471f8;
  if (*(int *)((long)unaff_x19 + 0xc4) == 0) {
    uVar11 = FUN_03347460();
LAB_03347160:
    if ((uVar11 & 0xfffffffe) == 2) {
      *(undefined4 *)(unaff_x19 + 1) = 0x29a;
    }
    if ((uVar11 & 0xfffffffd) != 0) {
      if (uVar11 != 1) goto LAB_033471f8;
      goto LAB_03347184;
    }
  }
  else if ((int)unaff_x19[0x19] == 3) {
    do {
      do {
        uVar11 = *(uint *)((long)unaff_x19 + 0xb4);
        if (uVar11 < 0x103) {
          FUN_03346128();
          uVar11 = *(uint *)((long)unaff_x19 + 0xb4);
          if ((unaff_w21 == 0) && (uVar11 < 0x103)) goto LAB_033473b0;
          if (uVar11 == 0) goto LAB_033470d8;
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
          if (2 < uVar11) goto LAB_03346e54;
          uVar18 = (ulong)*(uint *)((long)unaff_x19 + 0xac);
LAB_03346fec:
          uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
          bVar5 = *(byte *)(unaff_x19[0xc] + uVar18);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar11) = 0;
          uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar11) = 0;
          uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
          *(byte *)(unaff_x19[0x2e0] + (ulong)uVar11) = bVar5;
          *(short *)((long)unaff_x19 + (ulong)bVar5 * 4 + 0xd4) =
               *(short *)((long)unaff_x19 + (ulong)bVar5 * 4 + 0xd4) + 1;
          iVar13 = *(int *)((long)unaff_x19 + 0xac) + 1;
          bVar10 = *(int *)((long)unaff_x19 + 0x170c) == (int)unaff_x19[0x2e2];
          *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) + -1;
        }
        else {
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
LAB_03346e54:
          uVar18 = (ulong)*(uint *)((long)unaff_x19 + 0xac);
          if (*(uint *)((long)unaff_x19 + 0xac) == 0) goto LAB_03346fec;
          pcVar2 = (char *)(unaff_x19[0xc] + uVar18);
          cVar4 = pcVar2[-1];
          if (((cVar4 != *pcVar2) || (cVar4 != pcVar2[1])) || (cVar4 != pcVar2[2]))
          goto LAB_03346fec;
          pcVar9 = (char *)(unaff_x19[0xc] + uVar18 + 5);
          do {
            pcVar17 = pcVar9;
            if (cVar4 != pcVar17[-2]) {
              pcVar17 = pcVar17 + -2;
              goto LAB_03346f3c;
            }
            if (cVar4 != pcVar17[-1]) {
              pcVar17 = pcVar17 + -1;
              goto LAB_03346f3c;
            }
            if (cVar4 != *pcVar17) goto LAB_03346f3c;
            if (cVar4 != pcVar17[1]) {
              pcVar17 = pcVar17 + 1;
              goto LAB_03346f3c;
            }
            if (cVar4 != pcVar17[2]) {
              pcVar17 = pcVar17 + 2;
              goto LAB_03346f3c;
            }
            if (cVar4 != pcVar17[3]) {
              pcVar17 = pcVar17 + 3;
              goto LAB_03346f3c;
            }
            if (cVar4 != pcVar17[4]) {
              pcVar17 = pcVar17 + 4;
              goto LAB_03346f3c;
            }
          } while ((pcVar17 + 5 < pcVar2 + 0x102) && (pcVar9 = pcVar17 + 8, cVar4 == pcVar17[5]));
          pcVar17 = pcVar17 + 5;
LAB_03346f3c:
          uVar1 = ((int)pcVar17 - (int)(pcVar2 + 0x102)) + 0x102;
          if (uVar1 <= uVar11) {
            uVar11 = uVar1;
          }
          *(uint *)(unaff_x19 + 0x14) = uVar11;
          if (uVar11 < 3) goto LAB_03346fec;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar1) = 1;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar1) = 0;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          bVar6 = puVar7[(ulong)(uVar11 - 3) & 0xff];
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          *(char *)(unaff_x19[0x2e0] + (ulong)uVar1) = (char)(uVar11 - 3);
          bVar5 = *puVar8;
          *(short *)((long)unaff_x19 + (ulong)bVar6 * 4 + 0x4d8) =
               *(short *)((long)unaff_x19 + (ulong)bVar6 * 4 + 0x4d8) + 1;
          *(short *)((long)unaff_x19 + (ulong)bVar5 * 4 + 0x9c8) =
               *(short *)((long)unaff_x19 + (ulong)bVar5 * 4 + 0x9c8) + 1;
          lVar14 = unaff_x19[0x14];
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
          iVar13 = *(int *)((long)unaff_x19 + 0xac) + (int)lVar14;
          bVar10 = *(int *)((long)unaff_x19 + 0x170c) == (int)unaff_x19[0x2e2];
          *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) - (int)lVar14;
        }
        *(int *)((long)unaff_x19 + 0xac) = iVar13;
      } while (!bVar10);
      FUN_03342408();
      unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
      FUN_033473d0(*unaff_x19);
    } while (*(int *)(*unaff_x19 + 0x20) != 0);
  }
  else {
    if ((int)unaff_x19[0x19] != 2) {
      uVar11 = (*(code *)(&PTR_FUN_07272e40)[(long)*(int *)((long)unaff_x19 + 0xc4) * 2])();
      goto LAB_03347160;
    }
    do {
      do {
        if ((*(int *)((long)unaff_x19 + 0xb4) == 0) &&
           (FUN_03346128(), *(int *)((long)unaff_x19 + 0xb4) == 0)) {
          if (unaff_w21 != 0) goto LAB_033470d8;
          goto LAB_033473b0;
        }
        uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
        *(undefined4 *)(unaff_x19 + 0x14) = 0;
        bVar5 = *(byte *)(unaff_x19[0xc] + (ulong)*(uint *)((long)unaff_x19 + 0xac));
        *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
        *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar11) = 0;
        uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
        *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
        *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar11) = 0;
        uVar11 = *(uint *)((long)unaff_x19 + 0x170c);
        *(uint *)((long)unaff_x19 + 0x170c) = uVar11 + 1;
        *(byte *)(unaff_x19[0x2e0] + (ulong)uVar11) = bVar5;
        *(short *)((long)unaff_x19 + (ulong)bVar5 * 4 + 0xd4) =
             *(short *)((long)unaff_x19 + (ulong)bVar5 * 4 + 0xd4) + 1;
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
    uVar11 = 2;
    if (*(int *)(*unaff_x19 + 0x20) != 0) {
      uVar11 = 3;
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
        uVar18 = (ulong)(*(int *)((long)unaff_x19 + 0x84) - 1);
        *(undefined2 *)((long)__s + uVar18 * 2) = 0;
        memset(__s,0,uVar18 << 1);
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
    uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
    if ((int)unaff_x19[6] == 2) {
      lVar14 = unaff_x19[5];
      unaff_x19[5] = lVar14 + 1;
      *(char *)(unaff_x19[2] + lVar14) = (char)uVar12;
      uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar14 = unaff_x19[5];
      unaff_x19[5] = lVar14 + 1;
      *(char *)(unaff_x19[2] + lVar14) = (char)((ulong)uVar12 >> 8);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar14 = unaff_x19[5];
      unaff_x19[5] = lVar14 + 1;
      *(char *)(unaff_x19[2] + lVar14) = (char)((ulong)uVar12 >> 0x10);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar14 = unaff_x19[5];
      unaff_x19[5] = lVar14 + 1;
      *(char *)(unaff_x19[2] + lVar14) = (char)((ulong)uVar12 >> 0x18);
      lVar14 = unaff_x19[5];
      uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
      unaff_x19[5] = lVar14 + 1;
      *(char *)(unaff_x19[2] + lVar14) = (char)uVar12;
      uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
      lVar14 = unaff_x19[5];
      unaff_x19[5] = lVar14 + 1;
      *(char *)(unaff_x19[2] + lVar14) = (char)((ulong)uVar12 >> 8);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
      lVar14 = unaff_x19[5];
      unaff_x19[5] = lVar14 + 1;
      *(char *)(unaff_x19[2] + lVar14) = (char)((ulong)uVar12 >> 0x10);
      lVar14 = unaff_x19[5];
      lVar15 = unaff_x19[2];
      uVar18 = *(ulong *)(unaff_x20 + 0x10) >> 0x18;
    }
    else {
      lVar14 = unaff_x19[5];
      unaff_x19[5] = lVar14 + 1;
      *(char *)(unaff_x19[2] + lVar14) = (char)((ulong)uVar12 >> 0x18);
      lVar14 = unaff_x19[5];
      unaff_x19[5] = lVar14 + 1;
      *(char *)(unaff_x19[2] + lVar14) = (char)((ulong)uVar12 >> 0x10);
      uVar18 = *(ulong *)(unaff_x20 + 0x60);
      lVar14 = unaff_x19[5];
      unaff_x19[5] = lVar14 + 1;
      *(char *)(unaff_x19[2] + lVar14) = (char)(uVar18 >> 8);
      lVar14 = unaff_x19[5];
      lVar15 = unaff_x19[2];
    }
    unaff_x19[5] = lVar14 + 1;
    *(char *)(lVar15 + lVar14) = (char)uVar18;
    FUN_033473d0();
    if (0 < (int)unaff_x19[6]) {
      *(int *)(unaff_x19 + 6) = -(int)unaff_x19[6];
    }
    return unaff_x19[5] == 0;
  }
  goto LAB_033473c0;
}


