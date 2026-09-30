/*
FUNCTION_NAME: OVRPlugin_GetSpaceSemanticLabels_m95748D37CAEFD3C3CE74EA0A47864C9215B3E394
ENTRY_POINT: 02dc46dc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool OVRPlugin_GetSpaceSemanticLabels_m95748D37CAEFD3C3CE74EA0A47864C9215B3E394
               (undefined8 param_1,void **param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  void **ppvVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined4 uStack_bc;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  void **local_38;
  undefined8 local_30;
  bool local_21;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPlugin_GetSpaceSemanticLabels_m95748D37CAEFD3C3CE74EA0A47864C9215B3E394::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_GetSpaceSemanticLabels_m95748D37CAEFD3C3CE74EA0A47864C9215B3E394::
    s_Il2CppMethodInitialized = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_54 = 0;
  local_68 = 0;
  uStack_60 = 0;
  *local_38 = *(void **)puVar1;
  Il2CppCodeGenWriteBarrier(local_38,*(void **)puVar1);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar5,*puVar6,0);
  if ((bVar4 & 1) == 0) {
    local_21 = false;
  }
  else {
    il2cpp_codegen_initobj(&local_68,0x10);
    local_68 = 0;
    uStack_48 = uStack_60;
    local_50 = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_54 = OVRP_1_72_0_ovrp_GetSpaceSemanticLabels_mE29D05D839399565035B36B6682D79DCECA1EA5C
                         (&local_30,&local_50,0);
    if (local_54 == 0) {
      uStack_bc = (undefined4)((ulong)local_50 >> 0x20);
      local_50._0_4_ = uStack_bc;
      local_50._4_4_ = uStack_bc;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__
                );
      uStack_48 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(uStack_bc);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_54 = OVRP_1_72_0_ovrp_GetSpaceSemanticLabels_mE29D05D839399565035B36B6682D79DCECA1EA5C
                           (&local_30,&local_50,0);
      ppvVar3 = local_38;
      pvVar7 = (void *)Marshal_PtrToStringAnsi_mDCD72FE33CAE42EBB32334D7CC555E97667864D3
                                 (uStack_48,local_50._4_4_,0);
      *ppvVar3 = pvVar7;
      Il2CppCodeGenWriteBarrier(ppvVar3,pvVar7);
      Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(uStack_48,0);
    }
    local_21 = local_54 == 0;
  }
  return local_21;
}


