/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.MotionVectorRenderPass$$GetDrawingSettings
ENTRY_POINT: 0237490c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


long UnityEngine_Rendering_Universal_Internal_MotionVectorRenderPass__GetDrawingSettings(void)

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
  long *unaff_x21;
  long unaff_x22;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined1 auVar18 [16];
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
  thunk_FUN_00d48444(
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                    );
  thunk_FUN_00d48444(System_IEquatable<T>_var);
  thunk_FUN_00d48444(StringLiteral_2569);
  *(undefined1 *)(unaff_x22 + 0xdae) = 1;
  puVar2 = PTR_DAT_033eefc0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = FUN_0233e5f4();
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar8 != 0) {
    FUN_012dd38c(lVar8,*(undefined8 *)StringLiteral_3420);
    puVar5 = StringLiteral_10117;
    puVar4 = Method_UnityEngine_EventSystems_EventSystem_CreateUIToolkitPanelGameObject__;
    puVar3 = Method_UnityEngine_Events_UnityEvent<CyclingWordSet>_AddListener__;
    puVar2 = Method_TMPro_TMP_TextProcessingStack<HighlightState>__ctor__;
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) < 1) {
        iVar17 = 0;
      }
      else {
        iVar14 = 0;
        iVar17 = 0;
        puVar16 = (undefined8 *)Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__;
        do {
          FUN_0132138c(lVar7,iVar14,&stack0x00000008,*puVar16);
          if (CONCAT44(uStack000000000000000c,iStack0000000000000008) == 0) goto LAB_02374d44;
          uVar9 = FUN_012ddcec(lVar8,*(undefined8 *)
                                      (CONCAT44(uStack000000000000000c,iStack0000000000000008) +
                                      0x20),*(undefined8 *)puVar4);
          if ((uVar9 & 1) == 0) {
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Implicit__
                                       );
            if (lVar10 == 0) goto LAB_02374d44;
            FUN_01298da0(lVar10,*(undefined8 *)
                                 Method_System_TimeZoneInfo_<>c_<CreateLocalUnity>b__161_0__);
            FUN_0132138c(lVar7,iVar14,&stack0x00000008,*puVar16);
            FUN_02374dbc(CONCAT44(uStack000000000000000c,iStack0000000000000008),1,lVar10);
            FUN_0129b5d0(lVar10,&stack0x00000008,
                         *(undefined8 *)Method_Sirenix_OdinInspector_ValueDropdownList<int>_Add__);
            in_stack_00000050 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
            iVar15 = 0;
            in_stack_00000058 = in_stack_00000010;
            in_stack_00000068 = in_stack_00000020;
            in_stack_00000060 = in_stack_00000018;
            in_stack_00000070 = in_stack_00000028;
            while( true ) {
              uVar9 = FUN_012bf140(&stack0x00000050,*(undefined8 *)puVar2);
              if ((uVar9 & 1) == 0) break;
              auVar18 = FUN_00ca5690(&stack0x00000050,*(undefined8 *)puVar3);
              _in_stack_00000040 = auVar18;
              uVar9 = FUN_00ca5798(&stack0x00000040,*(undefined8 *)puVar5);
              iVar1 = -1;
              if ((uVar9 & 1) != 0) {
                iVar1 = 1;
              }
              iVar15 = iVar1 + iVar15;
            }
            FUN_012bf83c(&stack0x00000050,
                         *(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_ProbeReferenceVolume_<RegisterDebug>b__119_14__
                        );
            FUN_0129b5d0(lVar10,&stack0x00000008,
                         *(undefined8 *)Method_Sirenix_OdinInspector_ValueDropdownList<int>_Add__);
            in_stack_00000050 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
            in_stack_00000058 = in_stack_00000010;
            in_stack_00000068 = in_stack_00000020;
            in_stack_00000060 = in_stack_00000018;
            in_stack_00000070 = in_stack_00000028;
            while( true ) {
              uVar9 = FUN_012bf140(&stack0x00000050,*(undefined8 *)puVar2);
              if ((uVar9 & 1) == 0) break;
              auVar18 = FUN_00ca5690(&stack0x00000050,*(undefined8 *)puVar3);
              _in_stack_00000030 = auVar18;
              bVar6 = FUN_00ca5798(&stack0x00000030,*(undefined8 *)puVar5);
              if (((iVar15 < 1 ^ bVar6) & 1) == 0) {
                iVar17 = iVar17 + 1;
                lVar11 = FUN_00ca58a8(&stack0x00000030,*(undefined8 *)UnityEngine_Bounds_TypeInfo);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_022fa1b4(lVar11,0);
              }
            }
            FUN_012bf83c(&stack0x00000050,
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
      puVar3 = 
      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
      ;
      puVar2 = PTR_DAT_033f2b78;
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
          iStack0000000000000008 = iVar17;
          uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      ,&stack0x00000008);
          uVar12 = FUN_015f6780(*(undefined8 *)puVar3,uVar12,0);
        }
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
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


