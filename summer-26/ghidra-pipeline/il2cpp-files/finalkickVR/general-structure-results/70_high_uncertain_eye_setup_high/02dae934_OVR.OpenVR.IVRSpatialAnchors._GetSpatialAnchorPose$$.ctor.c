/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$.ctor
ENTRY_POINT: 02dae934
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose___ctor
               (undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000010;
  undefined4 uStack000000000000001c;
  
  uStack0000000000000010 = param_2;
  uStack000000000000001c = param_1;
  if ((OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B::
    s_Il2CppMethodInitialized = 1;
  }
  uStack000000000000000c = uStack000000000000001c;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
            );
  iVar1 = OVRP_1_1_0_ovrp_GetNodePositionTracked_m9FA9814BFF1D0FBB3A21C88222CDD0029F408381
                    (uStack000000000000000c,0);
  return iVar1 == 1;
}


