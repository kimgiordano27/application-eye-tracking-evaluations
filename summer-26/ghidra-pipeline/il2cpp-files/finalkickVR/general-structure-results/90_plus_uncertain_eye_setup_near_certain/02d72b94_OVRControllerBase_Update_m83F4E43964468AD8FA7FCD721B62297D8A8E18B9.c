/*
FUNCTION_NAME: OVRControllerBase_Update_m83F4E43964468AD8FA7FCD721B62297D8A8E18B9
ENTRY_POINT: 02d72b94
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint OVRControllerBase_Update_m83F4E43964468AD8FA7FCD721B62297D8A8E18B9
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  undefined1 auStack_9d4 [108];
  undefined1 auStack_968 [108];
  uint local_8fc;
  uint *local_8f8;
  uint *local_8f0;
  float local_8e8;
  float local_8e4;
  undefined8 local_8e0;
  undefined1 auStack_8d8 [40];
  undefined8 local_8b0;
  uint local_86c;
  uint *local_868;
  uint *local_860;
  float local_858;
  float local_854;
  undefined8 local_850;
  undefined1 auStack_848 [40];
  undefined8 local_820;
  uint local_7dc;
  uint *local_7d8;
  uint *local_7d0;
  float local_7c8;
  float local_7c4;
  undefined8 local_7c0;
  undefined1 auStack_7b8 [40];
  undefined8 local_790;
  uint local_74c;
  uint *local_748;
  uint *local_740;
  float local_738;
  float local_734;
  undefined8 local_730;
  undefined1 auStack_728 [40];
  undefined8 local_700;
  uint local_6bc;
  uint *local_6b8;
  uint *local_6b0;
  float local_6a8;
  float local_6a4;
  undefined1 auStack_6a0 [28];
  float local_684;
  uint local_634;
  uint *local_630;
  uint *local_628;
  float local_620;
  float local_61c;
  undefined1 auStack_618 [20];
  float local_604;
  uint local_5ac;
  uint *local_5a8;
  uint *local_5a0;
  float local_598;
  float local_594;
  undefined8 local_590;
  undefined1 auStack_588 [32];
  undefined8 local_568;
  uint local_51c;
  uint *local_518;
  uint *local_510;
  float local_508;
  float local_504;
  undefined8 local_500;
  undefined1 auStack_4f8 [32];
  undefined8 local_4d8;
  uint local_48c;
  uint *local_488;
  uint *local_480;
  float local_478;
  float local_474;
  undefined8 local_470;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  uint local_3fc;
  uint *local_3f8;
  uint *local_3f0;
  float local_3e8;
  float local_3e4;
  undefined8 local_3e0;
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  uint local_36c;
  uint *local_368;
  uint *local_360;
  float local_358;
  float local_354;
  undefined1 auStack_350 [24];
  float local_338;
  uint *local_2e0;
  uint *local_2d8;
  float local_2d0;
  float local_2cc;
  undefined1 auStack_2c8 [16];
  float local_2b8;
  undefined1 auStack_25c [108];
  undefined1 auStack_1f0 [108];
  undefined4 local_184;
  undefined1 auStack_180 [108];
  undefined1 auStack_114 [108];
  undefined4 local_a8;
  uint local_a4;
  int local_a0;
  undefined1 auStack_9c [4];
  uint local_98 [26];
  undefined8 local_30;
  long local_28;
  
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRControllerBase_Update_m83F4E43964468AD8FA7FCD721B62297D8A8E18B9::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRControllerBase_Update_m83F4E43964468AD8FA7FCD721B62297D8A8E18B9::s_Il2CppMethodInitialized =
         1;
  }
  memset(auStack_9c,0,0x6c);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_a0 = *(int *)(lVar4 + 0x100);
  if ((local_a0 == 2) && (local_a4 = *(uint *)(local_28 + 0x10), (local_a4 & 3) != 0)) {
    local_a8 = *(undefined4 *)(local_28 + 0x10);
    OVRControllerBase_GetOpenVRControllerState_m4AE0D6657A255BE442FE628930617368339FC2BD
              (local_28,local_a8,0);
    memcpy(auStack_114,auStack_180,0x6c);
    memcpy(auStack_9c,auStack_114,0x6c);
  }
  else {
    local_184 = *(undefined4 *)(local_28 + 0x10);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetControllerState6_m4E410447FEE4F26CB21EC59EF0D9966482F1387C(local_184,0);
    memcpy(auStack_1f0,auStack_25c,0x6c);
    memcpy(auStack_9c,auStack_1f0,0x6c);
  }
  memcpy(auStack_2c8,auStack_9c,0x6c);
  local_2cc = local_2b8;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_2d0 = *pfVar5;
  if (local_2d0 <= local_2cc) {
    local_2e0 = local_98;
    local_98[0] = local_98[0] | 0x10000000;
    local_2d8 = local_2e0;
  }
  memcpy(auStack_350,auStack_9c,0x6c);
  local_354 = local_338;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_358 = *pfVar5;
  if (local_358 <= local_354) {
    local_368 = local_98;
    local_36c = local_98[0];
    local_98[0] = local_98[0] | 0x20000000;
    local_360 = local_368;
  }
  memcpy(auStack_3d8,auStack_9c,0x6c);
  local_3e0 = local_3b8;
  uVar3 = local_3e0;
  local_3e0._4_4_ = (float)((ulong)local_3b8 >> 0x20);
  local_3e4 = local_3e0._4_4_;
  local_3e0 = uVar3;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_3e8 = *pfVar5;
  if (local_3e8 <= local_3e4) {
    local_3f8 = local_98;
    local_3fc = local_98[0];
    local_98[0] = local_98[0] | 0x10;
    local_3f0 = local_3f8;
  }
  memcpy(auStack_468,auStack_9c,0x6c);
  local_470 = local_448;
  uVar3 = local_470;
  local_470._4_4_ = (float)((ulong)local_448 >> 0x20);
  local_474 = local_470._4_4_;
  local_470 = uVar3;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_478 = *pfVar5;
  if (local_474 <= -local_478) {
    local_488 = local_98;
    local_48c = local_98[0];
    local_98[0] = local_98[0] | 0x20;
    local_480 = local_488;
  }
  memcpy(auStack_4f8,auStack_9c,0x6c);
  local_500 = local_4d8;
  uVar3 = local_500;
  local_500._0_4_ = (float)local_4d8;
  local_504 = (float)local_500;
  local_500 = uVar3;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_508 = *pfVar5;
  if (local_504 <= -local_508) {
    local_518 = local_98;
    local_51c = local_98[0];
    local_98[0] = local_98[0] | 0x40;
    local_510 = local_518;
  }
  memcpy(auStack_588,auStack_9c,0x6c);
  local_590 = local_568;
  uVar3 = local_590;
  local_590._0_4_ = (float)local_568;
  local_594 = (float)local_590;
  local_590 = uVar3;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_598 = *pfVar5;
  if (local_598 <= local_594) {
    local_5a8 = local_98;
    local_5ac = local_98[0];
    local_98[0] = local_98[0] | 0x80;
    local_5a0 = local_5a8;
  }
  memcpy(auStack_618,auStack_9c,0x6c);
  local_61c = local_604;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_620 = *pfVar5;
  if (local_620 <= local_61c) {
    local_630 = local_98;
    local_634 = local_98[0];
    local_98[0] = local_98[0] | 0x4000000;
    local_628 = local_630;
  }
  memcpy(auStack_6a0,auStack_9c,0x6c);
  local_6a4 = local_684;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_6a8 = *pfVar5;
  if (local_6a8 <= local_6a4) {
    local_6b8 = local_98;
    local_6bc = local_98[0];
    local_98[0] = local_98[0] | 0x8000000;
    local_6b0 = local_6b8;
  }
  memcpy(auStack_728,auStack_9c,0x6c);
  local_730 = local_700;
  uVar3 = local_730;
  local_730._4_4_ = (float)((ulong)local_700 >> 0x20);
  local_734 = local_730._4_4_;
  local_730 = uVar3;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_738 = *pfVar5;
  if (local_738 <= local_734) {
    local_748 = local_98;
    local_74c = local_98[0];
    local_98[0] = local_98[0] | 0x1000;
    local_740 = local_748;
  }
  memcpy(auStack_7b8,auStack_9c,0x6c);
  local_7c0 = local_790;
  uVar3 = local_7c0;
  local_7c0._4_4_ = (float)((ulong)local_790 >> 0x20);
  local_7c4 = local_7c0._4_4_;
  local_7c0 = uVar3;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_7c8 = *pfVar5;
  if (local_7c4 <= -local_7c8) {
    local_7d8 = local_98;
    local_7dc = local_98[0];
    local_98[0] = local_98[0] | 0x2000;
    local_7d0 = local_7d8;
  }
  memcpy(auStack_848,auStack_9c,0x6c);
  local_850 = local_820;
  uVar3 = local_850;
  local_850._0_4_ = (float)local_820;
  local_854 = (float)local_850;
  local_850 = uVar3;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_858 = *pfVar5;
  if (local_854 <= -local_858) {
    local_868 = local_98;
    local_86c = local_98[0];
    local_98[0] = local_98[0] | 0x4000;
    local_860 = local_868;
  }
  memcpy(auStack_8d8,auStack_9c,0x6c);
  local_8e0 = local_8b0;
  uVar3 = local_8e0;
  local_8e0._0_4_ = (float)local_8b0;
  local_8e4 = (float)local_8e0;
  local_8e0 = uVar3;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pfVar5 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_8e8 = *pfVar5;
  if (local_8e8 <= local_8e4) {
    local_8f8 = local_98;
    local_8fc = local_98[0];
    local_98[0] = local_98[0] | 0x8000;
    local_8f0 = local_8f8;
  }
  memcpy(auStack_968,(void *)(local_28 + 0xac),0x6c);
  memcpy((void *)(local_28 + 0x40),auStack_968,0x6c);
  memcpy(auStack_9d4,auStack_9c,0x6c);
  memcpy((void *)(local_28 + 0xac),auStack_9d4,0x6c);
  return *(uint *)(local_28 + 0xac) & *(uint *)(local_28 + 0x10);
}


