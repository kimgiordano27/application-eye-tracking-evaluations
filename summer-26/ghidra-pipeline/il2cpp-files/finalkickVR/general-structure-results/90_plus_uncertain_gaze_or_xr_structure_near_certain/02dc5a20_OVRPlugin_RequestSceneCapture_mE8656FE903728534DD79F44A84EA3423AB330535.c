/*
FUNCTION_NAME: OVRPlugin_RequestSceneCapture_mE8656FE903728534DD79F44A84EA3423AB330535
ENTRY_POINT: 02dc5a20
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool OVRPlugin_RequestSceneCapture_mE8656FE903728534DD79F44A84EA3423AB330535
               (String_t *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  String_t *pSVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Il2CppObject *pIVar7;
  undefined4 local_64;
  undefined8 local_50;
  String_t *pSStack_48;
  undefined8 local_40;
  String_t *pSStack_38;
  undefined8 local_30;
  undefined8 *local_28;
  String_t *local_20;
  bool local_11;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  if ((OVRPlugin_RequestSceneCapture_mE8656FE903728534DD79F44A84EA3423AB330535::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_RequestSceneCapture_mE8656FE903728534DD79F44A84EA3423AB330535::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = 0;
  pSStack_38 = (String_t *)0x0;
  local_50 = 0;
  pSStack_48 = (String_t *)0x0;
  *local_28 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar5,*puVar6,0);
  if ((bVar3 & 1) == 0) {
    local_11 = false;
  }
  else {
    il2cpp_codegen_initobj(&local_50,0x10);
    if (local_20 == (String_t *)0x0) {
      local_64 = 0;
    }
    else {
      pIVar7 = (Il2CppObject *)Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(0);
      pSVar2 = local_20;
      NullCheck(pIVar7);
      local_64 = VirtualFuncInvoker1<int,String_t*>::Invoke(0xc,pIVar7,pSVar2);
    }
                    /* WARNING: Ignoring partial resolution of indirect */
    local_50._0_4_ = local_64;
    pSStack_48 = local_20;
    Il2CppCodeGenWriteBarrier(&pSStack_48,local_20);
    puVar6 = local_28;
    pSStack_38 = pSStack_48;
    local_40 = local_50;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar4 = OVRP_1_72_0_ovrp_RequestSceneCapture_m2ED0DC9C9919F8939632597DB5B751A70837ADF3
                      (&local_40,puVar6,0);
    local_11 = iVar4 == 0;
  }
  return local_11;
}


