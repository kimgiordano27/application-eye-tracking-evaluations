/*
FUNCTION_NAME: InputActionRebindingExtensions_ExtractParameterOverride_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA1A1A27ACE3D816905FA8CF9E9BB9C6CF69F046D_gshared
ENTRY_POINT: 021d4a28
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 198
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_18;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_18
*/


void InputActionRebindingExtensions_ExtractParameterOverride_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA1A1A27ACE3D816905FA8CF9E9BB9C6CF69F046D_gshared
               (void *param_1,LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E *param_2,
               void *param_3,undefined8 param_4,undefined8 param_5,MethodInfo *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  Il2CppClass *pIVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Exception_t *pEVar10;
  undefined1 auStack_3f8 [88];
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined1 auStack_388 [88];
  undefined8 local_330;
  Il2CppObject *local_328;
  void *local_320;
  undefined8 local_318;
  Exception_t *local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  Il2CppObject *local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0 [16];
  undefined8 local_2c8;
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  byte local_281;
  undefined8 local_280;
  Type_t *local_278;
  undefined8 local_270;
  undefined8 local_268;
  Il2CppObject *local_260;
  undefined8 local_258;
  undefined1 local_250 [16];
  undefined8 local_238;
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  byte local_1f1;
  undefined8 local_1f0;
  Type_t *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  Il2CppObject *local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [16];
  undefined8 local_1a8;
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  byte local_159;
  undefined8 local_158;
  Type_t *local_150;
  undefined8 local_148;
  undefined8 local_140;
  Il2CppObject *local_138;
  undefined8 local_130;
  Exception_t *local_128;
  undefined8 local_120;
  undefined8 local_118;
  Il2CppObject *local_110;
  LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E *local_108;
  void *local_100;
  void *local_f8;
  Il2CppObject *local_f0;
  UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96 *local_e8;
  int local_dc;
  Il2CppObject *local_d8;
  UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96 *local_d0;
  Il2CppObject *local_c8;
  LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E *local_c0;
  void *local_b8;
  Il2CppObject *local_b0;
  LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E *local_a8;
  Exception_t *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  Il2CppObject *local_88;
  LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E *local_80;
  LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E *local_78;
  LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E *local_70;
  void *local_68;
  UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96 *local_60;
  undefined8 local_58;
  void *local_50;
  LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E *local_48;
  MethodInfo *local_40;
  LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__;
  local_40 = param_6;
  local_38 = param_2;
  local_30 = param_4;
  uStack_28 = param_5;
  uVar5 = il2cpp_rgctx_is_initialized(param_6);
  if ((uVar5 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<TubeRenderer_VertexLayout>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>__ctor__);
    il2cpp_rgctx_method_init(local_40);
  }
  local_50 = (void *)0x0;
  local_58 = 0;
  local_60 = (UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96 *)0x0;
  local_68 = (void *)0x0;
  local_70 = local_38;
  local_48 = local_38;
  local_78 = local_38;
  if (local_38 == (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E *)0x0) {
    local_80 = local_38;
    NullCheck((void *)0x0);
    local_88 = (Il2CppObject *)Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(local_80);
    NullCheck(local_88);
    local_90 = VirtualFuncInvoker0<String_t*>::Invoke(8,local_88);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_Add__);
    uVar6 = local_90;
    uVar9 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_Dispose__
                      );
    local_98 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(uVar8,uVar6,uVar9,0);
    pIVar7 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
    pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
    uVar6 = local_98;
    local_a0 = pEVar10;
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Collections_NativeArray<LightUtility_LightMeshVertex>__ctor__);
    ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar10,uVar6,uVar8,0);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(local_a0,local_40);
  }
  local_a8 = local_38;
  NullCheck(local_38);
  local_b0 = (Il2CppObject *)
             LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline
                       (local_a8,(MethodInfo *)0x0);
  local_b8 = (void *)IsInstClass(local_b0,*(Il2CppClass **)puVar3);
  pvVar4 = local_b8;
  if (local_b8 == (void *)0x0) {
    local_c0 = local_48;
    local_50 = local_b8;
    NullCheck(local_48);
    local_c8 = (Il2CppObject *)
               LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline
                         (local_c0,(MethodInfo *)0x0);
    local_d0 = (UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96 *)
               IsInstSealed(local_c8,*(Il2CppClass **)
                                      Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>__ctor__
                           );
    local_60 = local_d0;
    if (local_d0 != (UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96 *)0x0) {
      local_d8 = (Il2CppObject *)local_d0;
      NullCheck(local_d0);
      local_dc = VirtualFuncInvoker0<int>::Invoke(4,local_d8);
      if (local_dc == 10) {
        local_e8 = local_60;
        NullCheck(local_60);
        local_f0 = (Il2CppObject *)
                   UnaryExpression_get_Operand_mE144387E98BABF0D3FD8E4640612A726D91E2943_inline
                             (local_e8,(MethodInfo *)0x0);
        local_100 = (void *)IsInstClass(local_f0,*(Il2CppClass **)puVar3);
        local_f8 = local_100;
        local_68 = local_100;
        pvVar4 = local_100;
        if (local_100 != (void *)0x0) goto LAB_021d4dd4;
        local_f8 = (void *)0x0;
        local_68 = (void *)0x0;
      }
    }
    local_108 = local_38;
    NullCheck(local_38);
    local_110 = (Il2CppObject *)Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(local_108);
    NullCheck(local_110);
    local_118 = VirtualFuncInvoker0<String_t*>::Invoke(8,local_110);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_GetPages__
                      );
    uVar6 = local_118;
    uVar9 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_Dispose__
                      );
    local_120 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(uVar8,uVar6,uVar9,0);
    pIVar7 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
    pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
    uVar6 = local_120;
    local_128 = pEVar10;
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Collections_NativeArray<LightUtility_LightMeshVertex>__ctor__);
    ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar10,uVar6,uVar8,0);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(local_128,local_40);
  }
