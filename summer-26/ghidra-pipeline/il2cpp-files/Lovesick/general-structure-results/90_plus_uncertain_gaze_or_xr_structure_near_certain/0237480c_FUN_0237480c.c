/*
FUNCTION_NAME: FUN_0237480c
ENTRY_POINT: 0237480c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


long FUN_0237480c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined1 auVar18 [16];
  int local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = Method_System_Decimal_DecCalc_VarDecFromR4__;
  if ((DAT_03781dae & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f2b78);
    thunk_FUN_00d48444(Method_Sirenix_OdinInspector_ValueDropdownList<int>_Add__);
    thunk_FUN_00d48444(Method_System_TimeZoneInfo_<>c_<CreateLocalUnity>b__161_0__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_5__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Implicit__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_ProbeReferenceVolume_<RegisterDebug>b__119_14__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<HighlightState>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<CyclingWordSet>_AddListener__);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_EventSystem_CreateUIToolkitPanelGameObject__)
    ;
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                      );
    thunk_FUN_00d48444(StringLiteral_3420);
    thunk_FUN_00d48444(PTR_DAT_033eefc0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(UnityEngine_Bounds_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10117);
    thunk_FUN_00d48444(PTR_DAT_033f5fe8);
    thunk_FUN_00d48444(Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__);
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                      );
    thunk_FUN_00d48444(System_IEquatable<T>_var);
    thunk_FUN_00d48444(StringLiteral_2569);
    DAT_03781dae = 1;
  }
  puVar2 = PTR_DAT_033eefc0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = FUN_0233e5f4(param_1,param_2,0,0);
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar8 != 0) {
    FUN_012dd38c(lVar8,*(undefined8 *)StringLiteral_3420);
    puVar5 = StringLiteral_10117;
    puVar4 = Method_UnityEngine_EventSystems_EventSystem_CreateUIToolkitPanelGameObject__;
    puVar2 = Method_UnityEngine_Events_UnityEvent<CyclingWordSet>_AddListener__;
    puVar3 = Method_TMPro_TMP_TextProcessingStack<HighlightState>__ctor__;
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) < 1) {
        iVar17 = 0;
      }
      else {
        iVar14 = 0;
        iVar17 = 0;
        puVar16 = (undefined8 *)Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__;
        do {
          FUN_0132138c(lVar7,iVar14,&local_d8,*puVar16);
          if (CONCAT44(uStack_d4,local_d8) == 0) goto LAB_02374d44;
          uVar9 = FUN_012ddcec(lVar8,*(undefined8 *)(CONCAT44(uStack_d4,local_d8) + 0x20),
                               *(undefined8 *)puVar4);
          if ((uVar9 & 1) == 0) {
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Implicit__
                                       );
            if (lVar10 == 0) goto LAB_02374d44;
            FUN_01298da0(lVar10,*(undefined8 *)
                                 Method_System_TimeZoneInfo_<>c_<CreateLocalUnity>b__161_0__);
            FUN_0132138c(lVar7,iVar14,&local_d8,*puVar16);
            FUN_02374dbc(CONCAT44(uStack_d4,local_d8),1,lVar10);
            FUN_0129b5d0(lVar10,&local_d8,
                         *(undefined8 *)Method_Sirenix_OdinInspector_ValueDropdownList<int>_Add__);
            iVar15 = 0;
            uStack_88 = uStack_d0;
            uStack_78 = uStack_c0;
            uStack_80 = local_c8;
            local_70 = local_b8;
            while( true ) {
              uVar9 = FUN_012bf140(&local_90,*(undefined8 *)puVar3);
              if ((uVar9 & 1) == 0) break;
              auVar18 = FUN_00ca5690(&local_90,*(undefined8 *)puVar2);
              local_a0 = auVar18;
              uVar9 = FUN_00ca5798(local_a0,*(undefined8 *)puVar5);
              iVar1 = -1;
              if ((uVar9 & 1) != 0) {
                iVar1 = 1;
              }
              iVar15 = iVar1 + iVar15;
            }
            FUN_012bf83c(&local_90,
                         *(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_ProbeReferenceVolume_<RegisterDebug>b__119_14__
                        );
            FUN_0129b5d0(lVar10,&local_d8,
                         *(undefined8 *)Method_Sirenix_OdinInspector_ValueDropdownList<int>_Add__);
            local_90 = CONCAT44(uStack_d4,local_d8);
            uStack_88 = uStack_d0;
            uStack_78 = uStack_c0;
            uStack_80 = local_c8;
            local_70 = local_b8;
            while( true ) {
              uVar9 = FUN_012bf140(&local_90,*(undefined8 *)puVar3);
              if ((uVar9 & 1) == 0) break;
              auVar18 = FUN_00ca5690(&local_90,*(undefined8 *)puVar2);
              local_b0 = auVar18;
              bVar6 = FUN_00ca5798(local_b0,*(undefined8 *)puVar5);
              if (((iVar15 < 1 ^ bVar6) & 1) == 0) {
                iVar17 = iVar17 + 1;
                lVar11 = FUN_00ca58a8(local_b0,*(undefined8 *)UnityEngine_Bounds_TypeInfo);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_022fa1b4(lVar11,0);
              }
            }
            FUN_012bf83c(&local_90,
                         *(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_ProbeReferenceVolume_<RegisterDebug>b__119_14__
                        );
            puVar16 = (undefined8 *)Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__;
            uVar12 = FUN_012998a8(lVar10,*(undefined8 *)
                                          Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_5__
                                 );
            FUN_012df294(lVar8,uVar12,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                        );
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(lVar7 + 0x18));
      }
      puVar2 = 
      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
      ;
      puVar3 = PTR_DAT_033f2b78;
      if (iVar17 < 1) {
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f2b78);
        if (lVar7 != 0) {
          uVar13 = 3;
          uVar12 = *(undefined8 *)StringLiteral_2569;
          goto LAB_02374d18;
        }
      }
      else {
        if (iVar17 == 1) {
          uVar12 = *(undefined8 *)System_IEquatable<T>_var;
        }
        else {
          local_d8 = iVar17;
          uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      ,&local_d8);
          uVar12 = FUN_015f6780(*(undefined8 *)puVar2,uVar12,0);
        }
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar7 != 0) {
          uVar13 = 0;
LAB_02374d18:
          FUN_022ef9c0(lVar7,uVar13,uVar12,0);
          return lVar7;
        }
      }
    }
  }
LAB_02374d44:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


