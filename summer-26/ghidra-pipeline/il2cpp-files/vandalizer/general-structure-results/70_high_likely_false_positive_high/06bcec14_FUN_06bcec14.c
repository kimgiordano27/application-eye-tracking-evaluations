/*
FUNCTION_NAME: FUN_06bcec14
ENTRY_POINT: 06bcec14
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06bd15ec) */

long * FUN_06bcec14(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  long *local_50;
  char local_44 [4];
  
  puVar2 = PTR_DAT_075d6da8;
  if ((DAT_07a4fe59 & 1) == 0) {
    FUN_031f20f4(UnityEngine_Rendering_Universal_Internal_ForwardLights_InitParams_var);
    FUN_031f20f4(Fusion_Statistics_FusionStatsGraphBase_FusionStatBuffer_var);
    FUN_031f20f4(Fusion_FusionUnityLoggerBase_LogContext_var);
    FUN_031f20f4(PTR_DAT_075d6da8);
    FUN_031f20f4(UnityEngine_TextGenerator_var);
    FUN_031f20f4(UnityEngine_Rendering_GPUInstanceDataBufferGrower_GPUResources_var);
    FUN_031f20f4(UnityEngine_Rendering_GPUInstanceDataBufferUploader_GPUResources_var);
    FUN_031f20f4(UnityEngine_Rendering_GPUPrefixSum_DirectArgs_var);
    FUN_031f20f4(UnityEngine_Rendering_GPUPrefixSum_IndirectDirectArgs_var);
    FUN_031f20f4(UnityEngine_Rendering_GPUPrefixSum_SupportResources_var);
    FUN_031f20f4(UnityEngine_Rendering_GPUPrefixSum_SystemResources_var);
    FUN_031f20f4(UnityEngine_Rendering_GPUSort_Args_var);
    FUN_031f20f4(UnityEngine_Rendering_GPUSort_SupportResources_var);
    FUN_031f20f4(UnityEngine_Rendering_GPUSort_SystemResources_var);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement_var);
    FUN_031f20f4(System_Guid_GuidResult_var);
    FUN_031f20f4(MyBox_GuidManager_GuidInfo_var);
    FUN_031f20f4(PTR_DAT_0759c0d8);
    FUN_031f20f4(PTR_DAT_075d7b58);
    FUN_031f20f4(UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_var);
    FUN_031f20f4(UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_var);
    FUN_031f20f4(UnityEngine_InputSystem_HID_HID_HIDElementDescriptor_var);
    FUN_031f20f4(UnityEngine_InputSystem_HID_HIDParser_HIDItemStateGlobal_var);
    FUN_031f20f4(UnityEngine_InputSystem_HID_HIDParser_HIDItemStateLocal_var);
    FUN_031f20f4(
                UnityEngine_XR_OpenXR_Features_Interactions_HPReverbG2ControllerProfile_ReverbG2Controller_var
                );
    FUN_031f20f4(
                UnityEngine_XR_OpenXR_Features_Interactions_HTCViveControllerProfile_ViveController_var
                );
    FUN_031f20f4(
                UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                );
    FUN_031f20f4(Oculus_Interaction_HandGrab_Recorder_HandGrabPoseLiveRecorder_RecorderStep_var);
    FUN_031f20f4(Oculus_Interaction_HandGrab_HandGrabUtils_HandGrabInteractableData_var);
    FUN_031f20f4(Oculus_Interaction_HandGrab_HandGrabUtils_HandGrabPoseData_var);
    FUN_031f20f4(
                UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var
                );
    FUN_031f20f4(HandMenuTC_ButtonPair_var);
    FUN_031f20f4(PTR_DAT_0759b3b8);
    FUN_031f20f4(PTR_DAT_075d8dd0);
    DAT_07a4fe59 = 1;
  }
  puVar1 = PTR_DAT_075d8dd0;
  local_44[0] = '\0';
  local_50 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar3 = FUN_06bc54fc(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_075d7b58;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  FUN_03da9d88(lVar3,param_1,*(undefined8 *)Fusion_FusionUnityLoggerBase_LogContext_var);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *(long *)puVar2;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  local_44[0] = '\0';
  FUN_05e65364(uVar13,local_44,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar4 = FUN_05815364(lVar3,param_1,&local_50,
                       *(undefined8 *)Fusion_Statistics_FusionStatsGraphBase_FusionStatBuffer_var);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = FUN_06bd2360(param_1);
    if ((uVar4 & 1) == 0) {
      plVar10 = (long *)thunk_FUN_0322f148(*(undefined8 *)
                                            UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_var)
      ;
      FUN_06bd252c(plVar10,param_1);
      if (plVar10 == (long *)0x0) goto LAB_06bd1618;
    }
    else {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar3 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      uVar5 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
      puVar1 = PTR_DAT_0759b388;
      lVar14 = *(long *)(PTR_DAT_0759b388 + 0x20);
      if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar14 + 0x20,0);
      uVar4 = FUN_05e19a88(uVar5,uVar6,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_05d3a150(param_1,0);
        if ((uVar4 & 1) == 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          if (*(long *)(lVar3 + 0x18) == 0) {
            uVar5 = *(undefined8 *)UnityEngine_Rendering_GPUSort_Args_var;
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
            plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,2);
            lVar3 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            if ((lVar3 != 0) &&
               (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0)) {
              uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
              FUN_031f225c(uVar13,0);
            }
            if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2398();
            }
            plVar7[4] = lVar3;
            thunk_FUN_0329bf60(plVar7 + 4,lVar3);
            lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
            if ((lVar3 != 0) &&
               (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0)) {
              uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
              FUN_031f225c(uVar13,0);
            }
            if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2398();
            }
            plVar7[5] = lVar3;
            thunk_FUN_0329bf60(plVar7 + 5,lVar3);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            uVar5 = (**(code **)(*plVar10 + 0x928))
                              (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
          }
          else {
            switch((int)*(long *)(lVar3 + 0x18)) {
            case 1:
              uVar5 = *(undefined8 *)UnityEngine_Rendering_GPUSort_SupportResources_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,3);
              lVar14 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 5,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 6,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 2:
              uVar5 = *(undefined8 *)UnityEngine_Rendering_GPUSort_SystemResources_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,4);
              lVar14 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 6,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 7,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 3:
              uVar5 = *(undefined8 *)
                       UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement_var
              ;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,5);
              lVar14 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 6,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 7,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[8] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 8,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 4:
              uVar5 = *(undefined8 *)System_Guid_GuidResult_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,6);
              lVar14 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 6,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 7,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[8] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 8,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[9] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 9,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 5:
              uVar5 = *(undefined8 *)MyBox_GuidManager_GuidInfo_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,7);
              lVar14 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 6,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 7,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[8] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 8,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x40);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[9] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 9,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 7) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[10] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 10,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            default:
              thunk_FUN_03257e30(PTR_DAT_0759b208);
              uVar13 = thunk_FUN_0322f148();
              FUN_05e03c84(uVar13,0);
              uVar5 = thunk_FUN_03257e30(
                                        UnityEngine_XR_Hands_OpenXR_HandTracking_DestroyingSubsystemEventArgs_var
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_031f225c(uVar13,uVar5);
            }
          }
        }
        else {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          if (*(long *)(lVar3 + 0x18) == 0) {
            uVar5 = *(undefined8 *)
                     UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
            ;
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
            plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
            lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            if ((lVar3 != 0) &&
               (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0)) {
              uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
              FUN_031f225c(uVar13,0);
            }
            if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2398();
            }
            plVar7[4] = lVar3;
            thunk_FUN_0329bf60(plVar7 + 4,lVar3);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            uVar5 = (**(code **)(*plVar10 + 0x928))
                              (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
          }
          else {
            switch((int)*(long *)(lVar3 + 0x18)) {
            case 1:
              uVar5 = *(undefined8 *)
                       Oculus_Interaction_HandGrab_Recorder_HandGrabPoseLiveRecorder_RecorderStep_var
              ;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,2);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 4,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 5,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 2:
              uVar5 = *(undefined8 *)
                       Oculus_Interaction_HandGrab_HandGrabUtils_HandGrabInteractableData_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,3);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 5,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 6,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 3:
              uVar5 = *(undefined8 *)Oculus_Interaction_HandGrab_HandGrabUtils_HandGrabPoseData_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,4);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 6,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 7,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 4:
              uVar5 = *(undefined8 *)
                       UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var
              ;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,5);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 6,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 7,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[8] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 8,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 5:
              uVar5 = *(undefined8 *)HandMenuTC_ButtonPair_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,6);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 6,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 7,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x40);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[8] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 8,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[9] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 9,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            default:
              thunk_FUN_03257e30(PTR_DAT_0759b208);
              uVar13 = thunk_FUN_0322f148();
              FUN_05e03c84(uVar13,0);
              uVar5 = thunk_FUN_03257e30(
                                        UnityEngine_XR_Hands_OpenXR_HandTracking_DestroyingSubsystemEventArgs_var
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_031f225c(uVar13,uVar5);
            }
          }
        }
      }
      else {
        uVar4 = FUN_05d3a150(param_1,0);
        if ((uVar4 & 1) == 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          if (*(long *)(lVar3 + 0x18) == 0) {
            uVar5 = *(undefined8 *)
                     UnityEngine_Rendering_GPUInstanceDataBufferGrower_GPUResources_var;
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
            plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
            lVar3 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            if ((lVar3 != 0) &&
               (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0)) {
              uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
              FUN_031f225c(uVar13,0);
            }
            if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2398();
            }
            plVar7[4] = lVar3;
            thunk_FUN_0329bf60(plVar7 + 4,lVar3);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            uVar5 = (**(code **)(*plVar10 + 0x928))
                              (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
          }
          else {
            switch((int)*(long *)(lVar3 + 0x18)) {
            case 1:
              uVar5 = *(undefined8 *)
                       UnityEngine_Rendering_GPUInstanceDataBufferUploader_GPUResources_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,2);
              lVar14 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 5,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 2:
              uVar5 = *(undefined8 *)UnityEngine_Rendering_GPUPrefixSum_DirectArgs_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,3);
              lVar14 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 6,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 3:
              uVar5 = *(undefined8 *)UnityEngine_Rendering_GPUPrefixSum_IndirectDirectArgs_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,4);
              lVar14 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 6,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 7,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 4:
              uVar5 = *(undefined8 *)UnityEngine_Rendering_GPUPrefixSum_SupportResources_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,5);
              lVar14 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 6,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 7,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[8] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 8,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 5:
              uVar5 = *(undefined8 *)UnityEngine_Rendering_GPUPrefixSum_SystemResources_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,6);
              lVar14 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 6,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 7,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[8] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 8,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x40);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[9] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 9,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            default:
              thunk_FUN_03257e30(PTR_DAT_0759b208);
              uVar13 = thunk_FUN_0322f148();
              FUN_05e03c84(uVar13,0);
              uVar5 = thunk_FUN_03257e30(
                                        UnityEngine_XR_Hands_OpenXR_HandTracking_DestroyingSubsystemEventArgs_var
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_031f225c(uVar13,uVar5);
            }
          }
        }
        else {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          if (*(long *)(lVar3 + 0x18) == 0) {
            uVar5 = *(undefined8 *)
                     UnityEngine_XR_OpenXR_Features_Interactions_HTCViveControllerProfile_ViveController_var
            ;
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
          }
          else {
            switch((int)*(long *)(lVar3 + 0x18)) {
            case 1:
              uVar5 = *(undefined8 *)UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 4,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 2:
              uVar5 = *(undefined8 *)UnityEngine_InputSystem_HID_HID_HIDElementDescriptor_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,2);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 5,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 3:
              uVar5 = *(undefined8 *)UnityEngine_InputSystem_HID_HIDParser_HIDItemStateGlobal_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,3);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 6,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 4:
              uVar5 = *(undefined8 *)UnityEngine_InputSystem_HID_HIDParser_HIDItemStateLocal_var;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,4);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 6,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 7,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            case 5:
              uVar5 = *(undefined8 *)
                       UnityEngine_XR_OpenXR_Features_Interactions_HPReverbG2ControllerProfile_ReverbG2Controller_var
              ;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
              plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,5);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[4] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 4,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[5] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 5,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[6] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 6,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar14 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar14 != 0) &&
                 (lVar9 = thunk_FUN_0322f04c(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[7] = lVar14;
              thunk_FUN_0329bf60(plVar7 + 7,lVar14);
              if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar8 = *(long **)(lVar3 + 0x40);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                FUN_031f225c(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              plVar7[8] = lVar3;
              thunk_FUN_0329bf60(plVar7 + 8,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              uVar5 = (**(code **)(*plVar10 + 0x928))
                                (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x930));
              break;
            default:
              thunk_FUN_03257e30(PTR_DAT_0759b208);
              uVar13 = thunk_FUN_0322f148();
              FUN_05e03c84(uVar13,0);
              uVar5 = thunk_FUN_03257e30(
                                        UnityEngine_XR_Hands_OpenXR_HandTracking_DestroyingSubsystemEventArgs_var
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_031f225c(uVar13,uVar5);
            }
          }
        }
      }
      plVar10 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759c0d8,1);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar3 = thunk_FUN_0322f04c(param_1,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar3 == 0) {
        uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar13,0);
      }
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar10[4] = (long)param_1;
      thunk_FUN_0329bf60(plVar10 + 4,param_1);
      lVar3 = FUN_05e2c180(uVar5,plVar10,0);
      if (lVar3 == 0) {
LAB_06bd1618:
        local_50 = (long *)0x0;
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar5 = *(undefined8 *)UnityEngine_TextGenerator_var;
      plVar10 = (long *)thunk_FUN_0322f04c(lVar3,uVar5);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(lVar3,uVar5);
      }
    }
    lVar3 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    local_50 = plVar10;
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)UnityEngine_TextGenerator_var) {
          puVar11 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06bd1568;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined8 *)FUN_0322c1e8(plVar10,*(long *)UnityEngine_TextGenerator_var,0);
LAB_06bd1568:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_05813848(lVar3,param_1,local_50,
                 *(undefined8 *)
                  UnityEngine_Rendering_Universal_Internal_ForwardLights_InitParams_var);
  }
  plVar10 = local_50;
  if (local_44[0] != '\0') {
    thunk_FUN_032004d4(uVar13,0);
  }
  return plVar10;
}


