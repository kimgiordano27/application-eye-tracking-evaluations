/*
FUNCTION_NAME: FUN_055c1af8
ENTRY_POINT: 055c1af8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055c210c) */
/* WARNING: Removing unreachable block (ram,0x055c2164) */

long FUN_055c1af8(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  int local_44;
  
  puVar4 = Oculus_Interaction_MAction<PokeInteractor>_TypeInfo;
  lVar8 = param_1;
  if ((DAT_06bbfb57 & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_GetClosestPowerOfTen__);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(
                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                );
    FUN_02f08768(Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
    FUN_02f08768(System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>_Init__
                );
    lVar8 = FUN_02f08768(
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_registeredSnapshot__
                        );
    DAT_06bbfb57 = 1;
  }
  local_44 = 0;
  uVar9 = FUN_055b7858(lVar8,param_2);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar4);
  }
  uVar9 = FUN_0581a024(uVar9,0);
  if ((((param_2 == 0) || (*(long *)(param_2 + 0xc0) == 0)) || (*(long *)(param_1 + 0x20) == 0)) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar8 == 0)) goto LAB_055c1e7c;
  uVar18 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x18);
  lVar8 = FUN_0558c9c4(lVar8,uVar9,uVar18,0);
  if ((*(char *)(param_1 + 0xa0) == '\0') && (lVar8 != 0)) {
    uVar9 = FUN_0556814c(uVar9,0);
    uVar18 = thunk_FUN_02f6ef30(Method_UnityEngine_UIElements_BaseSlider<float>_RoundToMultipleOf__)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar9,uVar18);
  }
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo
                              );
    FUN_05544a50(lVar8,uVar9,0);
    if (lVar8 == 0) goto LAB_055c1e7c;
    uVar10 = FUN_05548958(lVar8,uVar18,0);
    uVar10 = FUN_055bb368(uVar10,param_2,
                          *(undefined8 *)
                           Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                          ,uVar18);
    FUN_05548958(lVar8,uVar10,0);
    if (*(char *)(param_1 + 0xa0) == '\0') {
      uVar10 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(lVar8 + 0x110) = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(lVar8 + 0x108) = uVar10;
      uVar10 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(lVar8 + 0x120) = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(lVar8 + 0x118) = uVar10;
    }
    else {
      lVar11 = System_Runtime_Serialization_XmlFormatWriterInterpreter__InvokeOnSerialized
                         (param_1,uVar18);
      if (lVar11 != 0) {
        FUN_0554f158(lVar8,lVar11,0);
      }
    }
    uVar10 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)
                  UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_055b6a84(lVar8,uVar10);
    FUN_055b6fb0(lVar8,*(undefined8 *)(param_2 + 0x48));
  }
  plVar15 = *(long **)(param_2 + 0xb8);
  if (plVar15 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                     + 0x130);
    if (*(byte *)(*plVar15 + 0x130) < bVar1) {
      plVar15 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)
              System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo) {
      plVar15 = (long *)0x0;
    }
  }
  if (*(long *)(param_2 + 200) == 0) goto LAB_055c1e7c;
  if (*(long *)(*(long *)(param_2 + 200) + 0x60) == 0) {
    bVar6 = false;
    if (plVar15 != (long *)0x0) {
      if ((long *)plVar15[0x13] != (long *)0x0) {
        lVar11 = *(long *)plVar15[0x13];
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__ +
                         0x130);
        if (bVar1 <= *(byte *)(lVar11 + 0x130)) {
          bVar6 = *(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
                  *(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__;
          goto LAB_055c1dcc;
        }
      }
      bVar6 = false;
    }
LAB_055c1dcc:
    if (*(char *)(param_1 + 0xa0) == '\0') goto LAB_055c1df0;
    if (bVar6) goto LAB_055c1dd8;
LAB_055c1ef0:
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar11 == 0)) goto LAB_055c1e7c;
    lVar11 = FUN_0558c9c4(lVar11,uVar9,uVar18,0);
    if (lVar11 == 0) goto LAB_055c1f14;
  }
  else {
    if (*(char *)(param_1 + 0xa0) == '\0') {
LAB_055c1df0:
      FUN_055bd598(param_1,param_2,lVar8,0);
      if (*(char *)(param_1 + 0xa0) != '\0') {
        uVar10 = FUN_04f65260(uVar9,*(undefined8 *)
                                     Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_registeredSnapshot__
                              ,0);
        lVar11 = *(long *)(lVar8 + 0x40);
        if (lVar11 != 0) {
          iVar7 = 0;
          do {
            lVar11 = FUN_0557e3c8(lVar11,uVar10,0);
            if (lVar11 == 0) goto LAB_055c1e9c;
            local_44 = iVar7;
            uVar12 = FUN_050d2c48(&local_44,0);
            uVar10 = FUN_04f65260(uVar10,uVar12,0);
            lVar11 = *(long *)(lVar8 + 0x40);
            iVar7 = iVar7 + 1;
          } while (lVar11 != 0);
        }
        goto LAB_055c1e7c;
      }
      uVar10 = FUN_04f65260(uVar9,*(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>_Init__
                            ,0);
LAB_055c1e9c:
      if ((*(long *)(lVar8 + 0x40) == 0) ||
         (lVar11 = FUN_0557e298(*(long *)(lVar8 + 0x40),0,0), lVar11 == 0)) goto LAB_055c1e7c;
      FUN_0555e5d4(lVar11,uVar10,0);
      if ((*(long *)(lVar8 + 0x40) == 0) ||
         (plVar15 = (long *)FUN_0557e298(*(long *)(lVar8 + 0x40),0,0), plVar15 == (long *)0x0))
      goto LAB_055c1e7c;
      (**(code **)(*plVar15 + 0x1e8))(plVar15,3,*(undefined8 *)(*plVar15 + 0x1f0));
    }
    else {
LAB_055c1dd8:
      plVar15 = *(long **)(lVar8 + 0x40);
      if (plVar15 == (long *)0x0) goto LAB_055c1e7c;
      iVar7 = (**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
      if (iVar7 == 0) goto LAB_055c1df0;
    }
    if (*(char *)(param_1 + 0xa0) != '\0') goto LAB_055c1ef0;
LAB_055c1f14:
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar11 == 0)) goto LAB_055c1e7c;
    FUN_0558cc18(lVar11,lVar8,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      lVar11 = *(long *)(param_1 + 0x88);
      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                  UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                                );
      FUN_03abf108(uVar9,*(undefined8 *)
                          UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall_TypeInfo
                  );
      if (lVar11 == 0) goto LAB_055c1e7c;
      FUN_0492cd38(lVar11,lVar8,uVar9,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseSlider<float>_GetClosestPowerOfTen__);
    }
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar11 = FUN_0576fe78(*(long *)(param_1 + 0x18),0), lVar11 == 0)) {
LAB_055c2110:
    *(undefined1 *)(lVar8 + 0xb0) = 0;
    return lVar8;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar11 = FUN_0576fe78(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
    lVar11 = FUN_057715f4(lVar11,0);
    puVar5 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__;
    puVar4 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
joined_r0x055c1fc4:
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar13 = FUN_057718f4(lVar11,0);
    puVar3 = PTR_DAT_067c91b0;
    if ((uVar13 & 1) != 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar15 = (long *)FUN_05771994(lVar11,0);
      if (plVar15 != (long *)0x0) goto code_r0x055c1ffc;
      goto LAB_055c2048;
    }
    plVar15 = (long *)thunk_FUN_02f45174(lVar11,*(undefined8 *)PTR_DAT_067c91b0);
    if (plVar15 == (long *)0x0) goto LAB_055c2110;
    lVar11 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 == 0) goto LAB_055c20d8;
    piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    goto LAB_055c20c0;
  }
LAB_055c1e7c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar17 = piVar17 + 4;
    if (uVar13 == 0) break;
LAB_055c20c0:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_055c20f4;
    }
  }
LAB_055c20d8:
  puVar14 = (undefined8 *)FUN_02f421d0(plVar15,*(long *)puVar3,0);
LAB_055c20f4:
  (*(code *)*puVar14)(plVar15,puVar14[1]);
  goto LAB_055c2110;
code_r0x055c1ffc:
  bVar1 = *(byte *)(*plVar15 + 0x130);
  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar16 = *(long *)(*plVar15 + 200),
     *(long *)(lVar16 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar15);
  }
  bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
  if ((bVar1 < bVar2) || (*(long *)(lVar16 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
LAB_055c2048:
    uVar9 = FUN_055c15a8(plVar15,plVar15);
    uVar13 = thunk_FUN_04f6d944(uVar9,*(undefined8 *)(lVar8 + 0x90),0);
    if ((uVar13 & 1) != 0) {
      FUN_055c16c0(param_1,plVar15);
    }
  }
  goto joined_r0x055c1fc4;
}


