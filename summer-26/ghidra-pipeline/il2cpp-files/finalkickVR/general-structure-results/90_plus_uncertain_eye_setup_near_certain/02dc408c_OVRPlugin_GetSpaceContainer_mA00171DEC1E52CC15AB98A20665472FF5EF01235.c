/*
FUNCTION_NAME: OVRPlugin_GetSpaceContainer_mA00171DEC1E52CC15AB98A20665472FF5EF01235
ENTRY_POINT: 02dc408c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVRPlugin_GetSpaceContainer_mA00171DEC1E52CC15AB98A20665472FF5EF01235
               (undefined8 param_1,void **param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  __10 *extraout_x1;
  int local_11c;
  undefined4 uStack_dc;
  PinnedArray_1_t30E844761C6D7EC27673CBDABA882F50A557A5DB *local_d0;
  FinallyHelper<OVRPlugin_GetSpaceContainer_mA00171DEC1E52CC15AB98A20665472FF5EF01235::__10,false>
  aFStack_c8 [16];
  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 *local_b8;
  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 *local_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90;
  byte local_89;
  undefined8 local_88;
  undefined8 local_80;
  void *local_78;
  void **local_70;
  byte local_61;
  undefined8 local_60;
  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  void **local_38;
  undefined8 local_30;
  byte local_21;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPlugin_GetSpaceContainer_mA00171DEC1E52CC15AB98A20665472FF5EF01235::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_AD841F11537FB7FD10FAF049949ECE10DC7D128D90233130D638725321F41CB7
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_A289069AC6954131CBC38A5B4ECF88905206BF98E6803BD06F53D03301C44288
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_EE981DF6E60B27F738EF16A04AC64A752C8AC1A0F867E2F7A008EE875E6775F7
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_7F42C147A7E14B5AF67A2592CCB9C83162A39A449907AEFB26A786ECD17DC91C
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_F70A79B130A13E8CF521F809C0C2AD844AD7A77A4FB65FEC75E63F2C8FD25A34
              );
    OVRPlugin_GetSpaceContainer_mA00171DEC1E52CC15AB98A20665472FF5EF01235::s_Il2CppMethodInitialized
         = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 *)0x0;
  local_60 = 0;
  local_61 = 0;
  local_70 = local_38;
  local_78 = (void *)Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_inline
                               (*(MethodInfo **)
                                 Field_<PrivateImplementationDetails>_AD841F11537FB7FD10FAF049949ECE10DC7D128D90233130D638725321F41CB7
                               );
  *local_70 = local_78;
  Il2CppCodeGenWriteBarrier(local_70,local_78);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_80 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_88 = *puVar5;
  local_89 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(local_80,local_88,0);
  local_89 = local_89 & 1;
  if (local_89 == 0) {
    il2cpp_codegen_initobj(&local_50,0x10);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_90 = OVRP_1_72_0_ovrp_GetSpaceContainer_mE8AE8756D6DACE54507C0C23F06C0CC93FEF3D03
                         (&local_30,&local_50,0);
    if (local_90 == 0) {
      uStack_98 = uStack_48;
      local_a0 = local_50;
      uVar2 = local_a0;
      local_a0._4_4_ = (uint)((ulong)local_50 >> 0x20);
      uVar3 = local_a0._4_4_;
      local_a4 = local_a0._4_4_;
      local_a0 = uVar2;
      local_b8 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 *)
                 SZArrayNew(*(Il2CppClass **)
                             Field_<PrivateImplementationDetails>_A289069AC6954131CBC38A5B4ECF88905206BF98E6803BD06F53D03301C44288
                            ,uVar3);
      local_b0 = local_b8;
      local_58 = local_b8;
      PinnedArray_1__ctor_mDE0B4909BBE40B508E34196FA78105B124DB3AF1
                ((PinnedArray_1_t30E844761C6D7EC27673CBDABA882F50A557A5DB *)&local_60,local_b8,
                 *(MethodInfo **)
                  Field_<PrivateImplementationDetails>_7F42C147A7E14B5AF67A2592CCB9C83162A39A449907AEFB26A786ECD17DC91C
                );
      local_d0 = (PinnedArray_1_t30E844761C6D7EC27673CBDABA882F50A557A5DB *)&local_60;
      il2cpp::utils::
      Finally<OVRPlugin_GetSpaceContainer_mA00171DEC1E52CC15AB98A20665472FF5EF01235::__10>
                ((utils *)&local_d0,extraout_x1);
      uStack_dc = (undefined4)((ulong)local_50 >> 0x20);
      local_50 = CONCAT44(uStack_dc,uStack_dc);
      uStack_48 = PinnedArray_1_op_Implicit_mDB5F1D5E8B4C2097A59FA5906E8865885D6591A7
                            (local_60,*(undefined8 *)
                                       Field_<PrivateImplementationDetails>_F70A79B130A13E8CF521F809C0C2AD844AD7A77A4FB65FEC75E63F2C8FD25A34
                            );
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      iVar4 = OVRP_1_72_0_ovrp_GetSpaceContainer_mE8AE8756D6DACE54507C0C23F06C0CC93FEF3D03
                        (&local_30,&local_50,0);
      if (iVar4 == 0) {
        local_11c = 6;
      }
      else {
        local_61 = 0;
        local_11c = 5;
      }
      il2cpp::utils::
      FinallyHelper<OVRPlugin_GetSpaceContainer_mA00171DEC1E52CC15AB98A20665472FF5EF01235::$_10,false>
      ::~FinallyHelper(aFStack_c8);
      if ((local_11c == 0) || (local_11c != 5)) {
        *local_38 = local_58;
        Il2CppCodeGenWriteBarrier(local_38,local_58);
        local_21 = 1;
      }
      else {
        local_21 = local_61 & 1;
      }
    }
    else {
      local_21 = 0;
    }
  }
  else {
    local_21 = 0;
  }
  return local_21;
}


