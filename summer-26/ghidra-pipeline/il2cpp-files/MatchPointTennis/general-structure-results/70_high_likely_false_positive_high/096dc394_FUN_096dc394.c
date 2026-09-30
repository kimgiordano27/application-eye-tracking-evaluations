/*
FUNCTION_NAME: FUN_096dc394
ENTRY_POINT: 096dc394
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_096dc394(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  
  puVar2 = System_MissingFieldException_var;
  puVar1 = System_Reflection_Missing_var;
  if ((DAT_0a54718d & 1) == 0) {
    FUN_04447ba8(System_Reflection_Missing_var);
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
    FUN_04447ba8(UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassData_var
                );
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
    DAT_0a54718d = 1;
  }
  plVar3 = (long *)FUN_04447c90(*(undefined8 *)puVar1,0x37);
  lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_096d65cc();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_096dd7dc:
    uVar6 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar6,0);
  }
  puVar1 = System_Collections_Generic_NullableEqualityComparer<T>_var;
  puVar9 = (uint *)(plVar3 + 3);
  if (*puVar9 != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_044bb4b4(plVar3 + 4,lVar4);
    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
    FUN_096d6a0c();
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_096dd7dc;
    puVar1 = System_ComponentModel_NullableConverter_var;
    if (1 < *puVar9) {
      plVar3[5] = lVar4;
      thunk_FUN_044bb4b4(plVar3 + 5,lVar4);
      lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
      FUN_096d67d8();
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_096dd7dc;
      puVar1 = System_Data_MissingSchemaAction_var;
      if (2 < *puVar9) {
        plVar3[6] = lVar4;
        thunk_FUN_044bb4b4(plVar3 + 6,lVar4);
        lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
        FUN_096d6c48();
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_096dd7dc;
        puVar1 = System_MonoTypeInfo_var;
        if (3 < *puVar9) {
          plVar3[7] = lVar4;
          thunk_FUN_044bb4b4(plVar3 + 7,lVar4);
          lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
          FUN_09753aa8(lVar4,0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_096dd7dc;
          puVar1 = Unity_Netcode_NetworkVariableDeltaMessage_var;
          if (4 < *puVar9) {
            plVar3[8] = lVar4;
            thunk_FUN_044bb4b4(plVar3 + 8,lVar4);
            lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
            FUN_09794604(lVar4,0);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_096dd7dc;
            puVar1 = System_Net_Sockets_NetworkStream_var;
            if (5 < *puVar9) {
              plVar3[9] = lVar4;
              thunk_FUN_044bb4b4(plVar3 + 9,lVar4);
              lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
              FUN_0969d030(lVar4,0);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_096dd7dc;
              puVar1 = System_Collections_Generic_NullableComparer<T>_var;
              if (6 < *puVar9) {
                plVar3[10] = lVar4;
                thunk_FUN_044bb4b4(plVar3 + 10,lVar4);
                lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                FUN_097cfbb0(lVar4,0);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_096dd7dc;
                puVar1 = 
                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassData_var;
                if (7 < *puVar9) {
                  plVar3[0xb] = lVar4;
                  thunk_FUN_044bb4b4(plVar3 + 0xb,lVar4);
                  lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                  FUN_09764de8(lVar4,0);
                  if ((lVar4 != 0) &&
                     (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)
                     ) goto LAB_096dd7dc;
                  puVar1 = 
                  Sirenix_Serialization_MultiDimensionalArrayFormatter<TArray,_TElement>_var;
                  if (8 < *puVar9) {
                    plVar3[0xc] = lVar4;
                    thunk_FUN_044bb4b4(plVar3 + 0xc,lVar4);
                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                    FUN_0976a15c(lVar4,0);
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar5 == 0)) goto LAB_096dd7dc;
                    puVar1 = UnityEngine_InputSystem_Processors_NormalizeVector2Processor_var;
                    if (9 < *puVar9) {
                      plVar3[0xd] = lVar4;
                      thunk_FUN_044bb4b4(plVar3 + 0xd,lVar4);
                      lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                      FUN_0978104c(lVar4,0);
                      if ((lVar4 != 0) &&
                         (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar5 == 0)) goto LAB_096dd7dc;
                      puVar1 = System_Xml_Linq_NamespaceResolver_var;
                      if (10 < *puVar9) {
                        plVar3[0xe] = lVar4;
                        thunk_FUN_044bb4b4(plVar3 + 0xe,lVar4);
                        lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                        FUN_097883ec(lVar4,0);
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar5 == 0)) goto LAB_096dd7dc;
                        puVar1 = System_Data_NameNode_var;
                        if (0xb < *puVar9) {
                          plVar3[0xf] = lVar4;
                          thunk_FUN_044bb4b4(plVar3 + 0xf,lVar4);
                          lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                          FUN_09789ac4(lVar4,0);
                          if ((lVar4 != 0) &&
                             (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                             lVar5 == 0)) goto LAB_096dd7dc;
                          puVar1 = UnityEngine_InputSystem_UI_NavigationModel_var;
                          if (0xc < *puVar9) {
                            plVar3[0x10] = lVar4;
                            thunk_FUN_044bb4b4(plVar3 + 0x10,lVar4);
                            lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                            FUN_0978a968(lVar4,0);
                            if ((lVar4 != 0) &&
                               (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                               lVar5 == 0)) goto LAB_096dd7dc;
                            puVar1 = Unity_Services_Matchmaker_Models_MultiplayAssignment_var;
                            if (0xd < *puVar9) {
                              plVar3[0x11] = lVar4;
                              thunk_FUN_044bb4b4(plVar3 + 0x11,lVar4);
                              lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                              FUN_0978bdfc(lVar4,0);
                              if ((lVar4 != 0) &&
                                 (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                                 lVar5 == 0)) goto LAB_096dd7dc;
                              puVar1 = ETD_PAM_NewsContent_var;
                              if (0xe < *puVar9) {
                                plVar3[0x12] = lVar4;
                                thunk_FUN_044bb4b4(plVar3 + 0x12,lVar4);
                                lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                FUN_0976e770(lVar4,0);
                                if ((lVar4 != 0) &&
                                   (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)
                                                              ), lVar5 == 0)) goto LAB_096dd7dc;
                                puVar1 = System_MonoCustomAttrs_var;
                                if (0xf < *puVar9) {
                                  plVar3[0x13] = lVar4;
                                  thunk_FUN_044bb4b4(plVar3 + 0x13,lVar4);
                                  lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                  FUN_09761684(lVar4,0);
                                  if ((lVar4 != 0) &&
                                     (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)
                                                                        (*plVar3 + 0x40)),
                                     lVar5 == 0)) goto LAB_096dd7dc;
                                  puVar1 = UnityEngine_InputSystem_Mouse_var;
                                  if (0x10 < *puVar9) {
                                    plVar3[0x14] = lVar4;
                                    thunk_FUN_044bb4b4(plVar3 + 0x14,lVar4);
                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                    FUN_0977f438(lVar4,0);
                                    if ((lVar4 != 0) &&
                                       (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)
                                                                          (*plVar3 + 0x40)),
                                       lVar5 == 0)) goto LAB_096dd7dc;
                                    puVar1 = UnityEngine_TextCore_Text_NativeTextInfo_var;
                                    if (0x11 < *puVar9) {
                                      plVar3[0x15] = lVar4;
                                      thunk_FUN_044bb4b4(plVar3 + 0x15,lVar4);
                                      lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                      FUN_097808a4(lVar4,0);
                                      if ((lVar4 != 0) &&
                                         (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)
                                                                            (*plVar3 + 0x40)),
                                         lVar5 == 0)) goto LAB_096dd7dc;
                                      puVar1 = 
                                      UnityEngine_Scripting_APIUpdating_MovedFromAttribute_var;
                                      if (0x12 < *puVar9) {
                                        plVar3[0x16] = lVar4;
                                        thunk_FUN_044bb4b4(plVar3 + 0x16,lVar4);
                                        lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                        FUN_097923f4(lVar4,0);
                                        if ((lVar4 != 0) &&
                                           (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)
                                                                              (*plVar3 + 0x40)),
                                           lVar5 == 0)) goto LAB_096dd7dc;
                                        puVar1 = System_Reflection_MonoMethodInfo_var;
                                        if (0x13 < *puVar9) {
                                          plVar3[0x17] = lVar4;
                                          thunk_FUN_044bb4b4(plVar3 + 0x17,lVar4);
                                          lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                          FUN_0976734c(lVar4,0);
                                          if ((lVar4 != 0) &&
                                             (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)
                                                                                (*plVar3 + 0x40)),
                                             lVar5 == 0)) goto LAB_096dd7dc;
                                          puVar1 = ETD_PAM_MultiplayerBounce_var;
                                          if (0x14 < *puVar9) {
                                            plVar3[0x18] = lVar4;
                                            thunk_FUN_044bb4b4(plVar3 + 0x18,lVar4);
                                            lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                            FUN_096ba5c0(lVar4,0);
                                            if ((lVar4 != 0) &&
                                               (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)
                                                                                  (*plVar3 + 0x40)),
                                               lVar5 == 0)) goto LAB_096dd7dc;
                                            puVar1 = 
                                            Unity_Multiplayer_Tools_NetworkSolutionInterfaceParameters_var
                                            ;
                                            if (0x15 < *puVar9) {
                                              plVar3[0x19] = lVar4;
                                              thunk_FUN_044bb4b4(plVar3 + 0x19,lVar4);
                                              lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                              FUN_09752d64(lVar4,0);
                                              if ((lVar4 != 0) &&
                                                 (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)
                                                                                    (*plVar3 + 0x40)
                                                                            ), lVar5 == 0))
                                              goto LAB_096dd7dc;
                                              puVar1 = System_Reflection_Module_var;
                                              if (0x16 < *puVar9) {
                                                plVar3[0x1a] = lVar4;
                                                thunk_FUN_044bb4b4(plVar3 + 0x1a,lVar4);
                                                lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                                FUN_0975b93c(lVar4,0);
                                                if ((lVar4 != 0) &&
                                                   (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)
                                                                                      (*plVar3 +
                                                                                      0x40)),
                                                   lVar5 == 0)) goto LAB_096dd7dc;
                                                puVar1 = 
                                                UnityEngine_Animations_Rigging_MultiAimConstraintData_var
                                                ;
                                                if (0x17 < *puVar9) {
                                                  plVar3[0x1b] = lVar4;
                                                  thunk_FUN_044bb4b4(plVar3 + 0x1b,lVar4);
                                                  lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                                                  FUN_09759bd4(lVar4,0);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40)), lVar5 == 0)) goto LAB_096dd7dc;
                                                  puVar1 = ETD_PAM_News_var;
                                                  if (0x18 < *puVar9) {
                                                    plVar3[0x1c] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x1c,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09762ae8(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_MulticastDelegate_var;
                                                  if (0x19 < *puVar9) {
                                                    plVar3[0x1d] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x1d,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0977d7fc(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_InputSystem_Processors_NormalizeProcessor_var
                                                  ;
                                                  if (0x1a < *puVar9) {
                                                    plVar3[0x1e] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x1e,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0977ead0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = ETD_PAM_MusicClip_var;
                                                  if (0x1b < *puVar9) {
                                                    plVar3[0x1f] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x1f,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0976a9ec(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = ETD_PAM_MocapShotMovementData_var;
                                                  if (0x1c < *puVar9) {
                                                    plVar3[0x20] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x20,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09798df4(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_Reflection_MonoEventInfo_var;
                                                  if (0x1d < *puVar9) {
                                                    plVar3[0x21] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x21,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097953bc(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_InputSystem_Utilities_NameAndParameters_var
                                                  ;
                                                  if (0x1e < *puVar9) {
                                                    plVar3[0x22] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x22,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0975d8c8(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_NonSerializedAttribute_var;
                                                  if (0x1f < *puVar9) {
                                                    plVar3[0x23] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x23,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0977b240(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_Animations_Rigging_MultiPositionConstraintData_var
                                                  ;
                                                  if (0x20 < *puVar9) {
                                                    plVar3[0x24] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x24,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0977c0c8(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_Reflection_MonoPropertyInfo_var;
                                                  if (0x21 < *puVar9) {
                                                    plVar3[0x25] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x25,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0964cc18(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Unity_Netcode_NetworkUpdateStage_var;
                                                  if (0x22 < *puVar9) {
                                                    plVar3[0x26] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x26,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_096cd570();
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  System_Runtime_Remoting_Messaging_MonoMethodMessage_var
                                                  ;
                                                  if (0x23 < *puVar9) {
                                                    plVar3[0x27] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x27,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09753f04(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  Unity_Netcode_Transports_UTP_NetworkMetricsPipelineStage_var
                                                  ;
                                                  if (0x24 < *puVar9) {
                                                    plVar3[0x28] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x28,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0975c310(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = UnityEngine_MonoBehaviour_var;
                                                  if (0x25 < *puVar9) {
                                                    plVar3[0x29] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x29,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09759760(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_Xml_Linq_NamespaceCache_var;
                                                  if (0x26 < *puVar9) {
                                                    plVar3[0x2a] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x2a,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097621fc(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_UI_MouseButtonModel_var
                                                  ;
                                                  if (0x27 < *puVar9) {
                                                    plVar3[0x2b] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x2b,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09769c2c(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_Animations_Rigging_MultiParentConstraintData_var
                                                  ;
                                                  if (0x28 < *puVar9) {
                                                    plVar3[0x2c] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x2c,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0976b1d8(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Unity_Netcode_NetworkTransformMessage_var
                                                  ;
                                                  if (0x29 < *puVar9) {
                                                    plVar3[0x2d] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x2d,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0979b1e8(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Unity_Netcode_NamedMessage_var;
                                                  if (0x2a < *puVar9) {
                                                    plVar3[0x2e] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x2e,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0979bc48(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_InputSystem_Interactions_MultiTapInteraction_var
                                                  ;
                                                  if (0x2b < *puVar9) {
                                                    plVar3[0x2f] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x2f,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097548a8(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Sirenix_Serialization_NodeInfo_var;
                                                  if (0x2c < *puVar9) {
                                                    plVar3[0x30] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x30,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                                                                        
                                                  UnityEngine_XR_InputDevices__TryGetFeatureValue_float_Injected
                                                            (lVar4,0);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40)), lVar5 == 0)) goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_Animations_Rigging_MultiReferentialConstraintData_var
                                                  ;
                                                  if (0x2d < *puVar9) {
                                                    plVar3[0x31] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x31,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097556b4(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = System_NullReferenceException_var;
                                                  if (0x2e < *puVar9) {
                                                    plVar3[0x32] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x32,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09756b7c(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Unity_Collections_NativeSlice<T>_var;
                                                  if (0x2f < *puVar9) {
                                                    plVar3[0x33] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x33,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097578b4(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = UnityEngine_UI_Navigation_var;
                                                  if (0x30 < *puVar9) {
                                                    plVar3[0x34] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x34,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097583a0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = Unity_Netcode_NetworkVariable<T>_var;
                                                  if (0x31 < *puVar9) {
                                                    plVar3[0x35] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x35,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09758d7c(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_Animations_Rigging_MultiRotationConstraintData_var
                                                  ;
                                                  if (0x32 < *puVar9) {
                                                    plVar3[0x36] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x36,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097517dc(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_UI_MouseModel_var
                                                  ;
                                                  if (0x33 < *puVar9) {
                                                    plVar3[0x37] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x37,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_097526c0(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_NetworkBootstrapperParams_var
                                                  ;
                                                  if (0x34 < *puVar9) {
                                                    plVar3[0x38] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x38,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_0978e004(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  puVar1 = 
                                                  UnityEngine_InputSystem_Processors_NormalizeVector3Processor_var
                                                  ;
                                                  if (0x35 < *puVar9) {
                                                    plVar3[0x39] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x39,lVar4);
                                                    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_09791ba8(lVar4,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_04485110(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_096dd7dc;
                                                  if (0x36 < *puVar9) {
                                                    plVar3[0x3a] = lVar4;
                                                    thunk_FUN_044bb4b4(plVar3 + 0x3a,lVar4);
                                                    if (0 < (int)plVar3[3]) {
                                                      uVar8 = 0;
                                                      uVar7 = plVar3[3] & 0xffffffff;
                                                      do {
                                                        if (uVar7 <= uVar8) goto LAB_096dd7d8;
                                                        FUN_096ddab0(plVar3[uVar8 + 4]);
                                                        uVar7 = (ulong)*puVar9;
                                                        uVar8 = uVar8 + 1;
                                                      } while ((long)uVar8 < (long)(int)*puVar9);
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


