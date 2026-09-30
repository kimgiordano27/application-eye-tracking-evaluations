/*
FUNCTION_NAME: OVRSceneManager_OVRManager_SceneCaptureComplete_m5DA341AE4D950DB9FE0496B9AEFC30090522D5F5
ENTRY_POINT: 02df1650
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRSceneManager_OVRManager_SceneCaptureComplete_m5DA341AE4D950DB9FE0496B9AEFC30090522D5F5
               (long param_1,long param_2,byte param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long local_a8;
  long local_a0;
  undefined1 local_93;
  undefined1 local_92;
  byte local_91;
  Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *local_90;
  undefined8 local_88;
  undefined2 local_7c;
  undefined2 local_7a;
  long local_78;
  long local_70;
  undefined8 local_68;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *local_60;
  undefined8 local_58;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *local_50;
  undefined8 local_48;
  Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *local_40;
  undefined1 local_33;
  undefined2 local_32;
  undefined8 local_30;
  byte local_21;
  long local_20;
  long local_18;
  
  local_21 = param_3 & 1;
  local_30 = param_4;
  local_20 = param_2;
  local_18 = param_1;
  if ((OVRSceneManager_OVRManager_SceneCaptureComplete_m5DA341AE4D950DB9FE0496B9AEFC30090522D5F5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_E1DC3A1EA16CD5E9DBD0F81E8F7AE4BBB4DF3BCFEF388DE056B3EE11868EE846
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_48FA2B2FD7A202D3952D07F8ED3C23196F51A91F4130D0C23DA616CFFF547D2C
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_TryGetValue__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_508085E0DDEEA9CE48BFAE98CEC779F8D06301AE973555D37680D08190CAFA70
              );
    OVRSceneManager_OVRManager_SceneCaptureComplete_m5DA341AE4D950DB9FE0496B9AEFC30090522D5F5::
    s_Il2CppMethodInitialized = 1;
  }
  local_32 = 0;
  local_33 = 0;
  local_40 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)0x0;
  local_48 = 0;
  local_50 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)0x0;
  local_58 = 0;
  local_60 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)0x0;
  local_68 = 0;
  local_70 = local_20;
  local_78 = *(long *)(local_18 + 0x78);
  if (local_20 - local_78 == 0) {
    if ((local_21 & 1) == 0) {
      local_60 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(local_18 + 0x60);
      if (local_60 != (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)0x0) {
        NullCheck(local_60);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(local_60,(MethodInfo *)0x0);
      }
    }
    else {
      local_50 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(local_18 + 0x58);
      if (local_50 != (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)0x0) {
        NullCheck(local_50);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(local_50,(MethodInfo *)0x0);
      }
    }
  }
  else {
    local_88 = OVRSceneManager_get_Verbose_m7F89EAFB7FBB9989CFC1ACC5A6EF2789917B170E
                         (local_20 - local_78,local_18,0);
    local_7c = (undefined2)local_88;
    local_7a = (undefined2)local_88;
    local_90 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_32;
    local_32 = (undefined2)local_88;
    local_91 = Nullable_1_get_HasValue_m708832CEE7BFE56B811529C190A1BAEB80E6EAA3_inline
                         (local_90,*(MethodInfo **)
                                    Field_<PrivateImplementationDetails>_48FA2B2FD7A202D3952D07F8ED3C23196F51A91F4130D0C23DA616CFFF547D2C
                         );
    local_91 = local_91 & 1;
    if (local_91 != 0) {
      local_40 = local_90;
      local_93 = Nullable_1_GetValueOrDefault_m9A9401B9AE0B1623F091FB8B68F2620261999226_inline
                           (local_90,*(MethodInfo **)
                                      Field_<PrivateImplementationDetails>_E1DC3A1EA16CD5E9DBD0F81E8F7AE4BBB4DF3BCFEF388DE056B3EE11868EE846
                           );
      local_a0 = local_20;
      local_a8 = local_20;
      local_92 = local_93;
      local_33 = local_93;
      uVar1 = Box(*(Il2CppClass **)
                   Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_TryGetValue__
                  ,&local_a8);
      uVar1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                        (*(undefined8 *)
                          Field_<PrivateImplementationDetails>_508085E0DDEEA9CE48BFAE98CEC779F8D06301AE973555D37680D08190CAFA70
                         ,uVar1);
      LogForwarder_LogWarning_mA2D3E15055184DC0D55BDFD375ADBC0852F753B2
                (&local_33,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D
                 ,uVar1,0);
    }
  }
  return;
}


