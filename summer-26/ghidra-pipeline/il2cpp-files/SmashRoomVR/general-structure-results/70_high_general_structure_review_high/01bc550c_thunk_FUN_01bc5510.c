/*
FUNCTION_NAME: thunk_FUN_01bc5510
ENTRY_POINT: 01bc550c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_18;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void thunk_FUN_01bc5510(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if ((DAT_03fed1b2 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__24_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_2__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_1__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed1b2 = 1;
  }
  puVar4 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_2__;
  puVar3 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_1__;
  puVar2 = Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_038eeb08(0);
  uVar6 = FUN_03919b74(*(undefined8 *)puVar3,0);
  uVar5 = FUN_02ee6d10(uVar5,*(undefined8 *)puVar2,uVar6,*(undefined8 *)puVar4,0);
  lVar7 = FUN_02faa91c(uVar5,0);
  puVar4 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
  puVar3 = 
  Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__25_System_Collections_IEnumerator_Reset__
  ;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__;
  if (lVar7 == 0) {
LAB_01bc58a0:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
    uVar12 = 0;
    uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    do {
      if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar8 = FUN_01efc600(*(undefined8 *)(lVar7 + uVar12 * 8 + 0x20),
                           *(undefined8 *)
                            Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__24_System_Collections_IEnumerator_Reset__
                          );
      lVar10 = *(long *)(param_1 + 0x20);
      if (lVar10 == 0) goto LAB_01bc58a0;
      iVar11 = 0;
      while (iVar11 < *(int *)(lVar10 + 0x18)) {
        if (lVar8 == 0) goto LAB_01bc58a0;
        uVar5 = *(undefined8 *)(lVar8 + 0x18);
        lVar10 = FUN_02b59714(lVar10,iVar11,*(undefined8 *)puVar4);
        if (lVar10 == 0) goto LAB_01bc58a0;
        uVar6 = FUN_039230bc(lVar10,0);
        uVar9 = thunk_FUN_02ee6388(uVar5,uVar6,0);
        if ((uVar9 & 1) != 0) {
          if (*(char *)(lVar8 + 0x10) != '\0') {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            lVar10 = FUN_01f25510(*(undefined8 *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_0__);
            if (lVar10 == 0) goto LAB_01bc58a0;
            *(undefined1 *)(lVar10 + 0x20) = 1;
            FUN_0392316c(lVar10,*(undefined8 *)(lVar8 + 0x20),0);
            *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar8 + 0x18);
            thunk_FUN_01b4f09c();
            *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(lVar8 + 0x28);
            thunk_FUN_01b4f09c();
            uVar5 = *(undefined8 *)(lVar8 + 0x30);
            *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)(lVar8 + 0x38);
            *(undefined8 *)(lVar10 + 0x40) = uVar5;
            uVar5 = *(undefined8 *)(lVar8 + 0x3c);
            *(undefined8 *)(lVar10 + 0x54) = *(undefined8 *)(lVar8 + 0x44);
            *(undefined8 *)(lVar10 + 0x4c) = uVar5;
            *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar8 + 0x50);
            thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x60));
            break;
          }
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_01bc58a0;
          uVar5 = FUN_02b59714(*(long *)(param_1 + 0x20),iVar11,*(undefined8 *)puVar4);
          lVar10 = *(long *)puVar2;
          uVar13 = *(undefined4 *)(lVar8 + 0x30);
          uVar14 = *(undefined4 *)(lVar8 + 0x34);
          uVar19 = *(undefined4 *)(lVar8 + 0x38);
          uVar18 = *(undefined4 *)(lVar8 + 0x3c);
          uVar17 = *(undefined4 *)(lVar8 + 0x40);
          uVar15 = *(undefined4 *)(lVar8 + 0x44);
          uVar16 = *(undefined4 *)(lVar8 + 0x48);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar10);
          }
          lVar10 = FUN_01f259b0(uVar13,uVar14,uVar19,uVar18,uVar17,uVar15,uVar16,uVar5,
                                *(undefined8 *)puVar1);
          if ((lVar10 == 0) || (lVar10 = FUN_01ed712c(lVar10,*(undefined8 *)puVar3), lVar10 == 0))
          goto LAB_01bc58a0;
          FUN_0392316c(lVar10,*(undefined8 *)(lVar8 + 0x20),0);
          *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar8 + 0x18);
          thunk_FUN_01b4f09c();
          *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(lVar8 + 0x28);
          thunk_FUN_01b4f09c();
          uVar5 = *(undefined8 *)(lVar8 + 0x30);
          *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)(lVar8 + 0x38);
          *(undefined8 *)(lVar10 + 0x40) = uVar5;
          uVar5 = *(undefined8 *)(lVar8 + 0x3c);
          *(undefined8 *)(lVar10 + 0x54) = *(undefined8 *)(lVar8 + 0x44);
          *(undefined8 *)(lVar10 + 0x4c) = uVar5;
          *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar8 + 0x50);
          thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x60));
        }
        lVar10 = *(long *)(param_1 + 0x20);
        iVar11 = iVar11 + 1;
        if (lVar10 == 0) goto LAB_01bc58a0;
      }
      uVar12 = uVar12 + 1;
      uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
    } while ((long)uVar12 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  return;
}


