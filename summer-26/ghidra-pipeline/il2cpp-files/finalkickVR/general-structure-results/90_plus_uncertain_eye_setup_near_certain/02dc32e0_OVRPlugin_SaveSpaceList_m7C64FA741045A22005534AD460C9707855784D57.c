/*
FUNCTION_NAME: OVRPlugin_SaveSpaceList_m7C64FA741045A22005534AD460C9707855784D57
ENTRY_POINT: 02dc32e0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined4
OVRPlugin_SaveSpaceList_m7C64FA741045A22005534AD460C9707855784D57
          (undefined8 param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_14;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_BD199D44CC5FFF41A1C37FD35241A5024EC5E6A11274C19A47669D388401995D
  ;
  if ((OVRPlugin_SaveSpaceList_m7C64FA741045A22005534AD460C9707855784D57::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_SaveSpaceList_m7C64FA741045A22005534AD460C9707855784D57::s_Il2CppMethodInitialized = 1
    ;
  }
  *param_4 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar3,*puVar4,0);
  if ((bVar2 & 1) == 0) {
    local_14 = 0xfffffc14;
  }
  else {
    uVar3 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m44EAE568720002EAD1F4ECE1CBA62E756FB05AFA
                      (param_1,param_2,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                      );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_14 = OVRP_1_79_0_ovrp_SaveSpaceList_m01BD1E81BA062C07D51A746F641CA10BA7029CF8
                         (uVar3,param_2 & 0xffffffff,param_3,param_4,0);
  }
  return local_14;
}


