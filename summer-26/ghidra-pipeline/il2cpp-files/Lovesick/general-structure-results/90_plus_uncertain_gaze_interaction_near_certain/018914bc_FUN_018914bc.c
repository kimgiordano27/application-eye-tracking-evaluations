/*
FUNCTION_NAME: FUN_018914bc
ENTRY_POINT: 018914bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 225
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x018923d0) */
/* WARNING: Removing unreachable block (ram,0x01891f44) */
/* WARNING: Removing unreachable block (ram,0x0189243c) */
/* WARNING: Removing unreachable block (ram,0x01892430) */

void FUN_018914bc(long param_1,long param_2)

{
  undefined *puVar1;
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
  char *pcVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90 [2];
  undefined2 local_8c [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar1 = System_ComponentModel_DesignerSerializationVisibilityAttribute_TypeInfo;
  if ((DAT_0377981c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_13053);
    thunk_FUN_00d48444(StringLiteral_1482);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(System_Func<IActiveState,_bool>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__
                      );
    thunk_FUN_00d48444(
                      UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzq_f32__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadBuffer_EnsureFilled__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_52_0_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabs_s8__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Remove__);
    thunk_FUN_00d48444(PTR_DAT_033f7588);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>__ctor__
                      );
    thunk_FUN_00d48444(System_Text_RegularExpressions_RegexNode_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eb308);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Tweener>_GetEnumerator__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_X86_Fma_fmadd_sd__);
    thunk_FUN_00d48444(StringLiteral_11648);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Data_RoomData>_AddRange__);
    thunk_FUN_00d48444(StringLiteral_7111);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__);
    thunk_FUN_00d48444(PTR_DAT_033f6d58);
    thunk_FUN_00d48444(Method_System_Data_Listeners<DataViewListener>_Add__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonTextReader_<ParseValueAsync>d__8_MoveNext__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TryGetValue__
                      );
    thunk_FUN_00d48444(System_Func<JsonProperty,_int>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_14003);
    thunk_FUN_00d48444(StringLiteral_9392);
    thunk_FUN_00d48444(Method_Autohand_Demo_OpenXRHandControllerLink_Grab__);
    thunk_FUN_00d48444(Sirenix_OdinInspector_TitleGroupAttribute_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12553);
    thunk_FUN_00d48444(StringLiteral_10636);
    thunk_FUN_00d48444(Method_System_Net_WebRequest_GetResponse__);
    thunk_FUN_00d48444(StringLiteral_11864);
    thunk_FUN_00d48444(Method_Oculus_Interaction_AssertUtils_<>c_<Nicify>b__7_0__);
    thunk_FUN_00d48444(System_ComponentModel_DesignerSerializationVisibilityAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRReferenceObject>_GetEnumerator__);
    thunk_FUN_00d48444(StringLiteral_13333);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass5_0_<CreateAlbedoMaxLuminance>b__1__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__);
    DAT_0377981c = 1;
  }
  local_68 = 0;
  FUN_01865608(param_2,*(undefined8 *)puVar1,0);
  puVar1 = StringLiteral_1482;
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (plVar17 = *(long **)(*(long *)(param_1 + 0x18) + 0x10), plVar17 == (long *)0x0))
  goto LAB_01892428;
  lVar14 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_1482) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
        goto LAB_01891770;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_00d59724(plVar17,*(long *)StringLiteral_1482,4);
