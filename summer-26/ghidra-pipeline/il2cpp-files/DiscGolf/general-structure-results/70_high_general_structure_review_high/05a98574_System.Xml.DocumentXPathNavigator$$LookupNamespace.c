/*
FUNCTION_NAME: System.Xml.DocumentXPathNavigator$$LookupNamespace
ENTRY_POINT: 05a98574
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void System_Xml_DocumentXPathNavigator__LookupNamespace(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar11;
  long *unaff_x22;
  
  lVar10 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(lVar10 + 0x290) = unaff_x19;
  LeanTween__value(lVar10 + 0x290);
                    /* try { // try from 05a98590 to 05b9859f has its CatchHandler @ 05a98a90 */
  plVar8 = (long *)FUN_02d966a4(*unaff_x21,0xd);
  if (plVar8 == (long *)0x0) {
LAB_05a9a904:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x200);
  if ((lVar10 != 0) &&
     (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_05a9a8f0:
    uVar11 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar11,0);
  }
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar10;
    LeanTween__value(plVar8 + 4,lVar10);
    lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x150);
    if ((lVar10 != 0) &&
       (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
    goto LAB_05a9a8f0;
    if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
      plVar8[5] = lVar10;
      LeanTween__value(plVar8 + 5,lVar10);
      lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x158);
      if ((lVar10 != 0) &&
         (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_05a9a8f0;
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = lVar10;
        LeanTween__value(plVar8 + 6,lVar10);
        lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x160);
        if ((lVar10 != 0) &&
           (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_05a9a8f0;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
          plVar8[7] = lVar10;
          LeanTween__value(plVar8 + 7,lVar10);
          lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x118);
          if ((lVar10 != 0) &&
             (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
          goto LAB_05a9a8f0;
          if (4 < *(uint *)(plVar8 + 3)) {
            plVar8[8] = lVar10;
            LeanTween__value(plVar8 + 8,lVar10);
            lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x120);
            if ((lVar10 != 0) &&
               (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_05a9a8f0;
            if (5 < *(uint *)(plVar8 + 3)) {
              plVar8[9] = lVar10;
              LeanTween__value(plVar8 + 9,lVar10);
              lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b0);
              if ((lVar10 != 0) &&
                 (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_05a9a8f0;
              if (6 < *(uint *)(plVar8 + 3)) {
                plVar8[10] = lVar10;
                LeanTween__value(plVar8 + 10,lVar10);
                lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b8);
                if ((lVar10 != 0) &&
                   (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_05a9a8f0;
                if ((*(uint *)(plVar8 + 3) & 0xfffffff8) != 0) {
                  plVar8[0xb] = lVar10;
                  LeanTween__value(plVar8 + 0xb,lVar10);
                  lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1d8);
                  if ((lVar10 != 0) &&
                     (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0
                     )) goto LAB_05a9a8f0;
                  if (8 < *(uint *)(plVar8 + 3)) {
                    plVar8[0xc] = lVar10;
                    LeanTween__value(plVar8 + 0xc,lVar10);
                    lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x128);
                    if ((lVar10 != 0) &&
                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar9 == 0)) goto LAB_05a9a8f0;
                    if (9 < *(uint *)(plVar8 + 3)) {
                      plVar8[0xd] = lVar10;
                      LeanTween__value(plVar8 + 0xd,lVar10);
                      lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1e8);
                      if ((lVar10 != 0) &&
                         (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar9 == 0)) goto LAB_05a9a8f0;
                      if (10 < *(uint *)(plVar8 + 3)) {
                        plVar8[0xe] = lVar10;
                        LeanTween__value(plVar8 + 0xe,lVar10);
                        lVar10 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1a0);
                        if ((lVar10 != 0) &&
                           (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar9 == 0)) goto LAB_05a9a8f0;
                        puVar7 = 
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_AutoMatchmakingNGO_<JoinLobby>d__10>__
                        ;
                        puVar5 = 
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_AutoMatchmakingNGO_<CreateLobby>d__11>__
                        ;
                        puVar1 = Assets_Scripts_HoleDifficultyImporter_<>c__DisplayClass3_0_TypeInfo
                        ;
                        if (0xb < *(uint *)(plVar8 + 3)) {
                          plVar8[0xf] = lVar10;
                          LeanTween__value(plVar8 + 0xf,lVar10);
                          lVar10 = *(long *)(*unaff_x22 + 0xb8);
                          *(long **)(lVar10 + 0x298) = plVar8;
                          LeanTween__value(lVar10 + 0x298,plVar8);
                          plVar8 = (long *)FUN_02d966a4(*(undefined8 *)puVar5,0x26);
                          uVar11 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
                          lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                          FUN_05a9b958(lVar10,*(undefined8 *)puVar1,uVar11);
                          if (plVar8 == (long *)0x0) goto LAB_05a9a904;
                          if ((lVar10 != 0) &&
                             (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                             lVar9 == 0)) goto LAB_05a9a8f0;
                          puVar1 = Unity_Hierarchy_HierarchyViewNodesEnumerable_Predicate_TypeInfo;
                          if ((int)plVar8[3] != 0) {
                            plVar8[4] = lVar10;
                            LeanTween__value(plVar8 + 4,lVar10);
                            uVar11 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x148);
                            lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                            FUN_05a9b958(lVar10,*(undefined8 *)puVar1,uVar11);
                            if ((lVar10 != 0) &&
                               (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar9 == 0)) goto LAB_05a9a8f0;
                            puVar1 = OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo;
                            if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                              plVar8[5] = lVar10;
                              LeanTween__value(plVar8 + 5,lVar10);
                              uVar11 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
                              lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                              FUN_05a9b958(lVar10,*(undefined8 *)puVar1,uVar11);
                              if ((lVar10 != 0) &&
                                 (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar8 + 0x40))
                                 , lVar9 == 0)) goto LAB_05a9a8f0;
                              puVar4 = PTR_DAT_06a17030;
                              if (2 < *(uint *)(plVar8 + 3)) {
                                plVar8[6] = lVar10;
                                LeanTween__value(plVar8 + 6,lVar10);
                                uVar11 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
                                lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                FUN_05a9b958(lVar10,*(undefined8 *)puVar4,uVar11);
                                if ((lVar10 != 0) &&
                                   (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                       (*plVar8 + 0x40)), lVar9 == 0
                                   )) goto LAB_05a9a8f0;
                                puVar4 = System_Net_Http_HttpClientHandler_<>c_TypeInfo;
                                if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                                  plVar8[7] = lVar10;
                                  LeanTween__value(plVar8 + 7,lVar10);
                                  uVar11 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
                                  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                  FUN_05a9b958(lVar10,*(undefined8 *)puVar4,uVar11);
                                  if ((lVar10 != 0) &&
                                     (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                         (*plVar8 + 0x40)),
                                     lVar9 == 0)) goto LAB_05a9a8f0;
                                  puVar6 = PTR_DAT_06a1e340;
                                  if (4 < *(uint *)(plVar8 + 3)) {
                                    plVar8[8] = lVar10;
                                    LeanTween__value(plVar8 + 8,lVar10);
                                    uVar11 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar6,uVar11);
                                    if ((lVar10 != 0) &&
                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                           (*plVar8 + 0x40)),
                                       lVar9 == 0)) goto LAB_05a9a8f0;
                                    puVar3 = 
                                    System_Net_Http_Headers_HttpHeaders_<GetEnumerator>d__19_TypeInfo
                                    ;
                                    if (5 < *(uint *)(plVar8 + 3)) {
                                      plVar8[9] = lVar10;
                                      LeanTween__value(plVar8 + 9,lVar10);
                                      uVar11 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
                                      lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                      FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11);
                                      if ((lVar10 != 0) &&
                                         (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                             (*plVar8 + 0x40)),
                                         lVar9 == 0)) goto LAB_05a9a8f0;
                                      puVar3 = PTR_DAT_06a17038;
                                      if (6 < *(uint *)(plVar8 + 3)) {
                                        plVar8[10] = lVar10;
                                        LeanTween__value(plVar8 + 10,lVar10);
                                        uVar11 = *(undefined8 *)
                                                  (*(long *)(*unaff_x22 + 0xb8) + 0xf8);
                                        lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                        FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11);
                                        if ((lVar10 != 0) &&
                                           (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                               (*plVar8 + 0x40)),
                                           lVar9 == 0)) goto LAB_05a9a8f0;
                                        puVar3 = 
                                        System_Net_Http_Headers_HttpHeaders_HeaderBucket_TypeInfo;
                                        if ((*(uint *)(plVar8 + 3) & 0xfffffff8) != 0) {
                                          plVar8[0xb] = lVar10;
                                          LeanTween__value(plVar8 + 0xb,lVar10);
                                          uVar11 = *(undefined8 *)
                                                    (*(long *)(*unaff_x22 + 0xb8) + 0x120);
                                          lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                          FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11);
                                          if ((lVar10 != 0) &&
                                             (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                                 (*plVar8 + 0x40)),
                                             lVar9 == 0)) goto LAB_05a9a8f0;
                                          puVar3 = 
                                          System_Collections_Generic_List<ERSORoadLog>_TypeInfo;
                                          if (8 < *(uint *)(plVar8 + 3)) {
                                            plVar8[0xc] = lVar10;
                                            LeanTween__value(plVar8 + 0xc,lVar10);
                                            uVar11 = *(undefined8 *)
                                                      (*(long *)(*unaff_x22 + 0xb8) + 0x118);
                                            lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                            FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11);
                                            if ((lVar10 != 0) &&
                                               (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                                   (*plVar8 + 0x40))
                                               , lVar9 == 0)) goto LAB_05a9a8f0;
                                            puVar3 = 
                                            Assets_Scripts_HoleDifficulties_<>c__DisplayClass2_0_TypeInfo
                                            ;
                                            if (9 < *(uint *)(plVar8 + 3)) {
                                              plVar8[0xd] = lVar10;
                                              LeanTween__value(plVar8 + 0xd,lVar10);
                                              uVar11 = *(undefined8 *)
                                                        (*(long *)(*unaff_x22 + 0xb8) + 0x128);
                                              lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                              FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11);
                                              if ((lVar10 != 0) &&
                                                 (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                                     (*plVar8 + 0x40
                                                                                     )), lVar9 == 0)
                                                 ) goto LAB_05a9a8f0;
                                              puVar3 = UnityEngine_UIElements_IMEEvent_<>c_TypeInfo;
                                              if (10 < *(uint *)(plVar8 + 3)) {
                                                plVar8[0xe] = lVar10;
                                                LeanTween__value(plVar8 + 0xe,lVar10);
                                                uVar11 = *(undefined8 *)
                                                          (*(long *)(*unaff_x22 + 0xb8) + 0x130);
                                                lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                                FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11);
                                                if ((lVar10 != 0) &&
                                                   (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *
                                                                                       )(*plVar8 +
                                                                                        0x40)),
                                                   lVar9 == 0)) goto LAB_05a9a8f0;
                                                puVar3 = PTR_DAT_06a17068;
                                                if (0xb < *(uint *)(plVar8 + 3)) {
                                                  plVar8[0xf] = lVar10;
                                                  LeanTween__value(plVar8 + 0xf,lVar10);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x22 + 0xb8) + 0x108);
                                                  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11);
                                                  if ((lVar10 != 0) &&
                                                     (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar9 == 0)) goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<JoinLobby>d__10>__
                                                  ;
                                                  if (0xc < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x10] = lVar10;
                                                    LeanTween__value(plVar8 + 0x10,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x140)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<TryTask>d__9>__
                                                  ;
                                                  if (0xd < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x11] = lVar10;
                                                    LeanTween__value(plVar8 + 0x11,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  Unity_Netcode_IDeferredNetworkMessageManager_TriggerType_TypeInfo
                                                  ;
                                                  if (0xe < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x12] = lVar10;
                                                    LeanTween__value(plVar8 + 0x12,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xc0);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  Unity_Services_Vivox_Mint_Http_HttpClient_<>c__DisplayClass4_0_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffff0) != 0) {
                                                    plVar8[0x13] = lVar10;
                                                    LeanTween__value(plVar8 + 0x13,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1f8)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationAutoLaunch_TypeInfo
                                                  ;
                                                  if (0x10 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x14] = lVar10;
                                                    LeanTween__value(plVar8 + 0x14,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = System_Web_Util_HttpEncoder_<>c_TypeInfo;
                                                  if (0x11 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x15] = lVar10;
                                                    LeanTween__value(plVar8 + 0x15,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x180)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a1ac98;
                                                  if (0x12 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x16] = lVar10;
                                                    LeanTween__value(plVar8 + 0x16,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x150)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Net_Http_Headers_HttpRequestHeaders_<>c_TypeInfo
                                                  ;
                                                  if (0x13 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x17] = lVar10;
                                                    LeanTween__value(plVar8 + 0x17,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x158)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  UnityEngine_UIElements_IMGUIEvent_<>c_TypeInfo;
                                                  if (0x14 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x18] = lVar10;
                                                    LeanTween__value(plVar8 + 0x18,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x160)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a17010;
                                                  if (0x15 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x19] = lVar10;
                                                    LeanTween__value(plVar8 + 0x19,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar3,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  System_Net_HttpWebRequest_NtlmAuthState_TypeInfo;
                                                  if (0x16 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1a] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1a,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b0)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  System_Net_Http_HttpContent_FixedMemoryStream_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1b] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1b,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b8)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRApplications__AddApplicationManifest_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1c] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1c,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d8)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  System_Web_HttpUtility_HttpQSCollection_TypeInfo;
                                                  if (0x19 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1d] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1d,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationKeyByIndex_TypeInfo
                                                  ;
                                                  if (0x1a < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1e] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1e,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x140)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  System_Net_IPAddress_ReadOnlyIPAddress_TypeInfo;
                                                  if (0x1b < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1f] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1f,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a10f20;
                                                  if (0x1c < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x20] = lVar10;
                                                    LeanTween__value(plVar8 + 0x20,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x200)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a13660;
                                                  if (0x1d < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x21] = lVar10;
                                                    LeanTween__value(plVar8 + 0x21,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x210)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo
                                                  ;
                                                  if (0x1e < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x22] = lVar10;
                                                    LeanTween__value(plVar8 + 0x22,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x218)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  UnityEngine_InputSystem_LowLevel_IMECompositionString_Enumerator_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar8 + 3) & 0xffffffe0) != 0) {
                                                    plVar8[0x23] = lVar10;
                                                    LeanTween__value(plVar8 + 0x23,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x228)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRApplications__CancelApplicationLaunch_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x24] = lVar10;
                                                    LeanTween__value(plVar8 + 0x24,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x240)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationKeyByProcessId_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x25] = lVar10;
                                                    LeanTween__value(plVar8 + 0x25,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x230)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  UnityEngine_IMGUITextHandle_TextHandleTuple_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x26] = lVar10;
                                                    LeanTween__value(plVar8 + 0x26,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x238)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a1a9f0;
                                                  if (0x23 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x27] = lVar10;
                                                    LeanTween__value(plVar8 + 0x27,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa8);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a12628;
                                                  if (0x24 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x28] = lVar10;
                                                    LeanTween__value(plVar8 + 0x28,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x248)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b958(lVar10,*(undefined8 *)puVar2,uVar11
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo
                                                  ;
                                                  if (0x25 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x29] = lVar10;
                                                    LeanTween__value(plVar8 + 0x29,lVar10);
                                                    lVar10 = *(long *)(*unaff_x22 + 0xb8);
                                                    *(long **)(lVar10 + 0x2a0) = plVar8;
                                                    LeanTween__value(lVar10 + 0x2a0,plVar8);
                                                    plVar8 = (long *)FUN_02d966a4(*(undefined8 *)
                                                                                   puVar5,0x2d);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x120)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar2,uVar11
                                                                 ,0xb);
                                                    if (plVar8 == (long *)0x0) goto LAB_05a9a904;
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = OVR_OpenVR_IVRIOBuffer__Open_TypeInfo;
                                                  if ((int)plVar8[3] != 0) {
                                                    plVar8[4] = lVar10;
                                                    LeanTween__value(plVar8 + 4,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x118)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVROverlay__CreateOverlay_TypeInfo;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                                                    plVar8[5] = lVar10;
                                                    LeanTween__value(plVar8 + 5,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x150)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,5);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__GetActionHandle_TypeInfo;
                                                  if (2 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[6] = lVar10;
                                                    LeanTween__value(plVar8 + 6,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x158)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,5);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__GetActionSetHandle_TypeInfo;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                                                    plVar8[7] = lVar10;
                                                    LeanTween__value(plVar8 + 7,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x160)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo;
                                                  if (4 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[8] = lVar10;
                                                    LeanTween__value(plVar8 + 8,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1a0)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,9);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo
                                                  ;
                                                  if (5 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[9] = lVar10;
                                                    LeanTween__value(plVar8 + 9,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b0)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,0x28);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo
                                                  ;
                                                  if (6 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[10] = lVar10;
                                                    LeanTween__value(plVar8 + 10,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b8)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffff8) != 0) {
                                                    plVar8[0xb] = lVar10;
                                                    LeanTween__value(plVar8 + 0xb,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d8)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = PTR_DAT_06a19758;
                                                  if (8 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0xc] = lVar10;
                                                    LeanTween__value(plVar8 + 0xc,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x198)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,0x28);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__GetSkeletalActionData_TypeInfo
                                                  ;
                                                  if (9 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0xd] = lVar10;
                                                    LeanTween__value(plVar8 + 0xd,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1e8)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (10 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0xe] = lVar10;
                                                    LeanTween__value(plVar8 + 0xe,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa0);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<CreateOrJoinLobby>d__8>__
                                                  ,uVar11,0xffffffff);
                                                  if ((lVar10 != 0) &&
                                                     (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar9 == 0)) goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__TriggerHapticVibrationAction_TypeInfo
                                                  ;
                                                  if (0xb < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0xf] = lVar10;
                                                    LeanTween__value(plVar8 + 0xf,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa8);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
                                                  ;
                                                  if (0xc < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x10] = lVar10;
                                                    LeanTween__value(plVar8 + 0x10,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb0);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar5,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0xd < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x11] = lVar10;
                                                    LeanTween__value(plVar8 + 0x11,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb8);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = PTR_DAT_06a17050;
                                                  if (0xe < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x12] = lVar10;
                                                    LeanTween__value(plVar8 + 0x12,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xc0);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x25);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffff0) != 0) {
                                                    plVar8[0x13] = lVar10;
                                                    LeanTween__value(plVar8 + 0x13,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xd0);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar4,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x10 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x14] = lVar10;
                                                    LeanTween__value(plVar8 + 0x14,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xd8);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar6,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x11 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x15] = lVar10;
                                                    LeanTween__value(plVar8 + 0x15,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xf8);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)
                                                                         PTR_DAT_06a17038,uVar11,0xb
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = PTR_DAT_06a17008;
                                                  if (0x12 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x16] = lVar10;
                                                    LeanTween__value(plVar8 + 0x16,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x100)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetInputSourceHandle_TypeInfo
                                                  ;
                                                  if (0x13 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x17] = lVar10;
                                                    LeanTween__value(plVar8 + 0x17,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x110)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x14 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x18] = lVar10;
                                                    LeanTween__value(plVar8 + 0x18,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x138)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)
                                                                         PTR_DAT_06a17068,uVar11,0xb
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__SetActionManifestPath_TypeInfo
                                                  ;
                                                  if (0x15 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x19] = lVar10;
                                                    LeanTween__value(plVar8 + 0x19,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xf0);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetOriginTrackedDeviceInfo_TypeInfo
                                                  ;
                                                  if (0x16 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1a] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1a,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x188)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRNotifications__RemoveNotification_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1b] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1b,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 400);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetSkeletalBoneDataCompressed_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1c] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1c,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x250)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1d] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1d,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 600);
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetAnalogActionData_TypeInfo;
                                                  if (0x1a < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1e] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1e,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x148)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0xb);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x1b < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x1f] = lVar10;
                                                    LeanTween__value(plVar8 + 0x1f,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar3,uVar11
                                                                 ,0x1f);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__ShowActionOrigins_TypeInfo;
                                                  if (0x1c < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x20] = lVar10;
                                                    LeanTween__value(plVar8 + 0x20,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x170)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x12);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRNotifications__CreateNotification_TypeInfo
                                                  ;
                                                  if (0x1d < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x21] = lVar10;
                                                    LeanTween__value(plVar8 + 0x21,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x178)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x28);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = PTR_DAT_06a00020;
                                                  if (0x1e < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x22] = lVar10;
                                                    LeanTween__value(plVar8 + 0x22,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x180)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x1d);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__UpdateActionState_TypeInfo;
                                                  if ((*(uint *)(plVar8 + 3) & 0xffffffe0) != 0) {
                                                    plVar8[0x23] = lVar10;
                                                    LeanTween__value(plVar8 + 0x23,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1a8)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x22);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x24] = lVar10;
                                                    LeanTween__value(plVar8 + 0x24,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1c0)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x1d);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x25] = lVar10;
                                                    LeanTween__value(plVar8 + 0x25,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1c8)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x1d);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetDigitalActionData_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x26] = lVar10;
                                                    LeanTween__value(plVar8 + 0x26,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d0)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x26);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = OVR_OpenVR_IVRIOBuffer__Read_TypeInfo;
                                                  if (0x23 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x27] = lVar10;
                                                    LeanTween__value(plVar8 + 0x27,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1e0)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x21);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = PTR_DAT_06a17020;
                                                  if (0x24 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x28] = lVar10;
                                                    LeanTween__value(plVar8 + 0x28,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1f8)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x1c);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x25 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x29] = lVar10;
                                                    LeanTween__value(plVar8 + 0x29,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x200)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)
                                                                         PTR_DAT_06a10f20,uVar11,0xb
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x26 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x2a] = lVar10;
                                                    LeanTween__value(plVar8 + 0x2a,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x208)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)
                                                                         PTR_DAT_06a13660,uVar11,0xb
                                                                );
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = System_ComponentModel_UInt64Converter_var
                                                  ;
                                                  if (0x27 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x2b] = lVar10;
                                                    LeanTween__value(plVar8 + 0x2b,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x220)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x23);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo
                                                  ;
                                                  if (0x28 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x2c] = lVar10;
                                                    LeanTween__value(plVar8 + 0x2c,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x228)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x2c);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetPoseActionData_TypeInfo;
                                                  if (0x29 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x2d] = lVar10;
                                                    LeanTween__value(plVar8 + 0x2d,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x230)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x2b);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = OVR_OpenVR_IVRIOBuffer__Write_TypeInfo;
                                                  if (0x2a < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x2e] = lVar10;
                                                    LeanTween__value(plVar8 + 0x2e,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x238)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x21);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo
                                                  ;
                                                  if (0x2b < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x2f] = lVar10;
                                                    LeanTween__value(plVar8 + 0x2f,lVar10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x240)
                                                    ;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_05a9b99c(lVar10,*(undefined8 *)puVar1,uVar11
                                                                 ,0x2a);
                                                    if ((lVar10 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x2c < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x30] = lVar10;
                                                    LeanTween__value(plVar8 + 0x30,lVar10);
                                                    lVar10 = *(long *)(*unaff_x22 + 0xb8);
                                                    *(long **)(lVar10 + 0x2a8) = plVar8;
                                                    LeanTween__value(lVar10 + 0x2a8,plVar8);
                                                    FUN_05a9b9f4();
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


