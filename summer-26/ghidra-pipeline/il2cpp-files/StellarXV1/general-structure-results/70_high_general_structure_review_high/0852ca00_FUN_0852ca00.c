/*
FUNCTION_NAME: FUN_0852ca00
ENTRY_POINT: 0852ca00
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_17;telemetry_or_network_hits_17
*/


void FUN_0852ca00(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_0989d9a3 & 1) == 0) {
    FUN_04077588(PTR_DAT_09287778);
    DAT_0989d9a3 = 1;
  }
  uVar2 = FUN_076bca34(param_1,0);
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                      (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10));
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = thunk_FUN_040ec700();
    if (*(long *)(param_2 + 0x18) != 0) {
      uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                        (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x18));
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      uVar2 = thunk_FUN_040ec700();
      if (*(long *)(param_2 + 0x18) != 0) {
        uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                          (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x20));
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        uVar2 = thunk_FUN_040ec700();
        if (*(long *)(param_2 + 0x18) != 0) {
          uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                            (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x20));
          *(undefined8 *)(param_1 + 0x28) = uVar2;
          uVar2 = thunk_FUN_040ec700();
          if (*(long *)(param_2 + 0x18) != 0) {
            uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                              (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
            *(undefined8 *)(param_1 + 0x30) = uVar2;
            uVar2 = thunk_FUN_040ec700();
            if (*(long *)(param_2 + 0x18) != 0) {
              uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
              *(undefined8 *)(param_1 + 0x38) = uVar2;
              uVar2 = thunk_FUN_040ec700();
              if (*(long *)(param_2 + 0x18) != 0) {
                uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                  (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30));
                *(undefined8 *)(param_1 + 0x40) = uVar2;
                uVar2 = thunk_FUN_040ec700();
                if (*(long *)(param_2 + 0x18) != 0) {
                  uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                    (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x38));
                  *(undefined8 *)(param_1 + 0x48) = uVar2;
                  uVar2 = thunk_FUN_040ec700();
                  if (*(long *)(param_2 + 0x18) != 0) {
                    uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                      (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x50));
                    *(undefined8 *)(param_1 + 0x50) = uVar2;
                    uVar2 = thunk_FUN_040ec700();
                    if (*(long *)(param_2 + 0x18) != 0) {
                      uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                        (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x58));
                      *(undefined8 *)(param_1 + 0x60) = uVar2;
                      uVar2 = thunk_FUN_040ec700();
                      if (*(long *)(param_2 + 0x18) != 0) {
                        uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                          (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x70));
                        *(undefined8 *)(param_1 + 0x68) = uVar2;
                        uVar2 = thunk_FUN_040ec700();
                        if (*(long *)(param_2 + 0x18) != 0) {
                          uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                            (uVar2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x78)
                                            );
                          *(undefined8 *)(param_1 + 0x70) = uVar2;
                          uVar2 = thunk_FUN_040ec700();
                          if (*(long *)(param_2 + 0x18) != 0) {
                            uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                              (uVar2,*(undefined8 *)
                                                      (*(long *)(param_2 + 0x18) + 0x80));
                            *(undefined8 *)(param_1 + 0x78) = uVar2;
                            uVar2 = thunk_FUN_040ec700();
                            if (*(long *)(param_2 + 0x18) != 0) {
                              uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                                (uVar2,*(undefined8 *)
                                                        (*(long *)(param_2 + 0x18) + 0x88));
                              *(undefined8 *)(param_1 + 0x80) = uVar2;
                              uVar2 = thunk_FUN_040ec700();
                              if (*(long *)(param_2 + 0x18) != 0) {
                                uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                                  (uVar2,*(undefined8 *)
                                                          (*(long *)(param_2 + 0x18) + 0x60));
                                *(undefined8 *)(param_1 + 0x88) = uVar2;
                                uVar2 = thunk_FUN_040ec700();
                                puVar1 = PTR_DAT_09287778;
                                if (*(long *)(param_2 + 0x18) != 0) {
                                  uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                                    (uVar2,*(undefined8 *)
                                                            (*(long *)(param_2 + 0x18) + 0x68));
                                  *(undefined8 *)(param_1 + 0x90) = uVar2;
                                  thunk_FUN_040ec700();
                                  uVar2 = FUN_04077674(*(undefined8 *)puVar1,0x10);
                                  puVar5 = (undefined8 *)(param_1 + 0x58);
                                  *puVar5 = uVar2;
                                  uVar2 = thunk_FUN_040ec700(puVar5,uVar2);
                                  uVar6 = 0;
                                  lVar7 = 0x20;
                                  while (*(long *)(param_2 + 0x18) != 0) {
                                    plVar8 = (long *)*puVar5;
                                    lVar3 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_count_set
                                                      (uVar2,*(undefined8 *)
                                                              (*(long *)(param_2 + 0x18) + 0x50));
                                    if (plVar8 == (long *)0x0) break;
                                    if ((lVar3 != 0) &&
                                       (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)
                                                                          (*plVar8 + 0x40)),
                                       lVar4 == 0)) {
                                      uVar2 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                                      FUN_040776f4(uVar2,0);
                                    }
                                    if (*(uint *)(plVar8 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                                      FUN_04077838();
                                    }
                                    *(long *)((long)plVar8 + lVar7) = lVar3;
                                    uVar2 = thunk_FUN_040ec700((long)plVar8 + lVar7,lVar3);
                                    uVar6 = uVar6 + 1;
                                    lVar7 = lVar7 + 8;
                                    if (uVar6 == 0x10) {
                                      return;
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
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


