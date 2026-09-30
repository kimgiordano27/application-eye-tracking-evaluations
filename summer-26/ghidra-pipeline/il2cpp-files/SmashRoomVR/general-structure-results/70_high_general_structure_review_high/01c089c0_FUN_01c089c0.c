/*
FUNCTION_NAME: FUN_01c089c0
ENTRY_POINT: 01c089c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01c089c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_03fed3d3 & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed3d3 = 1;
  }
  puVar3 = Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_1__;
  puVar2 = Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    if (0 < *(int *)(lVar5 + 0x18)) {
      FUN_02b5a400(&local_48,lVar5,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__);
      while (uVar6 = FUN_02739b98(&local_48,*(undefined8 *)puVar3), uVar4 = local_38,
            (uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03923a90(uVar4,0);
      }
      FUN_02739b94(&local_48,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