LAB_01891770:
  uVar15 = (*(code *)*puVar10)(plVar17,param_2,puVar10[1]);
  if ((uVar15 & 1) == 0) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (plVar17 = *(long **)(*(long *)(param_1 + 0x18) + 0x10), plVar17 == (long *)0x0))
    goto LAB_01892428;
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_018917e4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar1,2);
LAB_018917e4:
    (*(code *)*puVar10)(plVar17,param_2,puVar10[1]);
  }
  plVar21 = (long *)(param_1 + 0x10);
  plVar17 = (long *)*plVar21;
  if ((plVar17 == (long *)0x0) ||
     (uVar11 = (**(code **)(*plVar17 + 0x578))(plVar17,*(undefined8 *)(*plVar17 + 0x580)),
     puVar8 = StringLiteral_14003, puVar7 = StringLiteral_12553,
     puVar6 = Method_Oculus_Interaction_AssertUtils_<>c_<Nicify>b__7_0__,
     puVar5 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Remove__,
     puVar4 = Method_System_Collections_Generic_List<XRReferenceObject>_GetEnumerator__,
     puVar3 = Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>__ctor__,
     puVar2 = OVRPlugin_OVRP_1_52_0_TypeInfo, puVar1 = PTR_DAT_033eb308, param_2 == 0))
  goto LAB_01892428;
  uVar11 = FUN_0189b8e8(uVar11,*plVar21,*(undefined8 *)System_Func<JsonProperty,_int>_TypeInfo,
                        *(undefined8 *)(param_2 + 0x10));
  uVar11 = FUN_0189b8e8(uVar11,*plVar21,*(undefined8 *)puVar7,*(undefined8 *)(param_2 + 0x18));
  FUN_0189b8e8(uVar11,*plVar21,*(undefined8 *)puVar6,*(undefined8 *)(param_2 + 0x28));
  lVar14 = *plVar21;
  local_78 = CONCAT62(local_78._2_6_,*(undefined2 *)(param_2 + 0x20));
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_78);
  FUN_0189b8e8(uVar11,lVar14,*(undefined8 *)puVar8,uVar11);
  lVar14 = *plVar21;
  local_88 = CONCAT62(local_88._2_6_,*(undefined2 *)(param_2 + 0x22));
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_88);
  FUN_0189b8e8(uVar11,lVar14,*(undefined8 *)puVar1,uVar11);
  lVar14 = *plVar21;
  local_c0 = CONCAT62(local_c0._2_6_,*(undefined2 *)(param_2 + 0x24));
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_c0);
  FUN_0189b8e8(uVar11,lVar14,*(undefined8 *)puVar3,uVar11);
  lVar14 = *plVar21;
  local_98 = CONCAT62(local_98._2_6_,*(undefined2 *)(param_2 + 0x26));
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_98);
  FUN_0189b8e8(uVar11,lVar14,*(undefined8 *)puVar4,uVar11);
  local_68 = *(undefined8 *)(param_2 + 0x30);
  lVar14 = *(long *)(*(long *)puVar2 + 0x20);
  if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
    lVar14 = FUN_00d5941c();
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
  if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
    lVar14 = FUN_00d5941c();
  }
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__;
  pcVar12 = (char *)thunk_FUN_00d32ed4(&local_68,*(undefined8 *)(lVar14 + 0x80));
  puVar2 = Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__;
  if (*pcVar12 != '\0') {
    local_68 = *(undefined8 *)(param_2 + 0x30);
    lVar14 = *plVar21;
    uVar15 = FUN_00becc2c(&local_68,*(undefined8 *)puVar1);
    FUN_0189b94c(uVar15,*(undefined8 *)puVar2,lVar14,uVar15 & 0xffffffff);
  }
  if (*(char *)(param_2 + 0xd0) == '\0') {
    plVar17 = (long *)*plVar21;
    if (plVar17 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar17 + 0x5d8))
              (plVar17,*(undefined8 *)StringLiteral_9392,*(undefined8 *)(*plVar17 + 0x5e0));
    plVar17 = (long *)*plVar21;
    if (plVar17 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar17 + 0x708))
              (plVar17,*(undefined1 *)(param_2 + 0xd0),*(undefined8 *)(*plVar17 + 0x710));
  }
  else if (*(long *)(param_2 + 0xc0) != 0) {
    plVar17 = (long *)*plVar21;
    if (plVar17 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar17 + 0x5d8))
              (plVar17,*(undefined8 *)StringLiteral_9392,*(undefined8 *)(*plVar17 + 0x5e0));
    FUN_0189b804(param_1,*(undefined8 *)(param_2 + 0xc0));
  }
  if (*(char *)(param_2 + 0xb0) == '\0') {
    plVar17 = (long *)*plVar21;
    if (plVar17 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar17 + 0x5d8))
              (plVar17,*(undefined8 *)
                        Method_System_Collections_Generic_List<Data_RoomData>_AddRange__,
               *(undefined8 *)(*plVar17 + 0x5e0));
    plVar17 = (long *)*plVar21;
    if (plVar17 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar17 + 0x708))
              (plVar17,*(undefined1 *)(param_2 + 0xb0),*(undefined8 *)(*plVar17 + 0x710));
  }
  else if (*(long *)(param_2 + 0xa8) != 0) {
    plVar17 = (long *)*plVar21;
    if (plVar17 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar17 + 0x5d8))
              (plVar17,*(undefined8 *)
                        Method_System_Collections_Generic_List<Data_RoomData>_AddRange__,
               *(undefined8 *)(*plVar17 + 0x5e0));
    FUN_0189b804(param_1,*(undefined8 *)(param_2 + 0xa8));
  }
  puVar8 = StringLiteral_13053;
  puVar7 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass5_0_<CreateAlbedoMaxLuminance>b__1__
  ;
  puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabs_s8__;
  puVar4 = Sirenix_OdinInspector_TitleGroupAttribute_TypeInfo;
  puVar3 = System_Text_RegularExpressions_RegexNode_TypeInfo;
  puVar2 = PTR_DAT_033f7588;
  puVar1 = PTR_DAT_033f6d58;
  FUN_0189be90(param_1,*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TryGetValue__
               ,*(undefined8 *)(param_2 + 0xb8));
  FUN_0189be90(param_1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar7,
               *(undefined8 *)(param_2 + 200));
  FUN_0189c244(param_1,param_2);
  local_78 = *(undefined8 *)(param_2 + 0x60);
  uStack_70 = *(undefined8 *)(param_2 + 0x68);
  uVar18 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_78);
  FUN_0189b8e8(uVar11,uVar18,*(undefined8 *)puVar3,uVar11);
  local_88 = *(undefined8 *)(param_2 + 0x70);
  uStack_80 = *(undefined8 *)(param_2 + 0x78);
  uVar18 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_88);
  FUN_0189b8e8(uVar11,uVar18,*(undefined8 *)puVar4,uVar11);
  local_8c[0] = *(undefined2 *)(param_2 + 0x80);
  uVar18 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,local_8c);
  FUN_0189b8e8(uVar11,uVar18,*(undefined8 *)puVar1,uVar11);
  local_90[0] = *(undefined2 *)(param_2 + 0x82);
  uVar18 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,local_90);
  FUN_0189b8e8(uVar11,uVar18,*(undefined8 *)Method_Autohand_Demo_OpenXRHandControllerLink_Grab__,
               uVar11);
  local_98 = *(undefined8 *)(param_2 + 0x40);
  uVar18 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_98);
  FUN_0189b8e8(uVar11,uVar18,*(undefined8 *)StringLiteral_7111,uVar11);
  local_a0 = *(undefined8 *)(param_2 + 0x48);
  uVar18 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_a0);
  FUN_0189b8e8(uVar11,uVar18,*(undefined8 *)StringLiteral_10636,uVar11);
  local_a8 = *(undefined8 *)(param_2 + 0x84);
  uVar18 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_a8);
  FUN_0189b8e8(uVar11,uVar18,*(undefined8 *)StringLiteral_11648,uVar11);
  local_b0 = *(undefined8 *)(param_2 + 0x8c);
  uVar18 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_b0);
  FUN_0189b8e8(uVar11,uVar18,*(undefined8 *)StringLiteral_13333,uVar11);
  local_c0 = *(undefined8 *)(param_2 + 0x50);
  uStack_b8 = *(undefined8 *)(param_2 + 0x58);
  uVar18 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_c0);
  uVar11 = FUN_0189b8e8(uVar11,uVar18,
                        *(undefined8 *)
                         Method_System_Collections_Generic_List<Tweener>_GetEnumerator__,uVar11);
  uVar11 = FUN_0189b8e8(uVar11,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)Method_System_Data_Listeners<DataViewListener>_Add__,
                        *(undefined8 *)(param_2 + 0x100));
  FUN_0189b8e8(uVar11,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)StringLiteral_11864,
               *(undefined8 *)(param_2 + 0x38));
  if (*(long *)(param_2 + 0xe0) != 0) {
    plVar17 = (long *)*plVar21;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x5d8))
                (plVar17,*(undefined8 *)Method_Unity_Burst_Intrinsics_X86_Fma_fmadd_sd__,
                 *(undefined8 *)(*plVar17 + 0x5e0));
      plVar17 = (long *)*plVar21;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x598))(plVar17,*(undefined8 *)(*plVar17 + 0x5a0));
        plVar17 = *(long **)(param_2 + 0xe0);
        if (plVar17 != (long *)0x0) {
          lVar14 = *plVar17;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)System_Func<IActiveState,_bool>_TypeInfo) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_01891d7c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_00d59724(plVar17,*(long *)System_Func<IActiveState,_bool>_TypeInfo,0);
