/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$OnPointerEventRaised
ENTRY_POINT: 014b5870
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__OnPointerEventRaised(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  byte unaff_w20;
  long *unaff_x21;
  undefined8 uVar10;
  long unaff_x22;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(PTR_DAT_033ed298);
  thunk_FUN_00d48444(Method_System_ParameterizedStrings_GetDynamicOrStaticVariables__);
  thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_1__);
  thunk_FUN_00d48444(StringLiteral_8832);
  thunk_FUN_00d48444(Method_System_Collections_Generic_KeyValuePair<EdgeLookup,_Face>_get_Value__);
  thunk_FUN_00d48444(UnityEngine_ProBuilder_Poly2Tri_PolygonPoint_TypeInfo);
  thunk_FUN_00d48444(System_Globalization_JapaneseCalendar_var);
  *(undefined1 *)(unaff_x22 + 0xd74) = 1;
  uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b4e0(uVar10,0,0);
  if ((uVar5 & 1) == 0) {
    lVar6 = *(long *)(unaff_x19 + 0xc0);
    puVar1 = (undefined8 *)StringLiteral_5363;
  }
  else {
    lVar6 = FUN_015016fc(0);
    *(long *)(unaff_x19 + 0xc0) = lVar6;
    *(undefined1 *)(unaff_x19 + 200) = 0;
    puVar1 = (undefined8 *)StringLiteral_5363;
  }
  StringLiteral_5363 = (undefined *)puVar1;
  if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x30), lVar6 != 0)) &&
     (*(byte *)(unaff_x19 + 200) != (unaff_w20 & 1))) {
    *(byte *)(unaff_x19 + 200) = unaff_w20 & 1;
    uVar10 = *(undefined8 *)(lVar6 + 0x10);
    lVar7 = thunk_FUN_00d62348(*puVar1);
    puVar4 = Method_System_Collections_Generic_List<XmlSchemaObject>_get_Count__;
    puVar3 = Method_System_RuntimeType_ListBuilder<PropertyInfo>_ToArray__;
    puVar2 = PTR_DAT_033ec838;
    if (lVar7 == 0) goto LAB_014b5be8;
    FUN_011c181c();
    if ((unaff_w20 & 1) == 0) {
      lVar7 = FUN_017b78c8(uVar10,lVar7,0);
      if (lVar7 == 0) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
      }
      else {
        uVar10 = *puVar1;
        lVar8 = thunk_FUN_00d6225c(lVar7,uVar10);
        if (lVar8 == 0) goto LAB_014b5a10;
        *(long *)(lVar6 + 0x10) = lVar8;
        uVar10 = *puVar1;
        lVar8 = thunk_FUN_00d6225c(lVar7,uVar10);
        if (lVar8 == 0) goto LAB_014b5a10;
      }
      lVar8 = *(long *)(lVar6 + 0x28);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if ((lVar7 == 0) || (FUN_013df2bc(), lVar8 == 0)) goto LAB_014b5be8;
      FUN_013df7e0(lVar8,lVar7,*(undefined8 *)PTR_DAT_033ed298);
      lVar8 = *(long *)(lVar6 + 0x30);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if ((lVar7 == 0) || (FUN_013df4e8(), lVar8 == 0)) goto LAB_014b5be8;
      FUN_013e061c(lVar8,lVar7,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_1__);
      uVar10 = *(undefined8 *)(lVar6 + 0x18);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar7 == 0) goto LAB_014b5be8;
      FUN_014febf4();
      plVar9 = (long *)FUN_017b78c8(uVar10,lVar7,0);
    }
    else {
      lVar7 = FUN_017b76bc();
      if (lVar7 == 0) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
      }
      else {
        uVar10 = *puVar1;
        lVar8 = thunk_FUN_00d6225c(lVar7,uVar10);
        if (lVar8 == 0) {
LAB_014b5a10:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar7,uVar10);
        }
        *(long *)(lVar6 + 0x10) = lVar8;
        uVar10 = *puVar1;
        lVar8 = thunk_FUN_00d6225c(lVar7,uVar10);
        if (lVar8 == 0) goto LAB_014b5a10;
      }
      lVar8 = *(long *)(lVar6 + 0x28);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if ((lVar7 == 0) || (FUN_013df2bc(), lVar8 == 0)) {
LAB_014b5be8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_013df780(lVar8,lVar7,
                   *(undefined8 *)Method_TMPro_TMP_TextProcessingStack<FontWeight>_Peek__);
      lVar8 = *(long *)(lVar6 + 0x30);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if ((lVar7 == 0) || (FUN_013df4e8(), lVar8 == 0)) goto LAB_014b5be8;
      FUN_013e05bc(lVar8,lVar7,
                   *(undefined8 *)Method_System_ParameterizedStrings_GetDynamicOrStaticVariables__);
      uVar10 = *(undefined8 *)(lVar6 + 0x18);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar7 == 0) goto LAB_014b5be8;
      FUN_014febf4();
      plVar9 = (long *)FUN_017b76bc(uVar10,lVar7,0);
    }
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
    }
    else {
      lVar7 = *(long *)puVar3;
      if ((*plVar9 != lVar7) || (*(long **)(lVar6 + 0x18) = plVar9, *plVar9 != lVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
    }
  }
  return;
}


