/*
FUNCTION_NAME: FUN_0571e6a0
ENTRY_POINT: 0571e6a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_21;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0571e6a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  
  puVar10 = Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_highValue__;
  puVar9 = Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_highValue__;
  puVar8 = Method_Unity_AppUI_UI_BaseSlider<float,_float>_InvokeValueChangedCallbacks__;
  puVar7 = Method_UnityEngine_UIElements_BaseSlider<float>_set_highValue__;
  puVar6 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_labelElement__;
  puVar5 = Method_UnityEngine_UIElements_BaseField<BoundsInt>__ctor__;
  puVar4 = Method_System_Xml_ArrayHelper<string,_short>_WriteArray__;
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
  ;
  puVar2 = 
  Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<XRInputModalityManager_InputMode>_TypeInfo
  ;
  puVar1 = PTR_DAT_067cd6c0;
                    /* try { // try from 0571e6e8 to 0581e6f3 has its CatchHandler @ 0571edc0 */
  if ((DAT_06bc07ba & 1) == 0) {
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>_ContainsKey__
                );
                    /* try { // try from 0571e724 to 0581e727 has its CatchHandler @ 0571ed20 */
                    /* try { // try from 0571e728 to 0581e737 has its CatchHandler @ 0571ed54 */
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(Method_System_Xml_ArrayHelper<string,_short>_WriteArray__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__);
                    /* try { // try from 0571e74c to 0581e74f has its CatchHandler @ 0571ed14 */
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<BoundsInt>__ctor__);
                    /* try { // try from 0571e750 to 0581e75b has its CatchHandler @ 0571ed60 */
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_set_highValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_formatString__);
    FUN_02f08768(PTR_DAT_067cd6b8);
    FUN_02f08768(PTR_DAT_067db960);
    FUN_02f08768(PTR_DAT_067d02e0);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_formatString__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<Type,_VolumeComponent>__ctor__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>__ctor__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_InvokeValueChangedCallbacks__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_highValue__);
                    /* try { // try from 0571e7d8 to 0581e7df has its CatchHandler @ 0571eca0 */
    FUN_02f08768(
                Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<NearFarInteractor_Region>_TypeInfo
                );
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_highValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_formatString__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Hash128>_get_labelElement__);
                    /* try { // try from 0571e80c to 0581e80f has its CatchHandler @ 0571ec5c */
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_highValue__);
                    /* try { // try from 0571e814 to 0581e81b has its CatchHandler @ 0571ecd0 */
    FUN_02f08768(PTR_DAT_067cd6c0);
                    /* try { // try from 0571e820 to 0581e82f has its CatchHandler @ 0571eccc */
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__);
                    /* try { // try from 0571e830 to 0581e84f has its CatchHandler @ 0571ecc8 */
    FUN_02f08768(
                Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<XRInputModalityManager_InputMode>_TypeInfo
                );
    DAT_06bc07ba = 1;
  }
  uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_0582534c(uVar11,*(undefined8 *)puVar2,*(undefined8 *)puVar1,0);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar11;
  uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_0582534c(uVar11,*(undefined8 *)puVar6,*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)puVar7,*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)puVar8,*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)puVar9,*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)
                       Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_highValue__,
               *(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_formatString__,
               *(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)
                       Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<NearFarInteractor_Region>_TypeInfo
               ,*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_formatString__,
               *(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)
                       Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__,
               *(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__,
               *(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)Method_Unity_AppUI_UI_BaseSlider<float,_float>__ctor__,
               *(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)PTR_DAT_067db960,*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)PTR_DAT_067d02e0,*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)
                       Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__,
               *(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)
                       Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_formatString__,
               *(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)PTR_DAT_067cd6b8,*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0582534c(uVar11,*(undefined8 *)
                       Method_System_Collections_Generic_Dictionary<Type,_VolumeComponent>__ctor__,
               *(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>_ContainsKey__
  ;
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98) = uVar11;
  plVar13 = (long *)FUN_02f0880c(uVar12,0x13);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar17 = **(long **)(*(long *)puVar4 + 0xb8);
  if ((lVar17 != 0) &&
     (lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
LAB_0571efe4:
    uVar11 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar11,0);
  }
  uVar16 = (ulong)*(uint *)(plVar13 + 3);
  if (uVar16 != 0) {
    plVar13[4] = lVar17;
    lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    if (lVar17 != 0) {
      lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
      if (lVar14 == 0) goto LAB_0571efe4;
      uVar16 = plVar13[3];
    }
    if ((uVar16 & 0xfffffffe) != 0) {
      plVar13[5] = lVar17;
      lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      if (lVar17 != 0) {
        lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar14 == 0) goto LAB_0571efe4;
        uVar16 = plVar13[3];
      }
      if (2 < (uint)uVar16) {
        plVar13[6] = lVar17;
        lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
        if (lVar17 != 0) {
          lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar14 == 0) goto LAB_0571efe4;
          uVar16 = plVar13[3];
        }
        if ((uVar16 & 0xfffffffc) != 0) {
          plVar13[7] = lVar17;
          lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
          if (lVar17 != 0) {
            lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar14 == 0) goto LAB_0571efe4;
            uVar16 = plVar13[3];
          }
          if (4 < (uint)uVar16) {
            plVar13[8] = lVar17;
            lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
            if (lVar17 != 0) {
              lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar14 == 0) goto LAB_0571efe4;
              uVar16 = plVar13[3];
            }
            if (5 < (uint)uVar16) {
              plVar13[9] = lVar17;
              lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
              if (lVar17 != 0) {
                lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar14 == 0) goto LAB_0571efe4;
                uVar16 = plVar13[3];
              }
              if (6 < (uint)uVar16) {
                plVar13[10] = lVar17;
                lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
                if (lVar17 != 0) {
                  lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
                  if (lVar14 == 0) goto LAB_0571efe4;
                  uVar16 = plVar13[3];
                }
                if ((uVar16 & 0xfffffff8) != 0) {
                  plVar13[0xb] = lVar17;
                  lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
                  if (lVar17 != 0) {
                    lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
                    if (lVar14 == 0) goto LAB_0571efe4;
                    uVar16 = plVar13[3];
                  }
                  if (8 < (uint)uVar16) {
                    plVar13[0xc] = lVar17;
                    lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
                    if (lVar17 != 0) {
                      lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
                      if (lVar14 == 0) goto LAB_0571efe4;
                      uVar16 = plVar13[3];
                    }
                    if (9 < (uint)uVar16) {
                      plVar13[0xd] = lVar17;
                      lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
                      if (lVar17 != 0) {
                        lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
                        if (lVar14 == 0) goto LAB_0571efe4;
                        uVar16 = plVar13[3];
                      }
                      if (10 < (uint)uVar16) {
                        plVar13[0xe] = lVar17;
                        lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
                        if (lVar17 != 0) {
                          lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
                          if (lVar14 == 0) goto LAB_0571efe4;
                          uVar16 = plVar13[3];
                        }
                        if (0xb < (uint)uVar16) {
                          plVar13[0xf] = lVar17;
                          lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
                          if (lVar17 != 0) {
                            lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
                            if (lVar14 == 0) goto LAB_0571efe4;
                            uVar16 = plVar13[3];
                          }
                          if (0xc < (uint)uVar16) {
                            plVar13[0x10] = lVar17;
                            lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
                            if (lVar17 != 0) {
                              lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40));
                              if (lVar14 == 0) goto LAB_0571efe4;
                              uVar16 = plVar13[3];
                            }
                            if (0xd < (uint)uVar16) {
                              plVar13[0x11] = lVar17;
                              lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70);
                              if (lVar17 != 0) {
                                lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar13 + 0x40))
                                ;
                                if (lVar14 == 0) goto LAB_0571efe4;
                                uVar16 = plVar13[3];
                              }
                              if (0xe < (uint)uVar16) {
                                plVar13[0x12] = lVar17;
                                lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78);
                                if (lVar17 != 0) {
                                  lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)
                                                                      (*plVar13 + 0x40));
                                  if (lVar14 == 0) goto LAB_0571efe4;
                                  uVar16 = plVar13[3];
                                }
                                uVar15 = (uint)uVar16;
                                if ((uVar16 & 0xfffffff0) != 0) {
                                  plVar13[0x13] = lVar17;
                                  lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80);
                                  if (lVar17 != 0) {
                                    lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)
                                                                        (*plVar13 + 0x40));
                                    if (lVar14 == 0) goto LAB_0571efe4;
                                    uVar15 = (uint)plVar13[3];
                                  }
                                  if (0x10 < uVar15) {
                                    plVar13[0x14] = lVar17;
                                    lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
                                    if (lVar17 != 0) {
                                      lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)
                                                                          (*plVar13 + 0x40));
                                      if (lVar14 == 0) goto LAB_0571efe4;
                                      uVar15 = *(uint *)(plVar13 + 3);
                                    }
                                    if (0x11 < uVar15) {
                                      plVar13[0x15] = lVar17;
                                      lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
                                      if (lVar17 != 0) {
                                        lVar14 = thunk_FUN_02f45174(lVar17,*(undefined8 *)
                                                                            (*plVar13 + 0x40));
                                        if (lVar14 == 0) goto LAB_0571efe4;
                                        uVar15 = *(uint *)(plVar13 + 3);
                                      }
                                      if (0x12 < uVar15) {
                                        plVar13[0x16] = lVar17;
                                        *(long **)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0) =
                                             plVar13;
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