LAB_01891d7c:
          plVar17 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
          puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
          puVar1 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo;
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          do {
            lVar14 = *plVar17;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_01891dec;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar2,0);
LAB_01891dec:
            uVar15 = (*(code *)*puVar10)(plVar17,puVar10[1]);
            if ((uVar15 & 1) == 0) {
              if (plVar17 == (long *)0x0) goto LAB_01891f38;
              lVar14 = *plVar17;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 == 0) goto LAB_01891f10;
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              goto LAB_01891ef8;
            }
            lVar14 = *plVar17;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_01891e48;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar1,0);
LAB_01891e48:
            plVar13 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
            lVar20 = *(long *)puVar8;
            lVar19 = *plVar21;
            lVar14 = *(long *)(lVar20 + 0x38);
            if (lVar14 == 0) {
              FUN_00d59478(lVar20);
              lVar14 = *(long *)(lVar20 + 0x38);
            }
            lVar14 = *(long *)(lVar14 + 0x10);
            if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
              lVar14 = FUN_00d5941c();
            }
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar14 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
            if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
              lVar14 = FUN_00d5941c();
            }
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            (**(code **)(*plVar13 + 0x2b8))
                      (plVar13,lVar19,**(undefined8 **)(lVar14 + 0xb8),
                       *(undefined8 *)(*plVar13 + 0x2c0));
          } while( true );
        }
      }
    }
    goto LAB_01892428;
  }
  goto LAB_01891f60;
