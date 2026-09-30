/*
FUNCTION_NAME: FUN_02717fdc
ENTRY_POINT: 02717fdc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint FUN_02717fdc(long param_1,long param_2,long *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  uint local_84;
  undefined8 local_80;
  long local_78;
  uint local_6c;
  uint local_68;
  undefined4 uStack_64;
  
  if ((DAT_0378825c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRSceneAnchor>_Remove__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_2255);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_ArrayAccess__);
    thunk_FUN_00d48444(UnityEngine_Events_UnityAction<WitRequestOptions>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13636);
    thunk_FUN_00d48444(Method_System_Globalization_TextInfo__ctor__);
    thunk_FUN_00d48444(RCG_Lovesick_RhythmGame_BassGuitar_<GrabGuitarCoroutine>d__60_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVRChaperone__GetCalibrationState_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_RectOffset_var);
    thunk_FUN_00d48444(StringLiteral_12500);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Comparer<ulong>_get_Default__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CyclingWordSet>_GetEnumerator__);
    thunk_FUN_00d48444(StringLiteral_9280);
    thunk_FUN_00d48444(UnityEngine_UIElements_Foldout_var);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Where<LocalizationData>__);
    thunk_FUN_00d48444(StringLiteral_7104);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableOutputExtensions_SetUserData<PlayableOutput>__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Serialization_ReflectionValueProvider_GetValue__);
    thunk_FUN_00d48444(System_Data_AggregateType_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0578);
    thunk_FUN_00d48444(Method_System_Delegate_CreateDelegate__);
    thunk_FUN_00d48444(
                      Method_RCG_Localization_LocalizationDataCollection_<>c__DisplayClass11_0_<RemoveData>b__0__
                      );
    thunk_FUN_00d48444(System_Net_WebCompletionSource<WebRequestStream>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_40>_SliceWithStride<Vector3>__
                      );
    DAT_0378825c = 1;
  }
  puVar6 = StringLiteral_302;
  puVar5 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_40>_SliceWithStride<Vector3>__
  ;
  local_80 = 0;
  local_78 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) || (*(int *)(param_1 + 0x48) == 0)) {
    iVar10 = *(int *)(param_1 + 0x48);
    uVar16 = FUN_0268b6ac(param_1,0);
    puVar18 = (undefined8 *)System_Net_WebCompletionSource<WebRequestStream>_TypeInfo;
    if (iVar10 != 0) {
      puVar18 = (undefined8 *)
                Method_RCG_Localization_LocalizationDataCollection_<>c__DisplayClass11_0_<RemoveData>b__0__
      ;
    }
    uVar16 = FUN_01600424(*(undefined8 *)puVar5,uVar16,*puVar18,0);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar6);
    }
    FUN_0266185c(uVar16,param_1,0);
    *param_3 = 0;
    return 0;
  }
  iVar10 = FUN_02715664(param_1);
  if (iVar10 != 0) {
    lVar13 = FUN_010df6b8(param_2,*(undefined8 *)
                                   OVR_OpenVR_IVRChaperone__GetCalibrationState_TypeInfo);
    *param_3 = lVar13;
    return 0;
  }
  if ((*(long *)(param_1 + 0xd8) == 0) || (*(long *)(param_1 + 200) == 0)) {
    FUN_02713b08(param_1);
  }
  puVar5 = StringLiteral_7104;
  lVar13 = *(long *)(param_1 + 0x1b0);
  if (lVar13 == 0) goto LAB_02718a44;
  lVar19 = *(long *)StringLiteral_7104;
  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
  uVar14 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
  if ((uVar14 & 1) == 0) {
    *(undefined4 *)(lVar13 + 0x18) = 0;
  }
  else {
    iVar10 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    if (0 < iVar10) {
      FUN_0179519c(*(undefined8 *)(lVar13 + 0x10),0,iVar10,0);
    }
  }
  puVar6 = Method_System_Collections_Generic_Comparer<ulong>_get_Default__;
  if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_02718a44;
  FUN_012ddc8c(*(long *)(param_1 + 0x1b8),
               *(undefined8 *)Method_System_Collections_Generic_Comparer<ulong>_get_Default__);
  lVar13 = *(long *)(param_1 + 0x1c0);
  if (lVar13 == 0) goto LAB_02718a44;
  lVar19 = *(long *)Method_System_Linq_Enumerable_Where<LocalizationData>__;
  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
  uVar14 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
  if ((uVar14 & 1) == 0) {
    *(undefined4 *)(lVar13 + 0x18) = 0;
  }
  else {
    iVar10 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    if (0 < iVar10) {
      FUN_0179519c(*(undefined8 *)(lVar13 + 0x10),0,iVar10,0);
    }
  }
  if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_02718a44;
  FUN_012ddc8c(*(long *)(param_1 + 0x1c8),*(undefined8 *)puVar6);
  lVar13 = *(long *)(param_1 + 0x1d0);
  if (lVar13 == 0) goto LAB_02718a44;
  lVar19 = *(long *)puVar5;
  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
  uVar14 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
  if ((uVar14 & 1) == 0) {
    *(undefined4 *)(lVar13 + 0x18) = 0;
  }
  else {
    iVar10 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    if (0 < iVar10) {
      FUN_0179519c(*(undefined8 *)(lVar13 + 0x10),0,iVar10,0);
    }
  }
  puVar6 = StringLiteral_9280;
  puVar5 = UnityEngine_Events_UnityAction<WitRequestOptions>_TypeInfo;
  if (0 < (int)*(ulong *)(param_2 + 0x18)) {
    uVar14 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    if (uVar14 != 0) {
      local_84 = 0;
      uVar21 = 0;
      do {
        if (*(long *)(param_1 + 0xd8) == 0) goto LAB_02718a44;
        uVar12 = *(uint *)(param_2 + 0x20 + uVar21 * 4);
        local_68 = uVar12;
        uVar15 = FUN_0129aa60(*(long *)(param_1 + 0xd8),&local_68,*(undefined8 *)puVar5);
        if ((uVar15 & 1) == 0) {
          if (*(int *)(*(long *)UnityEngine_RectOffset_var + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_026fdd60(uVar12,0);
          if (uVar11 == 0) {
            if ((uVar12 == 0x2011) || (uVar12 == 0xad)) {
              if (*(int *)(*(long *)UnityEngine_RectOffset_var + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar16 = 0x2d;
LAB_02718458:
              uVar11 = FUN_026fdd60(uVar16,0);
              if (uVar11 != 0) goto LAB_02718468;
            }
            else if (uVar12 == 0xa0) {
              if (*(int *)(*(long *)UnityEngine_RectOffset_var + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar16 = 0x20;
              goto LAB_02718458;
            }
            if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_02718a44;
            FUN_00c67e6c(*(long *)(param_1 + 0x1d0),uVar12,*(undefined8 *)puVar6);
            local_84 = 1;
          }
          else {
LAB_02718468:
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Collections_Generic_List<OVRSceneAnchor>_Remove__
                                       );
            if (lVar13 == 0) goto LAB_02718a44;
            FUN_017b46ec(lVar13,0);
            *(undefined1 *)(lVar13 + 0x10) = 1;
            *(uint *)(lVar13 + 0x14) = uVar12;
            *(undefined8 *)(lVar13 + 0x18) = 0;
            *(undefined8 *)(lVar13 + 0x20) = 0;
            *(uint *)(lVar13 + 0x28) = uVar11;
            *(undefined4 *)(lVar13 + 0x2c) = 0x3f800000;
            if (*(long *)(param_1 + 200) == 0) goto LAB_02718a44;
            local_68 = uVar11;
            uVar15 = FUN_0129aa60(*(long *)(param_1 + 200),&local_68,
                                  *(undefined8 *)StringLiteral_13636);
            if ((uVar15 & 1) == 0) {
              if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_02718a44;
              local_68 = uVar11;
              uVar15 = FUN_012df150(*(long *)(param_1 + 0x1b8),&local_68,
                                    *(undefined8 *)StringLiteral_12500);
              if ((uVar15 & 1) != 0) {
                if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_02718a44;
                FUN_00c67e6c(*(long *)(param_1 + 0x1b0),uVar11,*(undefined8 *)puVar6);
              }
              if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_02718a44;
              local_68 = uVar12;
              uVar15 = FUN_012df150(*(long *)(param_1 + 0x1c8),&local_68,
                                    *(undefined8 *)StringLiteral_12500);
              if ((uVar15 & 1) != 0) {
                if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_02718a44;
                FUN_00cdf860(*(long *)(param_1 + 0x1c0),lVar13,
                             *(undefined8 *)UnityEngine_UIElements_Foldout_var);
              }
            }
            else {
              if (*(long *)(param_1 + 200) == 0) goto LAB_02718a44;
              local_6c = uVar11;
              FUN_01299bc0(*(long *)(param_1 + 200),&local_6c,&local_68,
                           *(undefined8 *)
                            RCG_Lovesick_RhythmGame_BassGuitar_<GrabGuitarCoroutine>d__60_TypeInfo);
              *(long *)(lVar13 + 0x18) = param_1;
              *(ulong *)(lVar13 + 0x20) = CONCAT44(uStack_64,local_68);
              if (*(long *)(param_1 + 0xd0) == 0) goto LAB_02718a44;
              FUN_00cdf860(*(long *)(param_1 + 0xd0),lVar13,
                           *(undefined8 *)UnityEngine_UIElements_Foldout_var);
              if (*(long *)(param_1 + 0xd8) == 0) goto LAB_02718a44;
              local_68 = uVar12;
              FUN_0129a054(*(long *)(param_1 + 0xd8),&local_68,lVar13,
                           *(undefined8 *)StringLiteral_2255);
            }
          }
        }
        if (uVar14 - 1 == uVar21) goto LAB_027185ec;
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_2 + 0x18));
    }
    goto LAB_02718a48;
  }
  local_84 = 0;
LAB_027185ec:
  if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_02718a44;
  if (*(int *)(*(long *)(param_1 + 0x1b0) + 0x18) == 0) {
    *param_3 = param_2;
    return 0;
  }
  lVar13 = *(long *)(param_1 + 0xe8);
  if (lVar13 == 0) goto LAB_02718a44;
  if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0xf0)) goto LAB_02718a48;
  plVar17 = *(long **)(lVar13 + (long)(int)*(uint *)(param_1 + 0xf0) * 8 + 0x20);
  if (plVar17 == (long *)0x0) goto LAB_02718a44;
  iVar10 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
  if (iVar10 == *(int *)(param_1 + 0xf8)) {
    lVar13 = *(long *)(param_1 + 0xe8);
    if (lVar13 == 0) goto LAB_02718a44;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0xf0)) goto LAB_02718a48;
    plVar17 = *(long **)(lVar13 + (long)(int)*(uint *)(param_1 + 0xf0) * 8 + 0x20);
    if (plVar17 == (long *)0x0) goto LAB_02718a44;
    iVar10 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
    if (iVar10 != *(int *)(param_1 + 0xfc)) goto LAB_02718674;
  }
  else {
LAB_02718674:
    lVar13 = *(long *)(param_1 + 0xe8);
    if (lVar13 == 0) goto LAB_02718a44;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0xf0)) goto LAB_02718a48;
    lVar13 = *(long *)(lVar13 + (long)(int)*(uint *)(param_1 + 0xf0) * 8 + 0x20);
    if (lVar13 == 0) goto LAB_02718a44;
    FUN_02672404(lVar13,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),0);
    lVar13 = *(long *)(param_1 + 0xe8);
    if (lVar13 == 0) goto LAB_02718a44;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0xf0)) goto LAB_02718a48;
    uVar16 = *(undefined8 *)(lVar13 + (long)(int)*(uint *)(param_1 + 0xf0) * 8 + 0x20);
    if (*(int *)(*(long *)UnityEngine_RectOffset_var + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026ff3c4(uVar16,0);
  }
  lVar13 = *(long *)(param_1 + 0xe8);
  if (lVar13 != 0) {
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0xf0)) {
LAB_02718a48:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar20 = *(undefined8 *)(param_1 + 0x1b0);
    uVar2 = *(undefined4 *)(param_1 + 0x100);
    uVar16 = *(undefined8 *)(param_1 + 0x108);
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    uVar3 = *(undefined4 *)(param_1 + 0x104);
    uVar22 = *(undefined8 *)(lVar13 + (long)(int)*(uint *)(param_1 + 0xf0) * 8 + 0x20);
    if (*(int *)(*(long *)UnityEngine_RectOffset_var + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_026fe700(uVar20,uVar2,0,uVar1,uVar16,uVar3,uVar22,&local_78,0);
    puVar9 = Method_System_Globalization_TextInfo__ctor__;
    puVar8 = Method_UnityEngine_Playables_PlayableOutputExtensions_SetUserData<PlayableOutput>__;
    puVar4 = Method_System_Linq_Expressions_Expression_ArrayAccess__;
    puVar7 = Method_System_Delegate_CreateDelegate__;
    puVar5 = Method_System_Collections_Generic_List<CyclingWordSet>_GetEnumerator__;
    if (local_78 != 0) {
      lVar13 = 0;
      do {
        if ((int)*(uint *)(local_78 + 0x18) <= (int)(uint)lVar13) {
LAB_02718838:
          lVar13 = *(long *)(param_1 + 0x1b0);
          if (lVar13 != 0) {
            lVar19 = *(long *)StringLiteral_7104;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            uVar14 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200))
            ;
            puVar5 = StringLiteral_2255;
            if ((uVar14 & 1) == 0) {
              *(undefined4 *)(lVar13 + 0x18) = 0;
            }
            else {
              iVar10 = *(int *)(lVar13 + 0x18);
              *(undefined4 *)(lVar13 + 0x18) = 0;
              if (0 < iVar10) {
                FUN_0179519c(*(undefined8 *)(lVar13 + 0x10),0,iVar10,0);
              }
            }
            puVar4 = UnityEngine_UIElements_Foldout_var;
            lVar13 = *(long *)(param_1 + 0x1c0);
            if (lVar13 != 0) {
              iVar10 = 0;
              goto LAB_027188b8;
            }
          }
          break;
        }
        if (*(uint *)(local_78 + 0x18) <= (uint)lVar13) goto LAB_02718a48;
        lVar19 = *(long *)(local_78 + lVar13 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_02718838;
        uVar11 = FUN_026fd61c(lVar19,0);
        FUN_026fd680(lVar19,*(undefined4 *)(param_1 + 0xf0),0);
        if (*(long *)(param_1 + 0xc0) == 0) break;
        FUN_00cb72b4(*(long *)(param_1 + 0xc0),lVar19,*(undefined8 *)puVar5);
        if (*(long *)(param_1 + 200) == 0) break;
        local_68 = uVar11;
        FUN_0129a054(*(long *)(param_1 + 200),&local_68,lVar19,*(undefined8 *)puVar4);
        if (*(long *)(param_1 + 0x1a8) == 0) break;
        FUN_00c67e6c(*(long *)(param_1 + 0x1a8),uVar11,*(undefined8 *)puVar6);
        if (*(long *)(param_1 + 0x1a0) == 0) break;
        FUN_00c67e6c(*(long *)(param_1 + 0x1a0),uVar11,*(undefined8 *)puVar6);
        lVar13 = lVar13 + 1;
      } while (local_78 != 0);
    }
  }
LAB_02718a44:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_027188b8:
  if (iVar10 < *(int *)(lVar13 + 0x18)) {
    FUN_0132138c(lVar13,iVar10,&local_68,*(undefined8 *)puVar7);
    lVar13 = CONCAT44(uStack_64,local_68);
    if ((lVar13 == 0) || (*(long *)(param_1 + 200) == 0)) goto LAB_02718a44;
    local_68 = *(uint *)(lVar13 + 0x28);
    uVar14 = FUN_0129eff4(*(long *)(param_1 + 200),&local_68,&local_80,*(undefined8 *)puVar9);
    if ((uVar14 & 1) == 0) {
      if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_02718a44;
      FUN_00c67e6c(*(long *)(param_1 + 0x1b0),*(undefined4 *)(lVar13 + 0x28),*(undefined8 *)puVar6);
    }
    else {
      *(long *)(lVar13 + 0x18) = param_1;
      *(undefined8 *)(lVar13 + 0x20) = local_80;
      if (*(long *)(param_1 + 0xd0) == 0) goto LAB_02718a44;
      FUN_00cdf860(*(long *)(param_1 + 0xd0),lVar13,*(undefined8 *)puVar4);
      if (*(long *)(param_1 + 0xd8) == 0) goto LAB_02718a44;
      local_68 = *(uint *)(lVar13 + 0x14);
      FUN_0129a054(*(long *)(param_1 + 0xd8),&local_68,lVar13,*(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_02718a44;
      FUN_01324ac8(*(long *)(param_1 + 0x1c0),iVar10,*(undefined8 *)puVar8);
      iVar10 = iVar10 + -1;
    }
    lVar13 = *(long *)(param_1 + 0x1c0);
    iVar10 = iVar10 + 1;
    if (lVar13 == 0) goto LAB_02718a44;
    goto LAB_027188b8;
  }
  if ((uVar12 & 1) == 0 && *(char *)(param_1 + 0xf4) != '\0') {
    do {
      uVar14 = FUN_02718a8c(param_1);
    } while ((uVar14 & 1) == 0);
    uVar12 = 1;
  }
  if ((param_4 & 1) != 0) {
    FUN_02717990(param_1);
  }
  lVar13 = *(long *)(param_1 + 0x1c0);
  if (lVar13 == 0) goto LAB_02718a44;
  iVar10 = 0;
  while (iVar10 < *(int *)(lVar13 + 0x18)) {
    FUN_0132138c(lVar13,iVar10,&local_68,*(undefined8 *)puVar7);
    if ((CONCAT44(uStack_64,local_68) == 0) || (*(long *)(param_1 + 0x1d0) == 0)) goto LAB_02718a44;
    FUN_00c67e6c(*(long *)(param_1 + 0x1d0),*(undefined4 *)(CONCAT44(uStack_64,local_68) + 0x14),
                 *(undefined8 *)puVar6);
    lVar13 = *(long *)(param_1 + 0x1c0);
    iVar10 = iVar10 + 1;
    if (lVar13 == 0) goto LAB_02718a44;
  }
  *param_3 = 0;
  lVar13 = *(long *)(param_1 + 0x1d0);
  if (lVar13 != 0) {
    if (0 < *(int *)(lVar13 + 0x18)) {
      lVar13 = FUN_01325140(lVar13,*(undefined8 *)
                                    Method_Newtonsoft_Json_Serialization_ReflectionValueProvider_GetValue__
                           );
      *param_3 = lVar13;
    }
    return uVar12 & (local_84 ^ 1);
  }
  goto LAB_02718a44;
}


