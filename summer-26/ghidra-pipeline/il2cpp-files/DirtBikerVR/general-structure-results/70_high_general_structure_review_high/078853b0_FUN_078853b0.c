/*
FUNCTION_NAME: FUN_078853b0
ENTRY_POINT: 078853b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x07886788) */
/* WARNING: Removing unreachable block (ram,0x0788678c) */
/* WARNING: Removing unreachable block (ram,0x07886abc) */
/* WARNING: Removing unreachable block (ram,0x07886818) */
/* WARNING: Removing unreachable block (ram,0x07886c64) */

void FUN_078853b0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined8 local_1a0;
  undefined8 *puStack_198;
  ulong local_190;
  long lStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 *puStack_158;
  ulong local_150;
  long lStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  ulong uStack_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  ulong local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  ulong local_c0;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  if ((DAT_08987780 & 1) == 0) {
    FUN_03a8a718(System_Collections_Generic_IList<SortColumnDescription>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<string>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<Task>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<TimelineClip>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<Type>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<UICharInfo>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<UILineInfo>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<UIVertex>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<XmlAttribute>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<XmlNode>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<JsonSchemaGenerator_TypeSchema>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IList<TextureBlitter_BlitInfo>_TypeInfo);
    FUN_03a8a718(System_Buffers_IMemoryOwner<IntPtr>_TypeInfo);
    FUN_03a8a718(Unity_Multiplayer_Tools_NetStats_IMetric<long>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo);
    FUN_03a8a718(System_IObservable<InputEventPtr>_TypeInfo);
    FUN_03a8a718(System_IObserver<InputEventPtr>_TypeInfo);
    FUN_03a8a718(System_IObserver<InputRemoting_Message>_TypeInfo);
    FUN_03a8a718(
                System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                );
    FUN_03a8a718(
                System_Collections_Generic_IReadOnlyCollection<KeyValuePair<ulong,_NetworkClient>>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<byte>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<Expression>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<Guid>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<HDProbe>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<IMetric>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<IResettable>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084895f8);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<int>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<NetworkClient>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<ParameterExpression>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<Realtime>_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848af20);
    FUN_03a8a718(PTR_DAT_0848adf8);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<RealtimeModel>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<RuntimeElement>_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848af28);
    FUN_03a8a718(PTR_DAT_0848ae00);
    FUN_03a8a718(PTR_DAT_0848c840);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<SortColumnDescription>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848c848);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<Vector2>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo)
    ;
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<long>>_TypeInfo);
    FUN_03a8a718(
                System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<MetricId,_IEventMetric>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<string,_ConfigurationEntry>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_0848c850);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<string,_IUnityServices>_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848b5c8);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<string,_PlayerProperty>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<string,_SessionProperty>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<uint,_RealtimeModel>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<ulong,_NetworkClient>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyDictionary<ulong,_PendingClient>_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_IReadOnlyDictionary<ChannelId,_IChannelSession>_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848c858);
    FUN_03a8a718(Unity_Services_Vivox_IReadOnlyDictionary<string,_IAudioDevice>_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_IReadOnlyDictionary<string,_IParticipant>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08489610);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyList<byte>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyList<Expression>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyList<HDProbe>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyList<IEventMetric>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyList<IMetric>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyList<IResettable>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_IReadOnlyList<InputDevice>_TypeInfo);
    DAT_08987780 = 1;
  }
  plVar19 = (long *)PTR_DAT_0848b5c8;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  lStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  puStack_118 = (undefined8 *)0x0;
  local_120 = 0;
  local_108 = 0;
  uStack_110 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_f0 = 0;
  lStack_d8 = 0;
  local_e0 = 0;
  lStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  local_100 = 0;
  local_130 = 0;
  uStack_128 = 0;
  puStack_158 = (undefined8 *)0x0;
  local_160 = 0;
  local_170 = 0;
  uStack_168 = 0;
  auVar21 = ZEXT816(0);
  if (param_1 != (long *)0x0) {
    lVar15 = *param_1;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0848b5c8) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xc) * 0x10 + 0x138);
          goto LAB_07885800;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*(long *)PTR_DAT_0848b5c8,0xc);
