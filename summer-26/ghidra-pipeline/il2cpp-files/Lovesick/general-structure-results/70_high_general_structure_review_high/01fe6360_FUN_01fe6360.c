/*
FUNCTION_NAME: FUN_01fe6360
ENTRY_POINT: 01fe6360
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_01fe6360(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if ((DAT_037807dc & 1) == 0) {
    thunk_FUN_00d48444(System_Xml_XmlDeclaration_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(PTR_DAT_033ed3b8);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__);
    thunk_FUN_00d48444(PTR_DAT_033f3f28);
    thunk_FUN_00d48444(StringLiteral_8955);
    thunk_FUN_00d48444(StringLiteral_10757);
    thunk_FUN_00d48444(StringLiteral_3680);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_3287);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInParent<HandGrabAPI>__);
    thunk_FUN_00d48444(Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_OnDisable__);
    DAT_037807dc = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uVar14 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar5 = StringLiteral_8955;
  puVar2 = Newtonsoft_Json_Linq_JToken_TypeInfo;
  uVar14 = FUN_01780344(uVar14,0);
  uVar6 = FUN_01789ac0(param_5,uVar14,0);
  if (((param_4 != (long *)0x0) && ((uVar6 & 1) != 0)) && (*param_4 == *(long *)puVar5)) {
    puVar8 = (undefined8 *)thunk_FUN_00d624a0(param_4);
    uVar13 = puVar8[1];
    uVar14 = *puVar8;
    lVar7 = *(long *)puVar5;
    local_80 = uVar14;
    uStack_78 = uVar13;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar5;
    }
    uVar6 = FUN_01755894(uVar14,uVar13,**(undefined8 **)(lVar7 + 0xb8),
                         (*(undefined8 **)(lVar7 + 0xb8))[1],0);
    puVar4 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    puVar1 = PTR_DAT_033ed3b8;
    if ((uVar6 & 1) != 0) {
      return **(long **)(*(long *)
                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                        + 0xb8);
    }
    if (param_3 == (long *)0x0) {
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      param_3 = (long *)FUN_017319b4(0);
    }
    uVar14 = *(undefined8 *)puVar1;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_01780344(uVar14,0);
    if (param_3 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*param_3 + 0x268))
                                 (param_3,uVar14,*(undefined8 *)(*param_3 + 0x270));
      if ((plVar9 != (long *)0x0) &&
         (*plVar9 !=
          *(long *)Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar12 = (long *)FUN_01731954(0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      local_68 = FUN_01752fc0(&local_80,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      dVar15 = (double)FUN_01788a00(&local_68,0);
      puVar2 = Method_UnityEngine_Component_GetComponentInParent<HandGrabAPI>__;
      if (param_3 == plVar12) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (dVar15 != 0.0) {
          lVar7 = FUN_01754ad4(&local_80,param_3,0);
          return lVar7;
        }
        uVar14 = *(undefined8 *)Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_OnDisable__;
      }
      else {
        if (plVar9 == (long *)0x0) goto LAB_01fe6ec0;
        uVar14 = FUN_0170f604(plVar9,0);
        puVar3 = StringLiteral_3287;
        if (dVar15 == 0.0) {
          uVar14 = FUN_015f5b28(uVar14,*(undefined8 *)puVar2,0);
        }
        else {
          uVar13 = FUN_0170f694(plVar9,0);
          uVar14 = FUN_0160073c(uVar14,*(undefined8 *)puVar3,uVar13,*(undefined8 *)puVar2,0);
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        param_3 = (long *)FUN_017319b4(0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar5);
        }
      }
      lVar7 = FUN_01754b94(&local_80,uVar14,param_3,0);
      return lVar7;
    }
    goto LAB_01fe6ec0;
  }
  uVar14 = *(undefined8 *)StringLiteral_10757;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_01780344(uVar14,0);
  uVar6 = FUN_01789ac0(param_5,uVar14,0);
  if (((param_4 == (long *)0x0) || ((uVar6 & 1) == 0)) || (*param_4 != *(long *)puVar5)) {
LAB_01fe6574:
    lVar7 = FUN_01ff79f8(param_1,param_2,param_3,param_4,param_5,0);
  }
  else {
    puVar8 = (undefined8 *)thunk_FUN_00d624a0(param_4);
    uStack_88 = puVar8[1];
    local_90 = *puVar8;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar8 = (undefined8 *)Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
    puVar2 = PTR_DAT_033f3f28;
    lVar7 = FUN_01752f28(&local_90,0);
    puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
    if (lVar7 == 0) {
      uVar14 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar7 = FUN_01780344(uVar14,0);
      plVar9 = (long *)FUN_00da4fb8(*puVar8,1);
      lVar10 = FUN_01780344(*(undefined8 *)puVar1,0);
      if (plVar9 == (long *)0x0) goto LAB_01fe6ec0;
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_01fe6eb4;
      if ((int)plVar9[3] == 0) goto LAB_01fe6eb0;
      plVar9[4] = lVar10;
      if (lVar7 == 0) goto LAB_01fe6ec0;
      uVar14 = FUN_0178c180(lVar7,plVar9,0);
      puVar8 = (undefined8 *)Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
      if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)System_Xml_XmlDeclaration_TypeInfo);
      }
      uVar6 = FUN_016aa83c(uVar14,0,0);
      puVar1 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
      if ((uVar6 & 1) == 0) goto LAB_01fe67a8;
      plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      local_98 = FUN_01752f28(&local_90,0);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_98);
      if (plVar9 == (long *)0x0) goto LAB_01fe6ec0;
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if ((int)plVar9[3] == 0) goto LAB_01fe6eb0;
      plVar9[4] = lVar7;
    }
    else {
LAB_01fe67a8:
      puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
      uVar14 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar7 = FUN_01780344(uVar14,0);
      plVar9 = (long *)FUN_00da4fb8(*puVar8,8);
      lVar10 = FUN_01780344(*(undefined8 *)puVar1,0);
      puVar2 = Newtonsoft_Json_Linq_JToken_TypeInfo;
      if (plVar9 == (long *)0x0) goto LAB_01fe6ec0;
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
LAB_01fe6eb4:
        uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar14,0);
      }
      if ((int)plVar9[3] == 0) {
LAB_01fe6eb0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar9[4] = lVar10;
      lVar10 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 2) goto LAB_01fe6eb0;
      plVar9[5] = lVar10;
      lVar10 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 3) goto LAB_01fe6eb0;
      plVar9[6] = lVar10;
      lVar10 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 4) goto LAB_01fe6eb0;
      plVar9[7] = lVar10;
      lVar10 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 5) goto LAB_01fe6eb0;
      plVar9[8] = lVar10;
      lVar10 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 6) goto LAB_01fe6eb0;
      plVar9[9] = lVar10;
      lVar10 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_01fe6eb4;
      puVar3 = System_Security_Principal_WindowsImpersonationContext_TypeInfo;
      if (*(uint *)(plVar9 + 3) < 7) goto LAB_01fe6eb0;
      plVar9[10] = lVar10;
      lVar10 = FUN_01780344(*(undefined8 *)puVar3,0);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 8) goto LAB_01fe6eb0;
      plVar9[0xb] = lVar10;
      if (lVar7 == 0) goto LAB_01fe6ec0;
      uVar14 = FUN_0178c180(lVar7,plVar9,0);
      if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)System_Xml_XmlDeclaration_TypeInfo);
      }
      uVar6 = FUN_016aa83c(uVar14,0,0);
      puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      if ((uVar6 & 1) == 0) goto LAB_01fe6574;
      plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,8);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      local_9c = FUN_01753058(&local_90,0);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_9c);
      if (plVar9 == (long *)0x0) goto LAB_01fe6ec0;
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if ((int)plVar9[3] == 0) goto LAB_01fe6eb0;
      plVar9[4] = lVar7;
      local_a0 = FUN_01752df8(&local_90,0);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_a0);
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 2) goto LAB_01fe6eb0;
      plVar9[5] = lVar7;
      local_a4 = FUN_01752b98(&local_90,0);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_a4);
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 3) goto LAB_01fe6eb0;
      plVar9[6] = lVar7;
      local_a8 = FUN_01752c30(&local_90,0);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_a8);
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 4) goto LAB_01fe6eb0;
      plVar9[7] = lVar7;
      local_ac = FUN_01752d60(&local_90,0);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_ac);
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 5) goto LAB_01fe6eb0;
      plVar9[8] = lVar7;
      local_b0 = FUN_01752e90(&local_90,0);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_b0);
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 6) goto LAB_01fe6eb0;
      plVar9[9] = lVar7;
      local_b4 = FUN_01752cc8(&local_90,0);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_b4);
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 7) goto LAB_01fe6eb0;
      plVar9[10] = lVar7;
      local_98 = FUN_01752b6c(&local_90,0);
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_98);
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar9 + 3) < 8) goto LAB_01fe6eb0;
      plVar9[0xb] = lVar7;
    }
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3680);
    if (lVar7 == 0) {
LAB_01fe6ec0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0200789c(lVar7,uVar14,plVar9,0);
  }
  return lVar7;
}


