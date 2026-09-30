/*
FUNCTION_NAME: System.Xml.DocumentXPathNavigator$$PathHasDuplicateNamespace
ENTRY_POINT: 05a98480
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


void System_Xml_DocumentXPathNavigator__PathHasDuplicateNamespace(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar11;
  long *unaff_x22;
  
  lVar8 = thunk_FUN_02dd3048();
  if (lVar8 != 0) {
    if (8 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0xc] = unaff_x20;
      LeanTween__value();
      lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x128);
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)), lVar9 == 0))
      goto LAB_05a9a8f0;
      if (9 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 05a984e8 to 05b984f7 has its CatchHandler @ 05a98a70 */
        unaff_x19[0xd] = lVar8;
        LeanTween__value(unaff_x19 + 0xd,lVar8);
        lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1f0);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)), lVar9 == 0))
        goto LAB_05a9a8f0;
        if (10 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 05a98528 to 05b9852b has its CatchHandler @ 05a98a30 */
          unaff_x19[0xe] = lVar8;
                    /* try { // try from 05a9852c to 05b9853b has its CatchHandler @ 05a98a44 */
          LeanTween__value(unaff_x19 + 0xe,lVar8);
          lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1a0);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)), lVar9 == 0))
          goto LAB_05a9a8f0;
          if (0xb < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0xf] = lVar8;
            LeanTween__value(unaff_x19 + 0xf,lVar8);
            lVar8 = *(long *)(*unaff_x22 + 0xb8);
            *(long **)(lVar8 + 0x290) = unaff_x19;
            LeanTween__value(lVar8 + 0x290);
            plVar10 = (long *)FUN_02d966a4(*unaff_x21,0xd);
            if (plVar10 == (long *)0x0) {
LAB_05a9a904:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x200);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
            goto LAB_05a9a8f0;
            if ((int)plVar10[3] != 0) {
              plVar10[4] = lVar8;
              LeanTween__value(plVar10 + 4,lVar8);
              lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x150);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
              goto LAB_05a9a8f0;
              if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
                plVar10[5] = lVar8;
                LeanTween__value(plVar10 + 5,lVar8);
                lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x158);
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                goto LAB_05a9a8f0;
                if (2 < *(uint *)(plVar10 + 3)) {
                  plVar10[6] = lVar8;
                  LeanTween__value(plVar10 + 6,lVar8);
                  lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x160);
                  if ((lVar8 != 0) &&
                     (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0
                     )) goto LAB_05a9a8f0;
                  if ((*(uint *)(plVar10 + 3) & 0xfffffffc) != 0) {
                    plVar10[7] = lVar8;
                    LeanTween__value(plVar10 + 7,lVar8);
                    lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x118);
                    if ((lVar8 != 0) &&
                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40)),
                       lVar9 == 0)) goto LAB_05a9a8f0;
                    if (4 < *(uint *)(plVar10 + 3)) {
                      plVar10[8] = lVar8;
                      LeanTween__value(plVar10 + 8,lVar8);
                      lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x120);
                      if ((lVar8 != 0) &&
                         (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40)),
                         lVar9 == 0)) goto LAB_05a9a8f0;
                      if (5 < *(uint *)(plVar10 + 3)) {
                        plVar10[9] = lVar8;
                        LeanTween__value(plVar10 + 9,lVar8);
                        lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b0);
                        if ((lVar8 != 0) &&
                           (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar9 == 0)) goto LAB_05a9a8f0;
                        if (6 < *(uint *)(plVar10 + 3)) {
                          plVar10[10] = lVar8;
                          LeanTween__value(plVar10 + 10,lVar8);
                          lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b8);
                          if ((lVar8 != 0) &&
                             (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40)),
                             lVar9 == 0)) goto LAB_05a9a8f0;
                          if ((*(uint *)(plVar10 + 3) & 0xfffffff8) != 0) {
                            plVar10[0xb] = lVar8;
                            LeanTween__value(plVar10 + 0xb,lVar8);
                            lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1d8);
                            if ((lVar8 != 0) &&
                               (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40)),
                               lVar9 == 0)) goto LAB_05a9a8f0;
                            if (8 < *(uint *)(plVar10 + 3)) {
                              plVar10[0xc] = lVar8;
                              LeanTween__value(plVar10 + 0xc,lVar8);
                              lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x128);
                              if ((lVar8 != 0) &&
                                 (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar10 + 0x40))
                                 , lVar9 == 0)) goto LAB_05a9a8f0;
                              if (9 < *(uint *)(plVar10 + 3)) {
                                plVar10[0xd] = lVar8;
                                LeanTween__value(plVar10 + 0xd,lVar8);
                                lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1e8);
                                if ((lVar8 != 0) &&
                                   (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)
                                                                      (*plVar10 + 0x40)), lVar9 == 0
                                   )) goto LAB_05a9a8f0;
                                if (10 < *(uint *)(plVar10 + 3)) {
                                  plVar10[0xe] = lVar8;
                                  LeanTween__value(plVar10 + 0xe,lVar8);
                                  lVar8 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1a0);
                                  if ((lVar8 != 0) &&
                                     (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)
                                                                        (*plVar10 + 0x40)),
                                     lVar9 == 0)) goto LAB_05a9a8f0;
                                  puVar7 = 
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_AutoMatchmakingNGO_<JoinLobby>d__10>__
                                  ;
                                  puVar5 = 
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_AutoMatchmakingNGO_<CreateLobby>d__11>__
                                  ;
                                  puVar1 = 
                                  Assets_Scripts_HoleDifficultyImporter_<>c__DisplayClass3_0_TypeInfo
                                  ;
                                  if (0xb < *(uint *)(plVar10 + 3)) {
                                    plVar10[0xf] = lVar8;
                                    LeanTween__value(plVar10 + 0xf,lVar8);
                                    lVar8 = *(long *)(*unaff_x22 + 0xb8);
                                    *(long **)(lVar8 + 0x298) = plVar10;
                                    LeanTween__value(lVar8 + 0x298,plVar10);
                                    plVar10 = (long *)FUN_02d966a4(*(undefined8 *)puVar5,0x26);
                                    uVar11 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar1,uVar11);
                                    if (plVar10 == (long *)0x0) goto LAB_05a9a904;
                                    if ((lVar8 != 0) &&
                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)
                                                                          (*plVar10 + 0x40)),
                                       lVar9 == 0)) goto LAB_05a9a8f0;
                                    puVar1 = 
                                    Unity_Hierarchy_HierarchyViewNodesEnumerable_Predicate_TypeInfo;
                                    if ((int)plVar10[3] != 0) {
                                      plVar10[4] = lVar8;
                                      LeanTween__value(plVar10 + 4,lVar8);
                                      uVar11 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x148)
                                      ;
                                      lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                      FUN_05a9b958(lVar8,*(undefined8 *)puVar1,uVar11);
                                      if ((lVar8 != 0) &&
                                         (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)
                                                                            (*plVar10 + 0x40)),
                                         lVar9 == 0)) goto LAB_05a9a8f0;
                                      puVar1 = 
                                      OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo;
                                      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
                                        plVar10[5] = lVar8;
                                        LeanTween__value(plVar10 + 5,lVar8);
                                        uVar11 = *(undefined8 *)
                                                  (*(long *)(*unaff_x22 + 0xb8) + 0xb8);
                                        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                        FUN_05a9b958(lVar8,*(undefined8 *)puVar1,uVar11);
                                        if ((lVar8 != 0) &&
                                           (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)
                                                                              (*plVar10 + 0x40)),
                                           lVar9 == 0)) goto LAB_05a9a8f0;
                                        puVar4 = PTR_DAT_06a17030;
                                        if (2 < *(uint *)(plVar10 + 3)) {
                                          plVar10[6] = lVar8;
                                          LeanTween__value(plVar10 + 6,lVar8);
                                          uVar11 = *(undefined8 *)
                                                    (*(long *)(*unaff_x22 + 0xb8) + 200);
                                          lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                          FUN_05a9b958(lVar8,*(undefined8 *)puVar4,uVar11);
                                          if ((lVar8 != 0) &&
                                             (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)
                                                                                (*plVar10 + 0x40)),
                                             lVar9 == 0)) goto LAB_05a9a8f0;
                                          puVar4 = System_Net_Http_HttpClientHandler_<>c_TypeInfo;
                                          if ((*(uint *)(plVar10 + 3) & 0xfffffffc) != 0) {
                                            plVar10[7] = lVar8;
                                            LeanTween__value(plVar10 + 7,lVar8);
                                            uVar11 = *(undefined8 *)
                                                      (*(long *)(*unaff_x22 + 0xb8) + 0xd0);
                                            lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                            FUN_05a9b958(lVar8,*(undefined8 *)puVar4,uVar11);
                                            if ((lVar8 != 0) &&
                                               (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)
                                                                                  (*plVar10 + 0x40))
                                               , lVar9 == 0)) goto LAB_05a9a8f0;
                                            puVar6 = PTR_DAT_06a1e340;
                                            if (4 < *(uint *)(plVar10 + 3)) {
                                              plVar10[8] = lVar8;
                                              LeanTween__value(plVar10 + 8,lVar8);
                                              uVar11 = *(undefined8 *)
                                                        (*(long *)(*unaff_x22 + 0xb8) + 0xe0);
                                              lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                              FUN_05a9b958(lVar8,*(undefined8 *)puVar6,uVar11);
                                              if ((lVar8 != 0) &&
                                                 (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)
                                                                                    (*plVar10 + 0x40
                                                                                    )), lVar9 == 0))
                                              goto LAB_05a9a8f0;
                                              puVar3 = 
                                              System_Net_Http_Headers_HttpHeaders_<GetEnumerator>d__19_TypeInfo
                                              ;
                                              if (5 < *(uint *)(plVar10 + 3)) {
                                                plVar10[9] = lVar8;
                                                LeanTween__value(plVar10 + 9,lVar8);
                                                uVar11 = *(undefined8 *)
                                                          (*(long *)(*unaff_x22 + 0xb8) + 0xe8);
                                                lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                                FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11);
                                                if ((lVar8 != 0) &&
                                                   (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)
                                                                                      (*plVar10 +
                                                                                      0x40)),
                                                   lVar9 == 0)) goto LAB_05a9a8f0;
                                                puVar3 = PTR_DAT_06a17038;
                                                if (6 < *(uint *)(plVar10 + 3)) {
                                                  plVar10[10] = lVar8;
                                                  LeanTween__value(plVar10 + 10,lVar8);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x22 + 0xb8) + 0xf8);
                                                  lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                                                  FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11);
                                                  if ((lVar8 != 0) &&
                                                     (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8
                                                                                         *)(*plVar10
                                                                                           + 0x40)),
                                                     lVar9 == 0)) goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Net_Http_Headers_HttpHeaders_HeaderBucket_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar10 + 3) & 0xfffffff8) != 0) {
                                                    plVar10[0xb] = lVar8;
                                                    LeanTween__value(plVar10 + 0xb,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x120)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Collections_Generic_List<ERSORoadLog>_TypeInfo
                                                  ;
                                                  if (8 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0xc] = lVar8;
                                                    LeanTween__value(plVar10 + 0xc,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x118)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  Assets_Scripts_HoleDifficulties_<>c__DisplayClass2_0_TypeInfo
                                                  ;
                                                  if (9 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0xd] = lVar8;
                                                    LeanTween__value(plVar10 + 0xd,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x128)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  UnityEngine_UIElements_IMEEvent_<>c_TypeInfo;
                                                  if (10 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0xe] = lVar8;
                                                    LeanTween__value(plVar10 + 0xe,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x130)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a17068;
                                                  if (0xb < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0xf] = lVar8;
                                                    LeanTween__value(plVar10 + 0xf,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<JoinLobby>d__10>__
                                                  ;
                                                  if (0xc < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x10] = lVar8;
                                                    LeanTween__value(plVar10 + 0x10,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x140)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<TryTask>d__9>__
                                                  ;
                                                  if (0xd < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x11] = lVar8;
                                                    LeanTween__value(plVar10 + 0x11,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  Unity_Netcode_IDeferredNetworkMessageManager_TriggerType_TypeInfo
                                                  ;
                                                  if (0xe < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x12] = lVar8;
                                                    LeanTween__value(plVar10 + 0x12,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xc0);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  Unity_Services_Vivox_Mint_Http_HttpClient_<>c__DisplayClass4_0_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar10 + 3) & 0xfffffff0) != 0) {
                                                    plVar10[0x13] = lVar8;
                                                    LeanTween__value(plVar10 + 0x13,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1f8)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationAutoLaunch_TypeInfo
                                                  ;
                                                  if (0x10 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x14] = lVar8;
                                                    LeanTween__value(plVar10 + 0x14,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = System_Web_Util_HttpEncoder_<>c_TypeInfo;
                                                  if (0x11 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x15] = lVar8;
                                                    LeanTween__value(plVar10 + 0x15,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x180)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a1ac98;
                                                  if (0x12 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x16] = lVar8;
                                                    LeanTween__value(plVar10 + 0x16,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x150)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Net_Http_Headers_HttpRequestHeaders_<>c_TypeInfo
                                                  ;
                                                  if (0x13 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x17] = lVar8;
                                                    LeanTween__value(plVar10 + 0x17,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x158)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  UnityEngine_UIElements_IMGUIEvent_<>c_TypeInfo;
                                                  if (0x14 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x18] = lVar8;
                                                    LeanTween__value(plVar10 + 0x18,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x160)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a17010;
                                                  if (0x15 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x19] = lVar8;
                                                    LeanTween__value(plVar10 + 0x19,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar3,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  System_Net_HttpWebRequest_NtlmAuthState_TypeInfo;
                                                  if (0x16 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1a] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1a,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b0)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  System_Net_Http_HttpContent_FixedMemoryStream_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1b] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1b,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b8)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRApplications__AddApplicationManifest_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1c] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1c,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d8)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  System_Web_HttpUtility_HttpQSCollection_TypeInfo;
                                                  if (0x19 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1d] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1d,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationKeyByIndex_TypeInfo
                                                  ;
                                                  if (0x1a < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1e] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1e,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x140)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  System_Net_IPAddress_ReadOnlyIPAddress_TypeInfo;
                                                  if (0x1b < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1f] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1f,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a10f20;
                                                  if (0x1c < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x20] = lVar8;
                                                    LeanTween__value(plVar10 + 0x20,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x200)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a13660;
                                                  if (0x1d < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x21] = lVar8;
                                                    LeanTween__value(plVar10 + 0x21,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x210)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo
                                                  ;
                                                  if (0x1e < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x22] = lVar8;
                                                    LeanTween__value(plVar10 + 0x22,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x218)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  UnityEngine_InputSystem_LowLevel_IMECompositionString_Enumerator_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar10 + 3) & 0xffffffe0) != 0) {
                                                    plVar10[0x23] = lVar8;
                                                    LeanTween__value(plVar10 + 0x23,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x228)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRApplications__CancelApplicationLaunch_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x24] = lVar8;
                                                    LeanTween__value(plVar10 + 0x24,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x240)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationKeyByProcessId_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x25] = lVar8;
                                                    LeanTween__value(plVar10 + 0x25,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x230)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  UnityEngine_IMGUITextHandle_TextHandleTuple_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x26] = lVar8;
                                                    LeanTween__value(plVar10 + 0x26,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x238)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a1a9f0;
                                                  if (0x23 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x27] = lVar8;
                                                    LeanTween__value(plVar10 + 0x27,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa8);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a12628;
                                                  if (0x24 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x28] = lVar8;
                                                    LeanTween__value(plVar10 + 0x28,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x248)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b958(lVar8,*(undefined8 *)puVar2,uVar11)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo
                                                  ;
                                                  if (0x25 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x29] = lVar8;
                                                    LeanTween__value(plVar10 + 0x29,lVar8);
                                                    lVar8 = *(long *)(*unaff_x22 + 0xb8);
                                                    *(long **)(lVar8 + 0x2a0) = plVar10;
                                                    LeanTween__value(lVar8 + 0x2a0,plVar10);
                                                    plVar10 = (long *)FUN_02d966a4(*(undefined8 *)
                                                                                    puVar5,0x2d);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x120)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar2,uVar11,
                                                                 0xb);
                                                    if (plVar10 == (long *)0x0) goto LAB_05a9a904;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = OVR_OpenVR_IVRIOBuffer__Open_TypeInfo;
                                                  if ((int)plVar10[3] != 0) {
                                                    plVar10[4] = lVar8;
                                                    LeanTween__value(plVar10 + 4,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x118)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVROverlay__CreateOverlay_TypeInfo;
                                                  if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
                                                    plVar10[5] = lVar8;
                                                    LeanTween__value(plVar10 + 5,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x150)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 5);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__GetActionHandle_TypeInfo;
                                                  if (2 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[6] = lVar8;
                                                    LeanTween__value(plVar10 + 6,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x158)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 5);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__GetActionSetHandle_TypeInfo;
                                                  if ((*(uint *)(plVar10 + 3) & 0xfffffffc) != 0) {
                                                    plVar10[7] = lVar8;
                                                    LeanTween__value(plVar10 + 7,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x160)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo;
                                                  if (4 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[8] = lVar8;
                                                    LeanTween__value(plVar10 + 8,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1a0)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 9);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo
                                                  ;
                                                  if (5 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[9] = lVar8;
                                                    LeanTween__value(plVar10 + 9,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b0)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 0x28);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo
                                                  ;
                                                  if (6 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[10] = lVar8;
                                                    LeanTween__value(plVar10 + 10,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b8)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar10 + 3) & 0xfffffff8) != 0) {
                                                    plVar10[0xb] = lVar8;
                                                    LeanTween__value(plVar10 + 0xb,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d8)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = PTR_DAT_06a19758;
                                                  if (8 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0xc] = lVar8;
                                                    LeanTween__value(plVar10 + 0xc,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x198)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 0x28);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__GetSkeletalActionData_TypeInfo
                                                  ;
                                                  if (9 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0xd] = lVar8;
                                                    LeanTween__value(plVar10 + 0xd,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1e8)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (10 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0xe] = lVar8;
                                                    LeanTween__value(plVar10 + 0xe,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa0);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<CreateOrJoinLobby>d__8>__
                                                  ,uVar11,0xffffffff);
                                                  if ((lVar8 != 0) &&
                                                     (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8
                                                                                         *)(*plVar10
                                                                                           + 0x40)),
                                                     lVar9 == 0)) goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRInput__TriggerHapticVibrationAction_TypeInfo
                                                  ;
                                                  if (0xb < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0xf] = lVar8;
                                                    LeanTween__value(plVar10 + 0xf,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa8);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
                                                  ;
                                                  if (0xc < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x10] = lVar8;
                                                    LeanTween__value(plVar10 + 0x10,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb0);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar5,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0xd < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x11] = lVar8;
                                                    LeanTween__value(plVar10 + 0x11,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb8);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = PTR_DAT_06a17050;
                                                  if (0xe < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x12] = lVar8;
                                                    LeanTween__value(plVar10 + 0x12,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xc0);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x25);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if ((*(uint *)(plVar10 + 3) & 0xfffffff0) != 0) {
                                                    plVar10[0x13] = lVar8;
                                                    LeanTween__value(plVar10 + 0x13,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xd0);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar4,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x10 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x14] = lVar8;
                                                    LeanTween__value(plVar10 + 0x14,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xd8);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar6,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x11 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x15] = lVar8;
                                                    LeanTween__value(plVar10 + 0x15,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xf8);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)
                                                                        PTR_DAT_06a17038,uVar11,0xb)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = PTR_DAT_06a17008;
                                                  if (0x12 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x16] = lVar8;
                                                    LeanTween__value(plVar10 + 0x16,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x100)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetInputSourceHandle_TypeInfo
                                                  ;
                                                  if (0x13 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x17] = lVar8;
                                                    LeanTween__value(plVar10 + 0x17,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x110)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x14 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x18] = lVar8;
                                                    LeanTween__value(plVar10 + 0x18,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x138)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)
                                                                        PTR_DAT_06a17068,uVar11,0xb)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__SetActionManifestPath_TypeInfo
                                                  ;
                                                  if (0x15 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x19] = lVar8;
                                                    LeanTween__value(plVar10 + 0x19,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xf0);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetOriginTrackedDeviceInfo_TypeInfo
                                                  ;
                                                  if (0x16 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1a] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1a,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x188)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRNotifications__RemoveNotification_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1b] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1b,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 400);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetSkeletalBoneDataCompressed_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1c] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1c,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x250)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1d] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1d,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 600);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetAnalogActionData_TypeInfo;
                                                  if (0x1a < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1e] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1e,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x148)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0xb);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x1b < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x1f] = lVar8;
                                                    LeanTween__value(plVar10 + 0x1f,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar3,uVar11,
                                                                 0x1f);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__ShowActionOrigins_TypeInfo;
                                                  if (0x1c < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x20] = lVar8;
                                                    LeanTween__value(plVar10 + 0x20,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x170)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x12);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRNotifications__CreateNotification_TypeInfo
                                                  ;
                                                  if (0x1d < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x21] = lVar8;
                                                    LeanTween__value(plVar10 + 0x21,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x178)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x28);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = PTR_DAT_06a00020;
                                                  if (0x1e < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x22] = lVar8;
                                                    LeanTween__value(plVar10 + 0x22,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x180)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x1d);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__UpdateActionState_TypeInfo;
                                                  if ((*(uint *)(plVar10 + 3) & 0xffffffe0) != 0) {
                                                    plVar10[0x23] = lVar8;
                                                    LeanTween__value(plVar10 + 0x23,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1a8)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x22);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x24] = lVar8;
                                                    LeanTween__value(plVar10 + 0x24,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1c0)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x1d);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x25] = lVar8;
                                                    LeanTween__value(plVar10 + 0x25,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1c8)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x1d);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetDigitalActionData_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x26] = lVar8;
                                                    LeanTween__value(plVar10 + 0x26,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d0)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x26);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = OVR_OpenVR_IVRIOBuffer__Read_TypeInfo;
                                                  if (0x23 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x27] = lVar8;
                                                    LeanTween__value(plVar10 + 0x27,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1e0)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x21);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = PTR_DAT_06a17020;
                                                  if (0x24 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x28] = lVar8;
                                                    LeanTween__value(plVar10 + 0x28,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1f8)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x1c);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x25 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x29] = lVar8;
                                                    LeanTween__value(plVar10 + 0x29,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x200)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)
                                                                        PTR_DAT_06a10f20,uVar11,0xb)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x26 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x2a] = lVar8;
                                                    LeanTween__value(plVar10 + 0x2a,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x208)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)
                                                                        PTR_DAT_06a13660,uVar11,0xb)
                                                    ;
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = System_ComponentModel_UInt64Converter_var
                                                  ;
                                                  if (0x27 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x2b] = lVar8;
                                                    LeanTween__value(plVar10 + 0x2b,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x220)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x23);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo
                                                  ;
                                                  if (0x28 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x2c] = lVar8;
                                                    LeanTween__value(plVar10 + 0x2c,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x228)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x2c);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetPoseActionData_TypeInfo;
                                                  if (0x29 < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x2d] = lVar8;
                                                    LeanTween__value(plVar10 + 0x2d,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x230)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x2b);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = OVR_OpenVR_IVRIOBuffer__Write_TypeInfo;
                                                  if (0x2a < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x2e] = lVar8;
                                                    LeanTween__value(plVar10 + 0x2e,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x238)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x21);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo
                                                  ;
                                                  if (0x2b < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x2f] = lVar8;
                                                    LeanTween__value(plVar10 + 0x2f,lVar8);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x240)
                                                    ;
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar7
                                                                              );
                                                    FUN_05a9b99c(lVar8,*(undefined8 *)puVar1,uVar11,
                                                                 0x2a);
                                                    if ((lVar8 != 0) &&
                                                       (lVar9 = thunk_FUN_02dd3048(lVar8,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x2c < *(uint *)(plVar10 + 3)) {
                                                    plVar10[0x30] = lVar8;
                                                    LeanTween__value(plVar10 + 0x30,lVar8);
                                                    lVar8 = *(long *)(*unaff_x22 + 0xb8);
                                                    *(long **)(lVar8 + 0x2a8) = plVar10;
                                                    LeanTween__value(lVar8 + 0x2a8,plVar10);
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
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_05a9a8f0:
  uVar11 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar11,0);
}


