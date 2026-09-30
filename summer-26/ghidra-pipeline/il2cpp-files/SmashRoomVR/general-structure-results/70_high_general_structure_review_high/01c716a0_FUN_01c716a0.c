/*
FUNCTION_NAME: FUN_01c716a0
ENTRY_POINT: 01c716a0
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


void FUN_01c716a0(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_03fed736 & 1) == 0) {
                    /* try { // try from 01c716c4 to 01d7170f has its CatchHandler @ 01c71880 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed736 = 1;
  }
  if (*(long *)(param_4 + 0x60) == 0) goto LAB_01c71b20;
  fVar9 = (float)FUN_03959f88(*(long *)(param_4 + 0x60),0);
  fVar11 = param_3;
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  param_3 = param_3 * param_3;
  *(float *)(param_4 + 0x74) = SQRT(param_3 + fVar9 * fVar9 + param_2 * param_2);
  lVar4 = FUN_0391c27c(param_4,0);
  if (lVar4 == 0) goto LAB_01c71b20;
  uVar10 = FUN_03928fa8(lVar4,0);
  *(undefined4 *)(param_4 + 0x80) = uVar10;
  *(float *)(param_4 + 0x84) = param_3;
  fVar9 = (float)(int)param_3;
  *(float *)(param_4 + 0x88) = fVar11;
  fVar11 = 180.0 - fVar9;
  if (180.0 <= fVar9) {
    fVar11 = fVar9 + -180.0;
  }
  *(float *)(param_4 + 0x70) = fVar11;
  if ((10.0 < fVar11) && (*(char *)(param_4 + 0x68) == '\0')) {
    lVar4 = FUN_01c71b24();
    uVar8 = *(undefined8 *)(param_4 + 0x20);
    lVar5 = FUN_0391c27c(param_4,0);
    if ((lVar5 == 0) || (FUN_03928d34(lVar5,0), lVar4 == 0)) goto LAB_01c71b20;
    FUN_01c71c98(lVar4,uVar8);
    fVar11 = *(float *)(param_4 + 0x70);
    *(undefined1 *)(param_4 + 0x68) = 1;
  }
  if (30.0 < fVar11) {
    *(undefined1 *)(param_4 + 0x69) = 1;
  }
  if ((fVar11 < 2.0) && (*(char *)(param_4 + 0x68) != '\0')) {
    *(undefined1 *)(param_4 + 0x68) = 0;
  }
  fVar9 = 1.0;
  if ((fVar11 < 1.0) && (fVar9 = *(float *)(param_4 + 0x6c), *(float *)(param_4 + 0x74) <= fVar9)) {
    if (*(long *)(param_4 + 0x60) == 0) goto LAB_01c71b20;
    uVar6 = FUN_0395a324(*(long *)(param_4 + 0x60),0);
    if ((uVar6 & 1) == 0) {
      lVar4 = *(long *)(param_4 + 0x60);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      if (lVar4 == 0) goto LAB_01c71b20;
      puVar7 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar9 = (float)puVar7[1];
      FUN_0395a028(*puVar7,fVar9,puVar7[2],lVar4,0);
    }
  }
  if (*(char *)(param_4 + 0x69) != '\0') {
    fVar9 = 2.0;
    if (*(float *)(param_4 + 0x70) < 2.0) {
      fVar9 = 2.0;
      lVar4 = FUN_01c71b24();
      uVar8 = *(undefined8 *)(param_4 + 0x28);
      lVar5 = FUN_0391c27c(param_4,0);
      if ((lVar5 == 0) || (FUN_03928d34(lVar5,0), lVar4 == 0)) goto LAB_01c71b20;
      FUN_01c71c98(lVar4,uVar8);
      *(undefined1 *)(param_4 + 0x69) = 0;
    }
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar8 = *(undefined8 *)(param_4 + 0x38);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03923030(uVar8,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_01c71b20;
    FUN_03928fa8(*(long *)(param_4 + 0x38),0);
    *(float *)(param_4 + 0x40) = ABS(fVar9 + -270.0);
  }
  uVar8 = *(undefined8 *)(param_4 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03923030(uVar8,0);
  if ((uVar6 & 1) != 0) {
    fVar12 = *(float *)(param_4 + 0x40);
    *(undefined8 *)(param_4 + 0x8c) = DAT_00b91e68;
    fVar9 = DAT_00b555c0;
    fVar11 = DAT_00b550a4;
    bVar2 = fVar12 < 0.0;
    if (55.0 < fVar12) {
      fVar12 = 55.0;
    }
    fVar13 = 55.0 / (55.0 - fVar12);
    fVar12 = *(float *)(param_4 + 0x50);
    if (bVar2) {
      fVar13 = 1.0;
    }
    *(float *)(param_4 + 0x94) = fVar13;
    fVar11 = fVar12 + fVar13 * fVar9 + fVar11;
    fVar9 = fVar12 + fVar9;
    uVar6 = (ulong)(uint)fVar9;
    if (fVar11 <= fVar12) {
      fVar12 = fVar11;
    }
    if (fVar11 < fVar9) {
      fVar12 = fVar9;
    }
    *(float *)(param_4 + 0x7c) = fVar12;
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_01c71b20;
    lVar4 = FUN_0391c27c(*(long *)(param_4 + 0x48),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_01c71b20;
    uVar10 = *(undefined4 *)(param_4 + 0x7c);
    lVar5 = FUN_0391c27c(*(long *)(param_4 + 0x48),0);
    if (lVar5 == 0) goto LAB_01c71b20;
    FUN_03928280(lVar5,0);
    if (((*(long *)(param_4 + 0x48) == 0) ||
        (lVar5 = FUN_0391c27c(*(long *)(param_4 + 0x48),0), lVar5 == 0)) ||
       (FUN_03928280(lVar5,0), lVar4 == 0)) goto LAB_01c71b20;
    FUN_039282dc(uVar10,uVar6,lVar4,0);
  }
  if (*(char *)(param_4 + 0x30) != '\0') {
    *(bool *)(param_4 + 0x31) = *(float *)(param_4 + 0x40) < *(float *)(param_4 + 0x44);
  }
  if ((DAT_00b55424 <= *(float *)(param_4 + 0x70)) ||
     ((*(char *)(param_4 + 0x31) == '\0' && (*(char *)(param_4 + 0x78) == '\0')))) {
    if (*(long *)(param_4 + 0x60) == 0) goto LAB_01c71b20;
    iVar3 = FUN_0395a468(*(long *)(param_4 + 0x60),0);
    if (iVar3 == 3) {
      if (*(long *)(param_4 + 0x60) == 0) goto LAB_01c71b20;
      FUN_0395a4a4(*(long *)(param_4 + 0x60),2,0);
    }
    lVar4 = *(long *)(param_4 + 0x60);
    if (lVar4 == 0) goto LAB_01c71b20;
    uVar8 = 0;
    goto LAB_01c71b08;
  }
  if (*(long *)(param_4 + 0x60) == 0) goto LAB_01c71b20;
  iVar3 = FUN_0395a468(*(long *)(param_4 + 0x60),0);
  if (iVar3 == 1) {
LAB_01c71aac:
    if (*(long *)(param_4 + 0x60) == 0) goto LAB_01c71b20;
    FUN_0395a4a4(*(long *)(param_4 + 0x60),3,0);
  }
  else {
    if (*(long *)(param_4 + 0x60) == 0) goto LAB_01c71b20;
    iVar3 = FUN_0395a468(*(long *)(param_4 + 0x60),0);
    if (iVar3 == 2) goto LAB_01c71aac;
  }
  lVar4 = *(long *)(param_4 + 0x60);
  if (lVar4 != 0) {
    uVar8 = 1;
LAB_01c71b08:
    FUN_0395a360(lVar4,uVar8,0);
    return;
  }
LAB_01c71b20:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


