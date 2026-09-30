/*
FUNCTION_NAME: FUN_057c8658
ENTRY_POINT: 057c8658
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x057c8890) */
/* WARNING: Removing unreachable block (ram,0x057c892c) */
/* WARNING: Removing unreachable block (ram,0x057c89cc) */

undefined1  [16] FUN_057c8658(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_190;
  undefined8 *puStack_188;
  undefined8 local_180;
  long local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  
  if ((DAT_06dc033f & 1) == 0) {
    FUN_02d965b8(Unity_Multiplayer_Tools_NetStats_IMetricDispatcher_TypeInfo);
    FUN_02d965b8(Unity_Multiplayer_Tools_NetStats_IMetricObserver_TypeInfo);
    FUN_02d965b8(Unity_Services_Core_Telemetry_Internal_IMetrics_TypeInfo);
    FUN_02d965b8(Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d0a8);
    FUN_02d965b8(Unity_Services_Multiplayer_IModule_TypeInfo);
    FUN_02d965b8(Unity_Services_Multiplayer_IModuleOption_TypeInfo);
    FUN_02d965b8(Unity_Services_Multiplayer_IModuleRegistry_TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo);
    FUN_02d965b8(OVRPlugin_Quatf___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_WriteMapJson___TypeInfo);
    FUN_02d965b8(System_Net_Http_IMonoHttpClientHandler_TypeInfo);
    DAT_06dc033f = 1;
  }
  puVar3 = Unity_Services_Multiplayer_IModuleRegistry_TypeInfo;
  puVar2 = Unity_Services_Multiplayer_IModuleOption_TypeInfo;
  puVar1 = OVRPlugin_Quatf___TypeInfo;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_80 = 0;
  local_90 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar10 = thunk_FUN_02dd3144();
    uVar13 = thunk_FUN_02dfd288(PTR_DAT_06a0e6b0);
    FUN_0544bf54(uVar10,uVar13,0);
    uVar13 = thunk_FUN_02dfd288(Unity_Services_Multiplayer_IRelayBuilder_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar10,uVar13);
  }
  local_80 = FUN_037628b4(param_1,*(undefined8 *)Unity_Services_Multiplayer_IModuleRegistry_TypeInfo
                         );
  uVar10 = FUN_0434bdf0(&local_80,*(undefined8 *)puVar2);
  FUN_043545e4(&local_78,uVar10,2,*(undefined8 *)puVar1);
  local_120 = 0;
  local_118 = &local_78;
  local_80 = FUN_037628b4(param_1,*(undefined8 *)puVar3);
  FUN_0434bc04(&local_190,&local_80,*(undefined8 *)Unity_Services_Multiplayer_IModule_TypeInfo);
  puVar7 = System_Net_Http_IMonoHttpClientHandler_TypeInfo;
  puVar6 = Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo;
  puVar5 = Unity_Services_Core_Telemetry_Internal_IMetrics_TypeInfo;
  puVar4 = Unity_Multiplayer_Tools_NetStats_IMetricObserver_TypeInfo;
  puVar3 = Unity_Multiplayer_Tools_NetStats_IMetricDispatcher_TypeInfo;
  puVar2 = UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo;
  puVar1 = PTR_DAT_06a0d0a8;
  memcpy(&local_f0,&local_190,0x68);
  local_190 = 0;
  puStack_188 = &local_f0;
  while (uVar11 = FUN_03785ce8(&local_f0,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
    lVar12 = FUN_03785a80(&local_f0,*(undefined8 *)puVar6);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar14 = *(long *)puVar1;
    uVar10 = *(undefined8 *)(lVar12 + 0x40);
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar14);
    }
    FUN_04354b64(&local_78,uVar10,*(undefined8 *)puVar2);
  }
  FUN_051575b8(&local_f0,*(undefined8 *)puVar4);
  puStack_188 = (undefined8 *)uStack_70;
  local_190 = local_78;
  local_180 = local_68;
  uVar10 = UnityEngine_UIElements_BaseSlider<__Il2CppFullySharedGenericType>__OnNavigationMove
                     (&local_190,*(undefined8 *)puVar7);
  uVar8 = local_68._4_4_;
  uVar9 = FUN_057028e0(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar10 = FUN_056fdc34(uVar10,uVar8,uVar9,&local_58,0);
  FUN_057da854(&local_190,uVar10,local_58,0);
  uStack_108 = puStack_188;
  local_110 = local_190;
  local_100 = (undefined4)local_180;
  auVar15 = FUN_038d8080(&local_110,*(undefined8 *)puVar3);
  lVar12 = local_120;
  FUN_043552c0(local_118,
               *(undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo);
  if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar12);
  }
  return auVar15;
}


