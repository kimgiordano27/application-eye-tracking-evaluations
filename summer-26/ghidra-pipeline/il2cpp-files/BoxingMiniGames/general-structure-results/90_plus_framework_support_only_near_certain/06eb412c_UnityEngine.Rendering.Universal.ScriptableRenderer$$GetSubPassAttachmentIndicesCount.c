/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScriptableRenderer$$GetSubPassAttachmentIndicesCount
ENTRY_POINT: 06eb412c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 139
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_7;functionality_possible_biometrics_hits_1
*/


void UnityEngine_Rendering_Universal_ScriptableRenderer__GetSubPassAttachmentIndicesCount
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  puVar4 = OVROverlayCanvas_TypeInfo;
  *(undefined8 *)(unaff_x23 + 0x30) = **(undefined8 **)(param_1 + 0xfa8);
  thunk_FUN_036b7ad0();
  *(undefined8 *)(unaff_x23 + 0x38) = *(undefined8 *)puVar4;
  thunk_FUN_036b7ad0();
  uVar5 = thunk_FUN_0367fe20(*unaff_x26);
  FUN_0414c60c();
  *(undefined8 *)(unaff_x23 + 0x50) = uVar5;
  thunk_FUN_036b7ad0((undefined8 *)(unaff_x23 + 0x50),uVar5);
  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
            ();
  *(undefined8 *)(unaff_x23 + 0x58) = uVar5;
  thunk_FUN_036b7ad0((undefined8 *)(unaff_x23 + 0x58),uVar5);
  if (unaff_x22 != 0) {
    FUN_04a78624();
    lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo);
    FUN_06ea5298(lVar6,0);
    uVar5 = thunk_FUN_0367fe20(*unaff_x26);
    FUN_0414c60c();
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x48) = uVar5;
      thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x48),uVar5);
      lVar7 = thunk_FUN_0367fe20(*(undefined8 *)System_Net_NclUtilities_TypeInfo);
      FUN_06ea6978(lVar7,0);
      puVar4 = OVRPermissionsRequester_TypeInfo;
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x30) = *unaff_x28;
        thunk_FUN_036b7ad0();
        *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)puVar4;
        thunk_FUN_036b7ad0();
        uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
        FUN_0414d94c();
        *(undefined8 *)(lVar7 + 0x50) = uVar5;
        thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x50),uVar5);
        uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5040);
        FUN_0554c13c();
        *(undefined8 *)(lVar7 + 0x58) = uVar5;
        thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x58),uVar5);
        lVar8 = *unaff_x29;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar8 = *unaff_x29;
        }
        puVar4 = UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo;
        puVar11 = *(undefined8 **)(lVar8 + 0xb8);
        lVar14 = puVar11[0xb];
        if (lVar14 == 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
          }
          uVar5 = *puVar11;
          lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
          FUN_0414d94c(lVar14,uVar5,*(undefined8 *)System_Net_NtlmClient_TypeInfo,0);
          plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x58);
          *plVar9 = lVar14;
          thunk_FUN_036b7ad0(plVar9,lVar14);
        }
        puVar11 = (undefined8 *)PTR_DAT_07a029b0;
        *(long *)(lVar7 + 0x68) = lVar14;
        thunk_FUN_036b7ad0((long *)(lVar7 + 0x68),lVar14);
        lVar8 = *unaff_x29;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar8 = *unaff_x29;
        }
        puVar12 = *(undefined8 **)(lVar8 + 0xb8);
        lVar14 = puVar12[0xc];
        if (lVar14 == 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
          }
          uVar5 = *puVar12;
          lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
          FUN_0414d94c(lVar14,uVar5,*(undefined8 *)Mono_Http_NtlmSession_TypeInfo,0);
          plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x60);
          *plVar9 = lVar14;
          thunk_FUN_036b7ad0(plVar9,lVar14);
          puVar11 = (undefined8 *)PTR_DAT_07a029b0;
        }
        *(long *)(lVar7 + 0x70) = lVar14;
        thunk_FUN_036b7ad0((long *)(lVar7 + 0x70),lVar14);
        uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
        FUN_0414c60c();
        *(undefined8 *)(lVar7 + 0x48) = uVar5;
        thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x48),uVar5);
        if (*(long *)(lVar6 + 0x50) != 0) {
          FUN_04a78624(*(long *)(lVar6 + 0x50),lVar7,*puVar11);
          if (*(long *)(in_stack_00000008 + 0x50) != 0) {
            FUN_04a78624(*(long *)(in_stack_00000008 + 0x50),lVar6,*puVar11);
            lVar7 = *(long *)(in_stack_00000008 + 0x50);
            lVar6 = thunk_FUN_0367fe20(*(undefined8 *)System_Net_NclUtilities_TypeInfo);
            FUN_06ea6978(lVar6,0);
            puVar3 = OVRCameraRig_TypeInfo;
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)OVRMarkerPayloadType_TypeInfo;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)puVar3;
              thunk_FUN_036b7ad0();
              uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
              FUN_0414d94c();
              *(undefined8 *)(lVar6 + 0x50) = uVar5;
              thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x50),uVar5);
              uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5040);
              FUN_0554c13c();
              *(undefined8 *)(lVar6 + 0x58) = uVar5;
              thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x58),uVar5);
              lVar8 = *unaff_x29;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_036a1978();
                lVar8 = *unaff_x29;
              }
              puVar11 = *(undefined8 **)(lVar8 + 0xb8);
              lVar14 = puVar11[0xd];
              if (lVar14 == 0) {
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                  puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                }
                uVar5 = *puVar11;
                lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                FUN_0414d94c(lVar14,uVar5,
                             *(undefined8 *)Mono_Security_Protocol_Ntlm_NtlmSettings_TypeInfo,0);
                plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
                *plVar9 = lVar14;
                thunk_FUN_036b7ad0(plVar9,lVar14);
              }
              puVar3 = PTR_DAT_07a029b0;
              *(long *)(lVar6 + 0x68) = lVar14;
              thunk_FUN_036b7ad0((long *)(lVar6 + 0x68),lVar14);
              if (lVar7 != 0) {
                FUN_04a78624(lVar7,lVar6,*(undefined8 *)puVar3);
                lVar6 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                if (lVar6 != 0) {
                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                    *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000008;
                    thunk_FUN_036b7ad0();
                  }
                  else {
                    FUN_0459f03c();
                  }
                  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                              Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                            );
                  FUN_06ea5298(lVar6,0);
                  if (lVar6 != 0) {
                    *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)OVROverlayCanvasManager_TypeInfo;
                    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x30));
                    lVar8 = *(long *)(lVar6 + 0x50);
                    lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                    FUN_06ea66f4(lVar7,0);
                    puVar3 = OVRGLTFAccessor_TypeInfo;
                    if (lVar7 != 0) {
                      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)OVRMarkerPayload_TypeInfo;
                      thunk_FUN_036b7ad0();
                      *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)puVar3;
                      thunk_FUN_036b7ad0();
                      uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
                      FUN_0414c60c();
                      *(undefined8 *)(lVar7 + 0x50) = uVar5;
                      thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x50),uVar5);
                      uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                      System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                ();
                      *(undefined8 *)(lVar7 + 0x58) = uVar5;
                      thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x58),uVar5);
                      uVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                      ;
                      FUN_05620310();
                      *(undefined8 *)(lVar7 + 0x60) = uVar5;
                      thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x60),uVar5);
                      if (lVar8 != 0) {
                        FUN_04a78624(lVar8,lVar7,*(undefined8 *)PTR_DAT_07a029b0);
                        lVar8 = *(long *)(lVar6 + 0x50);
                        lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                        FUN_06ea66f4(lVar7,0);
                        puVar3 = OVRBounded3D_TypeInfo;
                        if (lVar7 != 0) {
                          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)OVRManager_TypeInfo;
                          thunk_FUN_036b7ad0();
                          *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)puVar3;
                          thunk_FUN_036b7ad0();
                          uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
                          FUN_0414c60c();
                          *(undefined8 *)(lVar7 + 0x50) = uVar5;
                          thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x50),uVar5);
                          uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                          System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                    ();
                          *(undefined8 *)(lVar7 + 0x58) = uVar5;
                          thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x58),uVar5);
                          uVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                            
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                          ;
                          FUN_05620310();
                          *(undefined8 *)(lVar7 + 0x60) = uVar5;
                          thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x60),uVar5);
                          if (lVar8 != 0) {
                            FUN_04a78624(lVar8,lVar7,*(undefined8 *)PTR_DAT_07a029b0);
                            lVar7 = *(long *)(unaff_x20 + 0x10);
                            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                            puVar3 = PTR_DAT_079fbc70;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(unaff_x20 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                plVar9 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar9 = lVar6;
                                thunk_FUN_036b7ad0(plVar9,lVar6);
                              }
                              else {
                                FUN_0459f03c();
                              }
                              lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                    
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                              FUN_06ea5298(lVar6,0);
                              if (lVar6 != 0) {
                                *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)OVRHaptics_TypeInfo;
                                thunk_FUN_036b7ad0();
                                uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                FUN_0414c60c();
                                *(undefined8 *)(lVar6 + 0x48) = uVar5;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x48),uVar5);
                                lVar8 = *(long *)(lVar6 + 0x50);
                                lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                FUN_06ea66f4(lVar7,0);
                                puVar2 = OVRGLTFLoader_TypeInfo;
                                if (lVar7 != 0) {
                                  *(undefined8 *)(lVar7 + 0x30) =
                                       *(undefined8 *)
                                        Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo;
                                  thunk_FUN_036b7ad0();
                                  *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)puVar2;
                                  thunk_FUN_036b7ad0();
                                  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                  FUN_0414c60c();
                                  *(undefined8 *)(lVar7 + 0x50) = uVar5;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x50),uVar5);
                                  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                            ();
                                  *(undefined8 *)(lVar7 + 0x58) = uVar5;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x58),uVar5);
                                  if (lVar8 != 0) {
                                    FUN_04a78624(lVar8,lVar7,*(undefined8 *)PTR_DAT_07a029b0);
                                    lVar8 = *(long *)(lVar6 + 0x50);
                                    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                    FUN_06ea66f4(lVar7,0);
                                    if (lVar7 != 0) {
                                      *(undefined8 *)(lVar7 + 0x30) =
                                           *(undefined8 *)
                                            OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo;
                                      thunk_FUN_036b7ad0();
                                      puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                      uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
                                      FUN_0414c60c();
                                      *(undefined8 *)(lVar7 + 0x50) = uVar5;
                                      thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x50),uVar5);
                                      uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                                      System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                ();
                                      *(undefined8 *)(lVar7 + 0x58) = uVar5;
                                      thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x58),uVar5);
                                      puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                      if (lVar8 != 0) {
                                        FUN_04a78624(lVar8,lVar7,*(undefined8 *)PTR_DAT_07a029b0);
                                        puVar3 = 
                                        UnityEngine_UIElements_NavigationCancelEvent_TypeInfo;
                                        lVar8 = *(long *)(lVar6 + 0x50);
                                        lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                        FUN_06ea66f4(lVar7,0);
                                        puVar2 = OVROverlayCanvas_TMPChanged_TypeInfo;
                                        if (lVar7 != 0) {
                                          *(undefined8 *)(lVar7 + 0x30) =
                                               *(undefined8 *)OVRNodeStateProperties_TypeInfo;
                                          thunk_FUN_036b7ad0();
                                          *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)puVar2;
                                          thunk_FUN_036b7ad0();
                                          lVar14 = *unaff_x29;
                                          if (*(int *)(lVar14 + 0xe4) == 0) {
                                            thunk_FUN_036a1978();
                                            lVar14 = *unaff_x29;
                                          }
                                          puVar13 = *(undefined8 **)(lVar14 + 0xb8);
                                          lVar15 = puVar13[0xe];
                                          if (lVar15 == 0) {
                                            if (*(int *)(lVar14 + 0xe4) == 0) {
                                              thunk_FUN_036a1978();
                                              puVar13 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                            }
                                            uVar5 = *puVar13;
                                            lVar15 = thunk_FUN_0367fe20(*puVar11);
                                            FUN_0414c60c(lVar15,uVar5,
                                                         *(undefined8 *)
                                                          Zenject_NullBindingFinalizer_TypeInfo,0);
                                            plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x70);
                                            *plVar9 = lVar15;
                                            thunk_FUN_036b7ad0(plVar9,lVar15);
                                            puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                          }
                                          *(long *)(lVar7 + 0x50) = lVar15;
                                          thunk_FUN_036b7ad0((long *)(lVar7 + 0x50),lVar15);
                                          lVar14 = *unaff_x29;
                                          if (*(int *)(lVar14 + 0xe4) == 0) {
                                            thunk_FUN_036a1978();
                                            lVar14 = *unaff_x29;
                                          }
                                          puVar13 = *(undefined8 **)(lVar14 + 0xb8);
                                          lVar15 = puVar13[0xf];
                                          if (lVar15 == 0) {
                                            if (*(int *)(lVar14 + 0xe4) == 0) {
                                              thunk_FUN_036a1978();
                                              puVar13 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                            }
                                            uVar5 = *puVar13;
                                            lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                         PTR_DAT_079f5aa0);
                                            System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                      (lVar15,uVar5,
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Linq_Expressions_Interpreter_NullCheckInstruction_TypeInfo
                                                  ,0);
                                            plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x78);
                                            *plVar9 = lVar15;
                                            thunk_FUN_036b7ad0(plVar9,lVar15);
                                            puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                          }
                                          *(long *)(lVar7 + 0x58) = lVar15;
                                          thunk_FUN_036b7ad0((long *)(lVar7 + 0x58),lVar15);
                                          if (lVar8 != 0) {
                                            FUN_04a78624(lVar8,lVar7,*puVar12);
                                            lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                            FUN_06ea5298(lVar7,0);
                                            lVar8 = *unaff_x29;
                                            if (*(int *)(lVar8 + 0xe4) == 0) {
                                              thunk_FUN_036a1978();
                                              lVar8 = *unaff_x29;
                                            }
                                            puVar12 = *(undefined8 **)(lVar8 + 0xb8);
                                            lVar14 = puVar12[0x10];
                                            if (lVar14 == 0) {
                                              if (*(int *)(lVar8 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                              }
                                              uVar5 = *puVar12;
                                              lVar14 = thunk_FUN_0367fe20(*puVar11);
                                              FUN_0414c60c(lVar14,uVar5,
                                                           *(undefined8 *)
                                                            System_NullConsoleDriver_TypeInfo,0);
                                              plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x80)
                                              ;
                                              *plVar9 = lVar14;
                                              thunk_FUN_036b7ad0(plVar9,lVar14);
                                            }
                                            if (lVar7 != 0) {
                                              *(long *)(lVar7 + 0x48) = lVar14;
                                              thunk_FUN_036b7ad0((long *)(lVar7 + 0x48),lVar14);
                                              lVar14 = *(long *)(lVar7 + 0x50);
                                              lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                    
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                              ;
                                              FUN_06ea680c(lVar8,0);
                                              puVar2 = OVRLocatable_TypeInfo;
                                              if (lVar8 != 0) {
                                                *(undefined8 *)(lVar8 + 0x30) =
                                                     *(undefined8 *)OVRRaycaster_TypeInfo;
                                                thunk_FUN_036b7ad0();
                                                *(undefined8 *)(lVar8 + 0x38) =
                                                     *(undefined8 *)puVar2;
                                                thunk_FUN_036b7ad0();
                                                lVar15 = *unaff_x29;
                                                if (*(int *)(lVar15 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  lVar15 = *unaff_x29;
                                                }
                                                puVar12 = *(undefined8 **)(lVar15 + 0xb8);
                                                lVar16 = puVar12[0x11];
                                                if (lVar16 == 0) {
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                  }
                                                  uVar5 = *puVar12;
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_07a00dd0);
                                                  FUN_0414cefc(lVar16,uVar5,
                                                               *(undefined8 *)
                                                                                                                                
                                                  UnityThreading_NullDispatcher_TypeInfo,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x88);
                                                  *plVar9 = lVar16;
                                                  thunk_FUN_036b7ad0(plVar9,lVar16);
                                                  puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                                }
                                                *(long *)(lVar8 + 0x50) = lVar16;
                                                thunk_FUN_036b7ad0((long *)(lVar8 + 0x50),lVar16);
                                                lVar15 = *unaff_x29;
                                                if (*(int *)(lVar15 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  lVar15 = *unaff_x29;
                                                }
                                                puVar12 = *(undefined8 **)(lVar15 + 0xb8);
                                                lVar16 = puVar12[0x12];
                                                if (lVar16 == 0) {
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                  }
                                                  uVar5 = *puVar12;
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_079f5048);
                                                  FUN_055487a4(lVar16,uVar5,
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_NullReferenceException_TypeInfo,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x90);
                                                  *plVar9 = lVar16;
                                                  thunk_FUN_036b7ad0(plVar9,lVar16);
                                                  puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                                }
                                                *(long *)(lVar8 + 0x58) = lVar16;
                                                thunk_FUN_036b7ad0((long *)(lVar8 + 0x58),lVar16);
                                                lVar15 = *unaff_x29;
                                                if (*(int *)(lVar15 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  lVar15 = *unaff_x29;
                                                }
                                                puVar12 = *(undefined8 **)(lVar15 + 0xb8);
                                                lVar16 = puVar12[0x13];
                                                if (lVar16 == 0) {
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                  }
                                                  uVar5 = *puVar12;
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_07a00dd0);
                                                  FUN_0414cefc(lVar16,uVar5,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Meta_XR_Editor_FalcoOVRTelemetry_NullTelemetryClient_TypeInfo
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x98);
                                                  *plVar9 = lVar16;
                                                  thunk_FUN_036b7ad0(plVar9,lVar16);
                                                  puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                                }
                                                *(long *)(lVar8 + 0x68) = lVar16;
                                                thunk_FUN_036b7ad0((long *)(lVar8 + 0x68),lVar16);
                                                lVar15 = *unaff_x29;
                                                if (*(int *)(lVar15 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  lVar15 = *unaff_x29;
                                                }
                                                puVar12 = *(undefined8 **)(lVar15 + 0xb8);
                                                lVar16 = puVar12[0x14];
                                                if (lVar16 == 0) {
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                  }
                                                  uVar5 = *puVar12;
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_07a00dd0);
                                                  FUN_0414cefc(lVar16,uVar5,
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_TypeInfo
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xa0);
                                                  *plVar9 = lVar16;
                                                  thunk_FUN_036b7ad0(plVar9,lVar16);
                                                  puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                                }
                                                *(long *)(lVar8 + 0x70) = lVar16;
                                                thunk_FUN_036b7ad0((long *)(lVar8 + 0x70),lVar16);
                                                puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                if (lVar14 != 0) {
                                                  FUN_04a78624(lVar14,lVar8,
                                                               *(undefined8 *)PTR_DAT_07a029b0);
                                                  puVar2 = PTR_DAT_079f4540;
                                                  if (*(long *)(lVar6 + 0x50) != 0) {
                                                    FUN_04a78624(*(long *)(lVar6 + 0x50),lVar7,
                                                                 *puVar12);
                                                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                    }
                                                    uVar10 = FUN_0717a688(0);
                                                    if ((uVar10 & 1) != 0) {
                                                      lVar8 = *(long *)(lVar6 + 0x50);
                                                      lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_06ea66f4(lVar7,0);
                                                      if (lVar7 == 0) goto LAB_06eb5ee8;
                                                      *(undefined8 *)(lVar7 + 0x30) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  uVar5 = thunk_FUN_0367fe20(*puVar11);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar7 + 0x50) = uVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x50),
                                                                     uVar5);
                                                  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar7 + 0x58) = uVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x58),
                                                                     uVar5);
                                                  if (lVar8 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar8,lVar7,*puVar12);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar7,0);
                                                  uVar5 = thunk_FUN_0367fe20(*puVar11);
                                                  FUN_0414c60c();
                                                  if (lVar7 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar7 + 0x48) = uVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x48),
                                                                     uVar5);
                                                  lVar14 = *(long *)(lVar7 + 0x50);
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_07a029d8);
                                                  FUN_06e958f8(lVar8,0);
                                                  if (lVar8 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar8 + 0x30) =
                                                       *(undefined8 *)OVRDisplay_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = *unaff_x29;
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar15 = *unaff_x29;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar15 + 0xb8);
                                                  lVar16 = puVar12[0x15];
                                                  if (lVar16 == 0) {
                                                    if (*(int *)(lVar15 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar12;
                                                    lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079fd998);
                                                    FUN_0414d3cc(lVar16,uVar5,
                                                                 *(undefined8 *)
                                                                  System_Number_TypeInfo,0);
                                                    plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                     0xa8);
                                                    *plVar9 = lVar16;
                                                    thunk_FUN_036b7ad0(plVar9,lVar16);
                                                    puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar8 + 0x50) = lVar16;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x50),lVar16);
                                                  puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  if (lVar14 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar14,lVar8,
                                                               *(undefined8 *)PTR_DAT_07a029b0);
                                                  if (*(long *)(lVar6 + 0x50) == 0)
                                                  goto LAB_06eb5ee8;
                                                  FUN_04a78624(*(long *)(lVar6 + 0x50),lVar7,
                                                               *puVar12);
                                                  lVar8 = *(long *)(lVar6 + 0x50);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                                  FUN_06ea66f4(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)OVRHapticsClip_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  uVar5 = thunk_FUN_0367fe20(*puVar11);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar7 + 0x50) = uVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x50),
                                                                     uVar5);
                                                  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar7 + 0x58) = uVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x58),
                                                                     uVar5);
                                                  if (lVar8 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar8,lVar7,*puVar12);
                                                  lVar8 = *(long *)(lVar6 + 0x50);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                                  FUN_06ea66f4(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)OVRPlatformMenu_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  uVar5 = thunk_FUN_0367fe20(*puVar11);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar7 + 0x50) = uVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x50),
                                                                     uVar5);
                                                  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar7 + 0x58) = uVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x58),
                                                                     uVar5);
                                                  if (lVar8 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar8,lVar7,*puVar12);
                                                  }
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar9 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar9,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    puVar3 = PTR_DAT_079f4e28;
                                                    if (*(char *)(unaff_x19 + 0x1a) != '\0') {
                                                      if (*(long *)(unaff_x19 + 0x148) == 0)
                                                      goto LAB_06eb5ee8;
                                                      uVar5 = FUN_06ed5230(*(long *)(unaff_x19 +
                                                                                    0x148),0);
                                                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978(*(long *)puVar3);
                                                      }
                                                      uVar10 = FUN_071c0684(uVar5,0,0);
                                                      if ((uVar10 & 1) != 0) {
                                                        lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                        
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar6,0);
                                                  if (lVar6 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar6 + 0x30) =
                                                       *(undefined8 *)OVRColocationSession_TypeInfo;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x30));
                                                  lVar8 = *(long *)(lVar6 + 0x50);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                                  ;
                                                  FUN_06ea680c(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)OVRGLTFType_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar11[0x16];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar11;
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar15,uVar5,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Globalization_NumberFormatInfo_TypeInfo,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xb0);
                                                  *plVar9 = lVar15;
                                                  thunk_FUN_036b7ad0(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar7 + 0x50) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x50),lVar15);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar11[0x17];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar11;
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5048);
                                                    FUN_055487a4(lVar15,uVar5,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  MS_Internal_Xml_XPath_NumberFunctions_TypeInfo,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xb8);
                                                  *plVar9 = lVar15;
                                                  thunk_FUN_036b7ad0(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar7 + 0x58) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x58),lVar15);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar11[0x18];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar11;
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar15,uVar5,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Xml_Schema_Numeric10FacetsChecker_TypeInfo,
                                                  0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xc0);
                                                  *plVar9 = lVar15;
                                                  thunk_FUN_036b7ad0(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar7 + 0x68) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x68),lVar15);
                                                  if (lVar8 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar8,lVar7,*puVar12);
                                                  lVar8 = *(long *)(lVar6 + 0x50);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)
                                                        OVRHandSkeletonVersion_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar11[0x19];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar11;
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar15,uVar5,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Xml_Schema_Numeric2FacetsChecker_TypeInfo,0
                                                  );
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   200);
                                                  *plVar9 = lVar15;
                                                  thunk_FUN_036b7ad0(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar7 + 0x50) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x50),lVar15);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar11[0x1a];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar11;
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5040);
                                                    FUN_0554c13c(lVar15,uVar5,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  MS_Internal_Xml_XPath_NumericExpr_TypeInfo,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xd0);
                                                  *plVar9 = lVar15;
                                                  thunk_FUN_036b7ad0(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar7 + 0x58) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x58),lVar15);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar11[0x1b];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar11;
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar15,uVar5,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_NumericFieldDraggerUtility_TypeInfo,0)
                                                  ;
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xd8);
                                                  *plVar9 = lVar15;
                                                  thunk_FUN_036b7ad0(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar7 + 0x68) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x68),lVar15);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar11[0x1c];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar11;
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar15,uVar5,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Runtime_InteropServices_OSPlatform_TypeInfo
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xe0);
                                                  *plVar9 = lVar15;
                                                  thunk_FUN_036b7ad0(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar7 + 0x70) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x70),lVar15);
                                                  if (lVar8 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar8,lVar7,*puVar12);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Newtonsoft_Json_JsonWriterException_TypeInfo);
                                                  FUN_06e99510(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)OVRPose_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x38) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_EventSystems_OVRInputModule_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x68) =
                                                       *(undefined8 *)(unaff_x19 + 0x1e8);
                                                  thunk_FUN_036b7ad0();
                                                  FUN_058206a4(lVar7,*(undefined8 *)
                                                                      (unaff_x19 + 0x1f0),
                                                               *(undefined8 *)
                                                                Newtonsoft_Json_JsonWriter_TypeInfo)
                                                  ;
                                                  puVar2 = PTR_DAT_07a00dd0;
                                                  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_07a00dd0);
                                                  FUN_0414cefc();
                                                  *(undefined8 *)(lVar7 + 0x88) = uVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x88),
                                                                     uVar5);
                                                  puVar3 = PTR_DAT_079f5048;
                                                  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5048);
                                                  FUN_055487a4();
                                                  *(undefined8 *)(lVar7 + 0x90) = uVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x90),
                                                                     uVar5);
                                                  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0414cefc();
                                                  *(undefined8 *)(lVar7 + 0x50) = uVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x50),
                                                                     uVar5);
                                                  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                                  FUN_055487a4();
                                                  *(undefined8 *)(lVar7 + 0x58) = uVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x58),
                                                                     uVar5);
                                                  *(long *)(unaff_x19 + 0x208) = lVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)
                                                                     (unaff_x19 + 0x208),lVar7);
                                                  if (*(long *)(lVar6 + 0x50) == 0)
                                                  goto LAB_06eb5ee8;
                                                  FUN_04a78624(*(long *)(lVar6 + 0x50),
                                                               *(undefined8 *)(unaff_x19 + 0x208),
                                                               *puVar12);
                                                  lVar8 = *(long *)(lVar6 + 0x50);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)OVRFaceExpressions_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x38) =
                                                       *(undefined8 *)OVRControllerTest_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar11[0x1d];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar11;
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar15,uVar5,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Threading_OSSpecificSynchronizationContext_TypeInfo
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xe8);
                                                  *plVar9 = lVar15;
                                                  thunk_FUN_036b7ad0(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar7 + 0x50) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x50),lVar15);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar11[0x1e];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar11;
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5040);
                                                    FUN_0554c13c(lVar15,uVar5,
                                                                 *(undefined8 *)OVRAnchor_TypeInfo,0
                                                                );
                                                    plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                     0xf0);
                                                    *plVar9 = lVar15;
                                                    thunk_FUN_036b7ad0(plVar9,lVar15);
                                                    puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar7 + 0x58) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x58),lVar15);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar11[0x1f];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar11;
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar15,uVar5,
                                                                 *(undefined8 *)
                                                                  OVRAnchorContainer_TypeInfo,0);
                                                    plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                     0xf8);
                                                    *plVar9 = lVar15;
                                                    thunk_FUN_036b7ad0(plVar9,lVar15);
                                                    puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar7 + 0x68) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x68),lVar15);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar11[0x20];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar5 = *puVar11;
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar15,uVar5,
                                                                 *(undefined8 *)OVRBone_TypeInfo,0);
                                                    lVar14 = *(long *)(*unaff_x29 + 0xb8);
                                                    *(long *)(lVar14 + 0x100) = lVar15;
                                                    thunk_FUN_036b7ad0(lVar14 + 0x100,lVar15);
                                                    puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar7 + 0x70) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x70),lVar15);
                                                  if (lVar8 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar8,lVar7,*puVar12);
                                                  lVar7 = *(long *)(in_stack_00000000 + 0x10);
                                                  lVar8 = *(long *)puVar4;
                                                  *(int *)(in_stack_00000000 + 0x1c) =
                                                       *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_06eb5ee8;
                                                  uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                  unaff_x20 = in_stack_00000000;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(in_stack_00000000 + 0x18) = uVar1 + 1;
                                                    plVar9 = (long *)(lVar7 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar9 = lVar6;
                                                    thunk_FUN_036b7ad0(plVar9,lVar6);
                                                  }
                                                  else {
                                                    FUN_0459f03c(in_stack_00000000,lVar6,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  }
                                                  }
                                                  puVar3 = 
                                                  UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  Newtonsoft_Json_JsonValidatingReader_TypeInfo;
                                                  if (0 < *(int *)(unaff_x20 + 0x18)) {
                                                    uVar5 = FUN_045a0b8c(unaff_x20,
                                                                         *(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_UIElements_ListViewDraggerAnimated_TypeInfo
                                                  );
                                                  *(undefined8 *)(unaff_x19 + 0x198) = uVar5;
                                                  thunk_FUN_036b7ad0(unaff_x19 + 0x198,uVar5);
                                                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                  }
                                                  lVar6 = FUN_06e96d28(0);
                                                  lVar7 = *(long *)puVar3;
                                                  if (*(int *)(lVar7 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978(lVar7);
                                                  }
                                                  if (((lVar6 == 0) ||
                                                      (lVar6 = FUN_06e96e60(lVar6,*(undefined8 *)
                                                                                   (*(long *)(*(long
                                                                                                *)
                                                  puVar3 + 0xb8) + 0x10),1,0,0,0), lVar6 == 0)) ||
                                                  (*(long *)(lVar6 + 0x28) == 0)) goto LAB_06eb5ee8;
                                                  FUN_04a7870c(*(long *)(lVar6 + 0x28),
                                                               *(undefined8 *)(unaff_x19 + 0x198),
                                                               *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_Rendering_LocalKeyword_TypeInfo);
                                                  }
                                                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                  }
                                                  lVar6 = FUN_06e96d28(0);
                                                  if (lVar6 != 0) {
                                                    FUN_06e96db4(lVar6,*(undefined8 *)
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
LAB_06eb5ee8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


