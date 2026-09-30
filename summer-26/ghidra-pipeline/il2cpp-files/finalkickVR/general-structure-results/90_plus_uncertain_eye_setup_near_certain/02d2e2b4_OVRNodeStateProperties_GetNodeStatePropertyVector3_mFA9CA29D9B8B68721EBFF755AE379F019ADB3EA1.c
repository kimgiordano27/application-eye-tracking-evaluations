/*
FUNCTION_NAME: OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
ENTRY_POINT: 02d2e2b4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_15;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
          undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 local_2d0 [36];
  undefined8 local_2ac;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined8 local_26c;
  undefined8 local_250;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 *local_220;
  int local_218;
  undefined8 *local_210;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 *local_1b8;
  int local_1b0;
  undefined8 *local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 *local_150;
  int local_148;
  undefined8 *local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 *local_e8;
  int local_e0;
  undefined8 *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 *local_80;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  uVar5 = _uStack_2a4;
  local_48 = param_9;
  local_40 = param_8;
  local_34 = param_7;
  local_30 = param_6;
  local_2c = param_5;
  local_28 = param_4;
  if ((OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    uVar5 = _uStack_2a4;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    _uStack_2a4 = uVar5;
    uVar5 = _uStack_2a4;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    _uStack_2a4 = uVar5;
    uVar5 = _uStack_2a4;
    OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1::
    s_Il2CppMethodInitialized = 1;
  }
  _uStack_2a4 = uVar5;
  uVar8 = uStack_2a0;
  local_50 = local_40;
  uStack_2a0 = uVar8;
  local_6c = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
  local_60 = CONCAT44(param_2,local_6c);
  *local_50 = local_60;
  *(undefined4 *)(local_50 + 1) = param_3;
  local_70 = local_2c;
  uStack_68 = param_2;
  local_64 = param_3;
  local_58 = param_3;
  switch(local_2c) {
  case 0:
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_74 = *(int *)(lVar7 + 0x100);
    if (local_74 == 1) {
      local_80 = local_40;
      local_84 = local_30;
      local_88 = local_34;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_a4 = OVRPlugin_GetNodeAcceleration_mC5F4163A51573C63CCC196CC775E7AD774A79575
                           (local_84,local_88);
      local_c8 = CONCAT44(param_2,local_a4);
      local_c0 = param_3;
      uStack_a0 = param_2;
      local_9c = param_3;
      local_98 = local_c8;
      local_90 = param_3;
      uVar8 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                        (local_a4,0);
      *local_80 = CONCAT44(param_2,uVar8);
      *(undefined4 *)(local_80 + 1) = param_3;
      return 1;
    }
    local_cc = local_28;
    local_d8 = local_40;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar6 = OVRNodeStateProperties_GetUnityXRNodeStateVector3_m52E9B0208D19154F7805D52A3DCF08CCEB98DCBD
                      (local_cc,0,local_d8,0);
    if ((bVar6 & 1) != 0) {
      return 1;
    }
    break;
  case 1:
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_e0 = *(int *)(lVar7 + 0x100);
    if (local_e0 == 1) {
      local_e8 = local_40;
      local_ec = local_30;
      local_f0 = local_34;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_10c = OVRPlugin_GetNodeAngularAcceleration_mDE952D5093E24464A59BC6393ADE49AAE9624374
                            (local_ec,local_f0);
      local_130 = CONCAT44(param_2,local_10c);
      local_128 = param_3;
      uStack_108 = param_2;
      local_104 = param_3;
      local_100 = local_130;
      local_f8 = param_3;
      uVar8 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                        (local_10c,0);
      *local_e8 = CONCAT44(param_2,uVar8);
      *(undefined4 *)(local_e8 + 1) = param_3;
      return 1;
    }
    local_134 = local_28;
    local_140 = local_40;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar6 = OVRNodeStateProperties_GetUnityXRNodeStateVector3_m52E9B0208D19154F7805D52A3DCF08CCEB98DCBD
                      (local_134,1,local_140,0);
    if ((bVar6 & 1) != 0) {
      return 1;
    }
    break;
  case 2:
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_148 = *(int *)(lVar7 + 0x100);
    if (local_148 == 1) {
      local_150 = local_40;
      local_154 = local_30;
      local_158 = local_34;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_174 = OVRPlugin_GetNodeVelocity_mC6007F1CDD87AD15237BD493E94BBB7607C40C75
                            (local_154,local_158);
      local_198 = CONCAT44(param_2,local_174);
      local_190 = param_3;
      uStack_170 = param_2;
      local_16c = param_3;
      local_168 = local_198;
      local_160 = param_3;
      uVar8 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                        (local_174,0);
      *local_150 = CONCAT44(param_2,uVar8);
      *(undefined4 *)(local_150 + 1) = param_3;
      return 1;
    }
    local_19c = local_28;
    local_1a8 = local_40;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar6 = OVRNodeStateProperties_GetUnityXRNodeStateVector3_m52E9B0208D19154F7805D52A3DCF08CCEB98DCBD
                      (local_19c,2,local_1a8,0);
    if ((bVar6 & 1) != 0) {
      return 1;
    }
    break;
  case 3:
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_1b0 = *(int *)(lVar7 + 0x100);
    if (local_1b0 == 1) {
      local_1b8 = local_40;
      local_1bc = local_30;
      local_1c0 = local_34;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_1dc = OVRPlugin_GetNodeAngularVelocity_mF69AC351336CBD146A0D7F5543ABDB54C299F742
                            (local_1bc,local_1c0);
      local_200 = CONCAT44(param_2,local_1dc);
      local_1f8 = param_3;
      uStack_1d8 = param_2;
      local_1d4 = param_3;
      local_1d0 = local_200;
      local_1c8 = param_3;
      uVar8 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                        (local_1dc,0);
      *local_1b8 = CONCAT44(param_2,uVar8);
      *(undefined4 *)(local_1b8 + 1) = param_3;
      return 1;
    }
    local_204 = local_28;
    local_210 = local_40;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar6 = OVRNodeStateProperties_GetUnityXRNodeStateVector3_m52E9B0208D19154F7805D52A3DCF08CCEB98DCBD
                      (local_204,3,local_210,0);
    if ((bVar6 & 1) != 0) {
      return 1;
    }
    break;
  case 4:
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar8 = local_28;
    puVar4 = local_40;
    local_218 = *(int *)(lVar7 + 0x100);
    if (local_218 == 1) {
      local_220 = local_40;
      local_224 = local_30;
      local_228 = local_34;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(local_224,local_228);
      local_250 = local_26c;
      OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_2d0,0);
      *local_220 = local_2ac;
      *(undefined4 *)(local_220 + 1) = uStack_2a4;
      return 1;
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar6 = OVRNodeStateProperties_GetUnityXRNodeStateVector3_m52E9B0208D19154F7805D52A3DCF08CCEB98DCBD
                      (uVar8,4,puVar4,0);
                    /* try { // try from 02d2ea90 to 02e2eb93 has its CatchHandler @ 02d2ea90
                       catch() { ... } // from try @ 02d2ea90 with catch @ 02d2ea90
                       catch() { ... } // from try @ 02d2ec70 with catch @ 02d2ea90
                       catch() { ... } // from try @ 02d2ecc4 with catch @ 02d2ea90
                       catch() { ... } // from try @ 02d2ed24 with catch @ 02d2ea90 */
    if ((bVar6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


