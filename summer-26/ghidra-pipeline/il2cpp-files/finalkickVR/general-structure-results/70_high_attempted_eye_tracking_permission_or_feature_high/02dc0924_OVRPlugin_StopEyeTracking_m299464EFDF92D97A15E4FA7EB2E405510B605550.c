/*
FUNCTION_NAME: OVRPlugin_StopEyeTracking_m299464EFDF92D97A15E4FA7EB2E405510B605550
ENTRY_POINT: 02dc0924
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


bool OVRPlugin_StopEyeTracking_m299464EFDF92D97A15E4FA7EB2E405510B605550(void)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool local_11;
  
  puVar1 = Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  if ((OVRPlugin_StopEyeTracking_m299464EFDF92D97A15E4FA7EB2E405510B605550::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_StopEyeTracking_m299464EFDF92D97A15E4FA7EB2E405510B605550::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
  if ((bVar2 & 1) == 0) {
    local_11 = false;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_78_0_ovrp_StopEyeTracking_mC89AE89B746636D71FC51B58F933FE5DB9525711(0);
    local_11 = iVar3 == 0;
  }
  return local_11;
}


