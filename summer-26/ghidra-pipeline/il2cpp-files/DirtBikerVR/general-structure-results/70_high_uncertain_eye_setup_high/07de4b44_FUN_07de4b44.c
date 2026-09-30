/*
FUNCTION_NAME: FUN_07de4b44
ENTRY_POINT: 07de4b44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_21
*/


uint FUN_07de4b44(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_0899a18e & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_0_5_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_0_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_101_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_103_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_104_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_105_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_106_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_107_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_108_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_109_0_TypeInfo);
    DAT_0899a18e = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a8 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  lVar10 = FUN_07f6e3c8(param_1,0);
  puVar8 = OVRPlugin_OVRP_1_109_0_TypeInfo;
  puVar7 = OVRPlugin_OVRP_1_108_0_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_107_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_103_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_102_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_101_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_100_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_0_0_TypeInfo;
  if (lVar10 != 0) {
    FUN_04eb08c0(&local_110,lVar10,*(undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo);
    uVar12 = 0;
    local_70 = local_100;
    puStack_78 = puStack_108;
    local_80 = local_110;
    local_110 = 0;
    puStack_108 = &local_80;
    while (uVar11 = FUN_061def08(&local_80,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
      local_88 = local_70;
      uVar9 = FUN_07e26c30(&local_88,0);
      uVar12 = uVar9 ^ uVar12 * 0x18d;
    }
    FUN_061def04(&local_80,*(undefined8 *)puVar2);
    lVar10 = FUN_07f6e418(param_1,0);
    if (lVar10 != 0) {
      FUN_04eb08c0(&local_110,lVar10,*(undefined8 *)puVar8);
      local_90 = local_100;
      puStack_98 = puStack_108;
      local_a0 = local_110;
      local_110 = 0;
      puStack_108 = &local_a0;
      while (uVar11 = FUN_061def08(&local_a0,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
        local_a8 = local_90;
        uVar9 = FUN_07e26c30(&local_a8,0);
        uVar12 = uVar9 ^ uVar12 * 0x18d;
      }
      FUN_061def04(&local_a0,*(undefined8 *)puVar2);
      lVar10 = FUN_07f6e468(param_1,0);
      if (lVar10 != 0) {
        FUN_04e8feac(&local_d0,lVar10,*(undefined8 *)puVar6);
        local_110 = 0;
        puStack_108 = &local_d0;
        while (uVar11 = FUN_061d8968(&local_d0,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
          uStack_d8 = uStack_b8;
          local_e0 = local_c0;
          uVar9 = FUN_07e2c828(&local_e0,0);
          uVar12 = uVar9 ^ uVar12 * 0x18d;
        }
        FUN_061d8964(&local_d0,*(undefined8 *)puVar1);
        lVar10 = FUN_07f6e4b8(param_1,0);
        if (lVar10 != 0) {
          FUN_04d5c3d0(&local_f8,lVar10,*(undefined8 *)puVar7);
          local_110 = 0;
          puStack_108 = &local_f8;
          while (uVar11 = FUN_061a1054(&local_f8,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
            uVar12 = (uint)local_e8 ^ uVar12 * 0x18d;
          }
          FUN_061a1050(&local_f8,*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo);
          return uVar12;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


