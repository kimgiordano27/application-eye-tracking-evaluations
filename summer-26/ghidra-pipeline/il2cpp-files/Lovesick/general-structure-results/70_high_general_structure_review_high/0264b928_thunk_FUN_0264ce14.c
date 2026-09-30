/*
FUNCTION_NAME: thunk_FUN_0264ce14
ENTRY_POINT: 0264b928
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_19;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3
*/


long thunk_FUN_0264ce14(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  
  if ((DAT_0378388e & 1) == 0) {
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
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f2ba0);
    thunk_FUN_00d48444(Sirenix_Serialization_WeakPrimitiveArrayFormatter_TypeInfo);
    DAT_0378388e = 1;
  }
  puVar3 = Sirenix_Serialization_WeakPrimitiveArrayFormatter_TypeInfo;
  if (param_1 == 0) {
LAB_0264d368:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar7 = thunk_FUN_00d93164(param_1,0,0);
  lVar8 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar7);
  puVar6 = Method_System_Xml_ValidateNames_SplitQName__;
  puVar5 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  puVar3 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  if (0 < (int)*(ulong *)(param_1 + 0x18)) {
    uVar17 = 0;
    uVar14 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    puVar18 = (undefined8 *)(lVar8 + 0x20);
    do {
      if (uVar14 <= uVar17) goto LAB_0264d344;
      plVar16 = *(long **)(param_1 + 0x20 + uVar17 * 8);
      if (plVar16 == (long *)0x0) {
        if (lVar8 == 0) goto LAB_0264d368;
        if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_0264d344;
        puVar15 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
LAB_0264d0d4:
        uVar10 = *puVar15;
LAB_0264d0d8:
        *puVar18 = uVar10;
      }
      else {
        lVar9 = thunk_FUN_00d93c64(plVar16,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar6);
        }
        if (lVar9 == 0) goto LAB_0264d368;
        uVar14 = FUN_0178c0dc(lVar9,0);
        if ((uVar14 & 1) == 0) {
          lVar9 = *plVar16;
          if (lVar9 == *(long *)puVar3) {
            if (lVar8 == 0) goto LAB_0264d368;
            uVar10 = FUN_02642474(plVar16);
          }
          else {
            bVar1 = *(byte *)(lVar9 + 300);
            bVar2 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__ +
                             300);
            if ((bVar2 <= bVar1) &&
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
                *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__)) {
              if ((lVar8 != 0) && (plVar16[3] != 0)) {
                if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_0264d344;
                uVar10 = *(undefined8 *)(plVar16[3] + 0x18);
                goto LAB_0264d0d8;
              }
              goto LAB_0264d368;
            }
            bVar2 = *(byte *)(*(long *)
                               Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
                             + 300);
            if ((bVar2 <= bVar1) &&
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
                *(long *)
                 Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
               )) {
              if (lVar8 != 0) {
                if ((DAT_03783880 & 1) == 0) {
                  thunk_FUN_00d48444(puVar5);
                  DAT_03783880 = 1;
                }
                if (plVar16[2] == 0) {
                  puVar15 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                }
                else {
                  puVar15 = (undefined8 *)(plVar16[2] + 0x18);
                }
                if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_0264d344;
                goto LAB_0264d0d4;
              }
              goto LAB_0264d368;
            }
            bVar2 = *(byte *)(*(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo
                             + 300);
            if ((bVar1 < bVar2) ||
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo)) {
              bVar2 = *(byte *)(*(long *)
                                 System_Collections_Generic_Dictionary<string,_IWitWebSocketRequest>_TypeInfo
                               + 300);
              if ((bVar1 < bVar2) ||
                 (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)
                   System_Collections_Generic_Dictionary<string,_IWitWebSocketRequest>_TypeInfo)) {
                if (lVar9 != *(long *)Method_RCG_Tools_ScreenFade_FadeOutWithTime__) {
                  plVar16 = (long *)thunk_FUN_00d93c64(plVar16,0);
                  uVar10 = thunk_FUN_00d48444(StringLiteral_12405);
                  if (plVar16 == (long *)0x0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar10 = thunk_FUN_00d48444(StringLiteral_12405);
                    uVar13 = (**(code **)(*plVar16 + 0x168))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                  }
                  uVar12 = thunk_FUN_00d48444(
                                             Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                             );
                  uVar10 = FUN_01600424(uVar10,uVar13,uVar12,0);
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                                    );
                  uVar13 = thunk_FUN_00d62348();
                  FUN_00ac2be8();
                  FUN_017a9608(uVar13,uVar10,0);
                  uVar10 = thunk_FUN_00d48444(StringLiteral_10376);
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar13,uVar10);
                }
                if (lVar8 == 0) goto LAB_0264d368;
                uVar10 = FUN_0264c91c(plVar16);
              }
              else {
                if (lVar8 == 0) goto LAB_0264d368;
                uVar10 = FUN_02649698(plVar16);
              }
            }
            else {
              if (lVar8 == 0) goto LAB_0264d368;
              uVar10 = FUN_0264d420(plVar16);
            }
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar17) {
LAB_0264d344:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          *puVar18 = uVar10;
        }
        else {
          if (*plVar16 != *(long *)puVar4) {
            lVar8 = FUN_0265251c();
            return lVar8;
          }
          if (lVar8 == 0) goto LAB_0264d368;
          puVar11 = (undefined4 *)thunk_FUN_00d624a0(plVar16);
          if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_0264d344;
          *(undefined4 *)puVar18 = *puVar11;
        }
      }
      uVar14 = (ulong)*(uint *)(param_1 + 0x18);
      uVar17 = uVar17 + 1;
      puVar18 = puVar18 + 1;
    } while ((long)uVar17 < (long)(int)*(uint *)(param_1 + 0x18));
  }
  return lVar8;
}


