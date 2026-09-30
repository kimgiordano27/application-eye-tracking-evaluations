/*
FUNCTION_NAME: Unity.Services.Core.Registration.CorePackageInitializer.<InitializeComponents>d__47$$MoveNext
ENTRY_POINT: 058d611c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_9
*/


void Unity_Services_Core_Registration_CorePackageInitializer_<InitializeComponents>d__47__MoveNext
               (void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  int *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar8;
  ulong unaff_x23;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  FUN_02b3c81c();
                    /* try { // try from 058d6124 to 059d615b has its CatchHandler @ 058d5584 */
  FUN_02b3c81c(Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__);
  FUN_02b3c81c(Method_Oculus_Platform_Request<ChallengeList>__ctor__);
  FUN_02b3c81c(Method_Unity_Properties_Property<Vector3Int,_int>__ctor__);
  FUN_02b3c81c(Method_Oculus_Platform_Request<CowatchViewerList>__ctor__);
  FUN_02b3c81c(
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
              );
                    /* try { // try from 058d615c to 059d615f has its CatchHandler @ 058d6750 */
                    /* try { // try from 058d6160 to 059d6173 has its CatchHandler @ 058d6760 */
  FUN_02b3c81c(PTR_DAT_0631f390);
  FUN_02b3c81c(Method_Oculus_Platform_Request<CowatchingState>__ctor__);
                    /* try { // try from 058d6174 to 059d61cb has its CatchHandler @ 058d5584 */
  *(undefined1 *)(unaff_x22 + 0x354) = 1;
  if (unaff_x19[2] == 0) {
    return;
  }
  if (unaff_x21 != 0) {
    plVar8 = (long *)(unaff_x19 + 0x14);
    lVar6 = *(long *)(*(long *)
                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                     + 0x20);
    iVar2 = *unaff_x19;
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x21 + 0x40) + 1;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
                    /* try { // try from 058d61cc to 059d61d7 has its CatchHandler @ 058d6754 */
                    /* try { // try from 058d61d8 to 059d61f7 has its CatchHandler @ 058d5584 */
    FUN_058d65a4();
    if (*unaff_x20 != 0) {
                    /* try { // try from 058d61f8 to 059d6207 has its CatchHandler @ 058d6764 */
                    /* try { // try from 058d6208 to 059d6233 has its CatchHandler @ 058d5584 */
      FUN_03174ca8(*unaff_x20,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x12),0,
                   0,unaff_x19[2] * *unaff_x19,
                   *(undefined8 *)Method_Oculus_Platform_Request<ChallengeList>__ctor__);
      if (unaff_x20[1] != 0) {
                    /* try { // try from 058d6234 to 059d623b has its CatchHandler @ 058d6768 */
        FUN_031747b8();
        puVar5 = Method_Oculus_Platform_Request<CowatchingState>__ctor__;
        puVar4 = Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__;
                    /* try { // try from 058d623c to 059d625b has its CatchHandler @ 058d5584 */
        if (unaff_x20[2] != 0) {
                    /* try { // try from 058d625c to 059d626b has its CatchHandler @ 058d6754 */
          FUN_031748f4(unaff_x20[2],*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),0
                       ,0,unaff_x19[10],
                       *(undefined8 *)Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__)
          ;
          lVar6 = unaff_x20[4];
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (lVar6 != 0) {
                    /* try { // try from 058d6284 to 059d62a7 has its CatchHandler @ 058d62b8 */
            FUN_05c95d70(lVar6,*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 4),unaff_x19[2],0
                        );
            if (unaff_x20[4] != 0) {
                    /* try { // try from 058d62a8 to 059d62e3 has its CatchHandler @ 058d5584 */
                    /* catch() { ... } // from try @ 058d5d78 with catch @ 058d62ac */
                    /* catch() { ... } // from try @ 058d5d2c with catch @ 058d62b0
                       catch() { ... } // from try @ 058d5d58 with catch @ 058d62b0 */
                    /* catch() { ... } // from try @ 058d5cb8 with catch @ 058d62b4 */
                    /* catch() { ... } // from try @ 058d6284 with catch @ 058d62b8 */
                    /* catch() { ... } // from try @ 058d5c70 with catch @ 058d62bc */
              FUN_05c95d70(unaff_x20[4],*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),
                           iVar2 << 2,0);
                    /* catch() { ... } // from try @ 058d5c84 with catch @ 058d62c0 */
                    /* catch() { ... } // from try @ 058d5c5c with catch @ 058d62c4 */
              if (unaff_x20[4] != 0) {
                thunk_FUN_05c96218(unaff_x20[4],(int)unaff_x20[5],
                                   *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),
                                   *unaff_x20,0);
                    /* try { // try from 058d62e4 to 059d62e7 has its CatchHandler @ 058d673c */
                    /* try { // try from 058d62e8 to 059d65e3 has its CatchHandler @ 058d5584 */
                if (unaff_x20[4] != 0) {
                  thunk_FUN_05c96218(unaff_x20[4],(int)unaff_x20[5],
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x14),
                                     unaff_x20[1],0);
                  if (unaff_x20[4] != 0) {
                    thunk_FUN_05c96218(unaff_x20[4],(int)unaff_x20[5],
                                       *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc),
                                       unaff_x20[2],0);
                    if ((unaff_x23 & 1) == 0) {
                      lVar6 = unaff_x20[4];
                      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      if (lVar6 == 0) goto LAB_058d65a0;
                      FUN_05c95d70(lVar6,**(undefined4 **)(*(long *)puVar5 + 0xb8),
                                   *(undefined4 *)(unaff_x21 + 0x3c),0);
                      if (unaff_x20[4] == 0) goto LAB_058d65a0;
                      thunk_FUN_05c96364(unaff_x20[4],(int)unaff_x20[5],
                                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),
                                         *(undefined8 *)(unaff_x21 + 0x50),0);
                    }
                    else {
                      lVar6 = unaff_x20[3];
                      auVar11 = FUN_03aaf56c(plVar8,*(undefined8 *)
                                                                                                          
                                                  Method_Unity_Properties_Property<Vector3Int,_int>__ctor__
                                            );
                      lVar10 = *plVar8;
                      if ((*(ushort *)
                            (*(long *)(*(long *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                                      + 0x20) + 0x135) & 1) == 0) {
                        FUN_02b76218();
                      }
                      if (lVar6 == 0) goto LAB_058d65a0;
                      FUN_031748f4(lVar6,auVar11._0_8_,auVar11._8_8_,0,0,*(undefined4 *)(lVar10 + 8)
                                   ,*(undefined8 *)puVar4);
                      lVar6 = *(long *)puVar5;
                      lVar10 = unaff_x20[4];
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar6 = *(long *)puVar5;
                      }
                      lVar9 = *plVar8;
                      uVar3 = **(undefined4 **)(lVar6 + 0xb8);
                      if ((*(ushort *)
                            (*(long *)(*(long *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                                      + 0x20) + 0x135) & 1) == 0) {
                        FUN_02b76218(*(long *)(*(long *)
                                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                                              + 0x20));
                      }
                      if (lVar10 == 0) goto LAB_058d65a0;
                      FUN_05c95d70(lVar10,uVar3,*(undefined4 *)(lVar9 + 8),0);
                      if (unaff_x20[4] == 0) goto LAB_058d65a0;
                      thunk_FUN_05c96218(unaff_x20[4],(int)unaff_x20[5],
                                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),
                                         unaff_x20[3],0);
                    }
                    lVar10 = unaff_x20[4];
                    lVar6 = unaff_x20[5];
                    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if (lVar10 != 0) {
                      thunk_FUN_05c96364(lVar10,(int)lVar6,
                                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1c),
                                         *(undefined8 *)(unaff_x21 + 0x58),0);
                      if (unaff_x20[4] != 0) {
                        thunk_FUN_05c96364(unaff_x20[4],(int)unaff_x20[5],
                                           *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20)
                                           ,*(undefined8 *)(unaff_x21 + 0x68),0);
                        if (unaff_x20[4] != 0) {
                          thunk_FUN_05c96364(unaff_x20[4],(int)unaff_x20[5],
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar5 + 0xb8) + 0x24),
                                             *(undefined8 *)(unaff_x21 + 0x60),0);
                          if (unaff_x20[4] != 0) {
                            thunk_FUN_05c96364(unaff_x20[4],(int)unaff_x20[5],
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar5 + 0xb8) + 0x28),
                                               *(undefined8 *)(unaff_x21 + 0x48),0);
                            puVar4 = Method_Oculus_Platform_Request<CowatchViewerList>__ctor__;
                            if (unaff_x20[4] != 0) {
                              iVar2 = unaff_x19[2] + 0x3f;
                              iVar1 = unaff_x19[2] + 0x7e;
                              if (-1 < iVar2) {
                                iVar1 = iVar2;
                              }
                              FUN_05c96624(unaff_x20[4],(int)unaff_x20[5],iVar1 >> 6,1,1,0);
                              uVar7 = *(undefined8 *)puVar4;
                              unaff_x19[2] = 0;
                              FUN_03aaf538(plVar8,uVar7);
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


