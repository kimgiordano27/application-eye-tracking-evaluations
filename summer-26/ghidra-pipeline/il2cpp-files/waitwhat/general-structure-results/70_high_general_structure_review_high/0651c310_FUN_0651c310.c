/*
FUNCTION_NAME: FUN_0651c310
ENTRY_POINT: 0651c310
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0651c310(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = System_Collections_Generic_IReadOnlyCollection<ISpan>_TypeInfo;
  if ((DAT_075570ec & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f1f80);
    FUN_03188a78(System_Collections_Generic_IReadOnlyCollection<ISpan>_TypeInfo);
    FUN_03188a78(
                System_Collections_Generic_IEnumerator<JointRotationActiveState_JointRotationFeatureConfig>_TypeInfo
                );
    FUN_03188a78(
                Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo
                );
    DAT_075570ec = 1;
  }
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  thunk_FUN_064e08dc(lVar5,0);
  lVar6 = FUN_06500abc(lVar5,0);
  if ((param_1 == 0) || (plVar10 = *(long **)(param_1 + 0x150), plVar10 == (long *)0x0)) {
LAB_0651c4c8:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (lVar6 == 0) {
    if (0x78 < *(uint *)(plVar10 + 3)) {
      plVar10[0x7c] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  else {
    lVar7 = thunk_FUN_031c3cac(lVar6,*(undefined8 *)(*plVar10 + 0x40));
    puVar2 = 
    System_Collections_Generic_IEnumerator<JointRotationActiveState_JointRotationFeatureConfig>_TypeInfo
    ;
    if (lVar7 == 0) {
      uVar8 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar8,0);
    }
    if (0x78 < *(uint *)(plVar10 + 3)) {
      plVar10[0x7c] = lVar6;
      puVar3 = 
      Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo;
      *(long *)(lVar6 + 0x78) = param_1;
      puVar1 = PTR_DAT_070f1f80;
      uVar8 = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar6 + 0x80) = param_4;
      local_50 = 0;
      uStack_48 = 0;
      FUN_064dfd00(&local_50,uVar8,0);
      uVar4 = uStack_48;
      uVar8 = local_50;
      uVar9 = *(undefined8 *)puVar3;
      local_50 = 0;
      uStack_48 = 0;
      *(undefined8 *)(lVar6 + 0x28) = uVar4;
      *(undefined8 *)(lVar6 + 0x20) = uVar8;
      FUN_064dfd00(&local_50,uVar9,0);
      uVar8 = FUN_064e007c(local_50,uStack_48,0);
      *(undefined8 *)(lVar6 + 0x40) = uVar8;
      *(undefined8 *)(lVar6 + 0x58) = param_2;
      *(undefined8 *)(lVar6 + 0x60) = param_3;
      FUN_064fe7fc(lVar6,1,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar8 = _DAT_012e58e0;
      *(undefined8 *)(lVar6 + 0x18) = _UNK_012e58e8;
      *(undefined8 *)(lVar6 + 0x10) = uVar8;
      auVar11 = FUN_064ee248(0,0);
      auVar12 = FUN_064ee248(1,0);
      *(undefined1 (*) [16])(lVar6 + 200) = auVar12;
      *(undefined1 (*) [16])(lVar6 + 0xb8) = auVar11;
      FUN_064fe7d0(lVar6,1,0);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x140) = 0x76;
        return lVar5;
      }
      goto LAB_0651c4c8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


