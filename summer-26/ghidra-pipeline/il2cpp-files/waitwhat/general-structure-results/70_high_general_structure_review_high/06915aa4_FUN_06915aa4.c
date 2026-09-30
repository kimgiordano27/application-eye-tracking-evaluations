/*
FUNCTION_NAME: FUN_06915aa4
ENTRY_POINT: 06915aa4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_2
*/


void FUN_06915aa4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  
  if ((bRam0000000007559515 & 1) == 0) {
    FUN_03188a78(System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt32_TypeInfo);
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(Best_HTTP_Shared_Extensions_Timer_TimerImplementation_TypeInfo);
    FUN_03188a78(System_Threading_Timer_Scheduler_TypeInfo);
    FUN_03188a78(System_Threading_Timer_TimerComparer_TypeInfo);
    FUN_03188a78(System_Net_TimerThread_Callback_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__CompositorBringToFront_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ReleaseMirrorTextureD3D11_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__CompositorDumpImages_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ForceInterleavedReprojectionOn_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo);
    bRam0000000007559515 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar2 = *(long *)PTR_DAT_070c1b68;
    if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar3 = FUN_069d8404(param_2,0,0);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    puVar1 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo;
    plVar4 = (long *)thunk_FUN_031c3cac(param_2,*(undefined8 *)
                                                 System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo
                                       );
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      lVar2 = *(long *)puVar1;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06915c44;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar4,lVar2,0);
LAB_06915c44:
      lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
      FUN_04cd3498(uVar6,param_1,*(undefined8 *)System_Threading_Timer_TimerComparer_TypeInfo,0);
      if (lVar2 == 0) goto LAB_06915ee0;
      FUN_04cd83d4(lVar2,uVar6,*(undefined8 *)OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo);
      lVar7 = *plVar4;
      lVar2 = *(long *)puVar1;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_06915cf0;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar4,lVar2,1);
LAB_06915cf0:
      lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVR_OpenVR_IVRCompositor__ReleaseMirrorTextureD3D11_TypeInfo
                        );
      FUN_04cd3498(uVar6,param_1,*(undefined8 *)System_Net_TimerThread_Callback_TypeInfo,0);
      if (lVar2 == 0) goto LAB_06915ee0;
      FUN_04cd83d4(lVar2,uVar6,*(undefined8 *)OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
    }
    puVar1 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt32_TypeInfo;
    plVar4 = (long *)thunk_FUN_031c3cac(param_2,*(undefined8 *)
                                                 System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt32_TypeInfo
                                       );
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      lVar2 = *(long *)puVar1;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06915dc8;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar4,lVar2,0);
LAB_06915dc8:
      lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVR_OpenVR_IVRCompositor__CompositorBringToFront_TypeInfo);
      FUN_04cd3498(uVar6,param_1,
                   *(undefined8 *)Best_HTTP_Shared_Extensions_Timer_TimerImplementation_TypeInfo,0);
      if (lVar2 != 0) {
        FUN_04cd83d4(lVar2,uVar6,
                     *(undefined8 *)
                      OVR_OpenVR_IVRCompositor__ForceInterleavedReprojectionOn_TypeInfo);
        lVar7 = *plVar4;
        lVar2 = *(long *)puVar1;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar2) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_06915e74;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar4,lVar2,1);
LAB_06915e74:
        lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)OVR_OpenVR_IVRCompositor__CompositorDumpImages_TypeInfo);
        FUN_04cd3498(uVar6,param_1,*(undefined8 *)System_Threading_Timer_Scheduler_TypeInfo,0);
        if (lVar2 != 0) {
          FUN_04cd83d4(lVar2,uVar6,
                       *(undefined8 *)OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo);
          return;
        }
      }
LAB_06915ee0:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  return;
}


