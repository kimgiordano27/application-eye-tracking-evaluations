/*
FUNCTION_NAME: FUN_068e5508
ENTRY_POINT: 068e5508
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_068e5508(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_075592fe & 1) == 0) {
    FUN_03188a78(System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ReleaseMirrorTextureD3D11_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__SetExplicitTimingMode_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__SetSkyboxOverride_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_Interpreter_RightShiftInstruction_RightShiftUInt64_TypeInfo
                );
    FUN_03188a78(RoomDetails_ChaosEntry_<Start>d__11_TypeInfo);
    DAT_075592fe = 1;
  }
  puVar1 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo;
  if (*(long *)(param_1 + 0x50) == param_2) {
    return;
  }
  plVar8 = *(long **)(param_1 + 0x58);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_068e5614;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_031c0d08(plVar8,*(long *)
                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo
                          ,0);
LAB_068e5614:
    lVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
    FUN_04cd3498(uVar3,param_1,
                 *(undefined8 *)
                  System_Linq_Expressions_Interpreter_RightShiftInstruction_RightShiftUInt64_TypeInfo
                 ,0);
    if (lVar5 == 0) goto LAB_068e58bc;
    FUN_04cd83d4(lVar5,uVar3,*(undefined8 *)OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo);
    plVar8 = *(long **)(param_1 + 0x58);
    if (plVar8 == (long *)0x0) goto LAB_068e58bc;
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_068e56c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar1,1);
LAB_068e56c8:
    lVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVR_OpenVR_IVRCompositor__ReleaseMirrorTextureD3D11_TypeInfo);
    FUN_04cd3498(uVar3,param_1,*(undefined8 *)RoomDetails_ChaosEntry_<Start>d__11_TypeInfo,0);
    if (lVar5 == 0) goto LAB_068e58bc;
    FUN_04cd83d4(lVar5,uVar3,*(undefined8 *)OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
  }
  uVar3 = *(undefined8 *)puVar1;
  *(long *)(param_1 + 0x50) = param_2;
  uVar3 = thunk_FUN_031c3cac(param_2,uVar3);
  uVar4 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  thunk_FUN_031c3cac(param_2,uVar4);
  plVar8 = *(long **)(param_1 + 0x58);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_068e5798;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar1,0);
LAB_068e5798:
    lVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
    FUN_04cd3498(uVar3,param_1,
                 *(undefined8 *)
                  System_Linq_Expressions_Interpreter_RightShiftInstruction_RightShiftUInt64_TypeInfo
                 ,0);
    if (lVar5 != 0) {
      FUN_04cd8398(lVar5,uVar3,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__SetExplicitTimingMode_TypeInfo);
      plVar8 = *(long **)(param_1 + 0x58);
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_068e584c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar1,1);
LAB_068e584c:
        lVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)
                            OVR_OpenVR_IVRCompositor__ReleaseMirrorTextureD3D11_TypeInfo);
        FUN_04cd3498(uVar3,param_1,*(undefined8 *)RoomDetails_ChaosEntry_<Start>d__11_TypeInfo,0);
        if (lVar5 != 0) {
          FUN_04cd8398(lVar5,uVar3,
                       *(undefined8 *)OVR_OpenVR_IVRCompositor__SetSkyboxOverride_TypeInfo);
          goto LAB_068e58a8;
        }
      }
    }
LAB_068e58bc:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
LAB_068e58a8:
  FUN_068e5390(param_1);
  return;
}


