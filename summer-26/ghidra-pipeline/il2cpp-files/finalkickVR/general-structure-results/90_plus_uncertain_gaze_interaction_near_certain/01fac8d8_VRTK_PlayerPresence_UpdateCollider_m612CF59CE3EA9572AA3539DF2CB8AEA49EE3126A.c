/*
FUNCTION_NAME: VRTK_PlayerPresence_UpdateCollider_m612CF59CE3EA9572AA3539DF2CB8AEA49EE3126A
ENTRY_POINT: 01fac8d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_12;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_12
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void VRTK_PlayerPresence_UpdateCollider_m612CF59CE3EA9572AA3539DF2CB8AEA49EE3126A
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined8 local_340;
  undefined4 local_338;
  float local_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  float local_324;
  undefined8 local_320;
  float local_318;
  void *local_310;
  float local_304;
  float local_300;
  float local_2fc;
  undefined4 uStack_2f8;
  float local_2f4;
  undefined8 local_2f0;
  float local_2e8;
  void *local_2e0;
  void *local_2d8;
  undefined8 local_2d0;
  float local_2c8;
  undefined8 local_2c0;
  float local_2b8;
  float local_2b0;
  undefined4 local_2ac;
  float fStack_2a8;
  float local_2a4;
  undefined8 local_2a0;
  float local_298;
  void *local_290;
  float local_284;
  float local_280;
  float local_27c;
  float fStack_278;
  float local_274;
  undefined8 local_270;
  float local_268;
  void *local_260;
  void *local_258;
  byte local_249;
  undefined8 local_248;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  undefined4 local_22c;
  float fStack_228;
  float local_224;
  undefined8 local_220;
  float local_218;
  void *local_210;
  void *local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  float local_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  float local_1d4;
  undefined8 local_1d0;
  float local_1c8;
  void *local_1c0;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined4 uStack_1a8;
  float local_1a4;
  undefined8 local_1a0;
  float local_198;
  void *local_190;
  void *local_188;
  undefined8 local_180;
  float local_178;
  undefined8 local_170;
  float local_168;
  float local_160;
  undefined4 local_15c;
  float fStack_158;
  float local_154;
  undefined8 local_150;
  float local_148;
  void *local_140;
  float local_134;
  float local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  undefined8 local_120;
  float local_118;
  void *local_110;
  void *local_108;
  byte local_f9;
  undefined8 local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  void *local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float fStack_c0;
  float local_bc;
  undefined8 local_b8;
  float local_b0;
  void *local_a8;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float fStack_90;
  float local_8c;
  undefined8 local_88;
  float local_80;
  void *local_78;
  void *local_70;
  int local_64;
  void *local_60;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  long local_28;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  local_30 = param_5;
  local_28 = param_4;
  if ((VRTK_PlayerPresence_UpdateCollider_m612CF59CE3EA9572AA3539DF2CB8AEA49EE3126A::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    VRTK_PlayerPresence_UpdateCollider_m612CF59CE3EA9572AA3539DF2CB8AEA49EE3126A::
    s_Il2CppMethodInitialized = 1;
  }
  local_34 = 0.0;
  local_38 = 0.0;
  local_3c = 0.0;
  local_40 = 0.0;
  local_44 = 0.0;
  local_48 = 0.0;
  local_4c = 0.0;
  local_50 = 0.0;
  local_54 = 0.0;
  local_60 = (void *)VRDevicesHelper_get_SharedInstance_m463E0CD6CA6BA54CEE2D42B5262674795E0246CB(0)
  ;
  NullCheck(local_60);
  local_64 = *(int *)((long)local_60 + 0x10);
  if (local_64 == 0) {
    local_34 = 0.009;
    local_70 = *(void **)(local_28 + 0x38);
    NullCheck(local_70);
    local_78 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_70);
    NullCheck(local_78);
    local_94 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_78,0);
    local_88 = CONCAT44(param_2,local_94);
    local_9c = *(float *)(local_28 + 0x30);
    local_98 = param_2;
    fStack_90 = param_2;
    local_8c = param_3;
    local_80 = param_3;
    local_a8 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28,0)
    ;
    NullCheck(local_a8);
    local_c4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_a8,0);
    local_b8 = CONCAT44(param_2,local_c4);
    local_c8 = param_2;
    fStack_c0 = param_2;
    local_bc = param_3;
    local_b0 = param_3;
    fVar4 = (float)il2cpp_codegen_subtract<float,float>(local_98,local_9c);
    local_cc = (float)il2cpp_codegen_subtract<float,float>(fVar4,local_c8);
    local_38 = local_cc;
    if (local_cc == 0.0) {
      local_50 = 0.0;
    }
    else {
      local_d4 = local_34;
      local_d0 = local_cc;
      local_50 = (float)il2cpp_codegen_add<float,float>(local_cc / 2.0,local_34);
    }
    local_3c = local_50;
    local_40 = 0.0;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    local_e0 = (void *)OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D();
    NullCheck(local_e0);
    fVar4 = (float)OVRProfile_get_eyeHeight_m28216080CA3C1DC1B6B2DAAD61833B758EE05CA1(local_e0,0);
    local_e8 = local_3c;
    local_ec = fVar4;
    local_e4 = fVar4;
    local_40 = fVar4;
    local_3c = (float)il2cpp_codegen_subtract<float,float>(local_3c,fVar4);
    local_f8 = *(undefined8 *)(local_28 + 0x48);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_f9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_f8,0);
    local_f9 = local_f9 & 1;
    if (local_f9 != 0) {
      local_108 = *(void **)(local_28 + 0x48);
      local_110 = *(void **)(local_28 + 0x48);
      NullCheck(local_110);
      local_130 = (float)BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(local_110);
      local_120 = CONCAT44(fVar4,local_130);
      local_134 = local_38;
      local_140 = *(void **)(local_28 + 0x48);
      local_12c = local_130;
      fStack_128 = fVar4;
      local_124 = param_3;
      local_118 = param_3;
      NullCheck(local_140);
      local_15c = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(local_140,0);
      local_150 = CONCAT44(fVar4,local_15c);
      local_170 = 0;
      local_168 = 0.0;
      local_160 = param_3;
      fStack_158 = fVar4;
      local_154 = param_3;
      local_148 = param_3;
      Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_170,local_130,local_134
                 ,param_3,(MethodInfo *)0x0);
      NullCheck(local_108);
      local_180 = local_170;
      uVar3 = local_180;
      local_178 = local_168;
      local_180._0_4_ = (undefined4)local_170;
      uVar2 = (undefined4)local_180;
      local_180._4_4_ = (undefined4)((ulong)local_170 >> 0x20);
      uVar5 = local_180._4_4_;
      fVar4 = local_168;
      local_180 = uVar3;
      BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(uVar2,local_108,0);
      local_188 = *(void **)(local_28 + 0x48);
      local_190 = *(void **)(local_28 + 0x38);
      NullCheck(local_190);
      local_1b0 = (float)Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95
                                   (local_190,0);
      local_1a0 = CONCAT44(uVar5,local_1b0);
      local_1b4 = local_3c;
      local_1c0 = *(void **)(local_28 + 0x38);
      local_1ac = local_1b0;
      uStack_1a8 = uVar5;
      local_1a4 = fVar4;
      local_198 = fVar4;
      NullCheck(local_1c0);
      local_1dc = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(local_1c0,0)
      ;
      local_1d0 = CONCAT44(uVar5,local_1dc);
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = fVar4;
      uStack_1d8 = uVar5;
      local_1d4 = fVar4;
      local_1c8 = fVar4;
      Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_1f0,local_1b0,local_1b4
                 ,fVar4,(MethodInfo *)0x0);
      NullCheck(local_188);
      local_200 = local_1f0;
      uVar3 = local_200;
      local_1f8 = local_1e8;
      local_200._0_4_ = (undefined4)local_1f0;
      uVar2 = (undefined4)local_200;
      local_200._4_4_ = (undefined4)((ulong)local_1f0 >> 0x20);
      uVar5 = local_200._4_4_;
      local_200 = uVar3;
      BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0
                (uVar2,uVar5,local_1e8,local_188,0);
    }
  }
  else {
    local_44 = 0.009;
    local_208 = *(void **)(local_28 + 0x38);
    NullCheck(local_208);
    local_210 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_208)
    ;
    NullCheck(local_210);
    local_22c = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_210,0);
    local_220 = CONCAT44(param_2,local_22c);
    fVar4 = *(float *)(local_28 + 0x30);
    local_234 = fVar4;
    local_230 = param_2;
    fStack_228 = param_2;
    local_224 = param_3;
    local_218 = param_3;
    local_238 = (float)il2cpp_codegen_subtract<float,float>(param_2,fVar4);
    local_48 = local_238;
    if (local_238 == 0.0) {
      local_54 = 0.0;
    }
    else {
      local_240 = local_44;
      fVar4 = local_44;
      local_23c = local_238;
      local_54 = (float)il2cpp_codegen_add<float,float>(local_238 / 2.0,local_44);
    }
    local_4c = local_54;
    local_248 = *(undefined8 *)(local_28 + 0x48);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_249 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_248,0);
    local_249 = local_249 & 1;
    if (local_249 != 0) {
      local_258 = *(void **)(local_28 + 0x48);
      local_260 = *(void **)(local_28 + 0x48);
      NullCheck(local_260);
      local_280 = (float)BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(local_260);
      local_270 = CONCAT44(fVar4,local_280);
      local_284 = local_48;
      local_290 = *(void **)(local_28 + 0x48);
      local_27c = local_280;
      fStack_278 = fVar4;
      local_274 = param_3;
      local_268 = param_3;
      NullCheck(local_290);
      local_2ac = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(local_290,0);
      local_2a0 = CONCAT44(fVar4,local_2ac);
      local_2c0 = 0;
      local_2b8 = 0.0;
      local_2b0 = param_3;
      fStack_2a8 = fVar4;
      local_2a4 = param_3;
      local_298 = param_3;
      Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_2c0,local_280,local_284
                 ,param_3,(MethodInfo *)0x0);
      NullCheck(local_258);
      local_2d0 = local_2c0;
      uVar3 = local_2d0;
      local_2c8 = local_2b8;
      local_2d0._0_4_ = (undefined4)local_2c0;
      uVar2 = (undefined4)local_2d0;
      local_2d0._4_4_ = (undefined4)((ulong)local_2c0 >> 0x20);
      uVar5 = local_2d0._4_4_;
      fVar4 = local_2b8;
      local_2d0 = uVar3;
      BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(uVar2,local_258,0);
      local_2d8 = *(void **)(local_28 + 0x48);
      local_2e0 = *(void **)(local_28 + 0x38);
      NullCheck(local_2e0);
      local_300 = (float)Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95
                                   (local_2e0,0);
      local_2f0 = CONCAT44(uVar5,local_300);
      local_304 = local_4c;
      local_310 = *(void **)(local_28 + 0x38);
      local_2fc = local_300;
      uStack_2f8 = uVar5;
      local_2f4 = fVar4;
      local_2e8 = fVar4;
      NullCheck(local_310);
      local_32c = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(local_310,0)
      ;
      local_320 = CONCAT44(uVar5,local_32c);
      local_340 = 0;
      local_338 = 0;
      local_330 = fVar4;
      uStack_328 = uVar5;
      local_324 = fVar4;
      local_318 = fVar4;
      Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_340,local_300,local_304
                 ,fVar4,(MethodInfo *)0x0);
      NullCheck(local_2d8);
      local_350 = (undefined4)local_340;
      uStack_34c = (undefined4)((ulong)local_340 >> 0x20);
      BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0
                (local_350,uStack_34c,local_338,local_2d8,0);
    }
  }
  return;
}