LAB_07885800:
    iVar8 = (*(code *)*puVar11)(param_1,puVar11[1]);
    auVar21._8_8_ = local_70._8_8_;
    auVar21._0_8_ = local_70._0_8_;
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x70) < iVar8) {
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_07885868;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,0);
LAB_07885868:
        uVar17 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar17 & 1) != 0) {
          FUN_078c790c(*(undefined8 *)System_Collections_Generic_IReadOnlyList<InputDevice>_TypeInfo
                       ,0);
          return;
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_078858f8;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,1);
LAB_078858f8:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0788595c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,1);
LAB_0788595c:
          uVar12 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined8 *)(param_2 + 0x30) = uVar12;
          thunk_FUN_03afed3c();
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
              goto LAB_078859c8;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,2);
LAB_078859c8:
        uVar9 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar9 >> 8 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_07885a2c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,2);
LAB_07885a2c:
          cVar7 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(bool *)(param_2 + 0x40) = cVar7 != '\0';
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
              goto LAB_07885a94;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,3);
LAB_07885a94:
        uVar9 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar9 >> 8 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
                goto LAB_07885af8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,3);
LAB_07885af8:
          cVar7 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(bool *)(param_2 + 0x41) = cVar7 != '\0';
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
              goto LAB_07885b60;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,4);
LAB_07885b60:
        uVar9 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar9 >> 8 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
                goto LAB_07885bc4;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,4);
LAB_07885bc4:
          cVar7 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(bool *)(param_2 + 0x42) = cVar7 != '\0';
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 5) * 0x10 + 0x138);
              goto LAB_07885c2c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,5);
LAB_07885c2c:
        uVar17 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar17 & 0xff00000000) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                goto LAB_07885c90;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,5);
LAB_07885c90:
          uVar10 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined4 *)(param_2 + 0x3c) = uVar10;
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
              goto LAB_07885cf0;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,6);
LAB_07885cf0:
        uVar17 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar17 & 0xff00000000) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                goto LAB_07885d54;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,6);
LAB_07885d54:
          uVar10 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined4 *)(param_2 + 0x38) = uVar10;
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 7) * 0x10 + 0x138);
              goto LAB_07885db4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,7);
