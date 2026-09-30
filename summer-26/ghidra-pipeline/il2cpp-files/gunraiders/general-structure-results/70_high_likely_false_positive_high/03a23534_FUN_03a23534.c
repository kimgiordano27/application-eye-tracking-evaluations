/*
FUNCTION_NAME: FUN_03a23534
ENTRY_POINT: 03a23534
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_6
*/


void FUN_03a23534(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [32];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = Method_FriendButton_<>c__DisplayClass29_0_<OnInviteButtonPressed>b__0__;
                    /* try { // try from 03a23544 to 03b23547 has its CatchHandler @ 03a23574 */
                    /* try { // try from 03a23548 to 03b23577 has its CatchHandler @ 03a234f8 */
  if ((DAT_0453a55b & 1) == 0) {
                    /* catch() { ... } // from try @ 03a23544 with catch @ 03a23574 */
                    /* try { // try from 03a23578 to 03b23583 has its CatchHandler @ 03a23598 */
    FUN_01c5d288(UnityEngine_UIElements_IRuntimePanelComponent_TypeInfo);
                    /* try { // try from 03a23584 to 03b2358f has its CatchHandler @ 03a234f8 */
    FUN_01c5d288(Method_FriendButton_<>c__DisplayClass29_0_<OnInviteButtonPressed>b__1__);
                    /* try { // try from 03a23590 to 03b23597 has its CatchHandler @ 03a23598 */
    FUN_01c5d288(Method_FriendSystem_<>c_<ReportOnceSelfAliveness>b__48_0__);
    FUN_01c5d288(
                Method_FriendSystem_<PeriodicReportSelfAliveness>d__47_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(
                Method_FriendSystem_<ReportOnceSelfAliveness>d__48_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(
                Method_FriendSystem_<ReportSelfAlivenessCoroutine>d__49_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(
                Method_FriendSystem_<RequestFriendCoroutine>d__51_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(
                Method_FriendSystem_<RequestFriendCoroutine>d__52_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(Method_FriendButton_<>c__DisplayClass29_0_<OnInviteButtonPressed>b__0__);
    FUN_01c5d288(UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_TypeInfo);
    FUN_01c5d288(
                Method_FriendSystem_<RequestMqGameInvitationCoroutine>d__62_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(
                Method_FriendSystem_<RetrieveFriendListCoroutine>d__56_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(
                Method_FriendSystem_<SyncPlatformFriendCoroutine>d__55_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(Method_FriendsList_<>c_<DisplayBlockingPlayer>b__95_0__);
    FUN_01c5d288(Method_FriendsList_<>c_<DisplayOfflineFriends>b__91_0__);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_FriendsList_<>c_<DisplayOnlineFriends>b__90_0__);
    DAT_0453a55b = 1;
  }
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_03c2dae4(uVar4,0);
  if (((param_2 != 0) &&
      (lVar5 = FUN_03a14744(param_2),
      puVar1 = Method_FriendsList_<>c_<DisplayOfflineFriends>b__91_0__,
      puVar2 = 
      Method_FriendSystem_<ReportOnceSelfAliveness>d__48_System_Collections_IEnumerator_Reset__,
      lVar5 != 0)) && (plVar12 = *(long **)(lVar5 + 0x30), plVar12 != (long *)0x0)) {
    lVar5 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_FriendSystem_<ReportOnceSelfAliveness>d__48_System_Collections_IEnumerator_Reset__
           ) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_03a236dc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01c72498(plVar12,*(long *)
                                   Method_FriendSystem_<ReportOnceSelfAliveness>d__48_System_Collections_IEnumerator_Reset__
                          ,2);
LAB_03a236dc:
    (*(code *)*puVar6)(plVar12,uVar4,puVar6[1]);
    uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_03c2daec(uVar4,0);
    lVar5 = FUN_03a14744(param_2);
    if ((lVar5 != 0) && (plVar12 = *(long **)(lVar5 + 0x30), plVar12 != (long *)0x0)) {
      lVar9 = *plVar12;
      lVar5 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar5) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_03a23764;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01c72498(plVar12,lVar5,2);
LAB_03a23764:
      (*(code *)*puVar6)(plVar12,uVar4,puVar6[1]);
      lVar5 = FUN_03a14744(param_2);
      puVar1 = 
      Method_FriendSystem_<PeriodicReportSelfAliveness>d__47_System_Collections_IEnumerator_Reset__;
      if (lVar5 != 0) {
        plVar12 = *(long **)(lVar5 + 0x30);
        uVar4 = FUN_03a14744(param_2);
        uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
        UnityEngine_Rendering_RTHandleSystem__ResetReferenceSize(uVar7,uVar4);
        puVar3 = 
        Method_FriendSystem_<RequestFriendCoroutine>d__52_System_Collections_IEnumerator_Reset__;
        puVar1 = PTR_DAT_0422fb28;
        if (plVar12 != (long *)0x0) {
          lVar9 = *plVar12;
          lVar5 = *(long *)puVar2;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar5) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_03a23814;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01c72498(plVar12,lVar5,2);
LAB_03a23814:
          (*(code *)*puVar6)(plVar12,uVar7,puVar6[1]);
          uVar4 = *(undefined8 *)puVar3;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          plVar12 = (long *)FUN_032e04b8(uVar4,0);
          puVar1 = 
          Method_FriendSystem_<RequestMqGameInvitationCoroutine>d__62_System_Collections_IEnumerator_Reset__
          ;
          puVar2 = UnityEngine_UIElements_IRuntimePanelComponent_TypeInfo;
          if (plVar12 != (long *)0x0) {
            uVar4 = (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0));
            uVar7 = FUN_032e04b8(*(undefined8 *)puVar1,0);
            lVar9 = *(long *)puVar2;
            lVar5 = *(long *)(lVar9 + 0x38);
            if (lVar5 == 0) {
              FUN_01c723f0(lVar9);
              lVar5 = *(long *)(lVar9 + 0x38);
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_01c72394();
            }
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            puVar3 = Method_FriendsList_<>c_<DisplayOnlineFriends>b__90_0__;
            puVar1 = 
            Method_FriendSystem_<RequestFriendCoroutine>d__51_System_Collections_IEnumerator_Reset__
            ;
            puVar2 = UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_TypeInfo;
            lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_01c72394();
            }
            uVar13 = **(undefined8 **)(lVar5 + 0xb8);
            uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
            FUN_03c31148(uVar8,*(undefined8 *)puVar3,param_3,uVar4,uVar7,uVar13,0);
            lVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
            FUN_03a38484(lVar5,param_2);
            lVar9 = FUN_03a14744(param_2);
            if ((lVar9 != 0) &&
               (FUN_023c9210(&local_e0,lVar9,uVar8,
                             *(undefined8 *)
                              Method_FriendSystem_<RetrieveFriendListCoroutine>d__56_System_Collections_IEnumerator_Reset__
                            ),
               puVar2 = 
               Method_FriendSystem_<ReportSelfAlivenessCoroutine>d__49_System_Collections_IEnumerator_Reset__
               , lVar5 != 0)) {
              *(undefined8 *)(lVar5 + 0xd8) = param_4;
              *(undefined8 *)(lVar5 + 0xb0) = uStack_c8;
              *(undefined8 *)(lVar5 + 0xa8) = uStack_d0;
              *(undefined8 *)(lVar5 + 0xa0) = uStack_d8;
              *(undefined8 *)(lVar5 + 0x98) = local_e0;
              lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
              FUN_03a153e0();
              uStack_e8 = *(undefined8 *)(lVar5 + 0xb0);
              uStack_f0 = *(undefined8 *)(lVar5 + 0xa8);
              uStack_f8 = *(undefined8 *)(lVar5 + 0xa0);
              local_100 = *(undefined8 *)(lVar5 + 0x98);
              *(long *)(lVar5 + 0xf0) = lVar9;
              puVar2 = Method_FriendButton_<>c__DisplayClass29_0_<OnInviteButtonPressed>b__1__;
              if (lVar9 != 0) {
                local_120 = local_100;
                uStack_118 = uStack_f8;
                uStack_110 = uStack_f0;
                uStack_108 = uStack_e8;
                FUN_03a14710(lVar9,&local_120,param_2);
                lVar9 = FUN_03a14744(param_2);
                uStack_78 = *(undefined8 *)(lVar5 + 0xa0);
                local_80 = *(undefined8 *)(lVar5 + 0x98);
                uStack_68 = *(undefined8 *)(lVar5 + 0xb0);
                uStack_70 = *(undefined8 *)(lVar5 + 0xa8);
                uVar4 = *(undefined8 *)(lVar5 + 0xf0);
                FUN_026c3a2c(local_a0,&local_80,*(undefined8 *)puVar2);
                puVar2 = Method_FriendSystem_<>c_<ReportOnceSelfAliveness>b__48_0__;
                if (lVar9 != 0) {
                  FUN_023c9924(&local_80,lVar9,uVar4,local_a0,
                               *(undefined8 *)
                                Method_FriendSystem_<SyncPlatformFriendCoroutine>d__55_System_Collections_IEnumerator_Reset__
                              );
                  uStack_b8 = uStack_78;
                  local_c0 = local_80;
                  uStack_a8 = uStack_68;
                  uStack_b0 = uStack_70;
                  lVar9 = FUN_03a14744(param_2);
                  uStack_78 = uStack_b8;
                  local_80 = local_c0;
                  uStack_68 = uStack_a8;
                  uStack_70 = uStack_b0;
                  FUN_0259a3e8(local_a0,&local_80,*(undefined8 *)puVar2);
                  if (lVar9 != 0) {
                    FUN_023c9a74(&local_80,lVar9,lVar5,local_a0,
                                 *(undefined8 *)
                                  Method_FriendsList_<>c_<DisplayBlockingPlayer>b__95_0__);
                    param_1[1] = uStack_78;
                    *param_1 = local_80;
                    param_1[3] = uStack_68;
                    param_1[2] = uStack_70;
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
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


