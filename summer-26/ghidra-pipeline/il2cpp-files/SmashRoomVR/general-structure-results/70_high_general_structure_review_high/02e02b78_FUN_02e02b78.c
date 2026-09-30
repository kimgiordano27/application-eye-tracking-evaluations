/*
FUNCTION_NAME: FUN_02e02b78
ENTRY_POINT: 02e02b78
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


void FUN_02e02b78(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5,
                 float *param_6)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_03ff00b5 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff00b5 = 1;
  }
  lVar4 = FUN_0391c27c(param_4,0);
  iVar1 = *(int *)(param_4 + 0x24);
  if (iVar1 == 2) {
    uVar6 = *(undefined8 *)(param_4 + 0xb0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03923030(uVar6,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(param_4 + 0xb0);
    }
  }
  else if (iVar1 == 1) {
    uVar6 = *(undefined8 *)(param_4 + 0xa8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03923030(uVar6,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(param_4 + 0xa8);
    }
  }
  else if (iVar1 == 0) {
    uVar6 = *(undefined8 *)(param_4 + 0x88);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03923030(uVar6,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(param_4 + 0x88);
    }
  }
  if (lVar4 != 0) {
    fVar7 = (float)FUN_039291ac(lVar4,0);
    *param_5 = fVar7;
    param_5[1] = param_2;
    param_5[2] = param_3;
    fVar7 = (float)FUN_039290b4(lVar4,0);
    *param_6 = fVar7;
    param_6[1] = param_2;
    param_6[2] = param_3;
    param_5[1] = 0.0;
    fVar7 = *param_5;
    fVar8 = param_5[2];
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    puVar3 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar2 = DAT_00b55370;
    fVar7 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + 0.0);
    if (fVar7 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      uVar6 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar7 = *(float *)(*(undefined8 **)
                          (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
    }
    else {
      uVar6 = CONCAT44((float)((ulong)*(undefined8 *)param_5 >> 0x20) / fVar7,
                       (float)*(undefined8 *)param_5 / fVar7);
      fVar7 = param_5[2] / fVar7;
    }
    *(undefined8 *)param_5 = uVar6;
    param_5[2] = fVar7;
    param_6[1] = 0.0;
    fVar8 = *param_6;
    fVar7 = param_6[2];
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar7 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + 0.0);
    if (fVar7 <= fVar2) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      uVar6 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar7 = *(float *)(*(undefined8 **)
                          (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
    }
    else {
      uVar6 = CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) / fVar7,
                       (float)*(undefined8 *)param_6 / fVar7);
      fVar7 = param_6[2] / fVar7;
    }
    *(undefined8 *)param_6 = uVar6;
    param_6[2] = fVar7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


