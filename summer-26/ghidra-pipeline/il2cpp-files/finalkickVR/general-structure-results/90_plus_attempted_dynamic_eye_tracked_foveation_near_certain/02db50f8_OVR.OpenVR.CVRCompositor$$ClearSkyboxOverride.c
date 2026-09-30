/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$ClearSkyboxOverride
ENTRY_POINT: 02db50f8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 152
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_9;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool OVR_OpenVR_CVRCompositor__ClearSkyboxOverride(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack0000000000000008;
  ulong *puStack0000000000000010;
  byte bStack0000000000000026;
  byte bStack0000000000000027;
  int iStack000000000000003c;
  undefined8 uStack0000000000000040;
  
  puStack0000000000000008 =
       (undefined8 *)
       Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  puStack0000000000000010 =
       (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  uStack0000000000000040 = param_1;
  if ((OVRPlugin_get_eyeTrackedFoveatedRenderingEnabled_m2529D472675C5BB4923708C39FC6F0602B63F059::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__
              );
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000010);
    OVRPlugin_get_eyeTrackedFoveatedRenderingEnabled_m2529D472675C5BB4923708C39FC6F0602B63F059::
    s_Il2CppMethodInitialized = 1;
  }
  iStack000000000000003c = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  uVar1 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000008);
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar1,*puVar2,0);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    bStack0000000000000026 =
         OVRPlugin_get_eyeTrackedFoveatedRenderingSupported_mA1383C85B7A1E0C0995777E55769811E78646C27
                   (0);
    bStack0000000000000026 = bStack0000000000000026 & 1;
    if (bStack0000000000000026 != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
      OVRP_1_78_0_ovrp_GetFoveationEyeTracked_mD6D30156DB71F388B5E18BFE11C738512062A4A0
                (&stack0x0000003c,0);
      return iStack000000000000003c == 1;
    }
  }
  return false;
}


