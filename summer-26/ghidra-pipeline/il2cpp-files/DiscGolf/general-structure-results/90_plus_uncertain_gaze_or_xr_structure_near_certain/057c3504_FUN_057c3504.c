/*
FUNCTION_NAME: FUN_057c3504
ENTRY_POINT: 057c3504
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x057c3708) */
/* WARNING: Removing unreachable block (ram,0x057c3764) */
/* WARNING: Removing unreachable block (ram,0x057c3800) */

undefined1  [16] FUN_057c3504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 local_160;
  undefined8 *puStack_158;
  undefined8 local_150;
  long local_f0;
  undefined8 *local_e8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  local_60 = param_2;
  local_58 = param_3;
  if ((DAT_06dc0312 & 1) == 0) {
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
    FUN_02d965b8(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo);
    DAT_06dc0312 = 1;
  }
  puVar3 = Unity_Services_Multiplayer_IModuleOption_TypeInfo;
  puVar2 = Unity_Services_Multiplayer_IModule_TypeInfo;
  puVar1 = OVRPlugin_Quatf___TypeInfo;
  local_48 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar7 = thunk_FUN_02dd3144();
    uVar10 = thunk_FUN_02dfd288(PTR_DAT_06a0e6b0);
    FUN_0544bf54(uVar7,uVar10,0);
    uVar10 = thunk_FUN_02dfd288(UnityEngine_UIElements_IMouseEventInternal_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar7,uVar10);
  }
  local_48 = FUN_037628b4(param_1,*(undefined8 *)Unity_Services_Multiplayer_IModuleRegistry_TypeInfo
                         );
  uVar7 = FUN_0434bdf0(&local_48,*(undefined8 *)puVar3);
  FUN_043545e4(&local_78,uVar7,2,*(undefined8 *)puVar1);
  local_f0 = 0;
  local_e8 = &local_78;
  FUN_0434bc04(&local_160,&local_48,*(undefined8 *)puVar2);
  puVar6 = Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo;
  puVar5 = Unity_Services_Core_Telemetry_Internal_IMetrics_TypeInfo;
  puVar4 = Unity_Multiplayer_Tools_NetStats_IMetricObserver_TypeInfo;
  puVar3 = UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo;
  puVar2 = UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo;
  puVar1 = PTR_DAT_06a0d0a8;
  memcpy(&local_e0,&local_160,0x68);
  local_160 = 0;
  puStack_158 = &local_e0;
  while (uVar8 = FUN_03785ce8(&local_e0,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
    lVar9 = FUN_03785a80(&local_e0,*(undefined8 *)puVar6);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = *(long *)puVar1;
    uVar7 = *(undefined8 *)(lVar9 + 0x40);
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar11);
    }
    FUN_04354b64(&local_78,uVar7,*(undefined8 *)puVar2);
  }
  FUN_051575b8(&local_e0,*(undefined8 *)puVar4);
  puStack_158 = (undefined8 *)uStack_70;
  local_160 = local_78;
  local_150 = local_68;
  auVar12 = FUN_04355430(&local_160,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar12 = FUN_056fb93c(auVar12._0_8_,auVar12._8_8_,&local_60,1,0);
  lVar9 = local_f0;
  FUN_043552c0(local_e8,*(undefined8 *)
                         UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo);
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar9);
  }
  return auVar12;
}