Oculus_Interaction_HandRayInteractorCursorVisual__InjectHand:
  if (plVar17 != (long *)0x0) {
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_10310) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_018923b8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar17,*(long *)StringLiteral_10310,0);
LAB_018923b8:
    (*(code *)*puVar10)(plVar17,puVar10[1]);
  }
  plVar17 = (long *)*plVar21;
  if (plVar17 == (long *)0x0) goto LAB_01892428;
  (**(code **)(*plVar17 + 0x5a8))(plVar17,*(undefined8 *)(*plVar17 + 0x5b0));
  goto LAB_018923ec;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01891ef8:
    if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_10310) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01891f2c;
    }
  }
LAB_01891f10:
  puVar10 = (undefined8 *)FUN_00d59724(plVar17,*(long *)StringLiteral_10310,0);
LAB_01891f2c:
  (*(code *)*puVar10)(plVar17,puVar10[1]);
LAB_01891f38:
  plVar17 = (long *)*plVar21;
  if (plVar17 == (long *)0x0) goto LAB_01892428;
  (**(code **)(*plVar17 + 0x5a8))(plVar17,*(undefined8 *)(*plVar17 + 0x5b0));
LAB_01891f60:
  if (*(long *)(param_2 + 0xf0) != 0) {
    plVar17 = (long *)*plVar21;
    if (plVar17 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar17 + 0x5d8))
              (plVar17,*(undefined8 *)Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__,
               *(undefined8 *)(*plVar17 + 0x5e0));
    lVar20 = *(long *)puVar8;
    plVar17 = *(long **)(param_2 + 0xf0);
    lVar19 = *plVar21;
    lVar14 = *(long *)(lVar20 + 0x38);
    if (lVar14 == 0) {
      FUN_00d59478(lVar20);
      lVar14 = *(long *)(lVar20 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_00d5941c();
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar14 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_00d5941c();
    }
    if (plVar17 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar17 + 0x2b8))
              (plVar17,lVar19,**(undefined8 **)(lVar14 + 0xb8),*(undefined8 *)(*plVar17 + 0x2c0));
  }
  local_68 = *(undefined8 *)(param_2 + 0xe8);
  lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_52_0_TypeInfo + 0x20);
  if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
    lVar14 = FUN_00d5941c();
  }
  puVar2 = StringLiteral_1482;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__;
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
  if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
    lVar14 = FUN_00d5941c();
  }
  pcVar12 = (char *)thunk_FUN_00d32ed4(&local_68,*(undefined8 *)(lVar14 + 0x80));
  puVar3 = Method_Newtonsoft_Json_JsonTextReader_<ParseValueAsync>d__8_MoveNext__;
  if (*pcVar12 != '\0') {
    local_68 = *(undefined8 *)(param_2 + 0xe8);
    lVar14 = *plVar21;
    uVar15 = FUN_00becc2c(&local_68,*(undefined8 *)puVar1);
    FUN_0189b94c(uVar15,*(undefined8 *)puVar3,lVar14,uVar15 & 0xffffffff);
  }
  plVar17 = *(long **)(param_2 + 0xf8);
  if (plVar17 != (long *)0x0) {
    lVar19 = *plVar17;
    lVar14 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar19 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_018920e0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar17,lVar14,0);
