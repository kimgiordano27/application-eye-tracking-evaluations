/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.ClippedCylinderSurface$$Raycast
ENTRY_POINT: 051e87a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 222
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_3
*/


long Oculus_Interaction_Surfaces_ClippedCylinderSurface__Raycast
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined2 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar7 = FUN_051e9350(param_1,param_2,1);
  uVar8 = FUN_051b9374();
  if ((uVar8 & 1) == 0) {
    if (*(long **)(unaff_x19 + 0x20) == (long *)0x0) goto LAB_051e9114;
    lVar9 = (**(code **)(**(long **)(unaff_x19 + 0x20) + 0x178))();
    if (lVar9 != 0) {
      if ((unaff_w21 != 2) &&
         (uVar8 = FUN_051e945c(*(undefined8 *)(lVar9 + 0x30),0x40), (uVar8 & 1) == 0)) {
        if ((*(ulong *)(lVar9 + 0x30) & 0xff) == 0) {
          uVar8 = 0;
        }
        else {
          _uStack0000000000000008 = 0;
          FUN_03e1bd20(&stack0x00000008,(uint)(*(ulong *)(lVar9 + 0x30) >> 0x20) | 0x40,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                      );
          uVar8 = _uStack0000000000000008;
        }
        *(ulong *)(lVar9 + 0x30) = uVar8;
      }
      if ((unaff_x22 & 1) == 0) {
        return lVar9;
      }
      if ((0xff < *(ushort *)(lVar9 + 0x20)) && ((*(ushort *)(lVar9 + 0x20) & 0xff) != 0)) {
        return lVar9;
      }
      _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
      FUN_03e15c2c(&stack0x00000008,1,*(undefined8 *)PTR_DAT_067d1728);
      *(undefined2 *)(lVar9 + 0x20) = uStack0000000000000008;
      return lVar9;
    }
  }
  puVar3 = System_Collections_Generic_IReadOnlyCollection<HandJointId>_TypeInfo;
  uVar15 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                               System_Collections_Generic_IReadOnlyCollection<IBoundsClipper>_TypeInfo
                             );
  FUN_04e0200c();
  uVar8 = FUN_033875b4(uVar15,uVar10,*(undefined8 *)puVar3);
  if ((uVar8 & 1) != 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar10 = FUN_050656a0(0);
    FUN_02a7da48();
    plVar11 = *(long **)(unaff_x20 + 0x10);
    uVar15 = thunk_FUN_02f6ef30(System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo
                               );
    goto LAB_051e9154;
  }
  plVar11 = (long *)FUN_051e8028();
  puVar3 = System_Collections_Generic_HashSet<Event_Type>_TypeInfo;
  if (plVar11 == (long *)0x0) goto LAB_051e9114;
  lVar9 = *plVar11;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo) {
        puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_051e88e4;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar12 = (undefined8 *)
            FUN_02f421d0(plVar11,*(long *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo,0)
  ;
LAB_051e88e4:
  plVar11 = (long *)(*(code *)*puVar12)(plVar11,uVar10,puVar12[1]);
  puVar4 = System_Collections_Generic_IReadOnlyCollection<IDisposable>_TypeInfo;
  if (plVar11 == (long *)0x0) goto LAB_051e9114;
  lVar9 = plVar11[0xe];
  if (lVar9 == 0) {
    lVar9 = plVar11[0xf];
  }
  uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                               System_Collections_Generic_IList<CustomAttributeTypedArgument>_TypeInfo
                             );
  FUN_051e257c();
  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_051e9538(uVar15,uVar16,uVar10);
  uVar10 = FUN_051e80cc();
  if (lVar7 != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_051e9114;
    *(long *)(*(long *)(unaff_x19 + 0x30) + 0x10) = lVar7;
  }
  if ((unaff_x22 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x30);
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
    uVar10 = FUN_03e15c2c(&stack0x00000008,1,*(undefined8 *)PTR_DAT_067d1728);
    if (lVar7 == 0) goto LAB_051e9114;
    *(undefined2 *)(lVar7 + 0x20) = uStack0000000000000008;
  }
  lVar7 = *(long *)(unaff_x19 + 0x30);
  uVar10 = FUN_051e91a4(uVar10,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar7 == 0) goto LAB_051e9114;
  *(undefined8 *)(lVar7 + 0x18) = uVar10;
  lVar7 = *(long *)(unaff_x19 + 0x30);
  uVar10 = FUN_051e9254(uVar10,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar7 == 0) goto LAB_051e9114;
  *(undefined8 *)(lVar7 + 0x28) = uVar10;
  if (lVar9 == 0) {
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
          uVar10 = FUN_051e9350();
          puVar3 = System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo;
          if (lVar7 == 0) goto LAB_051e9114;
          *(undefined8 *)(lVar7 + 0x10) = uVar10;
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
          lVar7 = *(long *)(unaff_x19 + 0x30);
          uVar6 = 0x20;
          if (unaff_w21 != 2) {
            uVar6 = 0x60;
          }
          _uStack0000000000000008 = 0;
          FUN_03e1bd20(&stack0x00000008,uVar6,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                      );
          if (lVar7 == 0) goto LAB_051e9114;
          *(ulong *)(lVar7 + 0x30) = _uStack0000000000000008;
          lVar7 = *(long *)(unaff_x19 + 0x30);
          uVar10 = FUN_051e9350();
          puVar3 = PTR_DAT_067ca198;
          if (lVar7 == 0) goto LAB_051e9114;
          *(undefined8 *)(lVar7 + 0x10) = uVar10;
          uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)puVar3);
          }
          FUN_03457768(uVar10,*(undefined8 *)
                               System_Collections_Generic_IReadOnlyCollection<ICylinderClipper>_TypeInfo
                      );
          uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
          if (*(int *)(*(long *)PTR_DAT_067ca168 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar10 = FUN_051b5cc4(uVar10,0);
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
          }
          uVar8 = FUN_050edfb8(uVar10,0,0);
          if ((uVar8 & 1) != 0) {
            lVar7 = *(long *)(unaff_x19 + 0x30);
            uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                         System_Collections_Generic_IEnumerator<Type>_TypeInfo);
            FUN_03abf108(uVar10,*(undefined8 *)
                                 System_Collections_Generic_IEnumerator<Vector3>_TypeInfo);
            if (lVar7 == 0) goto LAB_051e9114;
            *(undefined8 *)(lVar7 + 0x98) = uVar10;
            if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_051e9114;
            lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x98);
            uVar10 = FUN_051e85bc();
            if (lVar7 == 0) goto LAB_051e9114;
            FUN_02a830c8(2,*(undefined8 *)
                            System_Collections_Generic_IEnumerator<XRGrabInteractable>_TypeInfo,
                         lVar7,uVar10);
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
            uVar8 = FUN_051a4a94(lVar7,0);
            uVar6 = 0x41;
            if (unaff_w21 == 2) {
              uVar6 = 1;
            }
            lVar7 = *(long *)(unaff_x19 + 0x30);
            if ((uVar8 & 1) == 0) {
              uVar6 = 1;
            }
            uVar10 = *(undefined8 *)
                      System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
            ;
            goto LAB_051e89d8;
          }
          goto LAB_051e8b74;
        }
        lVar7 = *(long *)(unaff_x19 + 0x30);
        uVar6 = FUN_051e9a74(uVar10,*(undefined8 *)(unaff_x20 + 0x10),unaff_w21);
        _uStack0000000000000008 = 0;
        FUN_03e1bd20(&stack0x00000008,uVar6,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                    );
        if (lVar7 == 0) goto LAB_051e9114;
        *(ulong *)(lVar7 + 0x30) = _uStack0000000000000008;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_051e9114;
        uVar8 = *(ulong *)(*(long *)(unaff_x19 + 0x30) + 0x30);
        if (((uVar8 >> 0x20 == 4) && ((uVar8 & 0xff) != 0)) &&
           (uVar8 = FUN_051ba310(*(undefined8 *)(unaff_x20 + 0x10),0), puVar3 = PTR_DAT_067c9338,
           (uVar8 & 1) != 0)) {
          plVar11 = *(long **)(unaff_x20 + 0x10);
          uVar10 = *(undefined8 *)PTR_DAT_067c9ff0;
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar10 = FUN_050e4454(uVar10,0);
          if (plVar11 == (long *)0x0) goto LAB_051e9114;
          uVar8 = (**(code **)(*plVar11 + 0x1f8))
                            (plVar11,uVar10,1,*(undefined8 *)(*plVar11 + 0x200));
          if ((uVar8 & 1) == 0) {
            lVar7 = *(long *)(unaff_x19 + 0x30);
            uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                         UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_Cell>_TypeInfo
                                       );
            FUN_03abf108(uVar10,*(undefined8 *)
                                 UnityEngine_Rendering_DynamicArray<RendererListResource>_TypeInfo);
            puVar4 = PTR_DAT_067c9fe0;
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0xe0) = uVar10;
              uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              lVar7 = FUN_051ac8bc(uVar10,0);
              puVar5 = System_EmptyArray<Type>_TypeInfo;
              puVar4 = PTR_DAT_067ca180;
              if ((lVar7 != 0) && (lVar9 = *(long *)(lVar7 + 0x20), lVar9 != 0)) {
                uVar8 = 0;
                while( true ) {
                  if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar8) goto LAB_051e89e8;
                  lVar9 = *(long *)(lVar7 + 0x18);
                  if (lVar9 == 0) break;
                  if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
                  uVar10 = *(undefined8 *)(lVar9 + uVar8 * 8 + 0x20);
                  if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar10 = FUN_051091c8(uVar15,uVar10,0);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_02f6670c(*(long *)puVar4);
                  }
                  uVar10 = FUN_05206b40(uVar10,0);
                  if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                     (plVar11 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0),
                     plVar11 == (long *)0x0)) break;
                  lVar9 = *plVar11;
                  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                        puVar12 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                        goto LAB_051e8f3c;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar5,2);
