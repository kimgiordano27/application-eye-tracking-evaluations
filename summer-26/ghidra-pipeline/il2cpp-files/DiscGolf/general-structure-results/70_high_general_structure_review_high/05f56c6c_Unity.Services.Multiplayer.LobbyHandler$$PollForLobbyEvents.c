/*
FUNCTION_NAME: Unity.Services.Multiplayer.LobbyHandler$$PollForLobbyEvents
ENTRY_POINT: 05f56c6c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_21
*/


void Unity_Services_Multiplayer_LobbyHandler__PollForLobbyEvents(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long lVar15;
  long unaff_x24;
  undefined8 unaff_x25;
  long lVar16;
  long lVar17;
  long lVar18;
  long in_stack_00000000;
  long in_stack_00000008;
  
  FUN_04bdefe4();
                    /* try { // try from 05f56c70 to 06056c73 has its CatchHandler @ 05f56d68 */
                    /* try { // try from 05f56c74 to 06056c77 has its CatchHandler @ 05f56d64 */
                    /* try { // try from 05f56c78 to 06056c7b has its CatchHandler @ 05f56d68 */
  *(undefined8 *)(unaff_x24 + 0x88) = unaff_x25;
                    /* try { // try from 05f56c7c to 06056c7f has its CatchHandler @ 05f56d6c */
  LeanTween__value();
  puVar5 = Method_System_Runtime_CompilerServices_TaskAwaiter<OVRTriangleMesh>_GetResult__;
  puVar3 = PTR_DAT_06a11688;
                    /* try { // try from 05f56c80 to 06056c83 has its CatchHandler @ 05f56d64 */
                    /* try { // try from 05f56c84 to 06056c87 has its CatchHandler @ 05f56d50 */
                    /* try { // try from 05f56c88 to 06056c8b has its CatchHandler @ 05f56d4c */
  if (unaff_x23 != 0) {
                    /* try { // try from 05f56c8c to 06056c8f has its CatchHandler @ 05f56d48 */
                    /* try { // try from 05f56c90 to 06056c93 has its CatchHandler @ 05f56d38 */
                    /* try { // try from 05f56c94 to 06056c97 has its CatchHandler @ 05f56d34 */
                    /* try { // try from 05f56c98 to 06056c9b has its CatchHandler @ 05f56d30 */
                    /* try { // try from 05f56c9c to 06056c9f has its CatchHandler @ 05f56d2c */
                    /* try { // try from 05f56ca0 to 06056ca3 has its CatchHandler @ 05f56d28 */
    FUN_044193fc();
                    /* try { // try from 05f56ca4 to 06056ca7 has its CatchHandler @ 05f56d24 */
                    /* try { // try from 05f56ca8 to 06056cab has its CatchHandler @ 05f56d20 */
    lVar15 = *(long *)(unaff_x22 + 0x48);
                    /* try { // try from 05f56cac to 06056caf has its CatchHandler @ 05f56d00 */
                    /* try { // try from 05f56cb0 to 06056cb3 has its CatchHandler @ 05f56cd0 */
                    /* try { // try from 05f56cb4 to 06056cb7 has its CatchHandler @ 05f56cc8 */
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                              );
                    /* try { // try from 05f56cb8 to 06056cbb has its CatchHandler @ 05f56cc4 */
                    /* try { // try from 05f56cbc to 06056da3 has its CatchHandler @ 05f56330 */
                    /* catch() { ... } // from try @ 05f568ec with catch @ 05f56cc0 */
    FUN_05f46c04(lVar7,0);
    puVar2 = Method_System_Threading_Tasks_Task<bool>_TrySetResult__;
    puVar4 = Method_System_Threading_Tasks_Task<IPAddress[]>_GetAwaiter__;
                    /* catch() { ... } // from try @ 05f56cb8 with catch @ 05f56cc4 */
                    /* catch() { ... } // from try @ 05f56cb4 with catch @ 05f56cc8 */
    if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 05f56608 with catch @ 05f56ccc */
                    /* catch() { ... } // from try @ 05f56cb0 with catch @ 05f56cd0 */
                    /* catch() { ... } // from try @ 05f569bc with catch @ 05f56cd4 */
                    /* catch() { ... } // from try @ 05f56a98 with catch @ 05f56cd8 */
                    /* catch() { ... } // from try @ 05f56a2c with catch @ 05f56cdc */
                    /* catch() { ... } // from try @ 05f5694c with catch @ 05f56ce0 */
                    /* catch() { ... } // from try @ 05f56bf8 with catch @ 05f56ce4 */
                    /* catch() { ... } // from try @ 05f56b80 with catch @ 05f56ce8 */
                    /* catch() { ... } // from try @ 05f56b0c with catch @ 05f56cec */
                    /* catch() { ... } // from try @ 05f566bc with catch @ 05f56cf0 */
                    /* catch() { ... } // from try @ 05f56658 with catch @ 05f56cf4 */
                    /* catch() { ... } // from try @ 05f56644 with catch @ 05f56cf8 */
      *(undefined8 *)(lVar7 + 0x28) =
           *(undefined8 *)Method_System_Threading_Tasks_Task<bool>_TrySetResult__;
                    /* catch() { ... } // from try @ 05f565dc with catch @ 05f56cfc */
      LeanTween__value();
                    /* catch() { ... } // from try @ 05f56cac with catch @ 05f56d00 */
                    /* catch() { ... } // from try @ 05f56620 with catch @ 05f56d04 */
                    /* catch() { ... } // from try @ 05f5668c with catch @ 05f56d08 */
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar4;
                    /* catch() { ... } // from try @ 05f56634 with catch @ 05f56d0c */
      LeanTween__value();
                    /* catch() { ... } // from try @ 05f56670 with catch @ 05f56d10 */
                    /* catch() { ... } // from try @ 05f566d8 with catch @ 05f56d14 */
                    /* catch() { ... } // from try @ 05f566a4 with catch @ 05f56d18 */
                    /* catch() { ... } // from try @ 05f565c0 with catch @ 05f56d1c */
      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                    /* catch() { ... } // from try @ 05f56ca8 with catch @ 05f56d20 */
                    /* catch() { ... } // from try @ 05f56ca4 with catch @ 05f56d24 */
                    /* catch() { ... } // from try @ 05f56ca0 with catch @ 05f56d28 */
                    /* catch() { ... } // from try @ 05f56c9c with catch @ 05f56d2c */
                    /* catch() { ... } // from try @ 05f56c98 with catch @ 05f56d30 */
      FUN_03b706f0();
                    /* catch() { ... } // from try @ 05f56c94 with catch @ 05f56d34 */
                    /* catch() { ... } // from try @ 05f56c90 with catch @ 05f56d38 */
                    /* catch() { ... } // from try @ 05f56884 with catch @ 05f56d3c */
      *(undefined8 *)(lVar7 + 0x48) = uVar8;
                    /* catch() { ... } // from try @ 05f56770 with catch @ 05f56d40 */
      LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar8);
                    /* catch() { ... } // from try @ 05f56890 with catch @ 05f56d44 */
                    /* catch() { ... } // from try @ 05f56c8c with catch @ 05f56d48 */
                    /* catch() { ... } // from try @ 05f56c88 with catch @ 05f56d4c */
                    /* catch() { ... } // from try @ 05f56c84 with catch @ 05f56d50 */
      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                    /* catch() { ... } // from try @ 05f56794 with catch @ 05f56d54 */
                    /* catch() { ... } // from try @ 05f567bc with catch @ 05f56d58 */
                    /* catch() { ... } // from try @ 05f5675c with catch @ 05f56d5c */
                    /* catch() { ... } // from try @ 05f5681c with catch @ 05f56d60 */
                    /* catch() { ... } // from try @ 05f56c74 with catch @ 05f56d64
                       catch() { ... } // from try @ 05f56c80 with catch @ 05f56d64 */
      FUN_04be4edc();
                    /* catch() { ... } // from try @ 05f56c70 with catch @ 05f56d68
                       catch() { ... } // from try @ 05f56c78 with catch @ 05f56d68 */
                    /* catch() { ... } // from try @ 05f56c64 with catch @ 05f56d6c
                       catch() { ... } // from try @ 05f56c7c with catch @ 05f56d6c */
                    /* catch() { ... } // from try @ 05f56c68 with catch @ 05f56d70 */
      *(undefined8 *)(lVar7 + 0x50) = uVar8;
                    /* catch() { ... } // from try @ 05f56c5c with catch @ 05f56d74 */
      LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar8);
                    /* catch() { ... } // from try @ 05f56c58 with catch @ 05f56d78 */
      lVar9 = *(long *)puVar5;
                    /* catch() { ... } // from try @ 05f56728 with catch @ 05f56d7c */
                    /* catch() { ... } // from try @ 05f56c50 with catch @ 05f56d80 */
      if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05f56744 with catch @ 05f56d84 */
        thunk_FUN_02df485c();
                    /* catch() { ... } // from try @ 05f56c54 with catch @ 05f56d88
                       catch() { ... } // from try @ 05f56c60 with catch @ 05f56d88 */
        lVar9 = *(long *)puVar5;
      }
      puVar12 = *(undefined8 **)(lVar9 + 0xb8);
      lVar16 = puVar12[5];
      if (lVar16 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        }
        uVar8 = *puVar12;
        lVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
        FUN_03b706f0(lVar16,uVar8,
                     *(undefined8 *)
                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
        *plVar10 = lVar16;
        LeanTween__value(plVar10,lVar16);
      }
      *(long *)(lVar7 + 0x60) = lVar16;
      LeanTween__value((long *)(lVar7 + 0x60),lVar16);
      lVar9 = *(long *)puVar5;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar9 = *(long *)puVar5;
      }
      puVar12 = *(undefined8 **)(lVar9 + 0xb8);
      lVar16 = puVar12[6];
      if (lVar16 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        }
        uVar8 = *puVar12;
        lVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
        FUN_03b706f0(lVar16,uVar8,
                     *(undefined8 *)
                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                     ,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
        *plVar10 = lVar16;
        LeanTween__value(plVar10,lVar16);
      }
      *(long *)(lVar7 + 0x68) = lVar16;
      LeanTween__value((long *)(lVar7 + 0x68),lVar16);
      if (lVar15 != 0) {
        FUN_044193fc(lVar15,lVar7,*(undefined8 *)puVar3);
        lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                  );
        FUN_05f46c04(lVar7,0);
        puVar4 = Method_System_Threading_Tasks_Task<IPAddress[]>_get_Factory__;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x28) =
               *(undefined8 *)
                Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__;
          LeanTween__value();
          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar4;
          LeanTween__value();
          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
          FUN_03b706f0();
          *(undefined8 *)(lVar7 + 0x48) = uVar8;
          LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar8);
          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
          FUN_04be4edc();
          *(undefined8 *)(lVar7 + 0x50) = uVar8;
          LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar8);
          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
          FUN_03b6efa0();
          *(undefined8 *)(lVar7 + 0x40) = uVar8;
          LeanTween__value((undefined8 *)(lVar7 + 0x40),uVar8);
          puVar4 = Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__;
          if (*(long *)(unaff_x22 + 0x48) != 0) {
            FUN_044193fc(*(long *)(unaff_x22 + 0x48),lVar7,*(undefined8 *)puVar3);
            lVar15 = *(long *)(unaff_x22 + 0x48);
            lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
            FUN_05f46a98(lVar7,0);
            puVar3 = Method_System_Threading_Tasks_Task<BufferOffsetSize>_ConfigureAwait__;
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x28) =
                   *(undefined8 *)
                    Method_System_Threading_Tasks_Task<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_GetAwaiter__
              ;
              LeanTween__value();
              *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar3;
              LeanTween__value();
              puVar3 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)UnityEngine_VFX_VFXSpawnerState_TypeInfo);
              FUN_03b6f874();
              *(undefined8 *)(lVar7 + 0x48) = uVar8;
              LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar8);
              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc9b8);
              FUN_04bdefe4();
              *(undefined8 *)(lVar7 + 0x50) = uVar8;
              LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar8);
              lVar9 = *(long *)puVar5;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar9 = *(long *)puVar5;
              }
              puVar12 = *(undefined8 **)(lVar9 + 0xb8);
              lVar16 = puVar12[7];
              if (lVar16 == 0) {
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                }
                uVar8 = *puVar12;
                lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                FUN_03b6f874(lVar16,uVar8,
                             *(undefined8 *)
                              Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_GetCompletionResponsibility__
                             ,0);
                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
                *plVar10 = lVar16;
                LeanTween__value(plVar10,lVar16);
              }
              *(long *)(lVar7 + 0x60) = lVar16;
              LeanTween__value((long *)(lVar7 + 0x60),lVar16);
              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
              FUN_03b6f874();
              *(undefined8 *)(lVar7 + 0x68) = uVar8;
              LeanTween__value((undefined8 *)(lVar7 + 0x68),uVar8);
              if (lVar15 != 0) {
                FUN_044193fc(lVar15,lVar7,*(undefined8 *)PTR_DAT_06a11688);
                lVar15 = *(long *)(unaff_x22 + 0x48);
                lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                            Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                          );
                FUN_05f46a98(lVar7,0);
                puVar3 = Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__;
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x28) =
                       *(undefined8 *)
                        Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__;
                  LeanTween__value();
                  *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar3;
                  LeanTween__value();
                  puVar3 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)UnityEngine_VFX_VFXSpawnerState_TypeInfo
                                            );
                  FUN_03b6f874();
                  *(undefined8 *)(lVar7 + 0x48) = uVar8;
                  LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar8);
                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc9b8);
                  FUN_04bdefe4();
                  *(undefined8 *)(lVar7 + 0x50) = uVar8;
                  LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar8);
                  lVar9 = *(long *)puVar5;
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar9 = *(long *)puVar5;
                  }
                  puVar12 = *(undefined8 **)(lVar9 + 0xb8);
                  lVar16 = puVar12[8];
                  if (lVar16 == 0) {
                    if (*(int *)(lVar9 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                    }
                    uVar8 = *puVar12;
                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                    FUN_03b6f874(lVar16,uVar8,
                                 *(undefined8 *)
                                  Method_System_Threading_Tasks_Task<ApiResponse<Player>>_GetAwaiter__
                                 ,0);
                    plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
                    *plVar10 = lVar16;
                    LeanTween__value(plVar10,lVar16);
                  }
                  puVar4 = PTR_DAT_069fda18;
                  *(long *)(lVar7 + 0x60) = lVar16;
                  LeanTween__value((long *)(lVar7 + 0x60),lVar16);
                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                  FUN_03b6f874();
                  *(undefined8 *)(lVar7 + 0x68) = uVar8;
                  LeanTween__value((undefined8 *)(lVar7 + 0x68),uVar8);
                  if (lVar15 != 0) {
                    FUN_044193fc(lVar15,lVar7,*(undefined8 *)PTR_DAT_06a11688);
                    if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                      FUN_044193fc();
                      puVar3 = 
                      Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__;
                      lVar15 = *(long *)(in_stack_00000008 + 0x48);
                      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                );
                      Unity_Services_Relay_RelayServiceException__set_Reason(lVar7,0);
                      puVar6 = 
                      Method_System_Threading_Tasks_Task<Response<QosServersResponseBody>>_GetAwaiter__
                      ;
                      if (lVar7 != 0) {
                        *(undefined8 *)(lVar7 + 0x28) =
                             *(undefined8 *)
                              Method_System_Threading_Tasks_Task<Response<StoredMatchmakingResults>>_GetAwaiter__
                        ;
                        LeanTween__value();
                        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar6;
                        LeanTween__value();
                        uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                        FUN_03b6efa0();
                        *(undefined8 *)(lVar7 + 0x48) = uVar8;
                        LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar8);
                        uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                        FUN_04bdbe64();
                        *(undefined8 *)(lVar7 + 0x50) = uVar8;
                        LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar8);
                        if (lVar15 != 0) {
                          FUN_044193fc(lVar15,lVar7,*(undefined8 *)PTR_DAT_06a11688);
                          lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                          FUN_05f455a0(lVar7,0);
                          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                          FUN_03b6efa0();
                          if (lVar7 != 0) {
                            *(undefined8 *)(lVar7 + 0x40) = uVar8;
                            LeanTween__value((undefined8 *)(lVar7 + 0x40),uVar8);
                            lVar9 = *(long *)(lVar7 + 0x48);
                            lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                            FUN_05f46c04(lVar15,0);
                            puVar4 = 
                            Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                            ;
                            if (lVar15 != 0) {
                              *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)puVar2;
                              LeanTween__value();
                              *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)puVar4;
                              LeanTween__value();
                              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                              FUN_03b706f0();
                              *(undefined8 *)(lVar15 + 0x48) = uVar8;
                              LeanTween__value((undefined8 *)(lVar15 + 0x48),uVar8);
                              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                              FUN_04be4edc();
                              *(undefined8 *)(lVar15 + 0x50) = uVar8;
                              LeanTween__value((undefined8 *)(lVar15 + 0x50),uVar8);
                              lVar16 = *(long *)puVar5;
                              if (*(int *)(lVar16 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                                lVar16 = *(long *)puVar5;
                              }
                              puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                              lVar17 = puVar12[9];
                              if (lVar17 == 0) {
                                if (*(int *)(lVar16 + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                  puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                }
                                uVar8 = *puVar12;
                                lVar17 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                                FUN_03b706f0(lVar17,uVar8,
                                             *(undefined8 *)
                                              Method_System_Threading_Tasks_Task<Dictionary<string,_Item>>_GetAwaiter__
                                             ,0);
                                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
                                *plVar10 = lVar17;
                                LeanTween__value(plVar10,lVar17);
                              }
                              *(long *)(lVar15 + 0x60) = lVar17;
                              LeanTween__value((long *)(lVar15 + 0x60),lVar17);
                              lVar16 = *(long *)puVar5;
                              if (*(int *)(lVar16 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                                lVar16 = *(long *)puVar5;
                              }
                              puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                              lVar17 = puVar12[10];
                              if (lVar17 == 0) {
                                if (*(int *)(lVar16 + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                  puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                }
                                uVar8 = *puVar12;
                                lVar17 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                                FUN_03b706f0(lVar17,uVar8,
                                             *(undefined8 *)
                                              Method_System_Threading_Tasks_Task<Dictionary<string,_string>>_GetAwaiter__
                                             ,0);
                                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50);
                                *plVar10 = lVar17;
                                LeanTween__value(plVar10,lVar17);
                              }
                              *(long *)(lVar15 + 0x68) = lVar17;
                              LeanTween__value((long *)(lVar15 + 0x68),lVar17);
                              if (lVar9 != 0) {
                                FUN_044193fc(lVar9,lVar15,*(undefined8 *)PTR_DAT_06a11688);
                                lVar9 = *(long *)(lVar7 + 0x48);
                                lVar15 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                Unity_Services_Relay_RelayServiceException__set_Reason(lVar15,0);
                                puVar4 = 
                                Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                ;
                                if (lVar15 != 0) {
                                  *(undefined8 *)(lVar15 + 0x28) =
                                       *(undefined8 *)
                                        Method_System_Threading_Tasks_Task<ILobbyEvents>_GetAwaiter__
                                  ;
                                  LeanTween__value();
                                  *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)puVar4;
                                  LeanTween__value();
                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                                  FUN_03b6efa0();
                                  *(undefined8 *)(lVar15 + 0x48) = uVar8;
                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),uVar8);
                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                                  FUN_04bdbe64();
                                  *(undefined8 *)(lVar15 + 0x50) = uVar8;
                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),uVar8);
                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                            ();
                                  *(undefined8 *)(lVar15 + 0x58) = uVar8;
                                  LeanTween__value((undefined8 *)(lVar15 + 0x58),uVar8);
                                  puVar4 = PTR_DAT_06a11688;
                                  if (lVar9 != 0) {
                                    FUN_044193fc(lVar9,lVar15,*(undefined8 *)PTR_DAT_06a11688);
                                    if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                                      FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),lVar7,
                                                   *(undefined8 *)puVar4);
                                      lVar15 = *(long *)(in_stack_00000008 + 0x48);
                                      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                      Unity_Services_Relay_RelayServiceException__set_Reason
                                                (lVar7,0);
                                      puVar6 = 
                                      Method_System_Threading_Tasks_Task<ChannelToken>_GetAwaiter__;
                                      puVar4 = PTR_DAT_069fda18;
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(lVar7 + 0x28) =
                                             *(undefined8 *)
                                              Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__
                                        ;
                                        LeanTween__value();
                                        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar6;
                                        LeanTween__value();
                                        uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                        FUN_03b6efa0();
                                        *(undefined8 *)(lVar7 + 0x48) = uVar8;
                                        LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar8);
                                        uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                                        FUN_04bdbe64();
                                        *(undefined8 *)(lVar7 + 0x50) = uVar8;
                                        LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar8);
                                        if (lVar15 != 0) {
                                          FUN_044193fc(lVar15,lVar7,*(undefined8 *)PTR_DAT_06a11688)
                                          ;
                                          lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                          FUN_05f455a0(lVar7,0);
                                          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                          FUN_03b6efa0();
                                          if (lVar7 != 0) {
                                            *(undefined8 *)(lVar7 + 0x40) = uVar8;
                                            LeanTween__value((undefined8 *)(lVar7 + 0x40),uVar8);
                                            lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                            FUN_05f46c04(lVar15,0);
                                            puVar4 = 
                                            Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                            ;
                                            if (lVar15 != 0) {
                                              *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)puVar2
                                              ;
                                              LeanTween__value();
                                              *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)puVar4
                                              ;
                                              LeanTween__value();
                                              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                          PTR_DAT_06a09180);
                                              FUN_03b706f0();
                                              *(undefined8 *)(lVar15 + 0x48) = uVar8;
                                              LeanTween__value((undefined8 *)(lVar15 + 0x48),uVar8);
                                              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                          PTR_DAT_069feaa0);
                                              FUN_04be4edc();
                                              *(undefined8 *)(lVar15 + 0x50) = uVar8;
                                              LeanTween__value((undefined8 *)(lVar15 + 0x50),uVar8);
                                              lVar9 = *(long *)puVar5;
                                              if (*(int *)(lVar9 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar9 = *(long *)puVar5;
                                              }
                                              puVar4 = 
                                              Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__
                                              ;
                                              puVar12 = *(undefined8 **)(lVar9 + 0xb8);
                                              lVar16 = puVar12[0xb];
                                              if (lVar16 == 0) {
                                                if (*(int *)(lVar9 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8)
                                                  ;
                                                }
                                                uVar8 = *puVar12;
                                                lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                             PTR_DAT_06a09180);
                                                FUN_03b706f0(lVar16,uVar8,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_SubscribeRequest>>_GetAwaiter__
                                                  ,0);
                                                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8)
                                                                  + 0x58);
                                                *plVar10 = lVar16;
                                                LeanTween__value(plVar10,lVar16);
                                              }
                                              puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                              *(long *)(lVar15 + 0x60) = lVar16;
                                              LeanTween__value((long *)(lVar15 + 0x60),lVar16);
                                              lVar9 = *(long *)puVar5;
                                              if (*(int *)(lVar9 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar9 = *(long *)puVar5;
                                              }
                                              puVar13 = *(undefined8 **)(lVar9 + 0xb8);
                                              lVar16 = puVar13[0xc];
                                              if (lVar16 == 0) {
                                                if (*(int *)(lVar9 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  puVar13 = *(undefined8 **)(*(long *)puVar5 + 0xb8)
                                                  ;
                                                }
                                                uVar8 = *puVar13;
                                                lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                             PTR_DAT_06a09180);
                                                FUN_03b706f0(lVar16,uVar8,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_TokenData>>_GetAwaiter__
                                                  ,0);
                                                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8)
                                                                  + 0x60);
                                                *plVar10 = lVar16;
                                                LeanTween__value(plVar10,lVar16);
                                                puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                              }
                                              *(long *)(lVar15 + 0x68) = lVar16;
                                              LeanTween__value((long *)(lVar15 + 0x68),lVar16);
                                              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                          PTR_DAT_069fda18);
                                              FUN_03b6efa0();
                                              *(undefined8 *)(lVar15 + 0x40) = uVar8;
                                              LeanTween__value((undefined8 *)(lVar15 + 0x40),uVar8);
                                              if (*(long *)(lVar7 + 0x48) != 0) {
                                                FUN_044193fc(*(long *)(lVar7 + 0x48),lVar15,*puVar12
                                                            );
                                                if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                                                  FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),
                                                               lVar7,*puVar12);
                                                  lVar15 = *(long *)(in_stack_00000008 + 0x48);
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar7,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Response<JoinCodeResponseBody>>_GetAwaiter__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<bool>__ctor__;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_06a09180);
                                                  FUN_03b706f0();
                                                  *(undefined8 *)(lVar7 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069feaa0);
                                                  FUN_04be4edc();
                                                  *(undefined8 *)(lVar7 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x50),
                                                                   uVar8);
                                                  lVar9 = *(long *)puVar5;
                                                  if (*(int *)(lVar9 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar9 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar9 + 0xb8);
                                                  lVar16 = puVar12[0xd];
                                                  if (lVar16 == 0) {
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar16,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IList<ISessionInfo>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x68);
                                                  *plVar10 = lVar16;
                                                  LeanTween__value(plVar10,lVar16);
                                                  }
                                                  puVar2 = PTR_DAT_06a11688;
                                                  *(long *)(lVar7 + 0x60) = lVar16;
                                                  LeanTween__value((long *)(lVar7 + 0x60),lVar16);
                                                  if (lVar15 != 0) {
                                                    FUN_044193fc(lVar15,lVar7,*(undefined8 *)puVar2)
                                                    ;
                                                    lVar7 = *(long *)(in_stack_00000000 + 0x10);
                                                    lVar15 = *(long *)puVar4;
                                                    *(int *)(in_stack_00000000 + 0x1c) =
                                                         *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(in_stack_00000000 + 0x18) =
                                                             uVar1 + 1;
                                                        *(long *)(lVar7 + (long)(int)uVar1 * 8 +
                                                                 0x20) = in_stack_00000008;
                                                        LeanTween__value();
                                                      }
                                                      else {
                                                        FUN_040101ec(in_stack_00000000,
                                                                     in_stack_00000008,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x28));
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<BackfillTicket>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                            ();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x58),
                                                                   uVar8);
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar9 = *(long *)(lVar7 + 0x48);
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                                                                        
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  puVar3 = 
                                                  Method_System_Threading_Tasks_Task<Response<AllocateResponseBody>>_GetAwaiter__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)puVar3;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                            ();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x58),
                                                                   uVar8);
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar15 = *(long *)(in_stack_00000000 + 0x10);
                                                    lVar9 = *(long *)puVar4;
                                                    *(int *)(in_stack_00000000 + 0x1c) =
                                                         *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                    puVar3 = PTR_DAT_069fda18;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(in_stack_00000000 + 0x18) =
                                                             uVar1 + 1;
                                                        plVar10 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar7;
                                                        LeanTween__value(plVar10,lVar7);
                                                      }
                                                      else {
                                                        FUN_040101ec(in_stack_00000000,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<byte[]>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar7 + 0x40) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x40),
                                                                   uVar8);
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<ValueTuple<string,_string>>_GetAwaiter__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar8);
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar9 = *(long *)(lVar7 + 0x48);
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<ValueTuple<Lobby,_bool>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar8);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar3 = 
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<bool>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar14[0xe];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar17 = thunk_FUN_02dd3144(*puVar12);
                                                    FUN_03b6efa0(lVar17,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IList<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x70);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x48) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x48),lVar17);
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar14[0xf];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fe458);
                                                    FUN_04bdbe64(lVar17,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x78);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x50),lVar17);
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,*puVar13);
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar15,0);
                                                  lVar9 = *(long *)puVar5;
                                                  if (*(int *)(lVar9 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar9 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar9 + 0xb8);
                                                  lVar16 = puVar13[0x10];
                                                  if (lVar16 == 0) {
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar13;
                                                    lVar16 = thunk_FUN_02dd3144(*puVar12);
                                                    FUN_03b6efa0(lVar16,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<FileItem>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x80);
                                                  *plVar10 = lVar16;
                                                  LeanTween__value(plVar10,lVar16);
                                                  }
                                                  if (lVar15 != 0) {
                                                    *(long *)(lVar15 + 0x40) = lVar16;
                                                    LeanTween__value((long *)(lVar15 + 0x40),lVar16)
                                                    ;
                                                    lVar16 = *(long *)(lVar15 + 0x48);
                                                    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar9,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Allocation>_GetAwaiter__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IQosJob>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar18 = puVar13[0x11];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar13;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar18,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<PackageInitializationInfo>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x88);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar9 + 0x48) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x48),lVar18);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar18 = puVar13[0x12];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar13;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x90);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar9 + 0x50) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x50),lVar18);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar18 = puVar13[0x13];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar13;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar18,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<Region>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x98);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar9 + 0x60) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x60),lVar18);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar18 = puVar13[0x14];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar13;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar18,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<string>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xa0);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar9 + 0x68) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x68),lVar18);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar16 != 0) {
                                                    FUN_044193fc(lVar16,lVar9,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar2 = PTR_DAT_069fb930;
                                                    if (*(long *)(lVar7 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar7 + 0x48),lVar15,
                                                                   *puVar13);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                      }
                                                      uVar11 = FUN_0630c920(0);
                                                      if ((uVar11 & 1) != 0) {
                                                        lVar9 = *(long *)(lVar7 + 0x48);
                                                        lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                     puVar3);
                                                                                                                
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*puVar12);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar8);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar15,0);
                                                  uVar8 = thunk_FUN_02dd3144(*puVar12);
                                                  FUN_03b6efa0();
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x40) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x40),
                                                                   uVar8);
                                                  lVar16 = *(long *)(lVar15 + 0x48);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_06a116b0);
                                                  FUN_05f394f0(lVar9,0);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar9 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<string>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar18 = puVar13[0x15];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar13;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a0ae38);
                                                    FUN_03b6fe3c(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Nullable<int>>_ConfigureAwait__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xa8);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar9 + 0x48) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x48),lVar18);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar16 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar16,lVar9,
                                                               *(undefined8 *)PTR_DAT_06a11688);
                                                  if (*(long *)(lVar7 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar7 + 0x48),lVar15,
                                                               *puVar13);
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*puVar12);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar8);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpListenerContext>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*puVar12);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar8);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  }
                                                  lVar15 = *(long *)(in_stack_00000000 + 0x10);
                                                  lVar9 = *(long *)puVar4;
                                                  *(int *)(in_stack_00000000 + 0x1c) =
                                                       *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(in_stack_00000000 + 0x18) =
                                                           uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar7;
                                                      LeanTween__value(plVar10,lVar7);
                                                    }
                                                    else {
                                                      FUN_040101ec(in_stack_00000000,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  if (*(char *)(unaff_x19 + 0x1a) != '\0') {
                                                    uVar8 = *(undefined8 *)(unaff_x19 + 0x148);
                                                    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_02df485c();
                                                    }
                                                    uVar11 = FUN_0634eb94(uVar8,0,0);
                                                    if ((uVar11 & 1) != 0) {
                                                      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                    
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar7 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<JoinResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x28));
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x16];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar17,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xb0);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x48) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x48),lVar17);
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x17];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar17,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<byte[]>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xb8);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x50),lVar17);
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x18];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar17,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<FileList>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xc0);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x60) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x60),lVar17);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>[]>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x19];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar17,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<GetItemsResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 200);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x48) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x48),lVar17);
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1a];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar17,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SetItemBatchResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xd0);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x50),lVar17);
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1b];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar17,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SignedUrlResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xd8);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x60) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x60),lVar17);
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1c];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar17,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Session>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xe0);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x68) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x68),lVar17);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Span<byte>_Slice__);
                                                  FUN_05f391d0(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x60) =
                                                       *(undefined8 *)(unaff_x19 + 0x1e8);
                                                  LeanTween__value();
                                                  FUN_050e465c(lVar15,*(undefined8 *)
                                                                       (unaff_x19 + 0x1f0),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Span<byte>_GetPinnableReference__);
                                                  puVar2 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar15 + 0x80) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x80),
                                                                   uVar8);
                                                  puVar3 = PTR_DAT_069fc9b8;
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fc9b8);
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar15 + 0x88) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x88),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar8);
                                                  *(long *)(unaff_x19 + 0x208) = lVar15;
                                                  LeanTween__value((undefined8 *)(unaff_x19 + 0x208)
                                                                   ,lVar15);
                                                  if (*(long *)(lVar7 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar7 + 0x48),
                                                               *(undefined8 *)(unaff_x19 + 0x208),
                                                               *puVar13);
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<RegionsResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1d];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar17,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Dictionary<string,_TokenData>>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xe8);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x48) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x48),lVar17);
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1e];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar17,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<List<string>>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xf0);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x50),lVar17);
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1f];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar17,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Lobby>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xf8);
                                                  *plVar10 = lVar17;
                                                  LeanTween__value(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x60) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x60),lVar17);
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x20];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar12;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar17,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<CreateBackfillTicketResponse>>_GetAwaiter__
                                                  ,0);
                                                  lVar16 = *(long *)(*(long *)puVar5 + 0xb8);
                                                  *(long *)(lVar16 + 0x100) = lVar17;
                                                  LeanTween__value(lVar16 + 0x100,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x68) = lVar17;
                                                  LeanTween__value((long *)(lVar15 + 0x68),lVar17);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  lVar15 = *(long *)(in_stack_00000000 + 0x10);
                                                  lVar9 = *(long *)puVar4;
                                                  *(int *)(in_stack_00000000 + 0x1c) =
                                                       *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                    *(uint *)(in_stack_00000000 + 0x18) = uVar1 + 1;
                                                    plVar10 = (long *)(lVar15 + (long)(int)uVar1 * 8
                                                                      + 0x20);
                                                    *plVar10 = lVar7;
                                                    LeanTween__value(plVar10,lVar7);
                                                  }
                                                  else {
                                                    FUN_040101ec(in_stack_00000000,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  }
                                                  }
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__
                                                  ;
                                                  puVar3 = Method_System_Span<byte>_CopyTo__;
                                                  if (0 < *(int *)(in_stack_00000000 + 0x18)) {
                                                    uVar8 = FUN_04011c04(in_stack_00000000,
                                                                         *(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Pop__
                                                  );
                                                  *(undefined8 *)(unaff_x19 + 0x198) = uVar8;
                                                  LeanTween__value(unaff_x19 + 0x198,uVar8);
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  lVar7 = FUN_05f37ac4(0);
                                                  lVar15 = *(long *)puVar5;
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c(lVar15);
                                                  }
                                                  if (((lVar7 == 0) ||
                                                      (lVar7 = FUN_05f37bfc(lVar7,*(undefined8 *)
                                                                                   (*(long *)(*(long
                                                                                                *)
                                                  puVar5 + 0xb8) + 0x10),1,0,0,0), lVar7 == 0)) ||
                                                  (*(long *)(lVar7 + 0x28) == 0)) goto LAB_05f59540;
                                                  FUN_04419558(*(long *)(lVar7 + 0x28),
                                                               *(undefined8 *)(unaff_x19 + 0x198),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>__ctor__
                                                  );
                                                  }
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  lVar7 = FUN_05f37ac4(0);
                                                  if (lVar7 != 0) {
                                                    FUN_05f37b50(lVar7,*(undefined8 *)
                                                                        (unaff_x19 + 0x180),0);
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
LAB_05f59540:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


