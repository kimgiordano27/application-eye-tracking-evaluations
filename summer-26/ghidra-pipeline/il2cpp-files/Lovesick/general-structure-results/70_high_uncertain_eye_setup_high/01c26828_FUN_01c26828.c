/*
FUNCTION_NAME: FUN_01c26828
ENTRY_POINT: 01c26828
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01c26828(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  
  puVar1 = Method_System_Linq_Enumerable_Empty<YogaNode>__;
  if ((DAT_0377e9fc & 1) == 0) {
    thunk_FUN_00d48444(System_Xml_XmlDeclaration_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeArray_Enumerator<XRHumanBodyJoint>_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<OVRSkeleton_BoneId,_HumanBodyBones>_get_Value__
                      );
    thunk_FUN_00d48444(
                      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(StringLiteral_2248);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlNumeric2Converter_ToDouble__);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_32_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Empty<YogaNode>__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleValueExtensions_DebugString<Rotate>__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<CharacterController>__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Controls_DeltaControl_TypeInfo);
    DAT_0377e9fc = 1;
  }
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar6 = StringLiteral_2248;
  puVar5 = Method_System_Xml_Schema_XmlNumeric2Converter_ToDouble__;
  puVar4 = Method_SoccerBlocker_HideCrowd__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
  puVar1 = System_Xml_XmlDeclaration_TypeInfo;
  if (lVar7 != 0) {
    FUN_017b46ec(lVar7,0);
    FUN_01c168c8(param_1,param_2,0);
    *(long *)(lVar7 + 0x10) = param_1;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    do {
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,2);
      uVar17 = *(undefined8 *)puVar6;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      lVar9 = FUN_01780344(uVar17,0);
      if (plVar8 == (long *)0x0) goto LAB_01c26d54;
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01c26d5c;
      if ((int)plVar8[3] == 0) goto LAB_01c26d58;
      plVar8[4] = lVar9;
      lVar9 = FUN_01780344(*(undefined8 *)puVar5,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01c26d5c;
      if (*(uint *)(plVar8 + 3) < 2) goto LAB_01c26d58;
      plVar8[5] = lVar9;
      if (param_2 == (long *)0x0) goto LAB_01c26d54;
      uVar17 = FUN_0178c198(param_2,0x34,0,plVar8,0,0);
      *(undefined8 *)(lVar7 + 0x18) = uVar17;
      param_2 = (long *)(**(code **)(*param_2 + 0x888))(param_2,*(undefined8 *)(*param_2 + 0x890));
      lVar9 = *(long *)puVar1;
      uVar17 = *(undefined8 *)(lVar7 + 0x18);
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
      }
      uVar11 = FUN_016aa810(uVar17,0,0);
      if ((uVar11 & 1) == 0) break;
      uVar17 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_01780344(uVar17,0);
      uVar11 = FUN_0178a8c4(param_2,uVar17,0);
      if ((uVar11 & 1) == 0) break;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_0178a8c4(param_2,0,0);
    } while ((uVar11 & 1) != 0);
    uVar17 = *(undefined8 *)(lVar7 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_016aa83c(uVar17,0,0);
    puVar1 = UnityEngine_InputSystem_Controls_DeltaControl_TypeInfo;
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_NativeArray_Enumerator<XRHumanBodyJoint>_get_Current__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar8 = (long *)FUN_01be258c(0);
      plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
      if (plVar12 != (long *)0x0) {
        lVar7 = *(long *)puVar1;
        if ((lVar7 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar7 == 0)) {
LAB_01c26d5c:
          uVar17 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar17,0);
        }
        if ((int)plVar12[3] != 0) {
          plVar12[4] = *(long *)puVar1;
          plVar13 = *(long **)(param_1 + 0x10);
          if (plVar13 == (long *)0x0) goto LAB_01c26d54;
          lVar7 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
          if ((lVar7 != 0) &&
             (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0))
          goto LAB_01c26d5c;
          uVar15 = *(uint *)(plVar12 + 3);
          if (1 < uVar15) {
            plVar12[5] = lVar7;
            puVar1 = Method_UnityEngine_Component_GetComponent<CharacterController>__;
            if (*(long *)Method_UnityEngine_Component_GetComponent<CharacterController>__ != 0) {
              lVar7 = thunk_FUN_00d6225c(*(long *)
                                          Method_UnityEngine_Component_GetComponent<CharacterController>__
                                         ,*(undefined8 *)(*plVar12 + 0x40));
              if (lVar7 == 0) goto LAB_01c26d5c;
              uVar15 = *(uint *)(plVar12 + 3);
            }
            if (2 < uVar15) {
              plVar12[6] = *(long *)puVar1;
              plVar13 = *(long **)(param_1 + 0x10);
              if (plVar13 == (long *)0x0) goto LAB_01c26d54;
              lVar7 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0))
              goto LAB_01c26d5c;
              uVar15 = *(uint *)(plVar12 + 3);
              if (3 < uVar15) {
                plVar12[7] = lVar7;
                puVar1 = Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__;
                if (*(long *)
                     Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__ != 0
                   ) {
                  lVar7 = thunk_FUN_00d6225c(*(long *)
                                              Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__
                                             ,*(undefined8 *)(*plVar12 + 0x40));
                  if (lVar7 == 0) goto LAB_01c26d5c;
                  uVar15 = *(uint *)(plVar12 + 3);
                }
                if (4 < uVar15) {
                  plVar12[8] = *(long *)puVar1;
                  uVar17 = FUN_01600844(plVar12,0);
                  if (plVar8 != (long *)0x0) {
                    lVar7 = *plVar8;
                    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
                    if (uVar11 != 0) {
                      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) ==
                            *(long *)
                             OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                           ) {
                          puVar14 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
                          goto LAB_01c26cfc;
                        }
                        uVar11 = uVar11 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar14 = (undefined8 *)
                              FUN_00d59724(plVar8,*(long *)
                                                  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                                           ,0);
LAB_01c26cfc:
                    (*(code *)*puVar14)(plVar8,uVar17,puVar14[1]);
                    uVar17 = *(undefined8 *)(param_1 + 0x10);
                    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                                Method_UnityEngine_UIElements_StyleValueExtensions_DebugString<Rotate>__
                                              );
                    if (lVar7 != 0) {
                      FUN_01c168c8(lVar7,uVar17,0);
                      *(long *)(param_1 + 0x48) = lVar7;
                      return;
                    }
                  }
                  goto LAB_01c26d54;
                }
              }
            }
          }
        }
LAB_01c26d58:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
    }
    else {
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_KeyValuePair<OVRSkeleton_BoneId,_HumanBodyBones>_get_Value__
                                );
      if (lVar9 != 0) {
        FUN_012d24b0(lVar9,lVar7,*(undefined8 *)OVRPlugin_OVRP_1_32_0_TypeInfo,0);
        *(long *)(param_1 + 0x40) = lVar9;
        return;
      }
    }
  }
LAB_01c26d54:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