LAB_051e8f3c:
                  (*(code *)*puVar12)(plVar11,uVar10,puVar12[1]);
                  lVar9 = *(long *)(lVar7 + 0x20);
                  uVar8 = uVar8 + 1;
                  if (lVar9 == 0) break;
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
        uVar10 = FUN_050656a0(0);
        uVar15 = thunk_FUN_02f6ef30(
                                   System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo
                                   );
LAB_051e9154:
        uVar10 = FUN_051b937c(uVar15,uVar10,plVar11,0);
        thunk_FUN_02f6ef30(
                          UnityEngine_Pool_CollectionPool<List<GradientAlphaKey>,_GradientAlphaKey>_TypeInfo
                          );
        uVar15 = thunk_FUN_02f45270();
        FUN_0515dff4(uVar15,uVar10,0);
        uVar10 = thunk_FUN_02f6ef30(System_Collections_Generic_IReadOnlyCollection<int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar15,uVar10);
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
      lVar9 = *(long *)PTR_DAT_067ca168;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000008;
      uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_051b5ee0(uVar10,&stack0x00000018,&stack0x00000010,0);
      uVar10 = in_stack_00000018;
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar8 = FUN_050edfb8(uVar10,0,0);
      if ((uVar8 & 1) != 0) {
        lVar7 = FUN_051e8028();
        if ((lVar7 == 0) ||
           (lVar7 = FUN_02a830c8(0,*(undefined8 *)puVar3,lVar7,in_stack_00000018), lVar7 == 0))
        goto LAB_051e9114;
        if (*(int *)(lVar7 + 0x24) == 3) {
          lVar7 = *(long *)(unaff_x19 + 0x30);
          uVar10 = FUN_051e85bc();
          if (lVar7 == 0) goto LAB_051e9114;
          *(undefined8 *)(lVar7 + 0xc0) = uVar10;
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
      uVar10 = FUN_051e9350();
      puVar3 = System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo;
      if (lVar7 == 0) goto LAB_051e9114;
      *(undefined8 *)(lVar7 + 0x10) = uVar10;
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
    uVar10 = *(undefined8 *)
              System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
    ;
LAB_051e89d8:
    _uStack0000000000000008 = 0;
    FUN_03e1bd20(&stack0x00000008,uVar6,uVar10);
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


