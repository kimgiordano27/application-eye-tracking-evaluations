/*
FUNCTION_NAME: OVRPlugin_GetSpaceRoomLayout_m4FB8F9BB7CCE94674ED3B909C54CA2A629A19052
ENTRY_POINT: 02dc49c0
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

byte OVRPlugin_GetSpaceRoomLayout_m4FB8F9BB7CCE94674ED3B909C54CA2A629A19052
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  __11 *extraout_x1;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 *local_1c8;
  undefined1 auStack_1b0 [16];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 *local_180;
  int local_174;
  int local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_13c;
  undefined1 auStack_138 [36];
  undefined4 local_114;
  PinnedArray_1_t30E844761C6D7EC27673CBDABA882F50A557A5DB *local_108;
  FinallyHelper<OVRPlugin_GetSpaceRoomLayout_m4FB8F9BB7CCE94674ED3B909C54CA2A629A19052::__11,false>
  aFStack_100 [16];
  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 *local_f0;
  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 *local_e8;
  uint local_dc;
  undefined1 auStack_d8 [36];
  uint local_b4;
  int local_a8;
  byte local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  byte local_81;
  undefined8 local_80;
  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 *local_78;
  undefined1 auStack_70 [32];
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  byte local_21;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPlugin_GetSpaceRoomLayout_m4FB8F9BB7CCE94674ED3B909C54CA2A629A19052::
       s_Il2CppMethodInitialized & 1) == 0) {
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
    OVRPlugin_GetSpaceRoomLayout_m4FB8F9BB7CCE94674ED3B909C54CA2A629A19052::
    s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_70,0,0x30);
  local_78 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 *)0x0;
  local_80 = 0;
  local_81 = 0;
  local_90 = local_38;
  il2cpp_codegen_initobj(local_38,0x28);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_98 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_a0 = *puVar2;
  local_a1 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(local_98,local_a0,0);
  local_a1 = local_a1 & 1;
  if (local_a1 == 0) {
    il2cpp_codegen_initobj(auStack_70,0x30);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_a8 = OVRP_1_72_0_ovrp_GetSpaceRoomLayout_m74FFDB53E8E58A2292641A22FFF666F22C6D5F7B
                         (&local_30,auStack_70,0);
    if (local_a8 == 0) {
      memcpy(auStack_d8,auStack_70,0x30);
      local_dc = local_b4;
      local_f0 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 *)
                 SZArrayNew(*(Il2CppClass **)
                             Field_<PrivateImplementationDetails>_A289069AC6954131CBC38A5B4ECF88905206BF98E6803BD06F53D03301C44288
                            ,local_b4);
      local_e8 = local_f0;
      local_78 = local_f0;
      PinnedArray_1__ctor_mDE0B4909BBE40B508E34196FA78105B124DB3AF1
                ((PinnedArray_1_t30E844761C6D7EC27673CBDABA882F50A557A5DB *)&local_80,local_f0,
                 *(MethodInfo **)
                  Field_<PrivateImplementationDetails>_7F42C147A7E14B5AF67A2592CCB9C83162A39A449907AEFB26A786ECD17DC91C
                );
      local_108 = (PinnedArray_1_t30E844761C6D7EC27673CBDABA882F50A557A5DB *)&local_80;
      il2cpp::utils::
      Finally<OVRPlugin_GetSpaceRoomLayout_m4FB8F9BB7CCE94674ED3B909C54CA2A629A19052::__11>
                ((utils *)&local_108,extraout_x1);
      memcpy(auStack_138,auStack_70,0x30);
      local_13c = local_114;
      local_50 = local_114;
      local_148 = local_80;
      local_158 = local_80;
      local_150 = PinnedArray_1_op_Implicit_mDB5F1D5E8B4C2097A59FA5906E8865885D6591A7
                            (local_80,*(undefined8 *)
                                       Field_<PrivateImplementationDetails>_F70A79B130A13E8CF521F809C0C2AD844AD7A77A4FB65FEC75E63F2C8FD25A34
                            );
      local_48 = local_150;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_168 = OVRP_1_72_0_ovrp_GetSpaceRoomLayout_m74FFDB53E8E58A2292641A22FFF666F22C6D5F7B
                            (&local_30,auStack_70,0);
      if (local_168 == 0) {
        local_174 = 6;
      }
      else {
        local_81 = 0;
        local_174 = 5;
      }
      il2cpp::utils::
      FinallyHelper<OVRPlugin_GetSpaceRoomLayout_m4FB8F9BB7CCE94674ED3B909C54CA2A629A19052::$_11,false>
      ::~FinallyHelper(aFStack_100);
      if ((local_174 == 0) || (local_174 != 5)) {
        local_180 = local_38;
        memcpy(auStack_1b0,auStack_70,0x30);
        local_180[3] = uStack_198;
        local_180[2] = local_1a0;
        local_1c8 = local_38;
        memcpy(&local_1f8,auStack_70,0x30);
        local_1c8[1] = uStack_1f0;
        *local_1c8 = local_1f8;
        local_38[4] = local_78;
        Il2CppCodeGenWriteBarrier((void **)(local_38 + 4),local_78);
        local_21 = 1;
      }
      else {
        local_21 = local_81 & 1;
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


