/*
FUNCTION_NAME: System.Net.Sockets.TcpClient$$Dispose
ENTRY_POINT: 03833c9c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_7;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_7
*/


void System_Net_Sockets_TcpClient__Dispose(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x128) = unaff_x19;
  lVar7 = FUN_01c5d2fc(*unaff_x24,2);
  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
  FUN_038363e8(uVar8,0,*unaff_x26,0);
  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                    /* try { // try from 03833cec to 03933cef has its CatchHandler @ 038344b4 */
  FUN_03836600(uVar9,0x16,uVar8,0);
                    /* try { // try from 03833cf0 to 03933cff has its CatchHandler @ 038344e4 */
  if (lVar7 == 0) goto LAB_038363e4;
  if (*(int *)(lVar7 + 0x18) != 0) {
    *(undefined8 *)(lVar7 + 0x20) = uVar9;
    puVar2 = Method_MobileController_SetMutePlayersButtonState__;
                    /* try { // try from 03833d0c to 03933d13 has its CatchHandler @ 038344e0 */
    uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                    /* try { // try from 03833d20 to 03933d27 has its CatchHandler @ 038344dc */
    FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
    uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                    /* try { // try from 03833d38 to 03933d3f has its CatchHandler @ 038344d8 */
    FUN_03836600(uVar9,0x3b,uVar8,0);
    if (1 < *(uint *)(lVar7 + 0x18)) {
      *(undefined8 *)(lVar7 + 0x28) = uVar9;
      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x130) = lVar7;
      lVar7 = FUN_01c5d2fc(*unaff_x24,2);
                    /* try { // try from 03833d70 to 03933d7b has its CatchHandler @ 03834578 */
      uVar8 = thunk_FUN_01c496e0(*unaff_x23);
      FUN_038363e8(uVar8,0,*unaff_x26,0);
      uVar9 = thunk_FUN_01c496e0(*unaff_x22);
      FUN_03836600(uVar9,0x16,uVar8,0);
      if (lVar7 == 0) goto LAB_038363e4;
                    /* try { // try from 03833dac to 03933daf has its CatchHandler @ 038344fc */
                    /* try { // try from 03833db0 to 03933dbf has its CatchHandler @ 03834530 */
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined8 *)(lVar7 + 0x20) = uVar9;
        puVar2 = 
        Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int3,_TessCellCompare>__
        ;
        uVar8 = thunk_FUN_01c496e0(*unaff_x23);
        FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                    /* try { // try from 03833de0 to 03933de7 has its CatchHandler @ 03834534 */
        uVar9 = thunk_FUN_01c496e0(*unaff_x22);
        FUN_03836600(uVar9,1,uVar8,0);
        if (1 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x28) = uVar9;
                    /* try { // try from 03833e08 to 03933e0f has its CatchHandler @ 03834538 */
          *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x138) = lVar7;
          lVar7 = FUN_01c5d2fc(*unaff_x24,4);
          uVar8 = thunk_FUN_01c496e0(*unaff_x23);
          FUN_038363e8(uVar8,0,*unaff_x26,0);
          uVar9 = thunk_FUN_01c496e0(*unaff_x22);
          FUN_03836600(uVar9,0x16,uVar8,0);
          if (lVar7 == 0) goto LAB_038363e4;
          if (*(int *)(lVar7 + 0x18) != 0) {
            *(undefined8 *)(lVar7 + 0x20) = uVar9;
            puVar2 = Method_System_Threading_Monitor_ThrowLockTakenException__;
            uVar8 = thunk_FUN_01c496e0(*unaff_x23);
            FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
            uVar9 = thunk_FUN_01c496e0(*unaff_x22);
            FUN_03836600(uVar9,3,uVar8,0);
            if (1 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x28) = uVar9;
              puVar3 = Method_System_Threading_Monitor_Wait__;
              uVar8 = thunk_FUN_01c496e0(*unaff_x23);
              FUN_038363e8(uVar8,0,*(undefined8 *)puVar3,0);
              uVar9 = thunk_FUN_01c496e0(*unaff_x22);
              FUN_03836600(uVar9,4,uVar8,0);
              if (2 < *(uint *)(lVar7 + 0x18)) {
                *(undefined8 *)(lVar7 + 0x30) = uVar9;
                puVar4 = 
                Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_TessJunctionCompare>__
                ;
                uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                FUN_038363e8(uVar8,0,*(undefined8 *)puVar4,0);
                uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                FUN_03836600(uVar9,0x3b,uVar8,0);
                if (3 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x38) = uVar9;
                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x140) = lVar7;
                  lVar7 = FUN_01c5d2fc(*unaff_x24,3);
                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                  FUN_038363e8(uVar8,0,*unaff_x26,0);
                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                  FUN_03836600(uVar9,0x16,uVar8,0);
                  if (lVar7 == 0) goto LAB_038363e4;
                  if (*(int *)(lVar7 + 0x18) != 0) {
                    *(undefined8 *)(lVar7 + 0x20) = uVar9;
                    uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                    FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                    uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                    FUN_03836600(uVar9,3,uVar8,0);
                    if (1 < *(uint *)(lVar7 + 0x18)) {
                      *(undefined8 *)(lVar7 + 0x28) = uVar9;
                      uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                      FUN_038363e8(uVar8,0,*(undefined8 *)puVar3,0);
                      uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                      FUN_03836600(uVar9,4,uVar8,0);
                      if (2 < *(uint *)(lVar7 + 0x18)) {
                        *(undefined8 *)(lVar7 + 0x30) = uVar9;
                        *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x148) = lVar7;
                        lVar7 = FUN_01c5d2fc(*unaff_x24,5);
                        uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                        FUN_038363e8(uVar8,0,*unaff_x26,0);
                        uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                        FUN_03836600(uVar9,0x16,uVar8,0);
                        if (lVar7 == 0) goto LAB_038363e4;
                        if (*(int *)(lVar7 + 0x18) != 0) {
                          *(undefined8 *)(lVar7 + 0x20) = uVar9;
                          uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                          FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                          uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                          FUN_03836600(uVar9,3,uVar8,0);
                          if (1 < *(uint *)(lVar7 + 0x18)) {
                            *(undefined8 *)(lVar7 + 0x28) = uVar9;
                            uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                            FUN_038363e8(uVar8,0,*(undefined8 *)puVar3,0);
                            uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                            FUN_03836600(uVar9,4,uVar8,0);
                            if (2 < *(uint *)(lVar7 + 0x18)) {
                              *(undefined8 *)(lVar7 + 0x30) = uVar9;
                              puVar2 = Method_MobileController_OnPlayerDeath__;
                              uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                              FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                              uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                              FUN_03836600(uVar9,0x3e,uVar8,0);
                              if (3 < *(uint *)(lVar7 + 0x18)) {
                                *(undefined8 *)(lVar7 + 0x38) = uVar9;
                                puVar2 = Method_MobileController_OnToggleAutoFire__;
                                uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                FUN_03836600(uVar9,0x3f,uVar8,0);
                                if (4 < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x40) = uVar9;
                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x150) = lVar7;
                                  lVar7 = FUN_01c5d2fc(*unaff_x24,3);
                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                  FUN_038363e8(uVar8,0,*unaff_x26,0);
                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                  FUN_03836600(uVar9,0x16,uVar8,0);
                                  if (lVar7 == 0) goto LAB_038363e4;
                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                    *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                    puVar2 = 
                                    Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int4,_DelaEdgeCompare>__
                                    ;
                                    uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                    FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                    uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                    FUN_03836600(uVar9,1,uVar8,0);
                                    if (1 < *(uint *)(lVar7 + 0x18)) {
                                      *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                      puVar2 = 
                                      Method_System_Linq_Expressions_Interpreter_ModuloInstruction_Create__
                                      ;
                                      uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                      FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                      uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                      FUN_03836600(uVar9,0x40,uVar8,0);
                                      if (2 < *(uint *)(lVar7 + 0x18)) {
                                        *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                        *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x158) = lVar7;
                                        lVar7 = FUN_01c5d2fc(*unaff_x24,2);
                                        uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                        FUN_038363e8(uVar8,0,*unaff_x26,0);
                                        uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                        FUN_03836600(uVar9,0x16,uVar8,0);
                                        if (lVar7 == 0) goto LAB_038363e4;
                                        if (*(int *)(lVar7 + 0x18) != 0) {
                                          *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                          puVar2 = 
                                          Method_System_Net_MonoChunkStream_ThrowExpectingChunkTrailer__
                                          ;
                                          uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                          FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                          uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                          FUN_03836600(uVar9,0x79,uVar8,0);
                                          if (1 < *(uint *)(lVar7 + 0x18)) {
                                            *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                            *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x160) = lVar7;
                                            lVar7 = FUN_01c5d2fc(*unaff_x24,2);
                                            uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                            FUN_038363e8(uVar8,0,*unaff_x26,0);
                                            uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                            FUN_03836600(uVar9,0x16,uVar8,0);
                                            if (lVar7 == 0) goto LAB_038363e4;
                                            if (*(int *)(lVar7 + 0x18) != 0) {
                                              *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                              puVar2 = 
                                              Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_TessEdgeCompare>__
                                              ;
                                              uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                              FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                              uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                              FUN_03836600(uVar9,0x79,uVar8,0);
                                              if (1 < *(uint *)(lVar7 + 0x18)) {
                                                *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x168) =
                                                     lVar7;
                                                lVar7 = FUN_01c5d2fc(*unaff_x24,4);
                                                uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                FUN_038363e8(uVar8,0,*unaff_x26,0);
                                                uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                FUN_03836600(uVar9,0x16,uVar8,0);
                                                if (lVar7 == 0) goto LAB_038363e4;
                                                if (*(int *)(lVar7 + 0x18) != 0) {
                                                  *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                  puVar2 = Method_System_Threading_Monitor_Pulse__;
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,1,uVar8,0);
                                                  if (1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Threading_Monitor_PulseAll__;
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,0x41,uVar8,0);
                                                  if (2 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Threading_Monitor_ReliableEnterTimeout__
                                                  ;
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,0x42,uVar8,0);
                                                  if (3 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x38) = uVar9;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x170)
                                                         = lVar7;
                                                    lVar7 = FUN_01c5d2fc(*unaff_x24,2);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar2 = 
                                                  Method_System_Threading_Monitor_ObjWait__;
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,0x43,uVar8,0);
                                                  if (1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x178)
                                                         = lVar7;
                                                    lVar7 = FUN_01c5d2fc(*unaff_x24,3);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar2 = 
                                                  Method_System_Threading_Monitor_ObjPulse__;
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,0x3e,uVar8,0);
                                                  if (1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Threading_Monitor_ObjPulseAll__;
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,0x43,uVar8,0);
                                                  if (2 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x180)
                                                         = lVar7;
                                                    lVar7 = FUN_01c5d2fc(*unaff_x24,3);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar2 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<UEvent,_TessEventCompare>__
                                                  ;
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,0x35,uVar8,0);
                                                  if (1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    puVar2 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_IntersectionCompare>__
                                                  ;
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,0x44,uVar8,0);
                                                  if (2 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                         = lVar7;
                                                    lVar7 = FUN_01c5d2fc(*unaff_x24,3);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar2 = 
                                                  Method_Mono_Net_Security_MobileAuthenticatedStream_set_Position__
                                                  ;
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,0x3e,uVar8,0);
                                                  if (1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    puVar2 = Method_MobileController_ClosedPause__;
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                    uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar9,0x3f,uVar8,0);
                                                    if (2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 400)
                                                           = lVar7;
                                                      puVar2 = 
                                                  Method_System_Net_Configuration_ModuleElement__ctor__
                                                  ;
                                                  lVar7 = FUN_01c5d2fc(*unaff_x24,2);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,0x45,uVar8,0);
                                                  if (lVar7 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                    puVar2 = 
                                                  Method_System_Net_Configuration_ModuleElement_get_Properties__
                                                  ;
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,0x7a,uVar8,0);
                                                  if (1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x198)
                                                         = lVar7;
                                                    puVar2 = Method_MobileController_OpenPause__;
                                                    lVar7 = FUN_01c5d2fc(*unaff_x24,1);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                    uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar9,0x45,uVar8,0);
                                                    if (lVar7 == 0) {
LAB_038363e4:
                    /* WARNING: Subroutine does not return */
                                                      FUN_01c5d4a4();
                                                    }
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a0
                                                               ) = lVar7;
                                                      lVar7 = FUN_01c5d2fc(*unaff_x24,2);
                                                      uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                      FUN_038363e8(uVar8,0,*unaff_x26,0);
                                                      uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                      FUN_03836600(uVar9,0x16,uVar8,0);
                                                      if (lVar7 == 0) goto LAB_038363e4;
                                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                        puVar2 = 
                                                  Method_UnityEngine_MonoBehaviour_InvokeRepeating__
                                                  ;
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar8,0,*(undefined8 *)puVar2,0);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar9,0x43,uVar8,0);
                                                  if (1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a8)
                                                         = lVar7;
                                                    lVar7 = FUN_01c5d2fc(*unaff_x24,1);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar8,0,*unaff_x26,0);
                                                    uVar9 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar9,0x16,uVar8,0);
                                                    if (lVar7 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                      puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_ThrowIfConnected__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b0) =
                                                       lVar7;
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_MethodBuilder_get_MethodHandle__
                                                  ;
                                                  lVar7 = FUN_01c5d2fc(*(undefined8 *)puVar3,0x30);
                                                  uVar9 = **(undefined8 **)(*unaff_x25 + 0xb8);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0,0,uVar9,0,0,0,1);
                                                  if (lVar7 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x20) = uVar8;
                                                    puVar4 = 
                                                  Method_MQTTnet_Client_MqttClient_ThrowIfOptionsInvalid__
                                                  ;
                                                  puVar3 = 
                                                  Method_MQTTnet_Adapter_MqttChannelAdapter__ctor__;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 8);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb8);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_MQTTnet_Client_MqttClient_ThrowIfOptionsInvalid__
                                                  );
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x4a,1,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ServerCertificate__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa8);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1b0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x4b,2,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (2 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x30) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_WriteBinary__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x178);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x4c,3,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (3 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x38) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_Write__;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x180);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x4d,4,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (4 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x40) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttApplicationMessageReceivedEventArgs_AcknowledgeAsync__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x18);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 200);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x4e,5,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (5 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x48) = uVar9;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnPlayPauseClicked__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x10);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xc0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x4f,6,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (6 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x50) = uVar9;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnFastForwardClicked__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x80);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x128);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x50,7,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (7 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x58) = uVar9;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_MouseEventsHelper_SendEnterLeave<MouseLeaveEvent,_MouseEnterEvent>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x130);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x50,8,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (8 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x60) = uVar9;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoTlsProviderFactory_CreateDefaultProviderImpl__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 400);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x51,9,uVar10,uVar11,uVar8,0,1)
                                                  ;
                                                  if (9 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x68) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferReader_SetBuffer__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x88);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x138);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x52,10,uVar10,uVar11,uVar8,0,1
                                                              );
                                                  if (10 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x70) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferReader_ReadVariableByteInteger__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x140);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x52,0xb,uVar10,uVar11,uVar8,0,
                                                               1);
                                                  if (0xb < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x78) = uVar9;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ClientCertificateRequired__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x90);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x53,0xc,uVar10,uVar11,uVar8,0,
                                                               1);
                                                  if (0xc < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x80) = uVar9;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnRewindClicked__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x54,0xd,uVar10,uVar11,uVar8,0,
                                                               1);
                                                  if (0xd < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x88) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPingRespPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x55,0xe,uVar10,uVar11,uVar8,0,
                                                               1);
                                                  if (0xe < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x90) = uVar9;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoTlsProviderFactory_InitializeInternal__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x150);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x56,0xf,uVar10,uVar11,uVar8,0,
                                                               1);
                                                  if (0xf < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x98) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_WriteString__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x170);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x57,0x10,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x10 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xa0) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_AcknowledgeReceivedPublishPacket__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x58);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x108);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x58,0x11,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x11 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xa8) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttApplicationMessageFactory_Create__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x20);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x59,0x12,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x12 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xb0) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_MqttApplicationMessageBuilder_Build__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x40);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x6c,0x13,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x13 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xb8) = uVar9;
                                                    puVar3 = 
                                                  Method_MovingPlatformManager_OnJoinedRoom__;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x50);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x100);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x6e,0x14,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x14 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xc0) = uVar9;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnSeekBarMoved__;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x48);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf8);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x6d,0x15,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x15 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 200) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPubRecPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x28);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd8);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x6f,0x16,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x16 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xd0) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPubAckPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x30);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x70,0x17,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x17 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xd8) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPubCompPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x38);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe8);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x71,0x18,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x18 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xe0) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient__ctor__;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x70);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x118);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x74,0x19,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x19 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xe8) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttSubAckPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x68);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x120);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x72,0x1a,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x1a < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xf0) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttUnsubAckPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x60);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x110);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x73,0x1b,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x1b < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xf8) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferReader_ValidateReceiveBuffer__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x158);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x5a,0x1c,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x1c < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x100) = uVar9;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x158)
                                                    ;
                                                    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03836630(uVar9,0x5b,0x1d,uVar10,uVar11,uVar8
                                                                 ,0,1);
                                                    if (0x1d < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x108) = uVar9;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xa0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x158);
                                                      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_03836630(uVar9,0x5c,0x1e,uVar10,uVar11,
                                                                   uVar8,0,1);
                                                      if (0x1e < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x110) = uVar9;
                                                        puVar3 = 
                                                  Method_MQTTnet_Adapter_MqttChannelAdapter_WrapAndThrowException__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x160);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x5d,0x1f,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x1f < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x118) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_MqttApplicationMessageValidator_ThrowIfNotSupported__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x168);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x5e,0x20,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x20 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x120) = uVar9;
                                                    puVar3 = 
                                                  Method_MQTTnet_MqttApplicationMessageValidator_Throw__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x188);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x5f,0x21,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x21 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x128) = uVar9;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03836630(uVar9,0x60,0x22,uVar10,uVar11,uVar8
                                                                 ,0,1);
                                                    if (0x22 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x130) = uVar9;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_03836630(uVar9,0x61,0x23,uVar10,uVar11,
                                                                   uVar8,0,1);
                                                      if (0x23 < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x138) = uVar9;
                                                        uVar10 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar11 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                    puVar2);
                                                        FUN_03836630(uVar9,0x62,0x24,uVar10,uVar11,
                                                                     uVar8,0,1);
                                                        if (0x24 < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 0x140) = uVar9;
                                                          uVar10 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar11 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_0383649c(uVar8,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                      puVar2);
                                                          FUN_03836630(uVar9,99,0x25,uVar10,uVar11,
                                                                       uVar8,0,1);
                                                          if (0x25 < *(uint *)(lVar7 + 0x18)) {
                                                            *(undefined8 *)(lVar7 + 0x148) = uVar9;
                                                            uVar10 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar11 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar8 = thunk_FUN_01c496e0(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_0383649c(uVar8,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar9 = thunk_FUN_01c496e0(*(undefined8
                                                                                         *)puVar2);
                                                            FUN_03836630(uVar9,100,0x26,uVar10,
                                                                         uVar11,uVar8,0,1);
                                                            if (0x26 < *(uint *)(lVar7 + 0x18)) {
                                                              *(undefined8 *)(lVar7 + 0x150) = uVar9
                                                              ;
                                                              uVar10 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0xb0);
                                                              uVar11 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0x188);
                                                              uVar8 = thunk_FUN_01c496e0(*(
                                                  undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0x65,0x27,uVar10,uVar11,uVar8,0
                                                               ,1);
                                                  if (0x27 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x158) = uVar9;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03836630(uVar9,0x66,0x28,uVar10,uVar11,uVar8
                                                                 ,0,1);
                                                    if (0x28 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x160) = uVar9;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0);
                                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_03836630(uVar9,0x67,0x29,uVar10,uVar11,
                                                                   uVar8,0,1);
                                                      if (0x29 < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x168) = uVar9;
                                                        uVar10 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar11 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_0383649c(uVar8,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                    puVar2);
                                                        FUN_03836630(uVar9,0x68,0x2a,uVar10,uVar11,
                                                                     uVar8,0,1);
                                                        if (0x2a < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 0x170) = uVar9;
                                                          uVar10 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar11 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_0383649c(uVar8,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                      puVar2);
                                                          FUN_03836630(uVar9,0x69,0x2b,uVar10,uVar11
                                                                       ,uVar8,0,1);
                                                          if (0x2b < *(uint *)(lVar7 + 0x18)) {
                                                            *(undefined8 *)(lVar7 + 0x178) = uVar9;
                                                            uVar10 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar11 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar8 = thunk_FUN_01c496e0(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_0383649c(uVar8,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar9 = thunk_FUN_01c496e0(*(undefined8
                                                                                         *)puVar2);
                                                            FUN_03836630(uVar9,0x75,0x2c,uVar10,
                                                                         uVar11,uVar8,0,1);
                                                            if (0x2c < *(uint *)(lVar7 + 0x18)) {
                                                              *(undefined8 *)(lVar7 + 0x180) = uVar9
                                                              ;
                                                              puVar6 = 
                                                  Method_MQTTnet_Client_MqttClient_PublishAsync__;
                                                  puVar5 = 
                                                  Method_Mono_Net_Security_MonoTlsProviderFactory_LookupProvider__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_IO_MonoLinqHelper_ToArray<FileInfo>__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1a0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar5,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
                                                  FUN_03836550(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar10,0x6b,0x2d,0,uVar11,uVar8,uVar9
                                                               ,0);
                                                  if (0x2d < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x188) = uVar10;
                                                    puVar5 = 
                                                  Method_MQTTnet_Client_MqttApplicationMessageReceivedEventArgs__ctor__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_IO_MonoLinqHelper_ToArray<string>__;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x198);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar5,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
                                                  FUN_03836550(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar10,0x6a,0x2e,0,uVar11,uVar8,uVar9
                                                               ,0);
                                                  if (0x2e < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 400) = uVar10;
                                                    puVar5 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_WriteVariableByteInteger__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_Runtime_Remoting_Messaging_MonoMethodMessage_GetMethodInfo__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x78);
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1a8);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar8,0,*(undefined8 *)puVar5,0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
                                                  FUN_03836550(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar10,0x76,0x2f,uVar11,uVar12,uVar8,
                                                               uVar9,1);
                                                  if (0x2f < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x198) = uVar10;
                                                    puVar3 = PTR_DAT_04232bd8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b8)
                                                         = lVar7;
                                                    puVar4 = Method_MinimapDisplay_SetInvisible__;
                                                    puVar2 = PTR_DAT_0422fd68;
                                                    uVar8 = FUN_01c5d2fc(*(undefined8 *)puVar3,6);
                                                    FUN_032032f0(uVar8,*(undefined8 *)puVar4,0);
                                                    *(undefined8 *)
                                                     (*(long *)(*unaff_x25 + 0xb8) + 0x1c0) = uVar8;
                                                    lVar7 = FUN_01c5d2fc(*(undefined8 *)puVar2,6);
                                                    if (lVar7 == 0) goto LAB_038363e4;
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if ((((uVar1 != 0) &&
                                                         (*(undefined8 *)(lVar7 + 0x20) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_MQTTnet_Implementations_MqttClientAdapterFactory_CreateClientAdapter__
                                                  , uVar1 != 1)) &&
                                                  (*(undefined8 *)(lVar7 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  GAP_ParticleSystemController_SerializableMinMaxCurve_TypeInfo
                                                  , 2 < uVar1)) &&
                                                  (((*(undefined8 *)(lVar7 + 0x30) =
                                                          *(undefined8 *)
                                                                                                                      
                                                  Method_System_Linq_Enumerable_Select<StyleSelector,_string>__
                                                  , uVar1 != 3 &&
                                                  (*(undefined8 *)(lVar7 + 0x38) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  UnityEngine_Rendering_ProfilingSampler___TypeInfo,
                                                  4 < uVar1)) &&
                                                  (*(undefined8 *)(lVar7 + 0x40) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                                                  , uVar1 != 5)))) {
                                                    *(undefined8 *)(lVar7 + 0x48) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_MQTTnet_Client_MqttClientCertificateSelectionEventArgs__ctor__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1c8) =
                                                       lVar7;
                                                  lVar7 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                  if (lVar7 == 0) goto LAB_038363e4;
                                                  if ((*(int *)(lVar7 + 0x18) != 0) &&
                                                     (*(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IDeselectHandler>__
                                                  , *(int *)(lVar7 + 0x18) != 1)) {
                                                    *(undefined8 *)(lVar7 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d0) =
                                                       lVar7;
                                                  lVar7 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                  if (lVar7 == 0) goto LAB_038363e4;
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar7 + 0x20) =
                                                            *(undefined8 *)
                                                                                                                          
                                                  VoxelBusters_EssentialKit_SharingServicesCore_Android_NativeMessageComposerListener_TypeInfo
                                                  , uVar1 != 1)) &&
                                                  (*(undefined8 *)(lVar7 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar7 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d8) =
                                                       lVar7;
                                                  lVar7 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                  if (lVar7 == 0) goto LAB_038363e4;
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar7 + 0x20) =
                                                            *(undefined8 *)
                                                                                                                          
                                                  Method_MQTTnet_Client_MqttClientConnectResultFactory_ConvertReturnCodeToResultCode__
                                                  , uVar1 != 1)) &&
                                                  (*(undefined8 *)(lVar7 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_MQTTnet_Client_MqttClient_ThrowNotConnected__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar7 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_MQTTnet_Client_MqttClientCertificateValidationEventArgs__ctor__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1e0) =
                                                       lVar7;
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
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


