/*
FUNCTION_NAME: UnityEngine.UIElements.ComputedStyle$$ApplyCustomStyleProperty
ENTRY_POINT: 096dc3c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_UIElements_ComputedStyle__ApplyCustomStyleProperty(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined8 *unaff_x21;
  uint *puVar8;
  
  FUN_04447ba8(System_Data_MissingSchemaAction_var);
  FUN_04447ba8(ETD_PAM_MocapShotMovementData_var);
  FUN_04447ba8(System_Reflection_Module_var);
  FUN_04447ba8(UnityEngine_MonoBehaviour_var);
  FUN_04447ba8(System_MonoCustomAttrs_var);
  FUN_04447ba8(System_Reflection_MonoEventInfo_var);
  FUN_04447ba8(System_Reflection_MonoMethodInfo_var);
  FUN_04447ba8(System_Runtime_Remoting_Messaging_MonoMethodMessage_var);
  FUN_04447ba8(System_Reflection_MonoPropertyInfo_var);
  FUN_04447ba8(System_MonoTypeInfo_var);
  FUN_04447ba8(UnityEngine_InputSystem_Mouse_var);
  FUN_04447ba8(UnityEngine_XR_Interaction_Toolkit_UI_MouseButtonModel_var);
  FUN_04447ba8(UnityEngine_XR_Interaction_Toolkit_UI_MouseModel_var);
  FUN_04447ba8(UnityEngine_Scripting_APIUpdating_MovedFromAttribute_var);
  FUN_04447ba8(UnityEngine_Animations_Rigging_MultiAimConstraintData_var);
  FUN_04447ba8(Sirenix_Serialization_MultiDimensionalArrayFormatter<TArray,_TElement>_var);
  FUN_04447ba8(UnityEngine_Animations_Rigging_MultiParentConstraintData_var);
  FUN_04447ba8(UnityEngine_Animations_Rigging_MultiPositionConstraintData_var);
  FUN_04447ba8(UnityEngine_Animations_Rigging_MultiReferentialConstraintData_var);
  FUN_04447ba8(UnityEngine_Animations_Rigging_MultiRotationConstraintData_var);
  FUN_04447ba8(UnityEngine_InputSystem_Interactions_MultiTapInteraction_var);
  FUN_04447ba8(System_MulticastDelegate_var);
  FUN_04447ba8(Unity_Services_Matchmaker_Models_MultiplayAssignment_var);
  FUN_04447ba8(ETD_PAM_MultiplayerBounce_var);
  FUN_04447ba8(ETD_PAM_MusicClip_var);
  FUN_04447ba8(UnityEngine_InputSystem_Utilities_NameAndParameters_var);
  FUN_04447ba8(System_Data_NameNode_var);
  FUN_04447ba8(Unity_Netcode_NamedMessage_var);
  FUN_04447ba8(System_Xml_Linq_NamespaceCache_var);
  FUN_04447ba8(System_Xml_Linq_NamespaceResolver_var);
  FUN_04447ba8(UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassData_var);
  FUN_04447ba8(Unity_Collections_NativeSlice<T>_var);
  FUN_04447ba8(UnityEngine_TextCore_Text_NativeTextInfo_var);
  FUN_04447ba8(UnityEngine_UI_Navigation_var);
  FUN_04447ba8(UnityEngine_InputSystem_UI_NavigationModel_var);
  FUN_04447ba8(Meta_XR_MultiplayerBlocks_Shared_NetworkBootstrapperParams_var);
  FUN_04447ba8(Unity_Netcode_Transports_UTP_NetworkMetricsPipelineStage_var);
  FUN_04447ba8(Unity_Multiplayer_Tools_NetworkSolutionInterfaceParameters_var);
  FUN_04447ba8(System_Net_Sockets_NetworkStream_var);
  FUN_04447ba8(Unity_Netcode_NetworkTransformMessage_var);
  FUN_04447ba8(Unity_Netcode_NetworkUpdateStage_var);
  FUN_04447ba8(Unity_Netcode_NetworkVariableDeltaMessage_var);
  FUN_04447ba8(Unity_Netcode_NetworkVariable<T>_var);
  FUN_04447ba8(ETD_PAM_News_var);
  FUN_04447ba8(ETD_PAM_NewsContent_var);
  FUN_04447ba8(Sirenix_Serialization_NodeInfo_var);
  FUN_04447ba8(System_NonSerializedAttribute_var);
  FUN_04447ba8(UnityEngine_InputSystem_Processors_NormalizeProcessor_var);
  FUN_04447ba8(UnityEngine_InputSystem_Processors_NormalizeVector2Processor_var);
  FUN_04447ba8(UnityEngine_InputSystem_Processors_NormalizeVector3Processor_var);
  FUN_04447ba8(System_NullReferenceException_var);
  FUN_04447ba8(System_Collections_Generic_NullableComparer<T>_var);
  FUN_04447ba8(System_MissingFieldException_var);
  FUN_04447ba8(System_ComponentModel_NullableConverter_var);
  FUN_04447ba8(System_Collections_Generic_NullableEqualityComparer<T>_var);
  *(undefined1 *)(unaff_x20 + 0x18d) = 1;
  plVar2 = (long *)FUN_04447c90(*unaff_x21,0x37);
  lVar3 = thunk_FUN_0448520c(*unaff_x19);
  FUN_096d65cc();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_096dd7dc:
    uVar5 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar5,0);
  }
  puVar1 = System_Collections_Generic_NullableEqualityComparer<T>_var;
  puVar8 = (uint *)(plVar2 + 3);
  if (*puVar8 != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_044bb4b4(plVar2 + 4,lVar3);
    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
    FUN_096d6a0c();
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_096dd7dc;
    puVar1 = System_ComponentModel_NullableConverter_var;
    if (1 < *puVar8) {
      plVar2[5] = lVar3;
      thunk_FUN_044bb4b4(plVar2 + 5,lVar3);
      lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
      FUN_096d67d8();
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_096dd7dc;
      puVar1 = System_Data_MissingSchemaAction_var;
      if (2 < *puVar8) {
        plVar2[6] = lVar3;
        thunk_FUN_044bb4b4(plVar2 + 6,lVar3);
        lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
        FUN_096d6c48();
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_096dd7dc;
        puVar1 = System_MonoTypeInfo_var;
        if (3 < *puVar8) {
          plVar2[7] = lVar3;
          thunk_FUN_044bb4b4(plVar2 + 7,lVar3);
          lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
          FUN_09753aa8(lVar3,0);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_096dd7dc;
          puVar1 = Unity_Netcode_NetworkVariableDeltaMessage_var;
          if (4 < *puVar8) {
            plVar2[8] = lVar3;
            thunk_FUN_044bb4b4(plVar2 + 8,lVar3);
            lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
            FUN_09794604(lVar3,0);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto LAB_096dd7dc;
            puVar1 = System_Net_Sockets_NetworkStream_var;
            if (5 < *puVar8) {
              plVar2[9] = lVar3;
              thunk_FUN_044bb4b4(plVar2 + 9,lVar3);
              lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
              FUN_0969d030(lVar3,0);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
              goto LAB_096dd7dc;
              puVar1 = System_Collections_Generic_NullableComparer<T>_var;
              if (6 < *puVar8) {
                plVar2[10] = lVar3;
                thunk_FUN_044bb4b4(plVar2 + 10,lVar3);
                lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                FUN_097cfbb0(lVar3,0);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                goto LAB_096dd7dc;
                puVar1 = 
                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassData_var;
                if (7 < *puVar8) {
                  plVar2[0xb] = lVar3;
                  thunk_FUN_044bb4b4(plVar2 + 0xb,lVar3);
                  lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                  FUN_09764de8(lVar3,0);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
                     ) goto LAB_096dd7dc;
                  puVar1 = 
                  Sirenix_Serialization_MultiDimensionalArrayFormatter<TArray,_TElement>_var;
                  if (8 < *puVar8) {
                    plVar2[0xc] = lVar3;
                    thunk_FUN_044bb4b4(plVar2 + 0xc,lVar3);
                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                    FUN_0976a15c(lVar3,0);
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar4 == 0)) goto LAB_096dd7dc;
                    puVar1 = UnityEngine_InputSystem_Processors_NormalizeVector2Processor_var;
                    if (9 < *puVar8) {
                      plVar2[0xd] = lVar3;
                      thunk_FUN_044bb4b4(plVar2 + 0xd,lVar3);
                      lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                      FUN_0978104c(lVar3,0);
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                         lVar4 == 0)) goto LAB_096dd7dc;
                      puVar1 = System_Xml_Linq_NamespaceResolver_var;
                      if (10 < *puVar8) {
                        plVar2[0xe] = lVar3;
                        thunk_FUN_044bb4b4(plVar2 + 0xe,lVar3);
                        lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                        FUN_097883ec(lVar3,0);
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                           lVar4 == 0)) goto LAB_096dd7dc;
                        puVar1 = System_Data_NameNode_var;
                        if (0xb < *puVar8) {
                          plVar2[0xf] = lVar3;
                          thunk_FUN_044bb4b4(plVar2 + 0xf,lVar3);
                          lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                          FUN_09789ac4(lVar3,0);
                          if ((lVar3 != 0) &&
                             (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                             lVar4 == 0)) goto LAB_096dd7dc;
                          puVar1 = UnityEngine_InputSystem_UI_NavigationModel_var;
                          if (0xc < *puVar8) {
                            plVar2[0x10] = lVar3;
                            thunk_FUN_044bb4b4(plVar2 + 0x10,lVar3);
                            lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                            FUN_0978a968(lVar3,0);
                            if ((lVar3 != 0) &&
                               (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                               lVar4 == 0)) goto LAB_096dd7dc;
                            puVar1 = Unity_Services_Matchmaker_Models_MultiplayAssignment_var;
                            if (0xd < *puVar8) {
                              plVar2[0x11] = lVar3;
                              thunk_FUN_044bb4b4(plVar2 + 0x11,lVar3);
                              lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                              FUN_0978bdfc(lVar3,0);
                              if ((lVar3 != 0) &&
                                 (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                                 lVar4 == 0)) goto LAB_096dd7dc;
                              puVar1 = ETD_PAM_NewsContent_var;
                              if (0xe < *puVar8) {
                                plVar2[0x12] = lVar3;
                                thunk_FUN_044bb4b4(plVar2 + 0x12,lVar3);
                                lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                FUN_0976e770(lVar3,0);
                                if ((lVar3 != 0) &&
                                   (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)
                                                              ), lVar4 == 0)) goto LAB_096dd7dc;
                                puVar1 = System_MonoCustomAttrs_var;
                                if (0xf < *puVar8) {
                                  plVar2[0x13] = lVar3;
                                  thunk_FUN_044bb4b4(plVar2 + 0x13,lVar3);
                                  lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                  FUN_09761684(lVar3,0);
                                  if ((lVar3 != 0) &&
                                     (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)
                                                                        (*plVar2 + 0x40)),
                                     lVar4 == 0)) goto LAB_096dd7dc;
                                  puVar1 = UnityEngine_InputSystem_Mouse_var;
                                  if (0x10 < *puVar8) {
                                    plVar2[0x14] = lVar3;
                                    thunk_FUN_044bb4b4(plVar2 + 0x14,lVar3);
                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                    FUN_0977f438(lVar3,0);
                                    if ((lVar3 != 0) &&
                                       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)
                                                                          (*plVar2 + 0x40)),
                                       lVar4 == 0)) goto LAB_096dd7dc;
                                    puVar1 = UnityEngine_TextCore_Text_NativeTextInfo_var;
                                    if (0x11 < *puVar8) {
                                      plVar2[0x15] = lVar3;
                                      thunk_FUN_044bb4b4(plVar2 + 0x15,lVar3);
                                      lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                      FUN_097808a4(lVar3,0);
                                      if ((lVar3 != 0) &&
                                         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)
                                                                            (*plVar2 + 0x40)),
                                         lVar4 == 0)) goto LAB_096dd7dc;
                                      puVar1 = 
                                      UnityEngine_Scripting_APIUpdating_MovedFromAttribute_var;
                                      if (0x12 < *puVar8) {
                                        plVar2[0x16] = lVar3;
                                        thunk_FUN_044bb4b4(plVar2 + 0x16,lVar3);
                                        lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                        FUN_097923f4(lVar3,0);
                                        if ((lVar3 != 0) &&
                                           (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)
                                                                              (*plVar2 + 0x40)),
                                           lVar4 == 0)) goto LAB_096dd7dc;
                                        puVar1 = System_Reflection_MonoMethodInfo_var;
                                        if (0x13 < *puVar8) {
                                          plVar2[0x17] = lVar3;
                                          thunk_FUN_044bb4b4(plVar2 + 0x17,lVar3);
                                          lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                          FUN_0976734c(lVar3,0);
                                          if ((lVar3 != 0) &&
                                             (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)
                                                                                (*plVar2 + 0x40)),
                                             lVar4 == 0)) goto LAB_096dd7dc;
                                          puVar1 = ETD_PAM_MultiplayerBounce_var;
                                          if (0x14 < *puVar8) {
                                            plVar2[0x18] = lVar3;
                                            thunk_FUN_044bb4b4(plVar2 + 0x18,lVar3);
                                            lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                            FUN_096ba5c0(lVar3,0);
                                            if ((lVar3 != 0) &&
                                               (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)
                                                                                  (*plVar2 + 0x40)),
                                               lVar4 == 0)) goto LAB_096dd7dc;
                                            puVar1 = 
                                            Unity_Multiplayer_Tools_NetworkSolutionInterfaceParameters_var
                                            ;
                                            if (0x15 < *puVar8) {
                                              plVar2[0x19] = lVar3;
                                              thunk_FUN_044bb4b4(plVar2 + 0x19,lVar3);
                                              lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                              FUN_09752d64(lVar3,0);
                                              if ((lVar3 != 0) &&
                                                 (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)
                                                                                    (*plVar2 + 0x40)
                                                                            ), lVar4 == 0))
                                              goto LAB_096dd7dc;
                                              puVar1 = System_Reflection_Module_var;
                                              if (0x16 < *puVar8) {
                                                plVar2[0x1a] = lVar3;
                                                thunk_FUN_044bb4b4(plVar2 + 0x1a,lVar3);
                                                lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                                FUN_0975b93c(lVar3,0);
                                                if ((lVar3 != 0) &&
                                                   (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)
                                                                                      (*plVar2 +
                                                                                      0x40)),
                                                   lVar4 == 0)) goto LAB_096dd7dc;
                                                puVar1 = 
                                                UnityEngine_Animations_Rigging_MultiAimConstraintData_var
                                                ;
                                                if (0x17 < *puVar8) {
                                                  plVar2[0x1b] = lVar3;
                                                  thunk_FUN_044bb4b4(plVar2 + 0x1b,lVar3);
                                                  lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                                  FUN_09759bd4(lVar3,0);
                                                  if ((lVar3 != 0) &&
                                                     (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8
                                                                                         *)(*plVar2 
                                                  + 0x40)), lVar4 == 0)) goto LAB_096dd7dc;
                                                  puVar1 = ETD_PAM_News_var;
                                                  if (0x18 < *puVar8) {
                                                    plVar2[0x1c] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x1c,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09762ae8(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_MulticastDelegate_var;
                                                  if (0x19 < *puVar8) {
                                                    plVar2[0x1d] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x1d,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0977d7fc(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_InputSystem_Processors_NormalizeProcessor_var
                                                  ;
                                                  if (0x1a < *puVar8) {
                                                    plVar2[0x1e] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x1e,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0977ead0(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = ETD_PAM_MusicClip_var;
                                                  if (0x1b < *puVar8) {
                                                    plVar2[0x1f] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x1f,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0976a9ec(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = ETD_PAM_MocapShotMovementData_var;
                                                  if (0x1c < *puVar8) {
                                                    plVar2[0x20] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x20,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09798df4(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_Reflection_MonoEventInfo_var;
                                                  if (0x1d < *puVar8) {
                                                    plVar2[0x21] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x21,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097953bc(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_InputSystem_Utilities_NameAndParameters_var
                                                  ;
                                                  if (0x1e < *puVar8) {
                                                    plVar2[0x22] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x22,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0975d8c8(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_NonSerializedAttribute_var;
                                                  if (0x1f < *puVar8) {
                                                    plVar2[0x23] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x23,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0977b240(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_Animations_Rigging_MultiPositionConstraintData_var
                                                  ;
                                                  if (0x20 < *puVar8) {
                                                    plVar2[0x24] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x24,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0977c0c8(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_Reflection_MonoPropertyInfo_var;
                                                  if (0x21 < *puVar8) {
                                                    plVar2[0x25] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x25,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0964cc18(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Unity_Netcode_NetworkUpdateStage_var;
                                                  if (0x22 < *puVar8) {
                                                    plVar2[0x26] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x26,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_096cd570();
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  System_Runtime_Remoting_Messaging_MonoMethodMessage_var
                                                  ;
                                                  if (0x23 < *puVar8) {
                                                    plVar2[0x27] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x27,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09753f04(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  Unity_Netcode_Transports_UTP_NetworkMetricsPipelineStage_var
                                                  ;
                                                  if (0x24 < *puVar8) {
                                                    plVar2[0x28] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x28,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0975c310(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = UnityEngine_MonoBehaviour_var;
                                                  if (0x25 < *puVar8) {
                                                    plVar2[0x29] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x29,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09759760(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_Xml_Linq_NamespaceCache_var;
                                                  if (0x26 < *puVar8) {
                                                    plVar2[0x2a] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x2a,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097621fc(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_UI_MouseButtonModel_var
                                                  ;
                                                  if (0x27 < *puVar8) {
                                                    plVar2[0x2b] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x2b,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09769c2c(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_Animations_Rigging_MultiParentConstraintData_var
                                                  ;
                                                  if (0x28 < *puVar8) {
                                                    plVar2[0x2c] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x2c,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0976b1d8(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Unity_Netcode_NetworkTransformMessage_var
                                                  ;
                                                  if (0x29 < *puVar8) {
                                                    plVar2[0x2d] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x2d,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0979b1e8(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Unity_Netcode_NamedMessage_var;
                                                  if (0x2a < *puVar8) {
                                                    plVar2[0x2e] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x2e,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0979bc48(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_InputSystem_Interactions_MultiTapInteraction_var
                                                  ;
                                                  if (0x2b < *puVar8) {
                                                    plVar2[0x2f] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x2f,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097548a8(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Sirenix_Serialization_NodeInfo_var;
                                                  if (0x2c < *puVar8) {
                                                    plVar2[0x30] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x30,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                                                                        
                                                  UnityEngine_XR_InputDevices__TryGetFeatureValue_float_Injected
                                                            (lVar3,0);
                                                  if ((lVar3 != 0) &&
                                                     (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8
                                                                                         *)(*plVar2 
                                                  + 0x40)), lVar4 == 0)) goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_Animations_Rigging_MultiReferentialConstraintData_var
                                                  ;
                                                  if (0x2d < *puVar8) {
                                                    plVar2[0x31] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x31,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097556b4(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_NullReferenceException_var;
                                                  if (0x2e < *puVar8) {
                                                    plVar2[0x32] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x32,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09756b7c(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Unity_Collections_NativeSlice<T>_var;
                                                  if (0x2f < *puVar8) {
                                                    plVar2[0x33] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x33,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097578b4(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = UnityEngine_UI_Navigation_var;
                                                  if (0x30 < *puVar8) {
                                                    plVar2[0x34] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x34,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097583a0(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Unity_Netcode_NetworkVariable<T>_var;
                                                  if (0x31 < *puVar8) {
                                                    plVar2[0x35] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x35,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09758d7c(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_Animations_Rigging_MultiRotationConstraintData_var
                                                  ;
                                                  if (0x32 < *puVar8) {
                                                    plVar2[0x36] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x36,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097517dc(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_UI_MouseModel_var
                                                  ;
                                                  if (0x33 < *puVar8) {
                                                    plVar2[0x37] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x37,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097526c0(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_NetworkBootstrapperParams_var
                                                  ;
                                                  if (0x34 < *puVar8) {
                                                    plVar2[0x38] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x38,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0978e004(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_InputSystem_Processors_NormalizeVector3Processor_var
                                                  ;
                                                  if (0x35 < *puVar8) {
                                                    plVar2[0x39] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x39,lVar3);
                                                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09791ba8(lVar3,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_04485110(lVar3,*(
                                                  undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                                                  goto LAB_096dd7dc;
                                                  if (0x36 < *puVar8) {
                                                    plVar2[0x3a] = lVar3;
                                                    thunk_FUN_044bb4b4(plVar2 + 0x3a,lVar3);
                                                    if (0 < (int)plVar2[3]) {
                                                      uVar7 = 0;
                                                      uVar6 = plVar2[3] & 0xffffffff;
                                                      do {
                                                        if (uVar6 <= uVar7) goto LAB_096dd7d8;
                                                        FUN_096ddab0(plVar2[uVar7 + 4]);
                                                        uVar6 = (ulong)*puVar8;
                                                        uVar7 = uVar7 + 1;
                                                      } while ((long)uVar7 < (long)(int)*puVar8);
                                                    }
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
LAB_096dd7d8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


