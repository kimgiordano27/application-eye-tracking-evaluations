/*
FUNCTION_NAME: FUN_03299a68
ENTRY_POINT: 03299a68
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_03299a68(undefined1 param_1 [16],float param_2,float param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  undefined1 auStack_100 [20];
  float local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  
  if ((DAT_03ff5797 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5797 = 1;
  }
  puVar1 = 
  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
  ;
  local_d8 = 0;
  local_d0 = 0;
  fStack_cc = 0.0;
  local_c8 = 0.0;
  fStack_c4 = 0.0;
  local_e0 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_a4 = 0;
  uStack_b0 = 0;
  local_e8 = 0;
  switch(param_5) {
  case 0:
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0322fef4(1,0);
    lVar11 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      iVar3 = FUN_0322c320(0,0);
      if (iVar3 != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        iVar3 = FUN_0322c320(0,0);
        lVar11 = 0;
        if (iVar3 != 1) break;
      }
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_0329a1c4;
      lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0x68);
    }
    break;
  case 1:
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0322fef4(2,0);
    lVar11 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      iVar3 = FUN_0322c320(1,0);
      if (iVar3 != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        iVar3 = FUN_0322c320(1,0);
        lVar11 = 0;
        if (iVar3 != 1) break;
      }
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_0329a1c4;
      lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0x78);
    }
    break;
  case 2:
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_0329a1c4;
    lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0x90);
    goto joined_r0x03299c2c;
  case 3:
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_0329a1c4;
    lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0x98);
joined_r0x03299c2c:
    if (lVar11 == 0) goto LAB_0329a1c4;
    if (*(char *)(lVar11 + 0xbc) == '\0') {
switchD_03299b00_default:
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(lVar11 + 0xc0);
    }
    break;
  default:
    goto switchD_03299b00_default;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(lVar11,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (lVar11 == 0) {
LAB_0329a1c4:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  fVar13 = (float)FUN_03928d34(lVar11,0);
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  pfVar9 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  uVar8 = (ulong)(uint)DAT_00b55084;
  param_3 = param_3 - pfVar9[2];
  uVar17 = (ulong)(uint)param_3;
  uVar4 = (ulong)(uint)(param_3 * param_3);
  if (param_3 * param_3 +
      (fVar13 - *pfVar9) * (fVar13 - *pfVar9) + (param_2 - pfVar9[1]) * (param_2 - pfVar9[1]) <
      DAT_00b55084) {
    return;
  }
  uVar16 = FUN_03928d34(lVar11,0);
  lVar10 = 0x38;
  if ((param_5 & 0xfffffffd) != 0) {
    lVar10 = 0x40;
  }
  lVar10 = *(long *)(param_4 + lVar10);
  if (lVar10 == 0) goto LAB_0329a1c4;
  uVar7 = uVar4;
  uVar18 = uVar17;
  FUN_038fcb14(*(undefined4 *)(param_4 + 0x50),lVar10,0);
  uVar12 = *(undefined8 *)(param_4 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03923030(uVar12,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_0329a1c4;
    uVar5 = FUN_0391b7d0(*(long *)(param_4 + 0x20),0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_0329a1c4;
      uVar12 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03923030(uVar12,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_4 + 0x20) == 0) ||
           (lVar6 = FUN_0391c27c(*(long *)(param_4 + 0x20),0), lVar6 == 0)) goto LAB_0329a1c4;
        uVar8 = uVar4;
        uVar7 = uVar17;
        fVar13 = (float)FUN_0392a520(uVar16,lVar6,0);
        if ((*(long *)(param_4 + 0x20) == 0) ||
           (lVar6 = FUN_0391c27c(*(long *)(param_4 + 0x20),0), lVar6 == 0)) goto LAB_0329a1c4;
        fVar14 = (float)FUN_03929354(lVar6,0);
        local_e8 = 0;
        local_e0 = 0;
        if ((*(long *)(param_4 + 0x20) == 0) ||
           (lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x48), lVar6 == 0)) goto LAB_0329a1c4;
        fVar13 = fVar13 * fVar14;
        fVar21 = (float)uVar8 * fVar14;
        fVar14 = (float)uVar7 * fVar14;
        FUN_0395b594(auStack_100,lVar6,0);
        local_d8 = local_e8;
        fStack_cc = ((float)auStack_100._12_8_ + (float)auStack_100._12_8_) * 0.5;
        local_c8 = (SUB84(auStack_100._12_8_,4) + SUB84(auStack_100._12_8_,4)) * 0.5;
        fStack_c4 = (local_ec + local_ec) * 0.5;
        local_d0 = local_e0;
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
        fVar19 = (float)uVar12 * 0.1 * 0.5;
        fVar20 = (float)((ulong)uVar12 >> 0x20) * 0.1 * 0.5;
        uVar8 = CONCAT44(fVar20,fVar19);
        fStack_cc = fVar19 + fStack_cc;
        local_c8 = fVar20 + local_c8;
        fStack_c4 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14) * DAT_00b55290 * 0.5 +
                    fStack_c4;
        uVar7 = FUN_038f6ab8(fVar13,fVar21,fVar14,&local_d8,0);
        if ((uVar7 & 1) != 0) {
          FUN_038fe3fc(lVar10,0,0);
          return;
        }
        fVar19 = fVar21;
        fVar20 = fVar14;
        fVar15 = (float)FUN_038f6b54(fVar13,&local_d8,0);
        if (DAT_03fed25c == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25c = '\x01';
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar14 = (fVar20 - fVar14) * (fVar20 - fVar14);
        uVar18 = (ulong)(uint)fVar14;
        fVar13 = SQRT(fVar14 + (fVar15 - fVar13) * (fVar15 - fVar13) +
                               (fVar19 - fVar21) * (fVar19 - fVar21));
        uVar7 = (ulong)(uint)fVar13;
        if (fVar13 < DAT_00b555b0) {
          uVar18 = (ulong)(uint)*(float *)(param_4 + 0x50);
          fVar13 = fVar13 / DAT_00b555b0;
          if (1.0 < fVar13) {
            fVar13 = 1.0;
          }
          uVar7 = 0;
          FUN_038fcb14(fVar13 * *(float *)(param_4 + 0x50) + 0.0,lVar10,0);
        }
      }
    }
  }
  FUN_038fcad8(lVar10,0);
  FUN_038fcb60(lVar10,0);
  FUN_038fe3fc(lVar10,1,0);
  FUN_03928d34(lVar11,0);
  FUN_038fcfa4(lVar10,0,0);
  uVar12 = FUN_039274a0(lVar11,0);
  if (DAT_03fed260 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed260 = '\x01';
  }
  lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
  fVar13 = (float)FUN_03914a7c(uVar12,uVar7,uVar18,uVar8,*(undefined4 *)(lVar11 + 0x48),
                               *(undefined4 *)(lVar11 + 0x4c),*(undefined4 *)(lVar11 + 0x50),0);
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar21 = (float)uVar7;
  fVar19 = (float)uVar18;
  fVar14 = SQRT(fVar19 * fVar19 + fVar13 * fVar13 + fVar21 * fVar21);
  if (fVar14 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar9 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar13 = *pfVar9;
    fVar21 = pfVar9[1];
    fVar19 = pfVar9[2];
  }
  else {
    fVar13 = fVar13 / fVar14;
    fVar21 = fVar21 / fVar14;
    fVar19 = fVar19 / fVar14;
  }
  if (*(long *)(param_4 + 0x20) == 0) goto LAB_0329a1c4;
  uVar12 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_03923030(uVar12,0);
  if ((uVar8 & 1) != 0) {
    if ((*(long *)(param_4 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0x48), lVar11 == 0)) goto LAB_0329a1c4;
    uStack_114 = (undefined4)uVar4;
    local_110 = (undefined4)uVar17;
    local_118 = (float)uVar16;
    fStack_10c = fVar13;
    local_108 = fVar21;
    fStack_104 = fVar19;
    uVar4 = FUN_0395b784(0x42c80000,lVar11,&local_118,&local_c0,0);
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_03959c54(&local_c0,0);
      goto LAB_0329a188;
    }
  }
  uVar4 = (ulong)(uint)((float)uVar16 + fVar13 * 2.5);
LAB_0329a188:
  FUN_038fcfa4(uVar4,lVar10,1,0);
  return;
}


