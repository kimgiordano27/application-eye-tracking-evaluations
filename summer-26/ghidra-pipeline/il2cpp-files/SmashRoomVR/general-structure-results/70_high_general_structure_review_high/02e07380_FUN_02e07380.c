/*
FUNCTION_NAME: FUN_02e07380
ENTRY_POINT: 02e07380
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_02e07380(float param_1,float param_2,float param_3,long *param_4,long param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_e0 [4];
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  undefined1 local_c8 [4];
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_34;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  fVar18 = param_2;
  fVar16 = param_3;
  if ((DAT_03ff00ca & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    thunk_FUN_01ad9084(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    thunk_FUN_01ad9084(StringLiteral_4527);
    thunk_FUN_01ad9084(StringLiteral_4528);
    thunk_FUN_01ad9084(StringLiteral_4529);
    DAT_03ff00ca = 1;
  }
  local_34 = 0.0;
  lVar10 = param_4[6];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03923030(lVar10,0);
  if ((uVar6 & 1) == 0) {
    lVar10 = FUN_0391c27c(param_4,0);
  }
  else {
    lVar10 = param_4[6];
  }
  if (lVar10 == 0) goto LAB_02e07c58;
  fVar12 = (float)FUN_03928d34(lVar10,0);
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar12 = param_1 - fVar12;
  fVar18 = param_2 - fVar18;
  fVar16 = param_3 - fVar16;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar13 = SQRT(fVar16 * fVar16 + fVar12 * fVar12 + fVar18 * fVar18);
  if (fVar13 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar9 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar12 = *pfVar9;
    fVar18 = pfVar9[1];
    fVar16 = pfVar9[2];
  }
  else {
    fVar12 = fVar12 / fVar13;
    fVar18 = fVar18 / fVar13;
    fVar16 = fVar16 / fVar13;
  }
  if (param_5 == 0) goto LAB_02e07c58;
  lVar11 = *(long *)(param_5 + 0x78);
  FUN_03928d34(lVar10,0);
  if (lVar11 == 0) goto LAB_02e07c58;
  FUN_0395a910(lVar11,0);
  puVar3 = Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__;
  if (*(long *)(param_5 + 0x120) == 0) goto LAB_02e07c58;
  FUN_02def260(&local_98,*(undefined8 *)(*(long *)(param_5 + 0x120) + 0x20),0);
  fVar24 = fStack_84;
  fVar22 = local_88;
  fVar17 = fStack_8c;
  fVar1 = local_90;
  fVar19 = fStack_94;
  fVar13 = local_98;
  lVar10 = FUN_01b47fd0(*(undefined8 *)puVar3,3);
  if (lVar10 == 0) goto LAB_02e07c58;
  uVar5 = (uint)*(ulong *)(lVar10 + 0x18);
  if (uVar5 == 0) {
LAB_02e07c5c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  fVar14 = fVar17 + fVar17;
  *(float *)(lVar10 + 0x20) = fVar14;
  if (uVar5 == 1) goto LAB_02e07c5c;
  fVar15 = fVar22 + fVar22;
  *(float *)(lVar10 + 0x24) = fVar15;
  if (uVar5 < 3) goto LAB_02e07c5c;
  *(float *)(lVar10 + 0x28) = fVar24 + fVar24;
  fVar20 = fVar14;
  if (1 < (int)uVar5) {
    fVar20 = fVar15;
    if (fVar15 <= fVar14) {
      fVar20 = fVar14;
    }
    lVar11 = (*(ulong *)(lVar10 + 0x18) & 0xffffffff) - 2;
    if (lVar11 != 0) {
      pfVar9 = (float *)(lVar10 + 0x28);
      do {
        fVar21 = *pfVar9;
        if (*pfVar9 <= fVar20) {
          fVar21 = fVar20;
        }
        fVar20 = fVar21;
        lVar11 = lVar11 + -1;
        pfVar9 = pfVar9 + 1;
      } while (lVar11 != 0);
    }
  }
  if (DAT_03fed25e == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25e = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar2 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
  lVar10 = param_4[0x19];
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  fVar21 = SQRT((param_3 - fVar1) * (param_3 - fVar1) +
                (param_1 - fVar13) * (param_1 - fVar13) + (param_2 - fVar19) * (param_2 - fVar19));
  uVar4 = FUN_03920150(*(undefined4 *)((long)param_4 + 0x24),0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar5 = FUN_03958920(fVar13,fVar19,fVar1,fVar17,fVar22,fVar24,lVar10,uVar4,1,0);
  if (0 < (int)uVar5) {
    uVar6 = 0;
    lVar10 = 0x20;
    do {
      lVar11 = param_4[0x19];
      if (lVar11 == 0) goto LAB_02e07c58;
      if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_02e07c5c;
      uVar7 = FUN_03959ba8(lVar11 + lVar10,0);
      uVar8 = (**(code **)(*param_4 + 0x218))
                        (param_4,uVar7,param_5,*(undefined8 *)(param_5 + 0x98),
                         *(undefined8 *)(*param_4 + 0x220));
      if ((uVar8 & 1) == 0) {
        if ((char)param_4[0xb] != '\0') {
          lVar11 = param_4[0x19];
          if (lVar11 == 0) goto LAB_02e07c58;
          if (*(uint *)(lVar11 + 0x18) <= (uint)uVar6) goto LAB_02e07c5c;
          lVar10 = FUN_03959ba8(lVar11 + lVar10,0);
          if (lVar10 == 0) goto LAB_02e07c58;
          uVar7 = FUN_039230bc(lVar10,0);
          uVar7 = FUN_02edd6e8(*(undefined8 *)StringLiteral_4527,uVar7,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                              );
          }
          FUN_038f2acc(uVar7,0);
        }
        uVar6 = 0;
        fVar17 = 3.4028235e+38;
        lVar10 = 0x20;
        goto LAB_02e07894;
      }
      uVar6 = uVar6 + 1;
      lVar10 = lVar10 + 0x2c;
    } while (uVar5 != uVar6);
  }
  lVar10 = FUN_0391c27c(param_5,0);
  if ((*(long *)(param_5 + 0x78) == 0) ||
     (FUN_0395a910(param_1,param_2,param_3,*(long *)(param_5 + 0x78),0), lVar10 == 0))
  goto LAB_02e07c58;
  FUN_03928dd4(param_1,param_2,param_3,lVar10,0);
  fVar20 = fVar21;
  goto LAB_02e079ac;
  while( true ) {
    if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_02e07c5c;
    fVar22 = (float)FUN_03959c6c(lVar11 + lVar10,0);
    if (fVar22 < fVar17) {
      lVar11 = param_4[0x19];
      if (lVar11 == 0) goto LAB_02e07c58;
      if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_02e07c5c;
      fVar17 = (float)FUN_03959c6c(lVar11 + lVar10,0);
    }
    uVar6 = uVar6 + 1;
    lVar10 = lVar10 + 0x2c;
    if (uVar5 == uVar6) break;
LAB_02e07894:
    lVar11 = param_4[0x19];
    if (lVar11 == 0) goto LAB_02e07c58;
  }
  if (DAT_00b5568c <= fVar17) {
    fVar20 = fVar17;
  }
  if (*(long *)(param_5 + 0x78) == 0) goto LAB_02e07c58;
  fVar17 = fVar1 + fVar16 * fVar20;
  fVar23 = fVar13 + fVar12 * fVar20;
  fVar22 = fVar19 + fVar18 * fVar20;
  FUN_0395a910(fVar23,fVar22,fVar17,*(long *)(param_5 + 0x78),0);
  lVar10 = FUN_0391c27c(param_5,0);
  if ((*(long *)(param_5 + 0x78) == 0) || (FUN_0395a870(*(long *)(param_5 + 0x78),0), lVar10 == 0))
  goto LAB_02e07c58;
  uVar7 = FUN_03928dd4(lVar10,0);
  if ((char)param_4[0xb] != '\0') {
    FUN_02e07c60(fVar14,fVar15,fVar24 + fVar24,fVar23,fVar22,fVar17,uVar7,
                 *(undefined8 *)StringLiteral_4528,param_5);
  }
LAB_02e079ac:
  if (*(long *)(param_5 + 0x120) != 0) {
    FUN_02def260(&local_98,*(undefined8 *)(*(long *)(param_5 + 0x120) + 0x20),0);
    if (((char)param_4[0xb] != '\0') &&
       (FUN_02e07db4(fVar13,fVar19,fVar1,fVar12,fVar18,fVar16,fVar21,param_5),
       (char)param_4[0xb] != '\0')) {
      local_b0 = local_98;
      fStack_ac = fStack_94;
      local_a8 = local_90;
      fStack_a4 = fStack_8c;
      local_a0 = local_88;
      fStack_9c = fStack_84;
      FUN_02e07f5c(fVar13,fVar19,fVar1,fVar12,fVar18,fVar16,fVar21,param_5,&local_b0);
    }
    fStack_c4 = fStack_94;
    local_c0 = local_90;
    fStack_bc = fStack_8c;
    local_b8 = local_88;
    fStack_b4 = fStack_84;
    fVar13 = fStack_94;
    fVar19 = local_90;
    uVar6 = FUN_02e080c4(local_98,fStack_94,local_90,param_4,param_5,local_c8);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    puVar2 = StringLiteral_4529;
    fVar1 = DAT_00b55428;
    pfVar9 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar24 = *pfVar9;
    fVar22 = pfVar9[1];
    fVar17 = pfVar9[2];
    local_34 = 0.0;
    if (0.0 < fVar20) {
      do {
        fVar24 = local_34 * -fVar12;
        fVar22 = local_34 * -fVar18;
        fVar13 = fStack_94 + fVar22;
        fVar17 = local_34 * -fVar16;
        fVar19 = local_90 + fVar17;
        if ((char)param_4[0xb] != '\0') {
          uVar7 = FUN_03052638(&local_34,0);
          uVar7 = FUN_02edd6e8(*(undefined8 *)puVar2,uVar7,0);
          FUN_02e07c60(fStack_8c + fStack_8c,local_88 + local_88,fStack_84 + fStack_84,
                       local_98 + fVar24,fVar13,fVar19,uVar7,uVar7,param_5);
        }
        fStack_dc = fStack_94;
        local_d8 = local_90;
        fStack_d4 = fStack_8c;
        local_d0 = local_88;
        fStack_cc = fStack_84;
        uVar6 = FUN_02e080c4(local_98 + fVar24,fVar13,fVar19,param_4,param_5,local_e0);
      } while (((uVar6 & 1) != 0) &&
              (local_34 = local_34 + fVar1, fVar13 = fVar20, local_34 < fVar20));
    }
    lVar10 = *(long *)(param_5 + 0x78);
    if (lVar10 != 0) {
      fVar18 = (float)FUN_0395a870(lVar10,0);
      FUN_0395a910(fVar24 + fVar18,fVar22 + fVar13,fVar17 + fVar19,lVar10,0);
      lVar10 = FUN_0391c27c(param_5,0);
      if ((*(long *)(param_5 + 0x78) != 0) &&
         (FUN_0395a870(*(long *)(param_5 + 0x78),0), lVar10 != 0)) {
        FUN_03928dd4(lVar10,0);
        return;
      }
    }
  }
LAB_02e07c58:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


