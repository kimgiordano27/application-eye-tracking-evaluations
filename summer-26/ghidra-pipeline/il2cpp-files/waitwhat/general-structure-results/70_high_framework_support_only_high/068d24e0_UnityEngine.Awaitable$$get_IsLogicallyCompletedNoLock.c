/*
FUNCTION_NAME: UnityEngine.Awaitable$$get_IsLogicallyCompletedNoLock
ENTRY_POINT: 068d24e0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_Awaitable__get_IsLogicallyCompletedNoLock(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 in_stack_00000088;
  
  *(undefined8 *)(unaff_x21 + 0x20) = in_stack_00000088;
  uStack0000000000000080 = 0;
  FUN_069c0b58(0x3f800000,0x3f800000,&stack0x00000080,0);
  if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x21 + 0x28) = uStack0000000000000080;
    FUN_069c12d0();
    uVar6 = *unaff_x23;
    *(undefined8 *)(unaff_x19 + 0x50) = unaff_x20;
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
    FUN_069c0cb0(lVar7,0);
    lVar8 = FUN_03188b1c(*unaff_x22,2);
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    FUN_069c0b48(0x3f800000,0,0,0x3f800000,0,&stack0x00000068,0);
    if (lVar8 == 0) goto LAB_068d2988;
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000070;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_00000068;
      *(undefined4 *)(lVar8 + 0x30) = in_stack_00000078;
      in_stack_00000050 = 0;
      in_stack_00000058 = 0;
      in_stack_00000060 = 0;
      FUN_069c0b48(0x3f800000,0,0,0x3f800000,0x3f800000,&stack0x00000050,0);
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
        *(undefined4 *)(lVar8 + 0x44) = in_stack_00000060;
        *(undefined8 *)(lVar8 + 0x3c) = in_stack_00000058;
        *(undefined8 *)(lVar8 + 0x34) = in_stack_00000050;
        if (lVar7 != 0) {
          FUN_069c1010(lVar7,lVar8,0);
          lVar8 = FUN_03188b1c(*unaff_x24,2);
          in_stack_00000048 = 0;
          FUN_069c0b58(0x3f800000,0,&stack0x00000048,0);
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) != 0) {
              *(undefined8 *)(lVar8 + 0x20) = in_stack_00000048;
              in_stack_00000040 = 0;
              FUN_069c0b58(0x3f800000,0x3f800000,&stack0x00000040,0);
              if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar8 + 0x28) = in_stack_00000040;
                FUN_069c12d0(lVar7,lVar8,0);
                uVar6 = *unaff_x23;
                *(long *)(unaff_x19 + 0x58) = lVar7;
                lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (uVar6);
                FUN_069c0cb0(lVar7,0);
                lVar8 = FUN_03188b1c(*unaff_x22,2);
                uVar1 = DAT_012e3b90;
                uVar11 = DAT_012e3808;
                in_stack_00000028 = 0;
                in_stack_00000030 = 0;
                in_stack_00000038 = 0;
                FUN_069c0b48(0x3f800000,DAT_012e3808,DAT_012e3b90,0x3f800000,0,&stack0x00000028,0);
                if (lVar8 == 0) goto LAB_068d2988;
                if (*(int *)(lVar8 + 0x18) != 0) {
                  *(undefined8 *)(lVar8 + 0x28) = in_stack_00000030;
                  *(undefined8 *)(lVar8 + 0x20) = in_stack_00000028;
                  *(undefined4 *)(lVar8 + 0x30) = in_stack_00000038;
                  in_stack_00000010 = 0;
                  in_stack_00000018 = 0;
                  in_stack_00000020 = 0;
                  FUN_069c0b48(0x3f800000,uVar11,uVar1,0x3f800000,0x3f800000,&stack0x00000010,0);
                  if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined4 *)(lVar8 + 0x44) = in_stack_00000020;
                    *(undefined8 *)(lVar8 + 0x3c) = in_stack_00000018;
                    *(undefined8 *)(lVar8 + 0x34) = in_stack_00000010;
                    if (lVar7 != 0) {
                      FUN_069c1010(lVar7,lVar8,0);
                      lVar8 = FUN_03188b1c(*unaff_x24,2);
                      in_stack_00000008 = 0;
                      FUN_069c0b58(0x3f800000,0,&stack0x00000008,0);
                      if (lVar8 != 0) {
                        if (*(int *)(lVar8 + 0x18) != 0) {
                          *(undefined8 *)(lVar8 + 0x20) = in_stack_00000008;
                          FUN_069c0b58(0x3f800000,0x3f800000);
                          puVar2 = PTR_DAT_070f43b8;
                          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                            *(undefined8 *)(lVar8 + 0x28) = 0;
                            FUN_069c12d0(lVar7,lVar8,0);
                            uVar6 = NEON_fmov(0x41200000,4);
                            *(long *)(unaff_x19 + 0x60) = lVar7;
                            *(undefined1 *)(unaff_x19 + 0x88) = 1;
                            *(undefined1 *)(unaff_x19 + 0x8a) = 1;
                            *(undefined8 *)(unaff_x19 + 0x6c) = uVar6;
                            *(undefined4 *)(unaff_x19 + 0x8c) = 0x3f000000;
                            uVar6 = FUN_06851b60(0xffffffff,0);
                            lVar8 = *(long *)puVar2;
                            *(undefined1 *)(unaff_x19 + 0x98) = 1;
                            *(undefined8 *)(unaff_x19 + 0x90) = uVar6;
                            *(undefined1 *)(unaff_x19 + 0xcc) = 1;
                            *(undefined4 *)(unaff_x19 + 0x128) = 0xffffffff;
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
                            puVar9 = *(undefined8 **)(lVar7 + 0xb8);
                            uVar6 = *(undefined8 *)puVar2;
                            *(undefined4 *)(unaff_x19 + 0x148) = 0xffffffff;
                            uVar10 = *puVar9;
                            *(undefined4 *)(unaff_x19 + 0x160) = 0xffffffff;
                            *(undefined8 *)(unaff_x19 + 0x130) = uVar10;
                            lVar7 = FUN_03188b1c(uVar6,2);
                            if (DAT_075457d6 == '\0') {
                              FUN_03188a78(PTR_DAT_070c1a80);
                              DAT_075457d6 = '\x01';
                            }
                            puVar2 = PTR_DAT_070c1a80;
                            if (lVar7 == 0) goto LAB_068d2988;
                            if (*(uint *)(lVar7 + 0x18) != 0) {
                              uVar11 = *(undefined4 *)
                                        (*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
                              *(undefined8 *)(lVar7 + 0x20) =
                                   **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
                              *(undefined4 *)(lVar7 + 0x28) = uVar11;
                              puVar4 = OVRPlugin_OverlayShape_TypeInfo;
                              puVar3 = OVRPlugin_OVRP_1_9_0_TypeInfo;
                              if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                uVar11 = *(undefined4 *)
                                          (*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
                                *(undefined8 *)(lVar7 + 0x2c) =
                                     **(undefined8 **)(*(long *)puVar2 + 0xb8);
                                puVar5 = 
                                UnityEngine_Rendering_Universal_PostProcessPass_ShaderConstants_TypeInfo
                                ;
                                *(undefined4 *)(lVar7 + 0x34) = uVar11;
                                puVar2 = OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo;
                                uVar6 = *(undefined8 *)puVar4;
                                *(long *)(unaff_x19 + 0x168) = lVar7;
                                uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                  (uVar6);
                                FUN_04b17294(0,uVar6,1,0,0,*(undefined8 *)puVar3);
                                uVar10 = *(undefined8 *)puVar5;
                                *(undefined8 *)(unaff_x19 + 0x1c8) = uVar6;
                                uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                  (uVar10);
                                FUN_0687abf8(uVar6,0);
                                uVar10 = *(undefined8 *)puVar2;
                                *(undefined8 *)(unaff_x19 + 0x1d0) = uVar6;
                                uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                  (uVar10);
                                FUN_06831f58(uVar6,0);
                                *(undefined8 *)(unaff_x19 + 0x1d8) = uVar6;
                                thunk_FUN_069d3450();
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
LAB_068d2988:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
  }
LAB_068d2984:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


