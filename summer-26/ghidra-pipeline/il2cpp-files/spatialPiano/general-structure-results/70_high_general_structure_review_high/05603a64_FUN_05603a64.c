/*
FUNCTION_NAME: FUN_05603a64
ENTRY_POINT: 05603a64
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05603a64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_067ca1a8;
  if ((DAT_06bbfdb0 & 1) == 0) {
    FUN_02f08768(UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo);
    FUN_02f08768(PTR_DAT_067d8d00);
    FUN_02f08768(PTR_DAT_067d8d08);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<SimulatedDeviceLifecycleManager>_TryFindComponent__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<SimulatedHandExpressionManager>_TryFindComponent__
                );
    FUN_02f08768(PTR_DAT_067dc050);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<TeleportationProvider>_TryFindComponent__
                );
    FUN_02f08768(System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo);
    FUN_02f08768(System_EventHandler<Result<ColocationState>>_TypeInfo);
    FUN_02f08768(PTR_DAT_067d8b28);
    FUN_02f08768(PTR_DAT_067d8d28);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<TeleportationProvider>_TryFindComponent__
                );
    FUN_02f08768(System_EventHandler<AROcclusionSourceEventArgs>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetStateMachine__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_get_Task__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<AnchorCreationTask>d__21>__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAnchor>d__20>__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Start<SharedAnchorManager_<AnchorCreationTask>d__21>__
                );
    FUN_02f08768(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_SettingsPanel_<>c__DisplayClass0_0_TypeInfo
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Start<SharedAnchorManager_<CreateAnchor>d__20>__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Create__
                );
    FUN_02f08768(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass10_0_TypeInfo
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetException__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetResult__
                );
    FUN_02f08768(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass12_0_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067d8d70);
    FUN_02f08768(PTR_DAT_067ca1a8);
    FUN_02f08768(System_EventHandler<ColocationDiscoveryMessage>_TypeInfo);
    DAT_06bbfdb0 = 1;
  }
  plVar6 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,0x29);
  puVar1 = PTR_DAT_067c9338;
  lVar10 = *(long *)(PTR_DAT_067c9338 + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  lVar10 = FUN_050e4454(lVar10 + 0x20,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((lVar10 != 0) &&
     (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_05604684:
    uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar8,0);
  }
  puVar2 = PTR_DAT_067dc050;
  if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
    plVar6[5] = lVar10;
    lVar10 = FUN_050e4454(*(undefined8 *)puVar2,0);
    if ((lVar10 != 0) &&
       (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_05604684;
    if (2 < *(uint *)(plVar6 + 3)) {
      plVar6[6] = lVar10;
      lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x28) + 0x20,0);
      if ((lVar10 != 0) &&
         (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
      goto LAB_05604684;
      if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
        plVar6[7] = lVar10;
        lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x88) + 0x20,0);
        if ((lVar10 != 0) &&
           (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_05604684;
        if (4 < *(uint *)(plVar6 + 3)) {
          plVar6[8] = lVar10;
          lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x30) + 0x20,0);
          if ((lVar10 != 0) &&
             (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_05604684;
          if (5 < *(uint *)(plVar6 + 3)) {
            plVar6[9] = lVar10;
            lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x18) + 0x20,0);
            if ((lVar10 != 0) &&
               (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
            goto LAB_05604684;
            if (6 < *(uint *)(plVar6 + 3)) {
              plVar6[10] = lVar10;
              lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x38) + 0x20,0);
              if ((lVar10 != 0) &&
                 (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
              goto LAB_05604684;
              if ((*(uint *)(plVar6 + 3) & 0xfffffff8) != 0) {
                plVar6[0xb] = lVar10;
                lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x40) + 0x20,0);
                if ((lVar10 != 0) &&
                   (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                goto LAB_05604684;
                if (8 < *(uint *)(plVar6 + 3)) {
                  plVar6[0xc] = lVar10;
                  lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x48) + 0x20,0);
                  if ((lVar10 != 0) &&
                     (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0
                     )) goto LAB_05604684;
                  if (9 < *(uint *)(plVar6 + 3)) {
                    plVar6[0xd] = lVar10;
                    lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x50) + 0x20,0);
                    if ((lVar10 != 0) &&
                       (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar7 == 0)) goto LAB_05604684;
                    if (10 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xe] = lVar10;
                      lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x68) + 0x20,0);
                      if ((lVar10 != 0) &&
                         (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar7 == 0)) goto LAB_05604684;
                      if (0xb < *(uint *)(plVar6 + 3)) {
                        plVar6[0xf] = lVar10;
                        lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x70) + 0x20,0);
                        if ((lVar10 != 0) &&
                           (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar7 == 0)) goto LAB_05604684;
                        if (0xc < *(uint *)(plVar6 + 3)) {
                          plVar6[0x10] = lVar10;
                          lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x78) + 0x20,0);
                          if ((lVar10 != 0) &&
                             (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar7 == 0)) goto LAB_05604684;
                          if (0xd < *(uint *)(plVar6 + 3)) {
                            plVar6[0x11] = lVar10;
                            lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x80) + 0x20,0);
                            if ((lVar10 != 0) &&
                               (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar7 == 0)) goto LAB_05604684;
                            puVar2 = PTR_DAT_067d8d28;
                            if (0xe < *(uint *)(plVar6 + 3)) {
                              plVar6[0x12] = lVar10;
                              lVar10 = FUN_050e4454(*(undefined8 *)puVar2,0);
                              if ((lVar10 != 0) &&
                                 (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar6 + 0x40))
                                 , lVar7 == 0)) goto LAB_05604684;
                              puVar2 = PTR_DAT_067d8b28;
                              if ((*(uint *)(plVar6 + 3) & 0xfffffff0) != 0) {
                                plVar6[0x13] = lVar10;
                                lVar10 = FUN_050e4454(*(undefined8 *)puVar2,0);
                                if ((lVar10 != 0) &&
                                   (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                       (*plVar6 + 0x40)), lVar7 == 0
                                   )) goto LAB_05604684;
                                puVar2 = PTR_DAT_067d8d70;
                                if (0x10 < *(uint *)(plVar6 + 3)) {
                                  plVar6[0x14] = lVar10;
                                  lVar10 = FUN_050e4454(*(undefined8 *)puVar2,0);
                                  if ((lVar10 != 0) &&
                                     (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                         (*plVar6 + 0x40)),
                                     lVar7 == 0)) goto LAB_05604684;
                                  if (0x11 < *(uint *)(plVar6 + 3)) {
                                    plVar6[0x15] = lVar10;
                                    lVar10 = FUN_050e4454(*(long *)(puVar1 + 0x90) + 0x20,0);
                                    if ((lVar10 != 0) &&
                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                           (*plVar6 + 0x40)),
                                       lVar7 == 0)) goto LAB_05604684;
                                    puVar2 = 
                                    System_EventHandler<AROcclusionSourceEventArgs>_TypeInfo;
                                    if (0x12 < *(uint *)(plVar6 + 3)) {
                                      plVar6[0x16] = lVar10;
                                      lVar10 = FUN_050e4454(*(undefined8 *)puVar2,0);
                                      if ((lVar10 != 0) &&
                                         (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                             (*plVar6 + 0x40)),
                                         lVar7 == 0)) goto LAB_05604684;
                                      puVar2 = PTR_DAT_067d8d00;
                                      if (0x13 < *(uint *)(plVar6 + 3)) {
                                        plVar6[0x17] = lVar10;
                                        lVar10 = FUN_050e4454(*(undefined8 *)puVar2,0);
                                        if ((lVar10 != 0) &&
                                           (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                               (*plVar6 + 0x40)),
                                           lVar7 == 0)) goto LAB_05604684;
                                        puVar2 = PTR_DAT_067d8d08;
                                        if (0x14 < *(uint *)(plVar6 + 3)) {
                                          plVar6[0x18] = lVar10;
                                          lVar10 = FUN_050e4454(*(undefined8 *)puVar2,0);
                                          if ((lVar10 != 0) &&
                                             (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                                 (*plVar6 + 0x40)),
                                             lVar7 == 0)) goto LAB_05604684;
                                          if (0x15 < *(uint *)(plVar6 + 3)) {
                                            plVar6[0x19] = lVar10;
                                            lVar10 = FUN_050e4454(*(long *)(puVar1 + 0xe0) + 0x20,0)
                                            ;
                                            if ((lVar10 != 0) &&
                                               (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                                   (*plVar6 + 0x40))
                                               , lVar7 == 0)) goto LAB_05604684;
                                            puVar1 = 
                                            System_EventHandler<Result<ColocationState>>_TypeInfo;
                                            if (0x16 < *(uint *)(plVar6 + 3)) {
                                              plVar6[0x1a] = lVar10;
                                              lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                              if ((lVar10 != 0) &&
                                                 (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                                     (*plVar6 + 0x40
                                                                                     )), lVar7 == 0)
                                                 ) goto LAB_05604684;
                                              puVar1 = 
                                              UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo
                                              ;
                                              if (0x17 < *(uint *)(plVar6 + 3)) {
                                                plVar6[0x1b] = lVar10;
                                                lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                if ((lVar10 != 0) &&
                                                   (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8 *
                                                                                       )(*plVar6 +
                                                                                        0x40)),
                                                   lVar7 == 0)) goto LAB_05604684;
                                                puVar1 = 
                                                System_EventHandler<ColocationDiscoveryMessage>_TypeInfo
                                                ;
                                                if (0x18 < *(uint *)(plVar6 + 3)) {
                                                  plVar6[0x1c] = lVar10;
                                                  lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                  if ((lVar10 != 0) &&
                                                     (lVar7 = thunk_FUN_02f45174(lVar10,*(undefined8
                                                                                          *)(*plVar6
                                                                                            + 0x40))
                                                     , lVar7 == 0)) goto LAB_05604684;
                                                  puVar1 = 
                                                  System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x1d] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetStateMachine__
                                                  ;
                                                  if (0x1a < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x1e] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_get_Task__
                                                  ;
                                                  if (0x1b < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x1f] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<AnchorCreationTask>d__21>__
                                                  ;
                                                  if (0x1c < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x20] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAnchor>d__20>__
                                                  ;
                                                  if (0x1d < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x21] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Start<SharedAnchorManager_<AnchorCreationTask>d__21>__
                                                  ;
                                                  if (0x1e < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x22] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_SettingsPanel_<>c__DisplayClass0_0_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar6 + 3) & 0xffffffe0) != 0) {
                                                    plVar6[0x23] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Start<SharedAnchorManager_<CreateAnchor>d__20>__
                                                  ;
                                                  if (0x20 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x24] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Create__
                                                  ;
                                                  if (0x21 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x25] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x26] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_TypeInfo
                                                  ;
                                                  if (0x23 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x27] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass10_0_TypeInfo
                                                  ;
                                                  if (0x24 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x28] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetException__
                                                  ;
                                                  if (0x25 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x29] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetResult__
                                                  ;
                                                  if (0x26 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2a] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass12_0_TypeInfo
                                                  ;
                                                  if (0x27 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2b] = lVar10;
                                                    lVar10 = FUN_050e4454(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02f45174(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05604684;
                                                  puVar1 = 
                                                  System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo
                                                  ;
                                                  if (0x28 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2c] = lVar10;
                                                    puVar5 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<TeleportationProvider>_TryFindComponent__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<TeleportationProvider>_TryFindComponent__
                                                  ;
                                                  puVar3 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<SimulatedHandExpressionManager>_TryFindComponent__
                                                  ;
                                                  **(long **)(*(long *)puVar1 + 0xb8) = (long)plVar6
                                                  ;
                                                  puVar2 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<SimulatedDeviceLifecycleManager>_TryFindComponent__
                                                  ;
                                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                                  FUN_04e02ad4(uVar8,0,*(undefined8 *)puVar4,0);
                                                  uVar9 = *(undefined8 *)puVar3;
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar8;
                                                  uVar8 = thunk_FUN_02f45270(uVar9);
                                                  FUN_046ff200(uVar8,*(undefined8 *)puVar2);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar1 + 0xb8) + 0x10) =
                                                       uVar8;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


