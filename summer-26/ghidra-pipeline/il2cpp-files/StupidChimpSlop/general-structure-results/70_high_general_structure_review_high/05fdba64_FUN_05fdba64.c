/*
FUNCTION_NAME: FUN_05fdba64
ENTRY_POINT: 05fdba64
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05fdba64(undefined1 param_1 [16],float param_2,float param_3,ulong param_4,long *param_5,
                 undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  ulong uVar34;
  uint uVar35;
  float fVar36;
  float local_244;
  undefined8 local_230;
  undefined8 local_220;
  undefined1 auStack_1d0 [112];
  long local_160;
  long *plStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  float local_a4;
  
  puVar1 = PTR_DAT_066462d0;
  if ((DAT_06a5e169 & 1) == 0) {
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_TaskPool<EnumeratorAsyncExtensions_EnumeratorPromise>_TryPop__
                );
    FUN_02d4dc40(Method_System_IO_Stream_<>c_<FlushAsync>b__37_0__);
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_GravityAccountsLinkingHandlerDefualt_<Start>d__9>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_FtpWebRequest_<CreateConnectionAsync>d__86>__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted<UniTask_Awaiter,_UniTaskExtensions_<Unwrap>d__35>__
                );
    FUN_02d4dc40(Method_System_IO_Stream_<>c_<RunReadWriteTaskWhenReady>b__49_0__);
    FUN_02d4dc40(Method_System_IO_Stream_NullStream_BeginRead__);
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted<UniTask_Awaiter,_UniTask_<RunOnThreadPool>d__99>__
                );
    FUN_02d4dc40(Method_System_IO_Stream_NullStream_BeginWrite__);
    FUN_02d4dc40(PTR_DAT_066462d0);
    DAT_06a5e169 = 1;
  }
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_d4 = 0;
  uStack_e0 = 0;
  plStack_158 = (long *)0x0;
  local_160 = 0;
  uVar8 = FUN_05fdb89c(param_5);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)puVar1);
  }
  uVar9 = FUN_05ee2f7c(uVar8,0,0);
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_GravityAccountsLinkingHandlerDefualt_<Start>d__9>__
  ;
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar8 = FUN_05fdb89c(param_5);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)puVar2);
  }
  plVar10 = (long *)FUN_05fdc580(uVar8);
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar16 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar9 != 0) {
    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) ==
          *(long *)
           Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_FtpWebRequest_<CreateConnectionAsync>d__86>__
         ) {
        puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_05fdbc10;
      }
      uVar9 = uVar9 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar9 != 0);
  }
                    /* try { // try from 05fdbbf4 to 060dbc5b has its CatchHandler @ 05fdbbf4
                       catch() { ... } // from try @ 05fdbbf4 with catch @ 05fdbbf4
                       catch() { ... } // from try @ 05fdbca0 with catch @ 05fdbbf4
                       catch() { ... } // from try @ 05fdbd50 with catch @ 05fdbbf4 */
  puVar11 = (undefined8 *)
            FUN_02d87540(plVar10,*(long *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_FtpWebRequest_<CreateConnectionAsync>d__86>__
                         ,0);
LAB_05fdbc10:
  iVar3 = (*(code *)*puVar11)(plVar10,puVar11[1]);
  if (iVar3 == 0) {
    return;
  }
  lVar16 = (**(code **)(*param_5 + 600))(param_5,*(undefined8 *)(*param_5 + 0x260));
  lVar12 = FUN_05fdb89c(param_5);
  if (lVar12 == 0) goto LAB_05fdc578;
  iVar3 = FUN_061b49d0(lVar12,0);
  if (iVar3 == 0) {
LAB_05fdbc74:
    lVar12 = FUN_05fdb89c(param_5);
    if (lVar12 == 0) goto LAB_05fdc578;
    uVar4 = FUN_061b573c(lVar12,0);
                    /* try { // try from 05fdbc88 to 060dbc9f has its CatchHandler @ 05fdbd1c */
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 05fdbc5c to 060dbc6f has its CatchHandler @ 05fdbd0c */
      thunk_FUN_02dabd98();
    }
    uVar9 = FUN_05ee2f7c(lVar16,0,0);
    if ((uVar9 & 1) != 0) goto LAB_05fdbc74;
    if (lVar16 == 0) goto LAB_05fdc578;
    uVar4 = FUN_05e9ee2c(lVar16,0);
  }
                    /* try { // try from 05fdbca0 to 060dbd37 has its CatchHandler @ 05fdbbf4 */
  fVar19 = (float)FUN_061ca994(param_6,0);
  uVar35 = 0x80000000;
  if (param_3 != INFINITY) {
    uVar35 = (int)param_3;
  }
  if (uVar35 != uVar4) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar9 = FUN_05ee2f7c(lVar16,0,0);
  if ((uVar9 & 1) == 0) {
    if (lVar16 == 0) goto LAB_05fdc578;
    fVar30 = param_2;
    fVar20 = (float)FUN_05e9f65c(fVar19,param_2,param_3,lVar16,0);
  }
  else {
    iVar3 = FUN_05eaadd0(0);
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdbc5c with catch @ 05fdbd0c
                        */
    iVar5 = FUN_05eaadf8(0);
    puVar2 = 
    Method_Cysharp_Threading_Tasks_TaskPool<EnumeratorAsyncExtensions_EnumeratorPromise>_TryPop__;
    if (0 < (int)uVar4) {
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05fdbc88 with catch @ 05fdbd1c
                        */
      lVar12 = *(long *)
                Method_Cysharp_Threading_Tasks_TaskPool<EnumeratorAsyncExtensions_EnumeratorPromise>_TryPop__
      ;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar12 = *(long *)puVar2;
      }
                    /* try { // try from 05fdbd38 to 060dbd3b has its CatchHandler @ 05fdbd44 */
      lVar17 = **(long **)(lVar12 + 0xb8);
      if (lVar17 == 0) goto LAB_05fdc578;
                    /* catch() { ... } // from try @ 05fdbd38 with catch @ 05fdbd44 */
                    /* try { // try from 05fdbd48 to 060dbd4f has its CatchHandler @ 05fdbd58 */
      if ((int)uVar4 < *(int *)(lVar17 + 0x18)) {
                    /* try { // try from 05fdbd50 to 060dbd5b has its CatchHandler @ 05fdbbf4 */
        if (*(int *)(lVar12 + 0xe4) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05fdbd48 with catch @ 05fdbd58
                        */
          thunk_FUN_02dabd98();
                    /* try { // try from 05fdbd5c to 060dbe13 has its CatchHandler @ 05fdbd5c
                       catch() { ... } // from try @ 05fdbd5c with catch @ 05fdbd5c
                       catch() { ... } // from try @ 05fdbfec with catch @ 05fdbd5c
                       catch() { ... } // from try @ 05fdc090 with catch @ 05fdbd5c
                       catch() { ... } // from try @ 05fdc0f0 with catch @ 05fdbd5c */
          lVar17 = **(long **)(*(long *)puVar2 + 0xb8);
          if (lVar17 == 0) goto LAB_05fdc578;
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar4) goto LAB_05fdc57c;
        lVar12 = *(long *)(lVar17 + (ulong)uVar4 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_05fdc578;
        iVar3 = FUN_05ea9d48(lVar12,0);
        lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar12 == 0) goto LAB_05fdc578;
        if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_05fdc57c;
        lVar12 = *(long *)(lVar12 + (ulong)uVar4 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_05fdc578;
        iVar5 = FUN_05ea9e30(lVar12,0);
      }
    }
    fVar20 = fVar19 / (float)iVar3;
    fVar30 = param_2 / (float)iVar5;
  }
  if (fVar20 < 0.0) {
    return;
  }
  uVar9 = 0x3f800000;
  if (1.0 < fVar20) {
    return;
  }
  if (fVar30 < 0.0) {
    return;
  }
                    /* try { // try from 05fdbe14 to 060dbe27 has its CatchHandler @ 05fdc0b4 */
  if (1.0 < fVar30) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
                    /* try { // try from 05fdbe38 to 060dbe67 has its CatchHandler @ 05fdc0b8 */
  uVar13 = FUN_05ee1474(lVar16,0,0);
  if ((uVar13 & 1) == 0) {
                    /* try { // try from 05fdbe88 to 060dbe93 has its CatchHandler @ 05fdc0a8 */
    local_220 = 0;
    local_244 = 0.0;
    fVar30 = 0.0;
                    /* try { // try from 05fdbea4 to 060dbeaf has its CatchHandler @ 05fdc0a4 */
    local_230 = 0;
  }
  else {
    if (lVar16 == 0) goto LAB_05fdc578;
    uVar9 = (ulong)(uint)param_3;
    FUN_05e9f898(&local_b8,fVar19,param_2,lVar16,0);
    local_220 = local_b8;
    local_230 = local_ac;
    local_244 = local_b0;
    fVar30 = local_a4;
  }
  lVar12 = FUN_05fdb89c(param_5);
  if (lVar12 == 0) goto LAB_05fdc578;
  iVar3 = FUN_061b49d0(lVar12,0);
  if ((iVar3 == 0) || (*(int *)((long)param_5 + 0x2c) == 0)) {
    fVar20 = 3.4028235e+38;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
                    /* try { // try from 05fdbedc to 060dbee3 has its CatchHandler @ 05fdc094 */
    uVar13 = FUN_05ee1474(lVar16,0,0);
    if ((uVar13 & 1) == 0) {
      fVar29 = 100.0;
    }
    else {
      uVar13 = FUN_05948910(0,fVar30,0);
                    /* try { // try from 05fdbefc to 060dbf23 has its CatchHandler @ 05fdc0c0 */
      if ((uVar13 & 1) == 0) {
        if (lVar16 == 0) goto LAB_05fdc578;
        fVar20 = (float)FUN_05e9d610(lVar16,0);
        fVar29 = (float)FUN_05e9d55c(lVar16,0);
        fVar29 = ABS((fVar20 - fVar29) / fVar30);
      }
      else {
        fVar29 = INFINITY;
      }
    }
    uVar35 = *(uint *)((long)param_5 + 0x2c);
    if ((uVar35 & 0xfffffffe) == 2) {
      lVar12 = FUN_061da3ac(0);
      if (lVar12 == 0) goto LAB_05fdc578;
      if (*(long *)(lVar12 + 0x10) == 0) {
LAB_05fdc4d0:
        fVar20 = 3.4028235e+38;
      }
      else {
        lVar12 = FUN_061da3ac(0);
        if (lVar12 == 0) goto LAB_05fdc578;
        lVar12 = *(long *)(lVar12 + 0x10);
        uVar7 = FUN_05ee288c((int)param_5[6],0);
        if (lVar12 == 0) goto LAB_05fdc578;
        local_ac = local_230;
        local_b8 = local_220;
        local_b0 = local_244;
        local_a4 = fVar30;
        uVar13 = (**(code **)(lVar12 + 0x18))
                           (fVar29,*(undefined8 *)(lVar12 + 0x40),&local_b8,&local_f0,uVar7,
                            *(undefined8 *)(lVar12 + 0x28));
        if ((uVar13 & 1) == 0) goto LAB_05fdc4d0;
        fVar20 = (float)FUN_05f65490(&local_f0,0);
      }
      uVar35 = *(uint *)((long)param_5 + 0x2c);
    }
    else {
      fVar20 = 3.4028235e+38;
    }
    if ((uVar35 | 2) == 3) {
      lVar12 = FUN_061da3ac(0);
      if (lVar12 == 0) goto LAB_05fdc578;
      if (*(long *)(lVar12 + 0x28) != 0) {
        lVar12 = FUN_061da3ac(0);
        if (lVar12 == 0) goto LAB_05fdc578;
        lVar12 = *(long *)(lVar12 + 0x30);
        uVar7 = FUN_05ee288c((int)param_5[6],0);
        if (lVar12 == 0) goto LAB_05fdc578;
        local_ac = local_230;
        local_b8 = local_220;
        local_b0 = local_244;
        local_a4 = fVar30;
        lVar12 = (**(code **)(lVar12 + 0x18))
                           (fVar29,*(undefined8 *)(lVar12 + 0x40),&local_b8,uVar7,
                            *(undefined8 *)(lVar12 + 0x28));
        if (lVar12 == 0) goto LAB_05fdc578;
        if (*(long *)(lVar12 + 0x18) != 0) {
          if ((int)*(long *)(lVar12 + 0x18) == 0) {
LAB_05fdc57c:
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          fVar20 = (float)FUN_05f5d180(lVar12 + 0x20,0);
        }
      }
    }
  }
  if (param_5[8] != 0) {
                    /* try { // try from 05fdbf24 to 060dbf2b has its CatchHandler @ 05fdc0b0 */
    FUN_02ca8554(param_5[8],
                 *(undefined8 *)Method_System_IO_Stream_<>c_<RunReadWriteTaskWhenReady>b__49_0__);
    FUN_05fdb89c(param_5);
    lVar17 = param_5[8];
    lVar12 = *(long *)Method_System_IO_Stream_<>c_<FlushAsync>b__37_0__;
                    /* try { // try from 05fdbf44 to 060dbf47 has its CatchHandler @ 05fdc09c */
    if (*(int *)(lVar12 + 0xe4) == 0) {
      lVar12 = thunk_FUN_02dabd98();
    }
    uVar13 = (ulong)(uint)param_2;
                    /* try { // try from 05fdbf58 to 060dbf5b has its CatchHandler @ 05fdc090 */
    FUN_05fdc63c(fVar19,lVar12,lVar16,plVar10,lVar17);
    puVar2 = Method_System_IO_Stream_NullStream_BeginWrite__;
                    /* try { // try from 05fdbf68 to 060dbf93 has its CatchHandler @ 05fdc098 */
    if (param_5[8] != 0) {
      iVar3 = *(int *)(param_5[8] + 0x18);
      if (0 < iVar3) {
        iVar5 = 0;
        fVar29 = (float)((ulong)local_220 >> 0x20);
                    /* try { // try from 05fdbfa0 to 060dbfa3 has its CatchHandler @ 05fdc09c */
        do {
          fVar32 = (float)uVar13;
          if ((param_5[8] == 0) ||
             (lVar12 = FUN_036a5b38(param_5[8],iVar5,*(undefined8 *)puVar2), lVar12 == 0))
          goto LAB_05fdc578;
                    /* try { // try from 05fdbfc0 to 060dbfdb has its CatchHandler @ 05fdc0bc */
          lVar12 = FUN_05eddc40(lVar12,0);
          fVar27 = (float)uVar9;
          uVar35 = (uint)param_4;
          if ((char)param_5[5] == '\0') {
            if (lVar12 == 0) goto LAB_05fdc578;
LAB_05fdc1bc:
            lVar17 = FUN_05ee187c(lVar12,0);
            if (lVar17 == 0) goto LAB_05fdc578;
            fVar27 = (float)FUN_05ef06c8(lVar17,0);
            uVar34 = uVar9;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar14 = FUN_05ee2f7c(lVar16,0,0);
            uVar13 = 0;
            fVar22 = (float)((ulong)local_230 >> 0x20);
            fVar31 = (float)uVar9;
            uVar9 = uVar34;
            if ((uVar14 & 1) == 0) {
              lVar15 = FUN_05fdb89c(param_5);
              if (lVar15 == 0) goto LAB_05fdc578;
              iVar6 = FUN_061b49d0(lVar15,0);
              fVar24 = (float)uVar34;
              uVar13 = 0;
              fVar23 = 0.0;
              uVar9 = uVar34;
              if (iVar6 != 0) {
                fVar28 = (float)FUN_05ef00fc(lVar17,0);
                uVar8 = NEON_rev64(CONCAT44(fVar27,fVar32),4);
                fVar23 = fVar32 * (fVar23 - fVar29);
                fVar36 = fVar27 * (float)local_230;
                param_4 = CONCAT44(fVar36,fVar23);
                uVar9 = CONCAT44(fVar30,fVar24 - local_244);
                fVar23 = ((fVar24 - local_244) * fVar31 +
                         fVar23 + (float)uVar8 * (fVar28 - (float)local_220)) /
                         (fVar30 * fVar31 + fVar36 + (float)((ulong)uVar8 >> 0x20) * fVar22);
                uVar13 = (ulong)(uint)fVar23;
                if (fVar23 < 0.0) goto LAB_05fdc3b4;
              }
            }
            fVar23 = (float)uVar13;
            if (fVar23 < fVar20) {
              uStack_148 = 0;
              local_150 = 0;
              local_138 = 0;
              uStack_140 = 0;
              uStack_128 = 0;
              local_130 = 0;
              local_118 = 0;
              local_120 = 0;
              uStack_108 = 0;
              local_110 = 0;
              uStack_f8 = 0;
              uStack_100 = 0;
              plStack_158 = (long *)0x0;
              local_160 = lVar12;
              thunk_FUN_02dc1ef0(&local_160,lVar12);
              plStack_158 = param_5;
              thunk_FUN_02dc1ef0((ulong)&local_160 | 8,param_5);
              local_110 = CONCAT44(param_2,fVar19);
              local_150 = CONCAT44(local_150._4_4_,fVar23);
              uStack_108 = CONCAT44(uStack_108._4_4_,uVar4);
              if (param_7 == 0) goto LAB_05fdc578;
              local_150 = CONCAT44((float)*(int *)(param_7 + 0x18),fVar23);
              if ((param_5[8] == 0) ||
                 (lVar12 = FUN_036a5b38(param_5[8],iVar5,*(undefined8 *)puVar2), lVar12 == 0))
              goto LAB_05fdc578;
              uVar7 = FUN_05fd924c();
              uStack_148 = CONCAT44(uStack_148._4_4_,uVar7);
              lVar12 = FUN_05fdb89c(param_5);
              if (lVar12 == 0) goto LAB_05fdc578;
              uVar7 = FUN_061b58b4(lVar12,0);
              uStack_140 = CONCAT44(uVar7,(undefined4)uStack_140);
              lVar12 = FUN_05fdb89c(param_5);
              if (lVar12 == 0) goto LAB_05fdc578;
              uVar7 = FUN_061b55c4(lVar12,0);
              local_138 = CONCAT44(local_138._4_4_,uVar7);
              uStack_128 = CONCAT44(fVar29 + fVar22 * fVar23,
                                    (float)local_220 + (float)local_230 * fVar23);
              fVar22 = local_244 + fVar30 * fVar23;
              uVar13 = (ulong)(uint)fVar22;
              uVar9 = (ulong)(uint)-fVar27;
              param_4 = (ulong)(uint)-fVar32;
              local_120 = CONCAT44(-fVar27,fVar22);
              local_118 = CONCAT44(-fVar31,-fVar32);
              memcpy(auStack_1d0,&local_160,0x70);
              FUN_02d39a98(param_7,auStack_1d0,
                           *(undefined8 *)
                            Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted<UniTask_Awaiter,_UniTaskExtensions_<Unwrap>d__35>__
                          );
            }
          }
          else {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 05fdbfe0 to 060dbfeb has its CatchHandler @ 05fdc0a0 */
              thunk_FUN_02dabd98();
            }
                    /* try { // try from 05fdbfec to 060dc03f has its CatchHandler @ 05fdbd5c */
            uVar9 = FUN_05ee2f7c(lVar16,0,0);
            if ((uVar9 & 1) == 0) {
                    /* try { // try from 05fdc08c to 060dc08f has its CatchHandler @ 05fdc0bc */
                    /* catch() { ... } // from try @ 05fdbf58 with catch @ 05fdc090
                       try { // try from 05fdc090 to 060dc0db has its CatchHandler @ 05fdbd5c */
                    /* catch() { ... } // from try @ 05fdbedc with catch @ 05fdc094 */
                    /* catch() { ... } // from try @ 05fdbf68 with catch @ 05fdc098 */
                    /* catch() { ... } // from try @ 05fdbf44 with catch @ 05fdc09c
                       catch() { ... } // from try @ 05fdbfa0 with catch @ 05fdc09c */
              if ((lVar16 == 0) || (lVar17 = FUN_05eddb70(lVar16,0), lVar17 == 0))
              goto LAB_05fdc578;
                    /* catch() { ... } // from try @ 05fdbfe0 with catch @ 05fdc0a0 */
                    /* catch() { ... } // from try @ 05fdbea4 with catch @ 05fdc0a4 */
              uVar7 = FUN_05eee4a8(lVar17,0);
              fVar31 = fVar32;
              fVar22 = fVar27;
                    /* catch() { ... } // from try @ 05fdbe88 with catch @ 05fdc0a8 */
                    /* catch() { ... } // from try @ 05fdc088 with catch @ 05fdc0ac */
                    /* catch() { ... } // from try @ 05fdbf24 with catch @ 05fdc0b0 */
                    /* catch() { ... } // from try @ 05fdbe14 with catch @ 05fdc0b4 */
                    /* catch() { ... } // from try @ 05fdbe38 with catch @ 05fdc0b8
                       catch() { ... } // from try @ 05fdc040 with catch @ 05fdc0b8 */
                    /* catch() { ... } // from try @ 05fdbfc0 with catch @ 05fdc0bc
                       catch() { ... } // from try @ 05fdc08c with catch @ 05fdc0bc */
              uVar21 = System_Array__InternalArray__IReadOnlyList_get_Item<KeyValue<int,_CPUPerCameraInstanceData_PerCameraInstanceDataArrays>>
                                 (0);
                    /* catch() { ... } // from try @ 05fdbefc with catch @ 05fdc0c0 */
                    /* try { // try from 05fdc0dc to 060dc0df has its CatchHandler @ 05fdc0e4 */
              fVar23 = (float)FUN_05ed0cec(uVar7,fVar32,fVar27,uVar35,uVar21,fVar31,fVar22,0);
              fVar31 = fVar32;
              fVar22 = fVar27;
                    /* catch() { ... } // from try @ 05fdc0dc with catch @ 05fdc0e4 */
                    /* try { // try from 05fdc0e8 to 060dc0ef has its CatchHandler @ 05fdc0f8 */
                    /* try { // try from 05fdc0f0 to 060dc0fb has its CatchHandler @ 05fdbd5c */
                    /* catch() { ... } // from try @ 05fdc0e8 with catch @ 05fdc0f8 */
              fVar24 = (float)FUN_05e9d55c(lVar16,0);
              if ((lVar12 == 0) || (lVar17 = FUN_05ee187c(lVar12,0), lVar17 == 0))
              goto LAB_05fdc578;
              fVar25 = (float)FUN_05ef00fc(lVar17,0);
              fVar28 = fVar31;
              fVar36 = fVar22;
              lVar17 = FUN_05eddb70(lVar16,0);
              if (lVar17 == 0) goto LAB_05fdc578;
              fVar26 = (float)FUN_05ef00fc(lVar17,0);
              lVar17 = FUN_05ee187c(lVar12,0);
              if (lVar17 == 0) goto LAB_05fdc578;
              fVar33 = fVar32 * fVar24;
              uVar9 = (ulong)(uint)(fVar22 - fVar36);
              param_4 = (ulong)(uint)(fVar27 * fVar24);
              fVar28 = (fVar31 - fVar28) - fVar33;
              fVar31 = (float)FUN_05ef06c8(lVar17,0);
              fVar32 = ((fVar22 - fVar36) - fVar27 * fVar24) * (float)uVar9;
              uVar13 = (ulong)(uint)fVar32;
              if (0.0 <= fVar32 + ((fVar25 - fVar26) - fVar23 * fVar24) * fVar31 + fVar28 * fVar33)
              goto LAB_05fdc1bc;
            }
            else {
              if ((lVar12 == 0) || (lVar17 = FUN_05ee187c(lVar12,0), lVar17 == 0))
              goto LAB_05fdc578;
              uVar7 = FUN_05eee4a8(lVar17,0);
              fVar31 = fVar32;
              fVar22 = fVar27;
              uVar21 = System_Array__InternalArray__IReadOnlyList_get_Item<KeyValue<int,_CPUPerCameraInstanceData_PerCameraInstanceDataArrays>>
                                 (0);
                    /* try { // try from 05fdc040 to 060dc087 has its CatchHandler @ 05fdc0b8 */
              uVar9 = (ulong)(uint)fVar27;
              param_4 = (ulong)uVar35;
              fVar22 = (float)FUN_05ed0cec(uVar7,fVar32,uVar9,param_4,uVar21,fVar31,fVar22,0);
              fVar27 = (float)uVar9;
              fVar31 = fVar32;
              fVar23 = (float)System_Array__InternalArray__IReadOnlyList_get_Item<KeyValue<int,_CPUPerCameraInstanceData_PerCameraInstanceDataArrays>>
                                        (0);
              fVar31 = fVar32 * fVar31;
              fVar32 = fVar27 * (float)uVar9;
              uVar13 = (ulong)(uint)fVar32;
              if (0.0 < fVar32 + fVar22 * fVar23 + fVar31) goto LAB_05fdc1bc;
            }
          }
LAB_05fdc3b4:
          iVar5 = iVar5 + 1;
        } while (iVar3 != iVar5);
      }
      return;
    }
  }
LAB_05fdc578:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