LAB_07885db4:
        local_70 = (*(code *)*puVar11)(param_1,puVar11[1]);
        puVar1 = System_Collections_Generic_IReadOnlyCollection<IMetric>_TypeInfo;
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<IMetric>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_0584b040(local_70,*(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
        if ((uVar17 & 1) == 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                goto LAB_07885e64;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,7);
LAB_07885e64:
          auVar21 = (*(code *)*puVar11)(param_1,puVar11[1]);
          local_70 = auVar21;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar17 = FUN_0584b0bc(local_70,*(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo);
          if ((uVar17 & 1) != 0) {
            plVar13 = (long *)(param_2 + 0x50);
            if (*plVar13 == 0) {
              lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848af28);
              FUN_05f9f7c4(lVar15,*(undefined8 *)PTR_DAT_0848af20);
              *plVar13 = lVar15;
              thunk_FUN_03afed3c(plVar13,lVar15);
            }
            lVar15 = *param_1;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *plVar19) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                  goto LAB_07885f30;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,7);
LAB_07885f30:
            auVar21 = (*(code *)*puVar11)(param_1,puVar11[1]);
            lVar15 = *(long *)puVar1;
            local_70 = auVar21;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(lVar15);
            }
            auVar21 = local_70;
            if (local_70._0_8_ == 0) goto LAB_07886aac;
            FUN_05f6ec70(&local_1a0,local_70._0_8_,
                         *(undefined8 *)
                          System_Collections_Generic_IReadOnlyCollection<NetworkClient>_TypeInfo);
            puVar5 = System_Collections_Generic_IReadOnlyCollection<Vector2>_TypeInfo;
            puVar4 = System_Collections_Generic_IReadOnlyCollection<RuntimeElement>_TypeInfo;
            puVar3 = System_Collections_Generic_IReadOnlyCollection<ParameterExpression>_TypeInfo;
            puVar2 = System_Collections_Generic_IReadOnlyCollection<IResettable>_TypeInfo;
            puVar1 = 
            System_Collections_Generic_IReadOnlyCollection<KeyValuePair<ulong,_NetworkClient>>_TypeInfo
            ;
            puStack_98 = puStack_198;
            local_a0 = local_1a0;
            lStack_88 = lStack_188;
            local_90 = local_190;
            puStack_198 = &local_a0;
            uStack_78 = uStack_178;
            local_80 = local_180;
            local_1a0 = 0;
            while (uVar14 = FUN_06289248(&local_a0,*(undefined8 *)puVar5), uVar12 = local_80,
                  lVar15 = lStack_88, uVar17 = local_90, (uVar14 & 1) != 0) {
              local_b0 = lStack_88;
              uStack_a8 = local_80;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar14 = FUN_0584b040(&local_b0,*(undefined8 *)puVar1);
              lVar16 = *plVar13;
              if ((uVar14 & 1) == 0) {
                local_b0 = lVar15;
                uStack_a8 = uVar12;
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05fa052c(lVar16,uVar17,local_b0,*(undefined8 *)puVar4);
              }
              else {
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05fa1a5c(lVar16,uVar17,*(undefined8 *)puVar3);
              }
            }
            FUN_06289384(&local_a0,
                         *(undefined8 *)
                          System_Collections_Generic_IReadOnlyCollection<SortColumnDescription>_TypeInfo
                        );
            plVar19 = (long *)PTR_DAT_0848b5c8;
          }
        }
        else if (*(long *)(param_2 + 0x50) != 0) {
          FUN_05fa06c8(*(long *)(param_2 + 0x50),
                       *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<int>_TypeInfo);
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 8) * 0x10 + 0x138);
              goto LAB_078860b4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,8);
LAB_078860b4:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1_00 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 8) * 0x10 + 0x138);
                goto LAB_07886118;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,8);
LAB_07886118:
          lVar15 = (*(code *)*puVar11)(param_1,puVar11[1]);
          puVar1 = System_Collections_Generic_IReadOnlyList<IResettable>_TypeInfo;
          lVar16 = *(long *)System_Collections_Generic_IReadOnlyList<IResettable>_TypeInfo;
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(lVar16);
            lVar16 = *(long *)puVar1;
          }
          puVar11 = *(undefined8 **)(lVar16 + 0xb8);
          lVar20 = puVar11[1];
          if (lVar20 == 0) {
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(lVar16);
              puVar11 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar12 = *puVar11;
            lVar20 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084895f8);
            FUN_05d14b18(lVar20,uVar12,
                         *(undefined8 *)System_Collections_Generic_IReadOnlyList<IMetric>_TypeInfo,0
                        );
            plVar13 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar13 = lVar20;
            thunk_FUN_03afed3c(plVar13,lVar20);
          }
          auVar21 = local_70;
          if (lVar15 == 0) goto LAB_07886aac;
          FUN_04d8dba4(lVar15,lVar20,*(undefined8 *)PTR_DAT_08489610);
          FUN_04d8cc6c(&local_1a0,lVar15,*(undefined8 *)PTR_DAT_0848c858);
          puVar2 = Unity_Services_Vivox_IReadOnlyDictionary<string,_IParticipant>_TypeInfo;
          puVar1 = PTR_DAT_0848c848;
          puStack_c8 = puStack_198;
          local_d0 = local_1a0;
          local_c0 = local_190;
          local_1a0 = 0;
          puStack_198 = &local_d0;
          while (uVar17 = FUN_061ac870(&local_d0,*(undefined8 *)puVar1), (uVar17 & 1) != 0) {
            if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_04de9d78(*(long *)(param_2 + 0x48),local_c0 & 0xffffffff,*(undefined8 *)puVar2);
          }
          FUN_061ac86c(&local_d0,*(undefined8 *)PTR_DAT_0848c840);
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
              goto LAB_07886298;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,9);
