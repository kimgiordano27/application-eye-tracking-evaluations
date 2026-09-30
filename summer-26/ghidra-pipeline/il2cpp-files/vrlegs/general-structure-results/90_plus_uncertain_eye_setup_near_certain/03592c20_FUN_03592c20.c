/*
FUNCTION_NAME: FUN_03592c20
ENTRY_POINT: 03592c20
PROGRAM: vrlegs-libil2cpp.so
SCORE: 131
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_03592c20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if ((DAT_0412e083 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_86_0_TypeInfo);
    FUN_01ab69ac(_Common_Shop_Scripts_Bundle_RechargeBundleBoard_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cf2ba0);
    FUN_01ab69ac(_Common_Shop_Scripts_Bundle_RechargeBundleBoard_<>c__DisplayClass16_0_TypeInfo);
    FUN_01ab69ac(
                Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnCreate_00000A5B_BurstDirectCall_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cbe888);
    FUN_01ab69ac(PTR_DAT_03cbf288);
    FUN_01ab69ac(
                Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnDestroy_00000A5D_BurstDirectCall_TypeInfo
                );
    FUN_01ab69ac(
                Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnUpdate_00000A5C_BurstDirectCall_TypeInfo
                );
    FUN_01ab69ac(Photon_Voice_Unity_Recorder_<>c_TypeInfo);
    FUN_01ab69ac(Photon_Voice_Unity_Recorder_<>c__DisplayClass129_0_TypeInfo);
    FUN_01ab69ac(Photon_Voice_Unity_Recorder_InputSourceType_TypeInfo);
    FUN_01ab69ac(Photon_Voice_Unity_Recorder_MicType_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_RectField_<>c_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_RectField_UxmlFactory_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_RectIntField_<>c_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_RectIntField_UxmlFactory_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_01ab69ac(Unity_Properties_Internal_RectIntPropertyBag_HeightProperty_TypeInfo);
    FUN_01ab69ac(Unity_Properties_Internal_RectIntPropertyBag_WidthProperty_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_93_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbeb90);
    DAT_0412e083 = 1;
  }
  puVar1 = Unity_Properties_Internal_RectIntPropertyBag_WidthProperty_TypeInfo;
  puVar9 = UnityEngine_UIElements_RectIntField_<>c_TypeInfo;
  puVar7 = Photon_Voice_Unity_Recorder_InputSourceType_TypeInfo;
  puVar6 = Photon_Voice_Unity_Recorder_<>c__DisplayClass129_0_TypeInfo;
  puVar5 = 
  Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnCreate_00000A5B_BurstDirectCall_TypeInfo
  ;
  puVar2 = PTR_DAT_03cbeb90;
  uVar11 = FUN_01b6d7fc(ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,0);
  auVar16 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(param_1 + 0x144) = uVar11;
  *(long *)(param_1 + 0x150) = auVar16._8_8_;
  *(long *)(param_1 + 0x148) = auVar16._0_8_;
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)puVar3;
  }
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x68);
  uVar11 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x68);
  *(undefined4 *)(param_1 + 0x164) = 3;
  *(undefined4 *)(param_1 + 0x15c) = uVar11;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  FUN_03567c48(ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,&local_a0,0);
  *(undefined8 *)(param_1 + 400) = uStack_78;
  *(undefined8 *)(param_1 + 0x188) = local_80;
  *(undefined8 *)(param_1 + 0x1a0) = uStack_68;
  *(undefined8 *)(param_1 + 0x198) = uStack_70;
  *(undefined8 *)(param_1 + 0x170) = uStack_98;
  *(undefined8 *)(param_1 + 0x168) = local_a0;
  *(undefined8 *)(param_1 + 0x180) = uStack_88;
  *(undefined8 *)(param_1 + 0x178) = local_90;
  uVar11 = FUN_01b6d7fc(ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,0);
  *(undefined4 *)(param_1 + 0x1d8) = uVar11;
  uVar11 = FUN_01b6d7fc(ZEXT816(0),0,0,0x3f800000,0);
  *(undefined4 *)(param_1 + 0x1dc) = uVar11;
  *(undefined4 *)(param_1 + 0x1e4) = 0xc2c60000;
  *(undefined4 *)(param_1 + 0x1ec) = 0x42100000;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  FUN_0209a350(&local_150,0x10,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x1f8) = uStack_148;
  *(undefined8 *)(param_1 + 0x1f0) = local_150;
  *(undefined8 *)(param_1 + 0x208) = uStack_138;
  *(undefined8 *)(param_1 + 0x200) = uStack_140;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x1f0,0);
  *(undefined8 *)(param_1 + 0x210) = 0x19000000190;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  FUN_0209a350(&local_c0,8,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x220) = uStack_b8;
  *(undefined8 *)(param_1 + 0x218) = local_c0;
  *(undefined8 *)(param_1 + 0x230) = uStack_a8;
  *(undefined8 *)(param_1 + 0x228) = uStack_b0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x218),0);
  uVar13 = DAT_00d37298;
  *(undefined4 *)(param_1 + 0x248) = 100;
  *(undefined8 *)(param_1 + 0x26c) = uVar13;
  *(undefined4 *)(param_1 + 0x274) = 0xffff;
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar5,0x10);
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_0209a1e0(&local_e0,uVar13,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x288) = uStack_d8;
  *(undefined8 *)(param_1 + 0x280) = local_e0;
  *(undefined8 *)(param_1 + 0x298) = uStack_c8;
  *(undefined8 *)(param_1 + 0x290) = uStack_d0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x280,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,4);
  *(undefined8 *)(param_1 + 0x2a0) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2dc) = 0x3ecccccd;
  *(undefined2 *)(param_1 + 0x302) = 0x101;
  *(undefined4 *)(param_1 + 0x318) = 0xff;
  *(undefined4 *)(param_1 + 0x2c0) = 0xc6fffe00;
  *(undefined4 *)(param_1 + 0x2e4) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x330) = 99999;
  *(undefined1 *)(param_1 + 0x309) = 1;
  *(undefined1 *)(param_1 + 0x334) = 1;
  *(undefined4 *)(param_1 + 0x338) = 1;
  *(undefined8 *)(param_1 + 0x328) = 0x1869f0001869f;
  *(undefined4 *)(param_1 + 0x360) = 0xbf800000;
  lVar12 = *(long *)puVar1;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)puVar1;
  }
  puVar9 = UnityEngine_UIElements_RectField_UxmlFactory_TypeInfo;
  puVar7 = Photon_Voice_Unity_Recorder_MicType_TypeInfo;
  puVar6 = 
  Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnDestroy_00000A5D_BurstDirectCall_TypeInfo
  ;
  puVar5 = _Common_Shop_Scripts_Bundle_RechargeBundleBoard_<>c__DisplayClass16_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_93_0_TypeInfo;
  puVar3 = PTR_DAT_03cbf288;
  lVar15 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar15 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar12 = *(long *)puVar1;
    }
    uVar13 = **(undefined8 **)(lVar12 + 0xb8);
    lVar15 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_86_0_TypeInfo);
    FUN_02060754(lVar15,uVar13,
                 *(undefined8 *)Unity_Properties_Internal_RectIntPropertyBag_HeightProperty_TypeInfo
                 ,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar14 = lVar15;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar15);
  }
  puVar10 = UnityEngine_UIElements_RectIntField_UxmlFactory_TypeInfo;
  puVar8 = UnityEngine_UIElements_RectField_<>c_TypeInfo;
  puVar4 = _Common_Shop_Scripts_Bundle_RechargeBundleBoard_<>c_TypeInfo;
  puVar1 = PTR_DAT_03cbe888;
  *(long *)(param_1 + 0x3b0) = lVar15;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x3b0,lVar15);
  uVar13 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x3c0) = uVar13;
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar3,0x10);
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  FUN_0209a1e0(&local_c0,uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x428) = uStack_a8;
  *(undefined8 *)(param_1 + 0x420) = uStack_b0;
  *(undefined8 *)(param_1 + 0x418) = uStack_b8;
  *(undefined8 *)(param_1 + 0x410) = local_c0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x410,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,8);
  *(undefined8 *)(param_1 + 0x478) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x478);
  uVar11 = FUN_01b6d7fc(ZEXT816(0x437f0000),0x437f0000,0x437f0000,0x43000000,0);
  *(undefined4 *)(param_1 + 0x4ec) = uVar11;
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar4,0x10);
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_0209a1e0(&local_e0,uVar13,*(undefined8 *)puVar10);
  *(undefined8 *)(param_1 + 0x508) = uStack_c8;
  *(undefined8 *)(param_1 + 0x500) = uStack_d0;
  *(undefined8 *)(param_1 + 0x4f8) = uStack_d8;
  *(undefined8 *)(param_1 + 0x4f0) = local_e0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x4f0,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar4,0x10);
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  FUN_0209a1e0(&local_100,uVar13,*(undefined8 *)puVar10);
  *(undefined8 *)(param_1 + 0x528) = uStack_e8;
  *(undefined8 *)(param_1 + 0x520) = uStack_f0;
  *(undefined8 *)(param_1 + 0x518) = uStack_f8;
  *(undefined8 *)(param_1 + 0x510) = local_100;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x510,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar4,0x10);
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  FUN_0209a1e0(&local_120,uVar13,*(undefined8 *)puVar10);
  *(undefined8 *)(param_1 + 0x548) = uStack_108;
  *(undefined8 *)(param_1 + 0x540) = uStack_110;
  *(undefined8 *)(param_1 + 0x538) = uStack_118;
  *(undefined8 *)(param_1 + 0x530) = local_120;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x530,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar5,0x10);
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  FUN_0209a1e0(&local_a0,uVar13,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x578) = uStack_78;
  *(undefined8 *)(param_1 + 0x570) = local_80;
  *(undefined8 *)(param_1 + 0x568) = uStack_88;
  *(undefined8 *)(param_1 + 0x560) = local_90;
  *(undefined8 *)(param_1 + 0x558) = uStack_98;
  *(undefined8 *)(param_1 + 0x550) = local_a0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x550,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar6,0x10);
  local_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  FUN_0209a1e0(&local_150,uVar13,*(undefined8 *)Photon_Voice_Unity_Recorder_<>c_TypeInfo);
  *(undefined8 *)(param_1 + 0x5a8) = local_130;
  *(undefined8 *)(param_1 + 0x590) = uStack_148;
  *(undefined8 *)(param_1 + 0x588) = local_150;
  *(undefined8 *)(param_1 + 0x5a0) = uStack_138;
  *(undefined8 *)(param_1 + 0x598) = uStack_140;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x588),0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)
                         Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnUpdate_00000A5C_BurstDirectCall_TypeInfo
                        ,8);
  *(undefined8 *)(param_1 + 0x5c0) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x5c0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar1,0x10);
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  FUN_0209a1e0(&local_170,uVar13,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x5e8) = uStack_158;
  *(undefined8 *)(param_1 + 0x5e0) = uStack_160;
  *(undefined8 *)(param_1 + 0x5d8) = uStack_168;
  *(undefined8 *)(param_1 + 0x5d0) = local_170;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x5d0,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar1,0x10);
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  FUN_0209a1e0(&local_190,uVar13,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x600) = uStack_188;
  *(undefined8 *)(param_1 + 0x5f8) = local_190;
  *(undefined8 *)(param_1 + 0x610) = uStack_178;
  *(undefined8 *)(param_1 + 0x608) = uStack_180;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x5f8),0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar3,0x10);
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  FUN_0209a1e0(&local_1b0,uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x638) = uStack_198;
  *(undefined8 *)(param_1 + 0x630) = uStack_1a0;
  *(undefined8 *)(param_1 + 0x628) = uStack_1a8;
  *(undefined8 *)(param_1 + 0x620) = local_1b0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x620,0);
  local_1c0 = 0;
  uStack_1b8 = 0;
  UnityEngine_Light__get_useBoundingSphereOverride(&local_1c0,4,0);
  *(undefined8 *)(param_1 + 0x6b8) = uStack_1b8;
  *(undefined8 *)(param_1 + 0x6b0) = local_1c0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x6b0,0);
  lVar12 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cf2ba0,10);
  local_1d0 = 0;
  uStack_1c8 = 0;
  FUN_027cf91c(&local_1d0,5,0,0,0,1,0);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) != 0) {
      *(undefined8 *)(lVar12 + 0x28) = uStack_1c8;
      *(undefined8 *)(lVar12 + 0x20) = local_1d0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      FUN_027cf91c(&local_1e0,5,0,0,0,2,0);
      if (1 < *(uint *)(lVar12 + 0x18)) {
        *(undefined8 *)(lVar12 + 0x38) = uStack_1d8;
        *(undefined8 *)(lVar12 + 0x30) = local_1e0;
        local_1f0 = 0;
        uStack_1e8 = 0;
        FUN_027cf91c(&local_1f0,5,0,0,0,3,0);
        if (2 < *(uint *)(lVar12 + 0x18)) {
          *(undefined8 *)(lVar12 + 0x48) = uStack_1e8;
          *(undefined8 *)(lVar12 + 0x40) = local_1f0;
          local_200 = 0;
          uStack_1f8 = 0;
          FUN_027cf91c(&local_200,5,0,0,0,4,0);
          if (3 < *(uint *)(lVar12 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x58) = uStack_1f8;
            *(undefined8 *)(lVar12 + 0x50) = local_200;
            local_210 = 0;
            uStack_208 = 0;
            FUN_027cf91c(&local_210,5,0,0,0,5,0);
            if (4 < *(uint *)(lVar12 + 0x18)) {
              *(undefined8 *)(lVar12 + 0x68) = uStack_208;
              *(undefined8 *)(lVar12 + 0x60) = local_210;
              local_220 = 0;
              uStack_218 = 0;
              FUN_027cf91c(&local_220,5,0,0,0,6,0);
              if (5 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x78) = uStack_218;
                *(undefined8 *)(lVar12 + 0x70) = local_220;
                local_230 = 0;
                uStack_228 = 0;
                FUN_027cf91c(&local_230,5,0,0,0,7,0);
                if (6 < *(uint *)(lVar12 + 0x18)) {
                  *(undefined8 *)(lVar12 + 0x88) = uStack_228;
                  *(undefined8 *)(lVar12 + 0x80) = local_230;
                  local_240 = 0;
                  uStack_238 = 0;
                  FUN_027cf91c(&local_240,5,0,0,0,8,0);
                  if (7 < *(uint *)(lVar12 + 0x18)) {
                    *(undefined8 *)(lVar12 + 0x98) = uStack_238;
                    *(undefined8 *)(lVar12 + 0x90) = local_240;
                    local_250 = 0;
                    uStack_248 = 0;
                    FUN_027cf91c(&local_250,5,0,0,0,9,0);
                    if (8 < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)(lVar12 + 0xa8) = uStack_248;
                      *(undefined8 *)(lVar12 + 0xa0) = local_250;
                      local_260 = 0;
                      uStack_258 = 0;
                      FUN_027cf91c(&local_260,5,0,0,0,10,0);
                      if (9 < *(uint *)(lVar12 + 0x18)) {
                        *(undefined8 *)(lVar12 + 0xb8) = uStack_258;
                        *(undefined8 *)(lVar12 + 0xb0) = local_260;
                        *(long *)(param_1 + 0x6c0) = lVar12;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (param_1 + 0x6c0,lVar12);
                        FUN_0391c598(param_1,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


