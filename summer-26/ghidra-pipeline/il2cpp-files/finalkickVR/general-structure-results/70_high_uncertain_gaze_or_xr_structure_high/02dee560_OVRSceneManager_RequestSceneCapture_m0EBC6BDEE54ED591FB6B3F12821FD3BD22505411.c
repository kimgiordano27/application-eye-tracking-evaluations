/*
FUNCTION_NAME: OVRSceneManager_RequestSceneCapture_m0EBC6BDEE54ED591FB6B3F12821FD3BD22505411
ENTRY_POINT: 02dee560
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_5
*/


byte OVRSceneManager_RequestSceneCapture_m0EBC6BDEE54ED591FB6B3F12821FD3BD22505411
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar2;
  
  if ((OVRSceneManager_RequestSceneCapture_m0EBC6BDEE54ED591FB6B3F12821FD3BD22505411::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRSceneManager_RequestSceneCapture_m0EBC6BDEE54ED591FB6B3F12821FD3BD22505411::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_RequestSceneCapture_mE8656FE903728534DD79F44A84EA3423AB330535
                    (param_2,param_1 + 0x78,0);
  if (((bVar1 & 1) == 0) &&
     (pAVar2 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(param_1 + 0x60),
     pAVar2 != (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)0x0)) {
    NullCheck(pAVar2);
    Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar2,(MethodInfo *)0x0);
  }
  return bVar1 & 1;
}


