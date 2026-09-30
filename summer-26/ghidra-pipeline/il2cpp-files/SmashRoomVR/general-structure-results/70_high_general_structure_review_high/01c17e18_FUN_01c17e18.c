/*
FUNCTION_NAME: FUN_01c17e18
ENTRY_POINT: 01c17e18
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


undefined8
FUN_01c17e18(undefined8 param_1,undefined8 param_2,ulong param_3,float param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,float *param_10,
            ulong param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  
  if ((DAT_03fed435 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_SimulatedHandExpression_OnActionPerformed__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed435 = 1;
  }
  fVar16 = (float)param_8;
  fVar19 = param_4 * fVar16;
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_94 = 0;
  uStack_a0 = 0;
  uVar5 = param_3;
  uVar3 = FUN_01c1837c(param_1,param_2,param_3,fVar19,param_5,param_6,param_7,param_8,param_9,
                       param_10,&local_b0);
  fVar17 = (float)uVar5;
  fVar13 = (float)param_5;
  fVar10 = (float)param_6;
  fVar15 = (float)param_7;
  if ((uVar3 & 1) == 0) {
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    fVar17 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar10 * fVar10);
    if (fVar17 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar13 = *pfVar6;
      fVar10 = pfVar6[1];
      fVar15 = pfVar6[2];
    }
    else {
      fVar13 = fVar13 / fVar17;
      fVar10 = fVar10 / fVar17;
      fVar15 = fVar15 / fVar17;
    }
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar17 = fVar19 * DAT_00b550ac + fVar17;
    uVar5 = FUN_01c1837c(param_1,param_2,param_3,fVar19 * DAT_00b555b4,fVar17 * fVar13,
                         fVar17 * fVar10,fVar17 * fVar15,fVar16 * DAT_00b555b4,param_9,param_10,
                         &local_b0);
    if ((uVar5 & 1) == 0) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      fVar17 = *(float *)(puVar7 + 1);
      *(undefined8 *)param_10 = *puVar7;
      param_10[2] = fVar17;
      return 0;
    }
    *param_10 = (float)param_1;
    param_10[1] = (float)param_2;
  }
  else {
    fVar11 = *param_10;
    fVar8 = param_10[1];
    fVar20 = param_10[2];
    fVar19 = fVar11;
    lVar4 = FUN_03959ba8(&local_b0,0);
    if (lVar4 == 0) {
LAB_01c1824c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = FUN_01e8a9f8(lVar4,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_SimulatedHandExpression_OnActionPerformed__
                        );
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar5 = FUN_0391f968(lVar4,0,0);
    if ((uVar5 & 1) == 0) {
      fVar18 = DAT_00b5568c;
      if ((param_11 & 1) == 0) {
        fVar18 = *(float *)(param_9 + 0x9c);
      }
    }
    else {
      if (lVar4 == 0) goto LAB_01c1824c;
      fVar18 = *(float *)(lVar4 + 0x20);
    }
    fVar9 = (float)FUN_03959c60(&local_b0,0);
    if (DAT_03fed45d == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
      DAT_03fed45d = '\x01';
    }
    fVar14 = ((float)param_2 + fVar10) - fVar8;
    fVar12 = fVar17 * fVar17 + fVar9 * fVar9 + fVar19 * fVar19;
    fVar10 = ((float)param_1 + fVar13) - fVar11;
    fVar15 = ((float)param_3 + fVar15) - fVar20;
    if (**(float **)
          (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
        fVar12) {
      fVar13 = fVar15 * fVar17 + fVar10 * fVar9 + fVar14 * fVar19;
      fVar10 = fVar10 - (fVar9 * fVar13) / fVar12;
      fVar14 = fVar14 - (fVar19 * fVar13) / fVar12;
      fVar15 = fVar15 - (fVar17 * fVar13) / fVar12;
    }
    uVar5 = FUN_01c1837c(*param_10,param_10[1],param_10[2],param_4,fVar18 * fVar10,fVar18 * fVar14,
                         fVar18 * fVar15,fVar16 * fVar16,param_9,param_10,&local_b0);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    param_3 = (ulong)(uint)fVar20;
    uVar5 = FUN_01c1837c(param_9,param_10,&local_b0);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    *param_10 = fVar11;
    param_10[1] = fVar8;
  }
  param_10[2] = (float)param_3;
  return 1;
}


