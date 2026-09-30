/*
FUNCTION_NAME: FUN_068d22e0
ENTRY_POINT: 068d22e0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_068d22e0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar4 = PTR_DAT_0711c310;
  puVar2 = PTR_DAT_07119880;
  if ((DAT_07559256 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f43b8);
    FUN_03188a78(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Universal_PostProcessPass_ShaderConstants_TypeInfo);
    FUN_03188a78(PTR_DAT_07119878);
    FUN_03188a78(PTR_DAT_07119880);
    FUN_03188a78(PTR_DAT_0711c310);
    FUN_03188a78(PTR_DAT_070c1c20);
    DAT_07559256 = 1;
  }
  uVar6 = DAT_012e2130;
  *(undefined4 *)(param_1 + 0x20) = 0x3ba3d70a;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = 0x41200000;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x34) = 1;
  uVar6 = FUN_06985ee0(0,0x3f800000,0x3f800000,0x3f800000,0);
  uVar9 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined1 *)(param_1 + 0x48) = 1;
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar9);
  FUN_069c0cb0(lVar7,0);
  lVar8 = FUN_03188b1c(*(undefined8 *)puVar2,2);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_069c0b48(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0,&local_68,0);
  if (lVar8 == 0) goto LAB_068d2988;
  if (*(int *)(lVar8 + 0x18) != 0) {
    *(undefined8 *)(lVar8 + 0x28) = uStack_60;
    *(undefined8 *)(lVar8 + 0x20) = local_68;
    *(undefined4 *)(lVar8 + 0x30) = local_58;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    FUN_069c0b48(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3f800000,&local_80,0);
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
      *(undefined4 *)(lVar8 + 0x44) = local_70;
      *(undefined8 *)(lVar8 + 0x3c) = uStack_78;
      *(undefined8 *)(lVar8 + 0x34) = local_80;
      puVar3 = PTR_DAT_07119878;
      if (lVar7 != 0) {
        FUN_069c1010(lVar7,lVar8,0);
        lVar8 = FUN_03188b1c(*(undefined8 *)puVar3,2);
        local_88 = 0;
        FUN_069c0b58(0x3f800000,0,&local_88,0);
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x18) != 0) {
            *(undefined8 *)(lVar8 + 0x20) = local_88;
            local_90 = 0;
            FUN_069c0b58(0x3f800000,0x3f800000,&local_90,0);
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar8 + 0x28) = local_90;
              FUN_069c12d0(lVar7,lVar8,0);
              uVar6 = *(undefined8 *)puVar4;
              *(long *)(param_1 + 0x50) = lVar7;
              lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (uVar6);
              FUN_069c0cb0(lVar7,0);
              lVar8 = FUN_03188b1c(*(undefined8 *)puVar2,2);
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = 0;
              FUN_069c0b48(0x3f800000,0,0,0x3f800000,0,&local_a8,0);
              if (lVar8 == 0) goto LAB_068d2988;
              if (*(int *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(lVar8 + 0x28) = uStack_a0;
                *(undefined8 *)(lVar8 + 0x20) = local_a8;
                *(undefined4 *)(lVar8 + 0x30) = local_98;
                local_c0 = 0;
                uStack_b8 = 0;
                local_b0 = 0;
                FUN_069c0b48(0x3f800000,0,0,0x3f800000,0x3f800000,&local_c0,0);
                if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined4 *)(lVar8 + 0x44) = local_b0;
                  *(undefined8 *)(lVar8 + 0x3c) = uStack_b8;
                  *(undefined8 *)(lVar8 + 0x34) = local_c0;
                  if (lVar7 != 0) {
                    FUN_069c1010(lVar7,lVar8,0);
                    lVar8 = FUN_03188b1c(*(undefined8 *)puVar3,2);
                    local_c8 = 0;
                    FUN_069c0b58(0x3f800000,0,&local_c8,0);
                    if (lVar8 != 0) {
                      if (*(int *)(lVar8 + 0x18) != 0) {
                        *(undefined8 *)(lVar8 + 0x20) = local_c8;
                        local_d0 = 0;
                        FUN_069c0b58(0x3f800000,0x3f800000,&local_d0,0);
                        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar8 + 0x28) = local_d0;
                          FUN_069c12d0(lVar7,lVar8,0);
                          uVar6 = *(undefined8 *)puVar4;
                          *(long *)(param_1 + 0x58) = lVar7;
                          lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                            (uVar6);
                          FUN_069c0cb0(lVar7,0);
                          lVar8 = FUN_03188b1c(*(undefined8 *)puVar2,2);
                          uVar1 = DAT_012e3b90;
                          uVar11 = DAT_012e3808;
                          local_e8 = 0;
                          uStack_e0 = 0;
                          local_d8 = 0;
                          FUN_069c0b48(0x3f800000,DAT_012e3808,DAT_012e3b90,0x3f800000,0,&local_e8,0
                                      );
                          if (lVar8 == 0) goto LAB_068d2988;
                          if (*(int *)(lVar8 + 0x18) != 0) {
                            *(undefined8 *)(lVar8 + 0x28) = uStack_e0;
                            *(undefined8 *)(lVar8 + 0x20) = local_e8;
                            *(undefined4 *)(lVar8 + 0x30) = local_d8;
                            local_100 = 0;
                            uStack_f8 = 0;
                            local_f0 = 0;
                            FUN_069c0b48(0x3f800000,uVar11,uVar1,0x3f800000,0x3f800000,&local_100,0)
                            ;
                            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                              *(undefined4 *)(lVar8 + 0x44) = local_f0;
                              *(undefined8 *)(lVar8 + 0x3c) = uStack_f8;
                              *(undefined8 *)(lVar8 + 0x34) = local_100;
                              if (lVar7 != 0) {
                                FUN_069c1010(lVar7,lVar8,0);
                                lVar8 = FUN_03188b1c(*(undefined8 *)puVar3,2);
                                local_108 = 0;
                                FUN_069c0b58(0x3f800000,0,&local_108,0);
                                if (lVar8 != 0) {
                                  if (*(int *)(lVar8 + 0x18) != 0) {
                                    *(undefined8 *)(lVar8 + 0x20) = local_108;
                                    local_110 = 0;
                                    FUN_069c0b58(0x3f800000,0x3f800000,&local_110,0);
                                    puVar2 = PTR_DAT_070f43b8;
                                    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                                      *(undefined8 *)(lVar8 + 0x28) = local_110;
                                      FUN_069c12d0(lVar7,lVar8,0);
                                      uVar6 = NEON_fmov(0x41200000,4);
                                      *(long *)(param_1 + 0x60) = lVar7;
                                      *(undefined1 *)(param_1 + 0x88) = 1;
                                      *(undefined1 *)(param_1 + 0x8a) = 1;
                                      *(undefined8 *)(param_1 + 0x6c) = uVar6;
                                      *(undefined4 *)(param_1 + 0x8c) = 0x3f000000;
                                      uVar6 = FUN_06851b60(0xffffffff,0);
                                      lVar8 = *(long *)puVar2;
                                      *(undefined1 *)(param_1 + 0x98) = 1;
                                      *(undefined8 *)(param_1 + 0x90) = uVar6;
                                      *(undefined1 *)(param_1 + 0xcc) = 1;
                                      *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
                                      lVar7 = *(long *)(lVar8 + 0x38);
                                      if (lVar7 == 0) {
                                        FUN_031c0a30(lVar8);
                                        lVar7 = *(long *)(lVar8 + 0x38);
                                      }
                                      lVar7 = *(long *)(lVar7 + 0x10);
                                      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                                        lVar7 = FUN_031c09d4();
                                      }
                                      if (*(int *)(lVar7 + 0xe4) == 0) {
                                        thunk_FUN_031e5338();
                                      }
                                      puVar2 = PTR_DAT_070c1c20;
                                      lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
                                      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                                        lVar7 = FUN_031c09d4();
                                      }
                                      puVar10 = *(undefined8 **)(lVar7 + 0xb8);
                                      uVar6 = *(undefined8 *)puVar2;
                                      *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
                                      uVar9 = *puVar10;
                                      *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
                                      *(undefined8 *)(param_1 + 0x130) = uVar9;
                                      lVar7 = FUN_03188b1c(uVar6,2);
                                      if (DAT_075457d6 == '\0') {
                                        FUN_03188a78(PTR_DAT_070c1a80);
                                        DAT_075457d6 = '\x01';
                                      }
                                      puVar2 = PTR_DAT_070c1a80;
                                      if (lVar7 == 0) goto LAB_068d2988;
                                      if (*(uint *)(lVar7 + 0x18) != 0) {
                                        uVar11 = *(undefined4 *)
                                                  (*(undefined8 **)
                                                    (*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
                                        *(undefined8 *)(lVar7 + 0x20) =
                                             **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
                                        *(undefined4 *)(lVar7 + 0x28) = uVar11;
                                        puVar3 = OVRPlugin_OverlayShape_TypeInfo;
                                        puVar4 = OVRPlugin_OVRP_1_9_0_TypeInfo;
                                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                          uVar11 = *(undefined4 *)
                                                    (*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
                                          *(undefined8 *)(lVar7 + 0x2c) =
                                               **(undefined8 **)(*(long *)puVar2 + 0xb8);
                                          puVar5 = 
                                          UnityEngine_Rendering_Universal_PostProcessPass_ShaderConstants_TypeInfo
                                          ;
                                          *(undefined4 *)(lVar7 + 0x34) = uVar11;
                                          puVar2 = 
                                          OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo;
                                          uVar6 = *(undefined8 *)puVar3;
                                          *(long *)(param_1 + 0x168) = lVar7;
                                          uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                          FUN_04b17294(0,uVar6,1,0,0,*(undefined8 *)puVar4);
                                          uVar9 = *(undefined8 *)puVar5;
                                          *(undefined8 *)(param_1 + 0x1c8) = uVar6;
                                          uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                          FUN_0687abf8(uVar6,0);
                                          uVar9 = *(undefined8 *)puVar2;
                                          *(undefined8 *)(param_1 + 0x1d0) = uVar6;
                                          uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                          FUN_06831f58(uVar6,0);
                                          *(undefined8 *)(param_1 + 0x1d8) = uVar6;
                                          thunk_FUN_069d3450(param_1,0);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_068d2984;
                                }
                              }
                              goto LAB_068d2988;
                            }
                          }
                        }
                      }
                      goto LAB_068d2984;
                    }
                  }
                  goto LAB_068d2988;
                }
              }
            }
          }
          goto LAB_068d2984;
        }
      }
LAB_068d2988:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
LAB_068d2984:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


