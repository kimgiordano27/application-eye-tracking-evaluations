/*
FUNCTION_NAME: UnityEngine.SendMouseEvents$$SendEvents
ENTRY_POINT: 0713f6b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_SendMouseEvents__SendEvents(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int in_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  *(int *)(unaff_x23 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x24;
      thunk_FUN_036b7ad0();
    }
    else {
      FUN_0459f03c();
    }
    *(long *)(unaff_x22 + 0x28) = unaff_x23;
    thunk_FUN_036b7ad0();
    lVar6 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
        thunk_FUN_036b7ad0();
      }
      else {
        FUN_0459f03c();
      }
      lVar6 = thunk_FUN_0367fe20(*unaff_x29);
      FUN_07119848(lVar6,0);
      puVar2 = Method_UnityEngine_UIElements_BaseField<ulong>_get_rawValue__;
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x10) =
             *(undefined8 *)System_Runtime_Serialization_ElementData___TypeInfo;
        thunk_FUN_036b7ad0();
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
        thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
        puVar2 = PTR_DAT_079fb378;
        *(undefined4 *)(lVar6 + 0x18) = 0;
        lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
        FUN_0459e7d4(lVar3,*unaff_x26);
        puVar2 = PTR_DAT_079fb388;
        if (lVar3 != 0) {
          lVar7 = *(long *)(lVar3 + 0x10);
          uVar5 = *(undefined8 *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
          ;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 0713f828 to 0723f82b has its CatchHandler @ 0713f9d0 */
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    /* try { // try from 0713f82c to 0723f83b has its CatchHandler @ 0713f9e0 */
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
              thunk_FUN_036b7ad0();
            }
            else {
              FUN_0459f03c(lVar3,uVar5,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
            }
                    /* try { // try from 0713f854 to 0723f857 has its CatchHandler @ 0713f9c4 */
            *(long *)(lVar6 + 0x30) = lVar3;
                    /* try { // try from 0713f858 to 0723f86b has its CatchHandler @ 0713f9dc */
            thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
            lVar3 = thunk_FUN_0367fe20(*unaff_x20);
            FUN_0459e7d4(lVar3,*unaff_x25);
            lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                    /* try { // try from 0713f880 to 0723f893 has its CatchHandler @ 0713f9e4 */
            FUN_07119840(lVar7,0);
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x18) =
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromPrefab>d__74>__
              ;
              thunk_FUN_036b7ad0();
                    /* try { // try from 0713f8a4 to 0723f8af has its CatchHandler @ 0713f9cc */
              *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
              thunk_FUN_036b7ad0();
              if (lVar3 != 0) {
                lVar8 = *(long *)(lVar3 + 0x10);
                lVar9 = *(long *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                ;
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    /* try { // try from 0713f8f4 to 0723f90b has its CatchHandler @ 0713f9ec */
                    plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar4 = lVar7;
                    thunk_FUN_036b7ad0(plVar4,lVar7);
                  }
                  else {
                    FUN_0459f03c(lVar3,lVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                    /* try { // try from 0713f918 to 0723f923 has its CatchHandler @ 0713f9c8 */
                  *(long *)(lVar6 + 0x28) = lVar3;
                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                  lVar3 = *(long *)(unaff_x21 + 0x10);
                  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                  if (lVar3 != 0) {
                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    /* try { // try from 0713f960 to 0723f977 has its CatchHandler @ 0713f9e8 */
                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar4 = lVar6;
                      thunk_FUN_036b7ad0(plVar4,lVar6);
                    }
                    else {
                    /* try { // try from 0713f978 to 0723f9af has its CatchHandler @ 0713f660 */
                      FUN_0459f03c();
                    }
                    lVar6 = thunk_FUN_0367fe20(*unaff_x29);
                    FUN_07119848(lVar6,0);
                    puVar2 = 
                    Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                    ;
                    if (lVar6 != 0) {
                    /* try { // try from 0713f9b0 to 0723f9b3 has its CatchHandler @ 0713f9d8 */
                    /* try { // try from 0713f9b4 to 0723f9bb has its CatchHandler @ 0713f9ec */
                      *(undefined8 *)(lVar6 + 0x10) =
                           *(undefined8 *)System_Reflection_FieldInfo___TypeInfo;
                      thunk_FUN_036b7ad0();
                    /* try { // try from 0713f9bc to 0723f9bf has its CatchHandler @ 0713f9d4 */
                    /* try { // try from 0713f9c0 to 0723f9c3 has its CatchHandler @ 0713f9e8 */
                    /* catch() { ... } // from try @ 0713f854 with catch @ 0713f9c4
                       try { // try from 0713f9c4 to 0723fa07 has its CatchHandler @ 0713f660 */
                      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                    /* catch() { ... } // from try @ 0713f918 with catch @ 0713f9c8 */
                    /* catch() { ... } // from try @ 0713f8a4 with catch @ 0713f9cc */
                      thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                      puVar2 = PTR_DAT_079fb378;
                    /* catch() { ... } // from try @ 0713f828 with catch @ 0713f9d0 */
                    /* catch() { ... } // from try @ 0713f9bc with catch @ 0713f9d4 */
                    /* catch() { ... } // from try @ 0713f9b0 with catch @ 0713f9d8 */
                      *(undefined4 *)(lVar6 + 0x18) = 0;
                    /* catch() { ... } // from try @ 0713f858 with catch @ 0713f9dc */
                    /* catch() { ... } // from try @ 0713f82c with catch @ 0713f9e0 */
                      lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 0713f880 with catch @ 0713f9e4 */
                    /* catch() { ... } // from try @ 0713f960 with catch @ 0713f9e8
                       catch() { ... } // from try @ 0713f9c0 with catch @ 0713f9e8 */
                    /* catch() { ... } // from try @ 0713f8f4 with catch @ 0713f9ec
                       catch() { ... } // from try @ 0713f9b4 with catch @ 0713f9ec */
                      FUN_0459e7d4(lVar3,*unaff_x26);
                      puVar2 = PTR_DAT_079fb388;
                      if (lVar3 != 0) {
                        lVar7 = *(long *)(lVar3 + 0x10);
                        uVar5 = *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                        ;
                    /* try { // try from 0713fa08 to 0723fa0b has its CatchHandler @ 0713fa24 */
                    /* try { // try from 0713fa0c to 0723fa27 has its CatchHandler @ 0713f660 */
                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                        if (lVar7 != 0) {
                          uVar1 = *(uint *)(lVar3 + 0x18);
                    /* catch() { ... } // from try @ 0713fa08 with catch @ 0713fa24 */
                    /* try { // try from 0713fa28 to 0723fa2f has its CatchHandler @ 0713fa38 */
                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 0713fa30 to 0723fa3b has its CatchHandler @ 0713f660 */
                    /* catch() { ... } // from try @ 0713fa28 with catch @ 0713fa38 */
                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    /* try { // try from 0713fa3c to 0723fbff has its CatchHandler @ 0713fa3c
                       catch() { ... } // from try @ 0713fa3c with catch @ 0713fa3c
                       catch() { ... } // from try @ 0713fcdc with catch @ 0713fa3c
                       catch() { ... } // from try @ 0713fd1c with catch @ 0713fa3c
                       catch() { ... } // from try @ 0713fd54 with catch @ 0713fa3c
                       catch() { ... } // from try @ 0713fd78 with catch @ 0713fa3c */
                            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                            thunk_FUN_036b7ad0();
                          }
                          else {
                            FUN_0459f03c(lVar3,uVar5,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) +
                                          0x70));
                          }
                          *(long *)(lVar6 + 0x30) = lVar3;
                          thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                          lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                          FUN_0459e7d4(lVar3,*unaff_x25);
                          lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                          FUN_07119840(lVar7,0);
                          if (lVar7 != 0) {
                            *(undefined8 *)(lVar7 + 0x18) =
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                            ;
                            thunk_FUN_036b7ad0();
                            *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                            thunk_FUN_036b7ad0();
                            if (lVar3 != 0) {
                              lVar8 = *(long *)(lVar3 + 0x10);
                              lVar9 = *(long *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                              ;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar8 != 0) {
                                uVar1 = *(uint *)(lVar3 + 0x18);
                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                  plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar4 = lVar7;
                                  thunk_FUN_036b7ad0(plVar4,lVar7);
                                }
                                else {
                                  FUN_0459f03c(lVar3,lVar7,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                }
                                *(long *)(lVar6 + 0x28) = lVar3;
                                thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                lVar3 = *(long *)(unaff_x21 + 0x10);
                                *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                if (lVar3 != 0) {
                                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                    plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar4 = lVar6;
                                    thunk_FUN_036b7ad0(plVar4,lVar6);
                                  }
                                  else {
                                    FUN_0459f03c();
                                  }
                                  lVar6 = thunk_FUN_0367fe20(*unaff_x29);
                                  FUN_07119848(lVar6,0);
                                  puVar2 = 
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__26>__
                                  ;
                                  if (lVar6 != 0) {
                                    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_07a29538;
                                    thunk_FUN_036b7ad0();
                                    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                    puVar2 = PTR_DAT_079fb378;
                                    *(undefined4 *)(lVar6 + 0x18) = 2;
                                    lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                    FUN_0459e7d4(lVar3,*unaff_x26);
                                    puVar2 = PTR_DAT_079fb388;
                                    if (lVar3 != 0) {
                                      lVar7 = *(long *)(lVar3 + 0x10);
                                      uVar5 = *(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                                      ;
                                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                      if (lVar7 != 0) {
                                        uVar1 = *(uint *)(lVar3 + 0x18);
                                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar5;
                                          thunk_FUN_036b7ad0();
                                        }
                                        else {
                                          FUN_0459f03c(lVar3,uVar5,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(*(long *)puVar2 + 0x20)
                                                                  + 0xc0) + 0x70));
                                        }
                                        *(long *)(lVar6 + 0x30) = lVar3;
                                        thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                        lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                        FUN_0459e7d4(lVar3,*unaff_x25);
                                        lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                        FUN_07119840(lVar7,0);
                                        if (lVar7 != 0) {
                                          *(undefined8 *)(lVar7 + 0x18) =
                                               *(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                                          ;
                                          thunk_FUN_036b7ad0();
                                          *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                          thunk_FUN_036b7ad0();
                                          if (lVar3 != 0) {
                                            lVar8 = *(long *)(lVar3 + 0x10);
                                            lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                            ;
                                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                            if (lVar8 != 0) {
                                              uVar1 = *(uint *)(lVar3 + 0x18);
                                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar4 = lVar7;
                                                thunk_FUN_036b7ad0(plVar4,lVar7);
                                              }
                                              else {
                                                FUN_0459f03c(lVar3,lVar7,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar6 + 0x28) = lVar3;
                                              thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                              lVar3 = *(long *)(unaff_x21 + 0x10);
                                              *(int *)(unaff_x21 + 0x1c) =
                                                   *(int *)(unaff_x21 + 0x1c) + 1;
                                              if (lVar3 != 0) {
                                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                  plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar4 = lVar6;
                                                  thunk_FUN_036b7ad0(plVar4,lVar6);
                                                }
                                                else {
                                                  FUN_0459f03c();
                                                }
                                                lVar6 = thunk_FUN_0367fe20(*unaff_x29);
                                                FUN_07119848(lVar6,0);
                                                puVar2 = 
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetException__
                                                ;
                                                if (lVar6 != 0) {
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_ComponentModel_EventDescriptor___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_AwaitOnCompleted<Awaitable_Awaiter<NativeArray<int>>,_Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonSharedLib>d__89>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)System_Enum___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    puVar2 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar6 + 0x18) = 2;
                                                    lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_0459e7d4(lVar3,*unaff_x26);
                                                    puVar2 = PTR_DAT_079fb388;
                                                    if (lVar3 != 0) {
                                                      lVar7 = *(long *)(lVar3 + 0x10);
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_UIElements_BaseField<int>_SetValueWithoutNotify__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefab>d__74>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<uint>_get_labelElement__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_visualInput__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<uint>_get_visualInput__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Vector2>_HandleEventBubbleUp__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_EnterFinallyInstruction___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<int>__ctor__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromSharedRooms>d__67>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    puVar2 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar6 + 0x18) = 3;
                                                    lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_0459e7d4(lVar3,*unaff_x26);
                                                    puVar2 = PTR_DAT_079fb388;
                                                    if (lVar3 != 0) {
                                                      lVar7 = *(long *)(lVar3 + 0x10);
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x21;
                                                    thunk_FUN_036b7ad0();
                                                    FUN_07119614(in_stack_00000000,in_stack_00000008
                                                                 ,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


