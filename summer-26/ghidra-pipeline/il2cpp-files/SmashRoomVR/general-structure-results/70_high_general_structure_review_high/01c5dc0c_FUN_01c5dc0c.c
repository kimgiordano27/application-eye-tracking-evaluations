/*
FUNCTION_NAME: FUN_01c5dc0c
ENTRY_POINT: 01c5dc0c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined1  [16] FUN_01c5dc0c(undefined1 param_1 [16],ulong param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  uint *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  ulong uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uVar21;
  
  if ((DAT_03fed69b & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                      );
    thunk_FUN_01ad9084(StringLiteral_149);
    thunk_FUN_01ad9084(StringLiteral_150);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed69b = 1;
  }
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar4 = StringLiteral_150;
  puVar3 = 
  Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
  ;
  puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  fVar18 = DAT_00b55084;
  fVar15 = (float)param_2;
  puVar11 = *(uint **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  lVar9 = *(long *)(param_3 + 0x70);
  uVar23 = (ulong)*puVar11;
  uVar24 = 0;
  fVar20 = (float)puVar11[1];
  uVar21 = (ulong)(uint)fVar20;
  fVar27 = (float)puVar11[2];
  if (lVar9 != 0) {
    iVar12 = 0;
    do {
      fVar15 = (float)param_2;
      fVar20 = (float)uVar21;
      if (*(int *)(lVar9 + 0x18) <= iVar12) goto LAB_01c5de78;
      uVar16 = param_2;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        uVar16 = param_2;
      }
      lVar9 = FUN_01c4997c(0);
      if ((*(long *)(param_3 + 0x70) == 0) ||
         (uVar6 = FUN_02b2ed64(*(long *)(param_3 + 0x70),iVar12,*(undefined8 *)puVar4), lVar9 == 0))
      break;
      auVar14 = FUN_01c52ee4(lVar9,uVar6,0);
      uVar13 = auVar14._8_8_;
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed257 = '\x01';
      }
      pfVar10 = *(float **)(*(long *)puVar2 + 0xb8);
      fVar15 = pfVar10[1];
      param_2 = (ulong)(uint)fVar15;
      fVar22 = (float)uVar23;
      fVar17 = fVar22 - *pfVar10;
      fVar19 = fVar27 - pfVar10[2];
      if (fVar19 * fVar19 + fVar17 * fVar17 + (fVar20 - fVar15) * (fVar20 - fVar15) < fVar18) {
LAB_01c5de4c:
        uVar24 = uVar13;
        fVar27 = 0.0;
        uVar21 = uVar16;
        uVar23 = auVar14._0_8_;
      }
      else {
        fVar25 = auVar14._0_4_;
        fVar17 = fVar25 - *pfVar10;
        fVar26 = (float)uVar16;
        fVar19 = 0.0 - pfVar10[2];
        fVar19 = fVar19 * fVar19;
        param_2 = (ulong)(uint)fVar19;
        if (fVar18 <= fVar19 + fVar17 * fVar17 + (fVar26 - fVar15) * (fVar26 - fVar15)) {
          if (DAT_03fed25c == '\0') {
            thunk_FUN_01ad9084(puVar1);
            DAT_03fed25c = '\x01';
          }
          if ((*(int *)(*(long *)puVar1 + 0xe0) == 0) &&
             (thunk_FUN_01ac7298(), DAT_03fed25c == '\0')) {
            thunk_FUN_01ad9084(puVar1);
            DAT_03fed25c = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar15 = SQRT(fVar27 * fVar27 + fVar20 * fVar20 + fVar22 * fVar22);
          param_2 = (ulong)(uint)fVar15;
          if (fVar15 < SQRT(fVar25 * fVar25 + fVar26 * fVar26 + 0.0)) goto LAB_01c5de4c;
        }
      }
      lVar9 = *(long *)(param_3 + 0x70);
      iVar12 = iVar12 + 1;
    } while (lVar9 != 0);
LAB_01c5e07c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
LAB_01c5de78:
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_3 + 0x80) == '\0') {
    uVar7 = 1;
  }
  else {
    if (*(int *)(*(long *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_038eea2c(0);
    uVar7 = uVar7 & 1;
  }
  uVar13 = *(undefined8 *)(param_3 + 0x78);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(uVar13,0,0);
  if ((uVar8 & uVar7) == 0) goto LAB_01c5e048;
  if ((*(long *)(param_3 + 0x78) == 0) ||
     (lVar9 = FUN_03452478(*(long *)(param_3 + 0x78),0), lVar9 == 0)) goto LAB_01c5e07c;
  auVar14 = FUN_01ee146c(lVar9,*(undefined8 *)
                                Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__
                        );
  uVar13 = auVar14._8_8_;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  pfVar10 = *(float **)(*(long *)puVar2 + 0xb8);
  fVar22 = (float)uVar23;
  fVar18 = fVar22 - *pfVar10;
  fVar17 = fVar20 - pfVar10[1];
  fVar19 = fVar27 - pfVar10[2];
  if (DAT_00b55084 <= fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) {
    fVar25 = auVar14._0_4_;
    fVar17 = fVar25 - *pfVar10;
    fVar19 = fVar15 - pfVar10[1];
    fVar18 = 0.0 - pfVar10[2];
    if (fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19 < DAT_00b55084) goto LAB_01c5e048;
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
      bVar5 = DAT_03fed25c == '\0';
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (SQRT(fVar25 * fVar25 + fVar15 * fVar15 + 0.0) <=
        SQRT(fVar27 * fVar27 + fVar20 * fVar20 + fVar22 * fVar22)) goto LAB_01c5e048;
  }
  uVar24 = uVar13;
  uVar23 = auVar14._0_8_;
LAB_01c5e048:
  auVar14._8_8_ = uVar24;
  auVar14._0_8_ = uVar23;
  return auVar14;
}


