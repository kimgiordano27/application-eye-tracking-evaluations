/*
FUNCTION_NAME: OVRPlugin_GetSpaceBoundary2D_m49398EA700333B9DD471381A3CF0B4C03C67FAA1
ENTRY_POINT: 02dc5048
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

bool OVRPlugin_GetSpaceBoundary2D_m49398EA700333B9DD471381A3CF0B4C03C67FAA1
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uStack_fc;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  void *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  byte local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  bool local_21;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  local_50 = param_5;
  local_48 = param_4;
  local_40 = param_1;
  local_38 = param_2;
  uStack_30 = param_3;
  if ((OVRPlugin_GetSpaceBoundary2D_m49398EA700333B9DD471381A3CF0B4C03C67FAA1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_2D28E0C827135BA57297EC1D6D2FE798FCC03D22F2E7E7121E34F92B2F70A715
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetSpaceBoundary2D_m49398EA700333B9DD471381A3CF0B4C03C67FAA1::
    s_Il2CppMethodInitialized = 1;
  }
  local_60 = 0;
  lStack_58 = 0;
  local_70 = 0;
  lStack_68 = 0;
  local_78 = local_48;
  *local_48 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_80 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_88 = *puVar3;
  local_89 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(local_80,local_88,0);
  local_89 = local_89 & 1;
  if (local_89 == 0) {
    il2cpp_codegen_initobj(&local_70,0x10);
    local_90 = (undefined4)uStack_30;
    local_70 = CONCAT44(local_70._4_4_,(undefined4)uStack_30);
    uStack_b8 = uStack_30;
    local_c0 = local_38;
    local_a0 = local_c0;
    uStack_98 = uStack_b8;
    local_a8 = (void *)NativeArrayUnsafeUtility_GetUnsafePtr_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2B0D2CB30FDAA96454AA1E55D86254BBE984DA53
                                 (local_38,uStack_30,
                                  *(undefined8 *)
                                   Field_<PrivateImplementationDetails>_2D28E0C827135BA57297EC1D6D2FE798FCC03D22F2E7E7121E34F92B2F70A715
                                 );
    local_c8 = 0;
    IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline
              (&local_c8,local_a8,(MethodInfo *)0x0);
    lStack_68 = local_c8;
    lStack_58 = local_c8;
    local_60 = local_70;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar2 = OVRP_1_72_0_ovrp_GetSpaceBoundary2D_m5463E72B4B3CCA5901C621EEB49C64C68D8190E0
                      (&local_40,&local_60,0);
    uStack_fc = (undefined4)((ulong)local_60 >> 0x20);
    *local_48 = uStack_fc;
    local_21 = iVar2 == 0;
  }
  else {
    local_21 = false;
  }
  return local_21;
}


