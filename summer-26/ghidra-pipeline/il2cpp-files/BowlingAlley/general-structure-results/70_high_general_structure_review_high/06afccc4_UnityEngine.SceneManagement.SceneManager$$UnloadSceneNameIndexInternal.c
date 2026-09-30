/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$UnloadSceneNameIndexInternal
ENTRY_POINT: 06afccc4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_18;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void UnityEngine_SceneManagement_SceneManager__UnloadSceneNameIndexInternal
               (ulong param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long unaff_x21;
  long *plVar10;
  undefined4 uVar11;
  
  plVar10 = *(long **)(unaff_x21 + 0x4f0);
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06afcc98 with catch @ 06afcccc
                        */
  if ((param_1 & 1) == 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06afcc90 with catch @ 06afccd0
                        */
    thunk_FUN_032e1da0(PTR_DAT_07284580);
    thunk_FUN_032e1da0(PTR_DAT_0727ad58);
                    /* try { // try from 06afcce8 to 06bfcceb has its CatchHandler @ 06afcd14 */
                    /* try { // try from 06afccec to 06bfcd23 has its CatchHandler @ 06afcc00 */
    thunk_FUN_032e1da0(PTR_DAT_0727b608);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_VisualScripting_TrackableManagerListener<ARTrackedObjectManager>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__ctor__
                      );
                    /* catch() { ... } // from try @ 06afcce8 with catch @ 06afcd14 */
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_VisualScripting_TrackablesChangedEventUnit<ARAnchorManager,_XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor,_ARAnchorsChangedEventArgs,_ARAnchorManagerListener>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727ad68);
                    /* try { // try from 06afcd24 to 06bfcd2b has its CatchHandler @ 06afcd40 */
                    /* try { // try from 06afcd2c to 06bfcd37 has its CatchHandler @ 06afcc00 */
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XREnvironmentProbe>_get_removed__
                      );
                    /* try { // try from 06afcd38 to 06bfcd3f has its CatchHandler @ 06afcd40 */
    thunk_FUN_032e1da0(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRSessionSubsystem>__ctor__
                      );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06afcd24 with catch @ 06afcd40
                       catch(type#2 @ 00000000) { ... } // from try @ 06afcd38 with catch @ 06afcd40
                        */
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__ctor__)
    ;
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Rect>__ctor__);
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<RectOffset>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_HasValue__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727b610);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRFace>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_0727b600);
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_IsEmpty__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_Value__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_XR_ARFoundation_ARAnchorManager_AddAnchor__);
    *(undefined1 *)(unaff_x20 + 0x3e4) = 1;
  }
  uVar8 = *(undefined8 *)(param_5 + 0x30);
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar1 = PTR_DAT_072798f8;
  uVar4 = FUN_06bece64(uVar8,0,0);
  puVar6 = (undefined8 *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_AddAnchor__;
  if ((uVar4 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_5 + 0x38);
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_06bece64(uVar8,0,0);
    puVar6 = (undefined8 *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_AddAnchor__;
    if ((uVar4 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_5 + 0x20);
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar4 = FUN_06bece64(uVar8,0,0);
      puVar6 = (undefined8 *)
               Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_IsEmpty__
      ;
      if ((((uVar4 & 1) == 0) &&
          (puVar6 = (undefined8 *)
                    Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_Value__
          , *(long *)(param_5 + 0x98) != 0)) && (*(long *)(param_5 + 0x90) != 0)) {
        if (*(long *)(param_5 + 0x20) != 0) {
          lVar9 = *(long *)(param_5 + 0x58);
          lVar5 = FUN_06be99dc(*(long *)(param_5 + 0x20),0);
          if (lVar5 != 0) {
            FUN_06bf4868(lVar5,0);
            FUN_066146ac(0);
            puVar1 = Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRFace>__ctor__;
            if (lVar9 != 0) {
              FUN_04ad6258(lVar9,*(undefined8 *)
                                  Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRFace>__ctor__
                          );
              puVar2 = PTR_DAT_0727ad58;
              lVar5 = *(long *)(param_5 + 0x70);
              lVar9 = *(long *)(param_5 + 0x58);
              uVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad58);
              FUN_051052b0(uVar8,param_5,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__ctor__
                           ,0);
              puVar3 = PTR_DAT_0727ad68;
              if ((lVar9 != 0) &&
                 (uVar8 = FUN_04b1f2f0(lVar9,uVar8,*(undefined8 *)PTR_DAT_0727ad68), lVar5 != 0)) {
                FUN_06a5b940(lVar5,uVar8,0);
                if (*(long *)(param_5 + 0x20) != 0) {
                  lVar9 = *(long *)(param_5 + 0x60);
                  lVar5 = FUN_06be99dc(*(long *)(param_5 + 0x20),0);
                  if ((lVar5 != 0) && (FUN_06bf2fbc(lVar5,0), lVar9 != 0)) {
                    FUN_04b1ca04(lVar9,*(undefined8 *)
                                        Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XREnvironmentProbe>_get_removed__
                                );
                    lVar5 = *(long *)(param_5 + 0x70);
                    lVar9 = *(long *)(param_5 + 0x60);
                    uVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                Method_UnityEngine_XR_ARFoundation_VisualScripting_TrackableManagerListener<ARTrackedObjectManager>__ctor__
                                              );
                    FUN_0501fc88(uVar8,param_5,
                                 *(undefined8 *)
                                  Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Rect>__ctor__
                                 ,0);
                    if ((lVar9 != 0) &&
                       (uVar8 = FUN_04b1cb08(lVar9,uVar8,
                                             *(undefined8 *)
                                              Method_UnityEngine_XR_ARFoundation_VisualScripting_TrackablesChangedEventUnit<ARAnchorManager,_XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor,_ARAnchorsChangedEventArgs,_ARAnchorManagerListener>__ctor__
                                            ), lVar5 != 0)) {
                      FUN_06a5b940(lVar5,uVar8,0);
                      if ((*(long *)(param_5 + 0x20) != 0) &&
                         (lVar5 = FUN_06be99dc(*(long *)(param_5 + 0x20),0), lVar5 != 0)) {
                        uVar11 = FUN_06bf4e88(lVar5,0);
                        lVar5 = *(long *)(param_5 + 0x68);
                        *(undefined4 *)(param_5 + 0xe0) = uVar11;
                        *(undefined4 *)(param_5 + 0xe4) = param_3;
                        *(undefined4 *)(param_5 + 0xe8) = param_4;
                        FUN_066146ac(0);
                        if (lVar5 != 0) {
                          FUN_04ad6258(lVar5,*(undefined8 *)puVar1);
                          lVar5 = *(long *)(param_5 + 0x68);
                          lVar9 = *(long *)(param_5 + 0x70);
                          uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                          FUN_051052b0(uVar8,param_5,
                                       *(undefined8 *)
                                        Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<RectOffset>__ctor__
                                       ,0);
                          if ((lVar5 != 0) &&
                             (uVar8 = FUN_04b1f2f0(lVar5,uVar8,*(undefined8 *)puVar3), lVar9 != 0))
                          {
                            FUN_06a5b940(lVar9,uVar8,0);
                            puVar1 = PTR_DAT_0727b600;
                            lVar5 = *(long *)(param_5 + 0x70);
                            if (*(int *)(*(long *)PTR_DAT_0727b600 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            if (DAT_076ce050 == '\0') {
                              thunk_FUN_032e1da0(PTR_DAT_0727b600);
                              DAT_076ce050 = '\x01';
                            }
                            lVar9 = *(long *)puVar1;
                            if (*(int *)(lVar9 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                              lVar9 = *(long *)puVar1;
                            }
                            plVar10 = (long *)**(undefined8 **)(lVar9 + 0xb8);
                            uVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727b608);
                            FUN_0501d53c(uVar8,param_5,
                                         *(undefined8 *)
                                          Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__ctor__
                                         ,0);
                            if (plVar10 != (long *)0x0) {
                              lVar9 = *plVar10;
                              uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                              if (uVar4 != 0) {
                                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0727b610) {
                                    puVar6 = (undefined8 *)
                                             (lVar9 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                                    goto LAB_06afd198;
                                  }
                                  uVar4 = uVar4 - 1;
                                  piVar7 = piVar7 + 4;
                                } while (uVar4 != 0);
                              }
                              puVar6 = (undefined8 *)
                                       FUN_032937ac(plVar10,*(long *)PTR_DAT_0727b610,1);
LAB_06afd198:
                              uVar8 = (*(code *)*puVar6)(plVar10,uVar8,puVar6[1]);
                              if (lVar5 != 0) {
                                FUN_06a5b940(lVar5,uVar8,0);
                                if (*(long *)(param_5 + 0xf0) != 0) {
                                  FUN_04b19bd4(*(long *)(param_5 + 0xf0),0,
                                               *(undefined8 *)
                                                Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRSessionSubsystem>__ctor__
                                              );
                                  lVar5 = *(long *)(param_5 + 0x70);
                                  lVar9 = *(long *)(param_5 + 0xf0);
                                  uVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
                                  FUN_0501b95c(uVar8,param_5,
                                               *(undefined8 *)
                                                Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_HasValue__
                                               ,0);
                                  if ((lVar9 != 0) &&
                                     (uVar8 = FUN_04b19e18(lVar9,uVar8,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__ctor__
                                                  ), lVar5 != 0)) {
                                    FUN_06a5b940(lVar5,uVar8,0);
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
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
    }
  }
  uVar8 = FUN_057a25c4(*puVar6,param_5,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  FUN_06bb2b08(uVar8,param_5,0);
  FUN_06be6010(param_5,0,0);
  return;
}


