/*
FUNCTION_NAME: FUN_01c29360
ENTRY_POINT: 01c29360
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01c29360(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((DAT_03fed4c3 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_3BA20E66882BA2DB8370AA6251D396012AD072FE5A7CF059521FB4A5A02B92D8
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_BD199D44CC5FFF41A1C37FD35241A5024EC5E6A11274C19A47669D388401995D
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed4c3 = 1;
  }
  puVar4 = 
  Field_<PrivateImplementationDetails>_3BA20E66882BA2DB8370AA6251D396012AD072FE5A7CF059521FB4A5A02B92D8
  ;
  puVar3 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != 0) {
    iVar7 = 0;
    do {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (iVar1 <= iVar7) {
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_03062488(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03077b60(0);
        return;
      }
      uVar6 = FUN_02b59714(lVar5,iVar7,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      FUN_03923b4c(uVar6,0);
      lVar5 = *(long *)(param_1 + 0xa8);
      iVar7 = iVar7 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


