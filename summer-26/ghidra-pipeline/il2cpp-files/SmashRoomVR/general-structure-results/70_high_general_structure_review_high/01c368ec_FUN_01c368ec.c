/*
FUNCTION_NAME: FUN_01c368ec
ENTRY_POINT: 01c368ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c368ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_03fed53b & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_42E1421FC2A5A6A33E964D7EB9603EB101818D858DDA09B2BC9B5A888C1C351C
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed53b = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                              );
    FUN_03924d70(uVar6,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x80) = 0;
    *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar5 + 0x24);
    puVar2 = Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__;
    if (*(long *)(lVar5 + 0x38) != 0) {
      FUN_02b5a400(&local_90,*(long *)(lVar5 + 0x38),
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__);
      puVar1 = Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_1__;
      uStack_58 = uStack_88;
      local_60 = local_90;
      local_50 = local_80;
      while (uVar4 = FUN_02739b98(&local_60,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
        if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0391fb70(local_50,0,0);
      }
      FUN_02739b94(&local_60,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__);
      if (*(long *)(lVar5 + 0x40) != 0) {
        FUN_02b5a400(&local_90,*(long *)(lVar5 + 0x40),*(undefined8 *)puVar2);
        uStack_58 = uStack_88;
        local_60 = local_90;
        local_50 = local_80;
        while (uVar4 = FUN_02739b98(&local_60,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
          if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_0391fb70(local_50,1,0);
        }
        FUN_02739b94(&local_60,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__);
        if (*(long *)(lVar5 + 0x48) != 0) {
          FUN_02b5a400(&local_78,*(long *)(lVar5 + 0x48),
                       *(undefined8 *)
                        Field_<PrivateImplementationDetails>_42E1421FC2A5A6A33E964D7EB9603EB101818D858DDA09B2BC9B5A888C1C351C
                      );
          puVar2 = 
          Field_<PrivateImplementationDetails>_3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE
          ;
          while (uVar4 = FUN_02739b98(&local_78,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
            if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0395b38c(local_68,1,0);
          }
          FUN_02739b94(&local_78,
                       *(undefined8 *)
                        Field_<PrivateImplementationDetails>_3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F
                      );
          uVar3 = *(undefined8 *)(lVar5 + 0x88);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_03923030(uVar3,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(lVar5 + 0x88) == 0) goto LAB_01c36bbc;
            FUN_0395a360(*(long *)(lVar5 + 0x88),*(undefined1 *)(lVar5 + 0x90),0);
          }
          if (*(long *)(lVar5 + 0x78) != 0) {
            FUN_0392e738(*(long *)(lVar5 + 0x78),0);
            return 0;
          }
          return 0;
        }
      }
    }
  }
LAB_01c36bbc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


