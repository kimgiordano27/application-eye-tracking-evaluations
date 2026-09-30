/*
FUNCTION_NAME: OVRPlugin_GetSpaceBoundary2D_m50018E87B3D0D57D1F5DF9364FDAC91D8FD6C52C
ENTRY_POINT: 02dc54f8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool OVRPlugin_GetSpaceBoundary2D_m50018E87B3D0D57D1F5DF9364FDAC91D8FD6C52C
               (undefined8 param_1,void **param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  void **ppvVar5;
  byte bVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  uint uStack_14c;
  int iStack_dc;
  long local_88;
  int local_7c;
  long local_78;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_54;
  undefined8 local_50;
  long lStack_48;
  undefined8 local_40;
  void **local_38;
  undefined8 local_30;
  bool local_21;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPlugin_GetSpaceBoundary2D_m50018E87B3D0D57D1F5DF9364FDAC91D8FD6C52C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_B81E2B4A1FF9647B63CC8286AAE940E40A81E7F945DCD752C23390137CA9249C
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Nullable<sbyte>__ctor__);
    OVRPlugin_GetSpaceBoundary2D_m50018E87B3D0D57D1F5DF9364FDAC91D8FD6C52C::
    s_Il2CppMethodInitialized = 1;
  }
  ppvVar5 = local_38;
  local_50 = 0;
  lStack_48 = 0;
  local_54 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_6c = 0;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  pvVar7 = (void *)Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_inline
                             (*(MethodInfo **)
                               Field_<PrivateImplementationDetails>_B81E2B4A1FF9647B63CC8286AAE940E40A81E7F945DCD752C23390137CA9249C
                             );
  *ppvVar5 = pvVar7;
  Il2CppCodeGenWriteBarrier(ppvVar5,pvVar7);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar8 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar9 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar6 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar8,*puVar9,0);
  if ((bVar6 & 1) == 0) {
    local_21 = false;
  }
  else {
    il2cpp_codegen_initobj(&local_68,0x10);
    local_68 = 0;
    lStack_48 = uStack_60;
    local_50 = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_54 = OVRP_1_72_0_ovrp_GetSpaceBoundary2D_m5463E72B4B3CCA5901C621EEB49C64C68D8190E0
                         (&local_30,&local_50,0);
    if (local_54 == 0) {
      iStack_dc = (int)((ulong)local_50 >> 0x20);
      local_50._0_4_ = iStack_dc;
      local_50._4_4_ = iStack_dc;
      uVar8 = *(undefined8 *)Method_System_Nullable<sbyte>__ctor__;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
      uVar8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar8);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_6c = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(uVar8,0);
      uVar8 = il2cpp_codegen_multiply<int,int>(local_50._4_4_,local_6c);
      lStack_48 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(uVar8,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_54 = OVRP_1_72_0_ovrp_GetSpaceBoundary2D_m5463E72B4B3CCA5901C621EEB49C64C68D8190E0
                           (&local_30,&local_50,0);
      ppvVar5 = local_38;
      if (local_54 == 0) {
        pvVar7 = (void *)SZArrayNew(*(Il2CppClass **)
                                     Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__
                                    ,uStack_14c);
        *ppvVar5 = pvVar7;
        Il2CppCodeGenWriteBarrier(ppvVar5,pvVar7);
        local_78 = lStack_48;
        for (local_7c = 0; lVar3 = lStack_48, local_7c < local_50._4_4_;
            local_7c = il2cpp_codegen_add<int,int>(local_7c,1)) {
          IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7(&local_88,local_6c);
          local_88 = local_78;
          local_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A
                               (local_78,local_6c,0);
          iVar4 = local_7c;
          lVar3 = local_88;
          pvVar7 = *local_38;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          uVar10 = Marshal_PtrToStructure_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBBD5DF1ABFDF69FBDF7D83D7D7EAEA2D87758D07
                             (lVar3,*(MethodInfo **)
                                     Field_<PrivateImplementationDetails>_001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2
                             );
          NullCheck(pvVar7);
          Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA::SetAt(uVar10,pvVar7,(long)iVar4);
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(lVar3,0);
      }
    }
    local_21 = local_54 == 0;
  }
  return local_21;
}


