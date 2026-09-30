/*
FUNCTION_NAME: FUN_05de832c
ENTRY_POINT: 05de832c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_05de832c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((DAT_06b83179 & 1) == 0) {
    FUN_02d6084c(System_ComponentModel_CollectionChangeEventHandler_TypeInfo);
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XREnvironmentProbeSubsystem,_XREnvironmentProbeSubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRFaceSubsystem,_XRFaceSubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRHandSubsystem,_XRHandSubsystemProvider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRHandSubsystem,_XRHandSubsystemProvider>_Create__
                );
    FUN_02d6084c(PTR_DAT_0678b7f0);
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRHumanBodySubsystem,_XRHumanBodySubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRImageTrackingSubsystem,_XRImageTrackingSubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRObjectTrackingSubsystem,_XRObjectTrackingSubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XROcclusionSubsystem,_XROcclusionSubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRParticipantSubsystem,_XRParticipantSubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRPlaneSubsystem,_XRPlaneSubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRPointCloudSubsystem,_XRPointCloudSubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRRaycastSubsystem,_XRRaycastSubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRSessionSubsystem,_XRSessionSubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider>_get_subsystem__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRBoundingBoxSubsystem,_XRBoundingBoxSubsystemDescriptor,_XRBoundingBoxSubsystem_Provider>_get_subsystem__
                );
    FUN_02d6084c(PTR_DAT_06762af8);
    DAT_06b83179 = 1;
  }
  if (param_2 != 0) {
    FUN_05de81d4(param_1,*(undefined8 *)(param_2 + 0x10));
    switch(*(undefined4 *)(param_2 + 0x20)) {
    case 0:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRImageTrackingSubsystem,_XRImageTrackingSubsystem_Provider>__ctor__
      ;
      break;
    case 1:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRRaycastSubsystem,_XRRaycastSubsystem_Provider>__ctor__
      ;
      break;
    case 2:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRBoundingBoxSubsystem,_XRBoundingBoxSubsystemDescriptor,_XRBoundingBoxSubsystem_Provider>_get_subsystem__
      ;
      break;
    case 3:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRObjectTrackingSubsystem,_XRObjectTrackingSubsystem_Provider>__ctor__
      ;
      break;
    case 4:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRSessionSubsystem,_XRSessionSubsystem_Provider>__ctor__
      ;
      break;
    case 5:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRHandSubsystem,_XRHandSubsystemProvider>__ctor__
      ;
      break;
    case 6:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)PTR_DAT_0678b7f0;
      break;
    case 7:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRParticipantSubsystem,_XRParticipantSubsystem_Provider>__ctor__
      ;
      break;
    case 8:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)PTR_DAT_06762af8;
      break;
    case 9:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRFaceSubsystem,_XRFaceSubsystem_Provider>__ctor__
      ;
      break;
    case 10:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRPlaneSubsystem,_XRPlaneSubsystem_Provider>__ctor__
      ;
      break;
    case 0xb:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRPointCloudSubsystem,_XRPointCloudSubsystem_Provider>__ctor__
      ;
      break;
    case 0xc:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)System_ComponentModel_CollectionChangeEventHandler_TypeInfo;
      break;
    case 0xd:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XREnvironmentProbeSubsystem,_XREnvironmentProbeSubsystem_Provider>__ctor__
      ;
      break;
    case 0xe:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XROcclusionSubsystem,_XROcclusionSubsystem_Provider>__ctor__
      ;
      break;
    case 0xf:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider>_get_subsystem__
      ;
      break;
    case 0x10:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRHandSubsystem,_XRHandSubsystemProvider>_Create__
      ;
      break;
    case 0x11:
      lVar2 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined8 *)
               Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRHumanBodySubsystem,_XRHumanBodySubsystem_Provider>__ctor__
      ;
      break;
    default:
      goto switchD_05de8458_default;
    }
    if (lVar2 != 0) {
      FUN_04e97bc4(lVar2,*puVar1,0);
switchD_05de8458_default:
      FUN_05de81d4(param_1,*(undefined8 *)(param_2 + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


