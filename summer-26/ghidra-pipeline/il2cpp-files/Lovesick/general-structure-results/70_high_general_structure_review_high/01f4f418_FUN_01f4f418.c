/*
FUNCTION_NAME: FUN_01f4f418
ENTRY_POINT: 01f4f418
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01f4f8f8) */

void FUN_01f4f418(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  
  if ((DAT_03780370 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01f4f2dc with catch @ 01f4f454
                        */
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01f4f2e0 with catch @ 01f4f458
                        */
    thunk_FUN_00d48444(PTR_DAT_033f39b8);
    thunk_FUN_00d48444(StringLiteral_5857);
                    /* try { // try from 01f4f470 to 0204f487 has its CatchHandler @ 01f4f4b8 */
    thunk_FUN_00d48444(StringLiteral_13685);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                      );
                    /* try { // try from 01f4f488 to 0204f4a7 has its CatchHandler @ 01f4f1a8 */
    thunk_FUN_00d48444(DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass6_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1880);
                    /* try { // try from 01f4f4a8 to 0204f4b7 has its CatchHandler @ 01f4f4b8 */
    thunk_FUN_00d48444(Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedBase64__);
    thunk_FUN_00d48444(
                      Method_Polenter_Serialization_Core_SharpSerializerSettings<AdvancedSharpSerializerBinarySettings>_get_AdvancedSettings__
                      );
    thunk_FUN_00d48444(StringLiteral_13583);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea9b8);
    DAT_03780370 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_01f4f8e4;
  lVar5 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
  *(long *)(param_1 + 0x10) = lVar5;
  if (lVar5 == 0) goto LAB_01f4f8e4;
  uVar1 = *(undefined1 *)(lVar5 + 0x93);
  *(undefined1 *)(lVar5 + 0x93) = 1;
  puVar4 = StringLiteral_13685;
  uVar6 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
  uVar7 = thunk_FUN_015fe514(uVar6,*(undefined8 *)puVar4,0);
  if ((uVar7 & 1) == 0) {
    uVar7 = thunk_FUN_015fe514(uVar6,*(undefined8 *)StringLiteral_5857,0);
    if ((uVar7 & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_01f4f8e4;
      lVar5 = *plVar8;
      puVar9 = (undefined8 *)PTR_DAT_033ea9b8;
      goto LAB_01f4f5f8;
    }
    uVar7 = thunk_FUN_015fe514(uVar6,*(undefined8 *)StringLiteral_13583,0);
    if ((uVar7 & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_01f4f8e4;
      lVar5 = *plVar8;
      puVar9 = (undefined8 *)
               Method_Polenter_Serialization_Core_SharpSerializerSettings<AdvancedSharpSerializerBinarySettings>_get_AdvancedSettings__
      ;
      goto LAB_01f4f5f8;
    }
    uVar7 = thunk_FUN_015fe514(uVar6,*(undefined8 *)
                                      DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass6_0_TypeInfo
                               ,0);
    if ((uVar7 & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_01f4f8e4;
      lVar5 = *plVar8;
      puVar9 = (undefined8 *)
               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__;
      goto LAB_01f4f5f8;
    }
    uVar7 = thunk_FUN_015fe514(uVar6,*(undefined8 *)
                                      Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedBase64__
                               ,0);
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) goto LAB_01f4f8e4;
    if ((uVar7 & 1) == 0) {
      plVar8 = (long *)FUN_01f4b19c(plVar8);
      puVar4 = StringLiteral_10310;
      if (plVar8 == (long *)0x0) goto LAB_01f4f8e4;
      plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar2 = PTR_DAT_033f39b8;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar13 = *plVar8;
        lVar5 = *(long *)puVar3;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar5) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_01f4f700;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar5,0);
LAB_01f4f700:
        uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar7 & 1) == 0) {
          iVar15 = 0xb;
          goto LAB_01f4f834;
        }
        lVar13 = *plVar8;
        lVar5 = *(long *)puVar3;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar5) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_01f4f760;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar5,1);
LAB_01f4f760:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar5 = *(long *)puVar2;
        if ((*(byte *)(*plVar10 + 300) < *(byte *)(lVar5 + 300)) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) != lVar5))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        lVar13 = *plVar10;
        if ((*(byte *)(lVar13 + 300) < *(byte *)(lVar5 + 300)) ||
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        uVar6 = (**(code **)(lVar13 + 0x198))(plVar10,*(undefined8 *)(lVar13 + 0x1a0));
        uVar11 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
        uVar7 = FUN_01f5dcc0(uVar6,uVar11,0);
      } while ((uVar7 & 1) == 0);
      uVar6 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
      uVar6 = FUN_01f53728(uVar6,uVar6);
      FUN_01f4cbf8(param_1,param_2,uVar6,5);
      iVar15 = 10;
LAB_01f4f834:
      plVar8 = (long *)thunk_FUN_00d6225c(plVar8,*(undefined8 *)puVar4);
      if (plVar8 != (long *)0x0) {
        lVar13 = *plVar8;
        lVar5 = *(long *)puVar4;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar5) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_01f4f894;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar5,0);
LAB_01f4f894:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      if ((iVar15 != 0xb) && (iVar15 != 0)) {
        return;
      }
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_01f4f8e4;
      if (*(char *)((long)plVar8 + 0x59) != '\0') {
        *(undefined1 *)((long)plVar8 + 0x93) = uVar1;
        FUN_00ac2be8(param_2);
        uVar6 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
        thunk_FUN_00d48444(
                          Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                          );
        uVar11 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar12 = thunk_FUN_00d48444(StringLiteral_8631);
        FUN_01f730c0(uVar11,uVar12,uVar6,0);
        uVar6 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<byte>_ToArray__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,uVar6);
      }
      lVar5 = *plVar8;
      puVar9 = (undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    }
    else {
      lVar5 = *plVar8;
      puVar9 = (undefined8 *)Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__;
    }
    uVar6 = (**(code **)(lVar5 + 0x558))(plVar8,*puVar9,*(undefined8 *)(lVar5 + 0x560));
  }
  else {
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) goto LAB_01f4f8e4;
    lVar5 = *plVar8;
    puVar9 = (undefined8 *)StringLiteral_1880;
LAB_01f4f5f8:
    uVar6 = (**(code **)(lVar5 + 0x558))(plVar8,*puVar9,*(undefined8 *)(lVar5 + 0x560));
  }
  (**(code **)(*param_2 + 0x2d8))
            (param_2,uVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*param_2 + 0x2e0));
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x93) = uVar1;
    return;
  }
LAB_01f4f8e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


