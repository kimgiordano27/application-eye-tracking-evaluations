/*
FUNCTION_NAME: ColumnResizer_OnPointerDown_mC3AC83CA422D78FB32C810AFB57F8BBACF22798F
ENTRY_POINT: 0452f674
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void ColumnResizer_OnPointerDown_mC3AC83CA422D78FB32C810AFB57F8BBACF22798F
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               ColumnResizer_tA24C857E9E5A60F51969581DA49CE869DA2BF51A *param_4,
               Il2CppObject *param_5,undefined8 param_6)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar3;
  void *pvVar4;
  Columns_t487EAF3B634F6D919D58F1927099A8883964831B *pCVar5;
  ColumnLayout_tF0A72BFB169B3329F9720AF33516EBAFAB4400B4 *pCVar6;
  Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *pCVar7;
  MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D *pMVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_88;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_80;
  undefined8 local_68;
  undefined1 local_59;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_58;
  byte local_49;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_48;
  byte local_3a;
  byte local_39;
  undefined8 local_38;
  Il2CppObject *local_30;
  ColumnResizer_tA24C857E9E5A60F51969581DA49CE869DA2BF51A *local_28;
  
  local_38 = param_6;
  local_30 = param_5;
  local_28 = param_4;
  if ((ColumnResizer_OnPointerDown_mC3AC83CA422D78FB32C810AFB57F8BBACF22798F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_MultiColumnHeaderColumnResizePreview_t458501BAD22A312D1D88DC8B407C3C86C170688F_il2cpp_TypeInfo_var_048dbe40
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>_GetEnumerator__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_VisualElement_GetFirstAncestorOfType_TisMultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D_m38CC2657E237FB0947F40B2C8D089FDF6CFEAC8D_RuntimeMethod_var_048dbe30
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_VisualElement_GetFirstAncestorOfType_TisScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9_mE0ADD583A8530B35987719E9B3D877E5733DA35E_RuntimeMethod_var_048dbe38
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    ColumnResizer_OnPointerDown_mC3AC83CA422D78FB32C810AFB57F8BBACF22798F::s_Il2CppMethodInitialized
         = 1;
  }
  pIVar2 = local_30;
  local_3a = 0;
  local_48 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
  local_49 = 0;
  local_58 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
  local_59 = 0;
  local_68 = 0;
  local_39 = (byte)local_28[0x38] & 1;
  if (local_39 == 0) {
    local_3a = PointerManipulator_CanStartManipulation_m9D53C068740EA802585EA65B19AA4AC7B3251387
                         (local_28,local_30,0);
    pIVar2 = local_30;
    local_3a = local_3a & 1;
    if (local_3a != 0) {
      NullCheck(local_30);
      pIVar2 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,pIVar2);
      pVVar3 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
               IsInstClass(pIVar2,*(Il2CppClass **)
                                   Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__)
      ;
      local_48 = pVVar3;
      NullCheck(pVVar3);
      pvVar4 = (void *)VisualElement_GetFirstAncestorOfType_TisMultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D_m38CC2657E237FB0947F40B2C8D089FDF6CFEAC8D
                                 (pVVar3,*(MethodInfo **)
                                          PTR_VisualElement_GetFirstAncestorOfType_TisMultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D_m38CC2657E237FB0947F40B2C8D089FDF6CFEAC8D_RuntimeMethod_var_048dbe30
                                 );
      *(void **)(local_28 + 0x40) = pvVar4;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x40),pvVar4);
      pCVar7 = *(Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A **)(local_28 + 0x48);
      NullCheck(pCVar7);
      pCVar5 = (Columns_t487EAF3B634F6D919D58F1927099A8883964831B *)
               Column_get_collection_mD981141D4B7BA0B21C5BF6CCF356D0C18A9D5749_inline
                         (pCVar7,(MethodInfo *)0x0);
      NullCheck(pCVar5);
      bVar1 = Columns_get_resizePreview_mA232CE6F42EADD69CF172771FCF894CEE91E9535_inline
                        (pCVar5,(MethodInfo *)0x0);
      ColumnResizer_set_preview_mB6836147C91FA68A6A937ABD7BFD243233D36C62_inline
                (local_28,(bool)(bVar1 & 1),(MethodInfo *)0x0);
      bVar1 = ColumnResizer_get_preview_m12D3B74AD10459BB36874E8ADA4E576EAEC21295_inline
                        (local_28,(MethodInfo *)0x0);
      local_49 = bVar1 & 1;
      if ((bVar1 & 1) != 0) {
        local_59 = *(long *)(local_28 + 0x50) == 0;
        if ((bool)local_59) {
          pvVar4 = (void *)il2cpp_codegen_object_new
                                     (*(Il2CppClass **)
                                       PTR_MultiColumnHeaderColumnResizePreview_t458501BAD22A312D1D88DC8B407C3C86C170688F_il2cpp_TypeInfo_var_048dbe40
                                     );
          MultiColumnHeaderColumnResizePreview__ctor_mA5FF7A37545830D31855A82875CB2B6E82407443
                    (pvVar4,0);
          *(void **)(local_28 + 0x50) = pvVar4;
          Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x50),pvVar4);
        }
        pVVar3 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 **)(local_28 + 0x40);
        NullCheck(pVVar3);
        pvVar4 = (void *)VisualElement_GetFirstAncestorOfType_TisScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9_mE0ADD583A8530B35987719E9B3D877E5733DA35E
                                   (pVVar3,*(MethodInfo **)
                                            PTR_VisualElement_GetFirstAncestorOfType_TisScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9_mE0ADD583A8530B35987719E9B3D877E5733DA35E_RuntimeMethod_var_048dbe38
                                   );
        if (pvVar4 == (void *)0x0) {
          local_80 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
        }
        else {
          NullCheck(pvVar4);
          local_80 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
                     VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000(pvVar4,0);
        }
        if (local_80 == (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0) {
          pvVar4 = *(void **)(local_28 + 0x40);
          NullCheck(pvVar4);
          local_88 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
                     VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000(pvVar4,0);
        }
        else {
          local_88 = local_80;
        }
        local_58 = local_88;
        NullCheck(local_88);
        local_68 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                             (local_88,(MethodInfo *)0x0);
        Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648
                  (&local_68,*(undefined8 *)(local_28 + 0x50),0);
      }
      pMVar8 = *(MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D **)
                (local_28 + 0x40);
      NullCheck(pMVar8);
      pCVar6 = (ColumnLayout_tF0A72BFB169B3329F9720AF33516EBAFAB4400B4 *)
               UnityEngine_UIElements_VisualElement__get_contentRect(pMVar8,(MethodInfo *)0x0);
      ColumnResizer_set_columnLayout_m5916AA50ECF0D28DBA5362D27F6EFC2BAF3ACCEF_inline
                (local_28,pCVar6,(MethodInfo *)0x0);
      pIVar2 = local_30;
      pVVar3 = local_48;
      uVar9 = *(undefined8 *)(local_28 + 0x40);
      NullCheck(local_30);
      uVar10 = PointerEventBase_1_get_localPosition_m9E543CA223482A9514B0F78D60360D65EC8E3FD4_inline
                         ((PointerEventBase_1_t7591EB7533D2DA4AE63C7E535343F090911843C9 *)pIVar2,
                          *(MethodInfo **)
                           Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>_GetEnumerator__
                         );
      uVar10 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                         (uVar10,param_2,param_3,0);
      uVar10 = VisualElementExtensions_ChangeCoordinatesTo_m6FB5F30A653A5BA54E0C5BFBDE9602B83FFB8A20
                         (uVar10,pVVar3,uVar9,0);
      *(ulong *)(local_28 + 0x30) = CONCAT44(param_2,uVar10);
      ColumnResizer_BeginDragResize_m8209735AA2238E82C25AA891EA63D3AE6B24D820
                (*(undefined4 *)(local_28 + 0x30),local_28,0);
      local_28[0x38] = (ColumnResizer_tA24C857E9E5A60F51969581DA49CE869DA2BF51A)0x1;
      uVar9 = Manipulator_get_target_m2B0E5AA5012E1DCACBC74A10E582733128E7935B(local_28,0);
      MouseCaptureController_CaptureMouse_m7FCA4E12CE4CBC2E792ACE4ED9E6EB44D80F9A1C(uVar9,0);
      pIVar2 = local_30;
      NullCheck(local_30);
      EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB(pIVar2,0);
    }
  }
  else {
    NullCheck(local_30);
    EventBase_StopImmediatePropagation_m2D6646624DDC02AE96657F5EAD5BC0361380A8DA(pIVar2,0);
  }
  return;
}


