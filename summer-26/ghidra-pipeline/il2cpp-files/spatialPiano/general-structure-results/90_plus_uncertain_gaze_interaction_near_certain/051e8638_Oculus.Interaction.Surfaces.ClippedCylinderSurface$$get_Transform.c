/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.ClippedCylinderSurface$$get_Transform
ENTRY_POINT: 051e8638
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 216
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


long Oculus_Interaction_Surfaces_ClippedCylinderSurface__get_Transform(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar16;
  long unaff_x24;
  undefined8 uVar17;
  undefined2 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_02f08768(System_Collections_Generic_IEnumerator<XRGrabInteractable>_TypeInfo);
  FUN_02f08768(System_Collections_Generic_HashSet<Event_Type>_TypeInfo);
  FUN_02f08768(PTR_DAT_067ca180);
  FUN_02f08768(System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo);
  FUN_02f08768(System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
  FUN_02f08768(System_Collections_Generic_IList<CustomAttributeTypedArgument>_TypeInfo);
  FUN_02f08768(System_Collections_Generic_IReadOnlyCollection<ICylinderClipper>_TypeInfo);
  FUN_02f08768(PTR_DAT_067ca198);
  FUN_02f08768(UnityEngine_Rendering_DynamicArray<RendererListResource>_TypeInfo);
  FUN_02f08768(System_Collections_Generic_IEnumerator<Vector3>_TypeInfo);
  FUN_02f08768(System_Collections_Generic_IEnumerator<Type>_TypeInfo);
  FUN_02f08768(UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_Cell>_TypeInfo);
  FUN_02f08768(PTR_DAT_067d1720);
  FUN_02f08768(
              System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
              );
  FUN_02f08768(PTR_DAT_067d1728);
  FUN_02f08768(
              System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
              );
  FUN_02f08768(
              System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
              );
  FUN_02f08768(PTR_DAT_067d1730);
  FUN_02f08768(PTR_DAT_067ca168);
  FUN_02f08768(System_Collections_Generic_IReadOnlyCollection<IDisposable>_TypeInfo);
  FUN_02f08768(System_Collections_Generic_IReadOnlyCollection<IInteractor>_TypeInfo);
  FUN_02f08768(System_Collections_Generic_IReadOnlyCollection<Guid>_TypeInfo);
  FUN_02f08768(PTR_DAT_067ca7d0);
  *(undefined1 *)(unaff_x24 + 0x5d5) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar7 = thunk_FUN_02f45270(*unaff_x20);
  FUN_05116b38(lVar7,0);
  if (lVar7 == 0) goto LAB_051e9114;
  *(undefined8 *)(lVar7 + 0x10) = unaff_x23;
  FUN_051b97b0();
  uVar8 = FUN_051e9350();
  lVar9 = FUN_051e9350();
  uVar10 = FUN_051b9374(uVar8,0);
  if ((uVar10 & 1) == 0) {
    plVar11 = *(long **)(unaff_x19 + 0x20);
    if (plVar11 == (long *)0x0) goto LAB_051e9114;
    lVar12 = (**(code **)(*plVar11 + 0x178))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x180));
    if (lVar12 != 0) {
      if ((unaff_w21 != 2) &&
         (uVar10 = FUN_051e945c(*(undefined8 *)(lVar12 + 0x30),0x40), (uVar10 & 1) == 0)) {
        if ((*(ulong *)(lVar12 + 0x30) & 0xff) == 0) {
          uVar10 = 0;
        }
        else {
          _uStack0000000000000008 = 0;
          FUN_03e1bd20(&stack0x00000008,(uint)(*(ulong *)(lVar12 + 0x30) >> 0x20) | 0x40,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                      );
          uVar10 = _uStack0000000000000008;
        }
        *(ulong *)(lVar12 + 0x30) = uVar10;
      }
      if ((unaff_x22 & 1) == 0) {
        return lVar12;
      }
      if ((0xff < *(ushort *)(lVar12 + 0x20)) && ((*(ushort *)(lVar12 + 0x20) & 0xff) != 0)) {
        return lVar12;
      }
      _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
      FUN_03e15c2c(&stack0x00000008,1,*(undefined8 *)PTR_DAT_067d1728);
      *(undefined2 *)(lVar12 + 0x20) = uStack0000000000000008;
      return lVar12;
    }
  }
  puVar4 = System_Collections_Generic_IReadOnlyCollection<IInteractor>_TypeInfo;
  puVar3 = System_Collections_Generic_IReadOnlyCollection<HandJointId>_TypeInfo;
  uVar16 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                              System_Collections_Generic_IReadOnlyCollection<IBoundsClipper>_TypeInfo
                            );
  FUN_04e0200c(uVar8,lVar7,*(undefined8 *)puVar4,0);
  uVar10 = FUN_033875b4(uVar16,uVar8,*(undefined8 *)puVar3);
  if ((uVar10 & 1) != 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar8 = FUN_050656a0(0);
    FUN_02a7da48(lVar7);
    plVar11 = *(long **)(lVar7 + 0x10);
    uVar16 = thunk_FUN_02f6ef30(System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo
                               );
    goto LAB_051e9154;
  }
  plVar11 = (long *)FUN_051e8028();
  puVar3 = System_Collections_Generic_HashSet<Event_Type>_TypeInfo;
  if (plVar11 == (long *)0x0) goto LAB_051e9114;
  lVar12 = *plVar11;
  uVar8 = *(undefined8 *)(lVar7 + 0x10);
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo) {
        puVar13 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_051e88e4;
      }
      uVar10 = uVar10 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar10 != 0);
  }
  puVar13 = (undefined8 *)
            FUN_02f421d0(plVar11,*(long *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo,0)
  ;
LAB_051e88e4:
  plVar11 = (long *)(*(code *)*puVar13)(plVar11,uVar8,puVar13[1]);
  puVar4 = System_Collections_Generic_IReadOnlyCollection<IDisposable>_TypeInfo;
  if (plVar11 == (long *)0x0) goto LAB_051e9114;
  lVar12 = plVar11[0xe];
  if (lVar12 == 0) {
    lVar12 = plVar11[0xf];
  }
  uVar17 = *(undefined8 *)(lVar7 + 0x10);
  uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                              System_Collections_Generic_IList<CustomAttributeTypedArgument>_TypeInfo
                            );
  FUN_051e257c();
  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_051e9538(uVar16,uVar17,uVar8);
  uVar8 = FUN_051e80cc();
  if (lVar9 != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_051e9114;
    *(long *)(*(long *)(unaff_x19 + 0x30) + 0x10) = lVar9;
  }
  if ((unaff_x22 & 1) != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x30);
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
    uVar8 = FUN_03e15c2c(&stack0x00000008,1,*(undefined8 *)PTR_DAT_067d1728);
    if (lVar9 == 0) goto LAB_051e9114;
    *(undefined2 *)(lVar9 + 0x20) = uStack0000000000000008;
  }
  lVar9 = *(long *)(unaff_x19 + 0x30);
  uVar8 = FUN_051e91a4(uVar8,*(undefined8 *)(lVar7 + 0x10));
  if (lVar9 == 0) goto LAB_051e9114;
  *(undefined8 *)(lVar9 + 0x18) = uVar8;
  lVar9 = *(long *)(unaff_x19 + 0x30);
  uVar8 = FUN_051e9254(uVar8,*(undefined8 *)(lVar7 + 0x10));
  if (lVar9 == 0) goto LAB_051e9114;
  *(undefined8 *)(lVar9 + 0x28) = uVar8;
  if (lVar12 == 0) {
    iVar1 = *(int *)((long)plVar11 + 0x24);
    if (iVar1 < 5) {
      if (iVar1 < 3) {
        if (iVar1 == 1) {
          lVar7 = *(long *)(unaff_x19 + 0x30);
          uVar6 = 0x10;
          if (unaff_w21 != 2) {
            uVar6 = 0x50;
          }
          _uStack0000000000000008 = 0;
          FUN_03e1bd20(&stack0x00000008,uVar6,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                      );
          if (lVar7 == 0) goto LAB_051e9114;
          *(ulong *)(lVar7 + 0x30) = _uStack0000000000000008;
          lVar7 = *(long *)(unaff_x19 + 0x30);
          uVar8 = FUN_051e9350();
          puVar3 = System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo;
          if (lVar7 == 0) goto LAB_051e9114;
          *(undefined8 *)(lVar7 + 0x10) = uVar8;
          bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
LAB_051e9198:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar11);
          }
          FUN_051e95e4();
        }
        else {
          if (iVar1 != 2) goto LAB_051e8b74;
          lVar9 = *(long *)(unaff_x19 + 0x30);
          uVar6 = 0x20;
          if (unaff_w21 != 2) {
            uVar6 = 0x60;
          }
          _uStack0000000000000008 = 0;
          FUN_03e1bd20(&stack0x00000008,uVar6,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                      );
          if (lVar9 == 0) goto LAB_051e9114;
          *(ulong *)(lVar9 + 0x30) = _uStack0000000000000008;
          lVar9 = *(long *)(unaff_x19 + 0x30);
          uVar8 = FUN_051e9350();
          puVar3 = PTR_DAT_067ca198;
          if (lVar9 == 0) goto LAB_051e9114;
          *(undefined8 *)(lVar9 + 0x10) = uVar8;
          uVar8 = *(undefined8 *)(lVar7 + 0x10);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)puVar3);
          }
          FUN_03457768(uVar8,*(undefined8 *)
                              System_Collections_Generic_IReadOnlyCollection<ICylinderClipper>_TypeInfo
                      );
          uVar8 = *(undefined8 *)(lVar7 + 0x10);
          if (*(int *)(*(long *)PTR_DAT_067ca168 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar8 = FUN_051b5cc4(uVar8,0);
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
          }
          uVar10 = FUN_050edfb8(uVar8,0,0);
          if ((uVar10 & 1) != 0) {
            lVar7 = *(long *)(unaff_x19 + 0x30);
            uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                        System_Collections_Generic_IEnumerator<Type>_TypeInfo);
            FUN_03abf108(uVar8,*(undefined8 *)
                                System_Collections_Generic_IEnumerator<Vector3>_TypeInfo);
            if (lVar7 == 0) goto LAB_051e9114;
            *(undefined8 *)(lVar7 + 0x98) = uVar8;
            if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_051e9114;
            lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x98);
            uVar8 = FUN_051e85bc();
            if (lVar7 == 0) goto LAB_051e9114;
            FUN_02a830c8(2,*(undefined8 *)
                            System_Collections_Generic_IEnumerator<XRGrabInteractable>_TypeInfo,
                         lVar7,uVar8);
          }
        }
      }
      else {
        if (iVar1 != 3) {
          if (iVar1 == 4) {
            lVar7 = plVar11[0xc];
            if (*(int *)(*(long *)PTR_DAT_067ca168 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar10 = FUN_051a4a94(lVar7,0);
            uVar6 = 0x41;
            if (unaff_w21 == 2) {
              uVar6 = 1;
            }
            lVar7 = *(long *)(unaff_x19 + 0x30);
            if ((uVar10 & 1) == 0) {
              uVar6 = 1;
            }
            uVar8 = *(undefined8 *)
                     System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
            ;
            goto LAB_051e89d8;
          }
          goto LAB_051e8b74;
        }
        lVar9 = *(long *)(unaff_x19 + 0x30);
        uVar6 = FUN_051e9a74(uVar8,*(undefined8 *)(lVar7 + 0x10),unaff_w21);
        _uStack0000000000000008 = 0;
        FUN_03e1bd20(&stack0x00000008,uVar6,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                    );
        if (lVar9 == 0) goto LAB_051e9114;
        *(ulong *)(lVar9 + 0x30) = _uStack0000000000000008;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_051e9114;
        uVar10 = *(ulong *)(*(long *)(unaff_x19 + 0x30) + 0x30);
        if (((uVar10 >> 0x20 == 4) && ((uVar10 & 0xff) != 0)) &&
           (uVar10 = FUN_051ba310(*(undefined8 *)(lVar7 + 0x10),0), puVar3 = PTR_DAT_067c9338,
           (uVar10 & 1) != 0)) {
          plVar11 = *(long **)(lVar7 + 0x10);
          uVar8 = *(undefined8 *)PTR_DAT_067c9ff0;
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar8 = FUN_050e4454(uVar8,0);
          if (plVar11 == (long *)0x0) goto LAB_051e9114;
          uVar10 = (**(code **)(*plVar11 + 0x1f8))
                             (plVar11,uVar8,1,*(undefined8 *)(*plVar11 + 0x200));
          if ((uVar10 & 1) == 0) {
            lVar9 = *(long *)(unaff_x19 + 0x30);
            uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                        UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_Cell>_TypeInfo
                                      );
            FUN_03abf108(uVar8,*(undefined8 *)
                                UnityEngine_Rendering_DynamicArray<RendererListResource>_TypeInfo);
            puVar4 = PTR_DAT_067c9fe0;
            if (lVar9 != 0) {
              *(undefined8 *)(lVar9 + 0xe0) = uVar8;
              uVar8 = *(undefined8 *)(lVar7 + 0x10);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              lVar9 = FUN_051ac8bc(uVar8,0);
              puVar5 = System_EmptyArray<Type>_TypeInfo;
              puVar4 = PTR_DAT_067ca180;
              if ((lVar9 != 0) && (lVar12 = *(long *)(lVar9 + 0x20), lVar12 != 0)) {
                uVar10 = 0;
                while( true ) {
                  if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar10) goto LAB_051e89e8;
                  lVar12 = *(long *)(lVar9 + 0x18);
                  if (lVar12 == 0) break;
                  if (*(uint *)(lVar12 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  uVar16 = *(undefined8 *)(lVar7 + 0x10);
                  uVar8 = *(undefined8 *)(lVar12 + uVar10 * 8 + 0x20);
                  if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar8 = FUN_051091c8(uVar16,uVar8,0);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_02f6670c(*(long *)puVar4);
                  }
                  uVar8 = FUN_05206b40(uVar8,0);
                  if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                     (plVar11 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0),
                     plVar11 == (long *)0x0)) break;
                  lVar12 = *plVar11;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                        puVar13 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                        goto LAB_051e8f3c;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar5,2);
LAB_051e8f3c:
                  (*(code *)*puVar13)(plVar11,uVar8,puVar13[1]);
                  lVar12 = *(long *)(lVar9 + 0x20);
                  uVar10 = uVar10 + 1;
                  if (lVar12 == 0) break;
                }
              }
            }
            goto LAB_051e9114;
          }
        }
      }
    }
    else if (iVar1 < 7) {
      if (iVar1 != 5) {
        if (iVar1 == 6) goto LAB_051e89bc;
LAB_051e8b74:
        thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
        FUN_02a7d698();
        uVar8 = FUN_050656a0(0);
        uVar16 = thunk_FUN_02f6ef30(
                                   System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo
                                   );
LAB_051e9154:
        uVar8 = FUN_051b937c(uVar16,uVar8,plVar11,0);
        thunk_FUN_02f6ef30(
                          UnityEngine_Pool_CollectionPool<List<GradientAlphaKey>,_GradientAlphaKey>_TypeInfo
                          );
        uVar16 = thunk_FUN_02f45270();
        FUN_0515dff4(uVar16,uVar8,0);
        uVar8 = thunk_FUN_02f6ef30(System_Collections_Generic_IReadOnlyCollection<int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar16,uVar8);
      }
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar6 = 0x10;
      if (unaff_w21 != 2) {
        uVar6 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_03e1bd20(&stack0x00000008,uVar6,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                  );
      if (lVar9 == 0) goto LAB_051e9114;
      lVar12 = *(long *)PTR_DAT_067ca168;
      *(ulong *)(lVar9 + 0x30) = _uStack0000000000000008;
      uVar8 = *(undefined8 *)(lVar7 + 0x10);
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_051b5ee0(uVar8,&stack0x00000018,&stack0x00000010,0);
      uVar8 = in_stack_00000018;
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_050edfb8(uVar8,0,0);
      if ((uVar10 & 1) != 0) {
        lVar7 = FUN_051e8028();
        if ((lVar7 == 0) ||
           (lVar7 = FUN_02a830c8(0,*(undefined8 *)puVar3,lVar7,in_stack_00000018), lVar7 == 0))
        goto LAB_051e9114;
        if (*(int *)(lVar7 + 0x24) == 3) {
          lVar7 = *(long *)(unaff_x19 + 0x30);
          uVar8 = FUN_051e85bc();
          if (lVar7 == 0) goto LAB_051e9114;
          *(undefined8 *)(lVar7 + 0xc0) = uVar8;
        }
      }
    }
    else {
      if (iVar1 != 7) {
        if (iVar1 == 8) goto LAB_051e89bc;
        goto LAB_051e8b74;
      }
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar6 = 0x10;
      if (unaff_w21 != 2) {
        uVar6 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_03e1bd20(&stack0x00000008,uVar6,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                  );
      if (lVar7 == 0) goto LAB_051e9114;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000008;
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar8 = FUN_051e9350();
      puVar3 = System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo;
      if (lVar7 == 0) goto LAB_051e9114;
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
      bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3))
      goto LAB_051e9198;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_051e9114;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 1;
    }
  }
  else {
LAB_051e89bc:
    uVar6 = 0x7f;
    lVar7 = *(long *)(unaff_x19 + 0x30);
    uVar8 = *(undefined8 *)
             System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
    ;
LAB_051e89d8:
    _uStack0000000000000008 = 0;
    FUN_03e1bd20(&stack0x00000008,uVar6,uVar8);
    if (lVar7 == 0) goto LAB_051e9114;
    *(ulong *)(lVar7 + 0x30) = _uStack0000000000000008;
  }
LAB_051e89e8:
  lVar7 = FUN_051e820c();
  if (lVar7 != 0) {
    return *(long *)(lVar7 + 0x18);
  }
LAB_051e9114:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


