/*
FUNCTION_NAME: FUN_04f115a4
ENTRY_POINT: 04f115a4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_04f115a4(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_0754a373 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2c58);
    FUN_03188a78(PTR_DAT_070f4628);
    FUN_03188a78(PTR_DAT_070f4638);
    FUN_03188a78(PTR_DAT_070c2458);
    FUN_03188a78(PTR_DAT_070c2510);
    DAT_0754a373 = 1;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar6 = *(long *)(param_3 + 0x20);
  lVar3 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x80);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
    lVar6 = *(long *)(param_3 + 0x20);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x80);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar6 + 0x80);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
      lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    lVar6 = *(long *)(lVar6 + 0x78);
    uVar10 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
    }
    lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar6);
    lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    FUN_0570ec28(lVar3,uVar10,*(undefined8 *)(lVar6 + 0x88),*(undefined8 *)(lVar6 + 0x90));
    lVar6 = *(long *)(param_3 + 0x20);
    lVar7 = *(long *)(lVar6 + 0xc0);
    lVar4 = *(long *)(lVar7 + 0x80);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
      lVar6 = *(long *)(param_3 + 0x20);
      lVar7 = *(long *)(lVar6 + 0xc0);
    }
    *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar3;
    if ((*(ushort *)(*(long *)(lVar7 + 0x80) + 0x135) & 1) == 0) {
      FUN_031c09d4();
      lVar6 = *(long *)(param_3 + 0x20);
    }
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x80);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar4 = *(long *)(param_3 + 0x20);
  lVar6 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x80);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
    lVar4 = *(long *)(param_3 + 0x20);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    lVar6 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x80);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar6 = *(long *)(lVar4 + 0x80);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
      lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    lVar4 = *(long *)(lVar4 + 0x98);
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4(lVar4);
    }
    lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar4);
    lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    FUN_05110878(lVar6,uVar10,*(undefined8 *)(lVar4 + 0xa0),*(undefined8 *)(lVar4 + 0xa8));
    lVar4 = *(long *)(param_3 + 0x20);
    lVar8 = *(long *)(lVar4 + 0xc0);
    lVar7 = *(long *)(lVar8 + 0x80);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4();
      lVar4 = *(long *)(param_3 + 0x20);
      lVar8 = *(long *)(lVar4 + 0xc0);
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar6;
    if ((*(ushort *)(*(long *)(lVar8 + 0x80) + 0x135) & 1) == 0) {
      FUN_031c09d4();
      lVar4 = *(long *)(param_3 + 0x20);
    }
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x80);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar7 = *(long *)(param_3 + 0x20);
  lVar4 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x80);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
    lVar7 = *(long *)(param_3 + 0x20);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x80);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar7 + 0x80);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
      lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    lVar7 = *(long *)(lVar7 + 0x98);
    uVar10 = **(undefined8 **)(lVar4 + 0xb8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4(lVar7);
    }
    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar7);
    lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    FUN_05110878(lVar4,uVar10,*(undefined8 *)(lVar7 + 0xb0),*(undefined8 *)(lVar7 + 0xa8));
    lVar7 = *(long *)(param_3 + 0x20);
    lVar9 = *(long *)(lVar7 + 0xc0);
    lVar8 = *(long *)(lVar9 + 0x80);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
      lVar7 = *(long *)(param_3 + 0x20);
      lVar9 = *(long *)(lVar7 + 0xc0);
    }
    *(long *)(*(long *)(lVar8 + 0xb8) + 0x18) = lVar4;
    if ((*(ushort *)(*(long *)(lVar9 + 0x80) + 0x135) & 1) == 0) {
      FUN_031c09d4();
      lVar7 = *(long *)(param_3 + 0x20);
    }
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0xb8) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length
            (lVar7,lVar3,0,lVar6,lVar4,1,10,10000,
             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xc0));
  puVar2 = PTR_DAT_070c2510;
  puVar1 = PTR_DAT_070c2458;
  if (param_1 != (long *)0x0) {
    param_1[3] = lVar7;
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_04281a54(lVar3,*(undefined8 *)puVar1);
    lVar6 = *(long *)(param_3 + 0x20);
    param_1[0xd] = lVar3;
    if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    FUN_042e4268(lVar3,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 200));
    param_1[0xf] = lVar3;
    if (param_2 != 0) {
      FUN_06b027a4(param_1,*(undefined8 *)(param_2 + 0x520),0);
      lVar3 = *(long *)(param_3 + 0x20);
      param_1[4] = param_2;
      if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      puVar1 = PTR_DAT_070c2c58;
      lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      FUN_042e4268(lVar3,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 200));
      lVar6 = *(long *)(param_3 + 0x20);
      param_1[5] = lVar3;
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x38) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      FUN_03dfd060(lVar3,param_1,*(undefined8 *)(*param_1 + 0x290),
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd8));
      uVar10 = *(undefined8 *)puVar1;
      param_1[0xe] = lVar3;
      lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
      FUN_058a163c(lVar3,param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe0)
                   ,0);
      uVar10 = *(undefined8 *)puVar1;
      param_1[8] = lVar3;
      lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
      FUN_058a163c(lVar3,param_1,*(undefined8 *)(*param_1 + 0x2d0),0);
      plVar5 = (long *)param_1[2];
      param_1[0xb] = lVar3;
      if (plVar5 != (long *)0x0) {
        lVar3 = (**(code **)(*plVar5 + 0x9b8))(plVar5,*(undefined8 *)(*plVar5 + 0x9c0));
        puVar2 = PTR_DAT_070f4638;
        puVar1 = PTR_DAT_070f4628;
        if (lVar3 != 0) {
          FUN_06b296c4(lVar3,0,0);
          uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar2);
          FUN_056d3a24(uVar10,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf0),0);
          FUN_03a25490(param_2,uVar10,0,*(undefined8 *)puVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


