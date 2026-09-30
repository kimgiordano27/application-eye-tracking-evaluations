/*
FUNCTION_NAME: Unity.Hierarchy.HierarchyCommandList$$Dispose
ENTRY_POINT: 05e29abc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Hierarchy_HierarchyCommandList__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long *plVar13;
  
  FUN_02d4dc40();
  FUN_02d4dc40(Method_UnityEngine_UIElements_ScrollView_OnVerticalSliderViewDataRestored__);
  FUN_02d4dc40(Method_UnityEngine_UIElements_ScrollView_PostPointerUpAnimation__);
  FUN_02d4dc40(PTR_DAT_0664ab68);
  FUN_02d4dc40(
              Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale__
              );
  FUN_02d4dc40(Method_System_Linq_Expressions_Scope1_GetExpression__);
  FUN_02d4dc40(Method_UnityEngine_UIElements_ScrollView_OnPointerCapture__);
  FUN_02d4dc40(Method_UnityEngine_ScriptableObject_CreateInstance<PlatformSettings>__);
  FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Value__);
  FUN_02d4dc40(Method_System_Runtime_Remoting_Messaging_ServerObjectReplySink_AsyncProcessMessage__)
  ;
  FUN_02d4dc40(Method_UnityEngine_UIElements_ScrollView_OnHorizontalScrollerSetValueWithoutNotify__)
  ;
  FUN_02d4dc40(PTR_DAT_066462d0);
  FUN_02d4dc40(
              Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale__
              );
  FUN_02d4dc40(Method_UnityEngine_XR_Management_XRGeneralSettings_Quit__);
  FUN_02d4dc40(PTR_DAT_06648148);
  FUN_02d4dc40(Method_UnityEngine_Rendering_VolumeStack_GetComponent<FilmGrain>__);
  FUN_02d4dc40(
              Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_GetOrAddComponent<XRGeneralGrabTransformer>__
              );
  FUN_02d4dc40(Method_UnityEngine_Rendering_VolumeParameter_GetValue<AnimationCurve>__);
  FUN_02d4dc40(Method_UnityEngine_Rendering_VolumeStack_GetComponent<LensDistortion>__);
  FUN_02d4dc40(
              Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_AddGrabTransformer__
              );
  FUN_02d4dc40(Method_UnityEngine_Rendering_VolumeStack_GetComponent<LiftGammaGain>__);
  FUN_02d4dc40(
              Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_EaseAttachBurst__
              );
  FUN_02d4dc40(
              Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_GetGrabTransformers__
              );
  FUN_02d4dc40(
              Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_MoveGrabTransformerTo__
              );
  FUN_02d4dc40(Method_UnityEngine_Rendering_VolumeStack_GetComponent<MotionBlur>__);
  FUN_02d4dc40(PTR_DAT_06648150);
  FUN_02d4dc40(Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__);
  FUN_02d4dc40(
              Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_OnCreatePooledItem__
              );
  FUN_02d4dc40(Method_UnityEngine_UIElements_TextEditingManipulator_<OnFocusInEvent>b__14_0__);
  *(undefined1 *)(unaff_x20 + 0x8b1) = 1;
  Unity_Hierarchy_HierarchyNodeTypeHandlerBase___cctor();
  puVar1 = PTR_DAT_066462d0;
  plVar13 = *(long **)(unaff_x19 + 0x90);
  if (plVar13 != (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_066462d0;
    if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      bVar7 = FUN_05ee1474(plVar13,0,0);
      *(byte *)(unaff_x19 + 0xd8) = bVar7 & 1;
      if ((bVar7 & 1) == 0) goto LAB_05e29c60;
      plVar13 = *(long **)(unaff_x19 + 0x90);
      uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                  Method_UnityEngine_UIElements_ScrollView_OnVerticalSliderViewDataRestored__
                                );
      FUN_04d28f90();
      puVar2 = Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Value__;
      if (plVar13 == (long *)0x0) {
LAB_05e2a684:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Value__)
          {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto FUN_05e29d28;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02d87540(plVar13,*(long *)
                                      Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Value__
                             ,0);
FUN_05e29d28:
      (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
      plVar13 = *(long **)(unaff_x19 + 0x90);
      uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                  Method_UnityEngine_UIElements_ScrollView_PostPointerUpAnimation__)
      ;
      FUN_04d28f90();
      if (plVar13 == (long *)0x0) goto LAB_05e2a684;
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_05e29db8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(plVar13,*(long *)puVar2,2);
LAB_05e29db8:
      (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
      puVar2 = Method_UnityEngine_ScriptableObject_CreateInstance<PlatformSettings>__;
      plVar13 = *(long **)(unaff_x19 + 0x98);
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_UnityEngine_ScriptableObject_CreateInstance<PlatformSettings>__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e29e24;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02d87540(plVar13,*(long *)
                                        Method_UnityEngine_ScriptableObject_CreateInstance<PlatformSettings>__
                               ,0);
LAB_05e29e24:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        puVar3 = Method_UnityEngine_Rendering_VolumeStack_GetComponent<FilmGrain>__;
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeStack_GetComponent<FilmGrain>__
                                  );
        FUN_03f43d64();
        puVar6 = Method_UnityEngine_Rendering_VolumeStack_GetComponent<MotionBlur>__;
        if (lVar8 == 0) goto LAB_05e2a684;
        FUN_03f4b588(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_VolumeStack_GetComponent<MotionBlur>__);
        plVar13 = *(long **)(unaff_x19 + 0x98);
        if (plVar13 == (long *)0x0) goto LAB_05e2a684;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05e29ed4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar13,*(long *)puVar2,1);
LAB_05e29ed4:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        puVar4 = Method_UnityEngine_Rendering_VolumeStack_GetComponent<LensDistortion>__;
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeStack_GetComponent<LensDistortion>__
                                  );
        FUN_03f43d64();
        puVar5 = Method_UnityEngine_Rendering_VolumeStack_GetComponent<LiftGammaGain>__;
        if (lVar8 == 0) goto LAB_05e2a684;
        FUN_03f4b588(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_VolumeStack_GetComponent<LiftGammaGain>__);
        plVar13 = *(long **)(unaff_x19 + 0x98);
        if (plVar13 == (long *)0x0) goto LAB_05e2a684;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_05e29f84;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar13,*(long *)puVar2,2);
LAB_05e29f84:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
        FUN_03f43d64();
        if (lVar8 == 0) goto LAB_05e2a684;
        FUN_03f4b588(lVar8,uVar9,*(undefined8 *)puVar6);
        plVar13 = *(long **)(unaff_x19 + 0x98);
        if (plVar13 == (long *)0x0) goto LAB_05e2a684;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_05e2a024;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar13,*(long *)puVar2,3);
LAB_05e2a024:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
        FUN_03f43d64();
        if (lVar8 == 0) goto LAB_05e2a684;
        FUN_03f4b588(lVar8,uVar9,*(undefined8 *)puVar5);
      }
      puVar2 = Method_UnityEngine_UIElements_ScrollView_OnHorizontalScrollerSetValueWithoutNotify__;
      plVar13 = *(long **)(unaff_x19 + 0xa0);
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 Method_UnityEngine_UIElements_ScrollView_OnHorizontalScrollerSetValueWithoutNotify__
               ) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e2a0c8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02d87540(plVar13,*(long *)
                                        Method_UnityEngine_UIElements_ScrollView_OnHorizontalScrollerSetValueWithoutNotify__
                               ,0);
LAB_05e2a0c8:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06648148);
        FUN_03f43d64();
        if (lVar8 == 0) goto LAB_05e2a684;
        FUN_03f4b588(lVar8,uVar9,*(undefined8 *)PTR_DAT_06648150);
        plVar13 = *(long **)(unaff_x19 + 0xa0);
        if (plVar13 == (long *)0x0) goto LAB_05e2a684;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05e2a178;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar13,*(long *)puVar2,1);
LAB_05e2a178:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter_GetValue<AnimationCurve>__
                                  );
        FUN_03f43d64();
        if (lVar8 == 0) goto LAB_05e2a684;
        FUN_03f4b588(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__);
      }
      puVar2 = Method_UnityEngine_UIElements_ScrollView_OnPointerCapture__;
      plVar13 = *(long **)(unaff_x19 + 0xa8);
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_UnityEngine_UIElements_ScrollView_OnPointerCapture__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e2a22c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02d87540(plVar13,*(long *)
                                        Method_UnityEngine_UIElements_ScrollView_OnPointerCapture__,
                               0);
LAB_05e2a22c:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                    Method_UnityEngine_XR_Management_XRGeneralSettings_Quit__);
        FUN_03f43d64();
        if (lVar8 == 0) goto LAB_05e2a684;
        FUN_03f4b588(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_MoveGrabTransformerTo__
                    );
        plVar13 = *(long **)(unaff_x19 + 0xa8);
        if (plVar13 == (long *)0x0) goto LAB_05e2a684;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05e2a2dc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar13,*(long *)puVar2,1);
LAB_05e2a2dc:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_GetOrAddComponent<XRGeneralGrabTransformer>__
                                  );
        FUN_03f43d64();
        if (lVar8 == 0) goto LAB_05e2a684;
        FUN_03f4b588(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_EaseAttachBurst__
                    );
      }
      puVar2 = Method_System_Linq_Expressions_Scope1_GetExpression__;
      plVar13 = *(long **)(unaff_x19 + 0xb0);
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Linq_Expressions_Scope1_GetExpression__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e2a390;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02d87540(plVar13,*(long *)
                                        Method_System_Linq_Expressions_Scope1_GetExpression__,0);
LAB_05e2a390:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_AddGrabTransformer__
                                  );
        FUN_03f43d64();
        if (lVar8 == 0) goto LAB_05e2a684;
        FUN_03f4b588(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_OnCreatePooledItem__
                    );
        plVar13 = *(long **)(unaff_x19 + 0xb0);
        if (plVar13 == (long *)0x0) goto LAB_05e2a684;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05e2a440;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar13,*(long *)puVar2,1);
LAB_05e2a440:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale__
                                  );
        FUN_03f43d64();
        if (lVar8 == 0) goto LAB_05e2a684;
        FUN_03f4b588(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_GetGrabTransformers__
                    );
      }
      plVar13 = *(long **)(unaff_x19 + 0xb8);
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 Method_System_Runtime_Remoting_Messaging_ServerObjectReplySink_AsyncProcessMessage__
               ) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e2a4f4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02d87540(plVar13,*(long *)
                                        Method_System_Runtime_Remoting_Messaging_ServerObjectReplySink_AsyncProcessMessage__
                               ,0);
LAB_05e2a4f4:
        plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                    System_Collections_Generic_IEnumerator<SwitchCase>_TypeInfo);
        FUN_04d2a320();
        if (plVar13 == (long *)0x0) goto LAB_05e2a684;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale__
               ) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e2a588;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02d87540(plVar13,*(long *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale__
                               ,0);
LAB_05e2a588:
        uVar9 = (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_05e2a684;
        FUN_05d4c280(*(long *)(unaff_x19 + 0x50),uVar9,0);
      }
      plVar13 = *(long **)(unaff_x19 + 0x90);
      *(undefined1 *)(unaff_x19 + 0xd9) = 0;
      if (plVar13 == (long *)0x0) {
LAB_05e2a61c:
        bVar7 = 1;
      }
      else {
        lVar8 = *plVar13;
        bVar7 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_TextEditingManipulator_<OnFocusInEvent>b__14_0__
                         + 0x130);
        if ((*(byte *)(lVar8 + 0x130) < bVar7) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_TextEditingManipulator_<OnFocusInEvent>b__14_0__)
           ) {
          bVar7 = *(byte *)(*(long *)PTR_DAT_0664ab68 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar7) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)PTR_DAT_0664ab68
             )) goto LAB_05e2a61c;
          bVar7 = FUN_05edd428(plVar13,0);
        }
        else {
          lVar8 = plVar13[7];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar11 = FUN_05ee1474(lVar8,0,0);
          if ((uVar11 & 1) == 0) {
            bVar7 = 0;
          }
          else {
            if (plVar13[7] == 0) goto LAB_05e2a684;
            bVar7 = FUN_05d5d1f0(plVar13[7],*(undefined8 *)(unaff_x19 + 0x90),0);
          }
        }
        bVar7 = bVar7 & 1;
      }
      *(byte *)(unaff_x19 + 0xda) = bVar7;
      goto LAB_05e29c60;
    }
  }
  *(undefined1 *)(unaff_x19 + 0xd8) = 0;
LAB_05e29c60:
  FUN_05e288d8();
  return;
}


