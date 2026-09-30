/*
FUNCTION_NAME: OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4
ENTRY_POINT: 02d8b2ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 240
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_11;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4
               (undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  long lVar12;
  __1 *extraout_x1;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 *local_e00;
  FinallyHelper<OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::__1,false>
  aFStack_df8 [16];
  undefined8 local_de8;
  undefined8 uStack_de0;
  undefined8 local_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  HashSet_1_t918EB2DA20944A28694286E926AE3B8188E10F8F *local_db0;
  int local_da4;
  undefined1 local_da0 [16];
  ulong local_d88;
  undefined1 local_d80 [16];
  Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *local_d68;
  undefined1 local_d60 [16];
  undefined1 local_d50 [16];
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_d38;
  long local_d30;
  int local_d24;
  undefined1 local_d20 [16];
  ulong local_d08;
  undefined1 local_d00 [16];
  Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9 *local_ce8;
  undefined1 local_ce0 [16];
  undefined1 local_cd0 [16];
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_cb8;
  long local_cb0;
  int local_ca4;
  undefined1 local_ca0 [16];
  ulong local_c88;
  undefined1 local_c80 [16];
  Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9 *local_c68;
  undefined1 local_c60 [16];
  undefined1 local_c50 [16];
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_c38;
  long local_c30;
  int local_c24;
  ulong *local_c20;
  byte local_c11;
  Il2CppObject *local_c10;
  byte local_c01;
  undefined1 local_c00 [16];
  undefined1 local_bf0 [16];
  ulong local_bd8;
  ulong local_bd0;
  undefined8 uStack_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined4 local_b94;
  ulong local_b90;
  undefined8 uStack_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  ulong local_b60;
  undefined8 uStack_b54;
  undefined8 uStack_b4c;
  byte local_b39;
  ulong local_b38;
  ulong local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  void *local_b10;
  int local_b04;
  ulong local_b00;
  undefined8 uStack_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  ulong local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  ulong local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_aa0;
  long local_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined1 auStack_a60 [20];
  undefined8 local_a4c;
  undefined8 uStack_a44;
  int local_a34;
  undefined1 auStack_a30 [16];
  int local_a20;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined1 auStack_9f0 [8];
  undefined8 local_9e8;
  undefined8 local_9c8;
  undefined8 local_9c0 [5];
  void *local_998;
  undefined1 auStack_990 [40];
  undefined1 auStack_968 [40];
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_940;
  long local_938;
  undefined1 local_930 [16];
  undefined1 local_920 [16];
  int local_904;
  undefined1 local_900 [16];
  ulong local_8e8;
  undefined1 local_8e0 [16];
  Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *local_8d0;
  Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *local_8c8;
  undefined1 local_8c0 [16];
  undefined1 local_8b0 [16];
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_898;
  ulong local_890;
  ulong local_888;
  Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C *local_880;
  ulong local_878;
  ulong local_870;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_868;
  long local_860;
  int local_854;
  undefined1 auStack_850 [8];
  int local_848;
  undefined1 local_820 [16];
  undefined1 local_810 [16];
  ulong local_800;
  ulong local_7f8 [6];
  int local_7c4;
  undefined1 *local_7c0;
  int local_7b4;
  undefined1 auStack_7b0 [8];
  int local_7a8;
  Il2CppObject *local_780;
  int local_774;
  undefined1 auStack_770 [40];
  int local_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_728;
  int local_71c;
  undefined1 auStack_718 [44];
  int local_6ec;
  undefined4 local_6e4;
  undefined1 auStack_6e0 [40];
  undefined4 local_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined1 auStack_6a0 [24];
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined1 auStack_658 [16];
  undefined8 local_648;
  int local_624;
  undefined1 auStack_620 [8];
  int local_618;
  undefined8 local_5f0;
  undefined8 local_5e8 [6];
  void *local_5b8;
  void *local_5b0;
  undefined1 auStack_5a8 [48];
  undefined1 auStack_578 [48];
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined1 auStack_508 [24];
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined1 auStack_4c8 [16];
  undefined8 local_4b8;
  int local_49c;
  undefined1 auStack_498 [8];
  int local_490;
  undefined8 local_470;
  undefined8 local_468 [5];
  void *local_440;
  void *local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3c8 [24];
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined1 auStack_398 [16];
  undefined8 local_388;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  int local_354;
  undefined1 auStack_350 [8];
  int local_348;
  undefined8 local_328;
  undefined8 local_320 [5];
  undefined1 auStack_2f8 [40];
  undefined1 auStack_2d0 [40];
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_2a8;
  float local_29c;
  undefined8 local_298;
  float local_28c;
  undefined8 local_288;
  Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 *local_280;
  undefined4 local_278;
  float fStack_274;
  undefined8 local_270;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_268;
  long local_260;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  Il2CppObject *local_248;
  int local_240;
  undefined4 local_23c;
  Il2CppObject *local_238;
  undefined4 local_22c;
  Il2CppObject *local_228;
  undefined4 local_21c;
  undefined8 local_218;
  Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *local_210;
  Il2CppObject *local_208;
  int local_200;
  undefined4 local_1fc;
  Il2CppObject *local_1f8;
  undefined4 local_1ec;
  Il2CppObject *local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  void *local_1d0;
  undefined8 local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  byte local_121;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [16];
  ulong local_b8;
  undefined1 local_b0 [16];
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_34;
  undefined8 local_30;
  long local_28;
  
  puVar6 = Method_TMPro_TMP_MaterialManager_<>c__DisplayClass11_0_<AddMaskingMaterial>b__0__;
  puVar5 = Method_TMPro_TMP_Dropdown_<>c__DisplayClass69_0_<Show>b__0__;
  puVar4 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
  ;
  puVar2 = Method_System_Nullable<long>__ctor__;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  local_30 = param_4;
  local_28 = param_3;
  if ((OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass10_0_<CreateMetallicMaxValue>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass10_0_<CreateMetallicMaxValue>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__3__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__3__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__3__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass4_0_<CreateAlbedoCustomColor>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass4_0_<CreateAlbedoCustomColor>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::s_Il2CppMethodInitialized
         = 1;
  }
  local_34 = 0;
  local_40 = 0;
  memset(auStack_68,0,0x28);
  memset(auStack_98,0,0x30);
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_b8 = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  memset(auStack_f8,0,0x28);
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_121 = 0;
  local_140 = ZEXT816(0);
  local_150 = ZEXT816(0);
  local_160 = ZEXT816(0);
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_188 = 0;
  local_190 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_1b8 = 0;
  local_1c0 = (void *)0x0;
  local_1c8 = 0;
  local_1d0 = (void *)0x0;
  local_1d8 = 0;
  local_1dc = 0;
  local_1e8 = (Il2CppObject *)0x0;
  local_1ec = 0;
  local_1f8 = (Il2CppObject *)0x0;
  local_1fc = 0;
  local_200 = 0;
  local_208 = (Il2CppObject *)0x0;
  local_210 = (Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *)0x0;
  local_218 = 0;
  local_21c = 0;
  local_228 = (Il2CppObject *)0x0;
  local_22c = 0;
  local_238 = (Il2CppObject *)0x0;
  local_23c = 0;
  local_240 = 0;
  local_248 = (Il2CppObject *)0x0;
  do {
    while( true ) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      bVar7 = OVRPlugin_PollEvent_mB91F8F706861047BD2CCD1BDC0AB6374642503E0(lVar12 + 0x168,0);
      if ((bVar7 & 1) == 0) {
        return;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_250 = *(int *)(lVar12 + 0x168);
      local_24c = local_250;
      local_34 = local_250;
      if (local_250 != 1) break;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_260 = *(long *)(lVar12 + 0x90);
      if (local_260 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_268 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(lVar12 + 0x170);
        local_278 = OVRDeserialize_ByteArrayToStructure_TisDisplayRefreshRateChangedData_t8412C04FE31982A8D071487EC6E25215EEEFD5AE_mC8D55BBFFFFF997ED1224E48615618B2DA4E21AD
                              (local_268,
                               *(MethodInfo **)
                                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__3__
                              );
        local_270 = CONCAT44(param_2,local_278);
        fStack_274 = param_2;
        local_40 = local_270;
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_280 = *(Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 **)(lVar12 + 0x90);
        local_288 = local_40;
        uVar13 = local_288;
        local_288._0_4_ = (float)local_40;
        local_28c = (float)local_288;
        local_298 = local_40;
        local_298._4_4_ = (float)((ulong)local_40 >> 0x20);
        local_29c = local_298._4_4_;
        local_298 = uVar13;
        local_288 = uVar13;
        NullCheck(local_280);
        param_2 = local_29c;
        Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_inline
                  (local_280,local_28c,local_29c,(MethodInfo *)0x0);
      }
    }
    local_254 = local_250;
    uVar8 = il2cpp_codegen_subtract<int,int>(local_250,0x31);
    switch(uVar8) {
    case 0:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_2a8 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(lVar12 + 0x170);
      OVRDeserialize_ByteArrayToStructure_TisSpatialAnchorCreateCompleteData_t8A1C0554B63901CBACE1DC0CAB8103C1487A0A5C_m90A95D5AA1BE04AA0D0D165AFAC92821D5F38522
                (local_2a8,
                 *(MethodInfo **)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass4_0_<CreateAlbedoCustomColor>b__0__
                );
      memcpy(auStack_2d0,auStack_2f8,0x28);
      memcpy(auStack_68,auStack_2d0,0x28);
      memcpy(local_320,auStack_68,0x28);
      local_328 = local_320[0];
      memcpy(auStack_350,auStack_68,0x28);
      local_354 = local_348;
      if (local_348 < 0) {
        local_190 = local_328;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        puVar10 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        uStack_368 = puVar10[1];
        local_370 = *puVar10;
        local_360 = puVar10[2];
        local_1b8 = local_190;
        local_1b0 = local_370;
        uStack_1a8 = uStack_368;
        local_1a0 = local_360;
      }
      else {
        local_188 = local_328;
        memcpy(auStack_398,auStack_68,0x28);
        local_3a0 = local_388;
        memcpy(auStack_3c8,auStack_68,0x28);
        uStack_3d8 = uStack_3a8;
        local_3e0 = local_3b0;
        local_3f8 = 0;
        uStack_3f0 = 0;
        local_3e8 = 0;
        uStack_408 = uStack_3a8;
        local_410 = local_3b0;
        OVRAnchor__ctor_mA761F6D079E172EDD40346A290F2EA8D2510CCC5
                  (&local_3f8,local_3a0,local_3b0,uStack_3a8,0);
        uStack_1a8 = uStack_3f0;
        local_1b0 = local_3f8;
        local_1a0 = local_3e8;
        local_1b8 = local_188;
      }
      uStack_428 = uStack_1a8;
      local_430 = local_1b0;
      local_420 = local_1a0;
      OVRTask_SetResult_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m8640FC27D5708C08A05A22B56486322B14A55AB2
                (local_1b8,&local_430,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass4_0_<CreateAlbedoCustomColor>b__1__
                );
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_440 = *(void **)(lVar12 + 0x98);
      local_438 = local_440;
      if (local_440 == (void *)0x0) {
        local_1c8 = 0;
      }
      else {
        local_1c0 = local_440;
        memcpy(local_468,auStack_68,0x28);
        local_470 = local_468[0];
        memcpy(auStack_498,auStack_68,0x28);
        local_49c = local_490;
        memcpy(auStack_4c8,auStack_68,0x28);
        local_4d0 = local_4b8;
        local_4e0 = OVRSpace_op_Implicit_m5668C0D0B94EFD6CE95FC8C92A7E4418B8C0EFB6(local_4b8);
        local_4d8 = local_4e0;
        memcpy(auStack_508,auStack_68,0x28);
        uStack_518 = uStack_4e8;
        local_520 = local_4f0;
        NullCheck(local_1c0);
        local_528 = local_4d8;
        uStack_538 = uStack_518;
        local_540 = local_520;
        Action_4_Invoke_mF83AC81DE351FE293937C4B759B549D9A6B68A70_inline
                  (local_1c0,local_470,-1 < local_49c,local_4d8,local_520,uStack_518,0);
      }
      break;
    case 1:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_548 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(lVar12 + 0x170);
      OVRDeserialize_ByteArrayToStructure_TisSpaceSetComponentStatusCompleteData_tEB0171988C9E109E4F9C41A77D6738DB9D0CE58E_mC25C743F5A37DACFA5EDEFC9F70D6773281581AD
                (local_548,
                 *(MethodInfo **)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__2__
                );
      memcpy(auStack_578,auStack_5a8,0x30);
      memcpy(auStack_98,auStack_578,0x30);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_5b8 = *(void **)(lVar12 + 0xa0);
      local_5b0 = local_5b8;
      if (local_5b8 == (void *)0x0) {
        local_1d8 = 0;
      }
      else {
        local_1d0 = local_5b8;
        memcpy(local_5e8,auStack_98,0x30);
        local_5f0 = local_5e8[0];
        memcpy(auStack_620,auStack_98,0x30);
        local_624 = local_618;
        memcpy(auStack_658,auStack_98,0x30);
        local_660 = local_648;
        local_670 = OVRSpace_op_Implicit_m5668C0D0B94EFD6CE95FC8C92A7E4418B8C0EFB6(local_648,0);
        local_668 = local_670;
        memcpy(auStack_6a0,auStack_98,0x30);
        uStack_6a8 = uStack_680;
        local_6b0 = local_688;
        memcpy(auStack_6e0,auStack_98,0x30);
        local_6e4 = local_6b8;
        memcpy(auStack_718,auStack_98,0x30);
        local_71c = local_6ec;
        NullCheck(local_1d0);
        local_728 = local_668;
        uStack_738 = uStack_6a8;
        local_740 = local_6b0;
        Action_6_Invoke_m25D56069D793A7289F7D60B11D15ED7D15F33780_inline
                  (local_1d0,local_5f0,-1 < local_624,local_668,local_6b0,uStack_6a8,local_6e4,
                   local_71c != 0);
      }
      memcpy(auStack_770,auStack_98,0x30);
      local_774 = local_748;
      if (local_748 == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        local_780 = (Il2CppObject *)
                    OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1(0);
        memcpy(auStack_7b0,auStack_98,0x30);
        local_7b4 = local_7a8;
        if (local_7a8 < 0) {
          local_1ec = 0x9b8087e;
          local_1f8 = local_780;
          local_1fc = 3;
        }
        else {
          local_1dc = 0x9b8087e;
          local_1e8 = local_780;
          local_1fc = 2;
        }
        local_200 = 0x9b8087e;
        local_208 = local_780;
        local_7c0 = auStack_98;
        local_7c4 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(local_7c0,0);
        NullCheck(local_208);
        VirtualActionInvoker4<int,short,int,long>::Invoke
                  (7,local_208,local_200,(short)local_1fc,local_7c4,-1);
      }
      memcpy(local_7f8,auStack_98,0x30);
      local_800 = local_7f8[0];
      auVar15 = OVRTask_GetExisting_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC9EC955BB9B3C3E059505AF25F29CFA3E9212FB7
                          (local_7f8[0],*(MethodInfo **)puVar6);
      local_820 = auVar15;
      local_810 = auVar15;
      local_b0 = auVar15;
      memcpy(auStack_850,auStack_98,0x30);
      local_854 = local_848;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      OVRTask_1_SetResult_mA498D23F53A09A0072D64D435F8BE4F30ECB8A8C
                ((OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 *)local_b0,-1 < local_854,
                 *(MethodInfo **)puVar5);
      break;
    case 2:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_860 = *(long *)(lVar12 + 0xa8);
      if (local_860 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_868 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(lVar12 + 0x170);
        local_878 = OVRDeserialize_ByteArrayToStructure_TisSpaceQueryResultsData_tED5DAE5E8BDB324E88D3A492B94ECEACA6BA907A_m50F3066158A963BA10DF164DF2CA6E5B57375951
                              (local_868,
                               *(MethodInfo **)
                                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__0__
                              );
        local_870 = local_878;
        local_b8 = local_878;
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_880 = *(Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C **)(lVar12 + 0xa8);
        local_888 = local_b8;
        local_890 = local_b8;
        NullCheck(local_880);
        Action_1_Invoke_mD21E1BBC413B52214AE1643F8570EB10B0C004CF_inline
                  (local_880,local_890,(MethodInfo *)0x0);
      }
      break;
    case 3:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_898 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(lVar12 + 0x170);
      auVar15 = OVRDeserialize_ByteArrayToStructure_TisSpaceQueryCompleteData_tF177ABA884999611B5EC3DC2944FCE143E9F749F_mE1A49ABB1A9E3E72C77E37D97432AE54F4407732
                          (local_898,
                           *(MethodInfo **)
                            Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__3__
                          );
      local_8c0 = auVar15;
      local_8b0 = auVar15;
      local_d0 = auVar15;
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_8d0 = *(Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 **)(lVar12 + 0xb0);
      local_8c8 = local_8d0;
      if (local_8d0 == (Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *)0x0) {
        local_218 = 0;
      }
      else {
        local_8e8 = local_d0._0_8_;
        local_900._8_4_ = local_d0._8_4_;
        local_904 = local_900._8_4_;
        local_210 = local_8d0;
        local_8e0 = local_d0;
        local_900 = local_d0;
        NullCheck(local_8d0);
        Action_2_Invoke_m5C4507B6E0477EDD49165F507099C83A696B6B20_inline
                  (local_210,local_8e8,-1 < local_904,(MethodInfo *)0x0);
      }
      local_920 = local_d0;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_930 = local_920;
      OVRAnchor_OnSpaceQueryCompleteData_mA552E6D3991D2642111C9C87D7380A586056EC04
                (local_920._0_8_,local_920._8_8_,0);
      break;
    case 4:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_938 = *(long *)(lVar12 + 0xb8);
      if (local_938 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_940 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(lVar12 + 0x170);
        OVRDeserialize_ByteArrayToStructure_TisSpaceSaveCompleteData_t86F76FAD997B29F8C01EECC13D8BC18477D398F4_mB0692BA462E26A86BCFA96B6876BA6C11118B48B
                  (local_940,
                   *(MethodInfo **)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__1__
                  );
        memcpy(auStack_968,auStack_990,0x28);
        memcpy(auStack_f8,auStack_968,0x28);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_998 = *(void **)(lVar12 + 0xb8);
        memcpy(local_9c0,auStack_f8,0x28);
        local_9c8 = local_9c0[0];
        memcpy(auStack_9f0,auStack_f8,0x28);
        local_9f8 = local_9e8;
        local_a08 = OVRSpace_op_Implicit_m5668C0D0B94EFD6CE95FC8C92A7E4418B8C0EFB6(local_9e8);
        local_a00 = local_a08;
        memcpy(auStack_a30,auStack_f8,0x28);
        local_a34 = local_a20;
        memcpy(auStack_a60,auStack_f8,0x28);
        uStack_a68 = uStack_a44;
        local_a70 = local_a4c;
        NullCheck(local_998);
        local_a78 = local_a00;
        uStack_a88 = uStack_a68;
        local_a90 = local_a70;
        Action_4_Invoke_mD49299FEC5EDAE647F844D50183E3832DB459D6F_inline
                  (local_998,local_9c8,local_a00,-1 < local_a34,local_a70,uStack_a68,0);
      }
      break;
    case 5:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_a98 = *(long *)(lVar12 + 0xc0);
      if (local_a98 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_aa0 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(lVar12 + 0x170);
        OVRDeserialize_ByteArrayToStructure_TisSpaceEraseCompleteData_t29938D1C6E218C23257DF9F75C64AD57B1786AC3_mF47A0B55259937E10C4A967BCE2AE71377F6E3C3
                  (local_aa0,
                   *(MethodInfo **)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__1__
                  );
        uStack_ab8 = uStack_ad8;
        local_ac0 = local_ae0;
        uStack_aa8 = uStack_ac8;
        local_ab0 = local_ad0;
        uStack_118 = uStack_ad8;
        local_120 = local_ae0;
        uStack_108 = uStack_ac8;
        local_110 = local_ad0;
        uStack_af8 = uStack_ad8;
        uVar13 = uStack_af8;
        local_b00 = local_ae0;
        uStack_ae8 = uStack_ac8;
        local_af0 = local_ad0;
        uStack_af8._0_4_ = (int)uStack_ad8;
        local_b04 = (int)uStack_af8;
        local_121 = -1 < (int)uStack_af8;
        uStack_af8 = uVar13;
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_b10 = *(void **)(lVar12 + 0xc0);
        uStack_b28 = uStack_118;
        local_b30 = local_120;
        uStack_b18 = uStack_108;
        local_b20 = local_110;
        local_b38 = local_120;
        local_b39 = local_121 & 1;
        local_b60 = local_120;
        uStack_b68 = uStack_b4c;
        local_b70 = uStack_b54;
        uStack_b88 = uStack_118;
        local_b90 = local_120;
        uStack_b78 = uStack_108;
        uVar13 = uStack_b78;
        local_b80 = local_110;
        uStack_b78._4_4_ = (undefined4)((ulong)uStack_108 >> 0x20);
        local_b94 = uStack_b78._4_4_;
        uStack_b78 = uVar13;
        NullCheck(local_b10);
        uStack_ba8 = uStack_b68;
        local_bb0 = local_b70;
        Action_4_Invoke_mE230342C815050AB281BEBADE54FC805AE60B3F0_inline
                  (local_b10,local_b38,local_b39 & 1,local_b70,uStack_b68,local_b94);
        uStack_bc8 = uStack_118;
        local_bd0 = local_120;
        uStack_bb8 = uStack_108;
        local_bc0 = local_110;
        local_bd8 = local_120;
        auVar15 = OVRTask_GetExisting_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC9EC955BB9B3C3E059505AF25F29CFA3E9212FB7
                            (local_120,*(MethodInfo **)puVar6);
        local_c01 = local_121 & 1;
        local_c00 = auVar15;
        local_bf0 = auVar15;
        local_b0 = auVar15;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        OVRTask_1_SetResult_mA498D23F53A09A0072D64D435F8BE4F30ECB8A8C
                  ((OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 *)local_b0,
                   (bool)(local_c01 & 1),*(MethodInfo **)puVar5);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        local_c10 = (Il2CppObject *)
                    OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1(0);
        local_c11 = local_121 & 1;
        if ((local_121 & 1) == 0) {
          local_22c = 0x9b81686;
          local_23c = 3;
          local_238 = local_c10;
        }
        else {
          local_21c = 0x9b81686;
          local_23c = 2;
          local_228 = local_c10;
        }
        local_240 = 0x9b81686;
        local_c20 = &local_120;
        local_248 = local_c10;
        local_c24 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(local_c20,0);
        NullCheck(local_248);
        VirtualActionInvoker4<int,short,int,long>::Invoke
                  (7,local_248,local_240,(short)local_23c,local_c24,-1);
      }
      break;
    case 6:
LAB_02d8c84c:
      local_db0 = *(HashSet_1_t918EB2DA20944A28694286E926AE3B8188E10F8F **)(local_28 + 0x120);
      NullCheck(local_db0);
      HashSet_1_GetEnumerator_m237BAB5419E46686B28DBB89FBC7457A8139D299
                (local_db0,
                 *(MethodInfo **)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__2__
                );
      uStack_dc8 = uStack_de0;
      local_dd0 = local_de8;
      local_dc0 = local_dd8;
      local_e00 = &local_180;
      uStack_178 = uStack_de0;
      local_180 = local_de8;
      local_170 = local_dd8;
      il2cpp::utils::
      Finally<OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::__1>
                ((utils *)&local_e00,extraout_x1);
      while( true ) {
        uVar9 = Enumerator_MoveNext_m5496230310159D70B250813838B80FD71F2B1034
                          ((Enumerator_t12A2561A78E5498603F522ADF801953ABC3EAFC0 *)&local_180,
                           *(MethodInfo **)
                            Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass10_0_<CreateMetallicMaxValue>b__1__
                          );
        if ((uVar9 & 1) == 0) break;
        pvVar11 = (void *)Enumerator_get_Current_m35BAB922A34DBC54E27235C698B13D7B35969725_inline
                                    ((Enumerator_t12A2561A78E5498603F522ADF801953ABC3EAFC0 *)
                                     &local_180,
                                     *(MethodInfo **)
                                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__0__
                                    );
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        uVar14 = *(undefined8 *)(lVar12 + 0x170);
        uVar13 = *(undefined8 *)(lVar12 + 0x168);
        NullCheck(pvVar11);
        InterfaceActionInvoker1<EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8>::Invoke
                  ((InterfaceActionInvoker1<EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8>
                    *)0x0,*(undefined8 *)
                           Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__1__
                   ,pvVar11,uVar13,uVar14);
      }
      il2cpp::utils::
      FinallyHelper<OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::$_1,false>
      ::~FinallyHelper(aFStack_df8);
      break;
    case 7:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_c30 = *(long *)(lVar12 + 200);
      if (local_c30 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_c38 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(lVar12 + 0x170);
        auVar15 = OVRDeserialize_ByteArrayToStructure_TisSpaceShareResultData_t1BE431DF2FC60FBBB1F6BA5ECFB140117CFF044F_m6FD88F86C774971F10124906FDEB4709734D471C
                            (local_c38,
                             *(MethodInfo **)
                              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__3__
                            );
        local_c60 = auVar15;
        local_c50 = auVar15;
        local_140 = auVar15;
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_c68 = *(Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9 **)(lVar12 + 200);
        local_c88 = local_140._0_8_;
        local_ca0._8_4_ = local_140._8_4_;
        local_ca4 = local_ca0._8_4_;
        local_c80 = local_140;
        local_ca0 = local_140;
        NullCheck(local_c68);
        Action_2_Invoke_mF391E368703BF04E5B3933748BB1BD1BFC5799D9_inline
                  (local_c68,local_c88,local_ca4,(MethodInfo *)0x0);
      }
      break;
    case 8:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_cb0 = *(long *)(lVar12 + 0xd0);
      if (local_cb0 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_cb8 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(lVar12 + 0x170);
        auVar15 = OVRDeserialize_ByteArrayToStructure_TisSpaceListSaveResultData_tCFC8B45EABB98F65FE80A9D7659D7E898383970D_m01BA59E421B63F6D1EC9103E6591F209FD67B541
                            (local_cb8,
                             *(MethodInfo **)
                              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__2__
                            );
        local_ce0 = auVar15;
        local_cd0 = auVar15;
        local_150 = auVar15;
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_ce8 = *(Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9 **)(lVar12 + 0xd0);
        local_d08 = local_150._0_8_;
        local_d20._8_4_ = local_150._8_4_;
        local_d24 = local_d20._8_4_;
        local_d00 = local_150;
        local_d20 = local_150;
        NullCheck(local_ce8);
        Action_2_Invoke_mF391E368703BF04E5B3933748BB1BD1BFC5799D9_inline
                  (local_ce8,local_d08,local_d24,(MethodInfo *)0x0);
      }
      break;
    default:
      local_258 = local_34;
      if (local_34 != 100) goto LAB_02d8c84c;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_d30 = *(long *)(lVar12 + 0xd8);
      if (local_d30 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_d38 = *(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 **)(lVar12 + 0x170);
        auVar15 = OVRDeserialize_ByteArrayToStructure_TisSceneCaptureCompleteData_t309B8671164A38CEA71FDAC002DB145FFAECA033_mE2D9B1669B28BA064E53A833B1B3E35844DDD783
                            (local_d38,
                             *(MethodInfo **)
                              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__0__
                            );
        local_d60 = auVar15;
        local_d50 = auVar15;
        local_160 = auVar15;
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_d68 = *(Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 **)(lVar12 + 0xd8);
        local_d88 = local_160._0_8_;
        local_da0._8_4_ = local_160._8_4_;
        local_da4 = local_da0._8_4_;
        local_d80 = local_160;
        local_da0 = local_160;
        NullCheck(local_d68);
        Action_2_Invoke_m5C4507B6E0477EDD49165F507099C83A696B6B20_inline
                  (local_d68,local_d88,-1 < local_da4,(MethodInfo *)0x0);
      }
    }
  } while( true );
}


