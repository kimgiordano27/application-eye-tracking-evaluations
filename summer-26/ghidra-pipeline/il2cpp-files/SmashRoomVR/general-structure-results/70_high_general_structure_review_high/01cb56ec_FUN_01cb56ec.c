/*
FUNCTION_NAME: FUN_01cb56ec
ENTRY_POINT: 01cb56ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


bool FUN_01cb56ec(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  if ((DAT_03feda49 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda49 = 1;
  }
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (*(char *)(param_1 + 0x84) == '\0') {
    if (param_2 == 0) {
LAB_01cb5e70:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    iVar5 = FUN_039548f8(param_2,0);
    if (0 < iVar5) {
      uVar6 = FUN_0392015c(param_1 + 0x2c,0);
      lVar9 = FUN_03954858(param_2,0);
      if (lVar9 == 0) goto LAB_01cb5e70;
      uVar7 = FUN_0391faf0(lVar9,0);
      if ((uVar6 >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
        uVar10 = FUN_03954514(param_2,0);
        *(undefined8 *)(param_1 + 0x50) = uVar10;
        thunk_FUN_01b4f09c();
        uVar10 = FUN_03954514(param_2,0);
        puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar11 = FUN_0391f968(uVar10,0,0);
        uVar17 = 0;
        if ((uVar11 & 1) != 0) {
          lVar9 = FUN_03954514(param_2,0);
          if (lVar9 == 0) goto LAB_01cb5e70;
          uVar17 = FUN_0395a1d0(lVar9,0);
        }
        *(undefined4 *)(param_1 + 0x40) = uVar17;
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        cVar1 = *(char *)(param_1 + 0x29);
        lVar9 = *(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        puVar15 = *(undefined8 **)(lVar9 + 0xb8);
        uVar17 = *(undefined4 *)(puVar15 + 1);
        *(undefined8 *)(param_1 + 0x44) = *puVar15;
        *(undefined4 *)(param_1 + 0x4c) = uVar17;
        pfVar13 = *(float **)(lVar9 + 0xb8);
        fVar26 = *pfVar13;
        fVar25 = pfVar13[1];
        fVar24 = pfVar13[2];
        iVar5 = FUN_039548f8(param_2,0);
        fVar20 = DAT_00b5568c;
        if (cVar1 == '\0') {
          if (iVar5 < 1) {
            fVar19 = 0.0;
          }
          else {
            iVar5 = 0;
            fVar19 = 0.0;
            do {
              FUN_03954b9c(&local_120,param_2,iVar5,0);
              uStack_b8 = uStack_118;
              local_c0 = local_120;
              uStack_a8 = uStack_108;
              local_b0 = uStack_110;
              uStack_98 = uStack_f8;
              local_a0 = local_100;
              uVar16 = *(undefined8 *)(param_1 + 0x70);
              uVar10 = uStack_110;
              uVar12 = local_100;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar27 = (float)uVar12;
              fVar18 = (float)uVar10;
              uVar11 = FUN_03922f24(uVar16,0,0);
              if ((uVar11 & 1) == 0) {
                lVar9 = FUN_0395ee54(&local_c0,0);
                if (lVar9 == 0) goto LAB_01cb5e70;
                uVar10 = FUN_0391c2b8(lVar9,0);
                uVar12 = FUN_0391c2b8(param_1,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar2);
                }
                uVar11 = FUN_03922f24(uVar10,uVar12,0);
                if ((uVar11 & 1) != 0) goto LAB_01cb5a98;
              }
              else {
LAB_01cb5a98:
                fVar22 = (float)FUN_0395ef44(&local_c0,0);
                uVar10 = *(undefined8 *)(param_1 + 0x44);
                fVar23 = *(float *)(param_1 + 0x4c);
                if (fVar22 <= fVar20) {
                  fVar22 = fVar20;
                }
                fVar21 = (float)FUN_0395ee3c(&local_c0,0);
                fVar27 = fVar22 * fVar27;
                fVar23 = fVar23 + fVar27;
                *(ulong *)(param_1 + 0x44) =
                     CONCAT44((float)((ulong)uVar10 >> 0x20) + fVar18 * fVar22,
                              (float)uVar10 + fVar21 * fVar22);
                *(float *)(param_1 + 0x4c) = fVar23;
                fVar18 = (float)FUN_0395ee48(&local_c0,0);
                fVar26 = fVar26 - fVar22 * fVar18;
                fVar25 = fVar25 - fVar22 * fVar23;
                fVar24 = fVar24 - fVar22 * fVar27;
                fVar19 = fVar19 + fVar22;
              }
              iVar5 = iVar5 + 1;
              iVar8 = FUN_039548f8(param_2,0);
            } while (iVar5 < iVar8);
          }
          fVar19 = 1.0 / fVar19;
          *(ulong *)(param_1 + 0x44) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x44) >> 0x20) * fVar19,
                        (float)*(undefined8 *)(param_1 + 0x44) * fVar19);
          *(float *)(param_1 + 0x4c) = fVar19 * *(float *)(param_1 + 0x4c);
        }
        else {
          if (0 < iVar5) {
            iVar5 = 0;
            do {
              FUN_03954b9c(&local_120,param_2,iVar5,0);
              uStack_e8 = uStack_118;
              local_f0 = local_120;
              uStack_d8 = uStack_108;
              uStack_e0 = uStack_110;
              uStack_c8 = uStack_f8;
              local_d0 = local_100;
              uVar16 = *(undefined8 *)(param_1 + 0x70);
              uVar10 = uStack_110;
              uVar12 = local_100;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar20 = (float)uVar10;
              fVar19 = (float)uVar12;
              uVar11 = FUN_03922f24(uVar16,0,0);
              if ((uVar11 & 1) == 0) {
                lVar9 = FUN_0395ee54(&local_f0,0);
                if (lVar9 == 0) goto LAB_01cb5e70;
                uVar10 = FUN_0391c2b8(lVar9,0);
                uVar12 = FUN_0391c2b8(param_1,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar2);
                }
                uVar11 = FUN_03922f24(uVar10,uVar12,0);
                if ((uVar11 & 1) != 0) goto LAB_01cb5958;
              }
              else {
LAB_01cb5958:
                uVar10 = *(undefined8 *)(param_1 + 0x44);
                fVar27 = *(float *)(param_1 + 0x4c);
                fVar18 = (float)FUN_0395ee3c(&local_f0,0);
                fVar27 = fVar27 + fVar19;
                *(ulong *)(param_1 + 0x44) =
                     CONCAT44((float)((ulong)uVar10 >> 0x20) + fVar20,(float)uVar10 + fVar18);
                *(float *)(param_1 + 0x4c) = fVar27;
                fVar19 = (float)FUN_0395ee48(&local_f0,0);
                fVar26 = fVar26 - fVar19;
                fVar25 = fVar25 - fVar20;
                fVar24 = fVar24 - fVar27;
              }
              iVar5 = iVar5 + 1;
              iVar8 = FUN_039548f8(param_2,0);
            } while (iVar5 < iVar8);
          }
          uVar10 = *(undefined8 *)(param_1 + 0x44);
          fVar19 = *(float *)(param_1 + 0x4c);
          iVar5 = FUN_039548f8(param_2,0);
          fVar20 = 1.0 / (float)iVar5;
          *(ulong *)(param_1 + 0x44) =
               CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar20,(float)uVar10 * fVar20);
          *(float *)(param_1 + 0x4c) = fVar19 * fVar20;
        }
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar18 = fVar24 * fVar24;
        fVar19 = SQRT(fVar18 + fVar26 * fVar26 + fVar25 * fVar25);
        fVar20 = DAT_00b55370;
        if (fVar19 <= DAT_00b55370) {
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          pfVar13 = *(float **)(*(long *)puVar3 + 0xb8);
          fVar26 = *pfVar13;
          fVar25 = pfVar13[1];
          fVar24 = pfVar13[2];
        }
        else {
          fVar26 = fVar26 / fVar19;
          fVar25 = fVar25 / fVar19;
          fVar24 = fVar24 / fVar19;
        }
        if (*(char *)(param_1 + 0x29) == '\0') {
          fVar19 = (float)FUN_039544dc(param_2,0);
          if (DAT_03fed25c == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25c = '\x01';
          }
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar20 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20);
          fVar26 = fVar20 * -fVar26;
          fVar25 = fVar20 * -fVar25;
          fVar20 = fVar20 * -fVar24;
          *(float *)(param_1 + 0x34) = fVar26;
          *(float *)(param_1 + 0x38) = fVar25;
          *(float *)(param_1 + 0x3c) = fVar20;
          fVar20 = (fVar20 * fVar20 + fVar26 * fVar26 + fVar25 * fVar25) * 0.5;
        }
        else {
          FUN_01cbcc7c(param_1);
          uVar10 = *(undefined8 *)(param_1 + 0x78);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar11 = FUN_0391f968(uVar10,0,0);
          fVar20 = 0.0;
          if ((uVar11 & 1) != 0) {
            if (*(long *)(param_1 + 0x78) == 0) goto LAB_01cb5e70;
            fVar20 = (float)FUN_0395a1d0(*(long *)(param_1 + 0x78),0);
            fVar20 = 1.0 / fVar20;
          }
          uVar10 = *(undefined8 *)(param_1 + 0x78);
          fVar27 = 1.0 / *(float *)(param_1 + 0x40);
          fVar19 = fVar27;
          if (*(float *)(param_1 + 0x40) <= 0.0) {
            fVar19 = 0.0;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar11 = FUN_0391f968(uVar10,0,0);
          if ((uVar11 & 1) == 0) {
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            puVar14 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
            uVar17 = *puVar14;
            fVar27 = (float)puVar14[1];
            fVar18 = (float)puVar14[2];
          }
          else {
            if (*(long *)(param_1 + 0x78) == 0) goto LAB_01cb5e70;
            uVar17 = FUN_03959e50(*(long *)(param_1 + 0x78),0);
          }
          *(undefined4 *)(param_1 + 100) = uVar17;
          *(float *)(param_1 + 0x68) = fVar27;
          *(float *)(param_1 + 0x6c) = fVar18;
          fVar22 = (float)FUN_039544e8(param_2,0);
          fVar23 = fVar18 - *(float *)(param_1 + 0x6c);
          *(ulong *)(param_1 + 0x58) =
               CONCAT44(fVar27 - (float)((ulong)*(undefined8 *)(param_1 + 100) >> 0x20),
                        fVar22 - (float)*(undefined8 *)(param_1 + 100));
          *(float *)(param_1 + 0x60) = fVar23;
          fVar27 = (float)FUN_039544e8(param_2,0);
          fVar22 = *(float *)(param_1 + 0x40);
          fVar18 = (fVar23 * -fVar25 - fVar26 * fVar27) - fVar24 * fVar18;
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar20 = -fVar18 / (fVar20 + fVar19);
          fVar19 = 1.0;
          *(float *)(param_1 + 0x34) = fVar26 * fVar20;
          *(float *)(param_1 + 0x38) = fVar25 * fVar20;
          *(float *)(param_1 + 0x3c) = fVar24 * fVar20;
          fVar20 = fVar22;
          if (fVar22 <= 0.0) {
            fVar20 = 1.0;
          }
          fVar18 = (float)FUN_039544e8(param_2,0);
          fVar24 = (fVar22 * -fVar25 - fVar26 * fVar18) - fVar24 * fVar19;
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          fVar20 = fVar20 * fVar24;
        }
        if (fVar20 < *(float *)(param_1 + 0x20)) {
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
        uVar10 = *(undefined8 *)(param_1 + 0x70);
        bVar4 = *(float *)(param_1 + 0x20) <= fVar20;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar11 = FUN_0391f968(uVar10,0,0);
        if ((uVar11 & 1) == 0) {
          return bVar4;
        }
        *(bool *)(param_1 + 0x84) = bVar4;
        FUN_0391b78c(param_1,bVar4,0);
        return bVar4;
      }
    }
  }
  return false;
}


