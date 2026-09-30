/*
FUNCTION_NAME: FUN_057c2e28
ENTRY_POINT: 057c2e28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 134
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x057c31d0) */
/* WARNING: Removing unreachable block (ram,0x057c32b0) */
/* WARNING: Removing unreachable block (ram,0x057c30d4) */
/* WARNING: Removing unreachable block (ram,0x057c329c) */
/* WARNING: Removing unreachable block (ram,0x057c3388) */
/* WARNING: Removing unreachable block (ram,0x057c337c) */
/* WARNING: Removing unreachable block (ram,0x057c3384) */

undefined1  [16] FUN_057c2e28(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined8 local_220;
  undefined8 *puStack_218;
  undefined8 local_210;
  long local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_06dc0311 & 1) == 0) {
    FUN_02d965b8(Unity_Multiplayer_Tools_NetStats_IMetricDispatcher_TypeInfo);
    FUN_02d965b8(Unity_Multiplayer_Tools_NetStats_IMetricObserver_TypeInfo);
    FUN_02d965b8(OVRFaceExpressions_FaceExpression___TypeInfo);
    FUN_02d965b8(Unity_Services_Core_Telemetry_Internal_IMetrics_TypeInfo);
    FUN_02d965b8(OVRHaptics_OVRHapticsChannel___TypeInfo);
    FUN_02d965b8(Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo);
    FUN_02d965b8(OVRHaptics_OVRHapticsOutput___TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d0a8);
    FUN_02d965b8(Unity_Services_Multiplayer_IModule_TypeInfo);
    FUN_02d965b8(OVRInput_HapticInfo___TypeInfo);
    FUN_02d965b8(Unity_Services_Multiplayer_IModuleOption_TypeInfo);
    FUN_02d965b8(Unity_Services_Multiplayer_IModuleProvider_TypeInfo);
    FUN_02d965b8(OVRInput_OpenVRControllerDetails___TypeInfo);
    FUN_02d965b8(Unity_Services_Multiplayer_IModuleRegistry_TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo);
    FUN_02d965b8(OVRPlugin_Quatf___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_WriteMapJson___TypeInfo);
    FUN_02d965b8(System_Net_Http_IMonoHttpClientHandler_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a00f70);
    DAT_06dc0311 = 1;
  }
  puVar2 = Unity_Services_Multiplayer_IModuleRegistry_TypeInfo;
  puVar1 = Unity_Services_Multiplayer_IModuleOption_TypeInfo;
  puVar15 = OVRPlugin_Quatf___TypeInfo;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar11 = thunk_FUN_02dd3144();
    puVar15 = PTR_DAT_06a0e6b0;
  }
  else {
    if (param_2 != 0) {
      local_a0 = FUN_037628b4(param_1,*(undefined8 *)
                                       Unity_Services_Multiplayer_IModuleRegistry_TypeInfo);
      uVar11 = FUN_0434bdf0(&local_a0,*(undefined8 *)puVar1);
      FUN_043545e4(&local_78,uVar11,2,*(undefined8 *)puVar15);
      local_1b0 = 0;
      local_1a8 = &local_78;
      local_a0 = FUN_037628b4(param_1,*(undefined8 *)puVar2);
      FUN_0434bc04(&local_220,&local_a0,*(undefined8 *)Unity_Services_Multiplayer_IModule_TypeInfo);
      puVar8 = Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo;
      puVar7 = Unity_Services_Core_Telemetry_Internal_IMetrics_TypeInfo;
      puVar6 = Unity_Multiplayer_Tools_NetStats_IMetricObserver_TypeInfo;
      puVar5 = OVRInput_OpenVRControllerDetails___TypeInfo;
      puVar4 = OVRHaptics_OVRHapticsOutput___TypeInfo;
      puVar3 = OVRHaptics_OVRHapticsChannel___TypeInfo;
      puVar2 = UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo;
      puVar1 = PTR_DAT_06a0d0a8;
      memcpy(&local_110,&local_220,0x68);
      local_220 = 0;
      puStack_218 = &local_110;
      while (uVar12 = FUN_03785ce8(&local_110,*(undefined8 *)puVar7), (uVar12 & 1) != 0) {
        lVar13 = FUN_03785a80(&local_110,*(undefined8 *)puVar8);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar11 = *(undefined8 *)(lVar13 + 0x40);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar1);
        }
        FUN_04354b64(&local_78,uVar11,*(undefined8 *)puVar2);
      }
      FUN_051575b8(&local_110,*(undefined8 *)puVar6);
      local_118 = FUN_03762878(param_2,*(undefined8 *)puVar5);
      uVar11 = FUN_0434b654(&local_118,
                            *(undefined8 *)Unity_Services_Multiplayer_IModuleProvider_TypeInfo);
      local_220 = 0;
      puStack_218 = (undefined8 *)0x0;
      local_210 = 0;
      FUN_043545e4(&local_220,uVar11,2,*(undefined8 *)puVar15);
      local_80 = local_210;
      uStack_88 = puStack_218;
      local_90 = local_220;
      local_118 = FUN_03762878(param_2,*(undefined8 *)puVar5);
      FUN_0434b468(&local_220,&local_118,*(undefined8 *)OVRInput_HapticInfo___TypeInfo);
      memcpy(&local_180,&local_220,0x68);
      local_220 = 0;
      puStack_218 = &local_180;
      while (uVar12 = FUN_05159700(&local_180,*(undefined8 *)puVar3),
            puVar15 = UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo,
            (uVar12 & 1) != 0) {
        uVar11 = FUN_05159a18(&local_180,*(undefined8 *)puVar4);
        FUN_04354b64(&local_90,uVar11,*(undefined8 *)puVar2);
      }
      FUN_05155b44(&local_180,*(undefined8 *)OVRFaceExpressions_FaceExpression___TypeInfo);
      puVar1 = System_Net_Http_IMonoHttpClientHandler_TypeInfo;
      puStack_218 = (undefined8 *)uStack_70;
      local_220 = local_78;
      local_210 = local_68;
      uVar11 = UnityEngine_UIElements_BaseSlider<__Il2CppFullySharedGenericType>__OnNavigationMove
                         (&local_220,*(undefined8 *)System_Net_Http_IMonoHttpClientHandler_TypeInfo)
      ;
      uVar10 = local_68._4_4_;
      puStack_218 = (undefined8 *)uStack_88;
      local_220 = local_90;
      local_210 = local_80;
      uVar14 = UnityEngine_UIElements_BaseSlider<__Il2CppFullySharedGenericType>__OnNavigationMove
                         (&local_220,*(undefined8 *)puVar1);
      uVar9 = local_80._4_4_;
      if (*(int *)(*(long *)PTR_DAT_06a00f70 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar11 = FUN_0577f944(uVar11,uVar10,uVar14,uVar9,&local_98,0);
      FUN_057da854(&local_220,uVar11,local_98,0);
      uStack_198 = puStack_218;
      local_1a0 = local_220;
      local_190 = (undefined4)local_210;
      auVar16 = FUN_038d8080(&local_1a0,
                             *(undefined8 *)
                              Unity_Multiplayer_Tools_NetStats_IMetricDispatcher_TypeInfo);
      FUN_043552c0(&local_90,*(undefined8 *)puVar15);
      lVar13 = local_1b0;
      FUN_043552c0(local_1a8,*(undefined8 *)puVar15);
      if (lVar13 == 0) {
        return auVar16;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar13);
    }
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar11 = thunk_FUN_02dd3144();
    puVar15 = OVRPlugin_AppPerfFrameStats___TypeInfo;
  }
  uVar14 = thunk_FUN_02dfd288(puVar15);
  FUN_0544bf54(uVar11,uVar14,0);
  uVar14 = thunk_FUN_02dfd288(UnityEngine_UIElements_IMouseEvent_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar11,uVar14);
}


