/*
FUNCTION_NAME: FUN_06996a30
ENTRY_POINT: 06996a30
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_06996a30(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  if ((DAT_0755b10f & 1) == 0) {
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                );
    FUN_03188a78(System_Func<RenderingLayerMask>_TypeInfo);
    DAT_0755b10f = 1;
  }
  puVar2 = System_Func<RenderingLayerMask>_TypeInfo;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar3 = FUN_03188b1c(*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                          );
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar6);
        lVar6 = *(long *)puVar2;
      }
      uVar7 = *(ulong *)(param_1 + 0x18);
      **(undefined8 **)(lVar6 + 0xb8) = uVar3;
      if (0 < (int)uVar7) {
        uVar7 = uVar7 & 0xffffffff;
        lVar6 = 4;
        do {
          lVar4 = *(long *)puVar2;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar4 = *(long *)puVar2;
            uVar7 = (ulong)*(uint *)(param_1 + 0x18);
          }
          if (uVar7 <= lVar6 - 4U) goto LAB_06996b94;
          uVar3 = *(undefined8 *)(param_1 + lVar6 * 8);
          plVar8 = (long *)**(undefined8 **)(lVar4 + 0xb8);
          lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
          FUN_05971910(lVar4,0);
          *(undefined8 *)(lVar4 + 0x10) = uVar3;
          if (plVar8 == (long *)0x0) goto LAB_06996b98;
          lVar5 = thunk_FUN_031c3cac(lVar4,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar5 == 0) {
            uVar3 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
            FUN_03188b9c(uVar3,0);
          }
          if ((ulong)*(uint *)(plVar8 + 3) <= lVar6 - 4U) goto LAB_06996b94;
          uVar1 = *(uint *)(param_1 + 0x18);
          uVar7 = (ulong)uVar1;
          lVar5 = lVar6 + -3;
          plVar8[lVar6] = lVar4;
          lVar6 = lVar6 + 1;
        } while (lVar5 < (int)uVar1);
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar6 = *(long *)puVar2;
      }
      lVar4 = **(long **)(lVar6 + 0xb8);
      if (lVar4 == 0) goto LAB_06996b98;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_06996b94:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      (*(long **)(lVar6 + 0xb8))[1] = *(long *)(lVar4 + 0x20);
    }
    return;
  }
LAB_06996b98:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


