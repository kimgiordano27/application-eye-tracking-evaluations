/*
FUNCTION_NAME: OVRManager_SetOpenVRLocalPose_m249ED4C08F44B43E368E9F1B235430493041CBF5
ENTRY_POINT: 02d82834
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_SetOpenVRLocalPose_m249ED4C08F44B43E368E9F1B235430493041CBF5
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 *local_f8;
  undefined8 *local_f0;
  ulong *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  ulong local_70;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  local_f0 = (undefined8 *)local_58;
  local_e8 = (ulong *)
             Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  local_48 = in_stack_00000000;
  uStack_40 = in_stack_00000008;
  local_58[0] = in_stack_00000010;
  uStack_50 = in_stack_00000018;
  local_60 = param_7;
  local_38 = param_4;
  uStack_34 = param_5;
  local_30 = param_6;
  local_2c = param_1;
  uStack_28 = param_2;
  local_24 = param_3;
  if ((OVRManager_SetOpenVRLocalPose_m249ED4C08F44B43E368E9F1B235430493041CBF5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata(local_e8);
    OVRManager_SetOpenVRLocalPose_m249ED4C08F44B43E368E9F1B235430493041CBF5::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*local_e8);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*local_e8);
  local_64 = *(int *)(lVar7 + 0x100);
  if (local_64 == 2) {
    local_70 = *(ulong *)((long)local_f0 + 0x2c);
    local_68 = local_24;
    local_80 = local_38;
    uStack_7c = uStack_34;
    local_78 = local_30;
    uStack_88 = local_f0[3];
    local_90 = local_f0[2];
    uStack_98 = local_f0[1];
    local_a0 = *local_f0;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    local_b0 = local_70;
    uVar5 = local_b0;
    local_a8 = local_68;
    local_c0 = local_80;
    uStack_bc = uStack_7c;
    local_b8 = local_78;
    uStack_c8 = uStack_88;
    uVar4 = uStack_c8;
    local_d0 = local_90;
    uVar3 = local_d0;
    uStack_d8 = uStack_98;
    uVar2 = uStack_d8;
    local_e0 = local_a0;
    uVar1 = local_e0;
    local_b0._4_4_ = (undefined4)(local_70 >> 0x20);
    uVar6 = local_b0._4_4_;
    local_d0._0_4_ = (undefined4)local_90;
    local_d0._4_4_ = (undefined4)((ulong)local_90 >> 0x20);
    uStack_c8._0_4_ = (undefined4)uStack_88;
    uStack_c8._4_4_ = (undefined4)((ulong)uStack_88 >> 0x20);
    local_e0._0_4_ = (undefined4)local_a0;
    local_e0._4_4_ = (undefined4)((ulong)local_a0 >> 0x20);
    uStack_d8._0_4_ = (undefined4)uStack_98;
    uStack_d8._4_4_ = (undefined4)((ulong)uStack_98 >> 0x20);
    local_120 = (undefined4)local_d0;
    local_11c = local_d0._4_4_;
    local_118 = (undefined4)uStack_c8;
    local_114 = uStack_c8._4_4_;
    local_110 = (undefined4)local_e0;
    local_10c = local_e0._4_4_;
    local_108 = (undefined4)uStack_d8;
    local_104 = uStack_d8._4_4_;
    local_f8 = (undefined1 *)&local_120;
    local_e0 = uVar1;
    uStack_d8 = uVar2;
    local_d0 = uVar3;
    uStack_c8 = uVar4;
    local_b0 = uVar5;
    OVRInput_SetOpenVRLocalPose_m27E4294B7780884FF0BC1A8605403289A12C8894
              (local_70 & 0xffffffff,uVar6,local_68,local_80,uStack_7c,local_78,0);
  }
  return;
}


