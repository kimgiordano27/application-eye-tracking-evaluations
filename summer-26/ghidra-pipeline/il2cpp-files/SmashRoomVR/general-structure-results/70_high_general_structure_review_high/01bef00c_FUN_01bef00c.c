/*
FUNCTION_NAME: FUN_01bef00c
ENTRY_POINT: 01bef00c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_01bef00c(undefined1 param_1 [16],ulong param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed2fb & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed2fb = 1;
  }
  uVar15 = *(undefined8 *)(param_5 + 0x28);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03922f24(uVar15,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (*(long *)(param_5 + 0x48) != 0) {
    if (*(int *)(param_5 + 0x20) != *(int *)(*(long *)(param_5 + 0x48) + 0x18)) {
      FUN_01bee72c(param_5);
    }
    lVar8 = *(long *)(param_5 + 0x58);
    if (lVar8 != 0) {
      lVar16 = 0;
      uVar6 = 0;
      do {
        fVar25 = (float)param_3;
        fVar31 = (float)param_4;
        if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar6) {
          fVar22 = (float)FUN_01beec9c(param_5,*(undefined8 *)(param_5 + 0x28));
          uVar6 = param_2;
          fVar28 = fVar25;
          uVar26 = FUN_01beeed4(param_5,*(undefined8 *)(param_5 + 0x28));
          lVar8 = *(long *)(param_5 + 0x58);
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01befd38;
            fVar29 = fVar28;
            fVar38 = (float)uVar6;
            fVar23 = (float)FUN_01beec9c(param_5,*(undefined8 *)(lVar8 + 0x20));
            lVar8 = *(long *)(param_5 + 0x60);
            fVar29 = (fVar25 - fVar29) * (fVar25 - fVar29);
            fVar36 = (float)param_2;
            if (fVar29 + (fVar22 - fVar23) * (fVar22 - fVar23) +
                         (fVar36 - fVar38) * (fVar36 - fVar38) <
                *(float *)(param_5 + 0x50) * *(float *)(param_5 + 0x50)) {
              if (lVar8 != 0) {
                lVar16 = 0;
                fVar38 = 0.0;
                uVar18 = 0;
                goto LAB_01bef1e0;
              }
            }
            else if (lVar8 != 0) {
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01befd38;
              uVar15 = *(undefined8 *)(lVar8 + 0x20);
              fVar29 = *(float *)(lVar8 + 0x28);
              if (DAT_03fed25d == '\0') {
                thunk_FUN_01ad9084(
                                  Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                  );
                DAT_03fed25d = '\x01';
              }
              fVar22 = fVar22 - (float)uVar15;
              fVar36 = fVar36 - (float)((ulong)uVar15 >> 0x20);
              fVar25 = fVar25 - fVar29;
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar18 = (ulong)(uint)DAT_00b55370;
              fVar38 = SQRT(fVar25 * fVar25 + fVar22 * fVar22 + fVar36 * fVar36);
              if (fVar38 <= DAT_00b55370) {
                if (DAT_03fed257 == '\0') {
                  thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                  DAT_03fed257 = '\x01';
                }
                uVar15 = **(undefined8 **)
                           (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
                fVar38 = *(float *)(*(undefined8 **)
                                     (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                     0xb8) + 1);
              }
              else {
                uVar15 = CONCAT44(fVar36 / fVar38,fVar22 / fVar38);
                fVar38 = fVar25 / fVar38;
              }
              lVar8 = *(long *)(param_5 + 0x60);
              if (lVar8 != 0) {
                lVar17 = 0;
                lVar16 = 8;
                goto LAB_01befcbc;
              }
            }
          }
          break;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_01befd38;
        lVar17 = *(long *)(param_5 + 0x60);
        uVar21 = FUN_01beec9c(param_5,*(undefined8 *)(lVar8 + uVar6 * 8 + 0x20));
        if (lVar17 == 0) break;
        if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_01befd38;
        lVar17 = lVar17 + lVar16;
        *(undefined4 *)(lVar17 + 0x20) = uVar21;
        *(int *)(lVar17 + 0x24) = (int)param_2;
        *(int *)(lVar17 + 0x28) = (int)param_3;
        lVar8 = *(long *)(param_5 + 0x58);
        lVar16 = lVar16 + 0xc;
        uVar6 = uVar6 + 1;
      } while (lVar8 != 0);
    }
  }
  goto LAB_01befd34;
  while( true ) {
    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_01befd38;
    lVar11 = lVar8 + lVar16;
    uVar15 = *(undefined8 *)(lVar17 + lVar16 + 0x20);
    fVar23 = *(float *)(param_5 + 0x40);
    bVar5 = fVar23 < 0.0;
    if (1.0 < fVar23) {
      fVar23 = 1.0;
    }
    if (bVar5) {
      fVar23 = 0.0;
    }
    fVar24 = (float)*(undefined8 *)(lVar11 + 0x2c);
    fVar27 = (float)((ulong)*(undefined8 *)(lVar11 + 0x2c) >> 0x20);
    fVar29 = *(float *)(lVar11 + 0x34) +
             ((*(float *)(lVar11 + 0x28) + *(float *)(lVar17 + lVar16 + 0x28)) -
             *(float *)(lVar11 + 0x34)) * fVar23;
    *(ulong *)(lVar8 + lVar16 + 0x2c) =
         CONCAT44(fVar27 + (((float)((ulong)*(undefined8 *)(lVar11 + 0x20) >> 0x20) +
                            (float)((ulong)uVar15 >> 0x20)) - fVar27) * fVar23,
                  fVar24 + (((float)*(undefined8 *)(lVar11 + 0x20) + (float)uVar15) - fVar24) *
                           fVar23);
    *(float *)(lVar11 + 0x34) = fVar29;
    lVar8 = *(long *)(param_5 + 0x60);
    lVar16 = lVar16 + 0xc;
    uVar18 = uVar18 + 1;
    if (lVar8 == 0) break;
LAB_01bef1e0:
    puVar3 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    fVar23 = DAT_00b55370;
    uVar20 = *(ulong *)(lVar8 + 0x18);
    if ((long)((int)uVar20 + -1) <= (long)uVar18) {
      if (*(int *)(param_5 + 0x38) < 1) goto LAB_01bef680;
      iVar13 = 0;
      goto LAB_01bef340;
    }
    if ((uVar20 & 0xffffffff) <= uVar18 + 1) goto LAB_01befd38;
    lVar17 = *(long *)(param_5 + 0x68);
    if (lVar17 == 0) break;
  }
  goto LAB_01befd34;
  while( true ) {
    if (((ulong)*(uint *)(lVar11 + 0x18) <= lVar16 - 8U) || ((ulong)uVar7 <= lVar16 - 7U))
    goto LAB_01befd38;
    fVar25 = *(float *)(lVar11 + lVar16 * 4);
    uVar40 = *(undefined8 *)(lVar8 + lVar17 + 0x20);
    uVar18 = CONCAT44((float)((ulong)uVar40 >> 0x20) + (float)((ulong)uVar15 >> 0x20) * fVar25,
                      (float)uVar40 + (float)uVar15 * fVar25);
    *(ulong *)(lVar8 + lVar17 + 0x2c) = uVar18;
    *(float *)(lVar8 + lVar17 + 0x34) = *(float *)(lVar8 + lVar17 + 0x28) + fVar38 * fVar25;
    lVar8 = *(long *)(param_5 + 0x60);
    lVar16 = lVar16 + 1;
    lVar17 = lVar17 + 0xc;
    if (lVar8 == 0) break;
LAB_01befcbc:
    fVar29 = (float)uVar18;
    uVar7 = *(uint *)(lVar8 + 0x18);
    if ((long)(int)uVar7 <= (long)(lVar16 - 7U)) goto LAB_01bef680;
    if ((ulong)uVar7 <= lVar16 - 8U) goto LAB_01befd38;
    lVar11 = *(long *)(param_5 + 0x48);
    if (lVar11 == 0) break;
  }
  goto LAB_01befd34;
  while( true ) {
    lVar17 = 0;
    lVar16 = 8;
    while( true ) {
      uVar20 = *(ulong *)(lVar8 + 0x18);
      uVar18 = lVar16 - 7;
      iVar19 = (int)uVar20;
      if ((long)iVar19 <= (long)uVar18) break;
      if (((uVar20 & 0xffffffff) <= lVar16 - 8U) || ((uVar20 & 0xffffffff) <= uVar18))
      goto LAB_01befd38;
      lVar11 = lVar8 + lVar17;
      uVar15 = *(undefined8 *)(lVar11 + 0x20);
      fVar38 = *(float *)(lVar11 + 0x28);
      uVar40 = *(undefined8 *)(lVar11 + 0x2c);
      fVar29 = *(float *)(lVar11 + 0x34);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(puVar3);
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar39 = (float)uVar15;
      fVar24 = (float)uVar40 - fVar39;
      fVar32 = (float)((ulong)uVar15 >> 0x20);
      fVar27 = (float)((ulong)uVar40 >> 0x20) - fVar32;
      fVar29 = fVar29 - fVar38;
      fVar30 = SQRT(fVar29 * fVar29 + fVar24 * fVar24 + fVar27 * fVar27);
      if (fVar30 <= fVar23) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        uVar15 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
        ;
        fVar29 = *(float *)(*(undefined8 **)
                             (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
        ;
      }
      else {
        uVar15 = CONCAT44(fVar27 / fVar30,fVar24 / fVar30);
        fVar29 = fVar29 / fVar30;
      }
      lVar9 = *(long *)(param_5 + 0x48);
      if (lVar9 == 0) goto LAB_01befd34;
      if (((ulong)*(uint *)(lVar9 + 0x18) <= lVar16 - 8U) || (*(uint *)(lVar8 + 0x18) <= uVar18))
      goto LAB_01befd38;
      fVar24 = *(float *)(lVar9 + lVar16 * 4);
      lVar8 = lVar8 + lVar17;
      lVar16 = lVar16 + 1;
      lVar17 = lVar17 + 0xc;
      *(ulong *)(lVar8 + 0x2c) =
           CONCAT44(fVar32 + (float)((ulong)uVar15 >> 0x20) * fVar24,fVar39 + (float)uVar15 * fVar24
                   );
      *(float *)(lVar11 + 0x34) = fVar38 + fVar29 * fVar24;
      lVar8 = *(long *)(param_5 + 0x60);
      if (lVar8 == 0) goto LAB_01befd34;
    }
    if (iVar19 == 0) goto LAB_01befd38;
    lVar16 = lVar8 + (long)(iVar19 + -1) * 0xc;
    fVar24 = *(float *)(lVar16 + 0x20) - fVar22;
    fVar29 = *(float *)(lVar16 + 0x28) - fVar25;
    fVar29 = fVar29 * fVar29;
    fVar27 = *(float *)(lVar16 + 0x24) - fVar36;
    fVar38 = *(float *)(param_5 + 0x3c) * *(float *)(param_5 + 0x3c);
    if ((fVar24 * fVar24 + fVar27 * fVar27 + fVar29 < fVar38) ||
       (iVar13 = iVar13 + 1, *(int *)(param_5 + 0x38) <= iVar13)) break;
LAB_01bef340:
    uVar7 = (int)uVar20 - 1;
    if (0 < (int)uVar7) {
      if (lVar8 == 0) goto LAB_01befd34;
      uVar18 = (ulong)uVar7;
      lVar16 = 0;
      lVar17 = (uVar18 * 2 + (ulong)uVar7) * 4;
      while( true ) {
        uVar1 = uVar18 + lVar16;
        uVar7 = (uint)(uVar20 + lVar16);
        if (uVar7 == *(uint *)(lVar8 + 0x18)) {
          if ((uVar20 + lVar16 & 0xffffffff) <= uVar1) goto LAB_01befd38;
          lVar8 = lVar8 + lVar17;
          *(float *)(lVar8 + 0x28) = fVar25;
          *(float *)(lVar8 + 0x20) = fVar22;
          *(float *)(lVar8 + 0x24) = fVar36;
        }
        else {
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01befd38;
          lVar11 = lVar8 + lVar17;
          lVar9 = lVar8 + (long)(int)uVar7 * 0xc;
          uVar40 = *(undefined8 *)(lVar11 + 0x20);
          uVar15 = *(undefined8 *)(lVar9 + 0x20);
          fVar38 = *(float *)(lVar9 + 0x28);
          fVar29 = *(float *)(lVar11 + 0x28);
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(puVar3);
            DAT_03fed25d = '\x01';
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar39 = (float)uVar15;
          fVar24 = (float)uVar40 - fVar39;
          fVar32 = (float)((ulong)uVar15 >> 0x20);
          fVar27 = (float)((ulong)uVar40 >> 0x20) - fVar32;
          fVar29 = fVar29 - fVar38;
          fVar30 = SQRT(fVar29 * fVar29 + fVar24 * fVar24 + fVar27 * fVar27);
          if (fVar30 <= fVar23) {
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            uVar15 = **(undefined8 **)
                       (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            fVar29 = *(float *)(*(undefined8 **)
                                 (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
                               + 1);
          }
          else {
            uVar15 = CONCAT44(fVar27 / fVar30,fVar24 / fVar30);
            fVar29 = fVar29 / fVar30;
          }
          lVar9 = *(long *)(param_5 + 0x48);
          if (lVar9 == 0) goto LAB_01befd34;
          if ((*(uint *)(lVar9 + 0x18) <= uVar1) || (*(uint *)(lVar8 + 0x18) <= uVar1))
          goto LAB_01befd38;
          fVar24 = *(float *)(lVar9 + uVar18 * 4 + 0x20 + lVar16 * 4);
          *(ulong *)(lVar8 + lVar17 + 0x20) =
               CONCAT44(fVar32 + (float)((ulong)uVar15 >> 0x20) * fVar24,
                        fVar39 + (float)uVar15 * fVar24);
          *(float *)(lVar11 + 0x28) = fVar38 + fVar29 * fVar24;
        }
        if ((int)uVar20 + -2 + (int)lVar16 < 1) break;
        lVar8 = *(long *)(param_5 + 0x60);
        lVar16 = lVar16 + -1;
        lVar17 = lVar17 + -0xc;
        if (lVar8 == 0) goto LAB_01befd34;
      }
      lVar8 = *(long *)(param_5 + 0x60);
      if (lVar8 == 0) goto LAB_01befd34;
    }
  }
LAB_01bef680:
  uVar15 = *(undefined8 *)(param_5 + 0x30);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar18 = FUN_0391f968(uVar15,0,0);
  if ((uVar18 & 1) == 0) {
    lVar8 = *(long *)(param_5 + 0x60);
    if (lVar8 != 0) {
LAB_01bef990:
      lVar16 = 4;
      lVar11 = 0x20;
      lVar9 = 0x100000000;
      lVar17 = 0x20;
      do {
        uVar18 = lVar16 - 4;
        iVar13 = (int)*(ulong *)(lVar8 + 0x18);
        if ((long)iVar13 <= (long)uVar18) {
          return;
        }
        lVar14 = *(long *)(param_5 + 0x58);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar18) {
LAB_01befd38:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar15 = *(undefined8 *)(lVar14 + lVar16 * 8);
        if (uVar18 == iVar13 - 1) {
          fVar25 = fVar31;
          fVar22 = (float)uVar6;
          fVar38 = fVar28;
          fVar23 = (float)FUN_03914250(uVar26,uVar6 & 0xffffffff,fVar28,fVar31,0);
          lVar8 = *(long *)(param_5 + 0x70);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01befd38;
          fVar24 = *(float *)(param_5 + 0x78);
          fVar34 = *(float *)(param_5 + 0x7c);
          fVar32 = *(float *)(param_5 + 0x80);
          fVar39 = *(float *)(param_5 + 0x84);
          puVar2 = (undefined4 *)(lVar8 + lVar17);
          fVar36 = (float)puVar2[1];
          fVar27 = (float)puVar2[2];
          fVar30 = (float)puVar2[3];
          fVar35 = (fVar22 * fVar32 + fVar25 * fVar24 + fVar23 * fVar39) - fVar38 * fVar34;
          fVar37 = (fVar38 * fVar24 + fVar25 * fVar34 + fVar22 * fVar39) - fVar23 * fVar32;
          fVar29 = (fVar23 * fVar34 + fVar25 * fVar32 + fVar38 * fVar39) - fVar22 * fVar24;
          fVar22 = ((fVar25 * fVar39 - fVar23 * fVar24) - fVar22 * fVar34) - fVar38 * fVar32;
          fVar25 = (float)FUN_03914250(*puVar2,fVar36,fVar27,fVar30,0);
          fVar39 = (fVar22 * fVar30 - fVar35 * fVar25) - fVar37 * fVar36;
          fVar23 = (fVar37 * fVar27 + fVar22 * fVar25 + fVar35 * fVar30) - fVar29 * fVar36;
          fVar24 = (fVar29 * fVar25 + fVar22 * fVar36 + fVar37 * fVar30) - fVar35 * fVar27;
          fVar25 = (fVar35 * fVar36 + fVar22 * fVar27 + fVar29 * fVar30) - fVar37 * fVar25;
          fVar29 = fVar29 * fVar27;
        }
        else {
          lVar14 = *(long *)(param_5 + 0x68);
          if (lVar14 == 0) break;
          if ((*(uint *)(lVar14 + 0x18) <= uVar18) ||
             ((*(ulong *)(lVar8 + 0x18) & 0xffffffff) <= lVar16 - 3U)) goto LAB_01befd38;
          lVar12 = lVar8 + (lVar9 >> 0x20) * 0xc;
          uVar40 = *(undefined8 *)(lVar8 + lVar11);
          uVar33 = *(undefined8 *)(lVar12 + 0x20);
          puVar2 = (undefined4 *)(lVar14 + lVar11);
          fVar22 = (float)puVar2[1];
          fVar29 = (float)puVar2[2];
          fVar25 = (float)((ulong)uVar33 >> 0x20) - (float)((ulong)uVar40 >> 0x20);
          uVar40 = CONCAT44(fVar25,(float)uVar33 - (float)uVar40);
          fVar25 = (float)FUN_0391419c(*puVar2,fVar22,fVar29,uVar40,fVar25,
                                       *(float *)(lVar12 + 0x28) -
                                       *(float *)((undefined8 *)(lVar8 + lVar11) + 1),0);
          lVar8 = *(long *)(param_5 + 0x70);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01befd38;
          puVar2 = (undefined4 *)(lVar8 + lVar17);
          fVar36 = (float)puVar2[1];
          fVar27 = (float)puVar2[2];
          fVar30 = (float)puVar2[3];
          fVar38 = (float)FUN_03914250(*puVar2,fVar36,fVar27,fVar30,0);
          fVar32 = (float)uVar40;
          fVar39 = (fVar32 * fVar30 - fVar25 * fVar38) - fVar22 * fVar36;
          fVar23 = (fVar22 * fVar27 + fVar32 * fVar38 + fVar25 * fVar30) - fVar29 * fVar36;
          fVar24 = (fVar29 * fVar38 + fVar32 * fVar36 + fVar22 * fVar30) - fVar25 * fVar27;
          fVar25 = (fVar25 * fVar36 + fVar32 * fVar27 + fVar29 * fVar30) - fVar22 * fVar38;
          fVar29 = fVar29 * fVar27;
        }
        FUN_01befd3c(fVar23,fVar24,fVar25,fVar39 - fVar29,param_5,uVar15);
        lVar8 = *(long *)(param_5 + 0x58);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01befd38;
        lVar14 = *(long *)(param_5 + 0x60);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_01befd38;
        puVar2 = (undefined4 *)(lVar14 + lVar11);
        FUN_01beedd4(*puVar2,puVar2[1],puVar2[2],param_5,*(undefined8 *)(lVar8 + lVar16 * 8));
        lVar8 = *(long *)(param_5 + 0x60);
        lVar16 = lVar16 + 1;
        lVar17 = lVar17 + 0x10;
        lVar11 = lVar11 + 0xc;
        lVar9 = lVar9 + 0x100000000;
      } while (lVar8 != 0);
    }
  }
  else {
    fVar22 = (float)FUN_01beec9c(param_5,*(undefined8 *)(param_5 + 0x30));
    puVar4 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    fVar25 = DAT_00b55370;
    lVar8 = *(long *)(param_5 + 0x60);
    if (lVar8 != 0) {
      lVar17 = 0x200000000;
      lVar16 = 0x34;
      uVar18 = 1;
      do {
        if ((long)((int)*(ulong *)(lVar8 + 0x18) + -1) <= (long)uVar18) {
          uVar26 = uVar26 & 0xffffffff;
          goto LAB_01bef990;
        }
        uVar20 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        if ((uVar20 <= uVar18 + 1) || (uVar20 <= uVar18 - 1)) goto LAB_01befd38;
        lVar11 = lVar8 + lVar16;
        lVar8 = lVar8 + (lVar17 >> 0x20) * 0xc;
        fVar39 = *(float *)(lVar11 + -0x14);
        fVar30 = *(float *)(lVar11 + -0x10);
        fVar36 = *(float *)(lVar8 + 0x24);
        fVar24 = *(float *)(lVar8 + 0x28);
        fVar23 = *(float *)(lVar8 + 0x20);
        fVar27 = *(float *)(lVar11 + -0xc);
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(puVar4);
          DAT_03fed25d = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar23 = fVar23 - fVar39;
        fVar36 = fVar36 - fVar30;
        fVar24 = fVar24 - fVar27;
        fVar32 = SQRT(fVar24 * fVar24 + fVar23 * fVar23 + fVar36 * fVar36);
        if (fVar32 <= fVar25) {
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(puVar3);
            DAT_03fed257 = '\x01';
          }
          pfVar10 = *(float **)(*(long *)puVar3 + 0xb8);
          fVar23 = *pfVar10;
          fVar36 = pfVar10[1];
          fVar24 = pfVar10[2];
        }
        else {
          fVar23 = fVar23 / fVar32;
          fVar36 = fVar36 / fVar32;
          fVar24 = fVar24 / fVar32;
        }
        lVar8 = *(long *)(param_5 + 0x60);
        if (lVar8 == 0) break;
        if ((*(uint *)(lVar8 + 0x18) <= uVar18) || ((ulong)*(uint *)(lVar8 + 0x18) <= uVar18 - 1))
        goto LAB_01befd38;
        pfVar10 = (float *)(lVar8 + lVar16);
        fVar27 = fVar27 * fVar24 + fVar39 * fVar23 + fVar30 * fVar36;
        fVar30 = (fVar29 * fVar24 + fVar22 * fVar23 + fVar38 * fVar36) - fVar27;
        fVar27 = (fVar24 * *pfVar10 + fVar23 * pfVar10[-2] + fVar36 * pfVar10[-1]) - fVar27;
        FUN_01bf693c((pfVar10[-2] - fVar23 * fVar27) - pfVar10[-5],
                     (pfVar10[-1] - fVar36 * fVar27) - pfVar10[-4],
                     (*pfVar10 - fVar24 * fVar27) - pfVar10[-3],
                     (fVar22 - fVar23 * fVar30) - pfVar10[-5],
                     (fVar38 - fVar36 * fVar30) - pfVar10[-4],
                     (fVar29 - fVar24 * fVar30) - pfVar10[-3],0);
        lVar8 = *(long *)(param_5 + 0x60);
        FUN_03914748(0);
        if (*(long *)(param_5 + 0x60) == 0) break;
        uVar20 = (ulong)*(uint *)(*(long *)(param_5 + 0x60) + 0x18);
        if ((uVar20 <= uVar18) || (uVar20 <= uVar18 - 1)) goto LAB_01befd38;
        fVar24 = (float)FUN_03914a7c(0);
        lVar11 = *(long *)(param_5 + 0x60);
        if (lVar11 == 0) break;
        if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar18 - 1) goto LAB_01befd38;
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01befd38;
        uVar15 = *(undefined8 *)(lVar11 + lVar16 + -0x14);
        fVar27 = *(float *)(lVar11 + lVar16 + -0xc);
        *(ulong *)((float *)(lVar8 + lVar16) + -2) =
             CONCAT44(fVar23 + (float)((ulong)uVar15 >> 0x20),fVar24 + (float)uVar15);
        *(float *)(lVar8 + lVar16) = fVar36 + fVar27;
        lVar8 = *(long *)(param_5 + 0x60);
        lVar16 = lVar16 + 0xc;
        lVar17 = lVar17 + 0x100000000;
        uVar18 = uVar18 + 1;
      } while (lVar8 != 0);
    }
  }
LAB_01befd34:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


