/*
FUNCTION_NAME: FUN_061a2c5c
ENTRY_POINT: 061a2c5c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_061a2c5c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  
  puVar2 = PTR_DAT_069fb990;
  if ((DAT_06dc69a2 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateBuffers_GetDoubleBuffersFor__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateBuffers_NextDeviceOffset__);
    FUN_02d965b8(PTR_DAT_069fecf8);
    FUN_02d965b8(Method_Unity_Collections_NativeReference<RelayNetworkParameter>_Dispose__);
    FUN_02d965b8(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>__ctor__);
    FUN_02d965b8(Method_Oculus_Platform_Message<AppDownloadProgressResult>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>_Dispose__)
    ;
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_GetRecord__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_RecordStateChange__);
    FUN_02d965b8(
                Method_Unity_Collections_NativeReference<UnityTLSCallbacks_CallbackContext>_Dispose__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_RecordStateChange__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_get_Item__);
    FUN_02d965b8(PTR_DAT_069fecf0);
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_Item__);
    FUN_02d965b8(Method_Unity_Collections_NativeSlice<DrawBufferRange>_get_Length__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_extraMemoryPerRecord__
                );
    FUN_02d965b8(PTR_DAT_069fece8);
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_historyDepth__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_GetChildControl<TouchPhaseControl>__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_updateMask__);
    FUN_02d965b8(Method_Unity_Hierarchy_HierarchyViewModel_HasAllFlags__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputSystem_AddDevice<Touchscreen>__);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(Method_System_Net_HttpWebRequest_set_Method__);
    DAT_06dc69a2 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar8 = FUN_0634eb94(uVar11,0,0);
  if (((uVar8 & 1) != 0) &&
     (uVar8 = FUN_0536c9cc(*(undefined8 *)(param_1 + 0x18),0), (uVar8 & 1) != 0)) {
    FUN_061a32b8(param_1);
  }
  plVar13 = (long *)(param_1 + 0xa0);
  if (*plVar13 == 0) {
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_Unity_Collections_NativeSlice<DrawBufferRange>_get_Length__);
    FUN_04f7ead0(lVar9,*(undefined8 *)
                        Method_Unity_Collections_NativeReference<UnityTLSCallbacks_CallbackContext>_Dispose__
                );
    *plVar13 = lVar9;
    LeanTween__value(plVar13,lVar9);
  }
  else {
    FUN_04f7f9d8(*plVar13,*(undefined8 *)
                           Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>__ctor__
                );
  }
  plVar12 = (long *)(param_1 + 200);
  if (*plVar12 == 0) {
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_historyDepth__
                              );
    FUN_04f93df4(lVar9,*(undefined8 *)
                        Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_RecordStateChange__
                );
    *plVar12 = lVar9;
    LeanTween__value(plVar12,lVar9);
  }
  else {
    FUN_04f94d1c(*plVar12,*(undefined8 *)
                           Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
  }
  puVar6 = Method_UnityEngine_InputSystem_InputSystem_AddDevice<Touchscreen>__;
  puVar5 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_RecordStateChange__;
  puVar4 = Method_Unity_Hierarchy_HierarchyViewModel_HasAllFlags__;
  puVar3 = Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeReference<RelayNetworkParameter>_Dispose__;
  lVar9 = *(long *)(param_1 + 0xc0);
  if (lVar9 != 0) {
    iVar14 = 0;
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar14) {
        plVar13 = (long *)(param_1 + 0x98);
        if (*plVar13 == 0) {
          lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fece8);
          FUN_04d8b6bc(lVar9,*(undefined8 *)PTR_DAT_069fecf0);
          *plVar13 = lVar9;
          LeanTween__value(plVar13,lVar9);
        }
        else {
          FUN_04d8c5c4(*plVar13,*(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                      );
        }
        puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_Item__;
        plVar15 = (long *)(param_1 + 0xb8);
        if (*plVar15 == 0) {
          lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_extraMemoryPerRecord__
                                    );
          FUN_04f93df4(lVar9,*(undefined8 *)
                              Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_get_Item__);
          *plVar15 = lVar9;
          LeanTween__value(plVar15,lVar9);
        }
        else {
          FUN_04f94d1c(*plVar15,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
        }
        lVar9 = *(long *)(param_1 + 0xb0);
        if (lVar9 != 0) {
          iVar14 = 0;
          goto LAB_061a305c;
        }
        break;
      }
      lVar9 = FUN_0400ff1c(lVar9,iVar14,*(undefined8 *)puVar6);
      if (lVar9 == 0) break;
      uVar7 = FUN_063ed08c(lVar9,0);
      if (*plVar13 == 0) break;
      uVar8 = FUN_04f7fa44(*plVar13,uVar7,*(undefined8 *)puVar3);
      if ((uVar8 & 1) == 0) {
        if (*plVar13 == 0) break;
        FUN_04f7f858(*plVar13,uVar7,iVar14,*(undefined8 *)puVar2);
      }
      if (*plVar12 == 0) break;
      uVar8 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                        (*plVar12,uVar7,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
        if (*plVar12 == 0) break;
        FUN_04f94b94(*plVar12,uVar7,lVar9,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_LowLevel_InputStateBuffers_GetDoubleBuffersFor__
                    );
      }
      lVar9 = *(long *)(param_1 + 0xc0);
      iVar14 = iVar14 + 1;
    } while (lVar9 != 0);
  }
  goto LAB_061a31c8;
LAB_061a305c:
  do {
    if (*(int *)(lVar9 + 0x18) <= iVar14) {
      *(undefined1 *)(param_1 + 0xe0) = 0;
      return;
    }
    lVar9 = FUN_0400ff1c(lVar9,iVar14,*(undefined8 *)puVar4);
    if (lVar9 != 0) {
      if (*plVar12 == 0) break;
      uVar7 = *(undefined4 *)(lVar9 + 0x28);
      uVar8 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                        (*plVar12,uVar7,*(undefined8 *)puVar5);
      if ((uVar8 & 1) != 0) {
        if (*plVar12 == 0) break;
        uVar11 = FUN_04f94af4(*plVar12,uVar7,*(undefined8 *)puVar2);
        *(undefined8 *)(lVar9 + 0x20) = uVar11;
        LeanTween__value();
        *(long *)(lVar9 + 0x18) = param_1;
        LeanTween__value((long *)(lVar9 + 0x18),param_1);
        if ((*(long *)(param_1 + 0xb0) == 0) ||
           (lVar10 = FUN_0400ff1c(*(long *)(param_1 + 0xb0),iVar14,*(undefined8 *)puVar4),
           lVar10 == 0)) break;
        uVar11 = *(undefined8 *)(lVar10 + 0x30);
        if (*(int *)(*(long *)Method_System_Net_HttpWebRequest_set_Method__ + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar7 = FUN_061ace10(uVar11,0);
        if (*plVar13 == 0) break;
        uVar8 = FUN_04d8c630(*plVar13,uVar7,
                             *(undefined8 *)
                              Method_Oculus_Platform_Message<AppDownloadProgressResult>__ctor__);
        if ((uVar8 & 1) == 0) {
          if (*plVar13 == 0) break;
          FUN_04d8c444(*plVar13,uVar7,iVar14,*(undefined8 *)PTR_DAT_069fecf8);
        }
        if ((*(long *)(param_1 + 0xb0) == 0) ||
           (lVar10 = FUN_0400ff1c(*(long *)(param_1 + 0xb0),iVar14,*(undefined8 *)puVar4),
           lVar10 == 0)) break;
        iVar1 = *(int *)(lVar10 + 0x14);
        if (iVar1 != 0xfffe) {
          if (*plVar15 == 0) break;
          uVar8 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                            (*plVar15,iVar1,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_GetRecord__)
          ;
          if ((uVar8 & 1) == 0) {
            if (*plVar15 == 0) break;
            FUN_04f94b94(*plVar15,iVar1,lVar9,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_LowLevel_InputStateBuffers_NextDeviceOffset__
                        );
          }
        }
      }
    }
    lVar9 = *(long *)(param_1 + 0xb0);
    iVar14 = iVar14 + 1;
  } while (lVar9 != 0);
LAB_061a31c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


