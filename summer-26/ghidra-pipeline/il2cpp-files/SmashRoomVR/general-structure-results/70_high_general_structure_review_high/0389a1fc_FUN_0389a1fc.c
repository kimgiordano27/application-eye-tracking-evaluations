/*
FUNCTION_NAME: FUN_0389a1fc
ENTRY_POINT: 0389a1fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0389a1fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar2 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  if ((DAT_03ff88f0 & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da8ba0);
    thunk_FUN_01ad9084(StringLiteral_4834);
    thunk_FUN_01ad9084(PTR_DAT_03da8ba8);
    DAT_03ff88f0 = 1;
  }
  puVar1 = PTR_DAT_03da8ba8;
  puVar4 = StringLiteral_4834;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar5 = PTR_DAT_03da8ba0;
  puVar3 = Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__;
  puVar2 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  FUN_038f2acc(*(undefined8 *)puVar1,0);
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)puVar4;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
  *puVar7 = param_1;
  thunk_FUN_01b4f09c(puVar7,param_1);
  uVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
  FUN_02fd7524(uVar8,0,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_038ef9c8(uVar8,0);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03923cd4(uVar8,0);
  return;
}


