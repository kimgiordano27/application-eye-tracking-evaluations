/*
FUNCTION_NAME: UnityEngine.Transform$$GetPositionAndRotation
ENTRY_POINT: 068e7e68
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Transform__GetPositionAndRotation(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(in_x10[4] + 1) * 0x10 + 0x138);
      goto LAB_068e7e90;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_068e7e90:
  uVar6 = (*(code *)*puVar5)();
  plVar13 = *(long **)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 6) * 0x10 + 0x138);
          goto LAB_068e7f00;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_031c0d08(plVar13,*(long *)
                                   UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo
                          ,6);
LAB_068e7f00:
    lVar9 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    if ((lVar9 != 0) && (lVar7 = FUN_069d3b50(lVar9,0), lVar7 != 0)) {
      uVar6 = thunk_FUN_069dc13c(lVar7,0);
      puVar3 = SQLite4Unity3d_SQLiteConnection_<>c__DisplayClass106_0_TypeInfo;
      uVar8 = FUN_057bf780(*(undefined8 *)
                            SQLite4Unity3d_SQLiteConnection_<>c__DisplayClass106_0_TypeInfo,uVar6,
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
        uVar8 = FUN_057bf780(uVar10,uVar6,*(undefined8 *)puVar2,0);
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
                uVar6 = FUN_057bf780(*(undefined8 *)puVar3,uVar6,
                                     *(undefined8 *)
                                      SQLite4Unity3d_SQLiteConnection_<>c__DisplayClass105_0_TypeInfo
                                     ,0);
                lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*(undefined8 *)puVar1);
                FUN_069d76f4(lVar9,uVar6,0);
                if (lVar9 != 0) {
                  lVar9 = FUN_069d6e00(lVar9,0);
                  *(long *)(unaff_x19 + 0x78) = lVar9;
                  if ((*(long *)(unaff_x19 + 0x68) != 0) &&
                     (uVar6 = thunk_FUN_069e7970(*(long *)(unaff_x19 + 0x68),0), lVar9 != 0)) {
                    FUN_069e78bc(lVar9,uVar6,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


