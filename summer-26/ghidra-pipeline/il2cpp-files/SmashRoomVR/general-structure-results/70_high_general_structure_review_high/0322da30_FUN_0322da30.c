/*
FUNCTION_NAME: FUN_0322da30
ENTRY_POINT: 0322da30
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


undefined8
FUN_0322da30(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 local_150 [2];
  undefined8 uStack_13c;
  undefined8 local_130 [2];
  undefined8 uStack_11c;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f0 [2];
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined8 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  
  if ((DAT_03ff46a2 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    DAT_03ff46a2 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_7c = 0;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar9 = *(undefined4 *)
           (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
  *param_2 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(param_2 + 1) = uVar9;
  cVar8 = '\x01';
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
    cVar8 = DAT_03fed257;
  }
  puVar2 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
  uVar5 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  param_3[1] = (*(undefined8 **)
                 (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                 0xb8))[1];
  *param_3 = uVar5;
  if (cVar8 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar9 = *(undefined4 *)(puVar7 + 1);
  *param_4 = *puVar7;
  *(undefined4 *)(param_4 + 1) = uVar9;
  puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar9 = *(undefined4 *)(puVar7 + 1);
  *param_5 = *puVar7;
  *(undefined4 *)(param_5 + 1) = uVar9;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x100) == 1) {
    if (*(int *)(*(long *)
                  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar3 = FUN_0324d97c(0);
    if (iVar3 == 3) {
      if (param_1 < 3) {
        if (param_1 == 1) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar5 = 0xc;
        }
        else {
          if (param_1 != 2) {
            return 0;
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar5 = 0xd;
        }
      }
      else if (param_1 == 0x20) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = 3;
      }
      else {
        if (param_1 != 0x40) {
          return 0;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = 4;
      }
      FUN_0325191c(local_f0,uVar5,0);
      puVar1 = 
      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
      ;
      local_90 = local_f0[0];
      uStack_7c = (undefined4)uStack_dc;
      local_78 = (undefined4)((ulong)uStack_dc >> 0x20);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0322c0ec(param_1);
      if ((uVar6 & 1) != 0) {
        uStack_11c = CONCAT44(local_78,uStack_7c);
        local_130[0] = local_90;
        FUN_03206228(&local_110,local_130,0);
        local_f0[0] = local_110;
        uStack_dc = uStack_fc;
        *(undefined4 *)(param_2 + 1) = uStack_108;
        *param_2 = local_110;
        uVar9 = FUN_0320ba80(0);
        *(undefined4 *)param_4 = uVar9;
        *(undefined4 *)((long)param_4 + 4) = uStack_d0;
        *(undefined4 *)(param_4 + 1) = local_cc;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0322bf0c(param_1);
      if ((uVar6 & 1) != 0) {
        uStack_13c = CONCAT44(local_78,uStack_7c);
        local_150[0] = local_90;
        FUN_03206228(&local_110,local_150,0);
        uStack_dc = uStack_fc;
        local_f0[0] = local_110;
        param_3[1] = uStack_fc;
        *param_3 = CONCAT44(uStack_100,uStack_104);
        uVar9 = FUN_0320ba80(0);
        *(undefined4 *)param_5 = uVar9;
        *(undefined4 *)((long)param_5 + 4) = uStack_b8;
        *(undefined4 *)(param_5 + 1) = local_b4;
      }
      return 1;
    }
  }
  return 0;
}


