/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream$$FillBuffer
ENTRY_POINT: 0637fc90
PROGRAM: Untangled-libil2cpp.so
SCORE: 175
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_13;telemetry_or_network_hits_15;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_15
*/


void Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__FillBuffer(long param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined4 extraout_var;
  undefined8 extraout_x1;
  long lVar19;
  uint uVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [12];
  undefined8 in_stack_fffffffffffffed0;
  undefined4 uVar25;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0 [2];
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar8 = UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var;
  puVar9 = PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeRequest_var;
  uVar14 = (undefined4)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  if ((DAT_071cd3de & 1) == 0) {
    FUN_02f07e70(Unity_VisualScripting_UnityOnSelectMessageListener_var);
    FUN_02f07e70(UnityEngine_UIElements_UIR_State_var);
    FUN_02f07e70(System_Xml_Schema_FacetsChecker_FacetsCompiler_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_UpdateBuildNameRequest_var);
    FUN_02f07e70(PTR_DAT_06d37100);
    FUN_02f07e70(UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_var);
    FUN_02f07e70(Unity_VisualScripting_Flow_RecursionNode_var);
    FUN_02f07e70(UnityEngine_UIElements_FocusController_FocusedElement_var);
    FUN_02f07e70(UnityEngine_Rendering_Universal_Internal_ForwardLights_InitParams_var);
    FUN_02f07e70(Fusion_Statistics_FusionStatsGraphBase_FusionStatBuffer_var);
    FUN_02f07e70(Fusion_FusionUnityLoggerBase_LogContext_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeResponse_var);
    FUN_02f07e70(RootMotion_FinalIK_GrounderQuadruped_Foot_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotasRequest_var);
    FUN_02f07e70(System_Guid_GuidResult_var);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_var);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_var);
    FUN_02f07e70(UnityEngine_Rect_var);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HID_HIDElementDescriptor_var);
    FUN_02f07e70(PTR_DAT_06d98a60);
    FUN_02f07e70(PlayFab_MultiplayerModels_SetMatchmakingQueueResult_var);
    FUN_02f07e70(Unity_VisualScripting_UnityOnSliderValueChangedMessageListener_var);
    FUN_02f07e70(PlayFab_EconomyModels_SubmitItemReviewVoteRequest_var);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(System_Xml_XmlReader_var);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    FUN_02f07e70(PTR_DAT_06d399d0);
    FUN_02f07e70(PlayFab_ClientModels_GetTitleNewsRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetTitleNewsResult_var);
    FUN_02f07e70(UnityEngine_ExecuteInEditMode_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeRequest_var);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HIDParser_HIDItemStateGlobal_var);
    FUN_02f07e70(Unity_VisualScripting_UnityOnScrollbarValueChangedMessageListener_var);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HIDParser_HIDItemStateLocal_var);
    FUN_02f07e70(PTR_DAT_06d38bf0);
    FUN_02f07e70(
                UnityEngine_XR_OpenXR_Features_Interactions_HPReverbG2ControllerProfile_ReverbG2Controller_var
                );
    FUN_02f07e70(
                UnityEngine_XR_OpenXR_Features_Interactions_HTCViveControllerProfile_ViveController_var
                );
    FUN_02f07e70(PTR_DAT_06d962e8);
    FUN_02f07e70(HVRInputActions_HMDActions_var);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_FaceSubsystemParams_var);
    FUN_02f07e70(PlayFab_ProfilesModels_GetTitlePlayersFromMasterPlayerAccountIdsResponse_var);
    FUN_02f07e70(Unity_Properties_FieldMember_var);
    FUN_02f07e70(HVRInputActions_LeftHandActions_var);
    DAT_071cd3de = 1;
  }
  puVar10 = System_Xml_XmlReader_var;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar8);
  FUN_0638654c(uVar15,0);
  *(undefined8 *)(param_1 + 0x398) = uVar15;
  thunk_FUN_02f411dc(param_1 + 0x398,uVar15);
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar7 = UnityEngine_XR_OpenXR_Features_Interactions_HTCViveControllerProfile_ViveController_var;
  puVar8 = UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_var;
  UnityEngine_Timeline_SignalReceiver_EventKeyValue__get_events(param_1,param_2,0);
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_063923a0(0);
  uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar8);
  FUN_0516a7d4(uVar15,0,*(undefined8 *)puVar7,0);
  if (((param_2 != 0) && (*(long *)(param_2 + 0x48) != 0)) &&
     (lVar19 = *(long *)(*(long *)(param_2 + 0x48) + 0x18), lVar19 != 0)) {
    uVar22 = *(undefined8 *)(lVar19 + 0x10);
    uVar18 = *(undefined8 *)(lVar19 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_06d962e8 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0627d438(uVar15,uVar22,uVar18,0);
    if (*(long *)(param_2 + 0x50) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(param_2 + 0x50) + 0x50);
      if (*(int *)(*(long *)PTR_DAT_06d37100 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar15 = FUN_062d8208(uVar15,0);
      *(undefined8 *)(param_1 + 0x318) = uVar15;
      thunk_FUN_02f411dc(param_1 + 0x318);
      if (*(long *)(param_2 + 0x50) != 0) {
        uVar15 = FUN_062d8208(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x60),0);
        *(undefined8 *)(param_1 + 800) = uVar15;
        thunk_FUN_02f411dc(param_1 + 800);
        if (*(long *)(param_2 + 0x50) != 0) {
          uVar15 = FUN_062d8208(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x18),0);
          *(undefined8 *)(param_1 + 0x328) = uVar15;
          thunk_FUN_02f411dc(param_1 + 0x328);
          if (*(long *)(param_2 + 0x50) != 0) {
            uVar15 = FUN_062d8208(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x28),0);
            *(undefined8 *)(param_1 + 0x330) = uVar15;
            thunk_FUN_02f411dc(param_1 + 0x330);
            if (*(long *)(param_2 + 0x50) != 0) {
              uVar15 = FUN_062d8208(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x30),0);
              *(undefined8 *)(param_1 + 0x338) = uVar15;
              thunk_FUN_02f411dc(param_1 + 0x338);
              if (*(long *)(param_2 + 0x50) != 0) {
                uVar15 = FUN_062d8208(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x68),0);
                *(undefined8 *)(param_1 + 0x340) = uVar15;
                thunk_FUN_02f411dc(param_1 + 0x340);
                if (*(long *)(param_2 + 0x50) != 0) {
                  pauVar1 = (undefined1 (*) [12])(param_1 + 0x2f5);
                  uVar15 = FUN_062d8208(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x70),0);
                  *(undefined8 *)(param_1 + 0x348) = uVar15;
                  thunk_FUN_02f411dc(param_1 + 0x348);
                  lVar19 = *(long *)(param_2 + 0x68);
                  auVar24 = FUN_066f2d48(0);
                  *pauVar1 = auVar24;
                  puVar8 = PTR_DAT_06d38bf0;
                  if (lVar19 != 0) {
                    FUN_066f2f10(pauVar1,*(undefined1 *)(lVar19 + 0x10),0);
                    FUN_066f2f9c(pauVar1,*(undefined4 *)(lVar19 + 0x18),0);
                    FUN_066f2fb8(pauVar1,*(undefined4 *)(lVar19 + 0x1c),0);
                    FUN_066f2fd4(pauVar1,*(undefined4 *)(lVar19 + 0x20),0);
                    UnityEngine_UIElements_UIR_JobManager__Add
                              (pauVar1,*(undefined4 *)(lVar19 + 0x24),0);
                    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x84);
                    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    puVar7 = PTR_DAT_06d01e20;
                    lVar16 = FUN_0638870c(0);
                    if ((lVar16 != 0) && (*(char *)(lVar16 + 0xeb) != '\0')) {
                      FUN_06352f54(&local_100,0);
                      uStack_88 = uStack_f8;
                      local_90 = local_100;
                      uStack_7c = uStack_ec;
                      local_78 = uStack_e8;
                      uStack_84 = uStack_f4;
                      local_80 = uStack_f0;
                      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                        thunk_FUN_02f12b58();
                      }
                      lVar16 = FUN_0638870c(0);
                      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                        thunk_FUN_02f12b58(*(long *)puVar7);
                      }
                      uVar17 = FUN_066cd30c(lVar16,0);
                      if ((uVar17 & 1) != 0) {
                        if (lVar16 == 0) goto LAB_06380df4;
                        uStack_88 = UnityEngine_Timeline_AnimationOutputWeightProcessor___ctor
                                              (lVar16,0);
                        local_90 = FUN_06325b7c(lVar16,0);
                      }
                      uVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                      
                                                  PlayFab_MultiplayerModels_SetMatchmakingQueueResult_var
                                                 );
                      FUN_063502d0(uVar15,&local_90,0);
                      *(undefined8 *)(param_1 + 0x308) = uVar15;
                      thunk_FUN_02f411dc(param_1 + 0x308,uVar15);
                    }
                    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    *(undefined2 *)(param_1 + 0x1a6) = 0x101;
                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    if (DAT_071cd3ae == '\0') {
                      FUN_02f07e70(System_Xml_XmlReader_var);
                      DAT_071cd3ae = '\x01';
                    }
                    puVar11 = 
                    UnityEngine_XR_OpenXR_Features_Interactions_HPReverbG2ControllerProfile_ReverbG2Controller_var
                    ;
                    puVar7 = System_Guid_GuidResult_var;
                    puVar8 = Unity_VisualScripting_UnityOnSliderValueChangedMessageListener_var;
                    puVar9 = Unity_VisualScripting_UnityOnSelectMessageListener_var;
                    lVar16 = *(long *)puVar10;
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                      lVar16 = *(long *)puVar10;
                    }
                    puVar10 = UnityEngine_Rendering_Universal_Internal_ForwardLights_InitParams_var;
                    local_70 = *(undefined8 *)(param_1 + 0x308);
                    *(byte *)(param_1 + 0x1a7) = *(byte *)(*(long *)(lVar16 + 0xb8) + 8) ^ 1;
                    thunk_FUN_02f411dc(&local_70);
                    uVar15 = local_70;
                    bVar12 = *(int *)(param_2 + 0x74) == 2;
                    local_68 = CONCAT71(local_68._1_7_,bVar12);
                    uVar22 = local_68;
                    *(bool *)(param_1 + 0x1a8) = bVar12;
                    uVar18 = thunk_FUN_02ef1808(*(undefined8 *)puVar7);
                    FUN_063a4488(uVar18,uVar15,uVar22,0);
                    *(undefined8 *)(param_1 + 0x2d8) = uVar18;
                    thunk_FUN_02f411dc(param_1 + 0x2d8,uVar18);
                    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x74);
                    uVar2 = *(undefined4 *)(param_2 + 0x7c);
                    *(undefined1 *)(param_1 + 0x2f4) = 0;
                    *(undefined4 *)(param_1 + 0x2f0) = uVar2;
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar8);
                    FUN_063b35bc(uVar15,0x32,0);
                    *(undefined8 *)(param_1 + 0x1d0) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x1d0,uVar15);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar9);
                    FUN_0639fee8(uVar15,0x32,0);
                    *(undefined8 *)(param_1 + 0x1d8) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x1d8,uVar15);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar11);
                    FUN_06363b60(uVar15,0xfa,0);
                    *(undefined8 *)(param_1 + 0x250) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x250,uVar15);
                    uVar22 = *(undefined8 *)(param_1 + 0x328);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                 PlayFab_MultiplayerModels_UpdateBuildNameRequest_var
                                               );
                    FUN_063aaff8(uVar15,0x3ea,uVar22,0,0,0,0);
                    *(undefined8 *)(param_1 + 600) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 600,uVar15);
                    if (*(int *)(*(long *)PTR_DAT_06d399d0 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    uVar15 = FUN_066edd18(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x5c);
                    uVar22 = thunk_FUN_02ef1808(*(undefined8 *)puVar10);
                    FUN_063add2c(uVar22,0x96,uVar15,uVar2,0);
                    *(undefined8 *)(param_1 + 0x1b0) = uVar22;
                    thunk_FUN_02f411dc(param_1 + 0x1b0,uVar22);
                    uVar15 = FUN_066edd18(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x5c);
                    uVar22 = thunk_FUN_02ef1808(*(undefined8 *)
                                                 UnityEngine_UIElements_FocusController_FocusedElement_var
                                               );
                    FUN_063acb9c(uVar22,0x96,uVar15,uVar2,0);
                    *(undefined8 *)(param_1 + 0x1b8) = uVar22;
                    thunk_FUN_02f411dc(param_1 + 0x1b8,uVar22);
                    uVar20 = *(uint *)(param_1 + 0x2e8);
                    if ((uVar20 | 2) == 2) {
                      uVar22 = *(undefined8 *)(param_1 + 0x328);
                      uVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                      
                                                  PlayFab_MultiplayerModels_UpdateBuildNameRequest_var
                                                 );
                      FUN_063aaff8(uVar15,200,uVar22,1,0,0,0);
                      *(undefined8 *)(param_1 + 0x1c0) = uVar15;
                      thunk_FUN_02f411dc(param_1 + 0x1c0,uVar15);
                      uVar20 = *(uint *)(param_1 + 0x2e8);
                    }
                    if (uVar20 == 1) {
                      local_a0 = *(undefined8 *)(param_1 + 0x338);
                      local_98 = 0;
                      thunk_FUN_02f411dc(&local_a0);
                      local_98 = *(undefined8 *)(param_1 + 0x308);
                      thunk_FUN_02f411dc(&local_98);
                      uVar22 = local_98;
                      uVar15 = local_a0;
                      uVar5 = *(undefined1 *)(param_1 + 0x1a4);
                      uVar18 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                      
                                                  UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_var
                                                 );
                      FUN_06399f94(uVar18,uVar15,uVar22,uVar5,0);
                      *(undefined8 *)(param_1 + 0x2e0) = uVar18;
                      thunk_FUN_02f411dc(param_1 + 0x2e0,uVar18);
                      if (*(long *)(param_1 + 0x2e0) == 0) goto LAB_06380df4;
                      *(undefined1 *)(*(long *)(param_1 + 0x2e0) + 0x1a) =
                           *(undefined1 *)(param_2 + 0x80);
                      if (*(int *)(*(long *)PTR_DAT_06d399d0 + 0xe0) == 0) {
                        thunk_FUN_02f12b58();
                      }
                      uVar15 = FUN_066edd18(0);
                      uVar14 = *(undefined4 *)(param_2 + 0x5c);
                      uVar18 = *(undefined8 *)*pauVar1;
                      uVar2 = *(undefined4 *)(param_1 + 0x2fd);
                      uVar3 = *(undefined4 *)(lVar19 + 0x14);
                      uVar23 = *(undefined8 *)(param_1 + 0x2e0);
                      uVar22 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                      
                                                  UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_var
                                                 );
                      FUN_063b1840(uVar22,0xd2,uVar15,uVar14,uVar18,uVar2,uVar3,uVar23,0);
                      *(undefined8 *)(param_1 + 0x1e0) = uVar22;
                      thunk_FUN_02f411dc(param_1 + 0x1e0,uVar22);
                      uVar15 = *(undefined8 *)*pauVar1;
                      uVar14 = *(undefined4 *)(param_1 + 0x2fd);
                      if (*(int *)(*(long *)
                                    UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_var
                                  + 0xe0) == 0) {
                        thunk_FUN_02f12b58();
                      }
                      FUN_0639bae8(uVar15,uVar14,0x60,0);
                      lVar16 = FUN_02f07f14(*(undefined8 *)
                                             UnityEngine_InputSystem_HID_HIDParser_HIDItemStateGlobal_var
                                            ,3);
                      local_100 = (ulong)local_100._4_4_ << 0x20;
                      FUN_066f1fc8(&local_100,*(undefined8 *)Unity_Properties_FieldMember_var,0);
                      if (lVar16 == 0) goto LAB_06380df4;
                      if (*(int *)(lVar16 + 0x18) == 0) {
LAB_06380df8:
                    /* WARNING: Subroutine does not return */
                        FUN_02f080c8();
                      }
                      *(undefined4 *)(lVar16 + 0x20) = (undefined4)local_100;
                      local_b8[0] = 0;
                      FUN_066f1fc8(local_b8,*(undefined8 *)
                                             UnityEngine_XR_ARSubsystems_FaceSubsystemParams_var,0);
                      if (*(uint *)(lVar16 + 0x18) < 2) goto LAB_06380df8;
                      *(undefined4 *)(lVar16 + 0x24) = local_b8[0];
                      local_c0[0] = 0;
                      FUN_066f1fc8(local_c0,*(undefined8 *)HVRInputActions_HMDActions_var,0);
                      if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_06380df8;
                      *(undefined4 *)(lVar16 + 0x28) = local_c0[0];
                      uVar22 = *(undefined8 *)(param_1 + 0x328);
                      uVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                      
                                                  PlayFab_MultiplayerModels_UpdateBuildNameRequest_var
                                                 );
                      FUN_063aaff8(uVar15,0xd3,uVar22,1,0,0,0);
                      *(undefined8 *)(param_1 + 0x1e8) = uVar15;
                      thunk_FUN_02f411dc(param_1 + 0x1e8,uVar15);
                      uVar22 = *(undefined8 *)(param_1 + 0x2e0);
                      uVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                   Unity_VisualScripting_Flow_RecursionNode_var);
                      FUN_063ac5d4(uVar15,0xe6,uVar22,0);
                      *(undefined8 *)(param_1 + 0x1f0) = uVar15;
                      thunk_FUN_02f411dc(param_1 + 0x1f0,uVar15);
                      uVar15 = FUN_066edd18(0);
                      uVar2 = *(undefined4 *)(param_2 + 0x5c);
                      uVar22 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                      
                                                  Fusion_Statistics_FusionStatsGraphBase_FusionStatBuffer_var
                                                 );
                      uVar14 = extraout_var;
                      FUN_063aebbc(uVar22,*(undefined8 *)HVRInputActions_LeftHandActions_var,lVar16,
                                   1,0xfa,uVar15,uVar2);
                      *(undefined8 *)(param_1 + 0x1f8) = uVar22;
                      thunk_FUN_02f411dc(param_1 + 0x1f8,uVar22);
                    }
                    puVar9 = Fusion_FusionUnityLoggerBase_LogContext_var;
                    if (*(int *)(*(long *)PTR_DAT_06d399d0 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    uVar15 = FUN_066edd18(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x5c);
                    uVar18 = *(undefined8 *)*pauVar1;
                    uVar3 = *(undefined4 *)(param_1 + 0x2fd);
                    uVar25 = *(undefined4 *)(lVar19 + 0x14);
                    uVar22 = thunk_FUN_02ef1808(*(undefined8 *)
                                                 Fusion_Statistics_FusionStatsGraphBase_FusionStatBuffer_var
                                               );
                    uVar23 = CONCAT44(uVar14,uVar25);
                    FUN_063ae8b0(uVar22,10,1,0xfa,uVar15,uVar2,uVar18,uVar3,uVar23,0);
                    uVar25 = (undefined4)((ulong)uVar23 >> 0x20);
                    *(undefined8 *)(param_1 + 0x200) = uVar22;
                    thunk_FUN_02f411dc(param_1 + 0x200,uVar22);
                    uVar15 = FUN_066edd18(0);
                    uVar14 = *(undefined4 *)(param_2 + 0x5c);
                    uVar18 = *(undefined8 *)*pauVar1;
                    uVar2 = *(undefined4 *)(param_1 + 0x2fd);
                    uVar3 = *(undefined4 *)(lVar19 + 0x14);
                    uVar22 = thunk_FUN_02ef1808(*(undefined8 *)puVar9);
                    uVar23 = CONCAT44(uVar25,uVar3);
                    FUN_063ae7c4(uVar22,10,1,0xfa,uVar15,uVar14,uVar18,uVar2,uVar23,0);
                    uVar14 = (undefined4)((ulong)uVar23 >> 0x20);
                    *(undefined8 *)(param_1 + 0x208) = uVar22;
                    thunk_FUN_02f411dc(param_1 + 0x208,uVar22);
                    iVar4 = *(int *)(param_1 + 0x2f0);
                    uVar15 = *(undefined8 *)(param_1 + 0x328);
                    uVar20 = 500;
                    if (iVar4 != 1) {
                      uVar20 = 400;
                    }
                    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    puVar8 = RootMotion_FinalIK_GrounderQuadruped_Foot_var;
                    puVar9 = PlayFab_EconomyModels_SubmitItemReviewVoteRequest_var;
                    uVar17 = FUN_0636ee28(0);
                    if ((uVar17 & 1) == 0) {
                      bVar13 = 0;
                    }
                    else {
                      bVar13 = FUN_066d0e08(0);
                      bVar13 = bVar13 & 1;
                    }
                    uVar22 = thunk_FUN_02ef1808(*(undefined8 *)
                                                 PlayFab_MultiplayerModels_UpdateBuildNameRequest_var
                                               );
                    FUN_063aaff8(uVar22,uVar20,uVar15,1,0,bVar13 & iVar4 == 1,0);
                    *(undefined8 *)(param_1 + 0x218) = uVar22;
                    thunk_FUN_02f411dc(param_1 + 0x218,uVar22);
                    uVar22 = *(undefined8 *)(param_1 + 0x340);
                    uVar18 = *(undefined8 *)(param_1 + 0x348);
                    uVar2 = *(undefined4 *)(param_2 + 0x5c);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar9);
                    FUN_0635a164(uVar15,uVar20 | 1,uVar22,uVar18,uVar2,0);
                    *(undefined8 *)(param_1 + 0x1c8) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x1c8,uVar15);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar8);
                    FUN_06358594(uVar15,0x15e,0);
                    *(undefined8 *)(param_1 + 0x210) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x210,uVar15);
                    uVar22 = *(undefined8 *)(param_1 + 0x330);
                    uVar18 = *(undefined8 *)(param_1 + 0x318);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                 System_Xml_Schema_FacetsChecker_FacetsCompiler_var)
                    ;
                    FUN_063a9b4c(uVar15,400,uVar22,uVar18,0);
                    *(undefined8 *)(param_1 + 0x220) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x220,uVar15);
                    uVar5 = *(undefined1 *)(param_2 + 0x70);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                 Unity_VisualScripting_UnityOnScrollbarValueChangedMessageListener_var
                                               );
                    FUN_0636382c(uVar15,0x1c2,uVar5,0);
                    *(undefined8 *)(param_1 + 0x228) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x228,uVar15);
                    if (*(int *)(*(long *)PTR_DAT_06d399d0 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    uVar15 = FUN_066edd20(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x60);
                    uVar18 = *(undefined8 *)*pauVar1;
                    uVar3 = *(undefined4 *)(param_1 + 0x2fd);
                    uVar25 = *(undefined4 *)(lVar19 + 0x14);
                    uVar22 = thunk_FUN_02ef1808(*(undefined8 *)
                                                 Fusion_Statistics_FusionStatsGraphBase_FusionStatBuffer_var
                                               );
                    FUN_063ae8b0(uVar22,0xb,0,0x1c2,uVar15,uVar2,uVar18,uVar3,
                                 CONCAT44(uVar14,uVar25),0);
                    *(undefined8 *)(param_1 + 0x230) = uVar22;
                    thunk_FUN_02f411dc(param_1 + 0x230,uVar22);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                 UnityEngine_InputSystem_HID_HID_HIDElementDescriptor_var
                                               );
                    FUN_06359d20(uVar15,0x226,0);
                    *(undefined8 *)(param_1 + 0x238) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x238,uVar15);
                    puVar9 = 
                    PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeResponse_var;
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                 PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeResponse_var
                                               );
                    FUN_0635761c(uVar15,0x226,1,0);
                    *(undefined8 *)(param_1 + 0x260) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x260,uVar15);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar9);
                    FUN_0635761c(uVar15,0x3ea,0,0);
                    *(undefined8 *)(param_1 + 0x268) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x268,uVar15);
                    FUN_063640d8(0);
                    local_b0 = *(undefined8 *)(param_1 + 0x318);
                    local_a8 = extraout_x1;
                    thunk_FUN_02f411dc(&local_b0);
                    puVar9 = PTR_DAT_06d38bf0;
                    local_a8 = CONCAT44(local_a8._4_4_,0x4a);
                    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    lVar19 = FUN_0638870c(0);
                    if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
                      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d01e20);
                    }
                    uVar17 = FUN_066cd30c(lVar19,0);
                    if ((uVar17 & 1) != 0) {
                      if (lVar19 == 0) goto LAB_06380df4;
                      cVar6 = *(char *)(lVar19 + 0x55);
                      uVar14 = *(undefined4 *)(lVar19 + 0x58);
                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                        thunk_FUN_02f12b58();
                      }
                      uVar14 = FUN_0638f0a4(cVar6 != '\0',uVar14,0,0);
                      local_a8 = CONCAT44(local_a8._4_4_,uVar14);
                    }
                    puVar11 = UnityEngine_UIElements_UIR_State_var;
                    puVar7 = 
                    PlayFab_ProfilesModels_GetTitlePlayersFromMasterPlayerAccountIdsResponse_var;
                    puVar10 = PlayFab_ClientModels_GetTitleNewsResult_var;
                    puVar8 = PlayFab_ClientModels_GetTitleNewsRequest_var;
                    puVar9 = PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotasRequest_var;
                    uStack_d8 = 0;
                    local_e0 = 0;
                    uStack_c8 = 0;
                    uStack_d0 = 0;
                    uStack_f8 = 0;
                    uStack_f4 = 0;
                    local_100 = 0;
                    uStack_e8 = 0;
                    uStack_e4 = 0;
                    uStack_f0 = 0;
                    uStack_ec = 0;
                    FUN_0636418c(&local_100,*(undefined8 *)(param_2 + 0x40),&local_b0,0);
                    *(undefined8 *)(param_1 + 0x378) = uStack_d8;
                    *(undefined8 *)(param_1 + 0x370) = local_e0;
                    *(undefined8 *)(param_1 + 0x388) = uStack_c8;
                    *(undefined8 *)(param_1 + 0x380) = uStack_d0;
                    *(ulong *)(param_1 + 0x358) = CONCAT44(uStack_f4,uStack_f8);
                    *(long *)(param_1 + 0x350) = local_100;
                    *(ulong *)(param_1 + 0x368) = CONCAT44(uStack_e4,uStack_e8);
                    *(ulong *)(param_1 + 0x360) = CONCAT44(uStack_ec,uStack_f0);
                    thunk_FUN_02f411dc(param_1 + 0x350,0);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar11);
                    FUN_063571e0(uVar15,1000,0);
                    *(undefined8 *)(param_1 + 0x248) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x248,uVar15);
                    uVar22 = *(undefined8 *)(param_1 + 0x318);
                    uVar18 = *(undefined8 *)(param_1 + 800);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar9);
                    FUN_063b004c(uVar15,0x3e9,uVar22,uVar18,0);
                    *(undefined8 *)(param_1 + 0x240) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x240,uVar15);
                    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar8);
                    FUN_063b5688(uVar15,*(undefined8 *)puVar7,0);
                    *(undefined8 *)(param_1 + 0x270) = uVar15;
                    thunk_FUN_02f411dc(param_1 + 0x270,uVar15);
                    lVar19 = thunk_FUN_02ef1808(*(undefined8 *)puVar10);
                    FUN_0634f08c(lVar19,0);
                    puVar9 = 
                    PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeRequest_var;
                    if (*(int *)(*(long *)
                                  PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeRequest_var
                                + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    plVar21 = (long *)(param_1 + 0xe8);
                    *plVar21 = lVar19;
                    thunk_FUN_02f411dc(plVar21,lVar19);
                    if (*(int *)(param_1 + 0x2e8) == 1) {
                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                        thunk_FUN_02f12b58();
                      }
                      if (*plVar21 == 0) goto LAB_06380df4;
                      *(undefined1 *)(*plVar21 + 0x11) = 0;
                      uVar15 = FUN_02f07f14(*(undefined8 *)UnityEngine_Rect_var,3);
                      FUN_0552106c(uVar15,*(undefined8 *)
                                           UnityEngine_InputSystem_HID_HIDParser_HIDItemStateLocal_var
                                   ,0);
                      *(undefined8 *)(param_1 + 0xf0) = uVar15;
                      thunk_FUN_02f411dc((undefined8 *)(param_1 + 0xf0),uVar15);
                    }
                    puVar9 = PTR_DAT_06d98a60;
                    lVar19 = *(long *)PTR_DAT_06d98a60;
                    if (*(int *)(lVar19 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                      lVar19 = *(long *)puVar9;
                    }
                    *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x24) = DAT_013f6078;
                    FUN_062c1090(0);
                    bVar13 = FUN_066e2674(0x1d,0);
                    *(byte *)(param_1 + 0x314) = bVar13 & 1;
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
LAB_06380df4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


