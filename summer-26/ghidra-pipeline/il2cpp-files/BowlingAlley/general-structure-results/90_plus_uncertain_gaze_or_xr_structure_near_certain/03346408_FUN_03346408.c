/*
FUNCTION_NAME: FUN_03346408
ENTRY_POINT: 03346408
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


ulong FUN_03346408(long *param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  void *__s;
  undefined1 uVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  char *pcVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  ulong __n;
  ulong uVar27;
  ulong uVar28;
  
  iVar13 = FUN_033460ac();
  if (5 < param_2) {
    return 0xfffffffe;
  }
  if (iVar13 != 0) {
    return 0xfffffffe;
  }
  if (param_1[3] != 0) {
    lVar17 = param_1[1];
    plVar26 = (long *)param_1[7];
    if ((((int)lVar17 == 0) || (*param_1 != 0)) &&
       ((iVar13 = (int)plVar26[1], param_2 == 4 || (iVar13 != 0x29a)))) {
      if ((int)param_1[4] == 0) {
LAB_0334679c:
        uVar15 = 0xfffffffb;
        lVar17 = *(long *)(Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__
                          + 0x38);
        goto LAB_03346478;
      }
      iVar4 = *(int *)((long)plVar26 + 0x4c);
      *(uint *)((long)plVar26 + 0x4c) = param_2;
      if (plVar26[5] == 0) {
        if ((int)lVar17 == 0) {
          iVar22 = -9;
          iVar3 = iVar22;
          if (iVar4 < 5) {
            iVar3 = 0;
          }
          if ((int)param_2 < 5) {
            iVar22 = 0;
          }
          if ((param_2 != 4) && ((int)(iVar22 + param_2 * 2) <= iVar3 + iVar4 * 2))
          goto LAB_0334679c;
        }
      }
      else {
        FUN_033473d0(param_1);
        if ((int)param_1[4] == 0) goto LAB_033473c0;
        iVar13 = (int)plVar26[1];
      }
      if (iVar13 == 0x2a) {
        if ((int)plVar26[6] != 0) {
          if (((int)plVar26[0x19] < 2) && (iVar13 = *(int *)((long)plVar26 + 0xc4), 1 < iVar13)) {
            if (iVar13 < 6) {
              uVar14 = 0x40;
            }
            else {
              uVar14 = 0x80;
              if (iVar13 != 6) {
                uVar14 = 0xc0;
              }
            }
          }
          else {
            uVar14 = 0;
          }
          uVar14 = uVar14 | *(int *)((long)plVar26 + 0x54) * 0x1000 - 0x7800U;
          lVar17 = plVar26[5];
          if (*(int *)((long)plVar26 + 0xac) != 0) {
            uVar14 = uVar14 | 0x20;
          }
          plVar26[5] = lVar17 + 1;
          *(char *)(plVar26[2] + lVar17) = (char)(uVar14 >> 8);
          lVar17 = plVar26[5];
          plVar26[5] = lVar17 + 1;
          *(byte *)(plVar26[2] + lVar17) =
               ((byte)uVar14 + (char)(uVar14 / 0x1f) * -0x1f | (byte)uVar14) ^ 0x1f;
          if (*(int *)((long)plVar26 + 0xac) != 0) {
            lVar17 = param_1[0xc];
            lVar20 = plVar26[5];
            plVar26[5] = lVar20 + 1;
            *(char *)(plVar26[2] + lVar20) = (char)((ulong)lVar17 >> 0x18);
            lVar20 = plVar26[5];
            plVar26[5] = lVar20 + 1;
            *(char *)(plVar26[2] + lVar20) = (char)((ulong)lVar17 >> 0x10);
            lVar17 = param_1[0xc];
            lVar20 = plVar26[5];
            plVar26[5] = lVar20 + 1;
            *(char *)(plVar26[2] + lVar20) = (char)((ulong)lVar17 >> 8);
            lVar20 = plVar26[5];
            plVar26[5] = lVar20 + 1;
            *(char *)(plVar26[2] + lVar20) = (char)lVar17;
          }
          lVar17 = FUN_03343f34(0,0,0);
          param_1[0xc] = lVar17;
          *(undefined4 *)(plVar26 + 1) = 0x71;
          FUN_033473d0(param_1);
          if (plVar26[5] != 0) goto LAB_033473c0;
          iVar13 = (int)plVar26[1];
          goto LAB_03346618;
        }
        *(undefined4 *)(plVar26 + 1) = 0x71;
        goto LAB_03346cc8;
      }
      if (iVar13 == 0x29a) {
        if ((int)param_1[1] != 0) goto LAB_0334679c;
LAB_03346cd0:
        if ((*(int *)((long)plVar26 + 0xb4) != 0) || ((param_2 != 0 && ((int)plVar26[1] != 0x29a))))
        goto LAB_03346cd8;
LAB_033471f8:
        if (param_2 == 4) {
          if (0 < (int)plVar26[6]) {
            lVar17 = param_1[0xc];
            if ((int)plVar26[6] == 2) {
              lVar20 = plVar26[5];
              plVar26[5] = lVar20 + 1;
              *(char *)(plVar26[2] + lVar20) = (char)lVar17;
              lVar17 = param_1[0xc];
              lVar20 = plVar26[5];
              plVar26[5] = lVar20 + 1;
              *(char *)(plVar26[2] + lVar20) = (char)((ulong)lVar17 >> 8);
              lVar17 = param_1[0xc];
              lVar20 = plVar26[5];
              plVar26[5] = lVar20 + 1;
              *(char *)(plVar26[2] + lVar20) = (char)((ulong)lVar17 >> 0x10);
              lVar17 = param_1[0xc];
              lVar20 = plVar26[5];
              plVar26[5] = lVar20 + 1;
              *(char *)(plVar26[2] + lVar20) = (char)((ulong)lVar17 >> 0x18);
              lVar17 = plVar26[5];
              lVar20 = param_1[2];
              plVar26[5] = lVar17 + 1;
              *(char *)(plVar26[2] + lVar17) = (char)lVar20;
              lVar17 = param_1[2];
              lVar20 = plVar26[5];
              plVar26[5] = lVar20 + 1;
              *(char *)(plVar26[2] + lVar20) = (char)((ulong)lVar17 >> 8);
              lVar17 = param_1[2];
              lVar20 = plVar26[5];
              plVar26[5] = lVar20 + 1;
              *(char *)(plVar26[2] + lVar20) = (char)((ulong)lVar17 >> 0x10);
              lVar17 = plVar26[5];
              lVar20 = plVar26[2];
              uVar15 = (ulong)param_1[2] >> 0x18;
            }
            else {
              lVar20 = plVar26[5];
              plVar26[5] = lVar20 + 1;
              *(char *)(plVar26[2] + lVar20) = (char)((ulong)lVar17 >> 0x18);
              lVar20 = plVar26[5];
              plVar26[5] = lVar20 + 1;
              *(char *)(plVar26[2] + lVar20) = (char)((ulong)lVar17 >> 0x10);
              uVar15 = param_1[0xc];
              lVar17 = plVar26[5];
              plVar26[5] = lVar17 + 1;
              *(char *)(plVar26[2] + lVar17) = (char)(uVar15 >> 8);
              lVar17 = plVar26[5];
              lVar20 = plVar26[2];
            }
            plVar26[5] = lVar17 + 1;
            *(char *)(lVar20 + lVar17) = (char)uVar15;
            FUN_033473d0(param_1);
            if (0 < (int)plVar26[6]) {
              *(int *)(plVar26 + 6) = -(int)plVar26[6];
            }
            return (ulong)(plVar26[5] == 0);
          }
          return 1;
        }
      }
      else {
LAB_03346618:
        if (iVar13 == 0x39) {
          lVar17 = FUN_0334883c(0,0,0);
          param_1[0xc] = lVar17;
          lVar17 = plVar26[5];
          plVar26[5] = lVar17 + 1;
          *(undefined1 *)(plVar26[2] + lVar17) = 0x1f;
          lVar17 = plVar26[5];
          plVar26[5] = lVar17 + 1;
          *(undefined1 *)(plVar26[2] + lVar17) = 0x8b;
          lVar17 = plVar26[5];
          plVar26[5] = lVar17 + 1;
          *(undefined1 *)(plVar26[2] + lVar17) = 8;
          piVar18 = (int *)plVar26[7];
          if (piVar18 == (int *)0x0) {
            lVar17 = plVar26[5];
            plVar26[5] = lVar17 + 1;
            *(undefined1 *)(plVar26[2] + lVar17) = 0;
            lVar17 = plVar26[5];
            plVar26[5] = lVar17 + 1;
            *(undefined1 *)(plVar26[2] + lVar17) = 0;
            lVar17 = plVar26[5];
            plVar26[5] = lVar17 + 1;
            *(undefined1 *)(plVar26[2] + lVar17) = 0;
            lVar17 = plVar26[5];
            plVar26[5] = lVar17 + 1;
            *(undefined1 *)(plVar26[2] + lVar17) = 0;
            lVar17 = plVar26[5];
            plVar26[5] = lVar17 + 1;
            *(undefined1 *)(plVar26[2] + lVar17) = 0;
            if (*(int *)((long)plVar26 + 0xc4) == 9) {
              uVar16 = 2;
            }
            else {
              uVar16 = 4;
              if ((int)plVar26[0x19] < 2 && 1 < *(int *)((long)plVar26 + 0xc4)) {
                uVar16 = 0;
              }
            }
            lVar17 = plVar26[5];
            plVar26[5] = lVar17 + 1;
            *(undefined1 *)(plVar26[2] + lVar17) = uVar16;
            lVar17 = plVar26[5];
            plVar26[5] = lVar17 + 1;
            *(undefined1 *)(plVar26[2] + lVar17) = 3;
            *(undefined4 *)(plVar26 + 1) = 0x71;
            FUN_033473d0(param_1);
            if (plVar26[5] != 0) goto LAB_033473c0;
            iVar13 = (int)plVar26[1];
            goto LAB_03346958;
          }
          iVar13 = *piVar18;
          iVar4 = piVar18[0x11];
          lVar25 = plVar26[5];
          lVar20 = *(long *)(piVar18 + 6);
          lVar24 = *(long *)(piVar18 + 10);
          lVar17 = *(long *)(piVar18 + 0xe);
          plVar26[5] = lVar25 + 1;
          *(char *)(plVar26[2] + lVar25) =
               iVar13 != 0 | (iVar4 != 0) << 1 | (lVar20 != 0) << 2 | (lVar24 != 0) << 3 |
               (lVar17 != 0) << 4;
          lVar17 = plVar26[5];
          uVar19 = *(undefined8 *)(plVar26[7] + 8);
          plVar26[5] = lVar17 + 1;
          *(char *)(plVar26[2] + lVar17) = (char)uVar19;
          lVar17 = plVar26[5];
          uVar19 = *(undefined8 *)(plVar26[7] + 8);
          plVar26[5] = lVar17 + 1;
          *(char *)(plVar26[2] + lVar17) = (char)((ulong)uVar19 >> 8);
          lVar17 = plVar26[5];
          uVar19 = *(undefined8 *)(plVar26[7] + 8);
          plVar26[5] = lVar17 + 1;
          *(char *)(plVar26[2] + lVar17) = (char)((ulong)uVar19 >> 0x10);
          lVar17 = plVar26[5];
          uVar19 = *(undefined8 *)(plVar26[7] + 8);
          plVar26[5] = lVar17 + 1;
          *(char *)(plVar26[2] + lVar17) = (char)((ulong)uVar19 >> 0x18);
          if (*(int *)((long)plVar26 + 0xc4) == 9) {
            uVar16 = 2;
          }
          else {
            uVar16 = 4;
            if ((int)plVar26[0x19] < 2 && 1 < *(int *)((long)plVar26 + 0xc4)) {
              uVar16 = 0;
            }
          }
          lVar17 = plVar26[5];
          plVar26[5] = lVar17 + 1;
          *(undefined1 *)(plVar26[2] + lVar17) = uVar16;
          lVar17 = plVar26[5];
          uVar5 = *(undefined4 *)(plVar26[7] + 0x14);
          plVar26[5] = lVar17 + 1;
          *(char *)(plVar26[2] + lVar17) = (char)uVar5;
          lVar17 = plVar26[7];
          if (*(long *)(lVar17 + 0x18) != 0) {
            lVar20 = plVar26[5];
            uVar5 = *(undefined4 *)(lVar17 + 0x20);
            plVar26[5] = lVar20 + 1;
            *(char *)(plVar26[2] + lVar20) = (char)uVar5;
            lVar17 = plVar26[5];
            uVar5 = *(undefined4 *)(plVar26[7] + 0x20);
            plVar26[5] = lVar17 + 1;
            *(char *)(plVar26[2] + lVar17) = (char)((uint)uVar5 >> 8);
            lVar17 = plVar26[7];
          }
          if (*(int *)(lVar17 + 0x44) != 0) {
            lVar17 = FUN_0334883c(param_1[0xc],plVar26[2],(int)plVar26[5]);
            param_1[0xc] = lVar17;
          }
          plVar26[8] = 0;
          *(undefined4 *)(plVar26 + 1) = 0x45;
LAB_03346974:
          lVar17 = *(long *)(plVar26[7] + 0x18);
          if (lVar17 != 0) {
            lVar20 = plVar26[8];
            uVar27 = plVar26[5];
            uVar21 = plVar26[3];
            uVar15 = (ulong)((uint)*(ushort *)(plVar26[7] + 0x20) - (int)lVar20);
            if (uVar21 < uVar27 + uVar15) {
              while( true ) {
                uVar28 = uVar21 - uVar27;
                __n = uVar28 & 0xffffffff;
                memcpy((void *)(plVar26[2] + uVar27),(void *)(lVar17 + lVar20),__n);
                uVar21 = plVar26[3];
                plVar26[5] = uVar21;
                if ((uVar27 < uVar21) && (*(int *)(plVar26[7] + 0x44) != 0)) {
                  lVar17 = FUN_0334883c(param_1[0xc],plVar26[2] + uVar27,(int)uVar21 - (int)uVar27);
                  param_1[0xc] = lVar17;
                }
                plVar26[8] = plVar26[8] + __n;
                FUN_033473d0(param_1);
                if (plVar26[5] != 0) goto LAB_033473c0;
                uVar21 = plVar26[3];
                uVar15 = (ulong)(uint)((int)uVar15 - (int)uVar28);
                if (uVar15 <= uVar21) break;
                lVar20 = plVar26[8];
                uVar27 = 0;
                lVar17 = *(long *)(plVar26[7] + 0x18);
              }
              lVar20 = plVar26[8];
              uVar27 = 0;
              lVar17 = *(long *)(plVar26[7] + 0x18);
            }
            memcpy((void *)(plVar26[2] + uVar27),(void *)(lVar17 + lVar20),uVar15);
            uVar15 = plVar26[5] + uVar15;
            plVar26[5] = uVar15;
            if ((uVar27 < uVar15) && (*(int *)(plVar26[7] + 0x44) != 0)) {
              lVar17 = FUN_0334883c(param_1[0xc],plVar26[2] + uVar27,(int)uVar15 - (int)uVar27);
              param_1[0xc] = lVar17;
            }
            plVar26[8] = 0;
          }
          *(undefined4 *)(plVar26 + 1) = 0x49;
LAB_03346aa8:
          if (*(long *)(plVar26[7] + 0x28) != 0) {
            uVar15 = plVar26[5];
            uVar21 = uVar15;
            while( true ) {
              if (uVar21 == plVar26[3]) {
                if ((uVar15 < uVar21) && (*(int *)(plVar26[7] + 0x44) != 0)) {
                  lVar17 = FUN_0334883c(param_1[0xc],plVar26[2] + uVar15,(int)uVar21 - (int)uVar15);
                  param_1[0xc] = lVar17;
                }
                FUN_033473d0(param_1);
                if (plVar26[5] != 0) goto LAB_033473c0;
                uVar21 = 0;
                uVar15 = 0;
              }
              lVar17 = plVar26[8];
              lVar20 = *(long *)(plVar26[7] + 0x28);
              plVar26[8] = lVar17 + 1;
              cVar8 = *(char *)(lVar20 + lVar17);
              plVar26[5] = uVar21 + 1;
              *(char *)(plVar26[2] + uVar21) = cVar8;
              if (cVar8 == '\0') break;
              uVar21 = plVar26[5];
            }
            if ((*(int *)(plVar26[7] + 0x44) != 0) && (uVar15 < (ulong)plVar26[5])) {
              lVar17 = FUN_0334883c(param_1[0xc],plVar26[2] + uVar15,(int)plVar26[5] - (int)uVar15);
              param_1[0xc] = lVar17;
            }
            plVar26[8] = 0;
          }
          *(undefined4 *)(plVar26 + 1) = 0x5b;
LAB_03346b74:
          if (*(long *)(plVar26[7] + 0x38) != 0) {
            uVar15 = plVar26[5];
            uVar21 = uVar15;
            while( true ) {
              if (uVar21 == plVar26[3]) {
                if ((uVar15 < uVar21) && (*(int *)(plVar26[7] + 0x44) != 0)) {
                  lVar17 = FUN_0334883c(param_1[0xc],plVar26[2] + uVar15,(int)uVar21 - (int)uVar15);
                  param_1[0xc] = lVar17;
                }
                FUN_033473d0(param_1);
                if (plVar26[5] != 0) goto LAB_033473c0;
                uVar21 = 0;
                uVar15 = 0;
              }
              lVar17 = plVar26[8];
              lVar20 = *(long *)(plVar26[7] + 0x38);
              plVar26[8] = lVar17 + 1;
              cVar8 = *(char *)(lVar20 + lVar17);
              plVar26[5] = uVar21 + 1;
              *(char *)(plVar26[2] + uVar21) = cVar8;
              if (cVar8 == '\0') break;
              uVar21 = plVar26[5];
            }
            if ((*(int *)(plVar26[7] + 0x44) != 0) && (uVar15 < (ulong)plVar26[5])) {
              lVar17 = FUN_0334883c(param_1[0xc],plVar26[2] + uVar15,(int)plVar26[5] - (int)uVar15);
              param_1[0xc] = lVar17;
            }
          }
          *(undefined4 *)(plVar26 + 1) = 0x67;
LAB_03346c3c:
          if (*(int *)(plVar26[7] + 0x44) != 0) {
            lVar17 = plVar26[5];
            if ((ulong)plVar26[3] < lVar17 + 2U) {
              FUN_033473d0(param_1);
              lVar17 = 0;
              if (plVar26[5] != 0) goto LAB_033473c0;
            }
            lVar20 = param_1[0xc];
            plVar26[5] = lVar17 + 1;
            *(char *)(plVar26[2] + lVar17) = (char)lVar20;
            lVar17 = param_1[0xc];
            lVar20 = plVar26[5];
            plVar26[5] = lVar20 + 1;
            *(char *)(plVar26[2] + lVar20) = (char)((ulong)lVar17 >> 8);
            lVar17 = FUN_0334883c(0,0,0);
            param_1[0xc] = lVar17;
          }
          *(undefined4 *)(plVar26 + 1) = 0x71;
          FUN_033473d0(param_1);
          if (plVar26[5] != 0) goto LAB_033473c0;
        }
        else {
LAB_03346958:
          if (0x5a < iVar13) {
            if (iVar13 == 0x5b) goto LAB_03346b74;
            if (iVar13 != 0x67) goto LAB_03346cc8;
            goto LAB_03346c3c;
          }
          if (iVar13 == 0x45) goto LAB_03346974;
          if (iVar13 == 0x49) goto LAB_03346aa8;
        }
LAB_03346cc8:
        if ((int)param_1[1] == 0) goto LAB_03346cd0;
LAB_03346cd8:
        puVar10 = Method_OVRTask_SetResult<bool>__;
        puVar9 = Method_OVRTask_SetResult<OVRResult<ulong,_OVRPlugin_Result>>__;
        if (*(int *)((long)plVar26 + 0xc4) == 0) {
          uVar14 = FUN_03347460(plVar26,param_2);
LAB_03347160:
          if ((uVar14 & 0xfffffffe) == 2) {
            *(undefined4 *)(plVar26 + 1) = 0x29a;
          }
          if ((uVar14 & 0xfffffffd) != 0) {
            if (uVar14 == 1) goto LAB_03347184;
            goto LAB_033471f8;
          }
        }
        else if ((int)plVar26[0x19] == 3) {
          do {
            do {
              uVar14 = *(uint *)((long)plVar26 + 0xb4);
              if (uVar14 < 0x103) {
                FUN_03346128(plVar26);
                uVar14 = *(uint *)((long)plVar26 + 0xb4);
                if ((param_2 == 0) && (uVar14 < 0x103)) goto LAB_033473b0;
                if (uVar14 == 0) goto LAB_033470d8;
                *(undefined4 *)(plVar26 + 0x14) = 0;
                if (2 < uVar14) goto LAB_03346e54;
                uVar15 = (ulong)*(uint *)((long)plVar26 + 0xac);
LAB_03346fec:
                uVar14 = *(uint *)((long)plVar26 + 0x170c);
                bVar6 = *(byte *)(plVar26[0xc] + uVar15);
                *(uint *)((long)plVar26 + 0x170c) = uVar14 + 1;
                *(undefined1 *)(plVar26[0x2e0] + (ulong)uVar14) = 0;
                uVar14 = *(uint *)((long)plVar26 + 0x170c);
                *(uint *)((long)plVar26 + 0x170c) = uVar14 + 1;
                *(undefined1 *)(plVar26[0x2e0] + (ulong)uVar14) = 0;
                uVar14 = *(uint *)((long)plVar26 + 0x170c);
                *(uint *)((long)plVar26 + 0x170c) = uVar14 + 1;
                *(byte *)(plVar26[0x2e0] + (ulong)uVar14) = bVar6;
                *(short *)((long)plVar26 + (ulong)bVar6 * 4 + 0xd4) =
                     *(short *)((long)plVar26 + (ulong)bVar6 * 4 + 0xd4) + 1;
                uVar14 = *(int *)((long)plVar26 + 0xac) + 1;
                bVar12 = *(int *)((long)plVar26 + 0x170c) == (int)plVar26[0x2e2];
                *(int *)((long)plVar26 + 0xb4) = *(int *)((long)plVar26 + 0xb4) + -1;
              }
              else {
                *(undefined4 *)(plVar26 + 0x14) = 0;
LAB_03346e54:
                uVar15 = (ulong)*(uint *)((long)plVar26 + 0xac);
                if (*(uint *)((long)plVar26 + 0xac) == 0) goto LAB_03346fec;
                pcVar2 = (char *)(plVar26[0xc] + uVar15);
                cVar8 = pcVar2[-1];
                if (((cVar8 != *pcVar2) || (cVar8 != pcVar2[1])) || (cVar8 != pcVar2[2]))
                goto LAB_03346fec;
                pcVar11 = (char *)(plVar26[0xc] + uVar15 + 5);
                do {
                  pcVar23 = pcVar11;
                  if (cVar8 != pcVar23[-2]) {
                    pcVar23 = pcVar23 + -2;
                    goto LAB_03346f3c;
                  }
                  if (cVar8 != pcVar23[-1]) {
                    pcVar23 = pcVar23 + -1;
                    goto LAB_03346f3c;
                  }
                  if (cVar8 != *pcVar23) goto LAB_03346f3c;
                  if (cVar8 != pcVar23[1]) {
                    pcVar23 = pcVar23 + 1;
                    goto LAB_03346f3c;
                  }
                  if (cVar8 != pcVar23[2]) {
                    pcVar23 = pcVar23 + 2;
                    goto LAB_03346f3c;
                  }
                  if (cVar8 != pcVar23[3]) {
                    pcVar23 = pcVar23 + 3;
                    goto LAB_03346f3c;
                  }
                  if (cVar8 != pcVar23[4]) {
                    pcVar23 = pcVar23 + 4;
                    goto LAB_03346f3c;
                  }
                } while ((pcVar23 + 5 < pcVar2 + 0x102) &&
                        (pcVar11 = pcVar23 + 8, cVar8 == pcVar23[5]));
                pcVar23 = pcVar23 + 5;
LAB_03346f3c:
                uVar1 = ((int)pcVar23 - (int)(pcVar2 + 0x102)) + 0x102;
                if (uVar1 <= uVar14) {
                  uVar14 = uVar1;
                }
                *(uint *)(plVar26 + 0x14) = uVar14;
                if (uVar14 < 3) goto LAB_03346fec;
                uVar1 = *(uint *)((long)plVar26 + 0x170c);
                *(uint *)((long)plVar26 + 0x170c) = uVar1 + 1;
                *(undefined1 *)(plVar26[0x2e0] + (ulong)uVar1) = 1;
                uVar1 = *(uint *)((long)plVar26 + 0x170c);
                *(uint *)((long)plVar26 + 0x170c) = uVar1 + 1;
                *(undefined1 *)(plVar26[0x2e0] + (ulong)uVar1) = 0;
                uVar1 = *(uint *)((long)plVar26 + 0x170c);
                bVar7 = puVar9[(ulong)(uVar14 - 3) & 0xff];
                *(uint *)((long)plVar26 + 0x170c) = uVar1 + 1;
                *(char *)(plVar26[0x2e0] + (ulong)uVar1) = (char)(uVar14 - 3);
                bVar6 = *puVar10;
                *(short *)((long)plVar26 + (ulong)bVar7 * 4 + 0x4d8) =
                     *(short *)((long)plVar26 + (ulong)bVar7 * 4 + 0x4d8) + 1;
                *(short *)((long)plVar26 + (ulong)bVar6 * 4 + 0x9c8) =
                     *(short *)((long)plVar26 + (ulong)bVar6 * 4 + 0x9c8) + 1;
                lVar17 = plVar26[0x14];
                *(undefined4 *)(plVar26 + 0x14) = 0;
                uVar14 = *(int *)((long)plVar26 + 0xac) + (int)lVar17;
                bVar12 = *(int *)((long)plVar26 + 0x170c) == (int)plVar26[0x2e2];
                *(int *)((long)plVar26 + 0xb4) = *(int *)((long)plVar26 + 0xb4) - (int)lVar17;
              }
              *(uint *)((long)plVar26 + 0xac) = uVar14;
            } while (!bVar12);
            uVar15 = plVar26[0x13];
            if ((long)uVar15 < 0) {
              lVar17 = 0;
            }
            else {
              lVar17 = plVar26[0xc] + (uVar15 & 0xffffffff);
            }
            FUN_03342408(plVar26,lVar17,uVar14 - uVar15,0);
            plVar26[0x13] = (ulong)*(uint *)((long)plVar26 + 0xac);
            FUN_033473d0(*plVar26);
          } while (*(int *)(*plVar26 + 0x20) != 0);
        }
        else {
          if ((int)plVar26[0x19] != 2) {
            uVar14 = (*(code *)(&PTR_FUN_07272e40)[(long)*(int *)((long)plVar26 + 0xc4) * 2])
                               (plVar26,param_2);
            goto LAB_03347160;
          }
          do {
            do {
              if ((*(int *)((long)plVar26 + 0xb4) == 0) &&
                 (FUN_03346128(plVar26), *(int *)((long)plVar26 + 0xb4) == 0)) {
                if (param_2 != 0) goto LAB_033470d8;
                goto LAB_033473b0;
              }
              uVar14 = *(uint *)((long)plVar26 + 0x170c);
              *(undefined4 *)(plVar26 + 0x14) = 0;
              bVar6 = *(byte *)(plVar26[0xc] + (ulong)*(uint *)((long)plVar26 + 0xac));
              *(uint *)((long)plVar26 + 0x170c) = uVar14 + 1;
              *(undefined1 *)(plVar26[0x2e0] + (ulong)uVar14) = 0;
              uVar14 = *(uint *)((long)plVar26 + 0x170c);
              *(uint *)((long)plVar26 + 0x170c) = uVar14 + 1;
              *(undefined1 *)(plVar26[0x2e0] + (ulong)uVar14) = 0;
              uVar14 = *(uint *)((long)plVar26 + 0x170c);
              *(uint *)((long)plVar26 + 0x170c) = uVar14 + 1;
              *(byte *)(plVar26[0x2e0] + (ulong)uVar14) = bVar6;
              *(short *)((long)plVar26 + (ulong)bVar6 * 4 + 0xd4) =
                   *(short *)((long)plVar26 + (ulong)bVar6 * 4 + 0xd4) + 1;
              uVar14 = *(int *)((long)plVar26 + 0xac) + 1;
              *(int *)((long)plVar26 + 0xb4) = *(int *)((long)plVar26 + 0xb4) + -1;
              *(uint *)((long)plVar26 + 0xac) = uVar14;
            } while (*(int *)((long)plVar26 + 0x170c) != (int)plVar26[0x2e2]);
            uVar15 = plVar26[0x13];
            if ((long)uVar15 < 0) {
              lVar17 = 0;
            }
            else {
              lVar17 = plVar26[0xc] + (uVar15 & 0xffffffff);
            }
            FUN_03342408(plVar26,lVar17,uVar14 - uVar15,0);
            plVar26[0x13] = (ulong)*(uint *)((long)plVar26 + 0xac);
            FUN_033473d0(*plVar26);
          } while (*(int *)(*plVar26 + 0x20) != 0);
        }
LAB_033473b0:
        if ((int)param_1[4] == 0) {
LAB_033473c0:
          *(undefined4 *)((long)plVar26 + 0x4c) = 0xffffffff;
          return 0;
        }
      }
      return 0;
    }
  }
  uVar15 = 0xfffffffe;
  lVar17 = *(long *)(Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__ + 0x20
                    );
LAB_03346478:
  param_1[6] = lVar17;
  return uVar15;
LAB_033470d8:
  *(undefined4 *)((long)plVar26 + 0x172c) = 0;
  if (param_2 == 4) {
    uVar15 = plVar26[0x13];
    if ((long)uVar15 < 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = plVar26[0xc] + (uVar15 & 0xffffffff);
    }
    FUN_03342408(plVar26,lVar17,*(uint *)((long)plVar26 + 0xac) - uVar15,1);
    plVar26[0x13] = (ulong)*(uint *)((long)plVar26 + 0xac);
    FUN_033473d0(*plVar26);
    uVar14 = 2;
    if (*(int *)(*plVar26 + 0x20) != 0) {
      uVar14 = 3;
    }
    goto LAB_03347160;
  }
  if (*(int *)((long)plVar26 + 0x170c) != 0) {
    uVar15 = plVar26[0x13];
    if ((long)uVar15 < 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = plVar26[0xc] + (uVar15 & 0xffffffff);
    }
    FUN_03342408(plVar26,lVar17,*(uint *)((long)plVar26 + 0xac) - uVar15,0);
    plVar26[0x13] = (ulong)*(uint *)((long)plVar26 + 0xac);
    FUN_033473d0(*plVar26);
    if (*(int *)(*plVar26 + 0x20) == 0) goto LAB_033473b0;
  }
LAB_03347184:
  if (param_2 != 5) {
    if (param_2 == 1) {
      FUN_03342338();
    }
    else {
      FUN_03342110(plVar26,0,0,0);
      if (param_2 == 3) {
        __s = (void *)plVar26[0xf];
        uVar15 = (ulong)(*(int *)((long)plVar26 + 0x84) - 1);
        *(undefined2 *)((long)__s + uVar15 * 2) = 0;
        memset(__s,0,uVar15 << 1);
        if (*(int *)((long)plVar26 + 0xb4) == 0) {
          *(undefined4 *)((long)plVar26 + 0xac) = 0;
          plVar26[0x13] = 0;
          *(undefined4 *)((long)plVar26 + 0x172c) = 0;
        }
      }
    }
  }
  FUN_033473d0(param_1);
  if ((int)param_1[4] == 0) goto LAB_033473c0;
  goto LAB_033471f8;
}


