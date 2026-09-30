/*
FUNCTION_NAME: FUN_0571aa4c
ENTRY_POINT: 0571aa4c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0571aa4c(long param_1,long *param_2,long *param_3,uint param_4,undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  ulong *puVar19;
  
                    /* catch() { ... } // from try @ 0571a8b0 with catch @ 0571aa4c */
  puVar2 = Method_UnityEngine_UIElements_BaseField<ulong>_get_rawValue__;
                    /* catch() { ... } // from try @ 0571a21c with catch @ 0571aa50 */
                    /* catch() { ... } // from try @ 0571a258 with catch @ 0571aa54 */
                    /* catch() { ... } // from try @ 0571a8ac with catch @ 0571aa58 */
                    /* catch() { ... } // from try @ 0571a8a8 with catch @ 0571aa5c */
                    /* catch() { ... } // from try @ 0571a268 with catch @ 0571aa60 */
                    /* catch() { ... } // from try @ 0571a8a4 with catch @ 0571aa64 */
                    /* catch() { ... } // from try @ 0571a8a0 with catch @ 0571aa68 */
                    /* catch() { ... } // from try @ 0571a89c with catch @ 0571aa6c */
  if ((DAT_06bc07ac & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<ulong>_get_rawValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__);
    FUN_02f08768(Method_UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>__ctor__);
    FUN_02f08768(PTR_DAT_067cde88);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_ContainsKey__
                );
    FUN_02f08768(PTR_DAT_067cde58);
    FUN_02f08768(PTR_DAT_067cde90);
    FUN_02f08768(PTR_DAT_067cd6c0);
    FUN_02f08768(PTR_DAT_067ca7d0);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                );
    DAT_06bc07ac = 1;
  }
  puVar19 = (ulong *)
            System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_05769a3c(lVar5,0);
  puVar3 = PTR_DAT_067cde88;
  puVar2 = PTR_DAT_067cd6c0;
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*puVar19 + 0x130);
    if (bVar1 <= *(byte *)(*param_3 + 0x130)) {
      plVar10 = param_3;
      if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *puVar19) {
        plVar10 = (long *)0x0;
      }
      goto LAB_0571ab9c;
    }
  }
  plVar10 = (long *)0x0;
