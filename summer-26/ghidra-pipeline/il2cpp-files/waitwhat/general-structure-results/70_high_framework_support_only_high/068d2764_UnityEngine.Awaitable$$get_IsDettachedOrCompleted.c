/*
FUNCTION_NAME: UnityEngine.Awaitable$$get_IsDettachedOrCompleted
ENTRY_POINT: 068d2764
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_Awaitable__get_IsDettachedOrCompleted(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int in_w8;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar8;
  long unaff_x21;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 in_stack_00000008;
  
  if (in_w8 != 0) {
    *(undefined8 *)(unaff_x21 + 0x20) = in_stack_00000008;
    FUN_069c0b58(0x3f800000,0x3f800000);
    puVar1 = PTR_DAT_070f43b8;
    if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(unaff_x21 + 0x28) = 0;
      FUN_069c12d0();
      uVar9 = NEON_fmov(0x41200000,4);
      *(undefined8 *)(unaff_x19 + 0x60) = unaff_x20;
      *(undefined1 *)(unaff_x19 + 0x88) = 1;
      *(undefined1 *)(unaff_x19 + 0x8a) = 1;
      *(undefined8 *)(unaff_x19 + 0x6c) = uVar9;
      *(undefined4 *)(unaff_x19 + 0x8c) = 0x3f000000;
      uVar9 = FUN_06851b60(0xffffffff,0);
      lVar8 = *(long *)puVar1;
      *(undefined1 *)(unaff_x19 + 0x98) = 1;
      *(undefined8 *)(unaff_x19 + 0x90) = uVar9;
      *(undefined1 *)(unaff_x19 + 0xcc) = 1;
      *(undefined4 *)(unaff_x19 + 0x128) = 0xffffffff;
      lVar5 = *(long *)(lVar8 + 0x38);
      if (lVar5 == 0) {
        FUN_031c0a30(lVar8);
        lVar5 = *(long *)(lVar8 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      puVar1 = PTR_DAT_070c1c20;
      lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      puVar6 = *(undefined8 **)(lVar5 + 0xb8);
      uVar9 = *(undefined8 *)puVar1;
      *(undefined4 *)(unaff_x19 + 0x148) = 0xffffffff;
      uVar7 = *puVar6;
      *(undefined4 *)(unaff_x19 + 0x160) = 0xffffffff;
      *(undefined8 *)(unaff_x19 + 0x130) = uVar7;
      lVar5 = FUN_03188b1c(uVar9,2);
      if (DAT_075457d6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457d6 = '\x01';
      }
      puVar1 = PTR_DAT_070c1a80;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar5 + 0x18) != 0) {
        uVar10 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
        *(undefined8 *)(lVar5 + 0x20) = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
        *(undefined4 *)(lVar5 + 0x28) = uVar10;
        puVar3 = OVRPlugin_OverlayShape_TypeInfo;
        puVar2 = OVRPlugin_OVRP_1_9_0_TypeInfo;
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
          uVar10 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar1 + 0xb8) + 1);
          *(undefined8 *)(lVar5 + 0x2c) = **(undefined8 **)(*(long *)puVar1 + 0xb8);
          puVar4 = UnityEngine_Rendering_Universal_PostProcessPass_ShaderConstants_TypeInfo;
          *(undefined4 *)(lVar5 + 0x34) = uVar10;
          puVar1 = OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo;
          uVar9 = *(undefined8 *)puVar3;
          *(long *)(unaff_x19 + 0x168) = lVar5;
          uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (uVar9);
          FUN_04b17294(0,uVar9,1,0,0,*(undefined8 *)puVar2);
          uVar7 = *(undefined8 *)puVar4;
          *(undefined8 *)(unaff_x19 + 0x1c8) = uVar9;
          uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (uVar7);
          FUN_0687abf8(uVar9,0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(unaff_x19 + 0x1d0) = uVar9;
          uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (uVar7);
          FUN_06831f58(uVar9,0);
          *(undefined8 *)(unaff_x19 + 0x1d8) = uVar9;
          thunk_FUN_069d3450();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