LAB_018920e0:
    iVar9 = (*(code *)*puVar10)(plVar17,puVar10[1]);
    if (0 < iVar9) {
      plVar17 = (long *)*plVar21;
      if (plVar17 == (long *)0x0) goto LAB_01892428;
      (**(code **)(*plVar17 + 0x5d8))
                (plVar17,*(undefined8 *)Method_System_Net_WebRequest_GetResponse__,
                 *(undefined8 *)(*plVar17 + 0x5e0));
      plVar17 = *(long **)(param_2 + 0xf8);
      if (plVar17 == (long *)0x0) goto LAB_01892428;
      lVar19 = *plVar17;
      lVar14 = *(long *)puVar2;
      uVar15 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar10 = (undefined8 *)(lVar19 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0189216c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar17,lVar14,0);
LAB_0189216c:
      iVar9 = (*(code *)*puVar10)(plVar17,puVar10[1]);
      if (iVar9 != 1) {
        plVar17 = (long *)*plVar21;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x598))(plVar17,*(undefined8 *)(*plVar17 + 0x5a0));
          plVar17 = *(long **)(param_2 + 0xf8);
          if (plVar17 != (long *)0x0) {
            lVar14 = *plVar17;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    *(long *)
                     Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__
                   ) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_01892270;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_00d59724(plVar17,*(long *)
                                            Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__
                                   ,0);
LAB_01892270:
            plVar17 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
            puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
            puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzq_f32__;
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            do {
              lVar14 = *plVar17;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_018922e0;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar2,0);
LAB_018922e0:
              uVar15 = (*(code *)*puVar10)(plVar17,puVar10[1]);
              if ((uVar15 & 1) == 0)
              goto Oculus_Interaction_HandRayInteractorCursorVisual__InjectHand;
              lVar14 = *plVar17;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                    puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_0189233c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar1,0);
LAB_0189233c:
              uVar11 = (*(code *)*puVar10)(plVar17,puVar10[1]);
              FUN_0189b804(param_1,uVar11);
            } while( true );
          }
        }
        goto LAB_01892428;
      }
      plVar17 = *(long **)(param_2 + 0xf8);
      if (plVar17 == (long *)0x0) goto LAB_01892428;
      lVar14 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadBuffer_EnsureFilled__)
          {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01892244;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_00d59724(plVar17,*(long *)
                                      Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadBuffer_EnsureFilled__
                             ,0);
LAB_01892244:
      uVar11 = (*(code *)*puVar10)(plVar17,0,puVar10[1]);
      FUN_0189b804(param_1,uVar11);
    }
  }
LAB_018923ec:
  plVar21 = (long *)*plVar21;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x588))(plVar21,*(undefined8 *)(*plVar21 + 0x590));
    return;
  }
LAB_01892428:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


