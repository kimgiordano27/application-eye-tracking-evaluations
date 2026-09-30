/*
FUNCTION_NAME: FUN_0788b550
ENTRY_POINT: 0788b550
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source
*/


/* WARNING: Removing unreachable block (ram,0x0788ca6c) */
/* WARNING: Removing unreachable block (ram,0x0788ca70) */
/* WARNING: Removing unreachable block (ram,0x0788cc48) */
/* WARNING: Removing unreachable block (ram,0x0788cb68) */

void FUN_0788b550(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  code *pcVar21;
  int *piVar22;
  undefined1 auVar23 [16];
  undefined8 local_150;
  undefined8 *puStack_148;
  ulong local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 *local_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 *puStack_f8;
  ulong local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  ulong local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong local_80;
  undefined1 local_70 [16];
  
  if ((DAT_089877ab & 1) == 0) {
    FUN_03a8a718(System_Collections_Generic_LinkedList<TextInfo>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_LinkedList<WeakReference>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_LinkedList<WebConnection>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<string>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<Type>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<UICharInfo>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<UIVertex>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<JsonSchemaGenerator_TypeSchema>_TypeInfo);
    FUN_03a8a718(Unity_Multiplayer_Tools_NetStats_IMetric<long>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_LinkedList<WebOperation>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_LinkedList<IMGUITextHandle_TextHandleTuple>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_UIR_LinkedPool<ExtraRenderData>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo);
    FUN_03a8a718(System_IObservable<InputEventPtr>_TypeInfo);
    FUN_03a8a718(System_IObserver<InputEventPtr>_TypeInfo);
    FUN_03a8a718(
                System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                );
    FUN_03a8a718(
                System_Collections_Generic_IReadOnlyCollection<KeyValuePair<ulong,_NetworkClient>>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<Expression>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<HDProbe>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<IMetric>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<IResettable>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListChangedEventHandler<Volume>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListChangedEventHandler<DebugUI_Widget>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<ValueTuple<HDProbe_RenderData,_HDProbe>>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<Camera>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<CameraPositionSettings>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<GUIContent>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<int>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo)
    ;
    FUN_03a8a718(
                System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<MetricId,_IEventMetric>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<RTHandle>_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848b5c8);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<RendererListHandle>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ListPool<Type>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<string,_SessionProperty>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<uint,_RealtimeModel>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<ulong,_PendingClient>_TypeInfo);
    DAT_089877ab = 1;
  }
  lVar17 = *(long *)(param_1 + 0x10);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_b0 = 0;
  lStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  puStack_f8 = (undefined8 *)0x0;
  local_100 = 0;
  local_110 = 0;
  uStack_108 = 0;
  if (lVar17 != 0) {
    (**(code **)(lVar17 + 0x18))
              (*(undefined8 *)(lVar17 + 0x40),param_2,*(undefined8 *)(lVar17 + 0x28));
  }
  puVar2 = PTR_DAT_0848b5c8;
  if (param_2 == (long *)0x0) goto LAB_0788cc50;
  lVar17 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0848b5c8) {
        puVar10 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_0788b8c4;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)PTR_DAT_0848b5c8,0);
LAB_0788b8c4:
  uVar20 = (*(code *)*puVar10)(param_2,puVar10[1]);
  if (((uVar20 & 1) != 0) && (lVar17 = *(long *)(param_1 + 0x58), lVar17 != 0)) {
    (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
  }
  lVar17 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 9) * 0x10 + 0x138);
        goto LAB_0788b93c;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,9);
LAB_0788b93c:
  (*(code *)*puVar10)(param_2,puVar10[1]);
  if ((extraout_x1 & 0xff) == 0) {
    lVar17 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 9) * 0x10 + 0x138);
          goto LAB_0788b9a0;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,9);
LAB_0788b9a0:
    (*(code *)*puVar10)(param_2,puVar10[1]);
    if ((extraout_x1_00 & 0xff00) != 0) goto LAB_0788b9b4;
  }
  else {
LAB_0788b9b4:
    lVar17 = *(long *)(param_1 + 0x18);
    if (lVar17 != 0) {
      lVar18 = *param_2;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar22 + 9) * 0x10 + 0x138);
            goto LAB_0788ba0c;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,9);
