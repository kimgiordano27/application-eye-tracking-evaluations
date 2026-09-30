/*
FUNCTION_NAME: FUN_02718e30
ENTRY_POINT: 02718e30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint FUN_02718e30(long param_1,long param_2,long *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 uVar21;
  uint local_84;
  undefined8 local_80;
  long local_78;
  uint local_6c;
  uint local_68;
  undefined4 uStack_64;
  
  if ((DAT_0378825d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRSceneAnchor>_Remove__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_2255);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_ArrayAccess__);
    thunk_FUN_00d48444(UnityEngine_Events_UnityAction<WitRequestOptions>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13636);
    thunk_FUN_00d48444(Method_System_Globalization_TextInfo__ctor__);
    thunk_FUN_00d48444(RCG_Lovesick_RhythmGame_BassGuitar_<GrabGuitarCoroutine>d__60_TypeInfo);
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
    thunk_FUN_00d48444(System_Data_AggregateType_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0578);
    thunk_FUN_00d48444(Method_System_Delegate_CreateDelegate__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(System_Net_WebCompletionSource<WebRequestStream>_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<Dictionary<Vertex,_int>>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_40>_SliceWithStride<Vector3>__
                      );
    DAT_0378825d = 1;
  }
  puVar5 = StringLiteral_302;
  puVar4 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_40>_SliceWithStride<Vector3>__
  ;
  local_80 = 0;
  local_78 = 0;
  uVar12 = FUN_015ff8a0(param_2,0);
  iVar9 = *(int *)(param_1 + 0x48);
  if ((uVar12 & 1) == 0) {
    if (iVar9 != 0) {
      iVar9 = FUN_02715664();
      if (iVar9 != 0) goto LAB_027190ac;
      if ((*(long *)(param_1 + 0xd8) == 0) || (*(long *)(param_1 + 200) == 0)) {
        FUN_02713b08(param_1);
      }
      puVar4 = StringLiteral_7104;
      lVar18 = *(long *)(param_1 + 0x1b0);
      if (lVar18 == 0) goto LAB_02719838;
      lVar16 = *(long *)StringLiteral_7104;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      uVar12 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
      if ((uVar12 & 1) == 0) {
        *(undefined4 *)(lVar18 + 0x18) = 0;
      }
      else {
        iVar9 = *(int *)(lVar18 + 0x18);
        *(undefined4 *)(lVar18 + 0x18) = 0;
        if (0 < iVar9) {
          FUN_0179519c(*(undefined8 *)(lVar18 + 0x10),0,iVar9,0);
        }
      }
      puVar5 = Method_System_Collections_Generic_Comparer<ulong>_get_Default__;
      if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_02719838;
      FUN_012ddc8c(*(long *)(param_1 + 0x1b8),
                   *(undefined8 *)Method_System_Collections_Generic_Comparer<ulong>_get_Default__);
      lVar18 = *(long *)(param_1 + 0x1c0);
      if (lVar18 == 0) goto LAB_02719838;
      lVar16 = *(long *)Method_System_Linq_Enumerable_Where<LocalizationData>__;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      uVar12 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
      if ((uVar12 & 1) == 0) {
        *(undefined4 *)(lVar18 + 0x18) = 0;
      }
      else {
        iVar9 = *(int *)(lVar18 + 0x18);
        *(undefined4 *)(lVar18 + 0x18) = 0;
        if (0 < iVar9) {
          FUN_0179519c(*(undefined8 *)(lVar18 + 0x10),0,iVar9,0);
        }
      }
      if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_02719838;
      FUN_012ddc8c(*(long *)(param_1 + 0x1c8),*(undefined8 *)puVar5);
      lVar18 = *(long *)(param_1 + 0x1d0);
      if (lVar18 == 0) goto LAB_02719838;
      lVar16 = *(long *)puVar4;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      uVar12 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
      if ((uVar12 & 1) == 0) {
        *(undefined4 *)(lVar18 + 0x18) = 0;
      }
      else {
        iVar9 = *(int *)(lVar18 + 0x18);
        *(undefined4 *)(lVar18 + 0x18) = 0;
        if (0 < iVar9) {
          FUN_0179519c(*(undefined8 *)(lVar18 + 0x10),0,iVar9,0);
        }
      }
      puVar8 = StringLiteral_9280;
      puVar5 = UnityEngine_Events_UnityAction<WitRequestOptions>_TypeInfo;
      puVar4 = UnityEngine_RectOffset_var;
      if (param_2 == 0) goto LAB_02719838;
      iVar9 = *(int *)(param_2 + 0x10);
      if (iVar9 < 1) {
        local_84 = 0;
      }
      else {
        local_84 = 0;
        iVar20 = 0;
        do {
          uVar10 = FUN_015fa29c(param_2,iVar20,0);
          if (*(long *)(param_1 + 0xd8) == 0) goto LAB_02719838;
          uVar10 = uVar10 & 0xffff;
          local_68 = uVar10;
          uVar12 = FUN_0129aa60(*(long *)(param_1 + 0xd8),&local_68,*(undefined8 *)puVar5);
          if ((uVar12 & 1) == 0) {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_026fdd60(uVar10,0);
            if (uVar11 == 0) {
              if ((uVar10 == 0x2011) || (uVar10 == 0xad)) {
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar13 = 0x2d;
LAB_02719290:
                uVar11 = FUN_026fdd60(uVar13,0);
                if (uVar11 != 0) goto LAB_027192a0;
              }
              else if (uVar10 == 0xa0) {
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar13 = 0x20;
                goto LAB_02719290;
              }
              if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_02719838;
              FUN_00c67e6c(*(long *)(param_1 + 0x1d0),uVar10,*(undefined8 *)puVar8);
              local_84 = 1;
            }
            else {
LAB_027192a0:
              lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_System_Collections_Generic_List<OVRSceneAnchor>_Remove__
                                         );
              if (lVar18 == 0) goto LAB_02719838;
              FUN_017b46ec(lVar18,0);
              *(undefined1 *)(lVar18 + 0x10) = 1;
              *(uint *)(lVar18 + 0x14) = uVar10;
              *(undefined8 *)(lVar18 + 0x18) = 0;
              *(undefined8 *)(lVar18 + 0x20) = 0;
              *(uint *)(lVar18 + 0x28) = uVar11;
              *(undefined4 *)(lVar18 + 0x2c) = 0x3f800000;
              if (*(long *)(param_1 + 200) == 0) goto LAB_02719838;
              local_68 = uVar11;
              uVar12 = FUN_0129aa60(*(long *)(param_1 + 200),&local_68,
                                    *(undefined8 *)StringLiteral_13636);
              if ((uVar12 & 1) == 0) {
                if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_02719838;
                local_68 = uVar11;
                uVar12 = FUN_012df150(*(long *)(param_1 + 0x1b8),&local_68,
                                      *(undefined8 *)StringLiteral_12500);
                if ((uVar12 & 1) != 0) {
                  if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_02719838;
                  FUN_00c67e6c(*(long *)(param_1 + 0x1b0),uVar11,*(undefined8 *)puVar8);
                }
                if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_02719838;
                local_68 = uVar10;
                uVar12 = FUN_012df150(*(long *)(param_1 + 0x1c8),&local_68,
                                      *(undefined8 *)StringLiteral_12500);
                if ((uVar12 & 1) != 0) {
                  if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_02719838;
                  FUN_00cdf860(*(long *)(param_1 + 0x1c0),lVar18,
                               *(undefined8 *)UnityEngine_UIElements_Foldout_var);
                }
              }
              else {
                if (*(long *)(param_1 + 200) == 0) goto LAB_02719838;
                local_6c = uVar11;
                FUN_01299bc0(*(long *)(param_1 + 200),&local_6c,&local_68,
                             *(undefined8 *)
                              RCG_Lovesick_RhythmGame_BassGuitar_<GrabGuitarCoroutine>d__60_TypeInfo
                            );
                *(long *)(lVar18 + 0x18) = param_1;
                *(ulong *)(lVar18 + 0x20) = CONCAT44(uStack_64,local_68);
                if (*(long *)(param_1 + 0xd0) == 0) goto LAB_02719838;
                FUN_00cdf860(*(long *)(param_1 + 0xd0),lVar18,
                             *(undefined8 *)UnityEngine_UIElements_Foldout_var);
                if (*(long *)(param_1 + 0xd8) == 0) goto LAB_02719838;
                local_68 = uVar10;
                FUN_0129a054(*(long *)(param_1 + 0xd8),&local_68,lVar18,
                             *(undefined8 *)StringLiteral_2255);
              }
            }
          }
          iVar20 = iVar20 + 1;
        } while (iVar9 != iVar20);
      }
      if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_02719838;
      if (*(int *)(*(long *)(param_1 + 0x1b0) + 0x18) == 0) {
        *param_3 = param_2;
        return 0;
      }
      lVar18 = *(long *)(param_1 + 0xe8);
      if (lVar18 == 0) goto LAB_02719838;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xf0)) goto LAB_02719868;
      plVar14 = *(long **)(lVar18 + (long)(int)*(uint *)(param_1 + 0xf0) * 8 + 0x20);
      if (plVar14 == (long *)0x0) goto LAB_02719838;
      iVar9 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
      if (iVar9 == *(int *)(param_1 + 0xf8)) {
        lVar18 = *(long *)(param_1 + 0xe8);
        if (lVar18 == 0) goto LAB_02719838;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xf0)) goto LAB_02719868;
        plVar14 = *(long **)(lVar18 + (long)(int)*(uint *)(param_1 + 0xf0) * 8 + 0x20);
        if (plVar14 == (long *)0x0) goto LAB_02719838;
        iVar9 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
        if (iVar9 != *(int *)(param_1 + 0xfc)) goto LAB_0271949c;
      }
      else {
LAB_0271949c:
        lVar18 = *(long *)(param_1 + 0xe8);
        if (lVar18 == 0) goto LAB_02719838;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xf0)) goto LAB_02719868;
        lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(param_1 + 0xf0) * 8 + 0x20);
        if (lVar18 == 0) goto LAB_02719838;
        FUN_02672404(lVar18,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),0);
        lVar18 = *(long *)(param_1 + 0xe8);
        if (lVar18 == 0) goto LAB_02719838;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xf0)) goto LAB_02719868;
        uVar13 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0xf0) * 8 + 0x20);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026ff3c4(uVar13,0);
      }
      lVar18 = *(long *)(param_1 + 0xe8);
      if (lVar18 != 0) {
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xf0)) {
LAB_02719868:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar19 = *(undefined8 *)(param_1 + 0x1b0);
        uVar1 = *(undefined4 *)(param_1 + 0x100);
        uVar13 = *(undefined8 *)(param_1 + 0x108);
        uVar15 = *(undefined8 *)(param_1 + 0x110);
        uVar2 = *(undefined4 *)(param_1 + 0x104);
        uVar21 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0xf0) * 8 + 0x20);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_026fe700(uVar19,uVar1,0,uVar15,uVar13,uVar2,uVar21,&local_78,0);
        puVar7 = Method_System_Globalization_TextInfo__ctor__;
        puVar6 = Method_UnityEngine_Playables_PlayableOutputExtensions_SetUserData<PlayableOutput>__
        ;
        puVar3 = Method_System_Linq_Expressions_Expression_ArrayAccess__;
        puVar5 = Method_System_Delegate_CreateDelegate__;
        puVar4 = Method_System_Collections_Generic_List<CyclingWordSet>_GetEnumerator__;
        if (local_78 != 0) {
          lVar18 = 0;
          do {
            if ((int)*(uint *)(local_78 + 0x18) <= (int)(uint)lVar18) {
LAB_02719650:
              lVar18 = *(long *)(param_1 + 0x1b0);
              if (lVar18 != 0) {
                lVar16 = *(long *)StringLiteral_7104;
                *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                uVar12 = FUN_00da5b18(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
                puVar4 = StringLiteral_2255;
                if ((uVar12 & 1) == 0) {
                  *(undefined4 *)(lVar18 + 0x18) = 0;
                }
                else {
                  iVar9 = *(int *)(lVar18 + 0x18);
                  *(undefined4 *)(lVar18 + 0x18) = 0;
                  if (0 < iVar9) {
                    FUN_0179519c(*(undefined8 *)(lVar18 + 0x10),0,iVar9,0);
                  }
                }
                puVar3 = UnityEngine_UIElements_Foldout_var;
                lVar18 = *(long *)(param_1 + 0x1c0);
                if (lVar18 != 0) {
                  iVar9 = 0;
                  goto LAB_027196d8;
                }
              }
              break;
            }
            if (*(uint *)(local_78 + 0x18) <= (uint)lVar18) goto LAB_02719868;
            lVar16 = *(long *)(local_78 + lVar18 * 8 + 0x20);
            if (lVar16 == 0) goto LAB_02719650;
            uVar11 = FUN_026fd61c(lVar16,0);
            FUN_026fd680(lVar16,*(undefined4 *)(param_1 + 0xf0),0);
            if (*(long *)(param_1 + 0xc0) == 0) break;
            FUN_00cb72b4(*(long *)(param_1 + 0xc0),lVar16,*(undefined8 *)puVar4);
            if (*(long *)(param_1 + 200) == 0) break;
            local_68 = uVar11;
            FUN_0129a054(*(long *)(param_1 + 200),&local_68,lVar16,*(undefined8 *)puVar3);
            if (*(long *)(param_1 + 0x1a8) == 0) break;
            FUN_00c67e6c(*(long *)(param_1 + 0x1a8),uVar11,*(undefined8 *)puVar8);
            if (*(long *)(param_1 + 0x1a0) == 0) break;
            FUN_00c67e6c(*(long *)(param_1 + 0x1a0),uVar11,*(undefined8 *)puVar8);
            lVar18 = lVar18 + 1;
          } while (local_78 != 0);
        }
      }
LAB_02719838:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar13 = FUN_0268b6ac(param_1,0);
    uVar15 = *(undefined8 *)puVar4;
    puVar17 = (undefined8 *)System_Net_WebCompletionSource<WebRequestStream>_TypeInfo;
  }
  else {
    uVar13 = FUN_0268b6ac(param_1,0);
    uVar15 = *(undefined8 *)puVar4;
    puVar17 = (undefined8 *)System_Net_WebCompletionSource<WebRequestStream>_TypeInfo;
    if (iVar9 != 0) {
      puVar17 = (undefined8 *)System_Collections_Generic_List<Dictionary<Vertex,_int>>_TypeInfo;
    }
  }
  uVar13 = FUN_01600424(uVar15,uVar13,*puVar17,0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar5);
  }
  FUN_0266185c(uVar13,param_1,0);
LAB_027190ac:
  *param_3 = param_2;
  return 0;
LAB_027196d8:
  if (iVar9 < *(int *)(lVar18 + 0x18)) {
    FUN_0132138c(lVar18,iVar9,&local_68,*(undefined8 *)puVar5);
    lVar18 = CONCAT44(uStack_64,local_68);
    if ((lVar18 == 0) || (*(long *)(param_1 + 200) == 0)) goto LAB_02719838;
    local_68 = *(uint *)(lVar18 + 0x28);
    uVar12 = FUN_0129eff4(*(long *)(param_1 + 200),&local_68,&local_80,*(undefined8 *)puVar7);
    if ((uVar12 & 1) == 0) {
      if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_02719838;
      FUN_00c67e6c(*(long *)(param_1 + 0x1b0),*(undefined4 *)(lVar18 + 0x28),*(undefined8 *)puVar8);
    }
    else {
      *(long *)(lVar18 + 0x18) = param_1;
      *(undefined8 *)(lVar18 + 0x20) = local_80;
      if (*(long *)(param_1 + 0xd0) == 0) goto LAB_02719838;
      FUN_00cdf860(*(long *)(param_1 + 0xd0),lVar18,*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0xd8) == 0) goto LAB_02719838;
      local_68 = *(uint *)(lVar18 + 0x14);
      FUN_0129a054(*(long *)(param_1 + 0xd8),&local_68,lVar18,*(undefined8 *)puVar4);
      if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_02719838;
      FUN_01324ac8(*(long *)(param_1 + 0x1c0),iVar9,*(undefined8 *)puVar6);
      iVar9 = iVar9 + -1;
    }
    lVar18 = *(long *)(param_1 + 0x1c0);
    iVar9 = iVar9 + 1;
    if (lVar18 == 0) goto LAB_02719838;
    goto LAB_027196d8;
  }
  if ((uVar10 & 1) == 0 && *(char *)(param_1 + 0xf4) != '\0') {
    do {
      uVar12 = FUN_02718a8c(param_1);
    } while ((uVar12 & 1) == 0);
    uVar10 = 1;
  }
  if ((param_4 & 1) != 0) {
    FUN_02717990(param_1);
  }
  *param_3 = **(long **)(*(long *)
                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                        + 0xb8);
  lVar18 = *(long *)(param_1 + 0x1c0);
  if (lVar18 != 0) {
    iVar9 = 0;
    while (iVar9 < *(int *)(lVar18 + 0x18)) {
      FUN_0132138c(lVar18,iVar9,&local_68,*(undefined8 *)puVar5);
      if ((CONCAT44(uStack_64,local_68) == 0) || (*(long *)(param_1 + 0x1d0) == 0))
      goto LAB_02719838;
      FUN_00c67e6c(*(long *)(param_1 + 0x1d0),*(undefined4 *)(CONCAT44(uStack_64,local_68) + 0x14),
                   *(undefined8 *)puVar8);
      lVar18 = *(long *)(param_1 + 0x1c0);
      iVar9 = iVar9 + 1;
      if (lVar18 == 0) goto LAB_02719838;
    }
    if (*(long *)(param_1 + 0x1d0) != 0) {
      if (0 < *(int *)(*(long *)(param_1 + 0x1d0) + 0x18)) {
        lVar18 = FUN_0271986c();
        *param_3 = lVar18;
      }
      return uVar10 & (local_84 ^ 1);
    }
  }
  goto LAB_02719838;
}


