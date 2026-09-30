/*
FUNCTION_NAME: OVRSpatialAnchor_EraseAsync_mFE8C548AD1D860CE8A1B1FFCD572E1A0769F33FD
ENTRY_POINT: 02e058a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined1  [16]
OVRSpatialAnchor_EraseAsync_mFE8C548AD1D860CE8A1B1FFCD572E1A0769F33FD
          (OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874 *param_1,undefined4 param_2,
          undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  ulong local_40;
  undefined8 local_38;
  OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874 *local_30;
  undefined4 local_24;
  
  local_38 = param_3;
  local_30 = param_1;
  local_24 = param_2;
  if ((OVRSpatialAnchor_EraseAsync_mFE8C548AD1D860CE8A1B1FFCD572E1A0769F33FD::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Virtence_VText_Demo_SunController_<ChangeColor>d__9_System_Collections_IEnumerator_Reset__
              );
    OVRSpatialAnchor_EraseAsync_mFE8C548AD1D860CE8A1B1FFCD572E1A0769F33FD::s_Il2CppMethodInitialized
         = 1;
  }
  local_40 = 0;
  uVar3 = OVRSpatialAnchor_get_Space_mBBDFEC73986C0C5944BDCCF6908FB983C28629BC_inline
                    (local_30,(MethodInfo *)0x0);
  uVar3 = OVRSpace_op_Implicit_m1F9D1045BC491FB6F551F3F2317DC526B2574AE0(uVar3,0);
  uVar2 = OVRExtensions_ToSpaceStorageLocation_mFF7C8770305D5CFCCB62FB78319A81CEFFF6926C(local_24,0)
  ;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_EraseSpace_m6EA51C5FD8165982A9A8C4404EEEF61C0FCF1D52(uVar3,uVar2,&local_40,0);
  if ((bVar1 & 1) == 0) {
    auVar4 = OVRTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA8BCDD3EF6E2CAB6F5DDEB087F558B23A216FF81
                       (false,*(MethodInfo **)
                               Method_Virtence_VText_Demo_SunController_<ChangeColor>d__9_System_Collections_IEnumerator_Reset__
                       );
  }
  else {
    auVar4 = OVRTask_FromRequest_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE08CE38277CFE673A66D22E4B21F3CCCB0BAE660
                       (local_40,*(MethodInfo **)
                                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                       );
  }
  return auVar4;
}


