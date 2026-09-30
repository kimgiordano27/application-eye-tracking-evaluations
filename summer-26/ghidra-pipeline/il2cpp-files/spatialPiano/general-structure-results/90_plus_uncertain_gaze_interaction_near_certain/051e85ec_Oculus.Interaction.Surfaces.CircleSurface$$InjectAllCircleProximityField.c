/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.CircleSurface$$InjectAllCircleProximityField
ENTRY_POINT: 051e85ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 216
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


long Oculus_Interaction_Surfaces_CircleSurface__InjectAllCircleProximityField
               (ulong param_1,long param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 *unaff_x20;
  int iVar15;
  ulong unaff_x22;
  undefined8 uVar16;
  long unaff_x24;
  undefined8 uVar17;
  undefined2 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fe0);
    FUN_02f08768(System_Collections_Generic_IReadOnlyCollection<HandJointId>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9ff0);
    FUN_02f08768(System_Collections_Generic_IReadOnlyCollection<IBoundsClipper>_TypeInfo);
    FUN_02f08768(System_EmptyArray<Type>_TypeInfo);
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
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar6 = thunk_FUN_02f45270(*unaff_x20);
  FUN_05116b38(lVar6,0);
  puVar2 = PTR_DAT_067ca7d0;
  if (lVar6 == 0) goto LAB_051e9114;
  *(undefined8 *)(lVar6 + 0x10) = param_3;
  FUN_051b97b0(param_3,*(undefined8 *)puVar2,0);
  uVar7 = FUN_051e9350(param_2,*(undefined8 *)(lVar6 + 0x10),0);
  lVar8 = FUN_051e9350(param_2,*(undefined8 *)(lVar6 + 0x10),1);
  uVar9 = FUN_051b9374(uVar7,0);
  if ((uVar9 & 1) == 0) {
    plVar10 = *(long **)(param_2 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_051e9114;
    lVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x180));
    if (lVar11 != 0) {
      if ((param_4 != 2) &&
         (uVar9 = FUN_051e945c(*(undefined8 *)(lVar11 + 0x30),0x40), (uVar9 & 1) == 0)) {
        if ((*(ulong *)(lVar11 + 0x30) & 0xff) == 0) {
          uVar9 = 0;
        }
        else {
          _uStack0000000000000008 = 0;
          FUN_03e1bd20(&stack0x00000008,(uint)(*(ulong *)(lVar11 + 0x30) >> 0x20) | 0x40,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                      );
          uVar9 = _uStack0000000000000008;
        }
        *(ulong *)(lVar11 + 0x30) = uVar9;
      }
      if ((unaff_x22 & 1) == 0) {
        return lVar11;
      }
      if ((0xff < *(ushort *)(lVar11 + 0x20)) && ((*(ushort *)(lVar11 + 0x20) & 0xff) != 0)) {
        return lVar11;
      }
      _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
      FUN_03e15c2c(&stack0x00000008,1,*(undefined8 *)PTR_DAT_067d1728);
      *(undefined2 *)(lVar11 + 0x20) = uStack0000000000000008;
      return lVar11;
    }
  }
  puVar3 = System_Collections_Generic_IReadOnlyCollection<IInteractor>_TypeInfo;
  puVar2 = System_Collections_Generic_IReadOnlyCollection<HandJointId>_TypeInfo;
  uVar16 = *(undefined8 *)(param_2 + 0x28);
  uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                              System_Collections_Generic_IReadOnlyCollection<IBoundsClipper>_TypeInfo
                            );
  FUN_04e0200c(uVar7,lVar6,*(undefined8 *)puVar3,0);
  uVar9 = FUN_033875b4(uVar16,uVar7,*(undefined8 *)puVar2);
  if ((uVar9 & 1) != 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar7 = FUN_050656a0(0);
    FUN_02a7da48(lVar6);
    plVar10 = *(long **)(lVar6 + 0x10);
    uVar16 = thunk_FUN_02f6ef30(System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo
                               );
    goto LAB_051e9154;
  }
  plVar10 = (long *)FUN_051e8028(param_2);
  puVar2 = System_Collections_Generic_HashSet<Event_Type>_TypeInfo;
  if (plVar10 == (long *)0x0) goto LAB_051e9114;
  lVar11 = *plVar10;
  uVar7 = *(undefined8 *)(lVar6 + 0x10);
  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo) {
        puVar12 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_051e88e4;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar12 = (undefined8 *)
            FUN_02f421d0(plVar10,*(long *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo,0)
  ;
LAB_051e88e4:
  plVar10 = (long *)(*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
  puVar3 = System_Collections_Generic_IReadOnlyCollection<IDisposable>_TypeInfo;
  if (plVar10 == (long *)0x0) goto LAB_051e9114;
  lVar11 = plVar10[0xe];
  if (lVar11 == 0) {
    lVar11 = plVar10[0xf];
  }
  uVar17 = *(undefined8 *)(lVar6 + 0x10);
  uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                              System_Collections_Generic_IList<CustomAttributeTypedArgument>_TypeInfo
                            );
  FUN_051e257c();
  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_051e9538(uVar16,uVar17,uVar7);
  uVar7 = FUN_051e80cc(param_2,uVar16);
  if (lVar8 != 0) {
    if (*(long *)(param_2 + 0x30) == 0) goto LAB_051e9114;
    *(long *)(*(long *)(param_2 + 0x30) + 0x10) = lVar8;
  }
  if ((unaff_x22 & 1) != 0) {
    lVar8 = *(long *)(param_2 + 0x30);
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
    uVar7 = FUN_03e15c2c(&stack0x00000008,1,*(undefined8 *)PTR_DAT_067d1728);
    if (lVar8 == 0) goto LAB_051e9114;
    *(undefined2 *)(lVar8 + 0x20) = uStack0000000000000008;
  }
  lVar8 = *(long *)(param_2 + 0x30);
  uVar7 = FUN_051e91a4(uVar7,*(undefined8 *)(lVar6 + 0x10));
  if (lVar8 == 0) goto LAB_051e9114;
  *(undefined8 *)(lVar8 + 0x18) = uVar7;
  lVar8 = *(long *)(param_2 + 0x30);
  uVar7 = FUN_051e9254(uVar7,*(undefined8 *)(lVar6 + 0x10));
  if (lVar8 == 0) goto LAB_051e9114;
  *(undefined8 *)(lVar8 + 0x28) = uVar7;
  if (lVar11 == 0) {
    iVar15 = *(int *)((long)plVar10 + 0x24);
    if (iVar15 < 5) {
      if (iVar15 < 3) {
        if (iVar15 == 1) {
          lVar8 = *(long *)(param_2 + 0x30);
          uVar5 = 0x10;
          if (param_4 != 2) {
            uVar5 = 0x50;
          }
          _uStack0000000000000008 = 0;
          FUN_03e1bd20(&stack0x00000008,uVar5,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                      );
          if (lVar8 == 0) goto LAB_051e9114;
          *(ulong *)(lVar8 + 0x30) = _uStack0000000000000008;
          lVar8 = *(long *)(param_2 + 0x30);
          uVar7 = FUN_051e9350(param_2,*(undefined8 *)(lVar6 + 0x10),0);
          puVar2 = System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo;
          if (lVar8 == 0) goto LAB_051e9114;
          *(undefined8 *)(lVar8 + 0x10) = uVar7;
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
LAB_051e9198:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar10);
          }
          FUN_051e95e4(param_2,*(undefined8 *)(lVar6 + 0x10),plVar10);
        }
        else {
          if (iVar15 != 2) goto LAB_051e8b74;
          lVar8 = *(long *)(param_2 + 0x30);
          uVar5 = 0x20;
          if (param_4 != 2) {
            uVar5 = 0x60;
          }
          _uStack0000000000000008 = 0;
          FUN_03e1bd20(&stack0x00000008,uVar5,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                      );
          if (lVar8 == 0) goto LAB_051e9114;
          *(ulong *)(lVar8 + 0x30) = _uStack0000000000000008;
          lVar8 = *(long *)(param_2 + 0x30);
          uVar7 = FUN_051e9350(param_2,*(undefined8 *)(lVar6 + 0x10),0);
          puVar2 = PTR_DAT_067ca198;
          if (lVar8 == 0) goto LAB_051e9114;
          *(undefined8 *)(lVar8 + 0x10) = uVar7;
          uVar7 = *(undefined8 *)(lVar6 + 0x10);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)puVar2);
          }
          lVar8 = FUN_03457768(uVar7,*(undefined8 *)
                                      System_Collections_Generic_IReadOnlyCollection<ICylinderClipper>_TypeInfo
                              );
          if (lVar8 == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = (uint)(*(char *)(lVar8 + 0x68) == '\0') << 1;
          }
          uVar7 = *(undefined8 *)(lVar6 + 0x10);
          if (*(int *)(*(long *)PTR_DAT_067ca168 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar7 = FUN_051b5cc4(uVar7,0);
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
          }
          uVar9 = FUN_050edfb8(uVar7,0,0);
          if ((uVar9 & 1) != 0) {
            lVar6 = *(long *)(param_2 + 0x30);
            uVar16 = thunk_FUN_02f45270(*(undefined8 *)
                                         System_Collections_Generic_IEnumerator<Type>_TypeInfo);
            FUN_03abf108(uVar16,*(undefined8 *)
                                 System_Collections_Generic_IEnumerator<Vector3>_TypeInfo);
            if (lVar6 == 0) goto LAB_051e9114;
            *(undefined8 *)(lVar6 + 0x98) = uVar16;
            if (*(long *)(param_2 + 0x30) == 0) goto LAB_051e9114;
            lVar6 = *(long *)(*(long *)(param_2 + 0x30) + 0x98);
            uVar7 = FUN_051e85bc(param_2,uVar7,iVar15,0);
            if (lVar6 == 0) goto LAB_051e9114;
            FUN_02a830c8(2,*(undefined8 *)
                            System_Collections_Generic_IEnumerator<XRGrabInteractable>_TypeInfo,
                         lVar6,uVar7);
          }
        }
      }
      else {
        if (iVar15 != 3) {
          if (iVar15 == 4) {
            lVar6 = plVar10[0xc];
            if (*(int *)(*(long *)PTR_DAT_067ca168 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar9 = FUN_051a4a94(lVar6,0);
            uVar5 = 0x41;
            if (param_4 == 2) {
              uVar5 = 1;
            }
            lVar6 = *(long *)(param_2 + 0x30);
            if ((uVar9 & 1) == 0) {
              uVar5 = 1;
            }
            uVar7 = *(undefined8 *)
                     System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
            ;
            goto LAB_051e89d8;
          }
          goto LAB_051e8b74;
        }
        lVar8 = *(long *)(param_2 + 0x30);
        uVar5 = FUN_051e9a74(uVar7,*(undefined8 *)(lVar6 + 0x10),param_4);
        _uStack0000000000000008 = 0;
        FUN_03e1bd20(&stack0x00000008,uVar5,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                    );
        if (lVar8 == 0) goto LAB_051e9114;
        *(ulong *)(lVar8 + 0x30) = _uStack0000000000000008;
        if (*(long *)(param_2 + 0x30) == 0) goto LAB_051e9114;
        uVar9 = *(ulong *)(*(long *)(param_2 + 0x30) + 0x30);
        if (((uVar9 >> 0x20 == 4) && ((uVar9 & 0xff) != 0)) &&
           (uVar9 = FUN_051ba310(*(undefined8 *)(lVar6 + 0x10),0), puVar2 = PTR_DAT_067c9338,
           (uVar9 & 1) != 0)) {
          plVar10 = *(long **)(lVar6 + 0x10);
          uVar7 = *(undefined8 *)PTR_DAT_067c9ff0;
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar7 = FUN_050e4454(uVar7,0);
          if (plVar10 == (long *)0x0) goto LAB_051e9114;
          uVar9 = (**(code **)(*plVar10 + 0x1f8))(plVar10,uVar7,1,*(undefined8 *)(*plVar10 + 0x200))
          ;
          if ((uVar9 & 1) == 0) {
            lVar8 = *(long *)(param_2 + 0x30);
            uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                        UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_Cell>_TypeInfo
                                      );
            FUN_03abf108(uVar7,*(undefined8 *)
                                UnityEngine_Rendering_DynamicArray<RendererListResource>_TypeInfo);
            puVar3 = PTR_DAT_067c9fe0;
            if (lVar8 != 0) {
              *(undefined8 *)(lVar8 + 0xe0) = uVar7;
              uVar7 = *(undefined8 *)(lVar6 + 0x10);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              lVar8 = FUN_051ac8bc(uVar7,0);
              puVar4 = System_EmptyArray<Type>_TypeInfo;
              puVar3 = PTR_DAT_067ca180;
              if ((lVar8 != 0) && (lVar11 = *(long *)(lVar8 + 0x20), lVar11 != 0)) {
                uVar9 = 0;
                while( true ) {
                  if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar9) goto LAB_051e89e8;
                  lVar11 = *(long *)(lVar8 + 0x18);
                  if (lVar11 == 0) break;
                  if (*(uint *)(lVar11 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  uVar16 = *(undefined8 *)(lVar6 + 0x10);
                  uVar7 = *(undefined8 *)(lVar11 + uVar9 * 8 + 0x20);
                  if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar7 = FUN_051091c8(uVar16,uVar7,0);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02f6670c(*(long *)puVar3);
                  }
                  uVar7 = FUN_05206b40(uVar7,0);
                  if ((*(long *)(param_2 + 0x30) == 0) ||
                     (plVar10 = *(long **)(*(long *)(param_2 + 0x30) + 0xe0), plVar10 == (long *)0x0
                     )) break;
                  lVar11 = *plVar10;
                  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                        puVar12 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                        goto LAB_051e8f3c;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar4,2);
LAB_051e8f3c:
                  (*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
                  lVar11 = *(long *)(lVar8 + 0x20);
                  uVar9 = uVar9 + 1;
                  if (lVar11 == 0) break;
                }
              }
            }
            goto LAB_051e9114;
          }
        }
      }
    }
    else if (iVar15 < 7) {
      if (iVar15 != 5) {
        if (iVar15 == 6) goto LAB_051e89bc;
LAB_051e8b74:
        thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
        FUN_02a7d698();
        uVar7 = FUN_050656a0(0);
        uVar16 = thunk_FUN_02f6ef30(
                                   System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo
                                   );
LAB_051e9154:
        uVar7 = FUN_051b937c(uVar16,uVar7,plVar10,0);
        thunk_FUN_02f6ef30(
                          UnityEngine_Pool_CollectionPool<List<GradientAlphaKey>,_GradientAlphaKey>_TypeInfo
                          );
        uVar16 = thunk_FUN_02f45270();
        FUN_0515dff4(uVar16,uVar7,0);
        uVar7 = thunk_FUN_02f6ef30(System_Collections_Generic_IReadOnlyCollection<int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar16,uVar7);
      }
      lVar8 = *(long *)(param_2 + 0x30);
      uVar5 = 0x10;
      if (param_4 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_03e1bd20(&stack0x00000008,uVar5,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                  );
      if (lVar8 == 0) goto LAB_051e9114;
      lVar11 = *(long *)PTR_DAT_067ca168;
      *(ulong *)(lVar8 + 0x30) = _uStack0000000000000008;
      uVar7 = *(undefined8 *)(lVar6 + 0x10);
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_051b5ee0(uVar7,&stack0x00000018,&stack0x00000010,0);
      uVar7 = in_stack_00000018;
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_050edfb8(uVar7,0,0);
      if ((uVar9 & 1) != 0) {
        lVar6 = FUN_051e8028(param_2);
        if ((lVar6 == 0) ||
           (lVar6 = FUN_02a830c8(0,*(undefined8 *)puVar2,lVar6,in_stack_00000018), lVar6 == 0))
        goto LAB_051e9114;
        if (*(int *)(lVar6 + 0x24) == 3) {
          lVar6 = *(long *)(param_2 + 0x30);
          uVar7 = FUN_051e85bc(param_2,in_stack_00000010,0,0);
          if (lVar6 == 0) goto LAB_051e9114;
          *(undefined8 *)(lVar6 + 0xc0) = uVar7;
        }
      }
    }
    else {
      if (iVar15 != 7) {
        if (iVar15 == 8) goto LAB_051e89bc;
        goto LAB_051e8b74;
      }
      lVar8 = *(long *)(param_2 + 0x30);
      uVar5 = 0x10;
      if (param_4 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_03e1bd20(&stack0x00000008,uVar5,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                  );
      if (lVar8 == 0) goto LAB_051e9114;
      *(ulong *)(lVar8 + 0x30) = _uStack0000000000000008;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar7 = FUN_051e9350(param_2,*(undefined8 *)(lVar6 + 0x10),0);
      puVar2 = System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo;
      if (lVar8 == 0) goto LAB_051e9114;
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
      goto LAB_051e9198;
      if (*(long *)(param_2 + 0x30) == 0) goto LAB_051e9114;
      *(undefined1 *)(*(long *)(param_2 + 0x30) + 0xd0) = 1;
    }
  }
  else {
LAB_051e89bc:
    uVar5 = 0x7f;
    lVar6 = *(long *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)
             System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
    ;
LAB_051e89d8:
    _uStack0000000000000008 = 0;
    FUN_03e1bd20(&stack0x00000008,uVar5,uVar7);
    if (lVar6 == 0) goto LAB_051e9114;
    *(ulong *)(lVar6 + 0x30) = _uStack0000000000000008;
  }
LAB_051e89e8:
  lVar6 = FUN_051e820c(param_2);
  if (lVar6 != 0) {
    return *(long *)(lVar6 + 0x18);
  }
LAB_051e9114:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


