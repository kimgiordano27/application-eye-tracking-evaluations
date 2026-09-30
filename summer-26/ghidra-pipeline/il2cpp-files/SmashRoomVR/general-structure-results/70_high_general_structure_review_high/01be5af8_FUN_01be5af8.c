/*
FUNCTION_NAME: FUN_01be5af8
ENTRY_POINT: 01be5af8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_17
*/


/* WARNING: Removing unreachable block (ram,0x01be6540) */
/* WARNING: Removing unreachable block (ram,0x01be6708) */

void FUN_01be5af8(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5,
                 ulong param_6,undefined1 param_7 [16],long param_8)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong uVar32;
  float local_e0;
  float local_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  if ((DAT_03fed2c0 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    DAT_03fed2c0 = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  uStack_c0 = 0;
  if (DAT_03fed260 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed260 = '\x01';
  }
  puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  lVar10 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  uVar8 = param_5;
  uVar11 = param_6;
  uVar20 = FUN_03914a7c(param_4,param_5,param_6,param_7._0_8_,*(undefined4 *)(lVar10 + 0x48),
                        *(undefined4 *)(lVar10 + 0x4c),*(undefined4 *)(lVar10 + 0x50),0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar25 = param_3;
  lVar10 = FUN_03956ee8(param_1,param_2,param_3,uVar20,uVar8,uVar11,0);
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar4 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar31 = DAT_00b555e4;
  if (lVar10 == 0) goto cp__a;
  plVar1 = (long *)(param_8 + 0x28);
  fVar23 = (float)param_2;
  fVar27 = (float)param_1;
  pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
  uVar11 = *(ulong *)(lVar10 + 0x18);
  fVar29 = pfVar12[1];
  uVar8 = (ulong)(uint)fVar29;
  local_dc = pfVar12[2];
  fVar30 = *pfVar12;
  fVar28 = (float)param_3;
  if ((int)uVar11 < 1) {
    local_e0 = 2.0;
    uVar32 = param_2;
  }
  else {
    local_e0 = 2.0;
    uVar15 = 0;
    puVar14 = (undefined8 *)(lVar10 + 0x20);
    fVar18 = INFINITY;
    do {
      fVar29 = (float)uVar25;
      if ((uVar11 & 0xffffffff) <= uVar15) goto LAB_01be6868;
      uStack_a8 = *(undefined4 *)(puVar14 + 5);
      uStack_c8 = puVar14[1];
      uVar20 = *puVar14;
      uStack_c0 = puVar14[2];
      uStack_b0 = (undefined4)puVar14[4];
      uStack_ac = (undefined4)((ulong)puVar14[4] >> 0x20);
      uStack_b8 = (undefined4)puVar14[3];
      local_b4 = (undefined4)((ulong)puVar14[3] >> 0x20);
      local_d0 = uVar20;
      fVar16 = (float)FUN_03959c54(&local_d0,0);
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084(puVar4);
        DAT_03fed25e = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar29 = fVar29 - fVar28;
      uVar25 = (ulong)(uint)fVar29;
      uVar32 = param_2 & 0xffffffff;
      fVar21 = (float)uVar20 - fVar23;
      uVar11 = (ulong)(uint)(fVar29 * fVar29);
      fVar29 = SQRT(fVar29 * fVar29 + (fVar16 - fVar27) * (fVar16 - fVar27) + fVar21 * fVar21);
      if (fVar29 < fVar18) {
        lVar7 = FUN_03959ba8(&local_d0,0);
        if (lVar7 == 0) goto cp__a;
        uVar20 = FUN_0391c2b8(lVar7,0);
        *(undefined8 *)(param_8 + 0x28) = uVar20;
        thunk_FUN_01b4f09c(plVar1,uVar20);
        uVar20 = *(undefined8 *)(param_8 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = FUN_03923030(uVar20,0);
        local_e0 = fVar29;
        if ((uVar8 & 1) == 0) {
          local_e0 = fVar29 + fVar31;
        }
        fVar30 = (float)FUN_03959c54(&local_d0,0);
        local_dc = (float)uVar25;
        uVar8 = uVar11;
        fVar18 = fVar29;
      }
      fVar29 = (float)uVar8;
      uVar11 = *(ulong *)(lVar10 + 0x18);
      uVar15 = uVar15 + 1;
      puVar14 = (undefined8 *)((long)puVar14 + 0x2c);
    } while ((long)uVar15 < (long)(int)uVar11);
  }
  if (uVar11 == 0) {
    *plVar1 = 0;
    thunk_FUN_01b4f09c(plVar1,0);
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ + 0xe0)
      == 0) {
    thunk_FUN_01ac7298();
  }
  fVar18 = DAT_00b55428;
  uVar8 = uVar32;
  uVar11 = param_3;
  lVar10 = FUN_03958084(fVar27,uVar32,param_3,DAT_00b55428,0);
  puVar4 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar31 = DAT_00b55370;
  fVar16 = (float)uVar8;
  fVar21 = (float)uVar11;
  if (lVar10 == 0) goto cp__a;
  uVar6 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar6) {
    uVar13 = 0;
    uVar2 = uVar6;
    do {
      fVar29 = (float)uVar32;
      if (uVar2 <= uVar13) {
LAB_01be6868:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar7 = *(long *)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar7 == 0) goto cp__a;
      lVar9 = FUN_0391c2b8(lVar7,0);
      *plVar1 = lVar9;
      thunk_FUN_01b4f09c(plVar1,lVar9);
      uVar8 = param_3;
      fVar30 = (float)FUN_0395b4d8(fVar27,lVar7,0);
      fVar21 = (float)uVar8;
      fVar16 = fVar29;
      fVar22 = fVar21;
      lVar7 = FUN_038f1768(0);
      if ((lVar7 == 0) || (lVar7 = FUN_0391c27c(lVar7,0), lVar7 == 0)) goto cp__a;
      fVar17 = (float)FUN_03928d34(lVar7,0);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(puVar4);
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar17 = fVar17 - fVar30;
      fVar16 = fVar16 - fVar29;
      fVar22 = fVar22 - fVar21;
      fVar26 = SQRT(fVar22 * fVar22 + fVar17 * fVar17 + fVar16 * fVar16);
      if (fVar26 <= fVar31) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(puVar3);
          DAT_03fed257 = '\x01';
        }
        pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
        fVar17 = *pfVar12;
        fVar16 = pfVar12[1];
        fVar22 = pfVar12[2];
      }
      else {
        fVar17 = fVar17 / fVar26;
        fVar16 = fVar16 / fVar26;
        fVar22 = fVar22 / fVar26;
      }
      uVar32 = param_2 & 0xffffffff;
      uVar2 = *(uint *)(lVar10 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar2);
    fVar16 = fVar16 * fVar18;
    fVar21 = fVar21 + fVar22 * fVar18;
    fVar29 = fVar29 + fVar16;
    fVar30 = fVar30 + fVar17 * fVar18;
    local_dc = fVar21;
  }
  fVar31 = (float)uVar32;
  uVar20 = *(undefined8 *)(param_8 + 0xa8);
  bVar5 = (int)uVar6 < 1;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_03923030(uVar20,0);
  if ((uVar8 & 1) != 0) {
    uVar20 = *(undefined8 *)(param_8 + 0xb8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_03923030(uVar20,0);
    if ((uVar8 & 1) != 0) {
      lVar10 = *plVar1;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_03923030(lVar10,0);
      if ((uVar8 & 1) == 0) {
        uVar20 = *(undefined8 *)(param_8 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_03923030(uVar20,0);
        uVar6 = uVar6 & 1;
      }
      else {
        uVar6 = 1;
      }
      if ((*(long *)(param_8 + 0xa8) == 0) ||
         (lVar10 = FUN_0391c2b8(*(long *)(param_8 + 0xa8),0), lVar10 == 0)) goto cp__a;
      FUN_0391fb70(lVar10,uVar6,0);
      lVar10 = FUN_038f1768(0);
      if ((lVar10 == 0) || (lVar10 = FUN_0391c27c(lVar10,0), lVar10 == 0)) goto cp__a;
      fVar26 = (float)FUN_03928d34(lVar10,0);
      lVar10 = *plVar1;
      fVar22 = fVar16;
      fVar17 = fVar21;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_03923030(lVar10,0);
      fVar31 = fVar23;
      if ((uVar8 & 1) != 0) {
        uVar20 = *(undefined8 *)(param_8 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = FUN_03923030(uVar20,0);
        if ((uVar8 & 1) == 0) {
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
          }
          puVar4 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
          fVar26 = fVar30 - fVar26;
          fVar16 = fVar29 - fVar16;
          fVar21 = local_dc - fVar21;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar23 = SQRT(fVar21 * fVar21 + fVar26 * fVar26 + fVar16 * fVar16);
          if (fVar23 <= DAT_00b55370) {
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
            fVar22 = *pfVar12;
            fVar17 = pfVar12[1];
            fVar24 = pfVar12[2];
          }
          else {
            fVar22 = fVar26 / fVar23;
            fVar17 = fVar16 / fVar23;
            fVar24 = fVar21 / fVar23;
          }
          lVar10 = *(long *)(param_8 + 0xa8);
          if (lVar10 == 0) goto cp__a;
          fVar17 = fVar17 * fVar18;
          fVar24 = fVar24 * fVar18;
          fVar30 = fVar30 - fVar22 * fVar18;
          fVar29 = fVar29 - fVar17;
          local_dc = local_dc - fVar24;
          fVar19 = (float)FUN_03928d34(lVar10,0);
          fVar22 = *(float *)(param_8 + 0x38);
          if (*(float *)(param_8 + 0x38) < 0.0) {
            fVar22 = 0.0;
          }
          FUN_03928dd4(fVar30 + (fVar19 - fVar30) * fVar22,fVar29 + (fVar17 - fVar29) * fVar22,
                       local_dc + (fVar24 - local_dc) * fVar22,lVar10,0);
          lVar10 = *(long *)(param_8 + 0xa8);
          FUN_039148b4(fVar26,fVar16,fVar21,0);
          if (lVar10 == 0) goto cp__a;
          FUN_03928f54(lVar10,0);
          lVar10 = *(long *)(param_8 + 0xa8);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          uVar20 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
          fVar29 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14);
          if (DAT_03fed25c == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25c = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar10 == 0) goto cp__a;
          fVar29 = fVar23 * fVar29;
          fVar30 = (float)uVar20 * fVar23;
          fVar23 = (float)((ulong)uVar20 >> 0x20) * fVar23;
          fVar23 = fVar23 + fVar23;
          FUN_039293f4(CONCAT44(fVar23,fVar30 + fVar30),fVar23,fVar29 + fVar29,lVar10,0);
          puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if (*plVar1 == 0) goto cp__a;
          uVar20 = FUN_01ed712c(*plVar1,*(undefined8 *)
                                         Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__
                               );
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar8 = FUN_03923030(uVar20,0);
          if ((uVar8 & 1) != 0) {
            if (*plVar1 == 0) goto cp__a;
            uVar20 = FUN_01ed712c(*plVar1,*(undefined8 *)puVar4);
            FUN_01be77ec(param_8,uVar20);
          }
          goto LAB_01be6028;
        }
      }
      uVar20 = *(undefined8 *)(param_8 + 0x30);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_03923030(uVar20,0);
      if ((uVar8 & 1) != 0) {
        lVar10 = FUN_038f1768(0);
        if ((lVar10 == 0) || (lVar10 = FUN_0391c27c(lVar10,0), lVar10 == 0)) goto cp__a;
        fVar29 = (float)FUN_03928d34(lVar10,0);
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        fVar29 = fVar29 - fVar27;
        fVar22 = fVar22 - fVar23;
        fVar17 = fVar17 - fVar28;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar30 = SQRT(fVar17 * fVar17 + fVar29 * fVar29 + fVar22 * fVar22);
        if (fVar30 <= DAT_00b55370) {
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
          fVar29 = *pfVar12;
          fVar22 = pfVar12[1];
          fVar17 = pfVar12[2];
        }
        else {
          fVar29 = fVar29 / fVar30;
          fVar22 = fVar22 / fVar30;
          fVar17 = fVar17 / fVar30;
        }
        lVar10 = *(long *)(param_8 + 0xa8);
        if (lVar10 == 0) goto cp__a;
        fVar22 = fVar22 * DAT_00b55290;
        fVar17 = fVar17 * DAT_00b55290;
        fVar29 = fVar29 * DAT_00b55290;
        fVar26 = fVar28 + fVar17;
        fVar30 = fVar27;
        fVar16 = (float)FUN_03928d34(fVar29,param_1 & 0xffffffff,fVar17,lVar10,0);
        fVar21 = *(float *)(param_8 + 0x38);
        if (fVar21 < 0.0) {
          fVar21 = 0.0;
        }
        fVar30 = fVar30 + ((fVar23 + fVar22) - fVar30) * fVar21;
        fVar17 = fVar17 + (fVar26 - fVar17) * fVar21;
        FUN_03928dd4(fVar16 + ((fVar27 + fVar29) - fVar16) * fVar21,fVar30,fVar17,lVar10,0);
        lVar10 = *(long *)(param_8 + 0xa8);
        if (lVar10 == 0) goto cp__a;
        fVar16 = (float)FUN_03928d34(lVar10,0);
        fVar29 = fVar30;
        fVar23 = fVar17;
        lVar7 = FUN_038f1768(0);
        if ((lVar7 == 0) || (lVar7 = FUN_0391c27c(lVar7,0), lVar7 == 0)) goto cp__a;
        fVar21 = (float)FUN_03928d34(lVar7,0);
        FUN_039148b4(fVar16 - fVar21,fVar30 - fVar29,fVar17 - fVar23,0);
        FUN_03928f54(lVar10,0);
        lVar10 = *(long *)(param_8 + 0xa8);
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        if (lVar10 == 0) goto cp__a;
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        FUN_039293f4(*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                     *(undefined4 *)(lVar7 + 0x14),lVar10,0);
        puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
        if (*(long *)(param_8 + 0x30) == 0) goto cp__a;
        uVar20 = FUN_01ed712c(*(long *)(param_8 + 0x30),
                              *(undefined8 *)
                               Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__)
        ;
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar8 = FUN_03923030(uVar20,0);
        if ((uVar8 & 1) != 0) {
          if ((*(long *)(param_8 + 0x30) == 0) ||
             (lVar10 = FUN_01ed712c(*(long *)(param_8 + 0x30),*(undefined8 *)puVar4), lVar10 == 0))
          goto cp__a;
          bVar5 = *(char *)(lVar10 + 0x34) != '\0';
        }
      }
    }
  }
LAB_01be6028:
  fVar30 = (float)param_6;
  fVar29 = (float)param_5;
  uVar20 = *(undefined8 *)(param_8 + 0xa0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_03923030(uVar20,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(long *)(param_8 + 0xa0) != 0) {
    FUN_038fcf60(*(long *)(param_8 + 0xa0),2,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
    fVar23 = fVar29;
    fVar16 = fVar30;
    fVar18 = (float)FUN_03914a7c((int)param_4,param_5 & 0xffffffff,param_6 & 0xffffffff,
                                 param_7._0_4_,*(float *)(lVar10 + 0x48) * fVar18,
                                 *(float *)(lVar10 + 0x4c) * fVar18,
                                 *(float *)(lVar10 + 0x50) * fVar18,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
    fVar21 = (float)FUN_03914a7c((int)param_4,param_5 & 0xffffffff,param_6 & 0xffffffff,
                                 param_7._0_4_,local_e0 * *(float *)(lVar10 + 0x48),
                                 local_e0 * *(float *)(lVar10 + 0x4c),
                                 local_e0 * *(float *)(lVar10 + 0x50),0);
    *(float *)(param_8 + 0x90) = fVar27 + fVar21;
    *(float *)(param_8 + 0x94) = fVar31 + fVar29;
    *(float *)(param_8 + 0x98) = fVar28 + fVar30;
    if (*(long *)(param_8 + 0xa0) != 0) {
      FUN_038fcfa4(fVar27 + fVar18,fVar31 + fVar23,fVar28 + fVar16,*(long *)(param_8 + 0xa0),0,0);
      if (*(long *)(param_8 + 0xa0) != 0) {
        FUN_038fcfa4(*(undefined4 *)(param_8 + 0x90),*(undefined4 *)(param_8 + 0x94),
                     *(undefined4 *)(param_8 + 0x98),*(long *)(param_8 + 0xa0),1,0);
        if (*(long *)(param_8 + 0xa0) != 0) {
          FUN_038fe3fc(*(long *)(param_8 + 0xa0),bVar5,0);
          uVar20 = *(undefined8 *)(param_8 + 0x30);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar8 = FUN_03923030(uVar20,0);
          puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if ((uVar8 & 1) != 0) {
            if (*(long *)(param_8 + 0x30) == 0) goto cp__a;
            uVar20 = FUN_01ed712c(*(long *)(param_8 + 0x30),
                                  *(undefined8 *)
                                   Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__
                                 );
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                );
            }
            uVar8 = FUN_03923030(uVar20,0);
            if ((uVar8 & 1) != 0) {
              if ((*(long *)(param_8 + 0x30) == 0) ||
                 (lVar10 = FUN_01ed712c(*(long *)(param_8 + 0x30),*(undefined8 *)puVar4),
                 lVar10 == 0)) goto cp__a;
              lVar10 = *(long *)(lVar10 + 0x58);
              if (lVar10 != 0) {
                (**(code **)(lVar10 + 0x18))
                          (*(undefined4 *)(param_8 + 0x90),*(undefined4 *)(param_8 + 0x94),
                           *(undefined4 *)(param_8 + 0x98),*(undefined8 *)(lVar10 + 0x40),
                           *(undefined8 *)(lVar10 + 0x28));
              }
            }
          }
          return;
        }
      }
    }
  }
cp__a:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


