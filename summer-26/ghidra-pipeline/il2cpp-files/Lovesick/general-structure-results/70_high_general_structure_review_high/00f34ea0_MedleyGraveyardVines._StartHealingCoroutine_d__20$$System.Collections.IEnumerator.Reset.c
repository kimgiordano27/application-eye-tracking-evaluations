/*
FUNCTION_NAME: MedleyGraveyardVines.<StartHealingCoroutine>d__20$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 00f34ea0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
MedleyGraveyardVines_<StartHealingCoroutine>d__20__System_Collections_IEnumerator_Reset
          (ulong param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x20;
  byte unaff_w21;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<string>_ToArray__);
    thunk_FUN_00d48444(Method_System_Collections_Stack_CopyTo__);
    thunk_FUN_00d48444(StringLiteral_14246);
    thunk_FUN_00d48444(PTR_DAT_033f0aa0);
    thunk_FUN_00d48444(Method_Sirenix_Utilities_PropertyInfoExtensions_DeAliasProperty__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_ReadListElement__
                      );
    thunk_FUN_00d48444(System_Xml_Serialization_XmlTypeMapMemberAnyElement_var);
    thunk_FUN_00d48444(Method_System_DateTime_AddYears__);
    thunk_FUN_00d48444(StringLiteral_238);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                      );
    thunk_FUN_00d48444(Newtonsoft_Json_Schema_JsonSchemaException_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Utilities_ReflectionObject_<>c__DisplayClass11_2_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1880);
    thunk_FUN_00d48444(Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ea9b8);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    *(undefined1 *)(unaff_x20 + 0x60e) = 1;
  }
  lVar8 = thunk_FUN_00d62348(*unaff_x22);
  puVar1 = Method_System_DateTime_AddYears__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (lVar8 == 0) goto LAB_00f35490;
  FUN_017b46ec(lVar8,0);
  *(byte *)(lVar8 + 0x10) = unaff_w21 & 1;
  uVar14 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_01780344(uVar14,0);
  uVar9 = FUN_01789ac0(param_2,uVar14,0);
  puVar13 = (undefined8 *)Newtonsoft_Json_Utilities_ReflectionObject_<>c__DisplayClass11_2_TypeInfo;
  if ((uVar9 & 1) == 0) {
    uVar14 = *(undefined8 *)Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
    ;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_01780344(uVar14,0);
    uVar9 = FUN_01789ac0(param_2,uVar14,0);
    puVar13 = (undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__;
    if ((uVar9 & 1) == 0) {
      uVar14 = *(undefined8 *)
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_01780344(uVar14,0);
      uVar9 = FUN_01789ac0(param_2,uVar14,0);
      puVar13 = (undefined8 *)
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
      ;
      if ((uVar9 & 1) == 0) {
        uVar14 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_01780344(uVar14,0);
        uVar9 = FUN_01789ac0(param_2,uVar14,0);
        puVar13 = (undefined8 *)Newtonsoft_Json_Schema_JsonSchemaException_TypeInfo;
        if ((uVar9 & 1) == 0) {
          uVar14 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar14 = FUN_01780344(uVar14,0);
          uVar9 = FUN_01789ac0(param_2,uVar14,0);
          puVar13 = (undefined8 *)StringLiteral_238;
          if ((uVar9 & 1) == 0) {
            uVar14 = *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
            ;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_01780344(uVar14,0);
            uVar9 = FUN_01789ac0(param_2,uVar14,0);
            puVar13 = (undefined8 *)
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
            ;
            if ((uVar9 & 1) == 0) {
              if (param_2 != (long *)0x0) {
                uVar9 = (**(code **)(*param_2 + 0x3c8))(param_2,*(undefined8 *)(*param_2 + 0x3d0));
                puVar3 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
                if ((uVar9 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00f35214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar14 = (**(code **)(*param_2 + 0x168))
                                     (param_2,*(undefined8 *)(*param_2 + 0x170));
                  return uVar14;
                }
                uVar15 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
                uVar14 = (**(code **)(*param_2 + 0x488))(param_2,*(undefined8 *)(*param_2 + 0x490));
                uVar9 = FUN_0178abb0(param_2,0);
                if ((uVar9 & 1) != 0) {
                  uVar10 = (**(code **)(*param_2 + 0x1c8))
                                     (param_2,*(undefined8 *)(*param_2 + 0x1d0));
                  uVar10 = FUN_00f34e74(uVar10,0);
                  uVar15 = FUN_01600424(uVar15,uVar10,*(undefined8 *)puVar3,0);
                  plVar11 = (long *)(**(code **)(*param_2 + 0x1c8))
                                              (param_2,*(undefined8 *)(*param_2 + 0x1d0));
                  if ((plVar11 == (long *)0x0) ||
                     (lVar12 = (**(code **)(*plVar11 + 0x488))
                                         (plVar11,*(undefined8 *)(*plVar11 + 0x490)), lVar12 == 0))
                  goto LAB_00f35490;
                  if (*(long *)(lVar12 + 0x18) != 0) {
                    plVar11 = (long *)(**(code **)(*param_2 + 0x1c8))
                                                (param_2,*(undefined8 *)(*param_2 + 0x1d0));
                    if ((plVar11 == (long *)0x0) ||
                       (lVar12 = (**(code **)(*plVar11 + 0x488))
                                           (plVar11,*(undefined8 *)(*plVar11 + 0x490)), lVar12 == 0)
                       ) goto LAB_00f35490;
                    uVar14 = FUN_010df2a8(uVar14,*(undefined4 *)(lVar12 + 0x18),
                                          *(undefined8 *)StringLiteral_14246);
                  }
                }
                uVar9 = FUN_010d7a34(uVar14,*(undefined8 *)
                                             Method_System_Collections_Generic_List<string>_ToArray__
                                    );
                lVar12 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
                if ((uVar9 & 1) == 0) {
                  uVar14 = FUN_015f5b28(uVar15,lVar12,0);
LAB_00f35430:
                  if (*(char *)(lVar8 + 0x10) == '\0') {
                    return uVar14;
                  }
                  lVar8 = (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(*param_2 + 0x2f0))
                  ;
                  if (lVar8 == 0) {
                    return uVar14;
                  }
                  uVar15 = (**(code **)(*param_2 + 0x2e8))
                                     (param_2,*(undefined8 *)(*param_2 + 0x2f0));
                  uVar14 = FUN_01600424(uVar15,*(undefined8 *)puVar3,uVar14,0);
                  return uVar14;
                }
                if (lVar12 != 0) {
                  iVar7 = FUN_016047a8(lVar12,0x60,0);
                  if (0 < iVar7) {
                    lVar12 = (**(code **)(*param_2 + 0x1b8))
                                       (param_2,*(undefined8 *)(*param_2 + 0x1c0));
                    if (lVar12 == 0) goto LAB_00f35490;
                    uVar10 = FUN_01601d40(lVar12,0,iVar7,0);
                    uVar15 = FUN_015f5b28(uVar15,uVar10,0);
                  }
                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_Sirenix_Utilities_PropertyInfoExtensions_DeAliasProperty__
                                             );
                  puVar6 = StringLiteral_1880;
                  puVar5 = Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
                  puVar4 = Method_System_Collections_Stack_CopyTo__;
                  puVar2 = PTR_DAT_033f0aa0;
                  puVar1 = PTR_DAT_033ea9b8;
                  if (lVar12 != 0) {
                    FUN_012d239c(lVar12,lVar8,
                                 *(undefined8 *)
                                  Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_ReadListElement__
                                 ,0);
                    uVar14 = FUN_010dcdb8(uVar14,lVar12,*(undefined8 *)puVar4);
                    uVar14 = FUN_010df6b8(uVar14,*(undefined8 *)puVar2);
                    uVar14 = FUN_01600f98(*(undefined8 *)puVar5,uVar14,0);
                    uVar14 = FUN_0160073c(uVar15,*(undefined8 *)puVar6,uVar14,*(undefined8 *)puVar1,
                                          0);
                    goto LAB_00f35430;
                  }
                }
              }
LAB_00f35490:
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          }
        }
      }
    }
  }
  return *puVar13;
}


