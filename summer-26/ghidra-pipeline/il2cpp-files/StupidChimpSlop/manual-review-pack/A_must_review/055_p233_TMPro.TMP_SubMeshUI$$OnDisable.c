/*
FUNCTION_NAME: TMPro.TMP_SubMeshUI$$OnDisable
ENTRY_POINT: 05c346c8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;foveated_rendering
MODULES: weak_source_state;validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_permission_setup;functionality_foveated_rendering
*/


void TMPro_TMP_SubMeshUI__OnDisable(long param_1)

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
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 uStack000000000000001c;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0xf98));
  FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<DPadInteraction>__);
  FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__);
  FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__);
                    /* try { // try from 05c346f4 to 05d347c7 has its CatchHandler @ 05c346f4
                       catch() { ... } // from try @ 05c346f4 with catch @ 05c346f4
                       catch() { ... } // from try @ 05c34804 with catch @ 05c346f4
                       catch() { ... } // from try @ 05c34868 with catch @ 05c346f4
                       catch() { ... } // from try @ 05c34894 with catch @ 05c346f4
                       catch() { ... } // from try @ 05c348b8 with catch @ 05c346f4 */
  FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeatures<OpenXRInteractionFeature>__);
  FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback__);
  FUN_02d4dc40(Method_System_OperatingSystem__ctor__);
  FUN_02d4dc40(Method_System_OperatingSystem_GetObjectData__);
  FUN_02d4dc40(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__);
  FUN_02d4dc40(Method_System_Runtime_Serialization_OptionalFieldAttribute_set_VersionAdded__);
  *(undefined1 *)(unaff_x22 + 0x8af) = 1;
  uStack000000000000001c = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
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
    *(undefined8 *)(unaff_x20 + 0x1c0) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x1c0,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar5);
    *(undefined8 *)(unaff_x20 + 0x1c8) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x1c8,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar7);
    *(undefined8 *)(unaff_x20 + 0x1d0) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x1d0,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar6);
    *(undefined8 *)(unaff_x20 + 0x1d8) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x1d8,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar2);
    *(undefined8 *)(unaff_x20 + 0x1e0) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x1e0,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar4);
    *(undefined8 *)(unaff_x20 + 0x1e8) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x1e8,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar3);
    *(undefined8 *)(unaff_x20 + 0x1f0) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x1f0,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)puVar8);
    *(undefined8 *)(unaff_x20 + 0x1f8) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x1f8,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)
                                 Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<DPadInteraction>__
                         );
    *(undefined8 *)(unaff_x20 + 0x200) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x200,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)
                                 Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEvent__)
    ;
    *(undefined8 *)(unaff_x20 + 0x208) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x208,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)
                                 Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__
                         );
    *(undefined8 *)(unaff_x20 + 0x210) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x210,uVar10);
    uVar10 = FUN_0344f524(lVar9,*(undefined8 *)
                                 Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__
                         );
    *(undefined8 *)(unaff_x20 + 0x218) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x20 + 0x218,uVar10);
    pcVar11 = (char *)FUN_05c97e34(unaff_x19 + 0x20,0);
    *(bool *)(unaff_x20 + 599) = *pcVar11 != '\0';
    pcVar11 = (char *)FUN_05c97e90(unaff_x19 + 0x20,0);
    *(bool *)(unaff_x20 + 600) = *pcVar11 != '\0';
    pcVar11 = (char *)FUN_05c97eec(unaff_x19 + 0x20,0);
    *(bool *)(unaff_x20 + 0x259) = *pcVar11 != '\0';
    puVar12 = (undefined8 *)FUN_05c9490c();
    uVar10 = *puVar12;
    if (*(char *)(unaff_x20 + 0x254) == '\0') {
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar9 = *(long *)puVar1;
      }
      FUN_05b07194(&stack0x0000001c,uVar10,**(undefined8 **)(lVar9 + 0xb8),0);
      FUN_05c354a4();
    }
    else {
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar9 = *(long *)puVar1;
      }
      FUN_05b07194(&stack0x0000001c,uVar10,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8),0);
      FUN_05c34ae4();
    }
    FUN_05b0719c(&stack0x0000001c,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