LAB_021d4dd4:
  local_50 = pvVar4;
  local_130 = *(undefined8 *)Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_140 = local_130;
  local_138 = (Il2CppObject *)
              Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_130);
  local_158 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(local_40 + 0x38),1);
  local_148 = local_158;
  local_150 = (Type_t *)
              Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_158,0);
  NullCheck(local_138);
  local_159 = VirtualFuncInvoker1<bool,Type_t*>::Invoke(0x18,local_138,local_150);
  local_159 = local_159 & 1;
  if (local_159 == 0) {
    local_1c8 = *(undefined8 *)
                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_1d8 = local_1c8;
    local_1d0 = (Il2CppObject *)
                Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_1c8);
    local_1f0 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(local_40 + 0x38),1);
    local_1e0 = local_1f0;
    local_1e8 = (Type_t *)
                Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_1f0,0);
    NullCheck(local_1d0);
    local_1f1 = VirtualFuncInvoker1<bool,Type_t*>::Invoke(0x18,local_1d0,local_1e8);
    local_1f1 = local_1f1 & 1;
    if (local_1f1 == 0) {
      local_258 = *(undefined8 *)
                   Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_268 = local_258;
      local_260 = (Il2CppObject *)
                  Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_258);
      local_280 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(local_40 + 0x38),1);
      local_270 = local_280;
      local_278 = (Type_t *)
                  Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_280,0);
      NullCheck(local_260);
      local_281 = VirtualFuncInvoker1<bool,Type_t*>::Invoke(0x18,local_260,local_278);
      local_281 = local_281 & 1;
      if (local_281 == 0) {
        local_2e8 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(local_40 + 0x38),1);
        pIVar7 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
        il2cpp_codegen_runtime_class_init_inline(pIVar7);
        local_2f8 = local_2e8;
        local_2f0 = (Il2CppObject *)
                    Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_2e8);
        NullCheck(local_2f0);
        local_300 = VirtualFuncInvoker0<String_t*>::Invoke(8,local_2f0);
        uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_Reset__
                          );
        uVar6 = local_300;
        uVar9 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Collections_Generic_List_Enumerator<IXRInteractor>_MoveNext__
                          );
        local_308 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(uVar8,uVar6,uVar9,0);
        pIVar7 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
        pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
        uVar6 = local_308;
        local_310 = pEVar10;
        uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_UnityEngine_UIElements_UIR_NativePagedList<CopyClosingMeshJobData>__ctor__
                          );
        ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar10,uVar6,uVar8,0);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(local_310,local_40);
      }
      local_290 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(local_40 + 0x38),1);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_2a0 = local_290;
      local_298 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_290);
      uVar6 = il2cpp_codegen_static_fields_for
                        (*(Il2CppClass **)
                          Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__
                        );
      local_2e0 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00
                            (uVar6,local_298,0);
      local_2c0 = local_2e0;
      local_2b0 = local_2e0;
      local_2c8 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6
                            (local_2e0._0_8_,local_2e0._8_8_,0);
      local_58 = local_2c8;
    }
    else {
      local_200 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(local_40 + 0x38),1);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_210 = local_200;
      local_208 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_200);
      uVar6 = il2cpp_codegen_static_fields_for
                        (*(Il2CppClass **)
                          Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__);
      local_250 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00
                            (uVar6,local_208,0);
      local_230 = local_250;
      local_220 = local_250;
      local_238 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6
                            (local_250._0_8_,local_250._8_8_,0);
      local_58 = local_238;
    }
  }
  else {
    local_168 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(local_40 + 0x38),1);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_178 = local_168;
    local_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_168);
    uVar6 = il2cpp_codegen_static_fields_for
                      (*(Il2CppClass **)
                        Method_Unity_Collections_NativeArray<TubeRenderer_VertexLayout>__ctor__);
    local_1c0 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00
                          (uVar6,local_170,0);
    local_1a0 = local_1c0;
    local_190 = local_1c0;
    local_1a8 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6
                          (local_1c0._0_8_,local_1c0._8_8_,0);
    local_58 = local_1a8;
  }
  local_318 = local_58;
  local_320 = local_50;
  NullCheck(local_50);
  local_328 = (Il2CppObject *)
              MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(local_320);
  NullCheck(local_328);
  local_330 = VirtualFuncInvoker0<String_t*>::Invoke(8,local_328);
  memcpy(auStack_388,param_3,0x58);
  uStack_398 = uStack_28;
  local_3a0 = local_30;
  memset(param_1,0,0x78);
  uVar8 = local_318;
  uVar6 = local_330;
  memcpy(auStack_3f8,auStack_388,0x58);
  ParameterOverride__ctor_m0F178A29A3EAEDD7014F2BDD9690AD04EE6D34D9
            (param_1,uVar8,uVar6,auStack_3f8,local_3a0,uStack_398,0);
  return;
}