LAB_0788ba0c:
      uVar11 = (*(code *)*puVar10)(param_2,puVar10[1]);
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),uVar11,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 8) * 0x10 + 0x138);
        goto LAB_0788ba80;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,8);
LAB_0788ba80:
  (*(code *)*puVar10)(param_2,puVar10[1]);
  if ((extraout_x1_01 & 0xff) == 0) {
    lVar17 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 8) * 0x10 + 0x138);
          goto LAB_0788bae4;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,8);
LAB_0788bae4:
    (*(code *)*puVar10)(param_2,puVar10[1]);
    if ((extraout_x1_02 & 0xff00) != 0) goto LAB_0788baf8;
  }
  else {
LAB_0788baf8:
    lVar17 = *(long *)(param_1 + 0x20);
    if (lVar17 != 0) {
      lVar18 = *param_2;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar22 + 8) * 0x10 + 0x138);
            goto LAB_0788bb50;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,8);
LAB_0788bb50:
      uVar11 = (*(code *)*puVar10)(param_2,puVar10[1]);
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),uVar11,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  puVar3 = System_Collections_Generic_IReadOnlyCollection<IMetric>_TypeInfo;
  lVar17 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 7) * 0x10 + 0x138);
        goto LAB_0788bbcc;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788bbcc:
  puVar5 = System_Collections_Generic_LinkedList<WebOperation>_TypeInfo;
  local_70 = (*(code *)*puVar10)(param_2,puVar10[1]);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar20 = FUN_0584b198(local_70,*(undefined8 *)puVar5);
  if ((uVar20 & 1) == 0) {
    lVar17 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto LAB_0788bc5c;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788bc5c:
    auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
    local_70 = auVar23;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar20 = FUN_0584b0bc(local_70,*(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo);
    if ((uVar20 & 1) != 0) goto LAB_0788bd24;
    lVar17 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto FUN_0788bce8;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
FUN_0788bce8:
    auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
    local_70 = auVar23;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar20 = FUN_0584b040(local_70,*(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
    if ((uVar20 & 1) != 0) goto LAB_0788bd24;
  }
  else {
LAB_0788bd24:
    puVar6 = UnityEngine_Rendering_ListPool<CameraPositionSettings>_TypeInfo;
    puVar4 = UnityEngine_Rendering_ListChangedEventHandler<Volume>_TypeInfo;
    lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 UnityEngine_Rendering_ListPool<CameraPositionSettings>_TypeInfo);
    FUN_05f6dacc(lVar17,*(undefined8 *)puVar4);
    lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)puVar6);
    FUN_05f6dacc(lVar18,*(undefined8 *)puVar4);
    lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar6);
    FUN_05f6dacc(lVar12,*(undefined8 *)puVar4);
    lVar19 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto LAB_0788bdc0;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788bdc0:
    auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      local_70 = auVar23;
      thunk_FUN_03ae8be4(*(long *)puVar3);
      auVar23 = local_70;
    }
    if (auVar23._0_8_ == 0) {
      lVar17 = *(long *)(param_1 + 0x30);
      if (lVar17 == 0) {
        return;
      }
      pcVar21 = *(code **)(lVar17 + 0x18);
      uVar11 = *(undefined8 *)(lVar17 + 0x40);
      lVar18 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar23._8_8_;
      local_70 = auVar1 << 0x40;
      goto LAB_0788cc0c;
    }
    lVar19 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto LAB_0788be58;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    local_70 = auVar23;
    puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
    auVar23 = local_70;
