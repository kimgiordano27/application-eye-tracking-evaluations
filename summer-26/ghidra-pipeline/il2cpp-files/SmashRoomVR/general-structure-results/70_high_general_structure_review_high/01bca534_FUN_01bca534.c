/*
FUNCTION_NAME: FUN_01bca534
ENTRY_POINT: 01bca534
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01bca534(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  if ((DAT_03fed1d0 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed1d0 = 1;
  }
  lVar4 = FUN_0391c2b8(param_1,0);
  if (lVar4 != 0) {
    FUN_0391fb70(lVar4,0,0);
    puVar3 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    lVar4 = *(long *)(param_1 + 0x70);
    if (lVar4 != 0) {
      uVar8 = 0;
      while ((long)uVar8 < (long)*(int *)(lVar4 + 0x18)) {
        if (*(long *)(param_1 + 0x80) == 0) goto LAB_01bca698;
        uVar5 = FUN_02b59714(*(long *)(param_1 + 0x80),uVar8 & 0xffffffff,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar6 = FUN_03923030(uVar5,0);
        if ((uVar6 & 1) != 0) {
          lVar4 = *(long *)(param_1 + 0x70);
          if (lVar4 == 0) goto LAB_01bca698;
          if (*(uint *)(lVar4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          if (*(char *)(lVar4 + uVar8 + 0x20) != '\0') {
            if ((*(long *)(param_1 + 0x80) == 0) ||
               (lVar4 = FUN_02b59714(*(long *)(param_1 + 0x80),uVar8 & 0xffffffff,
                                     *(undefined8 *)puVar3), lVar4 == 0)) goto LAB_01bca698;
            FUN_0391fb70(lVar4,1,0);
          }
        }
        lVar4 = *(long *)(param_1 + 0x70);
        uVar8 = uVar8 + 1;
        if (lVar4 == 0) goto LAB_01bca698;
      }
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x18);
        if (iVar1 < 1) {
          return;
        }
        iVar7 = 0;
        goto LAB_01bca668;
      }
    }
  }
  goto LAB_01bca698;
  while( true ) {
    FUN_0391fb70(lVar4,0,0);
    iVar7 = iVar7 + 1;
    if (iVar1 == iVar7) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 == 0) break;
LAB_01bca668:
    lVar4 = FUN_02b59714(lVar4,iVar7,*(undefined8 *)puVar3);
    if (lVar4 == 0) break;
  }
LAB_01bca698:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