LAB_0571ab9c:
  do {
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
    uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    uVar8 = thunk_FUN_04f6d944(uVar7,*(undefined8 *)puVar2,0);
    if ((uVar8 & 1) != 0) {
      thunk_FUN_02f6ef30(
                        Method_System_Collections_Generic_Dictionary<XRBodyTransformer,_TeleportationMonitor_PoseContainer>_set_Item__
                        );
      uVar9 = thunk_FUN_02f45270();
      uVar7 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_DataContract>_Add__
                                );
      FUN_05716310(uVar9,uVar7,0,0);
LAB_0571b0ec:
      uVar7 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_GetEnumerator__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar9,uVar7);
    }
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
    uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    uVar8 = thunk_FUN_04f6d944(uVar7,*(undefined8 *)puVar3,0);
    plVar6 = *(long **)(param_1 + 0x20);
    if ((uVar8 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
      uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      uVar8 = thunk_FUN_04f6d944(uVar7,*(undefined8 *)PTR_DAT_067cde58,0);
      if ((uVar8 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        uVar8 = thunk_FUN_04f6d944(uVar7,*(undefined8 *)
                                          Method_UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>__ctor__
                                   ,0);
        if ((uVar8 & 1) == 0) {
          uVar8 = FUN_04f6dc3c(uVar7,*(undefined8 *)PTR_DAT_067ca7d0,0);
          if ((((uVar8 & 1) != 0) &&
              (uVar8 = FUN_04f6dc3c(uVar7,*(undefined8 *)
                                           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                    ,0), (uVar8 & 1) != 0)) &&
             (uVar8 = FUN_04f6dc3c(uVar7,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_ContainsKey__
                                   ,0), (uVar8 & 1) != 0)) {
            thunk_FUN_02f6ef30(
                              Method_System_Collections_Generic_Dictionary<XRBodyTransformer,_TeleportationMonitor_PoseContainer>_set_Item__
                              );
            uVar9 = thunk_FUN_02f45270();
            uVar15 = thunk_FUN_02f6ef30(
                                       Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
                                       );
            FUN_0571cde8(uVar9,uVar15,uVar7);
            goto LAB_0571b0ec;
          }
        }
        else {
          if (*param_2 == 0) goto LAB_0571b0b4;
          FUN_0576fc68(*param_2,1,0);
        }
        goto LAB_0571af78;
      }
      if (plVar10 == (long *)0x0) {
LAB_0571ad38:
        plVar10 = (long *)thunk_FUN_02f45270();
        uVar8 = FUN_0576ddd0(plVar10,0);
        if (*param_2 == 0) goto LAB_0571b0b4;
        *(long **)(*param_2 + 0xb8) = plVar10;
      }
      else {
        if (*(int *)(*puVar19 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc0797 == '\0') {
          FUN_02f08768(puVar19);
          DAT_06bc0797 = '\x01';
        }
        uVar8 = *puVar19;
        if (*(int *)(uVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          uVar8 = *puVar19;
        }
        if (plVar10 == (long *)**(long **)(uVar8 + 0xb8)) goto LAB_0571ad38;
      }
      if ((param_3 == (long *)0x0) || (param_3[0xd] == 0)) {
LAB_0571ad7c:
        if (plVar10 == (long *)0x0) goto LAB_0571b0b4;
      }
      else {
        if ((*param_2 == 0) || (lVar11 = *(long *)(*param_2 + 0xb0), lVar11 == 0))
        goto LAB_0571b0b4;
        uVar8 = FUN_05825608(lVar11,0);
        if ((uVar8 & 1) != 0) goto LAB_0571ad7c;
        plVar6 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                             Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__
                                           );
        FUN_0577ae6c(plVar6,0);
        puVar4 = Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__;
        if (plVar10 == (long *)0x0) goto LAB_0571b0b4;
        plVar10[0x13] = (long)plVar6;
        lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
        FUN_0577af34(lVar11,0);
        if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
        (**(code **)(*plVar6 + 0x228))(plVar6,lVar11,*(undefined8 *)(*plVar6 + 0x230));
        if ((*param_2 == 0) || (lVar11 == 0)) goto LAB_0571b0b4;
        FUN_0577ae7c(lVar11,*(undefined8 *)(*param_2 + 0xb0),0);
        puVar4 = 
        UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
        ;
        lVar17 = *param_2;
        if (lVar17 == 0) goto LAB_0571b0b4;
        lVar14 = *(long *)
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
        ;
        *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)(lVar17 + 0x10);
        *(undefined4 *)(lVar17 + 0x10) = 0;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar14 = *(long *)puVar4;
        }
        uVar8 = FUN_0576fdd0(lVar17,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
      }
      if (plVar10[0x13] == 0) {
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
        uVar9 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
        uVar15 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
        uVar12 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
        uVar18 = FUN_0576dfe8(plVar10,0);
        uVar13 = FUN_0576e074(plVar10,0);
      }
      else {
        lVar11 = FUN_0571b1c8(uVar8,plVar10);
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
        uVar9 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
        uVar15 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        plVar6 = *(long **)(param_1 + 0x20);
        if ((plVar6 == (long *)0x0) ||
           (uVar12 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0)),
           lVar11 == 0)) goto LAB_0571b0b4;
        uVar18 = *(undefined8 *)(lVar11 + 0x50);
        uVar13 = FUN_0576e074(plVar10,0);
      }
      lVar11 = FUN_05717cf0(param_1,uVar7,uVar9,uVar15,uVar12,param_4 & 1,param_5,uVar18,uVar13);
      puVar19 = (ulong *)
                System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
      if (lVar11 != 0) {
        if (lVar5 == 0) goto LAB_0571b0b4;
        FUN_0576aff0(lVar5,lVar11,0);
      }
    }
    else {
      if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
      uVar7 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      uVar8 = thunk_FUN_04f6d944(uVar7,*(undefined8 *)PTR_DAT_067cde90,0);
      if ((uVar8 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_0571b0b4;
        plVar16 = *(long **)(param_1 + 0x38);
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        plVar6 = *(long **)(param_1 + 0x20);
        if ((plVar6 == (long *)0x0) ||
           (uVar9 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0)),
           plVar16 == (long *)0x0)) goto LAB_0571b0b4;
        (**(code **)(*plVar16 + 0x1f8))(plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x200));
      }
    }
LAB_0571af78:
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) {
LAB_0571b0b4:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = (**(code **)(*plVar6 + 0x428))(plVar6,*(undefined8 *)(*plVar6 + 0x430));
    if ((uVar8 & 1) == 0) {
      if (((param_4 & 1) == 0) && (plVar10 != (long *)0x0)) {
        FUN_0571b138(param_1,plVar10,lVar5);
        return;
      }
      return;
    }
  } while( true );
}