LAB_0788be58:
    local_70 = auVar23;
    auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
    local_70 = auVar23;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar3);
    }
    if (local_70._0_8_ == 0) goto LAB_0788cc50;
    lVar19 = FUN_05f6e50c(local_70._0_8_,
                          *(undefined8 *)UnityEngine_Rendering_ListPool<Camera>_TypeInfo);
    puVar8 = UnityEngine_Rendering_ListPool<int>_TypeInfo;
    puVar7 = UnityEngine_Rendering_ListPool<ValueTuple<HDProbe_RenderData,_HDProbe>>_TypeInfo;
    puVar6 = UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>_TypeInfo;
    puVar4 = System_Collections_Generic_IReadOnlyCollection<IResettable>_TypeInfo;
    if (lVar19 == 0) goto LAB_0788cc50;
    FUN_04bac724(&local_150,lVar19,
                 *(undefined8 *)UnityEngine_Rendering_ListPool<RendererListHandle>_TypeInfo);
    local_80 = local_140;
    puStack_88 = puStack_148;
    local_90 = local_150;
    local_150 = 0;
    puStack_148 = &local_90;
    while( true ) {
      uVar13 = FUN_06289758(&local_90,*(undefined8 *)puVar8);
      uVar20 = local_80;
      if ((uVar13 & 1) == 0) break;
      lVar19 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar13 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
            goto LAB_0788bf4c;
          }
          uVar13 = uVar13 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788bf4c:
      auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
      local_70 = auVar23;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)puVar3);
      }
      uVar13 = FUN_0584b198(local_70,*(undefined8 *)puVar5);
      if ((uVar13 & 1) == 0) {
        lVar19 = *param_2;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
              goto LAB_0788bfd0;
            }
            uVar13 = uVar13 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788bfd0:
        auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
        local_70 = auVar23;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar3);
        }
        if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar23 = FUN_05f6e7c4(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
        local_a0 = auVar23;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar4);
        }
        uVar13 = FUN_0584b198(local_a0,*(undefined8 *)
                                        System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_TypeInfo
                             );
        if ((uVar13 & 1) != 0) goto LAB_0788c038;
        lVar19 = *param_2;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
              goto LAB_0788c130;
            }
            uVar13 = uVar13 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788c130:
        auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
        local_70 = auVar23;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar3);
        }
        uVar13 = FUN_0584b040(local_70,*(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
        if ((uVar13 & 1) == 0) {
          lVar19 = *param_2;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                goto LAB_0788c1bc;
              }
              uVar13 = uVar13 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788c1bc:
          auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
          local_70 = auVar23;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar3);
          }
          if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar23 = FUN_05f6e7c4(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
          local_a0 = auVar23;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar4);
          }
          uVar13 = FUN_0584b040(local_a0,*(undefined8 *)
                                          System_Collections_Generic_IReadOnlyCollection<KeyValuePair<ulong,_NetworkClient>>_TypeInfo
                               );
          if ((uVar13 & 1) != 0) goto LAB_0788c224;
          lVar19 = *param_2;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                goto LAB_0788c31c;
              }
              uVar13 = uVar13 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788c31c:
          auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
          local_70 = auVar23;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar3);
          }
          uVar13 = FUN_0584b0bc(local_70,*(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo);
          if ((uVar13 & 1) != 0) {
            lVar19 = *param_2;
            uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar13 != 0) {
              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                  goto LAB_0788c3a8;
                }
                uVar13 = uVar13 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788c3a8:
            auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
            local_70 = auVar23;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar3);
            }
            if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            auVar23 = FUN_05f6e7c4(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
            local_a0 = auVar23;
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar4);
            }
            uVar13 = FUN_0584b0bc(local_a0,*(undefined8 *)
                                            UnityEngine_UIElements_UIR_LinkedPool<ExtraRenderData>_TypeInfo
                                 );
            if ((uVar13 & 1) != 0) {
              lVar19 = *param_2;
              uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar13 != 0) {
                piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                    goto LAB_0788c460;
                  }
                  uVar13 = uVar13 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788c460:
              auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
              local_70 = auVar23;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)puVar3);
              }
              if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              auVar23 = FUN_05f6e7c4(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0(0,auVar23._8_8_,auVar23._0_8_);
              }
              FUN_05f6e848(lVar17,uVar20,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)puVar6);
            }
          }
        }
        else {
LAB_0788c224:
          lVar19 = *param_2;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                goto LAB_0788c2b4;
              }
              uVar13 = uVar13 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788c2b4:
          auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
          local_70 = auVar23;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar3);
          }
          if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar23 = FUN_05f6e7c4(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_05f6e848(lVar18,uVar20,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)puVar6);
        }
      }
      else {
LAB_0788c038:
        lVar19 = *param_2;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
              goto LAB_0788c0c8;
            }
            uVar13 = uVar13 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,7);
