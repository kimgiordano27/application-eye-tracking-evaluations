/*
FUNCTION_NAME: FUN_032b472c
ENTRY_POINT: 032b472c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_8;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


bool FUN_032b472c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_03ff5889 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03ff5889 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 2) {
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar2 = *(undefined4 *)(lVar5 + 0x20);
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0322fef4(uVar2,0);
    uVar6 = *(undefined8 *)(lVar5 + 0x38);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar4 = FUN_03922f24(uVar6,0,0);
    if ((uVar3 & uVar4 & 1) != 0) {
      FUN_032b4360(lVar5,*(undefined8 *)(lVar5 + 0x40));
    }
    uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                              );
    FUN_03924d70(0x3f000000,uVar6,0);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar6);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return uVar1 < 2;
}


