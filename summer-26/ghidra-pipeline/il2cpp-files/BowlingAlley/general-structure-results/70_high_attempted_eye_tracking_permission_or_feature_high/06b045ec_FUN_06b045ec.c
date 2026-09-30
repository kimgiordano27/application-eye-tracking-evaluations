/*
FUNCTION_NAME: FUN_06b045ec
ENTRY_POINT: 06b045ec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_06b045ec(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = Method_UnityEngine_XR_ARFoundation_ARCameraBackground_AddCommandBufferToCameraEvent__;
  if ((DAT_076e340e & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280008);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARCameraBackground_AddCommandBufferToCameraEvent__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_XR_ARCore_ARCorePermissionManager_RequestPermission__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARCore_ARCoreSessionSubsystem_ConfigurationChangedFromProvider__
                      );
    DAT_076e340e = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar2);
    lVar2 = *(long *)puVar1;
  }
  plVar3 = *(long **)(lVar2 + 0xb8);
  if (*plVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar2);
      plVar3 = *(long **)(*(long *)puVar1 + 0xb8);
    }
    lVar2 = plVar3[1];
    uVar4 = *(undefined8 *)
             Method_UnityEngine_XR_ARCore_ARCoreSessionSubsystem_ConfigurationChangedFromProvider__;
    uVar5 = *(undefined8 *)Method_UnityEngine_XR_ARCore_ARCorePermissionManager_RequestPermission__;
    if (*(int *)(*(long *)PTR_DAT_07280008 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_0644a524(lVar2,uVar4,uVar5,0);
    lVar2 = *(long *)puVar1;
    **(undefined8 **)(lVar2 + 0xb8) = uVar4;
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar2);
    lVar2 = *(long *)puVar1;
  }
  *param_1 = **(undefined8 **)(lVar2 + 0xb8);
  return;
}


