/*
FUNCTION_NAME: FUN_035bb028
ENTRY_POINT: 035bb028
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_16;telemetry_or_network_hits_2;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_035bb028(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  code *pcVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  int *piVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  undefined8 local_280;
  ulong uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  ulong uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  ulong uStack_138;
  undefined8 local_130;
  ulong local_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0422fc88;
  if ((DAT_04537c8c & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_StyleEnum<Position>_op_Implicit__);
    FUN_01c5d288(PTR_DAT_0422fc88);
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollView_TouchScrollBehavior>_set_defaultValue__
                );
    FUN_01c5d288(Method_UnityEngine_UIElements_UQueryState<VisualElement>_First__);
    FUN_01c5d288(Method_UnityEngine_UIElements_UQueryState<VisualElement>_RebuildOn__);
    FUN_01c5d288(System_Runtime_Serialization_ISurrogateSelector_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<BaseEventData>__ctor__);
    FUN_01c5d288(System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_TypeInfo);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<BaseEventData>_Invoke__);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<MqttClientConnectResult>_ConfigureAwait__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<bool>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<bool>_Invoke__);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(PTR_DAT_042312d0);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<char>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<char>_Invoke__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<Color>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<Color>_AddListener__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<Color>_Invoke__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<GameObject>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<GameObject>_AddListener__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<GameObject>_Invoke__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<GameObject>_RemoveListener__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<ICommand>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<int>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<int>_RemoveListener__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>_AddListener__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>_Invoke__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>_RemoveListener__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<MessageEventArgs>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_AddListener__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_Invoke__);
    DAT_04537c8c = 1;
  }
  local_94 = 0;
  local_a0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_f0 = 0;
  local_120 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  local_170 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar5 = System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_TypeInfo;
  puVar4 = GameAnalyticsSDK_State_GAState_TypeInfo;
  puVar3 = PTR_DAT_042305b8;
  puVar1 = PTR_DAT_0422f958;
  FUN_03cfdfbc(0);
  plVar10 = (long *)System_Runtime_Serialization_ISurrogateSelector_TypeInfo;
  iVar7 = *(int *)(param_1 + 0x78);
  if (iVar7 == 2) {
    lVar11 = *(long *)(param_1 + 0x90);
    if (lVar11 == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
      lVar12 = *(long *)puVar1;
      plVar10 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
      lVar11 = *(long *)(lVar12 + 0x38);
      if (lVar11 == 0) {
        FUN_01c723f0(lVar12);
        lVar11 = *(long *)(lVar12 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01c72394();
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01c72394();
      }
      if (plVar10 == (long *)0x0) goto LAB_035bcb08;
      lVar12 = *plVar10;
      uVar20 = **(undefined8 **)(lVar11 + 0xb8);
      uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar24 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>__ctor__;
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
            puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_035bb65c;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar4,1);
LAB_035bb65c:
      (*(code *)*puVar13)(plVar10,2,uVar24,uVar20,puVar13[1]);
      puVar2 = Method_UnityEngine_Events_UnityEvent<char>__ctor__;
      lVar11 = *(long *)Method_UnityEngine_Events_UnityEvent<char>__ctor__;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar11 = *(long *)puVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar12 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar11 = *(long *)puVar2;
        }
        uVar20 = **(undefined8 **)(lVar11 + 0xb8);
        lVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<BaseEventData>__ctor__);
        FUN_02b623a8(lVar12,uVar20,
                     *(undefined8 *)Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__,0);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar12;
      }
      if (param_1 == 0) goto LAB_035bcb08;
      System_Data_DataView__GetSortDescriptions(param_1,lVar12);
      lVar11 = *(long *)(param_1 + 0x90);
      if (lVar11 == 0) goto LAB_035bcb08;
    }
    plVar10 = (long *)(**(code **)(lVar11 + 0x18))
                                (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
    *(long **)(param_1 + 0x48) = plVar10;
    if (plVar10 == (long *)0x0) goto LAB_035bcb08;
    lVar11 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto FUN_035bb770;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar5,2);
FUN_035bb770:
    lVar11 = (*(code *)*puVar13)(plVar10,puVar13[1]);
    if (lVar11 != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
      plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
      plVar10 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
      plVar21 = *(long **)(param_1 + 0x48);
      if (plVar21 == (long *)0x0) goto LAB_035bcb08;
      lVar11 = *plVar21;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
            puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_035bb7f4;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_01c72498(plVar21,*(long *)puVar5,2);
LAB_035bb7f4:
      lVar11 = (*(code *)*puVar13)(plVar21,puVar13[1]);
      if (plVar10 == (long *)0x0) goto LAB_035bcb08;
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)) {
System_Data_DataViewSettingCollection__get_IsSynchronized:
        uVar20 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar20,0);
      }
      if ((int)plVar10[3] == 0) {
LAB_035bcb0c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar10[4] = lVar11;
      if (plVar22 == (long *)0x0) goto LAB_035bcb08;
      lVar11 = *plVar22;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar20 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Color>_Invoke__;
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
            puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto System_Data_DataViewManager__add_ListChanged;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_01c72498(plVar22,*(long *)puVar4,1);
System_Data_DataViewManager__add_ListChanged:
      (*(code *)*puVar13)(plVar22,1,uVar20,plVar10,puVar13[1]);
    }
LAB_035bb8a4:
    plVar10 = *(long **)(param_1 + 0x48);
    if (plVar10 == (long *)0x0) goto LAB_035bba94;
    lVar11 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_035bb8fc;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar5,2);
LAB_035bb8fc:
    lVar11 = (*(code *)*puVar13)(plVar10,puVar13[1]);
    if (lVar11 != 0) goto LAB_035bba94;
    plVar10 = *(long **)(param_1 + 0x48);
    if (plVar10 == (long *)0x0) {
LAB_035bcb08:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar11 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_035bb964;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar5,1);
LAB_035bb964:
    iVar7 = (*(code *)*puVar13)(plVar10,puVar13[1]);
    if (iVar7 != 0) {
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 != (long *)0x0) {
        lVar11 = *plVar10;
        uVar8 = *(undefined4 *)(param_1 + 0x6c);
        uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
              puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_035bbae8;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar5,1);
LAB_035bbae8:
        uVar9 = (*(code *)*puVar13)(plVar10,puVar13[1]);
        FUN_035ab728(&local_1f0,uVar8,uVar9,*(undefined4 *)(param_1 + 0x70),
                     *(undefined4 *)(param_1 + 0x74),*(undefined8 *)(param_1 + 0x38),0);
        uStack_88 = uStack_1e8;
        local_90 = local_1f0;
        uStack_78 = uStack_1d8;
        local_80 = local_1e0;
        uStack_68 = uStack_1c8;
        local_70 = local_1d0;
        local_94 = 0;
        lVar11 = FUN_0230c12c(param_1,*(undefined8 *)
                                       Method_UnityEngine_UIElements_UQueryState<VisualElement>_RebuildOn__
                             );
        if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
        }
        uVar17 = FUN_03d4f3bc(0,lVar11,0);
        if ((uVar17 & 1) != 0) {
          if (lVar11 == 0) goto LAB_035bcb08;
          FUN_035bd290(lVar11,&local_90,&local_94);
        }
        local_120 = 0;
        local_140 = 0;
        uStack_138 = (ulong)*(byte *)(param_1 + 0x58);
        if (*(char *)(param_1 + 0x59) == '\0') {
          uStack_270 = 0;
        }
        else {
          uStack_270 = *(undefined8 *)(param_1 + 0x60);
        }
        local_a0 = 0;
        local_128 = (ulong)*(uint3 *)(param_1 + 0x68);
        uStack_b8 = uStack_138;
        local_c0 = 0;
        uStack_a8 = local_128;
        local_130 = uStack_270;
        uStack_b0 = uStack_270;
        if ((*(long *)(param_1 + 0x50) != 0) &&
           (lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 0x48), lVar11 != 0)) {
          lVar11 = *(long *)(lVar11 + 0x188);
          uStack_1e8 = uStack_88;
          local_1f0 = local_90;
          uStack_1d8 = uStack_78;
          local_1e0 = local_80;
          uStack_1c8 = uStack_68;
          local_1d0 = local_70;
          uStack_218 = uStack_138;
          local_220 = 0;
          uStack_208 = local_128;
          local_200 = 0;
          uStack_210 = uStack_270;
          if (lVar11 != 0) {
            uStack_248 = uStack_88;
            local_250 = local_90;
            uStack_238 = uStack_78;
            uStack_240 = local_80;
            uStack_228 = uStack_68;
            local_230 = local_70;
            uStack_278 = uStack_138;
            local_280 = 0;
            uStack_268 = local_128;
            local_260 = 0;
            uVar20 = FUN_035a5a34(lVar11,&local_250,*(undefined8 *)(param_1 + 0x48),local_94,1,
                                  &local_280,0);
            return uVar20;
          }
        }
      }
      goto LAB_035bcb08;
    }
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
    lVar12 = *(long *)puVar1;
    plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    lVar11 = *(long *)(lVar12 + 0x38);
    if (lVar11 == 0) {
      FUN_01c723f0(lVar12);
      lVar11 = *(long *)(lVar12 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01c72394();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01c72394();
    }
    if (plVar22 == (long *)0x0) goto LAB_035bcb08;
    lVar14 = *plVar22;
    lVar12 = *(long *)puVar4;
    plVar10 = (long *)**(long **)(lVar11 + 0xb8);
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    uVar20 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Color>_AddListener__;
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar12) goto LAB_035bba6c;
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 0) {
        uVar8 = *(undefined4 *)(param_1 + 0x6c);
        iVar7 = FUN_035b9390(param_1);
        if (iVar7 == 1) {
          local_170 = *(undefined8 *)(param_1 + 0xd0);
          uStack_188 = *(undefined8 *)(param_1 + 0xb8);
          local_190 = *(undefined8 *)(param_1 + 0xb0);
          uStack_178 = *(undefined8 *)(param_1 + 200);
          uStack_180 = *(undefined8 *)(param_1 + 0xc0);
          bVar26 = false;
          goto LAB_035bc0d4;
        }
        if (iVar7 == 0) {
          bVar26 = false;
          puVar13 = (undefined8 *)(param_1 + 0xb0);
          puVar16 = (undefined8 *)(param_1 + 0xb8);
          puVar18 = (undefined8 *)(param_1 + 0xc0);
LAB_035bbc6c:
          local_150 = puVar18[2];
          uStack_158 = puVar18[1];
          local_160 = *puVar18;
          uVar20 = *puVar16;
          uVar24 = *puVar13;
          local_e0 = local_160;
          uStack_d8 = uStack_158;
          local_d0 = local_150;
          if (*(long *)(param_1 + 0x20) != 0) {
            plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
            plVar10 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
            uStack_1d8 = uStack_d8;
            local_1e0 = local_e0;
            local_1d0 = local_d0;
            local_1f0 = uVar24;
            uStack_1e8 = uVar20;
            lVar11 = thunk_FUN_01c49334(*(undefined8 *)
                                         System_Runtime_Serialization_ISurrogateSelector_TypeInfo,
                                        &local_1f0);
            if (plVar10 == (long *)0x0) goto LAB_035bcb08;
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
            goto System_Data_DataViewSettingCollection__get_IsSynchronized;
            if ((int)plVar10[3] == 0) goto LAB_035bcb0c;
            plVar10[4] = lVar11;
            if (plVar22 == (long *)0x0) goto LAB_035bcb08;
            lVar11 = *plVar22;
            uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
            uVar24 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<int>_AddListener__;
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                  puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_035bbd5c;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_01c72498(plVar22,*(long *)puVar4,1);
LAB_035bbd5c:
            (*(code *)*puVar13)(plVar22,3,uVar24,plVar10,puVar13[1]);
            plVar10 = (long *)System_Runtime_Serialization_ISurrogateSelector_TypeInfo;
            if (*(char *)(param_1 + 0xad) == '\0') {
              if (*(int *)(*(long *)System_Runtime_Serialization_ISurrogateSelector_TypeInfo + 0xe0)
                  == 0) {
                thunk_FUN_01c1d1e8();
              }
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
              uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
              plVar22 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_Events_UnityEvent<bool>_Invoke__
                                                  );
              FUN_035b2d10(plVar22,uVar20,uVar8,uVar24,0);
            }
            else {
              uVar24 = FUN_03d468e8(param_1,0);
              if (*(int *)(*(long *)System_Runtime_Serialization_ISurrogateSelector_TypeInfo + 0xe0)
                  == 0) {
                thunk_FUN_01c1d1e8(*(long *)System_Runtime_Serialization_ISurrogateSelector_TypeInfo
                                  );
              }
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
              uVar25 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
              plVar22 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_Events_UnityEvent<bool>_AddListener__
                                                  );
              FUN_035b3bd8(plVar22,uVar24,uVar20,uVar8,uVar25,0);
              plVar10 = (long *)System_Runtime_Serialization_ISurrogateSelector_TypeInfo;
            }
            *(long **)(param_1 + 0x48) = plVar22;
            if (plVar22 != (long *)0x0) {
              lVar11 = *plVar22;
              uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
                    puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                    goto LAB_035bbe90;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_01c72498(plVar22,*(long *)puVar5,2);
LAB_035bbe90:
              lVar11 = (*(code *)*puVar13)(plVar22,puVar13[1]);
              if (lVar11 == 0) goto LAB_035bb8a4;
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
              plVar21 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
              plVar22 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
              plVar23 = *(long **)(param_1 + 0x48);
              if (plVar23 == (long *)0x0) goto LAB_035bcb08;
              lVar11 = *plVar23;
              uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
                    puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                    goto LAB_035bbf14;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_01c72498(plVar23,*(long *)puVar5,2);
LAB_035bbf14:
              lVar11 = (*(code *)*puVar13)(plVar23,puVar13[1]);
              if (plVar22 == (long *)0x0) goto LAB_035bcb08;
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar22 + 0x40)), lVar12 == 0)
                 ) goto System_Data_DataViewSettingCollection__get_IsSynchronized;
              if ((int)plVar22[3] == 0) goto LAB_035bcb0c;
              plVar22[4] = lVar11;
              if (plVar21 == (long *)0x0) goto LAB_035bcb08;
              lVar11 = *plVar21;
              uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
              uVar20 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<int>__ctor__;
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                    puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_035bbfac;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_01c72498(plVar21,*(long *)puVar4,1);
LAB_035bbfac:
              (*(code *)*puVar13)(plVar21,1,uVar20,plVar22,puVar13[1]);
            }
            if (bVar26 || *(char *)(param_1 + 0xae) == '\0') goto LAB_035bb8a4;
            if (*(long *)(param_1 + 0x20) != 0) {
              lVar12 = *(long *)puVar1;
              plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
              lVar11 = *(long *)(lVar12 + 0x38);
              if (lVar11 == 0) {
                FUN_01c723f0(lVar12);
                lVar11 = *(long *)(lVar12 + 0x38);
              }
              lVar11 = *(long *)(lVar11 + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_01c72394();
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_01c72394();
              }
              if (plVar22 != (long *)0x0) {
                lVar12 = *plVar22;
                uVar20 = **(undefined8 **)(lVar11 + 0xb8);
                uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
                uVar24 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Color>__ctor__;
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                      puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                      goto LAB_035bc094;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar13 = (undefined8 *)FUN_01c72498(plVar22,*(long *)puVar4,1);
LAB_035bc094:
                (*(code *)*puVar13)(plVar22,1,uVar24,uVar20,puVar13[1]);
                lVar11 = *plVar10;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                  lVar11 = *plVar10;
                }
                puVar13 = *(undefined8 **)(lVar11 + 0xb8);
                bVar26 = true;
                local_170 = puVar13[4];
                uStack_188 = puVar13[1];
                local_190 = *puVar13;
                uStack_178 = puVar13[3];
                uStack_180 = puVar13[2];
LAB_035bc0d4:
                local_f0 = local_170;
                local_110 = local_190;
                uStack_108 = uStack_188;
                uStack_100 = uStack_180;
                uStack_f8 = uStack_178;
                if (*(long *)(param_1 + 0x20) != 0) {
                  plVar21 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
                  plVar22 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
                  uStack_1e8 = uStack_108;
                  local_1f0 = local_110;
                  uStack_1d8 = uStack_f8;
                  local_1e0 = uStack_100;
                  local_1d0 = local_f0;
                  lVar11 = thunk_FUN_01c49334(*plVar10,&local_1f0);
                  if (plVar22 != (long *)0x0) {
                    if ((lVar11 != 0) &&
                       (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar22 + 0x40)),
                       lVar12 == 0)) goto System_Data_DataViewSettingCollection__get_IsSynchronized;
                    if ((int)plVar22[3] == 0) goto LAB_035bcb0c;
                    plVar22[4] = lVar11;
                    if (plVar21 != (long *)0x0) {
                      lVar11 = *plVar21;
                      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                      uVar20 = *(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>_AddListener__
                      ;
                      if (uVar17 != 0) {
                        piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                            puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                            goto LAB_035bc1ac;
                          }
                          uVar17 = uVar17 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar13 = (undefined8 *)FUN_01c72498(plVar21,*(long *)puVar4,1);
LAB_035bc1ac:
                      (*(code *)*puVar13)(plVar21,3,uVar20,plVar22,puVar13[1]);
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                      }
                      iVar7 = FUN_03cfdfbc(0);
                      puVar6 = Method_UnityEngine_UIElements_UQueryState<VisualElement>_First__;
                      if (iVar7 < 0xc) {
                        switch(iVar7) {
                        case 0:
                        case 1:
                          if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
                          lVar12 = *(long *)puVar1;
                          plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
                          lVar11 = *(long *)(lVar12 + 0x38);
                          if (lVar11 == 0) {
                            FUN_01c723f0(lVar12);
                            lVar11 = *(long *)(lVar12 + 0x38);
                          }
                          lVar11 = *(long *)(lVar11 + 0x10);
                          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                            lVar11 = FUN_01c72394();
                          }
                          if (*(int *)(lVar11 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
                          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                            lVar11 = FUN_01c72394();
                          }
                          if (plVar22 == (long *)0x0) goto LAB_035bcb08;
                          lVar14 = *plVar22;
                          lVar12 = *(long *)puVar4;
                          plVar21 = (long *)**(long **)(lVar11 + 0xb8);
                          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                          uVar20 = *(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>_RemoveListener__
                          ;
                          if (uVar17 != 0) {
                            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar19 + -2) == lVar12) goto LAB_035bc61c;
                              uVar17 = uVar17 - 1;
                              piVar19 = piVar19 + 4;
                            } while (uVar17 != 0);
                          }
                          break;
                        case 2:
                        case 7:
                          if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
                          lVar12 = *(long *)puVar1;
                          plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
                          lVar11 = *(long *)(lVar12 + 0x38);
                          if (lVar11 == 0) {
                            FUN_01c723f0(lVar12);
                            lVar11 = *(long *)(lVar12 + 0x38);
                          }
                          lVar11 = *(long *)(lVar11 + 0x10);
                          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                            lVar11 = FUN_01c72394();
                          }
                          if (*(int *)(lVar11 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
                          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                            lVar11 = FUN_01c72394();
                          }
                          if (plVar22 == (long *)0x0) goto LAB_035bcb08;
                          lVar14 = *plVar22;
                          lVar12 = *(long *)puVar4;
                          plVar21 = (long *)**(long **)(lVar11 + 0xb8);
                          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                          uVar20 = *(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<ICommand>__ctor__;
                          if (uVar17 != 0) {
                            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar19 + -2) == lVar12) goto LAB_035bc61c;
                              uVar17 = uVar17 - 1;
                              piVar19 = piVar19 + 4;
                            } while (uVar17 != 0);
                          }
                          break;
                        default:
switchD_035bc2a8_caseD_3:
                          if (*(long *)(param_1 + 0x20) != 0) {
                            plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
                            plVar21 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_01c1d1e8(*(long *)puVar2);
                            }
                            uVar9 = FUN_03cfdfbc(0);
                            local_1f0 = CONCAT44(local_1f0._4_4_,uVar9);
                            lVar11 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042312d0,&local_1f0);
                            if (plVar21 != (long *)0x0) {
                              if ((lVar11 != 0) &&
                                 (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)
                                                                      (*plVar21 + 0x40)),
                                 lVar12 == 0))
                              goto System_Data_DataViewSettingCollection__get_IsSynchronized;
                              if ((int)plVar21[3] == 0) goto LAB_035bcb0c;
                              plVar21[4] = lVar11;
                              if (plVar22 != (long *)0x0) {
                                lVar11 = *plVar22;
                                uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                uVar20 = *(undefined8 *)
                                          Method_UnityEngine_Events_UnityEvent<GameObject>_RemoveListener__
                                ;
                                if (uVar17 != 0) {
                                  piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                                      puVar13 = (undefined8 *)
                                                (lVar11 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                                      goto LAB_035bcafc;
                                    }
                                    uVar17 = uVar17 - 1;
                                    piVar19 = piVar19 + 4;
                                  } while (uVar17 != 0);
                                }
                                puVar13 = (undefined8 *)FUN_01c72498(plVar22,*(long *)puVar4,1);
LAB_035bcafc:
                                pcVar15 = (code *)*puVar13;
                                uVar24 = puVar13[1];
                                uVar25 = 1;
                                goto System_Data_DataViewSetting___ctor;
                              }
                            }
                          }
                          goto LAB_035bcb08;
                        case 8:
                          uStack_1e8 = *(undefined8 *)(param_1 + 0xa0);
                          local_1f0 = *(undefined8 *)(param_1 + 0x98);
                          uVar20 = thunk_FUN_01c49334(*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_UQueryState<VisualElement>_First__
                                                  ,&local_1f0);
                          if (*(long *)(param_1 + 0x20) != 0) {
                            plVar10 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
                            plVar22 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
                            uStack_218 = *(ulong *)(param_1 + 0xa0);
                            local_220 = *(undefined8 *)(param_1 + 0x98);
                            lVar11 = thunk_FUN_01c49334(*(undefined8 *)puVar6,&local_220);
                            if (plVar22 != (long *)0x0) {
                              if ((lVar11 != 0) &&
                                 (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)
                                                                      (*plVar22 + 0x40)),
                                 lVar12 == 0))
                              goto System_Data_DataViewSettingCollection__get_IsSynchronized;
                              if ((int)plVar22[3] == 0) goto LAB_035bcb0c;
                              plVar22[4] = lVar11;
                              if (plVar10 != (long *)0x0) {
                                lVar14 = *plVar10;
                                lVar12 = *(long *)puVar4;
                                uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                                uVar24 = *(undefined8 *)
                                          Method_UnityEngine_Events_UnityEvent<int>_RemoveListener__
                                ;
                                if (uVar17 != 0) {
                                  piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar19 + -2) == lVar12) goto LAB_035bcab8;
                                    uVar17 = uVar17 - 1;
                                    piVar19 = piVar19 + 4;
                                  } while (uVar17 != 0);
                                }
                                goto LAB_035bcaa8;
                              }
                            }
                          }
                          goto LAB_035bcb08;
                        case 0xb:
                          local_1f0 = CONCAT53(local_1f0._3_5_,*(undefined3 *)(param_1 + 0xa8));
                          uVar20 = thunk_FUN_01c49334(*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<Position>_op_Implicit__
                                                  ,&local_1f0);
                          if (*(long *)(param_1 + 0x20) != 0) {
                            lVar12 = *(long *)puVar1;
                            plVar10 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
                            lVar11 = *(long *)(lVar12 + 0x38);
                            if (lVar11 == 0) {
                              FUN_01c723f0(lVar12);
                              lVar11 = *(long *)(lVar12 + 0x38);
                            }
                            lVar11 = *(long *)(lVar11 + 0x10);
                            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                              lVar11 = FUN_01c72394();
                            }
                            if (*(int *)(lVar11 + 0xe0) == 0) {
                              thunk_FUN_01c1d1e8();
                            }
                            lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
                            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                              lVar11 = FUN_01c72394();
                            }
                            if (plVar10 != (long *)0x0) {
                              lVar14 = *plVar10;
                              lVar12 = *(long *)puVar4;
                              plVar22 = (long *)**(long **)(lVar11 + 0xb8);
                              uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                              uVar24 = *(undefined8 *)
                                        Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_AddListener__
                              ;
                              if (uVar17 != 0) {
                                piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar19 + -2) == lVar12) goto LAB_035bcab8;
                                  uVar17 = uVar17 - 1;
                                  piVar19 = piVar19 + 4;
                                } while (uVar17 != 0);
                              }
LAB_035bcaa8:
                              puVar13 = (undefined8 *)FUN_01c72498(plVar10,lVar12,1);
                              goto LAB_035bcac8;
                            }
                          }
                          goto LAB_035bcb08;
                        }
                      }
                      else if (iVar7 == 0x11) {
                        if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
                        lVar12 = *(long *)puVar1;
                        plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
                        lVar11 = *(long *)(lVar12 + 0x38);
                        if (lVar11 == 0) {
                          FUN_01c723f0(lVar12);
                          lVar11 = *(long *)(lVar12 + 0x38);
                        }
                        lVar11 = *(long *)(lVar11 + 0x10);
                        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                          lVar11 = FUN_01c72394();
                        }
                        if (*(int *)(lVar11 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
                        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                          lVar11 = FUN_01c72394();
                        }
                        if (plVar22 == (long *)0x0) goto LAB_035bcb08;
                        lVar14 = *plVar22;
                        lVar12 = *(long *)puVar4;
                        plVar21 = (long *)**(long **)(lVar11 + 0xb8);
                        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                        uVar20 = *(undefined8 *)
                                  Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_Invoke__;
                        if (uVar17 != 0) {
                          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar19 + -2) == lVar12) goto LAB_035bc61c;
                            uVar17 = uVar17 - 1;
                            piVar19 = piVar19 + 4;
                          } while (uVar17 != 0);
                        }
                      }
                      else {
                        if (iVar7 - 0x12U < 3) {
                          if (*(long *)(param_1 + 0x20) != 0) {
                            lVar12 = *(long *)puVar1;
                            plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
                            lVar11 = *(long *)(lVar12 + 0x38);
                            if (lVar11 == 0) {
                              FUN_01c723f0(lVar12);
                              lVar11 = *(long *)(lVar12 + 0x38);
                            }
                            lVar11 = *(long *)(lVar11 + 0x10);
                            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                              lVar11 = FUN_01c72394();
                            }
                            if (*(int *)(lVar11 + 0xe0) == 0) {
                              thunk_FUN_01c1d1e8();
                            }
                            lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
                            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                              lVar11 = FUN_01c72394();
                            }
                            if (plVar22 != (long *)0x0) {
                              lVar14 = *plVar22;
                              lVar12 = *(long *)puVar4;
                              plVar21 = (long *)**(long **)(lVar11 + 0xb8);
                              uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                              uVar20 = *(undefined8 *)
                                        Method_UnityEngine_Events_UnityEvent<char>_Invoke__;
                              if (uVar17 != 0) {
                                piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar19 + -2) == lVar12) goto LAB_035bc61c;
                                  uVar17 = uVar17 - 1;
                                  piVar19 = piVar19 + 4;
                                } while (uVar17 != 0);
                              }
                              goto FUN_035bc60c;
                            }
                          }
                          goto LAB_035bcb08;
                        }
                        if (iVar7 != 0x20) goto switchD_035bc2a8_caseD_3;
                        if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
                        lVar12 = *(long *)puVar1;
                        plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
                        lVar11 = *(long *)(lVar12 + 0x38);
                        if (lVar11 == 0) {
                          FUN_01c723f0(lVar12);
                          lVar11 = *(long *)(lVar12 + 0x38);
                        }
                        lVar11 = *(long *)(lVar11 + 0x10);
                        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                          lVar11 = FUN_01c72394();
                        }
                        if (*(int *)(lVar11 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
                        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                          lVar11 = FUN_01c72394();
                        }
                        if (plVar22 == (long *)0x0) goto LAB_035bcb08;
                        lVar14 = *plVar22;
                        lVar12 = *(long *)puVar4;
                        plVar21 = (long *)**(long **)(lVar11 + 0xb8);
                        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                        uVar20 = *(undefined8 *)
                                  Method_UnityEngine_Events_UnityEvent<MessageEventArgs>__ctor__;
                        if (uVar17 != 0) {
                          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar19 + -2) == lVar12) goto LAB_035bc61c;
                            uVar17 = uVar17 - 1;
                            piVar19 = piVar19 + 4;
                          } while (uVar17 != 0);
                        }
                      }
FUN_035bc60c:
                      puVar13 = (undefined8 *)FUN_01c72498(plVar22,lVar12,1);
                      goto LAB_035bc62c;
                    }
                  }
                }
              }
            }
          }
          goto LAB_035bcb08;
        }
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
        plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
        plVar10 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
        uVar8 = FUN_035b9390(param_1);
        local_1f0 = CONCAT44(local_1f0._4_4_,uVar8);
        lVar11 = thunk_FUN_01c49334(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<bool>__ctor__,&local_1f0);
        if (plVar10 == (long *)0x0) goto LAB_035bcb08;
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
        goto System_Data_DataViewSettingCollection__get_IsSynchronized;
        if ((int)plVar10[3] == 0) goto LAB_035bcb0c;
        plVar10[4] = lVar11;
        if (plVar22 == (long *)0x0) goto LAB_035bcb08;
        lVar12 = *plVar22;
        lVar11 = *(long *)puVar4;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
        uVar20 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<int>_Invoke__;
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar11) goto LAB_035bb624;
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
        plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
        plVar10 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
        local_1f0 = CONCAT44(local_1f0._4_4_,*(undefined4 *)(param_1 + 0x78));
        lVar11 = thunk_FUN_01c49334(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<BaseEventData>_Invoke__,
                                    &local_1f0);
        if (plVar10 == (long *)0x0) goto LAB_035bcb08;
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
        goto System_Data_DataViewSettingCollection__get_IsSynchronized;
        if ((int)plVar10[3] == 0) goto LAB_035bcb0c;
        plVar10[4] = lVar11;
        if (plVar22 == (long *)0x0) goto LAB_035bcb08;
        lVar12 = *plVar22;
        lVar11 = *(long *)puVar4;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
        uVar20 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>_Invoke__
        ;
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar11) goto LAB_035bb624;
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
      }
      puVar13 = (undefined8 *)FUN_01c72498(plVar22,lVar11,1);
      goto LAB_035bb634;
    }
    lVar11 = *(long *)(param_1 + 0x80);
    if (lVar11 != 0) {
      lVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollView_TouchScrollBehavior>_set_defaultValue__
                                 );
      FUN_035b26d8(lVar12,lVar11,0);
      if (lVar12 == 0) goto LAB_035bcb08;
      *(undefined1 *)(lVar12 + 0x20) = *(undefined1 *)(param_1 + 0x88);
      *(long *)(param_1 + 0x48) = lVar12;
      goto LAB_035bb8a4;
    }
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
    lVar12 = *(long *)puVar1;
    plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    lVar11 = *(long *)(lVar12 + 0x38);
    if (lVar11 == 0) {
      FUN_01c723f0(lVar12);
      lVar11 = *(long *)(lVar12 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01c72394();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01c72394();
    }
    if (plVar22 == (long *)0x0) goto LAB_035bcb08;
    lVar14 = *plVar22;
    lVar12 = *(long *)puVar4;
    plVar10 = (long *)**(long **)(lVar11 + 0xb8);
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    uVar20 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<GameObject>__ctor__;
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar12) goto LAB_035bba6c;
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
  }
  puVar13 = (undefined8 *)FUN_01c72498(plVar22,lVar12,1);
LAB_035bba7c:
  pcVar15 = (code *)*puVar13;
  uVar24 = puVar13[1];
FUN_035bba90:
  (*pcVar15)(plVar22,1,uVar20,plVar10,uVar24);
LAB_035bba94:
  puVar2 = Method_System_Threading_Tasks_Task<MqttClientConnectResult>_ConfigureAwait__;
  lVar11 = *(long *)Method_System_Threading_Tasks_Task<MqttClientConnectResult>_ConfigureAwait__;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar11 = *(long *)puVar2;
  }
  return **(undefined8 **)(lVar11 + 0xb8);
LAB_035bcab8:
  puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 1) * 0x10 + 0x138);
LAB_035bcac8:
  (*(code *)*puVar13)(plVar10,3,uVar24,plVar22,puVar13[1]);
  plVar10 = (long *)System_Runtime_Serialization_ISurrogateSelector_TypeInfo;
  goto LAB_035bc648;
LAB_035bc61c:
  puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 1) * 0x10 + 0x138);
LAB_035bc62c:
  pcVar15 = (code *)*puVar13;
  uVar24 = puVar13[1];
  uVar25 = 3;
System_Data_DataViewSetting___ctor:
  (*pcVar15)(plVar22,uVar25,uVar20,plVar21,uVar24);
  uVar20 = 0;
LAB_035bc648:
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
  uStack_1b8 = uStack_108;
  local_1c0 = local_110;
  uStack_1a8 = uStack_f8;
  uStack_1b0 = uStack_100;
  local_1a0 = local_f0;
  plVar22 = (long *)FUN_03598d88(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),&local_1c0,uVar8,
                                 1,uVar20,0);
  *(long **)(param_1 + 0x48) = plVar22;
  if (plVar22 != (long *)0x0) {
    lVar11 = *plVar22;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto FUN_035bc6d8;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_01c72498(plVar22,*(long *)puVar5,2);
FUN_035bc6d8:
    lVar11 = (*(code *)*puVar13)(plVar22,puVar13[1]);
    if (lVar11 == 0) goto LAB_035bb8a4;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
    plVar21 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    plVar22 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
    plVar23 = *(long **)(param_1 + 0x48);
    if (plVar23 == (long *)0x0) goto LAB_035bcb08;
    lVar11 = *plVar23;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_035bc75c;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_01c72498(plVar23,*(long *)puVar5,2);
LAB_035bc75c:
    lVar11 = (*(code *)*puVar13)(plVar23,puVar13[1]);
    if (plVar22 == (long *)0x0) goto LAB_035bcb08;
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar22 + 0x40)), lVar12 == 0))
    goto System_Data_DataViewSettingCollection__get_IsSynchronized;
    if ((int)plVar22[3] == 0) goto LAB_035bcb0c;
    plVar22[4] = lVar11;
    if (plVar21 == (long *)0x0) goto LAB_035bcb08;
    lVar11 = *plVar21;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    uVar20 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<GameObject>_Invoke__;
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_035bc7f4;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_01c72498(plVar21,*(long *)puVar4,1);
LAB_035bc7f4:
    (*(code *)*puVar13)(plVar21,1,uVar20,plVar22,puVar13[1]);
  }
  if (bVar26 || *(char *)(param_1 + 0xae) == '\0') goto LAB_035bb8a4;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_035bcb08;
  lVar12 = *(long *)puVar1;
  plVar22 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_01c723f0(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01c72394();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01c72394();
  }
  if (plVar22 == (long *)0x0) goto LAB_035bcb08;
  lVar12 = *plVar22;
  uVar20 = **(undefined8 **)(lVar11 + 0xb8);
  uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
  uVar24 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<GameObject>_AddListener__;
  if (uVar17 != 0) {
    piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
        puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 1) * 0x10 + 0x138);
        goto LAB_035bc8dc;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  puVar13 = (undefined8 *)FUN_01c72498(plVar22,*(long *)puVar4,1);
LAB_035bc8dc:
  (*(code *)*puVar13)(plVar22,1,uVar24,uVar20,puVar13[1]);
  bVar26 = true;
  lVar11 = *plVar10;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar11 = *plVar10;
  }
  puVar13 = *(undefined8 **)(lVar11 + 0xb8);
  puVar16 = puVar13 + 1;
  puVar18 = puVar13 + 2;
  goto LAB_035bbc6c;
LAB_035bb624:
  puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 1) * 0x10 + 0x138);
LAB_035bb634:
  pcVar15 = (code *)*puVar13;
  uVar24 = puVar13[1];
  goto FUN_035bba90;
LAB_035bba6c:
  puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 1) * 0x10 + 0x138);
  goto LAB_035bba7c;
}


