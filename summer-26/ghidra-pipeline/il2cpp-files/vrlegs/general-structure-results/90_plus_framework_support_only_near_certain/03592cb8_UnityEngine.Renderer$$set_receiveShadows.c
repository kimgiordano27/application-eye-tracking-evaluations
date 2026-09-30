/*
FUNCTION_NAME: UnityEngine.Renderer$$set_receiveShadows
ENTRY_POINT: 03592cb8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 113
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_Renderer__set_receiveShadows(void)

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
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar15;
  long unaff_x21;
  long *unaff_x24;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
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
  *(undefined1 *)(unaff_x21 + 0x83) = 1;
  puVar1 = Unity_Properties_Internal_RectIntPropertyBag_WidthProperty_TypeInfo;
  puVar7 = UnityEngine_UIElements_RectIntField_<>c_TypeInfo;
  puVar6 = Photon_Voice_Unity_Recorder_InputSourceType_TypeInfo;
  puVar5 = Photon_Voice_Unity_Recorder_<>c__DisplayClass129_0_TypeInfo;
  puVar3 = 
  Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnCreate_00000A5B_BurstDirectCall_TypeInfo
  ;
  puVar2 = PTR_DAT_03cbeb90;
  uVar11 = FUN_01b6d7fc(ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,0);
  auVar16 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(unaff_x19 + 0x144) = uVar11;
  unaff_x20[1] = auVar16._8_8_;
  *unaff_x20 = auVar16._0_8_;
  lVar12 = *unaff_x24;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *unaff_x24;
  }
  *(undefined4 *)(unaff_x19 + 0x158) = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x68);
  uVar11 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x68);
  *(undefined4 *)(unaff_x19 + 0x164) = 3;
  *(undefined4 *)(unaff_x19 + 0x15c) = uVar11;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  FUN_03567c48(ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,&stack0x000001d0,0);
  *(undefined8 *)(unaff_x19 + 400) = 0;
  *(undefined8 *)(unaff_x19 + 0x188) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x198) = 0;
  *(undefined8 *)(unaff_x19 + 0x170) = in_stack_000001d8;
  *(undefined8 *)(unaff_x19 + 0x168) = in_stack_000001d0;
  *(undefined8 *)(unaff_x19 + 0x180) = in_stack_000001e8;
  *(undefined8 *)(unaff_x19 + 0x178) = in_stack_000001e0;
  uVar11 = FUN_01b6d7fc(ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,0);
  *(undefined4 *)(unaff_x19 + 0x1d8) = uVar11;
  uVar11 = FUN_01b6d7fc(ZEXT816(0),0,0,0x3f800000,0);
  *(undefined4 *)(unaff_x19 + 0x1dc) = uVar11;
  *(undefined4 *)(unaff_x19 + 0x1e4) = 0xc2c60000;
  *(undefined4 *)(unaff_x19 + 0x1ec) = 0x42100000;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  FUN_0209a350(&stack0x00000120,0x10,*(undefined8 *)puVar6);
  *(undefined8 *)(unaff_x19 + 0x1f8) = in_stack_00000128;
  *(undefined8 *)(unaff_x19 + 0x1f0) = in_stack_00000120;
  *(undefined8 *)(unaff_x19 + 0x208) = in_stack_00000138;
  *(undefined8 *)(unaff_x19 + 0x200) = in_stack_00000130;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1f0,0);
  *(undefined8 *)(unaff_x19 + 0x210) = 0x19000000190;
  in_stack_000001b8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001c0 = 0;
  FUN_0209a350(&stack0x000001b0,8,*(undefined8 *)puVar5);
  *(undefined8 *)(unaff_x19 + 0x220) = in_stack_000001b8;
  *(undefined8 *)(unaff_x19 + 0x218) = in_stack_000001b0;
  *(undefined8 *)(unaff_x19 + 0x230) = in_stack_000001c8;
  *(undefined8 *)(unaff_x19 + 0x228) = in_stack_000001c0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x218),0);
  uVar13 = DAT_00d37298;
  *(undefined4 *)(unaff_x19 + 0x248) = 100;
  *(undefined8 *)((long)unaff_x20 + 0x124) = uVar13;
  *(undefined4 *)(unaff_x19 + 0x274) = 0xffff;
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar3,0x10);
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001a0 = 0;
  FUN_0209a1e0(&stack0x00000190,uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x19 + 0x288) = in_stack_00000198;
  *(undefined8 *)(unaff_x19 + 0x280) = in_stack_00000190;
  *(undefined8 *)(unaff_x19 + 0x298) = in_stack_000001a8;
  *(undefined8 *)(unaff_x19 + 0x290) = in_stack_000001a0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x280,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,4);
  *(undefined8 *)(unaff_x19 + 0x2a0) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x2a0);
  *(undefined4 *)(unaff_x19 + 0x2dc) = 0x3ecccccd;
  *(undefined2 *)(unaff_x19 + 0x302) = 0x101;
  *(undefined4 *)(unaff_x19 + 0x318) = 0xff;
  *(undefined4 *)(unaff_x19 + 0x2c0) = 0xc6fffe00;
  *(undefined4 *)(unaff_x19 + 0x2e4) = 0xffffffff;
  *(undefined8 *)(unaff_x19 + 0x348) = 0;
  *(undefined8 *)(unaff_x19 + 0x340) = 0;
  *(undefined4 *)(unaff_x19 + 0x330) = 99999;
  *(undefined1 *)(unaff_x19 + 0x309) = 1;
  *(undefined1 *)(unaff_x19 + 0x334) = 1;
  *(undefined4 *)(unaff_x19 + 0x338) = 1;
  *(undefined8 *)(unaff_x19 + 0x328) = 0x1869f0001869f;
  *(undefined4 *)(unaff_x19 + 0x360) = 0xbf800000;
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
  puVar3 = OVRPlugin_OVRP_1_93_0_TypeInfo;
  puVar2 = PTR_DAT_03cbf288;
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
  *(long *)(unaff_x19 + 0x3b0) = lVar15;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x3b0,lVar15);
  uVar13 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(unaff_x19 + 0x3c0) = uVar13;
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,0x10);
  in_stack_000001b8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001c0 = 0;
  FUN_0209a1e0(&stack0x000001b0,uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x19 + 0x428) = in_stack_000001c8;
  *(undefined8 *)(unaff_x19 + 0x420) = in_stack_000001c0;
  *(undefined8 *)(unaff_x19 + 0x418) = in_stack_000001b8;
  *(undefined8 *)(unaff_x19 + 0x410) = in_stack_000001b0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x410,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar3,8);
  *(undefined8 *)(unaff_x19 + 0x478) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x478);
  uVar11 = FUN_01b6d7fc(ZEXT816(0x437f0000),0x437f0000,0x437f0000,0x43000000,0);
  *(undefined4 *)(unaff_x19 + 0x4ec) = uVar11;
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar4,0x10);
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001a0 = 0;
  FUN_0209a1e0(&stack0x00000190,uVar13,*(undefined8 *)puVar10);
  *(undefined8 *)(unaff_x19 + 0x508) = in_stack_000001a8;
  *(undefined8 *)(unaff_x19 + 0x500) = in_stack_000001a0;
  *(undefined8 *)(unaff_x19 + 0x4f8) = in_stack_00000198;
  *(undefined8 *)(unaff_x19 + 0x4f0) = in_stack_00000190;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x4f0,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar4,0x10);
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  FUN_0209a1e0(&stack0x00000170,uVar13,*(undefined8 *)puVar10);
  *(undefined8 *)(unaff_x19 + 0x528) = in_stack_00000188;
  *(undefined8 *)(unaff_x19 + 0x520) = in_stack_00000180;
  *(undefined8 *)(unaff_x19 + 0x518) = in_stack_00000178;
  *(undefined8 *)(unaff_x19 + 0x510) = in_stack_00000170;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x510,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar4,0x10);
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  FUN_0209a1e0(&stack0x00000150,uVar13,*(undefined8 *)puVar10);
  *(undefined8 *)(unaff_x19 + 0x548) = in_stack_00000168;
  *(undefined8 *)(unaff_x19 + 0x540) = in_stack_00000160;
  *(undefined8 *)(unaff_x19 + 0x538) = in_stack_00000158;
  *(undefined8 *)(unaff_x19 + 0x530) = in_stack_00000150;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x530,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar5,0x10);
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  FUN_0209a1e0(&stack0x000001d0,uVar13,*(undefined8 *)puVar8);
  *(undefined8 *)(unaff_x19 + 0x578) = 0;
  *(undefined8 *)(unaff_x19 + 0x570) = 0;
  *(undefined8 *)(unaff_x19 + 0x568) = in_stack_000001e8;
  *(undefined8 *)(unaff_x19 + 0x560) = in_stack_000001e0;
  *(undefined8 *)(unaff_x19 + 0x558) = in_stack_000001d8;
  *(undefined8 *)(unaff_x19 + 0x550) = in_stack_000001d0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x550,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar6,0x10);
  in_stack_00000140 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  FUN_0209a1e0(&stack0x00000120,uVar13,*(undefined8 *)Photon_Voice_Unity_Recorder_<>c_TypeInfo);
  *(undefined8 *)(unaff_x19 + 0x5a8) = in_stack_00000140;
  *(undefined8 *)(unaff_x19 + 0x590) = in_stack_00000128;
  *(undefined8 *)(unaff_x19 + 0x588) = in_stack_00000120;
  *(undefined8 *)(unaff_x19 + 0x5a0) = in_stack_00000138;
  *(undefined8 *)(unaff_x19 + 0x598) = in_stack_00000130;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x588),0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)
                         Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnUpdate_00000A5C_BurstDirectCall_TypeInfo
                        ,8);
  *(undefined8 *)(unaff_x19 + 0x5c0) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x5c0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar1,0x10);
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  FUN_0209a1e0(&stack0x00000100,uVar13,*(undefined8 *)puVar9);
  *(undefined8 *)(unaff_x19 + 0x5e8) = in_stack_00000118;
  *(undefined8 *)(unaff_x19 + 0x5e0) = in_stack_00000110;
  *(undefined8 *)(unaff_x19 + 0x5d8) = in_stack_00000108;
  *(undefined8 *)(unaff_x19 + 0x5d0) = in_stack_00000100;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x5d0,0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar1,0x10);
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  FUN_0209a1e0(&stack0x000000e0,uVar13,*(undefined8 *)puVar9);
  *(undefined8 *)(unaff_x19 + 0x600) = in_stack_000000e8;
  *(undefined8 *)(unaff_x19 + 0x5f8) = in_stack_000000e0;
  *(undefined8 *)(unaff_x19 + 0x610) = in_stack_000000f8;
  *(undefined8 *)(unaff_x19 + 0x608) = in_stack_000000f0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x5f8),0);
  uVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,0x10);
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  FUN_0209a1e0(&stack0x000000c0,uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x19 + 0x638) = in_stack_000000d8;
  *(undefined8 *)(unaff_x19 + 0x630) = in_stack_000000d0;
  *(undefined8 *)(unaff_x19 + 0x628) = in_stack_000000c8;
  *(undefined8 *)(unaff_x19 + 0x620) = in_stack_000000c0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x620,0);
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  UnityEngine_Light__get_useBoundingSphereOverride(&stack0x000000b0,4,0);
  *(undefined8 *)(unaff_x19 + 0x6b8) = in_stack_000000b8;
  *(undefined8 *)(unaff_x19 + 0x6b0) = in_stack_000000b0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x6b0,0);
  lVar12 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cf2ba0,10);
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  FUN_027cf91c(&stack0x000000a0,5,0,0,0,1,0);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) != 0) {
      *(undefined8 *)(lVar12 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar12 + 0x20) = in_stack_000000a0;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      FUN_027cf91c(&stack0x00000090,5,0,0,0,2,0);
      if (1 < *(uint *)(lVar12 + 0x18)) {
        *(undefined8 *)(lVar12 + 0x38) = in_stack_00000098;
        *(undefined8 *)(lVar12 + 0x30) = in_stack_00000090;
        in_stack_00000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,5,0,0,0,3,0);
        if (2 < *(uint *)(lVar12 + 0x18)) {
          *(undefined8 *)(lVar12 + 0x48) = in_stack_00000088;
          *(undefined8 *)(lVar12 + 0x40) = in_stack_00000080;
          in_stack_00000070 = 0;
          in_stack_00000078 = 0;
          FUN_027cf91c(&stack0x00000070,5,0,0,0,4,0);
          if (3 < *(uint *)(lVar12 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x58) = in_stack_00000078;
            *(undefined8 *)(lVar12 + 0x50) = in_stack_00000070;
            in_stack_00000060 = 0;
            in_stack_00000068 = 0;
            FUN_027cf91c(&stack0x00000060,5,0,0,0,5,0);
            if (4 < *(uint *)(lVar12 + 0x18)) {
              *(undefined8 *)(lVar12 + 0x68) = in_stack_00000068;
              *(undefined8 *)(lVar12 + 0x60) = in_stack_00000060;
              in_stack_00000050 = 0;
              in_stack_00000058 = 0;
              FUN_027cf91c(&stack0x00000050,5,0,0,0,6,0);
              if (5 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x78) = in_stack_00000058;
                *(undefined8 *)(lVar12 + 0x70) = in_stack_00000050;
                in_stack_00000040 = 0;
                in_stack_00000048 = 0;
                FUN_027cf91c(&stack0x00000040,5,0,0,0,7,0);
                if (6 < *(uint *)(lVar12 + 0x18)) {
                  *(undefined8 *)(lVar12 + 0x88) = in_stack_00000048;
                  *(undefined8 *)(lVar12 + 0x80) = in_stack_00000040;
                  in_stack_00000030 = 0;
                  in_stack_00000038 = 0;
                  FUN_027cf91c(&stack0x00000030,5,0,0,0,8,0);
                  if (7 < *(uint *)(lVar12 + 0x18)) {
                    *(undefined8 *)(lVar12 + 0x98) = in_stack_00000038;
                    *(undefined8 *)(lVar12 + 0x90) = in_stack_00000030;
                    in_stack_00000020 = 0;
                    in_stack_00000028 = 0;
                    FUN_027cf91c(&stack0x00000020,5,0,0,0,9,0);
                    if (8 < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)(lVar12 + 0xa8) = in_stack_00000028;
                      *(undefined8 *)(lVar12 + 0xa0) = in_stack_00000020;
                      in_stack_00000010 = 0;
                      in_stack_00000018 = 0;
                      FUN_027cf91c(&stack0x00000010,5,0,0,0,10,0);
                      if (9 < *(uint *)(lVar12 + 0x18)) {
                        *(undefined8 *)(lVar12 + 0xb8) = in_stack_00000018;
                        *(undefined8 *)(lVar12 + 0xb0) = in_stack_00000010;
                        *(long *)(unaff_x19 + 0x6c0) = lVar12;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (unaff_x19 + 0x6c0,lVar12);
                        FUN_0391c598();
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


