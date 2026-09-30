/*
FUNCTION_NAME: VisualElementFocusRing_GetNextFocusable_m7358BA822D191DA17D02BF554585AFEF00AC1815
ENTRY_POINT: 044900ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 155
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21
*/


Il2CppObject *
VisualElementFocusRing_GetNextFocusable_m7358BA822D191DA17D02BF554585AFEF00AC1815
          (long param_1,Il2CppObject *param_2,Il2CppObject *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  Il2CppObject *pIVar9;
  VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD *pVVar10;
  undefined8 uVar11;
  void *pvVar12;
  List_1_tD83E9FC86E76D3E92623990C84D4238B8EA05D5B *pLVar13;
  Il2CppObject *local_58;
  int local_4c;
  
  puVar5 = PTR_List_1_get_Item_mAF806CF027C067E2D860C6CDD471231E83558A0D_RuntimeMethod_var_048d99d0;
  puVar4 = PTR_List_1_get_Count_m23B52A99235B313D224F8196857920B730F8C46F_RuntimeMethod_var_048d99c8
  ;
  puVar3 = 
  PTR_VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C_il2cpp_TypeInfo_var_048d9920
  ;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput_ActionEvent>_ToArray__
  ;
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  if ((VisualElementFocusRing_GetNextFocusable_m7358BA822D191DA17D02BF554585AFEF00AC1815::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput_ActionEvent>_ToArray__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD_il2cpp_TypeInfo_var_048d9928
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    VisualElementFocusRing_GetNextFocusable_m7358BA822D191DA17D02BF554585AFEF00AC1815::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pIVar9 = (Il2CppObject *)
           FocusChangeDirection_get_none_mF1681D2A13FA909305F76B62CABFAF3139B9A016_inline
                     ((MethodInfo *)0x0);
  if (param_3 == pIVar9) {
    bVar6 = true;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    pIVar9 = (Il2CppObject *)
             FocusChangeDirection_get_unspecified_m9FB894AACF20C8B223620A79F72B64B674DA4E96_inline
                       ((MethodInfo *)0x0);
    bVar6 = param_3 == pIVar9;
  }
  local_58 = param_2;
  if (!bVar6) {
    pVVar10 = (VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD *)
              IsInstClass(param_3,*(Il2CppClass **)
                                   PTR_VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD_il2cpp_TypeInfo_var_048d9928
                         );
    if (pVVar10 == (VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD *)0x0)
    {
      VisualElementFocusRing_DoUpdate_m1312CAF5B2C58E1AF126619B3F6F84740C77E738(param_1,0);
      pLVar13 = *(List_1_tD83E9FC86E76D3E92623990C84D4238B8EA05D5B **)(param_1 + 0x20);
      NullCheck(pLVar13);
      iVar8 = List_1_get_Count_m23B52A99235B313D224F8196857920B730F8C46F_inline
                        (pLVar13,*(MethodInfo **)puVar4);
      if (iVar8 == 0) {
        local_58 = (Il2CppObject *)0x0;
      }
      else {
        local_4c = 0;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        pIVar9 = (Il2CppObject *)
                 VisualElementFocusChangeDirection_get_right_m7ABCCCB1E11E601279097312838B4CB93AC9BD9F_inline
                           ((MethodInfo *)0x0);
        if (param_3 == pIVar9) {
          iVar8 = VisualElementFocusRing_GetFocusableInternalIndex_mA8306194D667BF7F69A77902CC4F98D2F3982006
                            (param_1,param_2,0);
          local_4c = il2cpp_codegen_add<int,int>(iVar8,1);
          if (param_2 == (Il2CppObject *)0x0 || local_4c != 0) {
            pLVar13 = *(List_1_tD83E9FC86E76D3E92623990C84D4238B8EA05D5B **)(param_1 + 0x20);
            NullCheck(pLVar13);
            iVar8 = List_1_get_Count_m23B52A99235B313D224F8196857920B730F8C46F_inline
                              (pLVar13,*(MethodInfo **)puVar4);
            if (local_4c == iVar8) {
              local_4c = 0;
            }
            do {
              pLVar13 = *(List_1_tD83E9FC86E76D3E92623990C84D4238B8EA05D5B **)(param_1 + 0x20);
              NullCheck(pLVar13);
              pvVar12 = (void *)List_1_get_Item_mAF806CF027C067E2D860C6CDD471231E83558A0D
                                          (pLVar13,local_4c,*(MethodInfo **)puVar5);
              NullCheck(pvVar12);
              pvVar12 = *(void **)((long)pvVar12 + 0x18);
              NullCheck(pvVar12);
              bVar7 = Focusable_get_delegatesFocus_m3EC6CEC9B7570A921855A9A91291FF4AA45D40AC
                                (pvVar12,0);
              if ((bVar7 & 1) == 0) goto LAB_04490908;
              local_4c = il2cpp_codegen_add<int,int>(local_4c,1);
              pLVar13 = *(List_1_tD83E9FC86E76D3E92623990C84D4238B8EA05D5B **)(param_1 + 0x20);
              NullCheck(pLVar13);
              iVar8 = List_1_get_Count_m23B52A99235B313D224F8196857920B730F8C46F_inline
                                (pLVar13,*(MethodInfo **)puVar4);
            } while (local_4c != iVar8);
            local_58 = (Il2CppObject *)0x0;
          }
          else {
            uVar11 = IsInstClass(param_2,*(Il2CppClass **)puVar1);
            local_58 = (Il2CppObject *)
                       VisualElementFocusRing_GetNextFocusableInTree_m2DE3EDCF07C0737702B0278DFCE2B2FC743D5BDF
                                 (uVar11,0);
          }
        }
        else {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
          pIVar9 = (Il2CppObject *)
                   VisualElementFocusChangeDirection_get_left_mC921347E5D037C1D96D254C565831368C7C00183_inline
                             ((MethodInfo *)0x0);
          if (param_3 == pIVar9) {
            iVar8 = VisualElementFocusRing_GetFocusableInternalIndex_mA8306194D667BF7F69A77902CC4F98D2F3982006
                              (param_1,param_2,0);
            local_4c = il2cpp_codegen_subtract<int,int>(iVar8,1);
            if (param_2 == (Il2CppObject *)0x0 || local_4c != -2) {
              if (local_4c < 0) {
                pLVar13 = *(List_1_tD83E9FC86E76D3E92623990C84D4238B8EA05D5B **)(param_1 + 0x20);
                NullCheck(pLVar13);
                iVar8 = List_1_get_Count_m23B52A99235B313D224F8196857920B730F8C46F_inline
                                  (pLVar13,*(MethodInfo **)puVar4);
                local_4c = il2cpp_codegen_subtract<int,int>(iVar8,1);
              }
              do {
                pLVar13 = *(List_1_tD83E9FC86E76D3E92623990C84D4238B8EA05D5B **)(param_1 + 0x20);
                NullCheck(pLVar13);
                pvVar12 = (void *)List_1_get_Item_mAF806CF027C067E2D860C6CDD471231E83558A0D
                                            (pLVar13,local_4c,*(MethodInfo **)puVar5);
                NullCheck(pvVar12);
                pvVar12 = *(void **)((long)pvVar12 + 0x18);
                NullCheck(pvVar12);
                bVar7 = Focusable_get_delegatesFocus_m3EC6CEC9B7570A921855A9A91291FF4AA45D40AC
                                  (pvVar12,0);
                if ((bVar7 & 1) == 0) goto LAB_04490908;
                local_4c = il2cpp_codegen_subtract<int,int>(local_4c,1);
              } while (local_4c != -1);
              local_58 = (Il2CppObject *)0x0;
            }
            else {
              uVar11 = IsInstClass(param_2,*(Il2CppClass **)puVar1);
              local_58 = (Il2CppObject *)
                         VisualElementFocusRing_GetPreviousFocusableInTree_m5C1CB229300F3255F36C40DDC60DB32451FB2400
                                   (uVar11,0);
            }
          }
          else {
LAB_04490908:
            pLVar13 = *(List_1_tD83E9FC86E76D3E92623990C84D4238B8EA05D5B **)(param_1 + 0x20);
            NullCheck(pLVar13);
            pvVar12 = (void *)List_1_get_Item_mAF806CF027C067E2D860C6CDD471231E83558A0D
                                        (pLVar13,local_4c,*(MethodInfo **)puVar5);
            NullCheck(pvVar12);
            local_58 = *(Il2CppObject **)((long)pvVar12 + 0x18);
          }
        }
      }
    }
    else {
      NullCheck(pVVar10);
      local_58 = (Il2CppObject *)
                 VisualElementFocusChangeTarget_get_target_mBA38952FC20D275B53503D14F2A8F9DE36586961_inline
                           (pVVar10,(MethodInfo *)0x0);
    }
  }
  return local_58;
}


