/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 02d7e06c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Invoke
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  Action_4_t540B344FD589096100128D9A1B39946413ED9AAE *pAVar4;
  Action_4_t540B344FD589096100128D9A1B39946413ED9AAE *pAVar5;
  long unaff_x29;
  ulong *in_stack_00000000;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  if ((OVRManager_remove_SpatialAnchorCreateComplete_m62EC453F5F0A2BB2AFF0BD577E68F5281EEAF7A7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_<>c_<_cctor>b__285_0__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000000);
    OVRManager_remove_SpatialAnchorCreateComplete_m62EC453F5F0A2BB2AFF0BD577E68F5281EEAF7A7::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000000);
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
  do {
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x18);
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x38);
    pIVar2 = (Il2CppObject *)
             Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3
                       (*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -8),0);
    uVar3 = Castclass(pIVar2,*(Il2CppClass **)
                              Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_<>c_<_cctor>b__285_0__
                     );
    *(undefined8 *)(unaff_x29 + -0x28) = uVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
    pAVar4 = *(Action_4_t540B344FD589096100128D9A1B39946413ED9AAE **)(unaff_x29 + -0x28);
    pAVar5 = *(Action_4_t540B344FD589096100128D9A1B39946413ED9AAE **)(unaff_x29 + -0x20);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000000);
    pAVar4 = InterlockedCompareExchangeImpl<Action_4_t540B344FD589096100128D9A1B39946413ED9AAE*>
                       ((Action_4_t540B344FD589096100128D9A1B39946413ED9AAE **)(lVar1 + 0x98),pAVar4
                        ,pAVar5);
    *(Action_4_t540B344FD589096100128D9A1B39946413ED9AAE **)(unaff_x29 + -0x18) = pAVar4;
  } while (*(long *)(unaff_x29 + -0x18) != *(long *)(unaff_x29 + -0x20));
  return;
}


