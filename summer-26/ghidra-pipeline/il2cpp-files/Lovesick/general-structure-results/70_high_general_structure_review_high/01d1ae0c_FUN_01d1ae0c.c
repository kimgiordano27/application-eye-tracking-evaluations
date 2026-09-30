/*
FUNCTION_NAME: FUN_01d1ae0c
ENTRY_POINT: 01d1ae0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_01d1ae0c(long param_1,long param_2,long *param_3,long *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  long lVar18;
  
  if ((DAT_0377f2d7 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4579);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Input_DataModifier<HandDataAsset>_InjectAllDataModifier__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputActionReference_Set__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(System_Linq_Expressions_LogicalBinaryExpression_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<UIDocument>_GetEnumerator__);
    thunk_FUN_00d48444(System_IO_CStreamWriter_TypeInfo);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_op_Implicit__
                      );
    DAT_0377f2d7 = 1;
  }
  if (param_3 == (long *)0x0) {
    return 0;
  }
  bVar1 = *(byte *)(*(long *)
                     Method_Oculus_Interaction_Input_DataModifier<HandDataAsset>_InjectAllDataModifier__
                   + 300);
  if (*(byte *)(*param_3 + 300) < bVar1) {
    return 0;
  }
                    /* try { // try from 01d1af04 to 01e1af3b has its CatchHandler @ 01d1b100 */
  if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_Oculus_Interaction_Input_DataModifier<HandDataAsset>_InjectAllDataModifier__)
  {
    return 0;
  }
  if ((param_3 == (long *)0x0) ||
     (uVar8 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0)),
     param_4 == (long *)0x0)) goto LAB_01d1b294;
  lVar13 = *param_4;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
  uVar17 = *(undefined8 *)System_IO_CStreamWriter_TypeInfo;
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)Method_UnityEngine_InputSystem_InputActionReference_Set__) {
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01d1afa4;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_00d59724(param_4,*(long *)Method_UnityEngine_InputSystem_InputActionReference_Set__,0
                       );
LAB_01d1afa4:
  lVar13 = (*(code *)*puVar9)(param_4,uVar8,uVar17,puVar9[1]);
  if (lVar13 == 0) {
    return 0;
  }
  lVar10 = FUN_0206a104(lVar13,0);
  uVar8 = FUN_0206a1c8(lVar13,0);
  lVar13 = FUN_0206a10c(lVar13,0);
  puVar5 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  if (lVar10 == 0) {
    return 0;
  }
  uVar14 = thunk_FUN_015fe514(lVar10,*(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,0);
  if ((uVar14 & 1) != 0) {
    return 0;
  }
  uVar14 = FUN_015ff8a0(uVar8,0);
  if ((uVar14 & 1) != 0) {
    iVar7 = FUN_016047a8(lVar10,0x5c,0);
    if (iVar7 == -1) {
      iVar7 = FUN_016047a8(lVar10,0x2f,0);
    }
    if (-1 < iVar7) {
      uVar8 = FUN_01601d40(lVar10,0,iVar7,0);
      lVar10 = FUN_01603ec8(lVar10,iVar7 + 1,0);
    }
  }
  puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  puVar4 = UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_TypeInfo;
  puVar3 = System_Linq_Expressions_LogicalBinaryExpression_TypeInfo;
  if (*(long *)(param_1 + 0x10) == 0) {
    plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                          System_Linq_Expressions_LogicalBinaryExpression_TypeInfo);
    if (plVar12 == (long *)0x0) goto LAB_01d1b294;
    FUN_015d2a48(plVar12,0);
    FUN_015d2acc(plVar12,uVar8,0);
    FUN_015d2b4c(plVar12,*(undefined8 *)puVar5,0);
    *(uint *)((long)plVar12 + 0x14) = *(uint *)((long)plVar12 + 0x14) | 0x80000;
LAB_01d1b1ec:
    uVar16 = 0;
    *(long **)(param_1 + 0x10) = plVar12;
    puVar9 = (undefined8 *)
             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_op_Implicit__
    ;
    puVar2 = (undefined8 *)StringLiteral_4579;
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x10) == 1) {
      if (param_2 == 0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        return 0;
      }
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_01702364(param_2,0);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      puVar3 = Method_System_Collections_Generic_List<UIDocument>_GetEnumerator__;
      if (lVar11 == 0) goto LAB_01d1b294;
      FUN_015d2f08(lVar11,uVar17,0);
      lVar18 = *(long *)puVar5;
      plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (plVar12 == (long *)0x0) goto LAB_01d1b294;
      if (lVar13 != 0) {
        lVar18 = lVar13;
      }
      FUN_015d3294(plVar12,lVar11,0);
      plVar12[7] = lVar10;
      plVar12[8] = lVar18;
      FUN_015d3560(plVar12,uVar8,0);
      *(long **)(param_1 + 0x10) = plVar12;
    }
    else {
      if ((param_2 == 0) ||
         (uVar14 = thunk_FUN_015fe514(param_2,**(undefined8 **)
                                                (*(long *)
                                                  System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                                                + 0xb8),0), (uVar14 & 1) != 0)) {
        plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_01d1b294;
        FUN_015d2a48(plVar12,0);
        FUN_015d2acc(plVar12,uVar8,0);
        FUN_015d2b4c(plVar12,*(undefined8 *)puVar5,0);
        goto LAB_01d1b1ec;
      }
      plVar12 = *(long **)(param_1 + 0x10);
    }
    uVar16 = 1;
    puVar9 = (undefined8 *)
             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_op_Implicit__
    ;
    puVar2 = (undefined8 *)StringLiteral_4579;
  }
  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_op_Implicit__ =
       (undefined *)puVar9;
  StringLiteral_4579 = (undefined *)puVar2;
  if (plVar12 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar6);
    }
    uVar8 = FUN_01701790(uVar8,0);
    uVar8 = FUN_015f5b28(*puVar9,uVar8,0);
    lVar13 = thunk_FUN_00d62348(*puVar2);
    if (lVar13 != 0) {
      FUN_020689b4(lVar13,uVar8,uVar16,0);
      return lVar13;
    }
  }
LAB_01d1b294:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


