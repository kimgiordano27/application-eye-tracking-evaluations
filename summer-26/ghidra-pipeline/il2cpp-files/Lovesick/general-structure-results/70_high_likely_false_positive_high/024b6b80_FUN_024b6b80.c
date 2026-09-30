/*
FUNCTION_NAME: FUN_024b6b80
ENTRY_POINT: 024b6b80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint FUN_024b6b80(long param_1,long param_2,long *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
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
  
  if ((DAT_037826d3 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<ButtonControl,_ButtonControl>__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_ArrayAccess__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IColliderWorldImpl>_Remove__);
    thunk_FUN_00d48444(StringLiteral_13636);
    thunk_FUN_00d48444(Method_System_Globalization_TextInfo__ctor__);
    thunk_FUN_00d48444(RCG_Lovesick_RhythmGame_BassGuitar_<GrabGuitarCoroutine>d__60_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_RectOffset_var);
    thunk_FUN_00d48444(StringLiteral_12500);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Comparer<ulong>_get_Default__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CyclingWordSet>_GetEnumerator__);
    thunk_FUN_00d48444(StringLiteral_9280);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_First<JsonSchemaModel>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Action>_GetEnumerator__);
    thunk_FUN_00d48444(StringLiteral_7104);
    thunk_FUN_00d48444(StringLiteral_8195);
    thunk_FUN_00d48444(OVR_OpenVR_IVRChaperoneSetup__ExportLiveToBuffer_TypeInfo);
    thunk_FUN_00d48444(System_Data_AggregateType_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<CameraClearFlags>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_10650);
    thunk_FUN_00d48444(System_Net_WebCompletionSource<WebRequestStream>_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<Dictionary<Vertex,_int>>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_40>_SliceWithStride<Vector3>__
                      );
    DAT_037826d3 = 1;
  }
  puVar3 = StringLiteral_302;
  puVar4 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_40>_SliceWithStride<Vector3>__
  ;
  local_80 = 0;
  local_78 = 0;
  uVar12 = FUN_015ff8a0(param_2,0);
  puVar2 = UnityEngine_RectOffset_var;
  iVar9 = *(int *)(param_1 + 0x48);
  if ((uVar12 & 1) == 0) {
    if (iVar9 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x40);
      uVar8 = FUN_026fd110(param_1 + 0x50,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      iVar9 = FUN_026fd91c(uVar13,uVar8,0);
      if (iVar9 != 0) goto LAB_024b6e38;
      if ((*(long *)(param_1 + 200) == 0) || (*(long *)(param_1 + 0xb8) == 0)) {
        FUN_024b0f64(param_1);
      }
      puVar4 = StringLiteral_7104;
      lVar18 = *(long *)(param_1 + 0x1e8);
      if (lVar18 == 0) goto LAB_024b75b0;
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
      puVar3 = Method_System_Collections_Generic_Comparer<ulong>_get_Default__;
      if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_024b75b0;
      FUN_012ddc8c(*(long *)(param_1 + 0x1f0),
                   *(undefined8 *)Method_System_Collections_Generic_Comparer<ulong>_get_Default__);
      lVar18 = *(long *)(param_1 + 0x1f8);
      if (lVar18 == 0) goto LAB_024b75b0;
      lVar16 = *(long *)Method_System_Collections_Generic_HashSet<Action>_GetEnumerator__;
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
      if (*(long *)(param_1 + 0x200) == 0) goto LAB_024b75b0;
      FUN_012ddc8c(*(long *)(param_1 + 0x200),*(undefined8 *)puVar3);
      lVar18 = *(long *)(param_1 + 0x208);
      if (lVar18 == 0) goto LAB_024b75b0;
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
      puVar3 = StringLiteral_9280;
      puVar4 = Method_System_Collections_Generic_List<IColliderWorldImpl>_Remove__;
      if (param_2 == 0) goto LAB_024b75b0;
      iVar9 = *(int *)(param_2 + 0x10);
      if (iVar9 < 1) {
        local_84 = 0;
      }
      else {
        local_84 = 0;
        iVar20 = 0;
        do {
          uVar10 = FUN_015fa29c(param_2,iVar20,0);
          if (*(long *)(param_1 + 200) == 0) goto LAB_024b75b0;
          uVar10 = uVar10 & 0xffff;
          local_68 = uVar10;
          uVar12 = FUN_0129aa60(*(long *)(param_1 + 200),&local_68,*(undefined8 *)puVar4);
          if ((uVar12 & 1) == 0) {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_026fdd60(uVar10,0);
            if (uVar11 == 0) {
              if ((uVar10 == 0x2011) || (uVar10 == 0xad)) {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar13 = 0x2d;
LAB_024b7014:
                uVar11 = FUN_026fdd60(uVar13,0);
                if (uVar11 != 0) goto LAB_024b7024;
              }
              else if (uVar10 == 0xa0) {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar13 = 0x20;
                goto LAB_024b7014;
              }
              if (*(long *)(param_1 + 0x208) == 0) goto LAB_024b75b0;
              FUN_00c67e6c(*(long *)(param_1 + 0x208),uVar10,*(undefined8 *)puVar3);
              local_84 = 1;
            }
            else {
LAB_024b7024:
              lVar18 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10650);
              if (lVar18 == 0) goto LAB_024b75b0;
              FUN_024edd88(lVar18,0);
              *(undefined1 *)(lVar18 + 0x10) = 1;
              *(uint *)(lVar18 + 0x14) = uVar10;
              *(undefined8 *)(lVar18 + 0x18) = 0;
              *(undefined8 *)(lVar18 + 0x20) = 0;
              *(uint *)(lVar18 + 0x28) = uVar11;
              *(undefined4 *)(lVar18 + 0x2c) = 0x3f800000;
              if (*(long *)(param_1 + 0xb8) == 0) goto LAB_024b75b0;
              local_68 = uVar11;
              uVar12 = FUN_0129aa60(*(long *)(param_1 + 0xb8),&local_68,
                                    *(undefined8 *)StringLiteral_13636);
              if ((uVar12 & 1) == 0) {
                if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_024b75b0;
                local_68 = uVar11;
                uVar12 = FUN_012df150(*(long *)(param_1 + 0x1f0),&local_68,
                                      *(undefined8 *)StringLiteral_12500);
                if ((uVar12 & 1) != 0) {
                  if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_024b75b0;
                  FUN_00c67e6c(*(long *)(param_1 + 0x1e8),uVar11,*(undefined8 *)puVar3);
                }
                if (*(long *)(param_1 + 0x200) == 0) goto LAB_024b75b0;
                local_68 = uVar10;
                uVar12 = FUN_012df150(*(long *)(param_1 + 0x200),&local_68,
                                      *(undefined8 *)StringLiteral_12500);
                if ((uVar12 & 1) != 0) {
                  if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_024b75b0;
                  FUN_00cb70c4(*(long *)(param_1 + 0x1f8),lVar18,
                               *(undefined8 *)Method_System_Linq_Enumerable_First<JsonSchemaModel>__
                              );
                }
              }
              else {
                if (*(long *)(param_1 + 0xb8) == 0) goto LAB_024b75b0;
                local_6c = uVar11;
                FUN_01299bc0(*(long *)(param_1 + 0xb8),&local_6c,&local_68,
                             *(undefined8 *)
                              RCG_Lovesick_RhythmGame_BassGuitar_<GrabGuitarCoroutine>d__60_TypeInfo
                            );
                *(long *)(lVar18 + 0x18) = param_1;
                *(ulong *)(lVar18 + 0x20) = CONCAT44(uStack_64,local_68);
                if (*(long *)(param_1 + 0xc0) == 0) goto LAB_024b75b0;
                FUN_00cb70c4(*(long *)(param_1 + 0xc0),lVar18,
                             *(undefined8 *)Method_System_Linq_Enumerable_First<JsonSchemaModel>__);
                if (*(long *)(param_1 + 200) == 0) goto LAB_024b75b0;
                local_68 = uVar10;
                FUN_0129a054(*(long *)(param_1 + 200),&local_68,lVar18,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<ButtonControl,_ButtonControl>__
                            );
              }
            }
          }
          iVar20 = iVar20 + 1;
        } while (iVar9 != iVar20);
      }
      if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_024b75b0;
      if (*(int *)(*(long *)(param_1 + 0x1e8) + 0x18) == 0) {
        *param_3 = param_2;
        return 0;
      }
      lVar18 = *(long *)(param_1 + 0xd8);
      if (lVar18 == 0) goto LAB_024b75b0;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_024b75e8;
      plVar14 = *(long **)(lVar18 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
      if (plVar14 == (long *)0x0) goto LAB_024b75b0;
      iVar9 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
      if (iVar9 == 0) {
LAB_024b7210:
        lVar18 = *(long *)(param_1 + 0xd8);
        if (lVar18 == 0) goto LAB_024b75b0;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_024b75e8;
        lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
        if (lVar18 == 0) goto LAB_024b75b0;
        thunk_FUN_02672404(lVar18,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),
                           0);
        lVar18 = *(long *)(param_1 + 0xd8);
        if (lVar18 == 0) goto LAB_024b75b0;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_024b75e8;
        uVar13 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026ff3c4(uVar13,0);
      }
      else {
        lVar18 = *(long *)(param_1 + 0xd8);
        if (lVar18 == 0) goto LAB_024b75b0;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_024b75e8;
        plVar14 = *(long **)(lVar18 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
        if (plVar14 == (long *)0x0) goto LAB_024b75b0;
        iVar9 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
        if (iVar9 == 0) goto LAB_024b7210;
      }
      lVar18 = *(long *)(param_1 + 0xd8);
      if (lVar18 != 0) {
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0xe0)) {
LAB_024b75e8:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar19 = *(undefined8 *)(param_1 + 0x1e8);
        uVar8 = *(undefined4 *)(param_1 + 0x110);
        uVar13 = *(undefined8 *)(param_1 + 0xe8);
        uVar15 = *(undefined8 *)(param_1 + 0xf0);
        uVar1 = *(undefined4 *)(param_1 + 0x114);
        uVar21 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_026fe700(uVar19,uVar8,0,uVar15,uVar13,uVar1,uVar21,&local_78,0);
        puVar7 = StringLiteral_8195;
        puVar6 = Method_System_Globalization_TextInfo__ctor__;
        puVar5 = Method_System_Linq_Expressions_Expression_ArrayAccess__;
        puVar4 = Method_System_Nullable<CameraClearFlags>__ctor__;
        puVar2 = Method_System_Collections_Generic_List<CyclingWordSet>_GetEnumerator__;
        if (local_78 != 0) {
          lVar18 = 0;
          do {
            if ((int)*(uint *)(local_78 + 0x18) <= (int)(uint)lVar18) {
LAB_024b73c8:
              lVar18 = *(long *)(param_1 + 0x1e8);
              if (lVar18 != 0) {
                lVar16 = *(long *)StringLiteral_7104;
                *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                uVar12 = FUN_00da5b18(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
                puVar2 = 
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<ButtonControl,_ButtonControl>__
                ;
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
                puVar5 = Method_System_Linq_Enumerable_First<JsonSchemaModel>__;
                lVar18 = *(long *)(param_1 + 0x1f8);
                if (lVar18 != 0) {
                  iVar9 = 0;
                  goto LAB_024b744c;
                }
              }
              break;
            }
            if (*(uint *)(local_78 + 0x18) <= (uint)lVar18) goto LAB_024b75e8;
            lVar16 = *(long *)(local_78 + lVar18 * 8 + 0x20);
            if (lVar16 == 0) goto LAB_024b73c8;
            uVar11 = FUN_026fd61c(lVar16,0);
            FUN_026fd680(lVar16,*(undefined4 *)(param_1 + 0xe0),0);
            if (*(long *)(param_1 + 0xb0) == 0) break;
            FUN_00cb72b4(*(long *)(param_1 + 0xb0),lVar16,*(undefined8 *)puVar2);
            if (*(long *)(param_1 + 0xb8) == 0) break;
            local_68 = uVar11;
            FUN_0129a054(*(long *)(param_1 + 0xb8),&local_68,lVar16,*(undefined8 *)puVar5);
            if (*(long *)(param_1 + 0x1e0) == 0) break;
            FUN_00c67e6c(*(long *)(param_1 + 0x1e0),uVar11,*(undefined8 *)puVar3);
            if (*(long *)(param_1 + 0x1d8) == 0) break;
            FUN_00c67e6c(*(long *)(param_1 + 0x1d8),uVar11,*(undefined8 *)puVar3);
            lVar18 = lVar18 + 1;
          } while (local_78 != 0);
        }
      }
LAB_024b75b0:
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
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  FUN_0266185c(uVar13,param_1,0);
LAB_024b6e38:
  *param_3 = param_2;
  return 0;
LAB_024b744c:
  if (iVar9 < *(int *)(lVar18 + 0x18)) {
    FUN_0132138c(lVar18,iVar9,&local_68,*(undefined8 *)puVar4);
    lVar18 = CONCAT44(uStack_64,local_68);
    if ((lVar18 == 0) || (*(long *)(param_1 + 0xb8) == 0)) goto LAB_024b75b0;
    local_68 = *(uint *)(lVar18 + 0x28);
    uVar12 = FUN_0129eff4(*(long *)(param_1 + 0xb8),&local_68,&local_80,*(undefined8 *)puVar6);
    if ((uVar12 & 1) == 0) {
      if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_024b75b0;
      FUN_00c67e6c(*(long *)(param_1 + 0x1e8),*(undefined4 *)(lVar18 + 0x28),*(undefined8 *)puVar3);
    }
    else {
      *(long *)(lVar18 + 0x18) = param_1;
      *(undefined8 *)(lVar18 + 0x20) = local_80;
      if (*(long *)(param_1 + 0xc0) == 0) goto LAB_024b75b0;
      FUN_00cb70c4(*(long *)(param_1 + 0xc0),lVar18,*(undefined8 *)puVar5);
      if (*(long *)(param_1 + 200) == 0) goto LAB_024b75b0;
      local_68 = *(uint *)(lVar18 + 0x14);
      FUN_0129a054(*(long *)(param_1 + 200),&local_68,lVar18,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_024b75b0;
      FUN_01324ac8(*(long *)(param_1 + 0x1f8),iVar9,*(undefined8 *)puVar7);
      iVar9 = iVar9 + -1;
    }
    lVar18 = *(long *)(param_1 + 0x1f8);
    iVar9 = iVar9 + 1;
    if (lVar18 == 0) goto LAB_024b75b0;
    goto LAB_024b744c;
  }
  if ((uVar10 & 1) == 0 && *(char *)(param_1 + 0xe4) != '\0') {
    do {
      uVar12 = FUN_024b67dc(param_1);
    } while ((uVar12 & 1) == 0);
    uVar10 = 1;
  }
  if ((param_4 & 1) != 0) {
    FUN_024b5760(param_1);
  }
  *param_3 = **(long **)(*(long *)
                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                        + 0xb8);
  lVar18 = *(long *)(param_1 + 0x1f8);
  if (lVar18 != 0) {
    iVar9 = 0;
    while (iVar9 < *(int *)(lVar18 + 0x18)) {
      FUN_0132138c(lVar18,iVar9,&local_68,*(undefined8 *)puVar4);
      if ((CONCAT44(uStack_64,local_68) == 0) || (*(long *)(param_1 + 0x208) == 0))
      goto LAB_024b75b0;
      FUN_00c67e6c(*(long *)(param_1 + 0x208),*(undefined4 *)(CONCAT44(uStack_64,local_68) + 0x14),
                   *(undefined8 *)puVar3);
      lVar18 = *(long *)(param_1 + 0x1f8);
      iVar9 = iVar9 + 1;
      if (lVar18 == 0) goto LAB_024b75b0;
    }
    lVar18 = *(long *)(param_1 + 0x208);
    if (lVar18 != 0) {
      if (0 < *(int *)(lVar18 + 0x18)) {
        lVar18 = FUN_024a9c48(lVar18,0);
        *param_3 = lVar18;
      }
      return uVar10 & (local_84 ^ 1);
    }
  }
  goto LAB_024b75b0;
}


