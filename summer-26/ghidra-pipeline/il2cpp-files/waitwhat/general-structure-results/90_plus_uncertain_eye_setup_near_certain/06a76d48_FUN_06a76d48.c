/*
FUNCTION_NAME: FUN_06a76d48
ENTRY_POINT: 06a76d48
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_06a76d48(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint uVar20;
  
  puVar8 = Method_System_Collections_Generic_Dictionary<int,_Pose>_Add__;
  puVar7 = Method_System_Collections_Generic_Dictionary<int,_Pose>__ctor__;
  puVar6 = Method_System_Collections_Generic_Dictionary<int,_PointerEventData>_get_Values__;
  puVar5 = PTR_DAT_070f1250;
  puVar3 = PTR_DAT_070c4a30;
  if ((DAT_0755f15e & 1) == 0) {
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
    DAT_0755f15e = 1;
  }
  puVar13 = Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_get_Item__;
  puVar12 = Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_TryGetValue__;
  puVar11 = Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>__ctor__;
  puVar10 = Method_System_Collections_Generic_Dictionary<int,_RenderInstancedDataLayout>__ctor__;
  puVar9 = Method_System_Collections_Generic_Dictionary<int,_Pose>_Remove__;
  puVar4 = PTR_DAT_070d0188;
  uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar6);
  FUN_0501e81c(uVar14,*(undefined8 *)puVar7);
  **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar14;
  uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_05971910(uVar14,0);
  uVar15 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<int,_ProfilingSampler>__ctor__;
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20) = uVar14;
  uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar15);
  FUN_0501e81c(uVar14,*(undefined8 *)
                       Method_System_Collections_Generic_Dictionary<int,_Pose>_TryGetValue__);
  lVar16 = *(long *)puVar8;
  iVar1 = *(int *)(lVar16 + 0xe4);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = uVar14;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
    lVar16 = *(long *)puVar8;
  }
  uVar15 = **(undefined8 **)(lVar16 + 0xb8);
  uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar4);
  FUN_0570ec28(uVar14,uVar15,*(undefined8 *)puVar12,0);
  uVar19 = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  uVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar9);
  FUN_05110878(uVar15,uVar19,*(undefined8 *)puVar13,0);
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar11);
  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length
            (uVar19,uVar14,0,uVar15,0,1,10,10000,*(undefined8 *)puVar10);
  puVar3 = PTR_DAT_070f5018;
  uVar15 = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = uVar19;
  uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_0570ec28(uVar14,uVar15,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_get_Values__
               ,0);
  FUN_03cc0078(uVar14,*(undefined8 *)
                       Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_Add__
              );
  uVar14 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<int,_SimulationConnection>_Remove__;
  if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  plVar17 = (long *)FUN_0593e698(uVar14,0);
  if (plVar17 != (long *)0x0) {
    lVar16 = (**(code **)(*plVar17 + 0x798))(plVar17,0x28,*(undefined8 *)(*plVar17 + 0x7a0));
    puVar3 = Method_System_Collections_Generic_Dictionary<int,_float>__ctor__;
    if (lVar16 != 0) {
      uVar2 = *(uint *)(lVar16 + 0x18);
      if (0 < (int)uVar2) {
        uVar20 = 0;
        do {
          if (uVar2 <= uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          plVar17 = *(long **)(lVar16 + (long)(int)uVar20 * 8 + 0x20);
          if (plVar17 == (long *)0x0) goto LAB_06a77118;
          uVar14 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
          uVar18 = FUN_057bdc60(uVar14,*(undefined8 *)puVar3,0);
          if ((uVar18 & 1) == 0) {
            uVar18 = (**(code **)(*plVar17 + 0x328))(plVar17,*(undefined8 *)(*plVar17 + 0x330));
            if ((uVar18 & 1) != 0) {
              *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8) = plVar17;
              goto LAB_06a770e4;
            }
          }
          uVar2 = *(uint *)(lVar16 + 0x18);
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)uVar2);
      }
      plVar17 = *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
LAB_06a770e4:
      uVar18 = FUN_05869488(0,plVar17,0);
      if ((uVar18 & 1) == 0) {
        return;
      }
      thunk_FUN_031edd38(PTR_DAT_07131160);
      uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      FUN_0592f66c(uVar14,0);
      uVar15 = thunk_FUN_031edd38(
                                 Method_System_Collections_Generic_Dictionary<int,_float>_GetEnumerator__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar14,uVar15);
    }
  }
LAB_06a77118:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


