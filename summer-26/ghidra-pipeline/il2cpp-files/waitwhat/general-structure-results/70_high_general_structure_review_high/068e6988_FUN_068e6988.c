/*
FUNCTION_NAME: FUN_068e6988
ENTRY_POINT: 068e6988
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_068e6988(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_07559302 & 1) == 0) {
    FUN_03188a78(UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__CompositorBringToFront_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ReleaseMirrorTextureD3D11_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__CompositorDumpImages_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ForceInterleavedReprojectionOn_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo);
    FUN_03188a78(RoomInfoPanel_<>c__DisplayClass39_1_TypeInfo);
    FUN_03188a78(RoomInfoPanel_<Start>d__32_TypeInfo);
    FUN_03188a78(RoomMeshAnchor_<GenerateRoomMesh>d__15_TypeInfo);
    FUN_03188a78(Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6_TypeInfo);
    DAT_07559302 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 != (long *)0x0) {
    lVar2 = *(long *)PTR_DAT_070c1b68;
    if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar2 + 0x130)) {
      return;
    }
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2) {
      return;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar3 = FUN_069d69b8(plVar7,0,0);
    puVar1 = UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo;
    if ((uVar3 & 1) == 0) {
      return;
    }
    plVar7 = *(long **)(param_1 + 0x48);
    if (plVar7 != (long *)0x0) {
      lVar2 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_068e6b18;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_031c0d08(plVar7,*(long *)
                                    UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo,0);
LAB_068e6b18:
      lVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVR_OpenVR_IVRCompositor__CompositorBringToFront_TypeInfo);
      FUN_04cd3498(uVar5,param_1,*(undefined8 *)RoomInfoPanel_<>c__DisplayClass39_1_TypeInfo,0);
      if (lVar2 == 0) goto UnityEngine_RectTransform__GetParentSize;
      FUN_04cd83d4(lVar2,uVar5,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__ForceInterleavedReprojectionOn_TypeInfo)
      ;
      plVar7 = *(long **)(param_1 + 0x48);
      if (plVar7 == (long *)0x0) goto UnityEngine_RectTransform__GetParentSize;
      lVar2 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_068e6bcc;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar1,1);
LAB_068e6bcc:
      lVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVR_OpenVR_IVRCompositor__CompositorDumpImages_TypeInfo);
      FUN_04cd3498(uVar5,param_1,*(undefined8 *)RoomMeshAnchor_<GenerateRoomMesh>d__15_TypeInfo,0);
      if (lVar2 == 0) goto UnityEngine_RectTransform__GetParentSize;
      FUN_04cd83d4(lVar2,uVar5,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo);
    }
    puVar1 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo;
    plVar7 = *(long **)(param_1 + 0x50);
    if (plVar7 != (long *)0x0) {
      lVar2 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo)
          {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_068e6c94;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_031c0d08(plVar7,*(long *)
                                    System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo
                            ,0);
LAB_068e6c94:
      lVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
      FUN_04cd3498(uVar5,param_1,*(undefined8 *)RoomInfoPanel_<Start>d__32_TypeInfo,0);
      if (lVar2 != 0) {
        FUN_04cd83d4(lVar2,uVar5,*(undefined8 *)OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo)
        ;
        plVar7 = *(long **)(param_1 + 0x50);
        if (plVar7 != (long *)0x0) {
          lVar2 = *plVar7;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_068e6d48;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar1,1);
LAB_068e6d48:
          lVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
          uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)
                              OVR_OpenVR_IVRCompositor__ReleaseMirrorTextureD3D11_TypeInfo);
          FUN_04cd3498(uVar5,param_1,
                       *(undefined8 *)
                        Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6_TypeInfo,0);
          if (lVar2 != 0) {
            FUN_04cd83d4(lVar2,uVar5,*(undefined8 *)OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
            return;
          }
        }
      }
UnityEngine_RectTransform__GetParentSize:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  return;
}


