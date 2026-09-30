/*
FUNCTION_NAME: FUN_05f4db60
ENTRY_POINT: 05f4db60
PROGRAM: beastcraft-libil2cpp.so
SCORE: 124
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_05f4db60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  
  puVar2 = PTR_DAT_06a2f488;
                    /* try { // try from 05f4db6c to 0604db6f has its CatchHandler @ 05f4dba8 */
                    /* try { // try from 05f4db70 to 0604dbc7 has its CatchHandler @ 05f4da90 */
  if ((bRam0000000006e94659 & 1) == 0) {
    FUN_02e3ca1c(MessagePipe_SingletonMessageBrokerCore<TMessage>_var);
    FUN_02e3ca1c(PTR_DAT_06a2f1b8);
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 05f4db6c with catch @ 05f4dba8
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 05f4db4c with catch @ 05f4dbac
                        */
    FUN_02e3ca1c(PTR_DAT_06aadae0);
    FUN_02e3ca1c(PTR_DAT_06a2f488);
    FUN_02e3ca1c(System_DelegateSerializationHolder_DelegateEntry_var);
                    /* try { // try from 05f4dbc8 to 0604dbcb has its CatchHandler @ 05f4dbec */
                    /* try { // try from 05f4dbcc to 0604dbef has its CatchHandler @ 05f4da90 */
    FUN_02e3ca1c(UnityEngine_InputSystem_Controls_DpadControl_DpadAxisControl_var);
    FUN_02e3ca1c(UnityEngine_PlayerLoop_EarlyUpdate_ScriptRunDelayedStartupFrame_var);
    FUN_02e3ca1c(Fusion_EngineProfiler_InternalSimulationType_var);
                    /* catch() { ... } // from try @ 05f4dbc8 with catch @ 05f4dbec */
                    /* try { // try from 05f4dbf0 to 0604dbf7 has its CatchHandler @ 05f4dc00 */
    FUN_02e3ca1c(System_Enum_EnumResult_var);
                    /* try { // try from 05f4dbf8 to 0604dc03 has its CatchHandler @ 05f4da90 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f4dbf0 with catch @ 05f4dc00
                        */
    FUN_02e3ca1c(System_Xml_Serialization_EnumMap_EnumMapMember_var);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise_var);
    FUN_02e3ca1c(UnityEngine_UIElements_EventCallbackRegistry_DynamicCallbackList_var);
    FUN_02e3ca1c(UnityEngine_UIElements_EventDispatcher_DispatchContext_var);
    FUN_02e3ca1c(UnityEngine_UIElements_EventDispatcher_EventRecord_var);
    FUN_02e3ca1c(UnityEngine_InputForUI_EventProvider_Registration_var);
    FUN_02e3ca1c(UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var);
    FUN_02e3ca1c(System_Threading_ExecutionContext_Reader_var);
    FUN_02e3ca1c(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    FUN_02e3ca1c(System_Xml_Schema_FacetsChecker_FacetsCompiler_var);
    FUN_02e3ca1c(UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_var);
    FUN_02e3ca1c(UnityEngine_PlayerLoop_FixedUpdate_ScriptRunBehaviourFixedUpdate_var);
    FUN_02e3ca1c(UnityEngine_UIElements_FocusController_FocusedElement_var);
    FUN_02e3ca1c(UnityEngine_Rendering_Universal_Internal_ForwardLights_InitParams_var);
    FUN_02e3ca1c(Fusion_Statistics_FusionStatsGraphBase_FusionStatBuffer_var);
    FUN_02e3ca1c(Fusion_FusionUnityLoggerBase_LogContext_var);
    FUN_02e3ca1c(UnityEngine_Rendering_GPUInstanceDataBufferGrower_GPUResources_var);
    bRam0000000006e94659 = 1;
  }
  lVar11 = FUN_02e3cb08(*(undefined8 *)puVar2,7);
  if (lVar11 == 0) goto LAB_05f4e2e4;
  if (*(int *)(lVar11 + 0x18) != 0) {
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)Fusion_FusionUnityLoggerBase_LogContext_var;
    thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x20));
    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar11 + 0x28) =
           *(undefined8 *)System_Xml_Serialization_EnumMap_EnumMapMember_var;
      thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x28));
      if (2 < *(uint *)(lVar11 + 0x18)) {
        *(undefined8 *)(lVar11 + 0x30) =
             *(undefined8 *)UnityEngine_UIElements_FocusController_FocusedElement_var;
        thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x30));
        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar11 + 0x38) =
               *(undefined8 *)
                UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_var;
          thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x38));
          if (4 < *(uint *)(lVar11 + 0x18)) {
            *(undefined8 *)(lVar11 + 0x40) =
                 *(undefined8 *)UnityEngine_PlayerLoop_FixedUpdate_ScriptRunBehaviourFixedUpdate_var
            ;
            thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x40));
            if (5 < *(uint *)(lVar11 + 0x18)) {
                    /* try { // try from 05f4ddb0 to 0604debb has its CatchHandler @ 05f4ddb0
                       catch() { ... } // from try @ 05f4ddb0 with catch @ 05f4ddb0
                       catch() { ... } // from try @ 05f4e25c with catch @ 05f4ddb0
                       catch() { ... } // from try @ 05f4e2a8 with catch @ 05f4ddb0
                       catch() { ... } // from try @ 05f4e328 with catch @ 05f4ddb0
                       catch() { ... } // from try @ 05f4e34c with catch @ 05f4ddb0 */
              *(undefined8 *)(lVar11 + 0x48) =
                   *(undefined8 *)UnityEngine_Rendering_GPUInstanceDataBufferGrower_GPUResources_var
              ;
              thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x48));
              puVar3 = MessagePipe_SingletonMessageBrokerCore<TMessage>_var;
              puVar1 = PTR_DAT_06a2f1b8;
              if (6 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x50) =
                     *(undefined8 *)
                      Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise_var;
                thunk_FUN_02ee2be8();
                **(long **)(*(long *)puVar3 + 0xb8) = lVar11;
                thunk_FUN_02ee2be8(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar11);
                lVar11 = FUN_02e3cb08(*(undefined8 *)puVar1,7);
                lVar14 = **(long **)(*(long *)puVar3 + 0xb8);
                if (lVar14 == 0) {
LAB_05f4e2e4:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05f4e02c with catch @ 05f4e2e4 */
                  FUN_02e3ccc4();
                }
                if (*(int *)(lVar14 + 0x18) != 0) {
                  uVar10 = FUN_06234d50(*(undefined8 *)(lVar14 + 0x20),0);
                  if (lVar11 == 0) goto LAB_05f4e2e4;
                  if (*(int *)(lVar11 + 0x18) != 0) {
                    lVar14 = *(long *)puVar3;
                    *(undefined4 *)(lVar11 + 0x20) = uVar10;
                    lVar14 = **(long **)(lVar14 + 0xb8);
                    if (lVar14 == 0) goto LAB_05f4e2e4;
                    if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) != 0) {
                      uVar10 = FUN_06234d50(*(undefined8 *)(lVar14 + 0x28),0);
                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                        lVar14 = *(long *)puVar3;
                        *(undefined4 *)(lVar11 + 0x24) = uVar10;
                        lVar14 = **(long **)(lVar14 + 0xb8);
                        if (lVar14 == 0) goto LAB_05f4e2e4;
                        if (2 < *(uint *)(lVar14 + 0x18)) {
                    /* try { // try from 05f4debc to 0604dec3 has its CatchHandler @ 05f4e2b0 */
                          uVar10 = FUN_06234d50(*(undefined8 *)(lVar14 + 0x30),0);
                    /* try { // try from 05f4dec8 to 0604ded7 has its CatchHandler @ 05f4e2ac */
                          if (2 < *(uint *)(lVar11 + 0x18)) {
                            lVar14 = *(long *)puVar3;
                            *(undefined4 *)(lVar11 + 0x28) = uVar10;
                            lVar14 = **(long **)(lVar14 + 0xb8);
                            if (lVar14 == 0) goto LAB_05f4e2e4;
                            if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) != 0) {
                              uVar10 = FUN_06234d50(*(undefined8 *)(lVar14 + 0x38),0);
                              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                                lVar14 = *(long *)puVar3;
                    /* try { // try from 05f4df08 to 0604df63 has its CatchHandler @ 05f4e2fc */
                                *(undefined4 *)(lVar11 + 0x2c) = uVar10;
                                lVar14 = **(long **)(lVar14 + 0xb8);
                                if (lVar14 == 0) goto LAB_05f4e2e4;
                                if (4 < *(uint *)(lVar14 + 0x18)) {
                                  uVar10 = FUN_06234d50(*(undefined8 *)(lVar14 + 0x40),0);
                                  if (4 < *(uint *)(lVar11 + 0x18)) {
                                    lVar14 = *(long *)puVar3;
                                    *(undefined4 *)(lVar11 + 0x30) = uVar10;
                                    lVar14 = **(long **)(lVar14 + 0xb8);
                                    if (lVar14 == 0) goto LAB_05f4e2e4;
                                    if (5 < *(uint *)(lVar14 + 0x18)) {
                                      uVar10 = FUN_06234d50(*(undefined8 *)(lVar14 + 0x48),0);
                                      if (5 < *(uint *)(lVar11 + 0x18)) {
                                        lVar14 = *(long *)puVar3;
                                        *(undefined4 *)(lVar11 + 0x34) = uVar10;
                                        lVar14 = **(long **)(lVar14 + 0xb8);
                                        if (lVar14 == 0) goto LAB_05f4e2e4;
                                        if (6 < *(uint *)(lVar14 + 0x18)) {
                    /* try { // try from 05f4df9c to 0604dfa7 has its CatchHandler @ 05f4e300 */
                                          uVar10 = FUN_06234d50(*(undefined8 *)(lVar14 + 0x50),0);
                                          if (6 < *(uint *)(lVar11 + 0x18)) {
                                            lVar14 = *(long *)puVar3;
                                            *(undefined4 *)(lVar11 + 0x38) = uVar10;
                                            plVar15 = (long *)(*(long *)(lVar14 + 0xb8) + 8);
                                            *plVar15 = lVar11;
                    /* try { // try from 05f4dfc0 to 0604dfcf has its CatchHandler @ 05f4e304 */
                                            thunk_FUN_02ee2be8(plVar15,lVar11);
                                            lVar11 = FUN_02e3cb08(*(undefined8 *)puVar2,8);
                                            if (lVar11 == 0) goto LAB_05f4e2e4;
                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                              *(undefined8 *)(lVar11 + 0x20) =
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_InputSystem_Controls_DpadControl_DpadAxisControl_var
                                              ;
                                              thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x20));
                                              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                    /* try { // try from 05f4e01c to 0604e01f has its CatchHandler @ 05f4e2c8 */
                                                *(undefined8 *)(lVar11 + 0x28) =
                                                     *(undefined8 *)
                                                                                                            
                                                  UnityEngine_InputForUI_EventProvider_Registration_var
                                                ;
                                                thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x28));
                    /* try { // try from 05f4e02c to 0604e04b has its CatchHandler @ 05f4e2e4 */
                                                if (2 < *(uint *)(lVar11 + 0x18)) {
                                                  *(undefined8 *)(lVar11 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Xml_Schema_FacetsChecker_FacetsCompiler_var
                                                  ;
                                                  thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x30));
                    /* try { // try from 05f4e050 to 0604e05f has its CatchHandler @ 05f4e2ec */
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x38) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventDispatcher_EventRecord_var
                                                  ;
                    /* try { // try from 05f4e074 to 0604e077 has its CatchHandler @ 05f4e2d4 */
                                                  thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x38));
                                                  if (4 < *(uint *)(lVar11 + 0x18)) {
                    /* try { // try from 05f4e084 to 0604e0a3 has its CatchHandler @ 05f4e2e8 */
                                                    *(undefined8 *)(lVar11 + 0x40) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallbackRegistry_DynamicCallbackList_var
                                                  ;
                                                  thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x40));
                    /* try { // try from 05f4e0a8 to 0604e0b7 has its CatchHandler @ 05f4e2f0 */
                                                  if (5 < *(uint *)(lVar11 + 0x18)) {
                    /* try { // try from 05f4e0bc to 0604e0c3 has its CatchHandler @ 05f4e2fc */
                                                    *(undefined8 *)(lVar11 + 0x48) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_DelegateSerializationHolder_DelegateEntry_var
                                                  ;
                                                  thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x48));
                                                  if (6 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x50) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Fusion_EngineProfiler_InternalSimulationType_var;
                    /* try { // try from 05f4e0e8 to 0604e0ef has its CatchHandler @ 05f4e2a8 */
                                                  thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x50));
                                                  puVar9 = 
                                                  Fusion_Statistics_FusionStatsGraphBase_FusionStatBuffer_var
                                                  ;
                                                  puVar8 = 
                                                  UnityEngine_Rendering_Universal_Internal_ForwardLights_InitParams_var
                                                  ;
                                                  puVar7 = 
                                                  UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                                                  ;
                                                  puVar6 = 
                                                  System_Threading_ExecutionContext_Reader_var;
                                                  puVar5 = 
                                                  UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var
                                                  ;
                                                  puVar4 = 
                                                  UnityEngine_UIElements_EventDispatcher_DispatchContext_var
                                                  ;
                                                  puVar1 = 
                                                  UnityEngine_PlayerLoop_EarlyUpdate_ScriptRunDelayedStartupFrame_var
                                                  ;
                                                  puVar2 = PTR_DAT_06aadae0;
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0)
                                                  {
                    /* try { // try from 05f4e104 to 0604e14f has its CatchHandler @ 05f4e2c4 */
                                                    *(undefined8 *)(lVar11 + 0x58) =
                                                         *(undefined8 *)System_Enum_EnumResult_var;
                                                    thunk_FUN_02ee2be8();
                                                    plVar15 = (long *)(*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x10);
                                                    *plVar15 = lVar11;
                                                    thunk_FUN_02ee2be8(plVar15,lVar11);
                                                    lVar11 = *(long *)(*(long *)puVar3 + 0xb8);
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined2 *)(lVar11 + 0x18) = 0xffff;
                                                    thunk_FUN_02ee2be8();
                    /* try { // try from 05f4e18c to 0604e197 has its CatchHandler @ 05f4e2f8 */
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)puVar3 + 0xb8) + 0x28) =
                                                         *(undefined8 *)puVar1;
                                                    thunk_FUN_02ee2be8();
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)puVar3 + 0xb8) + 0x30) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02ee2be8();
                    /* try { // try from 05f4e1b8 to 0604e1bb has its CatchHandler @ 05f4e2c0 */
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)puVar3 + 0xb8) + 0x38) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02ee2be8();
                    /* try { // try from 05f4e1c4 to 0604e1df has its CatchHandler @ 05f4e2d0 */
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)puVar3 + 0xb8) + 0x40) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02ee2be8();
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)puVar3 + 0xb8) + 0x48) =
                                                         *(undefined8 *)puVar9;
                    /* try { // try from 05f4e1e4 to 0604e1f3 has its CatchHandler @ 05f4e2dc */
                                                    thunk_FUN_02ee2be8();
                                                    uVar12 = *(undefined8 *)puVar2;
                                                    uVar16 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x20);
                                                    *(undefined4 *)
                                                     (*(long *)(*(long *)puVar3 + 0xb8) + 0x50) =
                                                         0x3f87c409;
                                                    uVar12 = thunk_FUN_02e78ab8(uVar12);
                    /* try { // try from 05f4e208 to 0604e20b has its CatchHandler @ 05f4e2bc */
                    /* try { // try from 05f4e214 to 0604e22f has its CatchHandler @ 05f4e2cc */
                                                    FUN_05dc63a8(uVar12,uVar16,0);
                                                    puVar13 = (undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x58);
                                                    *puVar13 = uVar12;
                                                    thunk_FUN_02ee2be8(puVar13,uVar12);
                    /* try { // try from 05f4e234 to 0604e243 has its CatchHandler @ 05f4e2d8 */
                                                    uVar16 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x28);
                                                    uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_05dc63a8(uVar12,uVar16,0);
                    /* try { // try from 05f4e254 to 0604e25b has its CatchHandler @ 05f4e2c4 */
                    /* try { // try from 05f4e25c to 0604e28f has its CatchHandler @ 05f4ddb0 */
                                                    puVar13 = (undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x60);
                                                    *puVar13 = uVar12;
                                                    thunk_FUN_02ee2be8(puVar13,uVar12);
                                                    uVar16 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x48);
                                                    uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_05dc63a8(uVar12,uVar16,0);
                    /* try { // try from 05f4e290 to 0604e293 has its CatchHandler @ 05f4e308 */
                    /* try { // try from 05f4e294 to 0604e297 has its CatchHandler @ 05f4e2f4 */
                                                    puVar13 = (undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x68);
                                                    *puVar13 = uVar12;
                    /* try { // try from 05f4e298 to 0604e29b has its CatchHandler @ 05f4e2e0 */
                                                    thunk_FUN_02ee2be8(puVar13,uVar12);
                    /* try { // try from 05f4e29c to 0604e29f has its CatchHandler @ 05f4e2b8 */
                    /* try { // try from 05f4e2a0 to 0604e2a3 has its CatchHandler @ 05f4e2c4 */
                                                    uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                 puVar2);
                    /* try { // try from 05f4e2a4 to 0604e2a7 has its CatchHandler @ 05f4e2b4 */
                    /* catch() { ... } // from try @ 05f4e0e8 with catch @ 05f4e2a8
                       try { // try from 05f4e2a8 to 0604e323 has its CatchHandler @ 05f4ddb0 */
                    /* catch() { ... } // from try @ 05f4dec8 with catch @ 05f4e2ac */
                    /* catch() { ... } // from try @ 05f4debc with catch @ 05f4e2b0 */
                                                    FUN_05dc63a8(uVar12,*(undefined8 *)puVar5,0);
                    /* catch() { ... } // from try @ 05f4e2a4 with catch @ 05f4e2b4 */
                    /* catch() { ... } // from try @ 05f4e29c with catch @ 05f4e2b8 */
                    /* catch() { ... } // from try @ 05f4e208 with catch @ 05f4e2bc */
                    /* catch() { ... } // from try @ 05f4e1b8 with catch @ 05f4e2c0 */
                    /* catch() { ... } // from try @ 05f4e104 with catch @ 05f4e2c4
                       catch() { ... } // from try @ 05f4e254 with catch @ 05f4e2c4
                       catch() { ... } // from try @ 05f4e2a0 with catch @ 05f4e2c4 */
                    /* catch() { ... } // from try @ 05f4e01c with catch @ 05f4e2c8 */
                    /* catch() { ... } // from try @ 05f4e214 with catch @ 05f4e2cc */
                                                    puVar13 = (undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x70);
                                                    *puVar13 = uVar12;
                    /* catch() { ... } // from try @ 05f4e1c4 with catch @ 05f4e2d0 */
                    /* catch() { ... } // from try @ 05f4e074 with catch @ 05f4e2d4 */
                    /* catch() { ... } // from try @ 05f4e234 with catch @ 05f4e2d8 */
                    /* catch() { ... } // from try @ 05f4e1e4 with catch @ 05f4e2dc */
                                                    thunk_FUN_02ee2be8(puVar13,uVar12);
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
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05f4e298 with catch @ 05f4e2e0 */
  FUN_02e3cccc();
}


