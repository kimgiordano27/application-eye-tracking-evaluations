/*
FUNCTION_NAME: OVRPlugin_ShareSpaces_mCDFE2923EA4CB496BB2E90A33AC2A01093909717
ENTRY_POINT: 02dc37b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
OVRPlugin_ShareSpaces_mCDFE2923EA4CB496BB2E90A33AC2A01093909717
          (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 local_24;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_BD199D44CC5FFF41A1C37FD35241A5024EC5E6A11274C19A47669D388401995D
  ;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__;
  if ((OVRPlugin_ShareSpaces_mCDFE2923EA4CB496BB2E90A33AC2A01093909717::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_ShareSpaces_mCDFE2923EA4CB496BB2E90A33AC2A01093909717::s_Il2CppMethodInitialized = 1;
  }
  *param_5 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
  if ((bVar3 & 1) == 0) {
    local_24 = 0xfffffc14;
  }
  else {
    uVar4 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m44EAE568720002EAD1F4ECE1CBA62E756FB05AFA
                      (param_1,param_2,*(undefined8 *)puVar1);
    uVar6 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m44EAE568720002EAD1F4ECE1CBA62E756FB05AFA
                      (param_3,param_4,*(undefined8 *)puVar1);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_24 = OVRP_1_79_0_ovrp_ShareSpaces_m9381F10552AA9CEE44D1692F86B7CA2D32121A81
                         (uVar4,param_2 & 0xffffffff,uVar6,param_4 & 0xffffffff,param_5,0);
  }
  return local_24;
}


