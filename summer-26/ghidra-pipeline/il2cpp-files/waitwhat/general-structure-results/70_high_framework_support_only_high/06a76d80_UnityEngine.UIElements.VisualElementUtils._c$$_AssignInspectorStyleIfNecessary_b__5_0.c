/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElementUtils.<>c$$<AssignInspectorStyleIfNecessary>b__5_0
ENTRY_POINT: 06a76d80
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UIElements_VisualElementUtils_<>c__<AssignInspectorStyleIfNecessary>b__5_0(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x19;
  undefined8 *puVar12;
  undefined8 uVar13;
  long unaff_x22;
  long *plVar14;
  uint uVar15;
  long unaff_x23;
  long *plVar16;
  long unaff_x24;
  long unaff_x28;
  undefined8 *puVar17;
  undefined8 *unaff_x29;
  
  puVar12 = *(undefined8 **)(unaff_x19 + 0x570);
  plVar14 = *(long **)(unaff_x22 + 0x250);
  puVar17 = *(undefined8 **)(unaff_x28 + 0xa30);
  plVar16 = *(long **)(unaff_x23 + 0x578);
  if ((*(byte *)(unaff_x24 + 0x15e) & 1) == 0) {
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_Pose>_Remove__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_Pose>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_Pose>_TryGetValue__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_ProfilingSampler>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_PointerEventData>_get_Values__);
    FUN_03188a78(PTR_DAT_070d0188);
    FUN_03188a78(PTR_DAT_070f5018);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<int,_RenderInstancedDataLayout>__ctor__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>__ctor__);
    FUN_03188a78(PTR_DAT_070c4a30);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_Add__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_Remove__);
    FUN_03188a78(PTR_DAT_070f1250);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_TryGetValue__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_get_Item__)
    ;
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_get_Values__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_Pose>_Add__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
    *(undefined1 *)(unaff_x24 + 0x15e) = 1;
  }
  puVar7 = Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_get_Item__;
  puVar6 = Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_TryGetValue__;
  puVar5 = Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>__ctor__;
  puVar4 = Method_System_Collections_Generic_Dictionary<int,_Pose>_Remove__;
  puVar3 = PTR_DAT_070d0188;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x29);
  FUN_0501e81c(uVar8,*puVar12);
  **(undefined8 **)(*plVar14 + 0xb8) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar17);
  FUN_05971910(uVar8,0);
  uVar9 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_ProfilingSampler>__ctor__
  ;
  *(undefined8 *)(*(long *)(*plVar14 + 0xb8) + 0x20) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar9);
  FUN_0501e81c(uVar8,*(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_Pose>_TryGetValue__);
  lVar10 = *plVar16;
  iVar1 = *(int *)(lVar10 + 0xe4);
  *(undefined8 *)(*(long *)(*plVar14 + 0xb8) + 0x10) = uVar8;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
    lVar10 = *plVar16;
  }
  uVar9 = **(undefined8 **)(lVar10 + 0xb8);
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
  FUN_0570ec28(uVar8,uVar9,*(undefined8 *)puVar6,0);
  uVar13 = **(undefined8 **)(*plVar16 + 0xb8);
  uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar4);
  FUN_05110878(uVar9,uVar13,*(undefined8 *)puVar7,0);
  uVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar5);
  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length
            (uVar13,uVar8,0,uVar9,0,1,10,10000);
  puVar3 = PTR_DAT_070f5018;
  uVar9 = **(undefined8 **)(*plVar16 + 0xb8);
  *(undefined8 *)(*(long *)(*plVar14 + 0xb8) + 0x18) = uVar13;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
  FUN_0570ec28(uVar8,uVar9,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_get_Values__
               ,0);
  FUN_03cc0078(uVar8,*(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_Add__)
  ;
  uVar8 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_Remove__;
  if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  plVar16 = (long *)FUN_0593e698(uVar8,0);
  if (plVar16 != (long *)0x0) {
    lVar10 = (**(code **)(*plVar16 + 0x798))(plVar16,0x28,*(undefined8 *)(*plVar16 + 0x7a0));
    puVar3 = Method_System_Collections_Generic_Dictionary<int,_float>__ctor__;
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar2) {
        uVar15 = 0;
        do {
          if (uVar2 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          plVar16 = *(long **)(lVar10 + (long)(int)uVar15 * 8 + 0x20);
          if (plVar16 == (long *)0x0) goto LAB_06a77118;
          uVar8 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
          uVar11 = FUN_057bdc60(uVar8,*(undefined8 *)puVar3,0);
          if ((uVar11 & 1) == 0) {
            uVar11 = (**(code **)(*plVar16 + 0x328))(plVar16,*(undefined8 *)(*plVar16 + 0x330));
            if ((uVar11 & 1) != 0) {
              *(long **)(*(long *)(*plVar14 + 0xb8) + 8) = plVar16;
              goto LAB_06a770e4;
            }
          }
          uVar2 = *(uint *)(lVar10 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar2);
      }
      plVar16 = *(long **)(*(long *)(*plVar14 + 0xb8) + 8);
LAB_06a770e4:
      uVar11 = FUN_05869488(0,plVar16,0);
      if ((uVar11 & 1) == 0) {
        return;
      }
      thunk_FUN_031edd38(PTR_DAT_07131160);
      uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      FUN_0592f66c(uVar8,0);
      uVar9 = thunk_FUN_031edd38(
                                Method_System_Collections_Generic_Dictionary<int,_float>_GetEnumerator__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar8,uVar9);
    }
  }
LAB_06a77118:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