LAB_07886298:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1_01 & 0xff) != 0) {
          plVar13 = (long *)(param_2 + 0x48);
          if (*plVar13 == 0) {
            lVar15 = *param_1;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *plVar19) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                  goto LAB_07886308;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,9);
LAB_07886308:
            lVar15 = (*(code *)*puVar11)(param_1,puVar11[1]);
            auVar21 = local_70;
            if (lVar15 == 0) goto LAB_07886aac;
            uVar10 = *(undefined4 *)(lVar15 + 0x18);
            lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)
                                         System_Collections_Generic_IReadOnlyList<IEventMetric>_TypeInfo
                                       );
            FUN_04de7dc0(lVar15,uVar10,
                         *(undefined8 *)System_Collections_Generic_IReadOnlyList<byte>_TypeInfo);
            *plVar13 = lVar15;
            thunk_FUN_03afed3c(plVar13,lVar15);
          }
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                goto LAB_078863a4;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,9);
LAB_078863a4:
          lVar15 = (*(code *)*puVar11)(param_1,puVar11[1]);
          auVar21 = local_70;
          if (lVar15 == 0) goto LAB_07886aac;
          FUN_04dac170(&local_1a0,lVar15,
                       *(undefined8 *)
                        Unity_Services_Vivox_IReadOnlyDictionary<ChannelId,_IChannelSession>_TypeInfo
                      );
          puVar2 = Unity_Services_Vivox_IReadOnlyDictionary<string,_IAudioDevice>_TypeInfo;
          puVar1 = System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<long>>_TypeInfo;
          puStack_e8 = puStack_198;
          local_f0 = local_1a0;
          lStack_d8 = lStack_188;
          local_e0 = local_190;
          local_1a0 = 0;
          puStack_198 = &local_f0;
          while (uVar17 = FUN_061b6ea0(&local_f0,*(undefined8 *)puVar1), (uVar17 & 1) != 0) {
            if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_04de937c(*plVar13,local_e0 & 0xffffffff,lStack_d8,*(undefined8 *)puVar2);
          }
          FUN_061b6e9c(&local_f0,
                       *(undefined8 *)
                        System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 10) * 0x10 + 0x138);
              goto LAB_0788647c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,10);
LAB_0788647c:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1_02 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 10) * 0x10 + 0x138);
                goto LAB_078864e0;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,10);
