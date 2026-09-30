/*
FUNCTION_NAME: FUN_01c33c78
ENTRY_POINT: 01c33c78
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_01c33c78(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_03fed529 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
                      );
    thunk_FUN_01ad9084(
                      Method_ObjectManipulator_<StartDemo>d__23_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__54_1__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed529 = 1;
  }
  plVar6 = (long *)(param_1 + 0x38);
  lVar7 = *plVar6;
  if (lVar7 == 0) {
    lVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__54_1__);
    FUN_02b591b0(lVar7,*(undefined8 *)
                        Method_ObjectManipulator_<StartDemo>d__23_System_Collections_IEnumerator_Reset__
                );
    *plVar6 = lVar7;
    thunk_FUN_01b4f09c(plVar6,lVar7);
    lVar7 = *plVar6;
    if (lVar7 == 0) goto LAB_01c33e48;
  }
  puVar2 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
  if (*(int *)(param_1 + 0x30) < *(int *)(lVar7 + 0x18)) {
    uVar3 = FUN_02b59714(lVar7,0,*(undefined8 *)
                                  Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                        );
    FUN_02b5ae30(lVar7,uVar3,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
                );
    if (*plVar6 == 0) goto LAB_01c33e48;
    uVar3 = FUN_02b59714(*plVar6,0,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    FUN_03923a90(uVar3,0);
    lVar7 = *plVar6;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if ((lVar4 != 0) && (uVar3 = FUN_01c6c1cc(*(undefined4 *)(lVar4 + 0x28),lVar4,0), lVar7 != 0)) {
    lVar4 = *(long *)(lVar7 + 0x10);
    lVar5 = *(long *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
        thunk_FUN_01b4f09c();
        return;
      }
      FUN_02b599e4(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_01c33e48:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


