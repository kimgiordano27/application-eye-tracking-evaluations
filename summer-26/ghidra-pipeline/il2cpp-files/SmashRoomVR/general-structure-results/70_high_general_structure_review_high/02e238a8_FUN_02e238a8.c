/*
FUNCTION_NAME: FUN_02e238a8
ENTRY_POINT: 02e238a8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_02e238a8(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_03ff01a5 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01a5 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((*(char *)(param_5 + 0x72) == '\0') || (*(char *)(param_5 + 0x308) != '\0')) {
    return;
  }
  uVar5 = *(undefined8 *)(param_5 + 0x98);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar5,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(char *)(param_5 + 0x309) != '\0') {
    return;
  }
  fVar8 = 0.0;
  if (*(char *)(param_5 + 0xf2) == '\0') {
    fVar6 = (float)FUN_02e2183c(param_5);
    fVar8 = param_2;
    fVar9 = param_3;
    fVar10 = param_4;
    fVar7 = (float)FUN_02e1e434(param_5);
    fVar9 = param_3 * fVar9;
    param_3 = 1.0;
    fVar9 = (float)NEON_fminnm(ABS(param_4 * fVar10 + fVar9 + fVar6 * fVar7 + param_2 * fVar8),
                               0x3f800000);
    fVar8 = 0.0;
    param_2 = DAT_00b553b8;
    if (fVar9 <= DAT_00b553b8) {
      fVar8 = acosf(fVar9);
      fVar8 = (fVar8 + fVar8) * DAT_00b556e8;
      param_2 = DAT_00b556e8;
    }
  }
  fVar9 = 0.0;
  if (*(char *)(param_5 + 0xf1) == '\0') {
    uVar5 = *(undefined8 *)(param_5 + 0x330);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar5,0);
    fVar9 = 0.0;
    if ((uVar3 & 1) != 0) {
      fVar6 = (float)FUN_02e21c1c(param_5);
      fVar9 = param_2;
      fVar10 = param_3;
      fVar7 = (float)FUN_02e21b34(param_5);
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25e = '\x01';
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar9 = SQRT((param_3 - fVar10) * (param_3 - fVar10) +
                   (fVar6 - fVar7) * (fVar6 - fVar7) + (param_2 - fVar9) * (param_2 - fVar9));
    }
  }
  if (((*(char *)(param_5 + 0xf2) == '\0') && (*(float *)(param_5 + 0xf4) < fVar8)) ||
     ((*(char *)(param_5 + 0xf1) == '\0' && (*(float *)(param_5 + 0xf8) < fVar9)))) {
    lVar4 = *(long *)(param_5 + 0x98);
    if (lVar4 == 0) goto LAB_02e23ae8;
    if ((*(char *)(lVar4 + 0x3d) == '\0') && (iVar2 = FUN_02ddfc1c(lVar4,0), iVar2 < 2)) {
      return;
    }
  }
  if (*(long *)(param_5 + 0x98) != 0) {
    FUN_02e286dc(param_5,*(undefined1 *)(*(long *)(param_5 + 0x98) + 0x3e));
    return;
  }
LAB_02e23ae8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