LAB_078864e0:
          lVar15 = (*(code *)*puVar11)(param_1,puVar11[1]);
          auVar21 = local_70;
          if (lVar15 == 0) goto LAB_07886aac;
          FUN_05ed172c(&local_1a0,lVar15,
                       *(undefined8 *)
                        System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo);
          puVar6 = 
          System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo;
          puVar5 = System_Collections_Generic_IReadOnlyCollection<RealtimeModel>_TypeInfo;
          puVar4 = System_Collections_Generic_IReadOnlyCollection<Realtime>_TypeInfo;
          puVar3 = System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo;
          puVar2 = System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo;
          puVar1 = 
          System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
          ;
          puStack_118 = puStack_198;
          local_120 = local_1a0;
          local_108 = lStack_188;
          uStack_110 = local_190;
          local_100 = local_180;
          while (uVar17 = FUN_062727f4(&local_120,
                                       *(undefined8 *)
                                        System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo
                                      ), lVar15 = local_108, (uVar17 & 1) != 0) {
            if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            lVar16 = FUN_04de82e0(*(long *)(param_2 + 0x48),*(undefined4 *)(local_108 + 0x10),
                                  *(undefined8 *)
                                   System_Collections_Generic_IReadOnlyList<HDProbe>_TypeInfo);
            if (*(char *)(lVar15 + 0x20) != '\0') {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar15 + 0x18);
              thunk_FUN_03afed3c();
            }
            if (*(char *)(lVar15 + 0x30) != '\0') {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)(lVar15 + 0x28);
            }
            uStack_128 = *(undefined8 *)(lVar15 + 0x40);
            local_130 = *(long *)(lVar15 + 0x38);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar17 = FUN_0584b040(&local_130,
                                  *(undefined8 *)System_IObserver<InputRemoting_Message>_TypeInfo);
            if ((uVar17 & 1) == 0) {
              uStack_128 = *(undefined8 *)(lVar15 + 0x40);
              local_130 = *(long *)(lVar15 + 0x38);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar17 = FUN_0584b0bc(&local_130,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo);
              if ((uVar17 & 1) != 0) {
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                plVar19 = (long *)(lVar16 + 0x28);
                if (*plVar19 == 0) {
                  lVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ae00);
                  FUN_05f9f7c4(lVar16,*(undefined8 *)PTR_DAT_0848adf8);
                  *plVar19 = lVar16;
                  thunk_FUN_03afed3c(plVar19,lVar16);
                }
                uStack_128 = *(undefined8 *)(lVar15 + 0x40);
                local_130 = *(long *)(lVar15 + 0x38);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(*(long *)puVar3);
                }
                if (local_130 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05f6ec70(&local_1a0,local_130,
                             *(undefined8 *)
                              System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo)
                ;
                local_160 = local_1a0;
                local_1a0 = 0;
                puStack_158 = puStack_198;
                lStack_148 = lStack_188;
                local_150 = local_190;
                uStack_138 = uStack_178;
                local_140 = local_180;
                puStack_198 = &local_160;
                while (uVar14 = FUN_06289248(&local_160,*(undefined8 *)puVar6), uVar12 = local_140,
                      lVar15 = lStack_148, uVar17 = local_150, (uVar14 & 1) != 0) {
                  local_170 = lStack_148;
                  uStack_168 = local_140;
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                  }
                  uVar14 = FUN_0584b040(&local_170,*(undefined8 *)puVar1);
                  lVar16 = *plVar19;
                  if ((uVar14 & 1) == 0) {
                    local_170 = lVar15;
                    uStack_168 = uVar12;
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                    }
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    FUN_05fa052c(lVar16,uVar17,local_170,*(undefined8 *)puVar5);
                  }
                  else {
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    FUN_05fa1a5c(lVar16,uVar17,*(undefined8 *)puVar4);
                  }
                }
                FUN_06289384(&local_160,
                             *(undefined8 *)
                              System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
              }
            }
            else {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              if (*(long *)(lVar16 + 0x28) != 0) {
                FUN_05fa06c8(*(long *)(lVar16 + 0x28),
                             *(undefined8 *)
                              System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo);
              }
            }
          }
          FUN_06272918(&local_120,
                       *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo
                      );
          plVar19 = (long *)PTR_DAT_0848b5c8;
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xc) * 0x10 + 0x138);
              goto LAB_0788686c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,0xc);
LAB_0788686c:
        uVar17 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar17 & 0xff00000000) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xc) * 0x10 + 0x138);
                goto 
                Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,0xc);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set:
          uVar10 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined4 *)(param_2 + 0x70) = uVar10;
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xb) * 0x10 + 0x138);
              goto LAB_07886930;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,0xb);
LAB_07886930:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1_03 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xb) * 0x10 + 0x138);
                goto LAB_07886994;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,0xb);
LAB_07886994:
          uVar12 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined8 *)(param_2 + 0x58) = uVar12;
          thunk_FUN_03afed3c();
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xd) * 0x10 + 0x138);
              goto LAB_07886a00;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,0xd);
LAB_07886a00:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1_04 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xd) * 0x10 + 0x138);
                goto LAB_07886a64;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(param_1,*plVar19,0xd);
LAB_07886a64:
          uVar12 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined8 *)(param_2 + 0x68) = uVar12;
        }
      }
      return;
    }
  }
LAB_07886aac:
  local_70 = auVar21;
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


