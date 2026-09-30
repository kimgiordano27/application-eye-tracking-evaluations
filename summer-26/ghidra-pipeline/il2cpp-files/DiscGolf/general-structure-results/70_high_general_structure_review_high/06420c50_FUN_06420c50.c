/*
FUNCTION_NAME: FUN_06420c50
ENTRY_POINT: 06420c50
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_12
*/


void FUN_06420c50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar3 = Method_Unity_Services_Vivox_vx_req_sessiongroup_set_tx_no_session_t__ctor__;
  puVar2 = Method_System_Xml_Schema_XsdBuilder_BuildElement_Type__;
  puVar1 = Method_System_Xml_Schema_XsdBuilder_BuildElement_SubstitutionGroup__;
  if ((DAT_06dcca21 & 1) == 0) {
    FUN_02d965b8(Method_Unity_Services_Vivox_vx_req_sessiongroup_set_tx_session_t__ctor__);
    FUN_02d965b8(
                Method_UnityEngine_XR_ARCore_ARCoreCameraSubsystem_ARCoreProvider_OnBeforeGetCameraConfiguration__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_ARCore_ARCoreCameraSubsystem_NativeApi_UnityARCore_Camera_GetImageStabilizationSupported__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_ARCore_ARCoreImageTrackingSubsystem_ARCoreProvider_set_imageLibrary__
                );
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildGroup_Name__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildElement_Type__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildElement_SubstitutionGroup__);
    FUN_02d965b8(
                Method_UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_NativeApi_UnityARCore_OcclusionProvider_DoesSupportEnvironmentDepth__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_ARCore_ARCorePointCloudSubsystem_ARCoreProvider_GenerateGuid__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_ARCore_ARCoreSessionSubsystem_ARCoreProvider_CameraPermissionRequestProvider__
                );
    FUN_02d965b8(Method_Unity_Services_Vivox_vx_req_sessiongroup_set_tx_no_session_t__ctor__);
    DAT_06dcca21 = 1;
  }
  lVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_0552aca4(lVar4,0);
  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_03fbd1c4(lVar5,*(undefined8 *)puVar2);
  puVar2 = 
  Method_UnityEngine_XR_ARCore_ARCoreImageTrackingSubsystem_ARCoreProvider_set_imageLibrary__;
  puVar1 = 
  Method_UnityEngine_XR_ARCore_ARCoreCameraSubsystem_ARCoreProvider_OnBeforeGetCameraConfiguration__
  ;
  if (lVar4 != 0) {
    plVar7 = (long *)(lVar4 + 0x10);
    *plVar7 = lVar5;
    LeanTween__value(plVar7,lVar5);
    puVar3 = 
    Method_UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_NativeApi_UnityARCore_OcclusionProvider_DoesSupportEnvironmentDepth__
    ;
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
      FUN_04be213c(uVar6,lVar4,*(undefined8 *)puVar3,0);
      FUN_04010bd8(lVar5,uVar6,*(undefined8 *)puVar2);
    }
    lVar5 = FUN_0641ff4c(param_1);
    puVar3 = Method_UnityEngine_XR_ARCore_ARCorePointCloudSubsystem_ARCoreProvider_GenerateGuid__;
    if (lVar5 != 0) {
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
      FUN_04be213c(uVar6,lVar4,*(undefined8 *)puVar3,0);
      FUN_04010bd8(lVar5,uVar6,*(undefined8 *)puVar2);
    }
    puVar2 = 
    Method_UnityEngine_XR_ARCore_ARCoreSessionSubsystem_ARCoreProvider_CameraPermissionRequestProvider__
    ;
    puVar1 = 
    Method_UnityEngine_XR_ARCore_ARCoreCameraSubsystem_NativeApi_UnityARCore_Camera_GetImageStabilizationSupported__
    ;
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar5 != 0) {
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_Unity_Services_Vivox_vx_req_sessiongroup_set_tx_session_t__ctor__
                                );
      FUN_04be213c(uVar6,lVar4,*(undefined8 *)puVar2,0);
      FUN_04010bd8(lVar5,uVar6,*(undefined8 *)puVar1);
    }
    if (*plVar7 != 0) {
      FUN_03fbf3c8(*plVar7,*(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildGroup_Name__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


