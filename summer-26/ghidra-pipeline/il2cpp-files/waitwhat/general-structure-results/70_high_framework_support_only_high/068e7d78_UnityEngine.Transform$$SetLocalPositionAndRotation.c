/*
FUNCTION_NAME: UnityEngine.Transform$$SetLocalPositionAndRotation
ENTRY_POINT: 068e7d78
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Transform__SetLocalPositionAndRotation(void)

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
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  long *unaff_x21;
  
  uVar5 = thunk_FUN_031c3cac();
  *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
  thunk_FUN_031c3cac();
  plVar13 = *(long **)(unaff_x19 + 0x20);
  if ((plVar13 == (long *)0x0) || (*(long *)(unaff_x19 + 0x28) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0698c5bc(*(undefined8 *)SQLite4Unity3d_SQLiteConnection_<>c_TypeInfo,0);
    return;
  }
  lVar9 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x21) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_068e7e28;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_031c0d08(plVar13,*unaff_x21,0);
LAB_068e7e28:
  uVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
  plVar13 = *(long **)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar5;
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_068e7e90;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08(plVar13,*unaff_x21,1);
LAB_068e7e90:
    uVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    plVar13 = *(long **)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x50) = uVar5;
    if (plVar13 != (long *)0x0) {
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 6) * 0x10 + 0x138);
            goto LAB_068e7f00;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_031c0d08(plVar13,*(long *)
                                     UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo
                            ,6);
LAB_068e7f00:
      lVar9 = (*(code *)*puVar6)(plVar13,puVar6[1]);
      if ((lVar9 != 0) && (lVar7 = FUN_069d3b50(lVar9,0), lVar7 != 0)) {
        uVar5 = thunk_FUN_069dc13c(lVar7,0);
        puVar3 = SQLite4Unity3d_SQLiteConnection_<>c__DisplayClass106_0_TypeInfo;
        uVar8 = FUN_057bf780(*(undefined8 *)
                              SQLite4Unity3d_SQLiteConnection_<>c__DisplayClass106_0_TypeInfo,uVar5,
                             *(undefined8 *)PageScroll_<>c__DisplayClass12_0_TypeInfo,0);
        puVar1 = PTR_DAT_070c22b0;
        lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c22b0);
        FUN_069d76f4(lVar7,uVar8,0);
        if (lVar7 != 0) {
          uVar8 = FUN_069d6e00(lVar7,0);
          puVar2 = OVRPlugin_Sizef_TypeInfo;
          uVar10 = *(undefined8 *)puVar3;
          *(undefined8 *)(unaff_x19 + 0x68) = uVar8;
          uVar8 = FUN_057bf780(uVar10,uVar5,*(undefined8 *)puVar2,0);
          lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)puVar1);
          FUN_069d76f4(lVar7,uVar8,0);
          if (lVar7 != 0) {
            uVar8 = FUN_069d6e00(lVar7,0);
            *(undefined8 *)(unaff_x19 + 0x70) = uVar8;
            if (*(long *)(unaff_x19 + 0x48) != 0) {
              lVar7 = *(long *)(unaff_x19 + 0x68);
              uVar8 = thunk_FUN_069e7970(*(long *)(unaff_x19 + 0x48),0);
              if (lVar7 != 0) {
                FUN_069e78bc(lVar7,uVar8,0);
                if (*(long *)(unaff_x19 + 0x70) != 0) {
                  FUN_069e78bc(*(long *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x68),0);
                  bVar4 = FUN_03a2e25c(lVar9,unaff_x19 + 0x38,
                                       *(undefined8 *)SQLite4Unity3d_SQLite3_Result_TypeInfo);
                  *(byte *)(unaff_x19 + 0x40) = bVar4 & 1;
                  if ((bVar4 & 1) == 0) {
LAB_068e7d2c:
                    *(undefined1 *)(unaff_x19 + 0x1a) = 1;
                    return;
                  }
                  uVar5 = FUN_057bf780(*(undefined8 *)puVar3,uVar5,
                                       *(undefined8 *)
                                        SQLite4Unity3d_SQLiteConnection_<>c__DisplayClass105_0_TypeInfo
                                       ,0);
                  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (*(undefined8 *)puVar1);
                  FUN_069d76f4(lVar9,uVar5,0);
                  if (lVar9 != 0) {
                    lVar9 = FUN_069d6e00(lVar9,0);
                    *(long *)(unaff_x19 + 0x78) = lVar9;
                    if ((*(long *)(unaff_x19 + 0x68) != 0) &&
                       (uVar5 = thunk_FUN_069e7970(*(long *)(unaff_x19 + 0x68),0), lVar9 != 0)) {
                      FUN_069e78bc(lVar9,uVar5,0);
                      goto LAB_068e7d2c;
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


