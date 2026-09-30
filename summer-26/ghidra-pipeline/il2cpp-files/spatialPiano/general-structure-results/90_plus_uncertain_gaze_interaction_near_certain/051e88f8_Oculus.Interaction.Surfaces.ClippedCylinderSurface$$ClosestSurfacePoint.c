/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.ClippedCylinderSurface$$ClosestSurfacePoint
ENTRY_POINT: 051e88f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 230
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_eye_source;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Oculus_Interaction_Surfaces_ClippedCylinderSurface__ClosestSurfacePoint(long *param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *plVar13;
  ulong unaff_x22;
  long lVar14;
  long unaff_x24;
  undefined8 uVar15;
  undefined8 *unaff_x28;
  long lVar16;
  undefined2 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar3 = System_Collections_Generic_IReadOnlyCollection<IDisposable>_TypeInfo;
  lVar16 = param_1[0xe];
  if (lVar16 == 0) {
    lVar16 = param_1[0xf];
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                              System_Collections_Generic_IList<CustomAttributeTypedArgument>_TypeInfo
                            );
  FUN_051e257c();
  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_051e9538(uVar8,uVar15,uVar7);
  uVar7 = FUN_051e80cc();
  if (unaff_x24 != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_051e9114;
    *(long *)(*(long *)(unaff_x19 + 0x30) + 0x10) = unaff_x24;
  }
  if ((unaff_x22 & 1) != 0) {
    lVar14 = *(long *)(unaff_x19 + 0x30);
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
    uVar7 = FUN_03e15c2c(&stack0x00000008,1,*(undefined8 *)PTR_DAT_067d1728);
    if (lVar14 == 0) goto LAB_051e9114;
    *(undefined2 *)(lVar14 + 0x20) = uStack0000000000000008;
  }
  lVar14 = *(long *)(unaff_x19 + 0x30);
  uVar7 = FUN_051e91a4(uVar7,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar14 == 0) goto LAB_051e9114;
  *(undefined8 *)(lVar14 + 0x18) = uVar7;
  lVar14 = *(long *)(unaff_x19 + 0x30);
  uVar7 = FUN_051e9254(uVar7,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar14 == 0) goto LAB_051e9114;
  *(undefined8 *)(lVar14 + 0x28) = uVar7;
  if (lVar16 != 0) goto LAB_051e89bc;
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        lVar16 = *(long *)(unaff_x19 + 0x30);
        uVar6 = 0x10;
        if (unaff_w21 != 2) {
          uVar6 = 0x50;
        }
        _uStack0000000000000008 = 0;
        FUN_03e1bd20(&stack0x00000008,uVar6,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                    );
        if (lVar16 == 0) goto LAB_051e9114;
        *(ulong *)(lVar16 + 0x30) = _uStack0000000000000008;
        lVar16 = *(long *)(unaff_x19 + 0x30);
        uVar7 = FUN_051e9350();
        puVar3 = System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo;
        if (lVar16 == 0) goto LAB_051e9114;
        *(undefined8 *)(lVar16 + 0x10) = uVar7;
        bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*param_1 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
LAB_051e9198:
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(param_1);
        }
        FUN_051e95e4();
      }
      else {
        if (iVar1 != 2) {
LAB_051e8b74:
          thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
          FUN_02a7d698();
          uVar7 = FUN_050656a0(0);
          uVar8 = thunk_FUN_02f6ef30(
                                    System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo
                                    );
          uVar7 = FUN_051b937c(uVar8,uVar7,param_1,0);
          thunk_FUN_02f6ef30(
                            UnityEngine_Pool_CollectionPool<List<GradientAlphaKey>,_GradientAlphaKey>_TypeInfo
                            );
          uVar8 = thunk_FUN_02f45270();
          FUN_0515dff4(uVar8,uVar7,0);
          uVar7 = thunk_FUN_02f6ef30(System_Collections_Generic_IReadOnlyCollection<int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar8,uVar7);
        }
        lVar16 = *(long *)(unaff_x19 + 0x30);
        uVar6 = 0x20;
        if (unaff_w21 != 2) {
          uVar6 = 0x60;
        }
        _uStack0000000000000008 = 0;
        FUN_03e1bd20(&stack0x00000008,uVar6,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                    );
        if (lVar16 == 0) goto LAB_051e9114;
        *(ulong *)(lVar16 + 0x30) = _uStack0000000000000008;
        lVar16 = *(long *)(unaff_x19 + 0x30);
        uVar7 = FUN_051e9350();
        puVar3 = PTR_DAT_067ca198;
        if (lVar16 == 0) goto LAB_051e9114;
        *(undefined8 *)(lVar16 + 0x10) = uVar7;
        uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar3);
        }
        FUN_03457768(uVar7,*(undefined8 *)
                            System_Collections_Generic_IReadOnlyCollection<ICylinderClipper>_TypeInfo
                    );
        uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
        if (*(int *)(*(long *)PTR_DAT_067ca168 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_051b5cc4(uVar7,0);
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
        }
        uVar10 = FUN_050edfb8(uVar7,0,0);
        if ((uVar10 & 1) != 0) {
          lVar16 = *(long *)(unaff_x19 + 0x30);
          uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                      System_Collections_Generic_IEnumerator<Type>_TypeInfo);
          FUN_03abf108(uVar7,*(undefined8 *)System_Collections_Generic_IEnumerator<Vector3>_TypeInfo
                      );
          if (lVar16 == 0) goto LAB_051e9114;
          *(undefined8 *)(lVar16 + 0x98) = uVar7;
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_051e9114;
          lVar16 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x98);
          uVar7 = FUN_051e85bc();
          if (lVar16 == 0) goto LAB_051e9114;
          FUN_02a830c8(2,*(undefined8 *)
                          System_Collections_Generic_IEnumerator<XRGrabInteractable>_TypeInfo,lVar16
                       ,uVar7);
        }
      }
    }
    else if (iVar1 == 3) {
      lVar16 = *(long *)(unaff_x19 + 0x30);
      uVar6 = FUN_051e9a74(uVar7,*(undefined8 *)(unaff_x20 + 0x10),unaff_w21);
      _uStack0000000000000008 = 0;
      FUN_03e1bd20(&stack0x00000008,uVar6,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                  );
      if (lVar16 == 0) goto LAB_051e9114;
      *(ulong *)(lVar16 + 0x30) = _uStack0000000000000008;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_051e9114;
      uVar10 = *(ulong *)(*(long *)(unaff_x19 + 0x30) + 0x30);
      if (((uVar10 >> 0x20 == 4) && ((uVar10 & 0xff) != 0)) &&
         (uVar10 = FUN_051ba310(*(undefined8 *)(unaff_x20 + 0x10),0), puVar3 = PTR_DAT_067c9338,
         (uVar10 & 1) != 0)) {
        plVar13 = *(long **)(unaff_x20 + 0x10);
        uVar7 = *(undefined8 *)PTR_DAT_067c9ff0;
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_050e4454(uVar7,0);
        if (plVar13 == (long *)0x0) goto LAB_051e9114;
        uVar10 = (**(code **)(*plVar13 + 0x1f8))(plVar13,uVar7,1,*(undefined8 *)(*plVar13 + 0x200));
        if ((uVar10 & 1) == 0) {
          lVar16 = *(long *)(unaff_x19 + 0x30);
          uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                      UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_Cell>_TypeInfo
                                    );
          FUN_03abf108(uVar7,*(undefined8 *)
                              UnityEngine_Rendering_DynamicArray<RendererListResource>_TypeInfo);
          puVar4 = PTR_DAT_067c9fe0;
          if (lVar16 != 0) {
            *(undefined8 *)(lVar16 + 0xe0) = uVar7;
            uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            lVar16 = FUN_051ac8bc(uVar7,0);
            puVar5 = System_EmptyArray<Type>_TypeInfo;
            puVar4 = PTR_DAT_067ca180;
            if ((lVar16 != 0) && (lVar14 = *(long *)(lVar16 + 0x20), lVar14 != 0)) {
              uVar10 = 0;
              while( true ) {
                if ((long)*(int *)(lVar14 + 0x18) <= (long)uVar10) goto LAB_051e89e8;
                lVar14 = *(long *)(lVar16 + 0x18);
                if (lVar14 == 0) break;
                if (*(uint *)(lVar14 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
                uVar7 = *(undefined8 *)(lVar14 + uVar10 * 8 + 0x20);
                if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar7 = FUN_051091c8(uVar8,uVar7,0);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_02f6670c(*(long *)puVar4);
                }
                uVar7 = FUN_05206b40(uVar7,0);
                if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                   (plVar13 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar13 == (long *)0x0
                   )) break;
                lVar14 = *plVar13;
                uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
                      puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                      goto LAB_051e8f3c;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar9 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar5,2);
LAB_051e8f3c:
                (*(code *)*puVar9)(plVar13,uVar7,puVar9[1]);
                lVar14 = *(long *)(lVar16 + 0x20);
                uVar10 = uVar10 + 1;
                if (lVar14 == 0) break;
              }
            }
          }
          goto LAB_051e9114;
        }
      }
    }
    else {
      if (iVar1 != 4) goto LAB_051e8b74;
      lVar16 = param_1[0xc];
      if (*(int *)(*(long *)PTR_DAT_067ca168 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_051a4a94(lVar16,0);
      uVar6 = 0x41;
      if (unaff_w21 == 2) {
        uVar6 = 1;
      }
      lVar16 = *(long *)(unaff_x19 + 0x30);
      if ((uVar10 & 1) == 0) {
        uVar6 = 1;
      }
      uVar7 = *(undefined8 *)
               System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
      ;
LAB_051e89d8:
      _uStack0000000000000008 = 0;
      FUN_03e1bd20(&stack0x00000008,uVar6,uVar7);
      if (lVar16 == 0) goto LAB_051e9114;
      *(ulong *)(lVar16 + 0x30) = _uStack0000000000000008;
    }
  }
  else if (iVar1 < 7) {
    if (iVar1 != 5) {
      if (iVar1 != 6) goto LAB_051e8b74;
LAB_051e89bc:
      uVar6 = 0x7f;
      lVar16 = *(long *)(unaff_x19 + 0x30);
      uVar7 = *(undefined8 *)
               System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
      ;
      goto LAB_051e89d8;
    }
    lVar16 = *(long *)(unaff_x19 + 0x30);
    uVar6 = 0x10;
    if (unaff_w21 != 2) {
      uVar6 = 0x50;
    }
    _uStack0000000000000008 = 0;
    FUN_03e1bd20(&stack0x00000008,uVar6,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    if (lVar16 == 0) goto LAB_051e9114;
    lVar14 = *(long *)PTR_DAT_067ca168;
    *(ulong *)(lVar16 + 0x30) = _uStack0000000000000008;
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_051b5ee0(uVar7,&stack0x00000018,&stack0x00000010,0);
    uVar7 = in_stack_00000018;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050edfb8(uVar7,0,0);
    if ((uVar10 & 1) != 0) {
      lVar16 = FUN_051e8028();
      if ((lVar16 == 0) ||
         (lVar16 = FUN_02a830c8(0,*unaff_x28,lVar16,in_stack_00000018), lVar16 == 0))
      goto LAB_051e9114;
      if (*(int *)(lVar16 + 0x24) == 3) {
        lVar16 = *(long *)(unaff_x19 + 0x30);
        uVar7 = FUN_051e85bc();
        if (lVar16 == 0) goto LAB_051e9114;
        *(undefined8 *)(lVar16 + 0xc0) = uVar7;
      }
    }
  }
  else {
    if (iVar1 != 7) {
      if (iVar1 != 8) goto LAB_051e8b74;
      goto LAB_051e89bc;
    }
    lVar16 = *(long *)(unaff_x19 + 0x30);
    uVar6 = 0x10;
    if (unaff_w21 != 2) {
      uVar6 = 0x50;
    }
    _uStack0000000000000008 = 0;
    FUN_03e1bd20(&stack0x00000008,uVar6,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    if (lVar16 == 0) goto LAB_051e9114;
    *(ulong *)(lVar16 + 0x30) = _uStack0000000000000008;
    lVar16 = *(long *)(unaff_x19 + 0x30);
    uVar7 = FUN_051e9350();
    puVar3 = System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo;
    if (lVar16 == 0) goto LAB_051e9114;
    *(undefined8 *)(lVar16 + 0x10) = uVar7;
    bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3))
    goto LAB_051e9198;
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_051e9114;
    *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 1;
  }
LAB_051e89e8:
  lVar16 = FUN_051e820c();
  if (lVar16 != 0) {
    return *(undefined8 *)(lVar16 + 0x18);
  }
LAB_051e9114:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


