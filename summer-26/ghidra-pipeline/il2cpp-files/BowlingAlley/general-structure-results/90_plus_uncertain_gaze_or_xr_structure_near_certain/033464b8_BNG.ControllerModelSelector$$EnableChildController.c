/*
FUNCTION_NAME: BNG.ControllerModelSelector$$EnableChildController
ENTRY_POINT: 033464b8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


ulong BNG_ControllerModelSelector__EnableChildController(void)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  bool bVar11;
  uint uVar12;
  void *__s;
  undefined1 uVar13;
  int iVar14;
  int *piVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  long lVar23;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong __n;
  ulong uVar24;
  ulong uVar25;
  
  iVar14 = (int)unaff_x19[1];
  if (iVar14 == 0x2a) {
    if ((int)unaff_x19[6] != 0) {
      if (((int)unaff_x19[0x19] < 2) && (iVar14 = *(int *)((long)unaff_x19 + 0xc4), 1 < iVar14)) {
        if (iVar14 < 6) {
          uVar12 = 0x40;
        }
        else {
          uVar12 = 0x80;
          if (iVar14 != 6) {
            uVar12 = 0xc0;
          }
        }
      }
      else {
        uVar12 = 0;
      }
      uVar12 = uVar12 | *(int *)((long)unaff_x19 + 0x54) * 0x1000 - 0x7800U;
      lVar18 = unaff_x19[5];
      if (*(int *)((long)unaff_x19 + 0xac) != 0) {
        uVar12 = uVar12 | 0x20;
      }
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)(uVar12 >> 8);
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(byte *)(unaff_x19[2] + lVar18) =
           ((byte)uVar12 + (char)(uVar12 / 0x1f) * -0x1f | (byte)uVar12) ^ 0x1f;
      if (*(int *)((long)unaff_x19 + 0xac) != 0) {
        uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 0x18);
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 0x10);
        uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 8);
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(char *)(unaff_x19[2] + lVar18) = (char)uVar16;
      }
      uVar16 = FUN_03343f34(0,0,0);
      *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
      *(undefined4 *)(unaff_x19 + 1) = 0x71;
      FUN_033473d0();
      if (unaff_x19[5] != 0) goto LAB_033473c0;
      iVar14 = (int)unaff_x19[1];
      goto LAB_03346618;
    }
    *(undefined4 *)(unaff_x19 + 1) = 0x71;
    goto LAB_03346cc8;
  }
  if (iVar14 == 0x29a) {
    if (*(int *)(unaff_x20 + 8) != 0) {
      *(undefined8 *)(unaff_x20 + 0x30) =
           *(undefined8 *)
            (Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__ + 0x38);
      return 0xfffffffb;
    }
LAB_03346cd0:
    if ((*(int *)((long)unaff_x19 + 0xb4) == 0) &&
       ((unaff_w21 == 0 || ((int)unaff_x19[1] == 0x29a)))) goto LAB_033471f8;
  }
  else {
LAB_03346618:
    if (iVar14 == 0x39) {
      uVar16 = FUN_0334883c(0,0,0);
      *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(undefined1 *)(unaff_x19[2] + lVar18) = 0x1f;
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(undefined1 *)(unaff_x19[2] + lVar18) = 0x8b;
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(undefined1 *)(unaff_x19[2] + lVar18) = 8;
      piVar15 = (int *)unaff_x19[7];
      if (piVar15 == (int *)0x0) {
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(undefined1 *)(unaff_x19[2] + lVar18) = 0;
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(undefined1 *)(unaff_x19[2] + lVar18) = 0;
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(undefined1 *)(unaff_x19[2] + lVar18) = 0;
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(undefined1 *)(unaff_x19[2] + lVar18) = 0;
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(undefined1 *)(unaff_x19[2] + lVar18) = 0;
        if (*(int *)((long)unaff_x19 + 0xc4) == 9) {
          uVar13 = 2;
        }
        else {
          uVar13 = 4;
          if ((int)unaff_x19[0x19] < 2 && 1 < *(int *)((long)unaff_x19 + 0xc4)) {
            uVar13 = 0;
          }
        }
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(undefined1 *)(unaff_x19[2] + lVar18) = uVar13;
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(undefined1 *)(unaff_x19[2] + lVar18) = 3;
        *(undefined4 *)(unaff_x19 + 1) = 0x71;
        FUN_033473d0();
        if (unaff_x19[5] != 0) goto LAB_033473c0;
        iVar14 = (int)unaff_x19[1];
        goto LAB_03346958;
      }
      iVar14 = *piVar15;
      iVar3 = piVar15[0x11];
      lVar23 = unaff_x19[5];
      lVar20 = *(long *)(piVar15 + 6);
      lVar22 = *(long *)(piVar15 + 10);
      lVar18 = *(long *)(piVar15 + 0xe);
      unaff_x19[5] = lVar23 + 1;
      *(char *)(unaff_x19[2] + lVar23) =
           iVar14 != 0 | (iVar3 != 0) << 1 | (lVar20 != 0) << 2 | (lVar22 != 0) << 3 |
           (lVar18 != 0) << 4;
      lVar18 = unaff_x19[5];
      uVar16 = *(undefined8 *)(unaff_x19[7] + 8);
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)uVar16;
      lVar18 = unaff_x19[5];
      uVar16 = *(undefined8 *)(unaff_x19[7] + 8);
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 8);
      lVar18 = unaff_x19[5];
      uVar16 = *(undefined8 *)(unaff_x19[7] + 8);
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 0x10);
      lVar18 = unaff_x19[5];
      uVar16 = *(undefined8 *)(unaff_x19[7] + 8);
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 0x18);
      if (*(int *)((long)unaff_x19 + 0xc4) == 9) {
        uVar13 = 2;
      }
      else {
        uVar13 = 4;
        if ((int)unaff_x19[0x19] < 2 && 1 < *(int *)((long)unaff_x19 + 0xc4)) {
          uVar13 = 0;
        }
      }
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(undefined1 *)(unaff_x19[2] + lVar18) = uVar13;
      lVar18 = unaff_x19[5];
      uVar4 = *(undefined4 *)(unaff_x19[7] + 0x14);
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)uVar4;
      lVar18 = unaff_x19[7];
      if (*(long *)(lVar18 + 0x18) != 0) {
        lVar20 = unaff_x19[5];
        uVar4 = *(undefined4 *)(lVar18 + 0x20);
        unaff_x19[5] = lVar20 + 1;
        *(char *)(unaff_x19[2] + lVar20) = (char)uVar4;
        lVar18 = unaff_x19[5];
        uVar4 = *(undefined4 *)(unaff_x19[7] + 0x20);
        unaff_x19[5] = lVar18 + 1;
        *(char *)(unaff_x19[2] + lVar18) = (char)((uint)uVar4 >> 8);
        lVar18 = unaff_x19[7];
      }
      if (*(int *)(lVar18 + 0x44) != 0) {
        uVar16 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2],(int)unaff_x19[5]);
        *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
      }
      unaff_x19[8] = 0;
      *(undefined4 *)(unaff_x19 + 1) = 0x45;
LAB_03346974:
      lVar18 = *(long *)(unaff_x19[7] + 0x18);
      if (lVar18 != 0) {
        lVar20 = unaff_x19[8];
        uVar24 = unaff_x19[5];
        uVar19 = unaff_x19[3];
        uVar17 = (ulong)((uint)*(ushort *)(unaff_x19[7] + 0x20) - (int)lVar20);
        if (uVar19 < uVar24 + uVar17) {
          while( true ) {
            uVar25 = uVar19 - uVar24;
            __n = uVar25 & 0xffffffff;
            memcpy((void *)(unaff_x19[2] + uVar24),(void *)(lVar18 + lVar20),__n);
            uVar19 = unaff_x19[3];
            unaff_x19[5] = uVar19;
            if ((uVar24 < uVar19) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
              uVar16 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar24,
                                    (int)uVar19 - (int)uVar24);
              *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
            }
            unaff_x19[8] = unaff_x19[8] + __n;
            FUN_033473d0();
            if (unaff_x19[5] != 0) goto LAB_033473c0;
            uVar19 = unaff_x19[3];
            uVar17 = (ulong)(uint)((int)uVar17 - (int)uVar25);
            if (uVar17 <= uVar19) break;
            lVar20 = unaff_x19[8];
            uVar24 = 0;
            lVar18 = *(long *)(unaff_x19[7] + 0x18);
          }
          lVar20 = unaff_x19[8];
          uVar24 = 0;
          lVar18 = *(long *)(unaff_x19[7] + 0x18);
        }
        memcpy((void *)(unaff_x19[2] + uVar24),(void *)(lVar18 + lVar20),uVar17);
        uVar17 = unaff_x19[5] + uVar17;
        unaff_x19[5] = uVar17;
        if ((uVar24 < uVar17) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
          uVar16 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar24,
                                (int)uVar17 - (int)uVar24);
          *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
        }
        unaff_x19[8] = 0;
      }
      *(undefined4 *)(unaff_x19 + 1) = 0x49;
LAB_03346aa8:
      if (*(long *)(unaff_x19[7] + 0x28) != 0) {
        uVar17 = unaff_x19[5];
        uVar19 = uVar17;
        while( true ) {
          if (uVar19 == unaff_x19[3]) {
            if ((uVar17 < uVar19) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
              uVar16 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar17,
                                    (int)uVar19 - (int)uVar17);
              *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
            }
            FUN_033473d0();
            if (unaff_x19[5] != 0) goto LAB_033473c0;
            uVar19 = 0;
            uVar17 = 0;
          }
          lVar18 = unaff_x19[8];
          lVar20 = *(long *)(unaff_x19[7] + 0x28);
          unaff_x19[8] = lVar18 + 1;
          cVar7 = *(char *)(lVar20 + lVar18);
          unaff_x19[5] = uVar19 + 1;
          *(char *)(unaff_x19[2] + uVar19) = cVar7;
          if (cVar7 == '\0') break;
          uVar19 = unaff_x19[5];
        }
        if ((*(int *)(unaff_x19[7] + 0x44) != 0) && (uVar17 < (ulong)unaff_x19[5])) {
          uVar16 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar17,
                                (int)unaff_x19[5] - (int)uVar17);
          *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
        }
        unaff_x19[8] = 0;
      }
      *(undefined4 *)(unaff_x19 + 1) = 0x5b;
LAB_03346b74:
      if (*(long *)(unaff_x19[7] + 0x38) != 0) {
        uVar17 = unaff_x19[5];
        uVar19 = uVar17;
        while( true ) {
          if (uVar19 == unaff_x19[3]) {
            if ((uVar17 < uVar19) && (*(int *)(unaff_x19[7] + 0x44) != 0)) {
              uVar16 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar17,
                                    (int)uVar19 - (int)uVar17);
              *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
            }
            FUN_033473d0();
            if (unaff_x19[5] != 0) goto LAB_033473c0;
            uVar19 = 0;
            uVar17 = 0;
          }
          lVar18 = unaff_x19[8];
          lVar20 = *(long *)(unaff_x19[7] + 0x38);
          unaff_x19[8] = lVar18 + 1;
          cVar7 = *(char *)(lVar20 + lVar18);
          unaff_x19[5] = uVar19 + 1;
          *(char *)(unaff_x19[2] + uVar19) = cVar7;
          if (cVar7 == '\0') break;
          uVar19 = unaff_x19[5];
        }
        if ((*(int *)(unaff_x19[7] + 0x44) != 0) && (uVar17 < (ulong)unaff_x19[5])) {
          uVar16 = FUN_0334883c(*(undefined8 *)(unaff_x20 + 0x60),unaff_x19[2] + uVar17,
                                (int)unaff_x19[5] - (int)uVar17);
          *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
        }
      }
      *(undefined4 *)(unaff_x19 + 1) = 0x67;
LAB_03346c3c:
      if (*(int *)(unaff_x19[7] + 0x44) != 0) {
        lVar18 = unaff_x19[5];
        if ((ulong)unaff_x19[3] < lVar18 + 2U) {
          FUN_033473d0();
          lVar18 = 0;
          if (unaff_x19[5] != 0) goto LAB_033473c0;
        }
        uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
        unaff_x19[5] = lVar18 + 1;
        *(char *)(unaff_x19[2] + lVar18) = (char)uVar16;
        uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
        lVar18 = unaff_x19[5];
        unaff_x19[5] = lVar18 + 1;
        *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 8);
        uVar16 = FUN_0334883c(0,0,0);
        *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 1) = 0x71;
      FUN_033473d0();
      if (unaff_x19[5] != 0) goto LAB_033473c0;
    }
    else {
LAB_03346958:
      if (iVar14 < 0x5b) {
        if (iVar14 == 0x45) goto LAB_03346974;
        if (iVar14 != 0x49) goto LAB_03346cc8;
        goto LAB_03346aa8;
      }
      if (iVar14 == 0x5b) goto LAB_03346b74;
      if (iVar14 == 0x67) goto LAB_03346c3c;
    }
LAB_03346cc8:
    if (*(int *)(unaff_x20 + 8) == 0) goto LAB_03346cd0;
  }
  puVar9 = Method_OVRTask_SetResult<bool>__;
  puVar8 = Method_OVRTask_SetResult<OVRResult<ulong,_OVRPlugin_Result>>__;
  if (*(int *)((long)unaff_x19 + 0xc4) == 0) {
    uVar12 = FUN_03347460();
    goto LAB_03347160;
  }
  if ((int)unaff_x19[0x19] == 3) {
    do {
      do {
        uVar12 = *(uint *)((long)unaff_x19 + 0xb4);
        if (uVar12 < 0x103) {
          FUN_03346128();
          uVar12 = *(uint *)((long)unaff_x19 + 0xb4);
          if ((unaff_w21 == 0) && (uVar12 < 0x103)) goto LAB_033473b0;
          if (uVar12 == 0) goto LAB_033470d8;
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
          if (2 < uVar12) goto LAB_03346e54;
          uVar17 = (ulong)*(uint *)((long)unaff_x19 + 0xac);
LAB_03346fec:
          uVar12 = *(uint *)((long)unaff_x19 + 0x170c);
          bVar5 = *(byte *)(unaff_x19[0xc] + uVar17);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar12 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar12) = 0;
          uVar12 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar12 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar12) = 0;
          uVar12 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar12 + 1;
          *(byte *)(unaff_x19[0x2e0] + (ulong)uVar12) = bVar5;
          *(short *)((long)unaff_x19 + (ulong)bVar5 * 4 + 0xd4) =
               *(short *)((long)unaff_x19 + (ulong)bVar5 * 4 + 0xd4) + 1;
          iVar14 = *(int *)((long)unaff_x19 + 0xac) + 1;
          bVar11 = *(int *)((long)unaff_x19 + 0x170c) == (int)unaff_x19[0x2e2];
          *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) + -1;
        }
        else {
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
LAB_03346e54:
          uVar17 = (ulong)*(uint *)((long)unaff_x19 + 0xac);
          if (*(uint *)((long)unaff_x19 + 0xac) == 0) goto LAB_03346fec;
          pcVar2 = (char *)(unaff_x19[0xc] + uVar17);
          cVar7 = pcVar2[-1];
          if (((cVar7 != *pcVar2) || (cVar7 != pcVar2[1])) || (cVar7 != pcVar2[2]))
          goto LAB_03346fec;
          pcVar10 = (char *)(unaff_x19[0xc] + uVar17 + 5);
          do {
            pcVar21 = pcVar10;
            if (cVar7 != pcVar21[-2]) {
              pcVar21 = pcVar21 + -2;
              goto LAB_03346f3c;
            }
            if (cVar7 != pcVar21[-1]) {
              pcVar21 = pcVar21 + -1;
              goto LAB_03346f3c;
            }
            if (cVar7 != *pcVar21) goto LAB_03346f3c;
            if (cVar7 != pcVar21[1]) {
              pcVar21 = pcVar21 + 1;
              goto LAB_03346f3c;
            }
            if (cVar7 != pcVar21[2]) {
              pcVar21 = pcVar21 + 2;
              goto LAB_03346f3c;
            }
            if (cVar7 != pcVar21[3]) {
              pcVar21 = pcVar21 + 3;
              goto LAB_03346f3c;
            }
            if (cVar7 != pcVar21[4]) {
              pcVar21 = pcVar21 + 4;
              goto LAB_03346f3c;
            }
          } while ((pcVar21 + 5 < pcVar2 + 0x102) && (pcVar10 = pcVar21 + 8, cVar7 == pcVar21[5]));
          pcVar21 = pcVar21 + 5;
LAB_03346f3c:
          uVar1 = ((int)pcVar21 - (int)(pcVar2 + 0x102)) + 0x102;
          if (uVar1 <= uVar12) {
            uVar12 = uVar1;
          }
          *(uint *)(unaff_x19 + 0x14) = uVar12;
          if (uVar12 < 3) goto LAB_03346fec;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar1) = 1;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar1) = 0;
          uVar1 = *(uint *)((long)unaff_x19 + 0x170c);
          bVar6 = puVar8[(ulong)(uVar12 - 3) & 0xff];
          *(uint *)((long)unaff_x19 + 0x170c) = uVar1 + 1;
          *(char *)(unaff_x19[0x2e0] + (ulong)uVar1) = (char)(uVar12 - 3);
          bVar5 = *puVar9;
          *(short *)((long)unaff_x19 + (ulong)bVar6 * 4 + 0x4d8) =
               *(short *)((long)unaff_x19 + (ulong)bVar6 * 4 + 0x4d8) + 1;
          *(short *)((long)unaff_x19 + (ulong)bVar5 * 4 + 0x9c8) =
               *(short *)((long)unaff_x19 + (ulong)bVar5 * 4 + 0x9c8) + 1;
          lVar18 = unaff_x19[0x14];
          *(undefined4 *)(unaff_x19 + 0x14) = 0;
          iVar14 = *(int *)((long)unaff_x19 + 0xac) + (int)lVar18;
          bVar11 = *(int *)((long)unaff_x19 + 0x170c) == (int)unaff_x19[0x2e2];
          *(int *)((long)unaff_x19 + 0xb4) = *(int *)((long)unaff_x19 + 0xb4) - (int)lVar18;
        }
        *(int *)((long)unaff_x19 + 0xac) = iVar14;
      } while (!bVar11);
      FUN_03342408();
      unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
      FUN_033473d0(*unaff_x19);
    } while (*(int *)(*unaff_x19 + 0x20) != 0);
  }
  else {
    if ((int)unaff_x19[0x19] != 2) {
      uVar12 = (*(code *)(&PTR_FUN_07272e40)[(long)*(int *)((long)unaff_x19 + 0xc4) * 2])();
      goto LAB_03347160;
    }
    do {
      do {
        if ((*(int *)((long)unaff_x19 + 0xb4) == 0) &&
           (FUN_03346128(), *(int *)((long)unaff_x19 + 0xb4) == 0)) {
          if (unaff_w21 != 0) goto LAB_033470d8;
          goto LAB_033473b0;
        }
        uVar12 = *(uint *)((long)unaff_x19 + 0x170c);
        *(undefined4 *)(unaff_x19 + 0x14) = 0;
        bVar5 = *(byte *)(unaff_x19[0xc] + (ulong)*(uint *)((long)unaff_x19 + 0xac));
        *(uint *)((long)unaff_x19 + 0x170c) = uVar12 + 1;
        *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar12) = 0;
        uVar12 = *(uint *)((long)unaff_x19 + 0x170c);
        *(uint *)((long)unaff_x19 + 0x170c) = uVar12 + 1;
        *(undefined1 *)(unaff_x19[0x2e0] + (ulong)uVar12) = 0;
        uVar12 = *(uint *)((long)unaff_x19 + 0x170c);
        *(uint *)((long)unaff_x19 + 0x170c) = uVar12 + 1;
        *(byte *)(unaff_x19[0x2e0] + (ulong)uVar12) = bVar5;
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
    return 0;
  }
  goto LAB_033473c0;
LAB_033470d8:
  *(undefined4 *)((long)unaff_x19 + 0x172c) = 0;
  if (unaff_w21 == 4) {
    FUN_03342408();
    unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
    FUN_033473d0(*unaff_x19);
    uVar12 = 2;
    if (*(int *)(*unaff_x19 + 0x20) != 0) {
      uVar12 = 3;
    }
LAB_03347160:
    if ((uVar12 & 0xfffffffe) == 2) {
      *(undefined4 *)(unaff_x19 + 1) = 0x29a;
    }
    if ((uVar12 & 0xfffffffd) == 0) goto LAB_033473b0;
    if (uVar12 != 1) goto LAB_033471f8;
  }
  else if (*(int *)((long)unaff_x19 + 0x170c) != 0) {
    FUN_03342408();
    unaff_x19[0x13] = (ulong)*(uint *)((long)unaff_x19 + 0xac);
    FUN_033473d0(*unaff_x19);
    if (*(int *)(*unaff_x19 + 0x20) == 0) goto LAB_033473b0;
  }
  if (unaff_w21 != 5) {
    if (unaff_w21 == 1) {
      FUN_03342338();
    }
    else {
      FUN_03342110();
      if (unaff_w21 == 3) {
        __s = (void *)unaff_x19[0xf];
        uVar17 = (ulong)(*(int *)((long)unaff_x19 + 0x84) - 1);
        *(undefined2 *)((long)__s + uVar17 * 2) = 0;
        memset(__s,0,uVar17 << 1);
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
      return 0;
    }
    if ((int)unaff_x19[6] < 1) {
      return 1;
    }
    uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
    if ((int)unaff_x19[6] == 2) {
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)uVar16;
      uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 8);
      uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 0x10);
      uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 0x18);
      lVar18 = unaff_x19[5];
      uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)uVar16;
      uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 8);
      uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 0x10);
      lVar18 = unaff_x19[5];
      lVar20 = unaff_x19[2];
      uVar17 = *(ulong *)(unaff_x20 + 0x10) >> 0x18;
    }
    else {
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 0x18);
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)((ulong)uVar16 >> 0x10);
      uVar17 = *(ulong *)(unaff_x20 + 0x60);
      lVar18 = unaff_x19[5];
      unaff_x19[5] = lVar18 + 1;
      *(char *)(unaff_x19[2] + lVar18) = (char)(uVar17 >> 8);
      lVar18 = unaff_x19[5];
      lVar20 = unaff_x19[2];
    }
    unaff_x19[5] = lVar18 + 1;
    *(char *)(lVar20 + lVar18) = (char)uVar17;
    FUN_033473d0();
    if (0 < (int)unaff_x19[6]) {
      *(int *)(unaff_x19 + 6) = -(int)unaff_x19[6];
    }
    return (ulong)(unaff_x19[5] == 0);
  }
LAB_033473c0:
  *(undefined4 *)((long)unaff_x19 + 0x4c) = 0xffffffff;
  return 0;
}


