/*
FUNCTION_NAME: FUN_05c3465c
ENTRY_POINT: 05c3465c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 102
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering
MODULES: weak_source_state;validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_permission_setup;functionality_foveated_rendering
*/


void FUN_05c3465c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined1 local_64 [4];
  
  puVar1 = PTR_DAT_0664d6f0;
  if ((DAT_06a578af & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRDisplaySubsystem>__);
    FUN_02d4dc40(PTR_DAT_0664d6f0);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRInputSubsystem>__);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ProcessOpenXRMessageLoop__);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEvent__);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<DPadInteraction>__);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__)
    ;
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeatures<OpenXRInteractionFeature>__
                );
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback__);
    FUN_02d4dc40(Method_System_OperatingSystem__ctor__);
    FUN_02d4dc40(Method_System_OperatingSystem_GetObjectData__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_OptionalFieldAttribute_set_VersionAdded__);
    DAT_06a578af = 1;
  }
  local_64[0] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = FUN_05b1fe8c(0);
  puVar8 = Method_System_Runtime_Serialization_OptionalFieldAttribute_set_VersionAdded__;
  puVar7 = Method_System_OperatingSystem_GetObjectData__;
  puVar6 = Method_System_OperatingSystem__ctor__;
  puVar5 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback__;
  puVar4 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeatures<OpenXRInteractionFeature>__;
  puVar3 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ProcessOpenXRMessageLoop__;
  puVar2 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRInputSubsystem>__;
  puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRDisplaySubsystem>__;
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x10), lVar9 != 0)) {
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)
                                 Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__
                         );
    *(undefined8 *)(param_1 + 0x1c0) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x1c0,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar5);
    *(undefined8 *)(param_1 + 0x1c8) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x1c8,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar7);
    *(undefined8 *)(param_1 + 0x1d0) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x1d0,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar6);
    *(undefined8 *)(param_1 + 0x1d8) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x1d8,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x1e0) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x1e0,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar4);
    *(undefined8 *)(param_1 + 0x1e8) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x1e8,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x1f0) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x1f0,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar8);
    *(undefined8 *)(param_1 + 0x1f8) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x1f8,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)
                                 Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<DPadInteraction>__
                         );
    *(undefined8 *)(param_1 + 0x200) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x200,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)
                                 Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEvent__)
    ;
    *(undefined8 *)(param_1 + 0x208) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x208,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)
                                 Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__
                         );
    *(undefined8 *)(param_1 + 0x210) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x210,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)
                                 Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__
                         );
    *(undefined8 *)(param_1 + 0x218) = uVar10;
    thunk_FUN_02dc1ef0(param_1 + 0x218,uVar10);
    pcVar11 = (char *)FUN_05c97e34(param_3 + 0x20,0);
    *(bool *)(param_1 + 599) = *pcVar11 != '\0';
    pcVar11 = (char *)FUN_05c97e90(param_3 + 0x20,0);
    *(bool *)(param_1 + 600) = *pcVar11 != '\0';
    pcVar11 = (char *)FUN_05c97eec(param_3 + 0x20,0);
    *(bool *)(param_1 + 0x259) = *pcVar11 != '\0';
    puVar12 = (undefined8 *)FUN_05c9490c(param_3,0);
    uVar10 = *puVar12;
    if (*(char *)(param_1 + 0x254) == '\0') {
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar9 = *(long *)puVar1;
      }
      FUN_05b07194(local_64,uVar10,**(undefined8 **)(lVar9 + 0xb8),0);
      FUN_05c354a4(param_1,uVar10,param_3);
    }
    else {
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar9 = *(long *)puVar1;
      }
      FUN_05b07194(local_64,uVar10,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8),0);
      FUN_05c34ae4(param_1,uVar10,param_3);
    }
    FUN_05b0719c(local_64,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


