/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.AddOvfInstruction.AddOvfInt16$$Run
ENTRY_POINT: 02e6badc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 152
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_11;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_11
*/


void System_Linq_Expressions_Interpreter_AddOvfInstruction_AddOvfInt16__Run
               (OVRPassthroughColorLut_t07983131AFE85C69A0842F16D5EF8DD9D132F80F *param_1,
               undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  Il2CppClass *pIVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Exception_t *pEVar5;
  MethodInfo *pMVar6;
  ulong *puStack0000000000000060;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 uStack000000000000009c;
  undefined4 in_stack_000000a0;
  uint uStack00000000000000a4;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *in_stack_000000a8;
  uint uStack00000000000000b4;
  Exception_t *in_stack_000000b8;
  int iStack00000000000000c4;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *in_stack_000000c8;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *in_stack_000000d0;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *in_stack_000000d8;
  Exception_t *in_stack_000000e0;
  undefined8 in_stack_000000e8;
  byte bStack00000000000000f3;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  int in_stack_00000100;
  uint uStack0000000000000104;
  undefined4 in_stack_00000108;
  int iStack000000000000010c;
  void *in_stack_00000110;
  PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 uStack0000000000000128;
  int iStack0000000000000130;
  undefined4 uStack0000000000000134;
  OVRPassthroughColorLut_t07983131AFE85C69A0842F16D5EF8DD9D132F80F *pOStack0000000000000138;
  
  puStack0000000000000060 = (ulong *)StringLiteral_1004;
  uStack0000000000000128 = param_4;
  iStack0000000000000130 = param_3;
  uStack0000000000000134 = param_2;
  pOStack0000000000000138 = param_1;
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
  in_stack_00000120 = 0;
  in_stack_00000118 = (PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *)0x0;
  in_stack_00000110 =
       (void *)il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_System_Collections_Generic_Dictionary<Rigidbody,_bool>_ContainsKey__
                         );
  Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(in_stack_00000110,0);
  *(void **)(pOStack0000000000000138 + 0x48) = in_stack_00000110;
  Il2CppCodeGenWriteBarrier((void **)(pOStack0000000000000138 + 0x48),in_stack_00000110);
  Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(pOStack0000000000000138,0);
  iStack000000000000010c = iStack0000000000000130;
  OVRPassthroughColorLut_set_Channels_mA1DA457EB45A4958AA7A20607F2240675FFCA5DC_inline
            (pOStack0000000000000138,iStack0000000000000130,(MethodInfo *)0x0);
  in_stack_00000108 = uStack0000000000000134;
  uStack0000000000000104 =
       OVRPassthroughColorLut_GetResolutionFromSize_mC7313F0C86DF5F0B82BB4FE75709DECF15215B31
                 (uStack0000000000000134,0);
  OVRPassthroughColorLut_set_Resolution_m507ADB3A4B36B6C9A3E6CA95B84EE2512258BC3B_inline
            (pOStack0000000000000138,uStack0000000000000104,(MethodInfo *)0x0);
  in_stack_00000100 = iStack0000000000000130;
  uStack00000000000000fc =
       OVRPassthroughColorLut_ChannelsToCount_m741B5F810705D5C34CB627927492CD90E8EB47EE
                 (iStack0000000000000130,0);
  *(undefined4 *)(pOStack0000000000000138 + 0x38) = uStack00000000000000fc;
  in_stack_000000f8 =
       OVRPassthroughColorLut_get_Resolution_mA472B9A1B370037D7FC2D44C78EEA431FD3DCAC1_inline
                 (pOStack0000000000000138,(MethodInfo *)0x0);
  uStack00000000000000f4 = uStack0000000000000134;
  bStack00000000000000f3 =
       OVRPassthroughColorLut_IsResolutionAccepted_m729D857E3A4FEF00C5090703F9C117D63EC902EB
                 (in_stack_000000f8,uStack0000000000000134,&stack0x00000120,0);
  bStack00000000000000f3 = bStack00000000000000f3 & 1;
  if (bStack00000000000000f3 == 0) {
    in_stack_000000e8 = in_stack_00000120;
    pIVar2 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                       );
    in_stack_000000e0 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
    ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465
              (in_stack_000000e0,in_stack_000000e8,0);
    pEVar5 = in_stack_000000e0;
    pMVar6 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000060);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  in_stack_000000d0 =
       (PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *)
       OVRManager_GetPassthroughCapabilities_m843A43C3748FF0EA151020DFEA978B85B11D645B(0);
  in_stack_000000d8 = in_stack_000000d0;
  in_stack_00000118 = in_stack_000000d0;
  if (in_stack_000000d0 == (PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F *)0x0)
  {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(*(undefined8 *)StringLiteral_1005,0);
  }
  else {
    in_stack_000000c8 = in_stack_000000d0;
    NullCheck(in_stack_000000d0);
    iStack00000000000000c4 =
         PassthroughCapabilities_get_MaxColorLutResolution_m16E57231943F3952DE08DF9AC6E9C46B7DE7B25A_inline
                   (in_stack_000000c8,(MethodInfo *)0x0);
    if (iStack00000000000000c4 == 0) {
      pIVar2 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<int,_Item>_ContainsKey__);
      pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
      in_stack_000000b8 = pEVar5;
      uVar3 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_1006);
      Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(pEVar5,uVar3,0);
      pEVar5 = in_stack_000000b8;
      pMVar6 = (MethodInfo *)
               il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000060);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar6);
    }
    uStack00000000000000b4 =
         OVRPassthroughColorLut_get_Resolution_mA472B9A1B370037D7FC2D44C78EEA431FD3DCAC1_inline
                   (pOStack0000000000000138,(MethodInfo *)0x0);
    in_stack_000000a8 = in_stack_00000118;
    NullCheck(in_stack_00000118);
    uStack00000000000000a4 =
         PassthroughCapabilities_get_MaxColorLutResolution_m16E57231943F3952DE08DF9AC6E9C46B7DE7B25A_inline
                   (in_stack_000000a8,(MethodInfo *)0x0);
    if (uStack00000000000000a4 < uStack00000000000000b4) {
      uStack000000000000009c =
           OVRPassthroughColorLut_get_Resolution_mA472B9A1B370037D7FC2D44C78EEA431FD3DCAC1_inline
                     (pOStack0000000000000138,(MethodInfo *)0x0);
      puVar1 = 
      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_ContainsKey__;
      in_stack_000000a0 = uStack000000000000009c;
      pIVar2 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_ContainsKey__
                         );
      in_stack_00000090 = Box(pIVar2,&stack0x0000009c);
      in_stack_00000088 = in_stack_00000118;
      NullCheck(in_stack_00000118);
      in_stack_00000080 =
           PassthroughCapabilities_get_MaxColorLutResolution_m16E57231943F3952DE08DF9AC6E9C46B7DE7B25A_inline
                     (in_stack_00000088,(MethodInfo *)0x0);
      uStack0000000000000084 = in_stack_00000080;
      pIVar2 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
      uVar3 = Box(pIVar2,&stack0x00000080);
      uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_1007);
      uVar3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987
                        (uVar4,in_stack_00000090,uVar3,0);
      pIVar2 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<int,_Item>_ContainsKey__);
      pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
      Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(pEVar5,uVar3,0);
      pMVar6 = (MethodInfo *)
               il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000060);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar6);
    }
  }
  return;
}


