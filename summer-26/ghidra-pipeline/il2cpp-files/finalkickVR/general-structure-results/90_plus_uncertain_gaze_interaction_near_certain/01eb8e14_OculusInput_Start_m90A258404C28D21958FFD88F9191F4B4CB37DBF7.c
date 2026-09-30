/*
FUNCTION_NAME: OculusInput_Start_m90A258404C28D21958FFD88F9191F4B4CB37DBF7
ENTRY_POINT: 01eb8e14
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 162
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OculusInput_Start_m90A258404C28D21958FFD88F9191F4B4CB37DBF7
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 local_260;
  undefined4 local_258;
  float local_254;
  long local_250;
  ulong local_248;
  undefined4 local_240;
  ulong local_238;
  undefined4 local_230;
  float local_228;
  undefined4 local_224;
  undefined4 uStack_220;
  float local_21c;
  undefined8 local_218;
  float local_210;
  void *local_208;
  void *local_200;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined4 uStack_1e8;
  float local_1e4;
  undefined8 local_1e0;
  float local_1d8;
  void *local_1d0;
  void *local_1c8;
  void *local_1c0;
  void *local_1b8;
  float local_1b0;
  undefined4 local_1ac;
  float fStack_1a8;
  float local_1a4;
  undefined8 local_1a0;
  float local_198;
  void *local_190;
  void *local_188;
  undefined4 local_17c;
  void *local_178;
  void *local_170;
  undefined8 local_168;
  undefined4 local_160;
  float local_15c;
  undefined8 local_158;
  float local_150;
  float local_14c;
  undefined8 local_148;
  float local_140;
  float local_13c;
  undefined8 local_138;
  float local_130;
  float local_12c;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float fStack_118;
  float local_114;
  undefined8 local_110;
  float local_108;
  void *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  byte local_e1;
  undefined8 local_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  void *local_70;
  uint local_64;
  undefined8 local_60;
  undefined4 local_58;
  int local_50;
  float local_4c;
  undefined8 local_48;
  float local_40;
  undefined4 local_3c;
  void *local_38;
  undefined8 local_30;
  long local_28;
  
  puVar2 = Method_System_Collections_Generic_List_Enumerator<IXRSelectInteractor>_Dispose__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  local_30 = param_5;
  local_28 = param_4;
  if ((OculusInput_Start_m90A258404C28D21958FFD88F9191F4B4CB37DBF7::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<IXRSelectInteractor>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_BakingSet>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_BakingSet>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_BakingSet>_get_Current__
              );
    OculusInput_Start_m90A258404C28D21958FFD88F9191F4B4CB37DBF7::s_Il2CppMethodInitialized = 1;
  }
  local_38 = (void *)0x0;
  local_3c = 0;
  local_48 = 0;
  local_40 = 0.0;
  local_4c = 0.0;
  local_50 = 0;
  local_60._0_4_ = 0;
  local_60._4_4_ = 0;
  local_58 = 0;
  local_64 = 0;
  local_70 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28);
  NullCheck(local_70);
  local_78 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(local_70,0);
  NullCheck(local_78);
  local_80 = (void *)Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932
                               (local_78,*(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_BakingSet>_MoveNext__
                                ,0);
  *(void **)(local_28 + 0x20) = local_80;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x20),local_80);
  local_88 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28,0);
  NullCheck(local_88);
  local_90 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(local_88,0);
  NullCheck(local_90);
  local_98 = (void *)Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932
                               (local_90,*(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_BakingSet>_get_Current__
                                ,0);
  *(void **)(local_28 + 0x28) = local_98;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x28),local_98);
  local_a0 = *(void **)(local_28 + 0x20);
  NullCheck(local_a0);
  local_a8 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_a0,0);
  NullCheck(local_a8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(local_a8,1,0);
  local_b0 = *(void **)(local_28 + 0x28);
  NullCheck(local_b0);
  local_b8 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_b0,0);
  NullCheck(local_b8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(local_b8,1,0);
  local_c0 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28,0);
  NullCheck(local_c0);
  local_c8 = (void *)Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932
                               (local_c0,*(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_BakingSet>_Dispose__
                                ,0);
  local_38 = local_c8;
  local_d0 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28,0);
  NullCheck(local_d0);
  local_d8 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(local_d0,0);
  NullCheck(local_d8);
  local_e0 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(local_d8,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_e1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_e0,0);
  local_e1 = local_e1 & 1;
  local_ec = *(int *)(local_28 + 0x50);
  local_e8 = local_ec;
  local_50 = local_ec;
  if (local_ec == 0) {
    local_f8 = 0;
    local_f0 = 0;
    fVar12 = 0.494;
    fVar15 = -3.629;
    Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
              ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_f8,-0.38,0.494,-3.629,
               (MethodInfo *)0x0);
    *(undefined8 *)(local_28 + 0x30) = local_f8;
    *(undefined4 *)(local_28 + 0x38) = local_f0;
    local_100 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
    NullCheck(local_100);
    local_12c = (float)FGVariables_GetLastPositionEnMuseo_mB56F0556AC278A6EE36DB4055FB848AC9E7E4FBE
                                 (local_100,0);
    local_128 = CONCAT44(fVar12,local_12c);
    if (local_12c == 0.0) {
      local_64 = (uint)(fVar15 == 0.0);
      local_13c = fVar15;
      local_138 = local_128;
      local_130 = fVar15;
    }
    else {
      local_64 = 0;
    }
    local_120 = fVar15;
    local_11c = local_12c;
    fStack_118 = fVar12;
    local_114 = fVar15;
    local_110 = local_128;
    local_108 = fVar15;
    local_48 = local_128;
    local_40 = fVar15;
    if (local_64 == 0) {
      local_168 = 0;
      local_160 = 0;
      fVar12 = 0.494;
      local_15c = fVar15;
      local_158 = local_128;
      local_150 = fVar15;
      local_14c = local_12c;
      local_148 = local_128;
      local_140 = fVar15;
      Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_168,local_12c,0.494,
                 fVar15,(MethodInfo *)0x0);
      *(undefined8 *)(local_28 + 0x30) = local_168;
      *(undefined4 *)(local_28 + 0x38) = local_160;
    }
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    local_170 = (void *)*puVar4;
    local_178 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A();
    NullCheck(local_178);
    local_17c = FGVariables_GetAlturaAsistida_mC989C10730997E295B4EB515CF433D75EC0BFEB1(local_178,0)
    ;
    NullCheck(local_170);
    InitGame_AjustarAlturaAsistida_m0362213407074CA9E0B37F4327E33A7744854A98(local_170,local_17c,0);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    local_188 = (void *)*puVar4;
    NullCheck(local_188);
    local_190 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                  (local_188,0);
    NullCheck(local_190);
    local_1ac = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_190,0);
    local_1a0 = CONCAT44(fVar12,local_1ac);
    uVar16 = 0x3f000000;
    local_1b0 = fVar12;
    fStack_1a8 = fVar12;
    local_1a4 = fVar15;
    local_198 = fVar15;
    local_4c = (float)il2cpp_codegen_add<float,float>(fVar12,0.5);
    local_1b8 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                  (local_28,0);
    NullCheck(local_1b8);
    local_1c0 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(local_1b8,0);
    local_1c8 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                  (local_28,0);
    NullCheck(local_1c8);
    local_1d0 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(local_1c8,0);
    NullCheck(local_1d0);
    local_1f0 = (float)Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_1d0,0)
    ;
    local_1e0 = CONCAT44(uVar16,local_1f0);
    local_1f4 = local_4c;
    local_1ec = local_1f0;
    uStack_1e8 = uVar16;
    local_1e4 = fVar15;
    local_1d8 = fVar15;
    local_200 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                  (local_28,0);
    NullCheck(local_200);
    local_208 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(local_200,0);
    NullCheck(local_208);
    local_224 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_208,0);
    local_218 = CONCAT44(uVar16,local_224);
    local_238 = 0;
    local_230 = 0;
    local_228 = fVar15;
    uStack_220 = uVar16;
    local_21c = fVar15;
    local_210 = fVar15;
    Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
              ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_238,local_1f0,local_1f4,
               fVar15,(MethodInfo *)0x0);
    NullCheck(local_1c0);
    local_248 = local_238;
    local_240 = local_230;
    param_2 = (undefined4)(local_238 >> 0x20);
    param_3 = local_230;
    Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156
              (local_238 & 0xffffffff,local_1c0,0);
    local_250 = local_28 + 0x30;
    local_254 = local_4c;
    *(float *)(local_28 + 0x34) = local_4c;
  }
  else if (local_ec == 1) {
    local_260 = 0;
    local_258 = 0;
    param_3 = 0;
    param_2 = 0;
    Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
              ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_260,0.0,0.0,0.0,
               (MethodInfo *)0x0);
    *(undefined8 *)(local_28 + 0x30) = local_260;
    *(undefined4 *)(local_28 + 0x38) = local_258;
  }
  local_3c = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  pvVar5 = (void *)OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D();
  NullCheck(pvVar5);
  local_3c = OVRProfile_get_eyeHeight_m28216080CA3C1DC1B6B2DAAD61833B758EE05CA1(pvVar5,0);
  pvVar5 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28,0);
  NullCheck(pvVar5);
  pvVar5 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(pvVar5,0);
  uVar7 = *(ulong *)(local_28 + 0x30);
  uVar16 = *(undefined4 *)(local_28 + 0x38);
  uVar9 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline((MethodInfo *)0x0);
  uVar9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                    (uVar9,param_2,param_3,local_3c,0);
  uVar13 = (undefined4)(uVar7 >> 0x20);
  uVar9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
                    (uVar7 & 0xffffffff,uVar7 >> 0x20,uVar16,uVar9,param_2,param_3,0);
  NullCheck(pvVar5);
  Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(uVar9,pvVar5,0);
  pvVar5 = local_38;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(pvVar5,0);
  pvVar5 = local_38;
  if ((bVar3 & 1) != 0) {
    NullCheck(local_38);
    uVar9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar5);
    local_60 = CONCAT44(uVar13,uVar9);
    local_58 = uVar16;
    pvVar5 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28,0);
    NullCheck(pvVar5);
    pvVar5 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(pvVar5,0);
    NullCheck(pvVar5);
    Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar5,0);
    local_60._4_4_ = uVar13;
    pvVar5 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28,0);
    NullCheck(pvVar5);
    pvVar5 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(pvVar5,0);
    NullCheck(pvVar5);
    uVar10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar5,0);
    uVar9 = uVar16;
    uVar14 = uVar13;
    pvVar6 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28,0);
    NullCheck(pvVar6);
    pvVar6 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(pvVar6,0);
    NullCheck(pvVar6);
    uVar11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar6,0);
    uVar11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                       (uVar11,uVar14,uVar9,(undefined4)local_60,local_60._4_4_,local_58,0);
    uVar9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
                      (uVar10,uVar13,uVar16,uVar11,uVar14,uVar9,0);
    NullCheck(pvVar5);
    Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(uVar9,uVar13,uVar16,pvVar5,0);
  }
  uVar8 = *(undefined8 *)(local_28 + 0x48);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar8,0);
  if ((bVar3 & 1) != 0) {
    pvVar5 = *(void **)(local_28 + 0x48);
    NullCheck(pvVar5);
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar5,0,0);
  }
  uVar8 = *(undefined8 *)(local_28 + 0x40);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar8,0);
  if ((bVar3 & 1) != 0) {
    pvVar5 = *(void **)(local_28 + 0x40);
    NullCheck(pvVar5);
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar5,0,0);
  }
  uVar8 = OculusInput_Empezar_m451156D33108B560A95086A11B20A8522F44AEAA(local_28);
  MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(local_28,uVar8,0);
  return;
}


