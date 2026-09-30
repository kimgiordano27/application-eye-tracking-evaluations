/*
FUNCTION_NAME: FUN_058d60d8
ENTRY_POINT: 058d60d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_11
*/


void FUN_058d60d8(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                 ulong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
                    /* try { // try from 058d60e8 to 059d60f3 has its CatchHandler @ 058d6778 */
                    /* try { // try from 058d60f4 to 059d6113 has its CatchHandler @ 058d5584 */
  if ((DAT_066d3354 & 1) == 0) {
                    /* try { // try from 058d6114 to 059d6123 has its CatchHandler @ 058d6778 */
    FUN_02b3c81c(Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__);
    FUN_02b3c81c(Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__);
    FUN_02b3c81c(Method_Oculus_Platform_Request<ChallengeList>__ctor__);
    FUN_02b3c81c(Method_Unity_Properties_Property<Vector3Int,_int>__ctor__);
    FUN_02b3c81c(Method_Oculus_Platform_Request<CowatchViewerList>__ctor__);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                );
    FUN_02b3c81c(PTR_DAT_0631f390);
    FUN_02b3c81c(Method_Oculus_Platform_Request<CowatchingState>__ctor__);
    DAT_066d3354 = 1;
  }
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar2 = param_1[10];
    plVar9 = (long *)(param_1 + 0x14);
    lVar11 = *plVar9;
    lVar7 = *(long *)(*(long *)
                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                     + 0x20);
    iVar3 = *param_1;
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    FUN_058d65a4(param_5,iVar1,iVar3 << 2,iVar2,*(undefined4 *)(lVar11 + 8));
    if (*param_5 != 0) {
      FUN_03174ca8(*param_5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x12),0,0,
                   param_1[2] * *param_1,
                   *(undefined8 *)Method_Oculus_Platform_Request<ChallengeList>__ctor__);
      if (param_5[1] != 0) {
        FUN_031747b8(param_5[1],param_3,param_4,0,0,param_1[2],
                     *(undefined8 *)Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__);
        puVar6 = Method_Oculus_Platform_Request<CowatchingState>__ctor__;
        puVar5 = Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__;
        if (param_5[2] != 0) {
          FUN_031748f4(param_5[2],*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),0,0,
                       param_1[10],
                       *(undefined8 *)Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__)
          ;
          lVar7 = param_5[4];
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (lVar7 != 0) {
            FUN_05c95d70(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 4),param_1[2],0);
            if (param_5[4] != 0) {
              FUN_05c95d70(param_5[4],*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8),
                           iVar3 << 2,0);
              if (param_5[4] != 0) {
                thunk_FUN_05c96218(param_5[4],(int)param_5[5],
                                   *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),
                                   *param_5,0);
                if (param_5[4] != 0) {
                  thunk_FUN_05c96218(param_5[4],(int)param_5[5],
                                     *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14),
                                     param_5[1],0);
                  if (param_5[4] != 0) {
                    thunk_FUN_05c96218(param_5[4],(int)param_5[5],
                                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xc),
                                       param_5[2],0);
                    if ((param_6 & 1) == 0) {
                      lVar7 = param_5[4];
                      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      if (lVar7 == 0) goto LAB_058d65a0;
                      FUN_05c95d70(lVar7,**(undefined4 **)(*(long *)puVar6 + 0xb8),
                                   *(undefined4 *)(param_2 + 0x3c),0);
                      if (param_5[4] == 0) goto LAB_058d65a0;
                      thunk_FUN_05c96364(param_5[4],(int)param_5[5],
                                         *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                                         *(undefined8 *)(param_2 + 0x50),0);
                    }
                    else {
                      lVar7 = param_5[3];
                      auVar12 = FUN_03aaf56c(plVar9,*(undefined8 *)
                                                                                                          
                                                  Method_Unity_Properties_Property<Vector3Int,_int>__ctor__
                                            );
                      lVar11 = *plVar9;
                      if ((*(ushort *)
                            (*(long *)(*(long *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                                      + 0x20) + 0x135) & 1) == 0) {
                        FUN_02b76218();
                      }
                      if (lVar7 == 0) goto LAB_058d65a0;
                      FUN_031748f4(lVar7,auVar12._0_8_,auVar12._8_8_,0,0,*(undefined4 *)(lVar11 + 8)
                                   ,*(undefined8 *)puVar5);
                      lVar7 = *(long *)puVar6;
                      lVar11 = param_5[4];
                      if (*(int *)(lVar7 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar7 = *(long *)puVar6;
                      }
                      lVar10 = *plVar9;
                      uVar4 = **(undefined4 **)(lVar7 + 0xb8);
                      if ((*(ushort *)
                            (*(long *)(*(long *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                                      + 0x20) + 0x135) & 1) == 0) {
                        FUN_02b76218(*(long *)(*(long *)
                                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                                              + 0x20));
                      }
                      if (lVar11 == 0) goto LAB_058d65a0;
                      FUN_05c95d70(lVar11,uVar4,*(undefined4 *)(lVar10 + 8),0);
                      if (param_5[4] == 0) goto LAB_058d65a0;
                      thunk_FUN_05c96218(param_5[4],(int)param_5[5],
                                         *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                                         param_5[3],0);
                    }
                    lVar11 = param_5[4];
                    lVar7 = param_5[5];
                    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if (lVar11 != 0) {
                      thunk_FUN_05c96364(lVar11,(int)lVar7,
                                         *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1c),
                                         *(undefined8 *)(param_2 + 0x58),0);
                      if (param_5[4] != 0) {
                        thunk_FUN_05c96364(param_5[4],(int)param_5[5],
                                           *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20)
                                           ,*(undefined8 *)(param_2 + 0x68),0);
                        if (param_5[4] != 0) {
                          thunk_FUN_05c96364(param_5[4],(int)param_5[5],
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar6 + 0xb8) + 0x24),
                                             *(undefined8 *)(param_2 + 0x60),0);
                          if (param_5[4] != 0) {
                            thunk_FUN_05c96364(param_5[4],(int)param_5[5],
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar6 + 0xb8) + 0x28),
                                               *(undefined8 *)(param_2 + 0x48),0);
                            puVar5 = Method_Oculus_Platform_Request<CowatchViewerList>__ctor__;
                            if (param_5[4] != 0) {
                              iVar1 = param_1[2] + 0x3f;
                              iVar2 = param_1[2] + 0x7e;
                              if (-1 < iVar1) {
                                iVar2 = iVar1;
                              }
                              FUN_05c96624(param_5[4],(int)param_5[5],iVar2 >> 6,1,1,0);
                              uVar8 = *(undefined8 *)puVar5;
                              param_1[2] = 0;
                              FUN_03aaf538(plVar9,uVar8);
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
LAB_058d65a0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


