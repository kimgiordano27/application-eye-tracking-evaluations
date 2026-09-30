/*
FUNCTION_NAME: FUN_0309cf48
ENTRY_POINT: 0309cf48
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8
FUN_0309cf48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined1 (*param_10) [16],undefined8 *param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 local_120 [16];
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
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  puVar6 = Cysharp_Threading_Tasks_UniTask_YieldPromise_var;
  local_a0 = param_9;
  uStack_98 = param_8;
  if ((DAT_0412b568 & 1) == 0) {
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTask_WaitUntilPromise_var);
    FUN_01ab69ac(System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var);
    FUN_01ab69ac(
                Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(System_Globalization_NumberFormatInfo_var);
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerEarlyUpdate_var);
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerFixedUpdate_var);
    FUN_01ab69ac(PTR_DAT_03cc1790);
    FUN_01ab69ac(PTR_DAT_03cc1798);
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerInitialization_var);
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTask_YieldPromise_var);
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerLastEarlyUpdate_var);
                    /* try { // try from 0309d030 to 0319d073 has its CatchHandler @ 0309d030
                       catch() { ... } // from try @ 0309d030 with catch @ 0309d030
                       catch() { ... } // from try @ 0309d080 with catch @ 0309d030
                       catch() { ... } // from try @ 0309d10c with catch @ 0309d030
                       catch() { ... } // from try @ 0309d154 with catch @ 0309d030 */
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerLastFixedUpdate_var);
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerLastInitialization_var)
    ;
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerLastPostLateUpdate_var)
    ;
    DAT_0412b568 = 1;
  }
  lVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_027b3d9c(lVar9,0);
  puVar6 = PTR_DAT_03cc1790;
  if (lVar9 == 0) goto LAB_0309d628;
                    /* try { // try from 0309d074 to 0319d07f has its CatchHandler @ 0309d0dc */
                    /* try { // try from 0309d080 to 0319d0f3 has its CatchHandler @ 0309d030 */
  *(undefined8 *)(lVar9 + 0x10) = param_7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar9 + 0x10),param_7);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  lVar10 = *(long *)(*(long *)puVar6 + 0x20);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01a46ff8();
  }
  puVar8 = 
  Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
  ;
  puVar7 = PTR_DAT_03cc1798;
  pcVar11 = (char *)thunk_FUN_01a59484(&uStack_98,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80));
  if (*pcVar11 == '\0') {
LAB_0309d2b8:
    lVar15 = 0;
    uVar13 = 0;
  }
  else {
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0309d074 with catch @ 0309d0dc
                        */
    lVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                 Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerLastFixedUpdate_var
                               );
    FUN_027b3d9c(lVar10,0);
    if (lVar10 == 0) goto LAB_0309d628;
                    /* try { // try from 0309d0f4 to 0319d10b has its CatchHandler @ 0309d14c */
    plVar16 = (long *)(lVar10 + 0x18);
    *plVar16 = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16,lVar9);
    auVar1._8_8_ = local_120._8_8_;
    auVar1._0_8_ = local_120._0_8_;
    auVar20._8_8_ = local_120._8_8_;
    auVar20._0_8_ = local_120._0_8_;
                    /* try { // try from 0309d10c to 0319d13b has its CatchHandler @ 0309d030 */
    if (((*plVar16 == 0) || (lVar15 = *(long *)(*plVar16 + 0x10), local_120 = auVar20, lVar15 == 0))
       || (lVar15 = *(long *)(lVar15 + 0x28), local_120 = auVar1, lVar15 == 0)) goto LAB_0309d628;
    lVar15 = *(long *)(lVar15 + 0x30);
    FUN_022412e0(&uStack_98,local_120,*(undefined8 *)puVar7);
    if (lVar15 == 0) goto LAB_0309d628;
                    /* try { // try from 0309d13c to 0319d14b has its CatchHandler @ 0309d14c */
    FUN_02215a88(lVar15,local_120._0_8_ & 0xffffffff,local_120,*(undefined8 *)puVar8);
    uVar13 = local_120._0_8_;
                    /* catch() { ... } // from try @ 0309d0f4 with catch @ 0309d14c
                       catch() { ... } // from try @ 0309d13c with catch @ 0309d14c */
                    /* try { // try from 0309d150 to 0319d153 has its CatchHandler @ 0309d15c */
    if (*plVar16 == 0) goto LAB_0309d628;
                    /* try { // try from 0309d154 to 0319d15f has its CatchHandler @ 0309d030 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0309d150 with catch @ 0309d15c
                        */
    uVar17 = *(undefined8 *)(*plVar16 + 0x10);
                    /* try { // try from 0309d160 to 0319d197 has its CatchHandler @ 0309d160
                       catch() { ... } // from try @ 0309d160 with catch @ 0309d160
                       catch() { ... } // from try @ 0309d1cc with catch @ 0309d160
                       catch() { ... } // from try @ 0309d200 with catch @ 0309d160
                       catch() { ... } // from try @ 0309d25c with catch @ 0309d160 */
    FUN_022412e0(&uStack_98,local_120,*(undefined8 *)puVar7);
    uVar12 = local_120._0_8_;
    if (*(int *)(*(long *)System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_0309ee7c(uVar17,uVar12 & 0xffffffff);
                    /* try { // try from 0309d198 to 0319d19f has its CatchHandler @ 0309d1d0 */
    puVar18 = (undefined8 *)(lVar10 + 0x10);
    *puVar18 = uVar12;
    lVar15 = *(long *)(*(long *)puVar6 + 0x20);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_01a46ff8();
    }
                    /* try { // try from 0309d1b0 to 0319d1b7 has its CatchHandler @ 0309d1cc */
    pcVar11 = (char *)thunk_FUN_01a59484(puVar18,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80));
    auVar3._8_8_ = local_120._8_8_;
    auVar3._0_8_ = local_120._0_8_;
    auVar2._8_8_ = local_120._8_8_;
    auVar2._0_8_ = local_120._0_8_;
                    /* try { // try from 0309d1c8 to 0319d1cb has its CatchHandler @ 0309d1d0 */
    if (*pcVar11 == '\0') goto LAB_0309d2b8;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0309d1b0 with catch @ 0309d1cc
                       try { // try from 0309d1cc to 0319d1e7 has its CatchHandler @ 0309d160 */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0309d198 with catch @ 0309d1d0
                       catch(type#1 @ 03abd138) { ... } // from try @ 0309d1c8 with catch @ 0309d1d0
                        */
    if (((*plVar16 == 0) || (lVar15 = *(long *)(*plVar16 + 0x10), local_120 = auVar2, lVar15 == 0))
       || (lVar15 = *(long *)(lVar15 + 0x28), local_120 = auVar3, lVar15 == 0)) goto LAB_0309d628;
                    /* try { // try from 0309d1e8 to 0319d1ff has its CatchHandler @ 0309d254 */
    lVar15 = *(long *)(lVar15 + 0x40);
    FUN_022412e0(puVar18,local_120,*(undefined8 *)puVar7);
                    /* try { // try from 0309d200 to 0319d243 has its CatchHandler @ 0309d160 */
    if (((lVar15 == 0) ||
        (FUN_02215a88(lVar15,local_120._0_8_ & 0xffffffff,local_120,
                      *(undefined8 *)System_Globalization_NumberFormatInfo_var),
        auVar4._8_8_ = local_120._8_8_, auVar4._0_8_ = local_120._0_8_, uVar13 == 0)) ||
       (local_120 = auVar4, local_120._0_8_ == 0)) goto LAB_0309d628;
    uVar13 = FUN_039a5f08(2,*(undefined8 *)(uVar13 + 0x30),*(undefined8 *)(local_120._0_8_ + 0x18),0
                         );
    auVar5._8_8_ = local_120._8_8_;
    auVar5._0_8_ = local_120._0_8_;
                    /* try { // try from 0309d244 to 0319d253 has its CatchHandler @ 0309d254 */
    if ((*plVar16 == 0) || (lVar15 = *(long *)(*plVar16 + 0x10), local_120 = auVar5, lVar15 == 0))
    goto LAB_0309d628;
    uVar12 = *(undefined8 *)(lVar15 + 0x28);
                    /* catch() { ... } // from try @ 0309d1e8 with catch @ 0309d254
                       catch() { ... } // from try @ 0309d244 with catch @ 0309d254 */
                    /* try { // try from 0309d258 to 0319d25b has its CatchHandler @ 0309d264 */
                    /* try { // try from 0309d25c to 0319d267 has its CatchHandler @ 0309d160 */
    FUN_022412e0(&uStack_98,local_120,*(undefined8 *)puVar7);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0309d258 with catch @ 0309d264
                        */
    local_120 = FUN_0309f14c(uVar12,local_120._0_8_ & 0xffffffff);
                    /* try { // try from 0309d274 to 0319d2fb has its CatchHandler @ 0309d274
                       catch() { ... } // from try @ 0309d274 with catch @ 0309d274
                       catch() { ... } // from try @ 0309d310 with catch @ 0309d274
                       catch() { ... } // from try @ 0309d34c with catch @ 0309d274
                       catch() { ... } // from try @ 0309d384 with catch @ 0309d274 */
    FUN_02241190(&local_b8,local_120,
                 *(undefined8 *)
                  Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerEarlyUpdate_var);
    lVar15 = thunk_FUN_01a89e68(*(undefined8 *)Cysharp_Threading_Tasks_UniTask_WaitUntilPromise_var)
    ;
    FUN_039a3ba8(lVar15,lVar10,
                 *(undefined8 *)
                  Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerLastEarlyUpdate_var,0)
    ;
  }
  lVar10 = *(long *)(*(long *)puVar6 + 0x20);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01a46ff8();
  }
  pcVar11 = (char *)thunk_FUN_01a59484(&local_a0,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80));
  if (*pcVar11 != '\0') {
    lVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                 Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerLastPostLateUpdate_var
                               );
    FUN_027b3d9c(lVar10,0);
    if (lVar10 == 0) {
LAB_0309d628:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar16 = (long *)(lVar10 + 0x18);
    *plVar16 = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16,lVar9);
    if (((*plVar16 == 0) || (lVar9 = *(long *)(*plVar16 + 0x10), lVar9 == 0)) ||
       (lVar9 = *(long *)(lVar9 + 0x28), lVar9 == 0)) goto LAB_0309d628;
    lVar9 = *(long *)(lVar9 + 0x30);
    FUN_022412e0(&local_a0,local_120,*(undefined8 *)puVar7);
    if (lVar9 == 0) goto LAB_0309d628;
    FUN_02215a88(lVar9,local_120._0_8_ & 0xffffffff,local_120,*(undefined8 *)puVar8);
    uVar12 = local_120._0_8_;
    if (*plVar16 == 0) goto LAB_0309d628;
    uVar19 = *(undefined8 *)(*plVar16 + 0x10);
    FUN_022412e0(&local_a0,local_120,*(undefined8 *)puVar7);
    uVar17 = local_120._0_8_;
    if (*(int *)(*(long *)System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_0309ee7c(uVar19,uVar17 & 0xffffffff);
    puVar18 = (undefined8 *)(lVar10 + 0x10);
    *puVar18 = uVar17;
    lVar9 = *(long *)(*(long *)puVar6 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01a46ff8();
    }
    pcVar11 = (char *)thunk_FUN_01a59484(puVar18,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
    if (*pcVar11 != '\0') {
      if (((*plVar16 == 0) || (lVar9 = *(long *)(*plVar16 + 0x10), lVar9 == 0)) ||
         (lVar9 = *(long *)(lVar9 + 0x28), lVar9 == 0)) goto LAB_0309d628;
      lVar9 = *(long *)(lVar9 + 0x40);
      FUN_022412e0(puVar18,local_120,*(undefined8 *)puVar7);
      if (lVar9 == 0) goto LAB_0309d628;
      FUN_02215a88(lVar9,local_120._0_8_ & 0xffffffff,local_120,
                   *(undefined8 *)System_Globalization_NumberFormatInfo_var);
      uVar17 = local_120._0_8_;
      uVar14 = FUN_025be440(uVar13,0);
      if ((uVar14 & 1) != 0) {
        if ((uVar12 == 0) || (uVar17 == 0)) goto LAB_0309d628;
        uVar13 = FUN_039a5f08(2,*(undefined8 *)(uVar12 + 0x30),*(undefined8 *)(uVar17 + 0x18),0);
      }
      lVar9 = *(long *)(*(long *)
                         Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerFixedUpdate_var
                       + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01a46ff8();
      }
      pcVar11 = (char *)thunk_FUN_01a59484(&local_b8,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
      if (*pcVar11 == '\0') {
        if ((*plVar16 == 0) || (lVar9 = *(long *)(*plVar16 + 0x10), lVar9 == 0)) goto LAB_0309d628;
        uVar12 = *(undefined8 *)(lVar9 + 0x28);
        FUN_022412e0(&local_a0,local_120,*(undefined8 *)puVar7);
        auVar20 = FUN_0309f14c(uVar12,local_120._0_8_ & 0xffffffff);
        local_120 = auVar20;
        FUN_02241190(&local_b8,local_120,
                     *(undefined8 *)
                      Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerEarlyUpdate_var);
      }
      lVar9 = thunk_FUN_01a89e68(*(undefined8 *)Cysharp_Threading_Tasks_UniTask_WaitUntilPromise_var
                                );
      FUN_039a3ba8(lVar9,lVar10,
                   *(undefined8 *)
                    Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerLastInitialization_var
                   ,0);
      goto LAB_0309d520;
    }
  }
  lVar9 = 0;
LAB_0309d520:
  if ((lVar15 == 0 && lVar9 == 0) || (uVar14 = FUN_025be440(uVar13,0), (uVar14 & 1) != 0)) {
    uVar13 = 0;
    *(undefined8 *)*param_10 = 0;
    *(undefined8 *)(*param_10 + 8) = 0;
    param_11[0xc] = 0;
    param_11[9] = 0;
    param_11[8] = 0;
    param_11[0xb] = 0;
    param_11[10] = 0;
    param_11[5] = 0;
    param_11[4] = 0;
    param_11[7] = 0;
    param_11[6] = 0;
    param_11[1] = 0;
    *param_11 = 0;
    param_11[3] = 0;
    param_11[2] = 0;
  }
  else {
    FUN_022412e0(&local_b8,local_120,
                 *(undefined8 *)
                  Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerInitialization_var);
    uVar17 = local_120._8_8_;
    uVar12 = local_120._0_8_;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    local_120._8_8_ = 0;
    local_120._0_8_ = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    local_c0 = 0;
    FUN_039a3cd0(param_1,param_2,param_3,param_4,param_5,param_6,local_120,uVar13,uVar12,uVar17,2,
                 lVar15,lVar9,0,0,0,0,0);
    memcpy(param_11,local_120,0x68);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_11,0);
    auVar20 = FUN_039a3c58(param_11,0);
    *param_10 = auVar20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_10,0);
    uVar13 = 1;
  }
  return uVar13;
}


