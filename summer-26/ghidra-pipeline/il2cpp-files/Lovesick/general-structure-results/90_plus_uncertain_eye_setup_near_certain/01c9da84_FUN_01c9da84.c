/*
FUNCTION_NAME: FUN_01c9da84
ENTRY_POINT: 01c9da84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_20;ray_or_cast_sink_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01c9da84(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  
  if ((DAT_0377ed0d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Memory<byte>_op_Implicit__);
    thunk_FUN_00d48444(PTR_DAT_033f1178);
    thunk_FUN_00d48444(Method_System_Xml_XmlNamedNodeMap_SmallXmlNodeList_RemoveAt__);
    thunk_FUN_00d48444(StringLiteral_14020);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_Dispose__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<SubtitleLine>__);
    thunk_FUN_00d48444(Method_UnityEngine_UI_Collections_IndexedSet<Graphic>_Remove__);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRPlugin_Result>_get_Task__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Collections_Generic_IReadOnlyList<ICylinderClipper>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RaycastResult>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<HashSet<int>>_get_Current__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_DateTime_AddYears__);
    DAT_0377ed0d = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar13 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)System_Collections_Generic_IReadOnlyList<ICylinderClipper>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01c9dbac;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_00d59724(param_1,*(long *)
                                   System_Collections_Generic_IReadOnlyList<ICylinderClipper>_TypeInfo
                          ,0);
LAB_01c9dbac:
    uVar5 = (*(code *)*puVar6)(param_1,puVar6[1]);
    puVar4 = Method_System_Collections_Generic_List<RaycastResult>__ctor__;
    puVar3 = Method_UnityEngine_UI_Collections_IndexedSet<Graphic>_Remove__;
    puVar2 = 
    Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_Dispose__
    ;
    switch(uVar5) {
    case 0:
      uVar8 = *(undefined8 *)Method_System_DateTime_AddYears__;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar2 = Method_UnityEngine_GameObject_GetComponent<SubtitleLine>__;
      uVar8 = FUN_01780344(uVar8,0);
      lVar13 = *(long *)puVar3;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar13);
        lVar13 = *(long *)puVar3;
      }
      puVar3 = 
      System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
      ;
      lVar7 = *(long *)puVar2;
      uVar9 = **(undefined8 **)(lVar13 + 0xb8);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar2;
      }
      uVar10 = **(undefined8 **)(lVar7 + 0xb8);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      lVar13 = FUN_01c9e344(uVar8,uVar9,uVar10);
      return lVar13;
    default:
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_List_Enumerator<HashSet<int>>_get_Current__
                       + 300);
      if ((*(byte *)(*param_1 + 300) < bVar1) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List_Enumerator<HashSet<int>>_get_Current__)) {
        param_1 = (long *)FUN_010df6b8(param_1,*(undefined8 *)
                                                Method_OVRTaskBuilder<OVRPlugin_Result>_get_Task__);
      }
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar13 == 0) goto LAB_01c9e340;
      FUN_01cabe08(lVar13,param_1,0);
      break;
    case 2:
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_System_Collections_Generic_List<RaycastResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9de80;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(param_1,*(long *)
                                     Method_System_Collections_Generic_List<RaycastResult>__ctor__,0
                           );
LAB_01c9de80:
      puVar2 = Method_System_Memory<byte>_op_Implicit__;
      uVar8 = (*(code *)*puVar6)(param_1,0,puVar6[1]);
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9df50;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar4,0);
LAB_01c9df50:
      uVar9 = (*(code *)*puVar6)(param_1,1,puVar6[1]);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar13 == 0) goto LAB_01c9e340;
      FUN_01cab764(lVar13,uVar8,uVar9,0);
      break;
    case 3:
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_System_Collections_Generic_List<RaycastResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9de20;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(param_1,*(long *)
                                     Method_System_Collections_Generic_List<RaycastResult>__ctor__,0
                           );
LAB_01c9de20:
      uVar8 = (*(code *)*puVar6)(param_1,0,puVar6[1]);
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9dee8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar4,0);
LAB_01c9dee8:
      puVar2 = PTR_DAT_033f1178;
      uVar9 = (*(code *)*puVar6)(param_1,1,puVar6[1]);
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9df98;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar4,0);
LAB_01c9df98:
      uVar10 = (*(code *)*puVar6)(param_1,2,puVar6[1]);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar13 == 0) goto LAB_01c9e340;
      FUN_01cab910(lVar13,uVar8,uVar9,uVar10,0);
      break;
    case 4:
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_System_Collections_Generic_List<RaycastResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9dfe4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(param_1,*(long *)
                                     Method_System_Collections_Generic_List<RaycastResult>__ctor__,0
                           );
LAB_01c9dfe4:
      uVar8 = (*(code *)*puVar6)(param_1,0,puVar6[1]);
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9e0a4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar4,0);
LAB_01c9e0a4:
      uVar9 = (*(code *)*puVar6)(param_1,1,puVar6[1]);
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9e164;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar4,0);
LAB_01c9e164:
      puVar2 = Method_System_Xml_XmlNamedNodeMap_SmallXmlNodeList_RemoveAt__;
      uVar10 = (*(code *)*puVar6)(param_1,2,puVar6[1]);
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9e22c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar4,0);
LAB_01c9e22c:
      uVar11 = (*(code *)*puVar6)(param_1,3,puVar6[1]);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar13 == 0) goto LAB_01c9e340;
      FUN_01caba90(lVar13,uVar8,uVar9,uVar10,uVar11,0);
      break;
    case 5:
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_System_Collections_Generic_List<RaycastResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9e044;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(param_1,*(long *)
                                     Method_System_Collections_Generic_List<RaycastResult>__ctor__,0
                           );
LAB_01c9e044:
      uVar8 = (*(code *)*puVar6)(param_1,0,puVar6[1]);
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9e104;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar4,0);
LAB_01c9e104:
      uVar9 = (*(code *)*puVar6)(param_1,1,puVar6[1]);
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9e1cc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar4,0);
LAB_01c9e1cc:
      uVar10 = (*(code *)*puVar6)(param_1,2,puVar6[1]);
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9e27c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar4,0);
LAB_01c9e27c:
      puVar2 = StringLiteral_14020;
      uVar11 = (*(code *)*puVar6)(param_1,3,puVar6[1]);
      lVar13 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c9e2e4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar4,0);
LAB_01c9e2e4:
      uVar12 = (*(code *)*puVar6)(param_1,4,puVar6[1]);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar13 == 0) goto LAB_01c9e340;
      FUN_01cabc34(lVar13,uVar8,uVar9,uVar10,uVar11,uVar12,0);
    }
    return lVar13;
  }
LAB_01c9e340:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


