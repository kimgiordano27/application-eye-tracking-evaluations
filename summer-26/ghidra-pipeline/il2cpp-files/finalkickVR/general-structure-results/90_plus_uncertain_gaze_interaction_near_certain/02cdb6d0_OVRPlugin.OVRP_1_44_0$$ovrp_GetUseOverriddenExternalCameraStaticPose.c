/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 02cdb6d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;functionality_gaze_interaction_hits_3
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraStaticPose(void)

{
  undefined4 in_w4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x29;
  ulong *in_stack_00000008;
  void *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000038;
  
  *(undefined4 *)(unaff_x29 + -0x20) = in_w4;
  *(undefined8 *)(unaff_x29 + -0x28) = in_x5;
  *(undefined8 *)(unaff_x29 + -0x30) = in_x6;
  uStack0000000000000038 = in_x7;
  if ((FilterCallback_BeginInvoke_mA8A3D5D1EE946BB4D7732130750CA5066E249F66::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000008);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_GetPooled__
              );
    FilterCallback_BeginInvoke_mA8A3D5D1EE946BB4D7732130750CA5066E249F66::s_Il2CppMethodInitialized
         = 1;
  }
  memset(&stack0x00000010,0,0x28);
  in_stack_00000010 = *(void **)(unaff_x29 + -0x10);
  in_stack_00000018 =
       Box(*(Il2CppClass **)
            Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_GetPooled__,
           (void *)(unaff_x29 + -0x18));
  in_stack_00000020 = Box((Il2CppClass *)*in_stack_00000008,(void *)(unaff_x29 + -0x1c));
  in_stack_00000028 = Box((Il2CppClass *)*in_stack_00000008,(void *)(unaff_x29 + -0x20));
  il2cpp_codegen_delegate_begin_invoke
            (*(Il2CppDelegate **)(unaff_x29 + -8),&stack0x00000010,
             *(Il2CppDelegate **)(unaff_x29 + -0x28),*(Il2CppObject **)(unaff_x29 + -0x30));
  return;
}


