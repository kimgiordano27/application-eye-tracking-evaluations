/*
FUNCTION_NAME: UnityEngine.UIElements.BaseListView$$PostRefresh
ENTRY_POINT: 06a08c28
PROGRAM: waitwhat-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_UIElements_BaseListView__PostRefresh(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  FUN_03188a78();
  FUN_03188a78(TMPro_MarkupAttribute___TypeInfo);
  FUN_03188a78(UnityEngine_UIElements_UIR_TempMeshAllocatorImpl_ThreadData___TypeInfo);
  FUN_03188a78(
              Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<StunResult>_GetAwaiter__
              );
  FUN_03188a78(Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<Task>_GetAwaiter__);
  FUN_03188a78(
              Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<WebRequestStream>_GetAwaiter__
              );
  FUN_03188a78(PTR_DAT_070f1260);
  FUN_03188a78(
              Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<WebResponse>_GetAwaiter__
              );
  *(undefined1 *)(unaff_x21 + 0x989) = 1;
  FUN_05957c10();
  puVar2 = TMPro_MarkupAttribute___TypeInfo;
  puVar1 = PTR_DAT_070c1958;
  if (unaff_x19 == 0) {
    if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar7 = *(undefined8 *)
             Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<WebResponse>_GetAwaiter__
    ;
LAB_06a08e9c:
    FUN_0698f0e8(uVar7,0);
    return;
  }
  uVar4 = *(ulong *)(unaff_x19 + 0x18);
  if (0 < (int)uVar4) {
    lVar10 = 4;
    do {
      if ((uVar4 & 0xffffffff) <= lVar10 - 4U) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      uVar7 = *(undefined8 *)(unaff_x19 + lVar10 * 8);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_0594875c(uVar7,0,0);
      if ((uVar4 & 1) == 0) {
LAB_06a08dc0:
        puVar1 = Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<Task>_GetAwaiter__;
        lVar10 = *(long *)
                  Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<Task>_GetAwaiter__;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar10 = *(long *)puVar1;
        }
        puVar5 = *(undefined8 **)(lVar10 + 0xb8);
        uVar7 = *(undefined8 *)
                 Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<WebRequestStream>_GetAwaiter__
        ;
        if (puVar5[1] == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar9 = *puVar5;
          uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)PTR_DAT_070f5b40);
          FUN_03dfe704(uVar8,uVar9,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<StunResult>_GetAwaiter__
                       ,0);
          *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar8;
        }
        uVar8 = Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>
                          ();
        uVar7 = FUN_057bf780(uVar7,uVar8,*(undefined8 *)PTR_DAT_070f1260,0);
        if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
        }
        goto LAB_06a08e9c;
      }
      uVar8 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      plVar3 = (long *)FUN_0593e698(uVar8,0);
      if (plVar3 == (long *)0x0) goto LAB_06a08eb4;
      uVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,uVar7,*(undefined8 *)(*plVar3 + 0x2b0));
      if ((uVar4 & 1) == 0) goto LAB_06a08dc0;
      uVar4 = *(ulong *)(unaff_x19 + 0x18);
      lVar6 = lVar10 + -3;
      lVar10 = lVar10 + 1;
    } while (lVar6 < (int)uVar4);
  }
  puVar1 = UnityEngine_UIElements_UIR_TempMeshAllocatorImpl_ThreadData___TypeInfo;
  if (uVar4 == 0) {
    lVar10 = *(long *)UnityEngine_UIElements_UIR_TempMeshAllocatorImpl_ThreadData___TypeInfo;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar10 = *(long *)puVar1;
    }
    if (**(long **)(lVar10 + 0xb8) == 0) goto LAB_06a08eb4;
    unaff_x19 = FUN_0414207c(**(long **)(lVar10 + 0xb8),
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<string>_GetAwaiter__
                            );
  }
  if (unaff_x20 != 0) {
    *(long *)(unaff_x20 + 0x10) = unaff_x19;
    return;
  }
LAB_06a08eb4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


