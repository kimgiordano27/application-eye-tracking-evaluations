/*
FUNCTION_NAME: FUN_068e7c78
ENTRY_POINT: 068e7c78
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_068e7c78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  
  if ((DAT_07559313 & 1) == 0) {
    FUN_03188a78(SQLite4Unity3d_SQLite3_Result_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(PTR_DAT_070c22b0);
    FUN_03188a78(UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo);
    FUN_03188a78(SQLite4Unity3d_SQLiteCommand_Binding_TypeInfo);
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo
                );
    FUN_03188a78(SQLite4Unity3d_SQLiteConnection_<>c_TypeInfo);
    FUN_03188a78(SQLite4Unity3d_SQLiteConnection_<>c__DisplayClass105_0_TypeInfo);
    FUN_03188a78(SQLite4Unity3d_SQLiteConnection_<>c__DisplayClass106_0_TypeInfo);
    FUN_03188a78(OVRPlugin_Sizef_TypeInfo);
    FUN_03188a78(PageScroll_<>c__DisplayClass12_0_TypeInfo);
    DAT_07559313 = 1;
  }
  puVar1 = SQLite4Unity3d_SQLiteCommand_Binding_TypeInfo;
  if (*(char *)(param_1 + 0x1a) != '\0') {
    return;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = thunk_FUN_031c3cac(uVar12,*(undefined8 *)SQLite4Unity3d_SQLiteCommand_Binding_TypeInfo);
  uVar8 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  thunk_FUN_031c3cac(uVar12,uVar8);
  puVar2 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo;
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = thunk_FUN_031c3cac(uVar12,*(undefined8 *)
                                     System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo
                            );
  uVar8 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_031c3cac(uVar12,uVar8);
  plVar13 = *(long **)(param_1 + 0x20);
  if ((plVar13 == (long *)0x0) || (*(long *)(param_1 + 0x28) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0698c5bc(*(undefined8 *)SQLite4Unity3d_SQLiteConnection_<>c_TypeInfo,0);
    return;
  }
  lVar9 = *plVar13;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_068e7e28;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_031c0d08(plVar13,*(long *)puVar1,0);
LAB_068e7e28:
  uVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
  plVar13 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_068e7e90;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08(plVar13,*(long *)puVar1,1);
LAB_068e7e90:
    uVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    plVar13 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    if (plVar13 != (long *)0x0) {
      lVar9 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
            goto LAB_068e7f00;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_031c0d08(plVar13,*(long *)
                                     UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo
                            ,6);
LAB_068e7f00:
      lVar9 = (*(code *)*puVar6)(plVar13,puVar6[1]);
      if ((lVar9 != 0) && (lVar7 = FUN_069d3b50(lVar9,0), lVar7 != 0)) {
        uVar5 = thunk_FUN_069dc13c(lVar7,0);
        puVar2 = SQLite4Unity3d_SQLiteConnection_<>c__DisplayClass106_0_TypeInfo;
        uVar8 = FUN_057bf780(*(undefined8 *)
                              SQLite4Unity3d_SQLiteConnection_<>c__DisplayClass106_0_TypeInfo,uVar5,
                             *(undefined8 *)PageScroll_<>c__DisplayClass12_0_TypeInfo,0);
        puVar1 = PTR_DAT_070c22b0;
        lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c22b0);
        FUN_069d76f4(lVar7,uVar8,0);
        if (lVar7 != 0) {
          uVar8 = FUN_069d6e00(lVar7,0);
          puVar3 = OVRPlugin_Sizef_TypeInfo;
          uVar12 = *(undefined8 *)puVar2;
          *(undefined8 *)(param_1 + 0x68) = uVar8;
          uVar8 = FUN_057bf780(uVar12,uVar5,*(undefined8 *)puVar3,0);
          lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)puVar1);
          FUN_069d76f4(lVar7,uVar8,0);
          if (lVar7 != 0) {
            uVar8 = FUN_069d6e00(lVar7,0);
            *(undefined8 *)(param_1 + 0x70) = uVar8;
            if (*(long *)(param_1 + 0x48) != 0) {
              lVar7 = *(long *)(param_1 + 0x68);
              uVar8 = thunk_FUN_069e7970(*(long *)(param_1 + 0x48),0);
              if (lVar7 != 0) {
                FUN_069e78bc(lVar7,uVar8,0);
                if (*(long *)(param_1 + 0x70) != 0) {
                  FUN_069e78bc(*(long *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),0);
                  bVar4 = FUN_03a2e25c(lVar9,param_1 + 0x38,
                                       *(undefined8 *)SQLite4Unity3d_SQLite3_Result_TypeInfo);
                  *(byte *)(param_1 + 0x40) = bVar4 & 1;
                  if ((bVar4 & 1) == 0) {
LAB_068e80c4:
                    *(undefined1 *)(param_1 + 0x1a) = 1;
                    return;
                  }
                  uVar5 = FUN_057bf780(*(undefined8 *)puVar2,uVar5,
                                       *(undefined8 *)
                                        SQLite4Unity3d_SQLiteConnection_<>c__DisplayClass105_0_TypeInfo
                                       ,0);
                  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (*(undefined8 *)puVar1);
                  FUN_069d76f4(lVar9,uVar5,0);
                  if (lVar9 != 0) {
                    lVar9 = FUN_069d6e00(lVar9,0);
                    *(long *)(param_1 + 0x78) = lVar9;
                    if ((*(long *)(param_1 + 0x68) != 0) &&
                       (uVar5 = thunk_FUN_069e7970(*(long *)(param_1 + 0x68),0), lVar9 != 0)) {
                      FUN_069e78bc(lVar9,uVar5,0);
                      goto LAB_068e80c4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


