/*
FUNCTION_NAME: FUN_01c7a0b0
ENTRY_POINT: 01c7a0b0
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


void FUN_01c7a0b0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  
  if ((DAT_03fed780 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed780 = 1;
  }
  puVar2 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        return;
      }
      uVar4 = FUN_02b59714(lVar3,iVar6,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar5 = FUN_0391f968(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (lVar3 = FUN_02b59714(*(long *)(param_1 + 0x20),iVar6,*(undefined8 *)puVar2), lVar3 == 0)
           ) break;
        FUN_0391fb70(lVar3,param_2 == iVar6,0);
      }
      lVar3 = *(long *)(param_1 + 0x20);
      iVar6 = iVar6 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