LAB_0788c0c8:
        auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
        local_70 = auVar23;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar3);
        }
        if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar23 = FUN_05f6e7c4(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6e848(lVar12,uVar20,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)puVar6);
      }
    }
    FUN_06289754(&local_90,*(undefined8 *)UnityEngine_Rendering_ListPool<GUIContent>_TypeInfo);
    puVar3 = UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo;
    if (lVar17 == 0) goto LAB_0788cc50;
    iVar9 = FUN_05f6e4fc(lVar17,*(undefined8 *)
                                 UnityEngine_Rendering_ListPool<ValueTuple<int,_float>>_TypeInfo);
    if ((0 < iVar9) && (lVar19 = *(long *)(param_1 + 0x28), lVar19 != 0)) {
      (**(code **)(lVar19 + 0x18))
                (*(undefined8 *)(lVar19 + 0x40),lVar17,*(undefined8 *)(lVar19 + 0x28));
    }
    if (lVar18 == 0) goto LAB_0788cc50;
    iVar9 = FUN_05f6e4fc(lVar18,*(undefined8 *)puVar3);
    if ((0 < iVar9) && (lVar17 = *(long *)(param_1 + 0x30), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar18,*(undefined8 *)(lVar17 + 0x28));
    }
    if (lVar12 == 0) goto LAB_0788cc50;
    iVar9 = FUN_05f6e4fc(lVar12,*(undefined8 *)puVar3);
    if ((0 < iVar9) && (lVar17 = *(long *)(param_1 + 0x38), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar12,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 10) * 0x10 + 0x138);
        goto LAB_0788c5c4;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,10);
LAB_0788c5c4:
  (*(code *)*puVar10)(param_2,puVar10[1]);
  if ((extraout_x1_03 & 0xff00) == 0) {
    lVar17 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 10) * 0x10 + 0x138);
          goto LAB_0788c628;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,10);
LAB_0788c628:
    (*(code *)*puVar10)(param_2,puVar10[1]);
    if ((extraout_x1_04 & 0xff) == 0) {
      return;
    }
  }
  puVar5 = UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo;
  puVar3 = UnityEngine_Rendering_ListChangedEventHandler<DebugUI_Widget>_TypeInfo;
  lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Rendering_ListPool<CubemapFace>_TypeInfo);
  FUN_05ed0550(lVar17,*(undefined8 *)puVar3);
  lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
  FUN_05ed0550(lVar12,*(undefined8 *)puVar3);
  lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
  FUN_05ed0550(lVar18,*(undefined8 *)puVar3);
  lVar19 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 10) * 0x10 + 0x138);
        goto LAB_0788c6d8;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar2,10);
