/*
FUNCTION_NAME: FUN_05d6fa40
ENTRY_POINT: 05d6fa40
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 217
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05d6fa40(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  
  if ((DAT_066db8c5 & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_UIElements_UIR_UIRenderDevice_DrawRanges__);
    FUN_02b3c81c(Pico_Platform_Models_SpeechError_TypeInfo);
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_ToggleCollapseMode__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UIR_UIRenderDevice_EvaluateChain__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnEngineUpdateGlobal__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__);
    FUN_02b3c81c(Method_System_ConsoleCancelEventArgs__ctor__);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<bool>_ReadBoolValue__
                );
    FUN_02b3c81c(Method_System_ConsoleKeyInfo__ctor__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UITKTextHandle_GetICUAsset__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UITKTextJobSystem_AddDrawEntries__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_ConstantBuffer_Push<ProbeReferenceVolume_CellStreamingScratchBufferLayout>__
                );
    FUN_02b3c81c(System_Reflection_SignatureType_TypeInfo);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UITKTextJobSystem_GenerateTextJobified__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UITKTextJobSystem_OnGetManagedJob__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UITKTextJobSystem_PrepareTextJobified__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq256>__);
    FUN_02b3c81c(System_Reflection_SignaturePointerType_TypeInfo);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UIToolkitInteroperabilityBridge_Apply__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UIToolkitInteroperabilityBridge_StartTrackingPanel__)
    ;
    FUN_02b3c81c(Method_System_UInt16_CompareTo__);
    FUN_02b3c81c(Method_System_ComponentModel_TypeDescriptionProvider_CreateInstance__);
    FUN_02b3c81c(Method_System_TypedReference_SetTypedReference__);
    FUN_02b3c81c(Method_System_UInt16_Parse__);
    DAT_066db8c5 = 1;
  }
  plVar9 = *(long **)(param_1 + 0xa8);
  if (plVar9 != (long *)0x0) {
    iVar7 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    plVar9 = *(long **)(param_1 + 0xa8);
    *(float *)(param_1 + 0xb0) = (float)iVar7;
    if (plVar9 != (long *)0x0) {
      iVar7 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
      plVar9 = (long *)(param_1 + 0x40);
      *(float *)(param_1 + 0xb4) = (float)iVar7;
      if (*plVar9 == 0) {
        lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                     Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq256>__
                                   );
        FUN_045ce6b8(lVar10,*(undefined8 *)
                             Method_UnityEngine_Rendering_ConstantBuffer_Push<ProbeReferenceVolume_CellStreamingScratchBufferLayout>__
                    );
        *plVar9 = lVar10;
        thunk_FUN_02bb0e9c(plVar9,lVar10);
      }
      else {
        FUN_045cf5c0(*plVar9,*(undefined8 *)Method_System_ConsoleCancelEventArgs__ctor__);
      }
      plVar14 = (long *)(param_1 + 0xd0);
      if (*plVar14 == 0) {
        lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                     Method_UnityEngine_UIElements_UIToolkitInteroperabilityBridge_StartTrackingPanel__
                                   );
        FUN_045e0318(lVar10,*(undefined8 *)
                             Method_UnityEngine_UIElements_UITKTextJobSystem_GenerateTextJobified__)
        ;
        *plVar14 = lVar10;
        thunk_FUN_02bb0e9c(plVar14,lVar10);
      }
      else {
        FUN_045e1240(*plVar14,*(undefined8 *)
                               Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnEngineUpdateGlobal__
                    );
      }
      puVar6 = Method_System_UInt16_Parse__;
      puVar5 = Method_UnityEngine_UIElements_UITKTextHandle_GetICUAsset__;
      puVar4 = Method_System_TypedReference_SetTypedReference__;
      puVar3 = Method_System_ConsoleKeyInfo__ctor__;
      puVar2 = Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_ToggleCollapseMode__;
      lVar10 = *(long *)(param_1 + 200);
      if (lVar10 != 0) {
        iVar7 = 0;
        do {
          if (*(int *)(lVar10 + 0x18) <= iVar7) {
            plVar9 = (long *)(param_1 + 0x38);
            if (*plVar9 == 0) {
              lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                           System_Reflection_SignaturePointerType_TypeInfo);
              FUN_0444dc30(lVar10,*(undefined8 *)System_Reflection_SignatureType_TypeInfo);
              *plVar9 = lVar10;
              thunk_FUN_02bb0e9c(plVar9,lVar10);
            }
            else {
              FUN_0444eb38(*plVar9,*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          );
            }
            puVar2 = Method_UnityEngine_UIElements_UITKTextJobSystem_PrepareTextJobified__;
            plVar15 = (long *)(param_1 + 0xc0);
            if (*plVar15 == 0) {
              lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                           Method_UnityEngine_UIElements_UIToolkitInteroperabilityBridge_Apply__
                                         );
              FUN_045e0318(lVar10,*(undefined8 *)
                                   Method_UnityEngine_UIElements_UITKTextJobSystem_OnGetManagedJob__
                          );
              *plVar15 = lVar10;
              thunk_FUN_02bb0e9c(plVar15,lVar10);
            }
            else {
              FUN_045e1240(*plVar15,*(undefined8 *)
                                     Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__
                          );
            }
            lVar10 = *(long *)(param_1 + 0xb8);
            if (lVar10 != 0) {
              iVar7 = 0;
              goto LAB_05d6fe18;
            }
            break;
          }
          lVar10 = FUN_037a6268(lVar10,iVar7,*(undefined8 *)puVar6);
          if (lVar10 == 0) break;
          uVar8 = FUN_05d3dd8c(lVar10,0);
          if (*plVar9 == 0) break;
          uVar11 = FUN_045cf62c(*plVar9,uVar8,*(undefined8 *)puVar3);
          if ((uVar11 & 1) == 0) {
            if (*plVar9 == 0) break;
            FUN_045cf440(*plVar9,uVar8,iVar7,*(undefined8 *)puVar2);
          }
          if (*plVar14 == 0) break;
          uVar11 = FUN_045e12ac(*plVar14,uVar8,*(undefined8 *)puVar5);
          if ((uVar11 & 1) == 0) {
            if (*plVar14 == 0) break;
            FUN_045e10b8(*plVar14,uVar8,lVar10,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_UIR_UIRenderDevice_DrawRanges__);
          }
          lVar10 = *(long *)(param_1 + 200);
          iVar7 = iVar7 + 1;
        } while (lVar10 != 0);
      }
    }
  }
  goto LAB_05d6ff64;
LAB_05d6fe18:
  do {
    if (*(int *)(lVar10 + 0x18) <= iVar7) {
      *(undefined1 *)(param_1 + 0xe0) = 0;
      return;
    }
    lVar10 = FUN_037a6268(lVar10,iVar7,*(undefined8 *)puVar4);
    if (lVar10 != 0) {
      if (*plVar14 == 0) break;
      uVar8 = *(undefined4 *)(lVar10 + 0x28);
      uVar11 = FUN_045e12ac(*plVar14,uVar8,*(undefined8 *)puVar5);
      if ((uVar11 & 1) != 0) {
        if (*plVar14 == 0) break;
        uVar12 = FUN_045e1018(*plVar14,uVar8,*(undefined8 *)puVar2);
        *(undefined8 *)(lVar10 + 0x20) = uVar12;
        thunk_FUN_02bb0e9c();
        *(long *)(lVar10 + 0x18) = param_1;
        thunk_FUN_02bb0e9c((long *)(lVar10 + 0x18),param_1);
        if ((*(long *)(param_1 + 0xb8) == 0) ||
           (lVar13 = FUN_037a6268(*(long *)(param_1 + 0xb8),iVar7,*(undefined8 *)puVar4),
           lVar13 == 0)) break;
        uVar8 = FUN_05d81ec4(*(undefined8 *)(lVar13 + 0x30),0);
        if (*plVar9 == 0) break;
        uVar11 = FUN_0444eba4(*plVar9,uVar8,
                              *(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<bool>_ReadBoolValue__
                             );
        if ((uVar11 & 1) == 0) {
          if (*plVar9 == 0) break;
          FUN_0444e9b8(*plVar9,uVar8,iVar7,*(undefined8 *)Pico_Platform_Models_SpeechError_TypeInfo)
          ;
        }
        if ((*(long *)(param_1 + 0xb8) == 0) ||
           (lVar13 = FUN_037a6268(*(long *)(param_1 + 0xb8),iVar7,*(undefined8 *)puVar4),
           lVar13 == 0)) break;
        iVar1 = *(int *)(lVar13 + 0x14);
        if (iVar1 != 0xfffe) {
          if (*plVar15 == 0) break;
          uVar11 = FUN_045e12ac(*plVar15,iVar1,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UITKTextJobSystem_AddDrawEntries__);
          if ((uVar11 & 1) == 0) {
            if (*plVar15 == 0) break;
            FUN_045e10b8(*plVar15,iVar1,lVar10,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_UIR_UIRenderDevice_EvaluateChain__);
          }
        }
      }
    }
    lVar10 = *(long *)(param_1 + 0xb8);
    iVar7 = iVar7 + 1;
  } while (lVar10 != 0);
LAB_05d6ff64:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


