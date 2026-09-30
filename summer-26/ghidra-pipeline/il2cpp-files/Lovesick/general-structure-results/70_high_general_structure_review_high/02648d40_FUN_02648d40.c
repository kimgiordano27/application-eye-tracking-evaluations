/*
FUNCTION_NAME: FUN_02648d40
ENTRY_POINT: 02648d40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


long * FUN_02648d40(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined2 *puVar18;
  long lVar19;
  long *plVar20;
  undefined1 *puVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_38;
  
  if ((DAT_03783891 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_IWitWebSocketRequest>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_RCG_Tools_ScreenFade_FadeOutWithTime__);
    thunk_FUN_00d48444(Method_System_Xml_ValidateNames_SplitQName__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcleq_s64__);
    thunk_FUN_00d48444(StringLiteral_8151);
    thunk_FUN_00d48444(StringLiteral_13349);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Tween,_TweenLink>__ctor__);
    thunk_FUN_00d48444(
                      Method_Oculus_Platform_BuildingBlocks_EntitlementCheck_EntitlementCheckCallback__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_lane_f64__);
    thunk_FUN_00d48444(PTR_DAT_033f3a30);
    thunk_FUN_00d48444(Method_System_ComponentModel_CultureInfoConverter_ConvertTo__);
    thunk_FUN_00d48444(StringLiteral_3935);
    DAT_03783891 = 1;
  }
  puVar10 = Method_System_Xml_ValidateNames_SplitQName__;
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar15 = thunk_FUN_00d93c64(param_1,0);
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar10);
  }
  puVar11 = StringLiteral_3033;
  puVar10 = Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
  ;
  if (lVar15 == 0) goto LAB_026495cc;
  uVar16 = FUN_0178c0dc(lVar15,0);
  puVar14 = StringLiteral_13349;
  puVar13 = StringLiteral_9958;
  puVar12 = StringLiteral_7239;
  puVar9 = Method_System_Data_Common_UInt32Storage_Aggregate__;
  puVar8 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  puVar7 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
  puVar6 = Newtonsoft_Json_JsonReader_State_TypeInfo;
  puVar5 = System_Runtime_InteropServices_InAttribute_TypeInfo;
  puVar4 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  puVar3 = PTR_DAT_033f2f78;
  if ((uVar16 & 1) == 0) {
    lVar15 = *param_1;
    if (lVar15 != *(long *)
                   System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
      bVar1 = *(byte *)(lVar15 + 300);
      bVar2 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__ + 300);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__)) {
        bVar2 = *(byte *)(*(long *)puVar10 + 300);
        if ((bVar2 <= bVar1) &&
           (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar10)) {
          return param_1;
        }
        bVar2 = *(byte *)(*(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo +
                         300);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo)) {
          bVar2 = *(byte *)(*(long *)
                             System_Collections_Generic_Dictionary<string,_IWitWebSocketRequest>_TypeInfo
                           + 300);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)System_Collections_Generic_Dictionary<string,_IWitWebSocketRequest>_TypeInfo)
             ) {
            if (lVar15 != *(long *)Method_RCG_Tools_ScreenFade_FadeOutWithTime__) {
LAB_026495ec:
              plVar17 = (long *)thunk_FUN_00d93c64(param_1,0);
              uVar26 = thunk_FUN_00d48444(StringLiteral_12405);
              if (plVar17 == (long *)0x0) {
                uVar25 = 0;
              }
              else {
                uVar26 = thunk_FUN_00d48444(StringLiteral_12405);
                uVar25 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
              }
              uVar24 = thunk_FUN_00d48444(
                                         Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                         );
              uVar26 = FUN_01600424(uVar26,uVar25,uVar24,0);
              thunk_FUN_00d48444(
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                                );
              uVar25 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              FUN_017a9608(uVar25,uVar26,0);
              uVar26 = thunk_FUN_00d48444(StringLiteral_9305);
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar25,uVar26);
            }
            FUN_0264c91c(param_1);
          }
          else {
            FUN_02649698(param_1);
          }
        }
        else {
          FUN_0264d420(param_1);
        }
        plVar17 = (long *)FUN_0264a664();
        return plVar17;
      }
      if (param_1[3] != 0) {
        uVar26 = *(undefined8 *)(param_1[3] + 0x18);
        plVar17 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar10);
        if (plVar17 != (long *)0x0) {
          FUN_0264b94c(plVar17,uVar26);
          return plVar17;
        }
      }
      goto LAB_026495cc;
    }
    plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)puVar11,1);
    if (plVar17 == (long *)0x0) goto LAB_026495cc;
    if (*param_1 != *(long *)puVar4) {
LAB_026495d0:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_1);
    }
    lVar15 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*plVar17 + 0x40));
    if (lVar15 == 0) goto LAB_026495dc;
    if (*param_1 != *(long *)puVar4) goto LAB_026495d0;
    if ((int)plVar17[3] == 0) goto LAB_026495d8;
    plVar17[4] = (long)param_1;
    plVar20 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar10);
    puVar23 = (undefined8 *)Method_System_Collections_Generic_Dictionary<Tween,_TweenLink>__ctor__;
  }
  else {
    lVar15 = *param_1;
    if (lVar15 == *(long *)Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
       ) {
      plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)puVar11,1);
      if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar8 + 0x40)) goto LAB_026495d0;
      puVar22 = (undefined4 *)thunk_FUN_00d624a0(param_1);
      local_38 = CONCAT44(local_38._4_4_,*puVar22);
      lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar8,&local_38);
      if (plVar17 == (long *)0x0) goto LAB_026495cc;
      if ((lVar15 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0)) {
LAB_026495dc:
        uVar26 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar26,0);
      }
      if ((int)plVar17[3] == 0) {
LAB_026495d8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar17[4] = lVar15;
      plVar20 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar10);
      puVar23 = (undefined8 *)StringLiteral_3935;
    }
    else if (lVar15 == *(long *)StringLiteral_9958) {
      plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)puVar11,1);
      if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar13 + 0x40)) goto LAB_026495d0;
      puVar21 = (undefined1 *)thunk_FUN_00d624a0(param_1);
      local_38 = CONCAT71(local_38._1_7_,*puVar21);
      lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar13,&local_38);
      if (plVar17 == (long *)0x0) goto LAB_026495cc;
      if ((lVar15 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
      goto LAB_026495dc;
      if ((int)plVar17[3] == 0) goto LAB_026495d8;
      plVar17[4] = lVar15;
      plVar20 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar10);
      puVar23 = (undefined8 *)StringLiteral_8151;
    }
    else {
      if ((lVar15 == *(long *)UnityEngine_Texture2D___TypeInfo) ||
         (lVar15 == *(long *)StringLiteral_7239)) {
        plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)puVar11,1);
        if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar12 + 0x40)) goto LAB_026495d0;
        puVar21 = (undefined1 *)thunk_FUN_00d624a0(param_1);
        local_38 = CONCAT71(local_38._1_7_,*puVar21);
        lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar12,&local_38);
        if (plVar17 == (long *)0x0) goto LAB_026495cc;
        if ((lVar15 != 0) &&
           (lVar19 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
        goto LAB_026495dc;
        if ((int)plVar17[3] == 0) goto LAB_026495d8;
        plVar17[4] = lVar15;
        plVar20 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar10);
        if (plVar20 == (long *)0x0) goto LAB_026495cc;
        uVar26 = *(undefined8 *)puVar14;
        goto LAB_02649328;
      }
      if (lVar15 == *(long *)Method_System_Data_Common_UInt32Storage_Aggregate__) {
        plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)puVar11,1);
        if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar9 + 0x40)) goto LAB_026495d0;
        puVar18 = (undefined2 *)thunk_FUN_00d624a0(param_1);
        local_38 = CONCAT62(local_38._2_6_,*puVar18);
        lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar9,&local_38);
        if (plVar17 == (long *)0x0) goto LAB_026495cc;
        if ((lVar15 != 0) &&
           (lVar19 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
        goto LAB_026495dc;
        if ((int)plVar17[3] == 0) goto LAB_026495d8;
        plVar17[4] = lVar15;
        plVar20 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar10);
        puVar23 = (undefined8 *)
                  Method_Oculus_Platform_BuildingBlocks_EntitlementCheck_EntitlementCheckCallback__;
      }
      else if (lVar15 == *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo) {
        plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)puVar11,1);
        if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) goto LAB_026495d0;
        puVar23 = (undefined8 *)thunk_FUN_00d624a0(param_1);
        local_38 = *puVar23;
        lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar7,&local_38);
        if (plVar17 == (long *)0x0) goto LAB_026495cc;
        if ((lVar15 != 0) &&
           (lVar19 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
        goto LAB_026495dc;
        if ((int)plVar17[3] == 0) goto LAB_026495d8;
        plVar17[4] = lVar15;
        plVar20 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar10);
        puVar23 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_lane_f64__;
      }
      else if (lVar15 == *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo) {
        plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)puVar11,1);
        if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) goto LAB_026495d0;
        puVar22 = (undefined4 *)thunk_FUN_00d624a0(param_1);
        local_38 = CONCAT44(local_38._4_4_,*puVar22);
        lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_38);
        if (plVar17 == (long *)0x0) goto LAB_026495cc;
        if ((lVar15 != 0) &&
           (lVar19 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
        goto LAB_026495dc;
        if ((int)plVar17[3] == 0) goto LAB_026495d8;
        plVar17[4] = lVar15;
        plVar20 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar10);
        puVar23 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcleq_s64__;
      }
      else if (lVar15 == *(long *)PTR_DAT_033f2f78) {
        plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)puVar11,1);
        if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_026495d0;
        puVar23 = (undefined8 *)thunk_FUN_00d624a0(param_1);
        local_38 = *puVar23;
        lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_38);
        if (plVar17 == (long *)0x0) goto LAB_026495cc;
        if ((lVar15 != 0) &&
           (lVar19 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
        goto LAB_026495dc;
        if ((int)plVar17[3] == 0) goto LAB_026495d8;
        plVar17[4] = lVar15;
        plVar20 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar10);
        puVar23 = (undefined8 *)Method_System_ComponentModel_CultureInfoConverter_ConvertTo__;
      }
      else {
        if (lVar15 != *(long *)Newtonsoft_Json_JsonReader_State_TypeInfo) goto LAB_026495ec;
        plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)puVar11,1);
        if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) goto LAB_026495d0;
        puVar18 = (undefined2 *)thunk_FUN_00d624a0(param_1);
        local_38 = CONCAT62(local_38._2_6_,*puVar18);
        lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_38);
        if (plVar17 == (long *)0x0) goto LAB_026495cc;
        if ((lVar15 != 0) &&
           (lVar19 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
        goto LAB_026495dc;
        if ((int)plVar17[3] == 0) goto LAB_026495d8;
        plVar17[4] = lVar15;
        plVar20 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar10);
        puVar23 = (undefined8 *)PTR_DAT_033f3a30;
      }
    }
  }
  if (plVar20 != (long *)0x0) {
    uVar26 = *puVar23;
LAB_02649328:
    FUN_017b46ec(plVar20,0);
    FUN_0264aae4(plVar20,uVar26,plVar17);
    return plVar20;
  }
LAB_026495cc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