LAB_0788c6d8:
  lVar19 = (*(code *)*puVar10)(param_2,puVar10[1]);
  puVar4 = UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo;
  puVar5 = System_Collections_Generic_LinkedList<IMGUITextHandle_TextHandleTuple>_TypeInfo;
  puVar3 = System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo;
  puVar10 = (undefined8 *)System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
  puVar2 = System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo;
  if (lVar19 != 0) {
    FUN_05ed172c(&local_150,lVar19,
                 *(undefined8 *)
                  System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo);
    local_b0 = local_130;
    local_118 = &local_d0;
    puStack_c8 = puStack_148;
    local_d0 = local_150;
    local_b8 = lStack_138;
    local_c0 = local_140;
    local_120 = 0;
    while( true ) {
      uVar13 = FUN_062727f4(&local_d0,*puVar10);
      lVar16 = local_b8;
      uVar20 = local_c0;
      lVar19 = local_120;
      if ((uVar13 & 1) == 0) break;
      if (local_b8 == 0) {
LAB_0788ca18:
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05ed12f0(lVar12,uVar20 & 0xffffffff,0,
                     *(undefined8 *)
                      UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo);
      }
      else {
        lVar19 = *(long *)(local_b8 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar19 == 0) goto LAB_0788ca18;
        lVar19 = *(long *)(lVar16 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6ec70(&local_150,lVar19,
                     *(undefined8 *)
                      System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo);
        local_100 = local_150;
        local_150 = 0;
        puStack_f8 = puStack_148;
        lStack_e8 = lStack_138;
        local_f0 = local_140;
        uStack_d8 = uStack_128;
        local_e0 = local_130;
        puStack_148 = &local_100;
        while( true ) {
          uVar14 = FUN_06289248(&local_100,*(undefined8 *)puVar3);
          uVar11 = local_e0;
          lVar19 = lStack_e8;
          uVar13 = local_f0;
          puVar10 = (undefined8 *)
                    System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
          if ((uVar14 & 1) == 0) break;
          local_110 = lStack_e8;
          uStack_108 = local_e0;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar14 = FUN_0584b198(&local_110,*(undefined8 *)puVar5);
          if ((uVar14 & 1) == 0) {
            local_110 = lVar19;
            uStack_108 = uVar11;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar14 = FUN_0584b040(&local_110,
                                  *(undefined8 *)
                                   System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                                 );
            if ((uVar14 & 1) == 0) {
              local_110 = lVar19;
              uStack_108 = uVar11;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar14 = FUN_0584b0bc(&local_110,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo);
              if ((uVar14 & 1) != 0) {
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                uVar14 = FUN_05ed14e4(lVar17,uVar20 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                     );
                if ((uVar14 & 1) == 0) {
                  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)
                                               UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                             );
                  FUN_05f6dacc(uVar15,*(undefined8 *)
                                       UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                              );
                  FUN_05ed12f0(lVar17,uVar20 & 0xffffffff,uVar15,
                               *(undefined8 *)
                                UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                              );
                }
                lVar16 = FUN_05ed1250(lVar17,uVar20 & 0xffffffff,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05f6e848(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar4);
              }
            }
            else {
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar14 = FUN_05ed14e4(lVar12,uVar20 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                   );
              if ((uVar14 & 1) == 0) {
                uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)
                                             UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo
                                           );
                FUN_05f6dacc(uVar15,*(undefined8 *)
                                     UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                            );
                FUN_05ed12f0(lVar12,uVar20 & 0xffffffff,uVar15,
                             *(undefined8 *)
                              UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                            );
              }
              lVar16 = FUN_05ed1250(lVar12,uVar20 & 0xffffffff,
                                    *(undefined8 *)
                                     UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05f6e848(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar4);
            }
          }
          else {
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar14 = FUN_05ed14e4(lVar18,uVar20 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo
                                 );
            if ((uVar14 & 1) == 0) {
              uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)
                                           UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
              FUN_05f6dacc(uVar15,*(undefined8 *)
                                   UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                          );
              FUN_05ed12f0(lVar18,uVar20 & 0xffffffff,uVar15,
                           *(undefined8 *)
                            UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo
                          );
            }
            lVar16 = FUN_05ed1250(lVar18,uVar20 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_05f6e848(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar4);
          }
        }
        FUN_06289384(&local_100,
                     *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
      }
    }
    FUN_06272918(local_118,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    puVar2 = UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo;
    if (lVar19 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9b8(lVar19);
    }
    if (lVar17 != 0) {
      iVar9 = FUN_05ed0f88(lVar17,*(undefined8 *)
                                   UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo
                          );
      if ((0 < iVar9) && (lVar19 = *(long *)(param_1 + 0x40), lVar19 != 0)) {
        (**(code **)(lVar19 + 0x18))
                  (*(undefined8 *)(lVar19 + 0x40),lVar17,*(undefined8 *)(lVar19 + 0x28));
      }
      if (lVar12 != 0) {
        iVar9 = FUN_05ed0f88(lVar12,*(undefined8 *)puVar2);
        if ((0 < iVar9) && (lVar17 = *(long *)(param_1 + 0x48), lVar17 != 0)) {
          (**(code **)(lVar17 + 0x18))
                    (*(undefined8 *)(lVar17 + 0x40),lVar12,*(undefined8 *)(lVar17 + 0x28));
        }
        if (lVar18 != 0) {
          iVar9 = FUN_05ed0f88(lVar18,*(undefined8 *)puVar2);
          if (iVar9 < 1) {
            return;
          }
          lVar17 = *(long *)(param_1 + 0x50);
          if (lVar17 == 0) {
            return;
          }
          pcVar21 = *(code **)(lVar17 + 0x18);
          uVar11 = *(undefined8 *)(lVar17 + 0x40);
LAB_0788cc0c:
          (*pcVar21)(uVar11,lVar18,*(undefined8 *)(lVar17 + 0x28));
          return;
        }
      }
    }
  }
LAB_0788cc50:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


