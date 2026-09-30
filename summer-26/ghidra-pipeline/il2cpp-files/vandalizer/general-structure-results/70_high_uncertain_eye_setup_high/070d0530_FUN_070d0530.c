/*
FUNCTION_NAME: FUN_070d0530
ENTRY_POINT: 070d0530
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_070d0530(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_288 [100];
  undefined4 local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 auStack_208 [72];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_07a5a9bc & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d6de0);
    FUN_031f20f4(OVRPlugin_OVRP_1_82_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_84_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_85_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_86_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_87_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_88_0_TypeInfo);
    DAT_07a5a9bc = 1;
  }
  puVar7 = OVRPlugin_OVRP_1_88_0_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_87_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_85_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  puVar3 = PTR_DAT_075d6de0;
  local_218 = 0;
  local_210 = 0;
  local_220 = 0;
  local_224 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lVar8 = *(long *)(param_1 + 0x28);
  uVar11 = local_220;
  if (lVar8 == 0) {
LAB_070d09ec:
    local_220 = uVar11;
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  iVar1 = *(int *)(lVar8 + 0x20);
  if (iVar1 != 0) {
    uVar11 = 0;
    local_218 = 0;
    local_210 = 0;
    while (0 < iVar1) {
      FUN_04d9b658(&local_1c0,lVar8,*(undefined8 *)puVar5);
      memcpy(&local_e0,&local_1c0,0x70);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      switch((undefined4)local_e0) {
      case 1:
        uVar11 = local_210;
        if ((char)local_218 == '\0') {
          uVar11 = local_210;
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_070d09ec;
          local_1c0 = 0;
          FUN_070d0f60(&local_1c0);
          uVar11 = local_1c0;
          FUN_04bad0f8(&local_218,local_1c0,*(undefined8 *)puVar4);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06ed0c30(&local_1c0,&local_e0,0);
        memcpy(auStack_208,&local_1c0,0x48);
        FUN_070d239c(param_1,auStack_208);
        break;
      case 2:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06ed0d30(&local_1c0,&local_e0,0);
        memcpy(auStack_288,&local_1c0,0x60);
        FUN_070d1a30(param_1,auStack_288);
        break;
      case 3:
        uVar11 = local_210;
        if ((char)local_218 == '\0') {
          uVar11 = local_210;
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_070d09ec;
          local_1c0 = 0;
          FUN_070d0f60(&local_1c0);
          uVar11 = local_1c0;
          FUN_04bad0f8(&local_218,local_1c0,*(undefined8 *)puVar4);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06ed0e20(&local_1c0,&local_e0,0);
        uStack_2a8 = uStack_1b8;
        local_2b0 = local_1c0;
        uStack_298 = uStack_1a8;
        uStack_2a0 = uStack_1b0;
        FUN_070d2600(param_1,&local_2b0);
        break;
      case 4:
        uVar11 = local_210;
        if ((char)local_218 == '\0') {
          uVar11 = local_210;
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_070d09ec;
          local_1c0 = 0;
          FUN_070d0f60(&local_1c0);
          uVar11 = local_1c0;
          FUN_04bad0f8(&local_218,local_1c0,*(undefined8 *)puVar4);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06ed0f58(&local_1c0,&local_e0,0);
        uStack_2c8 = uStack_1b8;
        local_2d0 = local_1c0;
        uStack_2b8 = uStack_1a8;
        uStack_2c0 = uStack_1b0;
        FUN_070d2798(param_1,&local_2d0);
        break;
      case 5:
        uVar11 = local_210;
        if ((char)local_218 == '\0') {
          uVar11 = local_210;
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_070d09ec;
          local_1c0 = 0;
          FUN_070d0f60(&local_1c0);
          uVar11 = local_1c0;
          FUN_04bad0f8(&local_218,local_1c0,*(undefined8 *)puVar4);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06ed1080(&local_1c0,&local_e0,0);
        uStack_2e8 = uStack_1b8;
        local_2f0 = local_1c0;
        uStack_2d8 = uStack_1a8;
        uStack_2e0 = uStack_1b0;
        FUN_070d2818(param_1,&local_2f0);
        break;
      case 6:
        uVar11 = local_210;
        if ((char)local_218 == '\0') {
          uVar11 = local_210;
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_070d09ec;
          local_1c0 = 0;
          FUN_070d0f60(&local_1c0);
          uVar11 = local_1c0;
          FUN_04bad0f8(&local_218,local_1c0,*(undefined8 *)puVar4);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06ed117c(&local_1c0,&local_e0,0);
        uStack_318 = uStack_1b8;
        local_320 = local_1c0;
        uStack_308 = uStack_1a8;
        uStack_310 = uStack_1b0;
        local_300 = local_1a0;
        FUN_070d2898(param_1,&local_320);
        break;
      default:
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 == 0) goto LAB_070d09ec;
        if (*(char *)(lVar8 + 0x3b) != '\0') {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          local_224 = (undefined4)local_e0;
          uVar9 = FUN_05dfee30(&local_224,0);
          memcpy(&local_150,&local_e0,0x70);
          uVar10 = FUN_06ed07e4(&local_150,0);
          uVar9 = FUN_05c8920c(*(undefined8 *)puVar7,uVar9,*(undefined8 *)puVar6,uVar10,0);
          FUN_070d128c(lVar8,uVar9);
        }
      }
      lVar8 = *(long *)(param_1 + 0x28);
      if (lVar8 == 0) goto LAB_070d09ec;
      iVar1 = *(int *)(lVar8 + 0x20);
    }
    local_220 = uVar11;
    if ((char)local_218 != '\0') {
      local_220 = local_210;
      FUN_070d2db8(&local_220);
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


