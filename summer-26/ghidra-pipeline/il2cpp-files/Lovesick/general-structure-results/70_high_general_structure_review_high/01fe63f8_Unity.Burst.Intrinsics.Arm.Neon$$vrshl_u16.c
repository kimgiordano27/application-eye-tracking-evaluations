/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vrshl_u16
ENTRY_POINT: 01fe63f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long Unity_Burst_Intrinsics_Arm_Neon__vrshl_u16(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x24;
  undefined8 uVar13;
  long unaff_x25;
  long *unaff_x28;
  double dVar14;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  
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
  thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo);
  thunk_FUN_00d48444(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
  thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(StringLiteral_3287);
  thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInParent<HandGrabAPI>__);
  thunk_FUN_00d48444(Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_OnDisable__);
  *(undefined1 *)(unaff_x25 + 0x7dc) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000058 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  uVar13 = *unaff_x24;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = StringLiteral_8955;
  puVar2 = Newtonsoft_Json_Linq_JToken_TypeInfo;
  FUN_01780344(uVar13,0);
  uVar5 = FUN_01789ac0();
  if (((unaff_x20 != (long *)0x0) && ((uVar5 & 1) != 0)) && (*unaff_x20 == *(long *)puVar4)) {
    puVar7 = (undefined8 *)thunk_FUN_00d624a0();
    uVar12 = puVar7[1];
    uVar13 = *puVar7;
    lVar6 = *(long *)puVar4;
    in_stack_00000040 = uVar13;
    in_stack_00000048 = uVar12;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar4;
    }
    uVar5 = FUN_01755894(uVar13,uVar12,**(undefined8 **)(lVar6 + 0xb8),
                         (*(undefined8 **)(lVar6 + 0xb8))[1],0);
    puVar3 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    puVar1 = PTR_DAT_033ed3b8;
    if ((uVar5 & 1) != 0) {
      return **(long **)(*(long *)
                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                        + 0xb8);
    }
    if (unaff_x19 == (long *)0x0) {
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      unaff_x19 = (long *)FUN_017319b4(0);
    }
    uVar13 = *(undefined8 *)puVar1;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01780344(uVar13,0);
    if (unaff_x19 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*unaff_x19 + 0x268))
                                 (unaff_x19,uVar13,*(undefined8 *)(*unaff_x19 + 0x270));
      if ((plVar8 != (long *)0x0) &&
         (*plVar8 !=
          *(long *)Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar8);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar11 = (long *)FUN_01731954(0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      in_stack_00000058 = FUN_01752fc0(&stack0x00000040,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      dVar14 = (double)FUN_01788a00(&stack0x00000058,0);
      puVar2 = Method_UnityEngine_Component_GetComponentInParent<HandGrabAPI>__;
      if (unaff_x19 == plVar11) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (dVar14 != 0.0) {
          lVar6 = FUN_01754ad4(&stack0x00000040,unaff_x19,0);
          return lVar6;
        }
        uVar13 = *(undefined8 *)Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_OnDisable__;
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_01fe6ec0;
        uVar13 = FUN_0170f604(plVar8,0);
        puVar1 = StringLiteral_3287;
        if (dVar14 == 0.0) {
          uVar13 = FUN_015f5b28(uVar13,*(undefined8 *)puVar2,0);
        }
        else {
          uVar12 = FUN_0170f694(plVar8,0);
          uVar13 = FUN_0160073c(uVar13,*(undefined8 *)puVar1,uVar12,*(undefined8 *)puVar2,0);
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        unaff_x19 = (long *)FUN_017319b4(0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar4);
        }
      }
      lVar6 = FUN_01754b94(&stack0x00000040,uVar13,unaff_x19,0);
      return lVar6;
    }
    goto LAB_01fe6ec0;
  }
  uVar13 = *(undefined8 *)StringLiteral_10757;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01780344(uVar13,0);
  uVar5 = FUN_01789ac0();
  if (((unaff_x20 == (long *)0x0) || ((uVar5 & 1) == 0)) || (*unaff_x20 != *(long *)puVar4)) {
LAB_01fe6574:
    lVar6 = FUN_01ff79f8();
  }
  else {
    puVar7 = (undefined8 *)thunk_FUN_00d624a0();
    in_stack_00000038 = puVar7[1];
    in_stack_00000030 = *puVar7;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar7 = (undefined8 *)Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
    puVar2 = PTR_DAT_033f3f28;
    lVar6 = FUN_01752f28(&stack0x00000030,0);
    puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
    if (lVar6 == 0) {
      uVar13 = *(undefined8 *)puVar2;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = FUN_01780344(uVar13,0);
      plVar8 = (long *)FUN_00da4fb8(*puVar7,1);
      lVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
      if (plVar8 == (long *)0x0) goto LAB_01fe6ec0;
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if ((int)plVar8[3] == 0) goto LAB_01fe6eb0;
      plVar8[4] = lVar9;
      if (lVar6 == 0) goto LAB_01fe6ec0;
      uVar13 = FUN_0178c180(lVar6,plVar8,0);
      puVar7 = (undefined8 *)Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
      if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)System_Xml_XmlDeclaration_TypeInfo);
      }
      uVar5 = FUN_016aa83c(uVar13,0,0);
      puVar1 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
      if ((uVar5 & 1) == 0) goto LAB_01fe67a8;
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      in_stack_00000028 = FUN_01752f28(&stack0x00000030,0);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000028);
      if (plVar8 == (long *)0x0) goto LAB_01fe6ec0;
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01fe6eb4;
      if ((int)plVar8[3] == 0) goto LAB_01fe6eb0;
      plVar8[4] = lVar6;
    }
    else {
LAB_01fe67a8:
      puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
      uVar13 = *(undefined8 *)puVar2;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = FUN_01780344(uVar13,0);
      plVar8 = (long *)FUN_00da4fb8(*puVar7,8);
      lVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
      puVar2 = Newtonsoft_Json_Linq_JToken_TypeInfo;
      if (plVar8 == (long *)0x0) goto LAB_01fe6ec0;
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_01fe6eb4:
        uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar13,0);
      }
      if ((int)plVar8[3] == 0) {
LAB_01fe6eb0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar8[4] = lVar9;
      lVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 2) goto LAB_01fe6eb0;
      plVar8[5] = lVar9;
      lVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 3) goto LAB_01fe6eb0;
      plVar8[6] = lVar9;
      lVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 4) goto LAB_01fe6eb0;
      plVar8[7] = lVar9;
      lVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 5) goto LAB_01fe6eb0;
      plVar8[8] = lVar9;
      lVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 6) goto LAB_01fe6eb0;
      plVar8[9] = lVar9;
      lVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      puVar1 = System_Security_Principal_WindowsImpersonationContext_TypeInfo;
      if (*(uint *)(plVar8 + 3) < 7) goto LAB_01fe6eb0;
      plVar8[10] = lVar9;
      lVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 8) goto LAB_01fe6eb0;
      plVar8[0xb] = lVar9;
      if (lVar6 == 0) goto LAB_01fe6ec0;
      uVar13 = FUN_0178c180(lVar6,plVar8,0);
      if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)System_Xml_XmlDeclaration_TypeInfo);
      }
      uVar5 = FUN_016aa83c(uVar13,0,0);
      puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      if ((uVar5 & 1) == 0) goto LAB_01fe6574;
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,8);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      uStack0000000000000024 = FUN_01753058(&stack0x00000030,0);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,(long)&stack0x00000020 + 4);
      if (plVar8 == (long *)0x0) goto LAB_01fe6ec0;
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01fe6eb4;
      if ((int)plVar8[3] == 0) goto LAB_01fe6eb0;
      plVar8[4] = lVar6;
      uStack0000000000000020 = FUN_01752df8(&stack0x00000030,0);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000020);
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 2) goto LAB_01fe6eb0;
      plVar8[5] = lVar6;
      uStack000000000000001c = FUN_01752b98(&stack0x00000030,0);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,(long)&stack0x00000018 + 4);
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 3) goto LAB_01fe6eb0;
      plVar8[6] = lVar6;
      uStack0000000000000018 = FUN_01752c30(&stack0x00000030,0);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000018);
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 4) goto LAB_01fe6eb0;
      plVar8[7] = lVar6;
      uStack0000000000000014 = FUN_01752d60(&stack0x00000030,0);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,(long)&stack0x00000010 + 4);
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 5) goto LAB_01fe6eb0;
      plVar8[8] = lVar6;
      uStack0000000000000010 = FUN_01752e90(&stack0x00000030,0);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000010);
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 6) goto LAB_01fe6eb0;
      plVar8[9] = lVar6;
      in_stack_00000008._4_4_ = FUN_01752cc8(&stack0x00000030,0);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 7) goto LAB_01fe6eb0;
      plVar8[10] = lVar6;
      in_stack_00000028 = FUN_01752b6c(&stack0x00000030,0);
      lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000028);
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01fe6eb4;
      if (*(uint *)(plVar8 + 3) < 8) goto LAB_01fe6eb0;
      plVar8[0xb] = lVar6;
    }
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3680);
    if (lVar6 == 0) {
LAB_01fe6ec0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0200789c(lVar6,uVar13,plVar8,0);
  }
  return lVar6;
}


