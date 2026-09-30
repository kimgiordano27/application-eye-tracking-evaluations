/*
FUNCTION_NAME: FUN_01c08b38
ENTRY_POINT: 01c08b38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01c08b38(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((DAT_03fed3d2 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector3Field_<>c_<DescribeFields>b__0_0__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed3d2 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    lVar6 = *(long *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar5 = param_2;
        thunk_FUN_01b4f09c(puVar5,param_2);
      }
      else {
        FUN_02b599e4(lVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 != 0) {
        if ((float)*(int *)(lVar2 + 0x18) <= *(float *)(param_1 + 0x28)) {
          return;
        }
        uVar3 = FUN_02b59714(lVar2,0,*(undefined8 *)
                                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                            );
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_02b5b0dc(*(long *)(param_1 + 0x20),0,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_Vector3Field_<>c_<DescribeFields>b__0_0__);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_03923a90(uVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


