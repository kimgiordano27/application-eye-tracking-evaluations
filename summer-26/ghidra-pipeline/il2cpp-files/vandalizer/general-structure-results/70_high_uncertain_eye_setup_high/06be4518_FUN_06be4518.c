/*
FUNCTION_NAME: FUN_06be4518
ENTRY_POINT: 06be4518
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06be46d0) */
/* WARNING: Removing unreachable block (ram,0x06be4750) */

undefined8 FUN_06be4518(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char local_4c [4];
  undefined8 local_48;
  long local_38;
  
  puVar1 = 
  System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_var;
  if ((DAT_07a4ffbc & 1) == 0) {
    FUN_031f20f4(System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_var)
    ;
    FUN_031f20f4(
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_XRHandSubsystemPlayerLoopRunnerUpdateSystem_var
                );
    FUN_031f20f4(OVRPlugin_Qpl_Annotation_Builder_var);
    FUN_031f20f4(
                <>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARAnchorManager,_ARAnchor>_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<AREnvironmentProbeManager,_AREnvironmentProbe>_TypeInfo
                );
    FUN_031f20f4(
                System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_var
                );
    FUN_031f20f4(System_Threading_ThreadAbortException_var);
    DAT_07a4ffbc = 1;
  }
  local_38 = 0;
  local_48 = 0;
  local_4c[0] = '\0';
  uVar4 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar1 = System_Threading_ThreadAbortException_var;
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
  local_4c[0] = '\0';
  FUN_05e65364(uVar4,local_4c,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar3 = FUN_05815364(**(long **)(lVar2 + 0xb8),param_1,&local_38,
                       *(undefined8 *)
                        UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_XRHandSubsystemPlayerLoopRunnerUpdateSystem_var
                      );
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *(long *)puVar1;
    }
    lVar5 = **(long **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<AREnvironmentProbeManager,_AREnvironmentProbe>_TypeInfo
                              );
    FUN_05812e88(lVar2,*(undefined8 *)OVRPlugin_Qpl_Annotation_Builder_var);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_05813834(lVar5,param_1,lVar2,
                 *(undefined8 *)
                  <>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                );
    local_38 = lVar2;
  }
  if (local_4c[0] != '\0') {
    thunk_FUN_032004d4(uVar4,0);
  }
  if (local_38 == 0) {
LAB_06be4758:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar3 = FUN_05815364(local_38,param_2,&local_48,
                       *(undefined8 *)
                        System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_var
                      );
  if ((uVar3 & 1) == 0) {
    uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_06bf76e8(uVar4,param_1,param_2);
    local_48 = uVar4;
    if (local_38 == 0) goto LAB_06be4758;
    FUN_05813834(local_38,param_2,uVar4,
                 *(undefined8 *)
                  UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARAnchorManager,_ARAnchor>_TypeInfo
                );
  }
  return local_48;
}


