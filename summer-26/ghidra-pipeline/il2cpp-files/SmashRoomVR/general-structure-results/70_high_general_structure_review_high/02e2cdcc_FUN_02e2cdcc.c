/*
FUNCTION_NAME: FUN_02e2cdcc
ENTRY_POINT: 02e2cdcc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


float FUN_02e2cdcc(undefined1 param_1 [16],float param_2,float param_3,long *param_4,long param_5,
                  float *param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_03ff01c5 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01c5 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_5 == 0) goto LAB_02e2d184;
  uVar4 = *(undefined8 *)(param_5 + 0xa8);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar4,0);
  if ((uVar2 & 1) == 0) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    fVar10 = *(float *)(*(undefined8 **)
                         (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
    *(undefined8 *)param_6 =
         **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    param_6[2] = fVar10;
    return **(float **)(*(long *)puVar1 + 0xb8);
  }
  fVar5 = (float)FUN_02de2fc8(param_5,*(undefined4 *)((long)param_4 + 0x1c4),(int)param_4[0x39],
                              *(undefined1 *)((long)param_4 + 0x1cc),(int)param_4[0x3a],0);
  fVar6 = (float)FUN_02de3064(param_5,*(undefined4 *)((long)param_4 + 0x1c4),(int)param_4[0x39],0);
  fVar10 = param_3;
  fVar9 = param_2;
  fVar7 = (float)FUN_02e2d34c(param_4,*(undefined4 *)((long)param_4 + 0x1c4),(int)param_4[0x39]);
  if ((param_7 & 1) != 0) {
    fVar9 = *(float *)((long)param_4 + 0x3bc);
    fVar10 = *(float *)(param_4 + 0x78);
    fVar7 = fVar7 - *(float *)(param_4 + 0x77);
    fVar5 = fVar5 - *(float *)(param_4 + 0x77);
  }
  fVar8 = (float)FUN_02e2d97c(param_4,*(undefined4 *)((long)param_4 + 0x1c4),(int)param_4[0x39]);
  fVar12 = *(float *)(param_4 + 0x37);
  fVar13 = *(float *)(param_5 + 0x50);
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar11 = *(float *)(param_4 + 0x38);
  fVar7 = fVar7 * fVar12 + fVar5 * fVar13;
  fVar5 = fVar10 * fVar10;
  if (SQRT(fVar5 + fVar8 * fVar8 + fVar9 * fVar9) <= fVar11) goto LAB_02e2d130;
  uVar4 = (**(code **)(*param_4 + 0x238))(param_4,*(undefined8 *)(*param_4 + 0x240));
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar2 = FUN_03923030(uVar4,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_5 + 0xa8) == 0) goto LAB_02e2d184;
    FUN_0395a620(*(long *)(param_5 + 0xa8),0);
  }
  else {
    lVar3 = (**(code **)(*param_4 + 0x238))(param_4,*(undefined8 *)(*param_4 + 0x240));
    if (lVar3 == 0) goto LAB_02e2d184;
    FUN_03928d34(lVar3,0);
  }
  lVar3 = param_4[0x3b];
  fVar8 = fVar5;
  fVar12 = fVar11;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar3,0);
  if ((uVar2 & 1) == 0) {
LAB_02e2d0c8:
    if (param_4[0xf] == 0) {
LAB_02e2d184:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_0395a620(param_4[0xf],0);
  }
  else {
    if (param_4[0x3b] == 0) goto LAB_02e2d184;
    uVar4 = *(undefined8 *)(param_4[0x3b] + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) == 0) goto LAB_02e2d0c8;
    if ((param_4[0x3b] == 0) || (lVar3 = *(long *)(param_4[0x3b] + 0x50), lVar3 == 0))
    goto LAB_02e2d184;
    FUN_03928d34(lVar3,0);
  }
  fVar7 = fVar7 + *(float *)(param_5 + 0x4c) * *(float *)((long)param_4 + 0x1bc) *
                  (fVar9 * (fVar11 - fVar12) - fVar10 * (fVar5 - fVar8));
LAB_02e2d130:
  fVar10 = *(float *)(param_5 + 0x54);
  *param_6 = fVar6 * fVar10;
  param_6[1] = param_2 * fVar10;
  param_6[2] = param_3 * fVar10;
  return fVar7;
}


