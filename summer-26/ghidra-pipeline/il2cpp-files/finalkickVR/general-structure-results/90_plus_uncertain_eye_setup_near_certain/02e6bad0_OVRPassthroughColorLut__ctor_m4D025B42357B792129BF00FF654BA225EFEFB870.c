/*
FUNCTION_NAME: OVRPassthroughColorLut__ctor_m4D025B42357B792129BF00FF654BA225EFEFB870
ENTRY_POINT: 02e6bad0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRPassthroughColorLut__ctor_m4D025B42357B792129BF00FF654BA225EFEFB870
               (OVRPassthroughColorLut_t07983131AFE85C69A0842F16D5EF8DD9D132F80F *param_1,
               undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  Il2CppClass *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Exception_t *pEVar6;
  MethodInfo *pMVar7;
  undefined4 local_e0;
  undefined4 local_dc;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_bc;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *local_b8;
  uint local_ac;
  Exception_t *local_a8;
  int local_9c;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *local_98;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *local_90;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *local_88;
  Exception_t *local_80;
  undefined8 local_78;
  byte local_6d;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  void *local_50;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  undefined4 local_2c;
  OVRPassthroughColorLut_t07983131AFE85C69A0842F16D5EF8DD9D132F80F *local_28;
  
  puVar2 = StringLiteral_1004;
  local_38 = param_4;
  local_30 = param_3;
  local_2c = param_2;
  local_28 = param_1;
  if ((OVRPassthroughColorLut__ctor_m4D025B42357B792129BF00FF654BA225EFEFB870::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<Rigidbody,_bool>_ContainsKey__)
    ;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_1005);
    OVRPassthroughColorLut__ctor_m4D025B42357B792129BF00FF654BA225EFEFB870::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = 0;
  local_48 = (PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *)0x0;
  local_50 = (void *)il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_System_Collections_Generic_Dictionary<Rigidbody,_bool>_ContainsKey__
                               );
  Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(local_50,0);
  *(void **)(local_28 + 0x48) = local_50;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x48),local_50);
  Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(local_28,0);
  local_54 = local_30;
  OVRPassthroughColorLut_set_Channels_mA1DA457EB45A4958AA7A20607F2240675FFCA5DC_inline
            (local_28,local_30,(MethodInfo *)0x0);
  local_58 = local_2c;
  local_5c = OVRPassthroughColorLut_GetResolutionFromSize_mC7313F0C86DF5F0B82BB4FE75709DECF15215B31
                       (local_2c,0);
  OVRPassthroughColorLut_set_Resolution_m507ADB3A4B36B6C9A3E6CA95B84EE2512258BC3B_inline
            (local_28,local_5c,(MethodInfo *)0x0);
  local_60 = local_30;
  local_64 = OVRPassthroughColorLut_ChannelsToCount_m741B5F810705D5C34CB627927492CD90E8EB47EE
                       (local_30,0);
  *(undefined4 *)(local_28 + 0x38) = local_64;
  local_68 = OVRPassthroughColorLut_get_Resolution_mA472B9A1B370037D7FC2D44C78EEA431FD3DCAC1_inline
                       (local_28,(MethodInfo *)0x0);
  local_6c = local_2c;
  local_6d = OVRPassthroughColorLut_IsResolutionAccepted_m729D857E3A4FEF00C5090703F9C117D63EC902EB
                       (local_68,local_2c,&local_40,0);
  local_6d = local_6d & 1;
  if (local_6d == 0) {
    local_78 = local_40;
    pIVar3 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                       );
    local_80 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
    ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(local_80,local_78,0);
    pEVar6 = local_80;
    pMVar7 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar6,pMVar7);
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  local_98 = (PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *)
             OVRManager_GetPassthroughCapabilities_m843A43C3748FF0EA151020DFEA978B85B11D645B(0);
  local_90 = local_98;
  local_88 = local_98;
  local_48 = local_98;
  if (local_98 == (PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *)0x0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(*(undefined8 *)StringLiteral_1005,0);
  }
  else {
    NullCheck(local_98);
    local_9c = PassthroughCapabilities_get_MaxColorLutResolution_m16E57231943F3952DE08DF9AC6E9C46B7DE7B25A_inline
                         (local_98,(MethodInfo *)0x0);
    if (local_9c == 0) {
      pIVar3 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<int,_Item>_ContainsKey__);
      pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
      local_a8 = pEVar6;
      uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_1006);
      Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(pEVar6,uVar4,0);
      pEVar6 = local_a8;
      pMVar7 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar6,pMVar7);
    }
    local_ac = OVRPassthroughColorLut_get_Resolution_mA472B9A1B370037D7FC2D44C78EEA431FD3DCAC1_inline
                         (local_28,(MethodInfo *)0x0);
    local_b8 = local_48;
    NullCheck(local_48);
    local_bc = PassthroughCapabilities_get_MaxColorLutResolution_m16E57231943F3952DE08DF9AC6E9C46B7DE7B25A_inline
                         (local_b8,(MethodInfo *)0x0);
    if (local_bc < local_ac) {
      local_c4 = OVRPassthroughColorLut_get_Resolution_mA472B9A1B370037D7FC2D44C78EEA431FD3DCAC1_inline
                           (local_28,(MethodInfo *)0x0);
      puVar1 = 
      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_ContainsKey__;
      local_c0 = local_c4;
      pIVar3 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_ContainsKey__
                         );
      local_d0 = Box(pIVar3,&local_c4);
      local_d8 = local_48;
      NullCheck(local_48);
      local_e0 = PassthroughCapabilities_get_MaxColorLutResolution_m16E57231943F3952DE08DF9AC6E9C46B7DE7B25A_inline
                           (local_d8,(MethodInfo *)0x0);
      local_dc = local_e0;
      pIVar3 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
      uVar4 = Box(pIVar3,&local_e0);
      uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_1007);
      uVar4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(uVar5,local_d0,uVar4,0);
      pIVar3 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<int,_Item>_ContainsKey__);
      pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
      Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(pEVar6,uVar4,0);
      pMVar7 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar6,pMVar7);
    }
  }
  return;
}


