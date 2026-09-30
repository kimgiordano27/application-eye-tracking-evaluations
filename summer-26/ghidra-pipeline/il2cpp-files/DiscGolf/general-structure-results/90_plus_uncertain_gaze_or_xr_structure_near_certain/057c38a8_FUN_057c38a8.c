/*
FUNCTION_NAME: FUN_057c38a8
ENTRY_POINT: 057c38a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x057c3ae8) */
/* WARNING: Removing unreachable block (ram,0x057c3bac) */
/* WARNING: Removing unreachable block (ram,0x057c3c6c) */
/* WARNING: Removing unreachable block (ram,0x057c3ba4) */

undefined1  [16] FUN_057c38a8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_190;
  undefined8 *puStack_188;
  undefined8 local_180;
  long local_120;
  undefined8 *local_118;
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
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *puVar13;
  
  if ((DAT_06dc0313 & 1) == 0) {
    FUN_02d965b8(Unity_Multiplayer_Tools_NetStats_IMetricObserver_TypeInfo);
    FUN_02d965b8(Unity_Services_Core_Telemetry_Internal_IMetrics_TypeInfo);
    FUN_02d965b8(Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d0a8);
    FUN_02d965b8(Unity_Services_Multiplayer_IModule_TypeInfo);
    FUN_02d965b8(Unity_Services_Multiplayer_IModuleOption_TypeInfo);
    FUN_02d965b8(Unity_Services_Multiplayer_IModuleRegistry_TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_ovrAvatar2GazeTarget___TypeInfo);
    FUN_02d965b8(OVRPlugin_Quatf___TypeInfo);
    FUN_02d965b8(Microsoft_CSharp_RuntimeBinder_Syntax_NameTable_Entry___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo);
    FUN_02d965b8(System_Net_CommandStream_PipelineEntry___TypeInfo);
    DAT_06dc0313 = 1;
  }
  puVar2 = Unity_Services_Multiplayer_IModuleOption_TypeInfo;
  puVar1 = Unity_Services_Multiplayer_IModule_TypeInfo;
  puVar13 = OVRPlugin_Quatf___TypeInfo;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
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
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar9 = thunk_FUN_02dd3144();
    puVar13 = PTR_DAT_06a0e6b0;
  }
  else {
    if (param_2 != 0) {
      local_68 = FUN_037628b4(param_1,*(undefined8 *)
                                       Unity_Services_Multiplayer_IModuleRegistry_TypeInfo);
      uVar9 = FUN_0434bdf0(&local_68,*(undefined8 *)puVar2);
      FUN_043545e4(&local_80,uVar9,2,*(undefined8 *)puVar13);
      local_120 = 0;
      local_118 = &local_80;
      FUN_0434bc04(&local_190,&local_68,*(undefined8 *)puVar1);
      puVar8 = Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo;
      puVar7 = Unity_Services_Core_Telemetry_Internal_IMetrics_TypeInfo;
      puVar6 = Unity_Multiplayer_Tools_NetStats_IMetricObserver_TypeInfo;
      puVar5 = Microsoft_CSharp_RuntimeBinder_Syntax_NameTable_Entry___TypeInfo;
      puVar4 = UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo;
      puVar3 = UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo;
      puVar2 = System_Net_CommandStream_PipelineEntry___TypeInfo;
      puVar1 = Oculus_Avatar2_CAPI_ovrAvatar2GazeTarget___TypeInfo;
      puVar13 = PTR_DAT_06a0d0a8;
      memcpy(&local_110,&local_190,0x68);
      local_190 = 0;
      puStack_188 = &local_110;
      while (uVar10 = FUN_03785ce8(&local_110,*(undefined8 *)puVar7), (uVar10 & 1) != 0) {
        lVar11 = FUN_03785a80(&local_110,*(undefined8 *)puVar8);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar14 = *(long *)puVar13;
        uVar9 = *(undefined8 *)(lVar11 + 0x40);
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar14);
        }
        FUN_04354b64(&local_80,uVar9,*(undefined8 *)puVar3);
      }
      FUN_051575b8(&local_110,*(undefined8 *)puVar6);
      FUN_03763764(&local_190,param_2,2,*(undefined8 *)puVar2);
      local_90 = local_180;
      puStack_98 = puStack_188;
      local_a0 = local_190;
      puStack_188 = (undefined8 *)uStack_78;
      local_190 = local_80;
      local_180 = local_70;
      auVar15 = FUN_04355430(&local_190,*(undefined8 *)puVar4);
      puStack_188 = puStack_98;
      local_190 = local_a0;
      local_180 = local_90;
      auVar16 = FUN_0434fb68(&local_190,*(undefined8 *)puVar5);
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      auVar15 = FUN_056fb93c(auVar15._0_8_,auVar15._8_8_,auVar16._0_8_,auVar16._8_8_,0);
      FUN_0434f9f8(&local_a0,*(undefined8 *)puVar1);
      lVar11 = local_120;
      FUN_043552c0(local_118,
                   *(undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo)
      ;
      if (lVar11 == 0) {
        return auVar15;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar11);
    }
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar9 = thunk_FUN_02dd3144();
    puVar13 = UnityEngine_EventSystems_IMoveHandler_TypeInfo;
  }
  uVar12 = thunk_FUN_02dfd288(puVar13);
  FUN_0544bf54(uVar9,uVar12,0);
  uVar12 = thunk_FUN_02dfd288(
                             UnityEngine_XR_Interaction_Toolkit_Filtering_IMultiPokeStateDataProvider_TypeInfo
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar9,uVar12);
}


