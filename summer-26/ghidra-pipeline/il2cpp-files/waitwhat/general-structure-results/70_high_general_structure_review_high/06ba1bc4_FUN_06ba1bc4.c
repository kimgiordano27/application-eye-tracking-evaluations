/*
FUNCTION_NAME: FUN_06ba1bc4
ENTRY_POINT: 06ba1bc4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void FUN_06ba1bc4(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  int *piVar26;
  undefined8 local_240;
  undefined8 *puStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  long lStack_218;
  ulong local_210;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long lStack_148;
  int local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  long local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long lStack_d8;
  ulong local_d0;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  long lVar19;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar12 = param_1;
  if ((DAT_075602fe & 1) == 0) {
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleTextShadow,_TextShadow>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleTransformOrigin,_TransformOrigin>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<IObserver<InputEventPtr>>_get_Item__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_AppendWithCapacity__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_set_Item__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_AppendWithCapacity__
                );
    FUN_03188a78(Method_System_Collections_Generic_HashSet<Transform>__ctor__);
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_RemoveAtByMovingTailWithCapacity__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_RemoveAtWithCapacity__
                );
    FUN_03188a78(Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_get_Item__);
    FUN_03188a78(Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_set_Item__);
    FUN_03188a78(Method_System_Collections_Generic_HashSet<Transform>_Clear__);
    FUN_03188a78(Method_System_Collections_Generic_HashSet<Transform>_GetEnumerator__);
    FUN_03188a78(Method_System_Collections_Generic_HashSet<Type>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_HashSet<IXRGroupMember>__ctor__);
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleTranslate,_Translate>__ctor__
                );
    FUN_03188a78(Method_System_Collections_Generic_HashSet<StylePropertyId>_Add__);
    FUN_03188a78(Method_System_Collections_Generic_HashSet<IXRInteractionGroup>__ctor__);
    FUN_03188a78(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_AsList__);
    lVar12 = FUN_03188a78(
                         Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_get_Current__
                         );
    DAT_075602fe = 1;
  }
  local_d0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uVar1 = *(int *)(param_1 + 0x70) + 1;
  lVar15 = *(long *)(param_1 + 0x58);
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  lStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  local_140 = 0;
  uStack_13c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  local_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_108 = 0;
  local_110 = 0;
  puStack_f8 = (undefined8 *)0x0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  lStack_d8 = 0;
  local_e0 = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_90 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  *(uint *)(param_1 + 0x70) = uVar1;
  *(uint *)(param_1 + 0x78) = uVar1;
  if (lVar15 == 0) {
LAB_06ba1da4:
    lVar12 = *(long *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x74) = 1;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      uVar18 = 0;
      if (uVar1 != 0) {
        uVar18 = *(uint *)(param_1 + 0x70) / uVar1;
      }
      lVar12 = FUN_042e47a4(lVar12,*(uint *)(param_1 + 0x70) - uVar18 * uVar1,
                            *(undefined8 *)
                             Method_System_Collections_Generic_HashSet<Transform>_GetEnumerator__);
      puVar8 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_get_Item__;
      puVar7 = 
      Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__;
      puVar6 = 
      Method_UnityEngine_InputSystem_Utilities_InlinedArray<IObserver<InputEventPtr>>_get_Item__;
      puVar5 = Method_System_Collections_Generic_HashSet<Type>__ctor__;
      if (lVar12 != 0) {
        FUN_044bfc90(&local_240,lVar12,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_set_Item__);
        local_100 = local_240;
        local_240 = 0;
        puStack_f8 = puStack_238;
        uStack_e8 = uStack_228;
        local_f0 = local_230;
        lStack_d8 = lStack_218;
        local_e0 = local_220;
        local_d0 = local_210;
        puStack_238 = &local_100;
        while (uVar13 = FUN_0549ae4c(&local_100,*(undefined8 *)puVar7), (uVar13 & 1) != 0) {
          if ((local_d0 & 1) == 0) {
            if (lStack_d8 == 0) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_06ba2674;
            }
            if (*(long *)(lStack_d8 + 0x20) == 0) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_06ba2674;
            }
            lVar15 = *(long *)(*(long *)(lStack_d8 + 0x20) + 0x40);
            if (lVar15 == 0) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_06ba2674;
            }
            uStack_1d8 = uStack_e8;
            local_1e0 = local_f0;
            local_1d0 = local_e0;
            FUN_06ba4e14(lVar15,&local_1e0,0);
          }
          else {
            if (lStack_d8 == 0) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_06ba2674;
            }
            if (*(long *)(lStack_d8 + 0x18) == 0) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_06ba2674;
            }
            lVar15 = *(long *)(*(long *)(lStack_d8 + 0x18) + 0x40);
            if (lVar15 == 0) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_06ba2674;
            }
            uStack_1b8 = uStack_e8;
            local_1c0 = local_f0;
            local_1b0 = local_e0;
            FUN_06ba4e14(lVar15,&local_1c0,0);
          }
        }
        FUN_0549ae48(&local_100,*(undefined8 *)puVar6);
        puVar24 = (undefined8 *)
                  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleTranslate,_Translate>__ctor__
        ;
        iVar2 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (0 < iVar2) {
          FUN_0595236c(*(undefined8 *)(lVar12 + 0x10),0,iVar2,0);
        }
        if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
          uVar1 = *(uint *)(*(long *)(param_1 + 0x40) + 0x18);
          uVar18 = 0;
          if (uVar1 != 0) {
            uVar18 = *(uint *)(param_1 + 0x70) / uVar1;
          }
          lVar15 = FUN_042e47a4(*(long *)(param_1 + 0x48),*(uint *)(param_1 + 0x70) - uVar18 * uVar1
                                ,*(undefined8 *)puVar5);
          if (lVar15 != 0) {
            FUN_044c29d8(&local_240,lVar15,*(undefined8 *)puVar8);
            memcpy(&local_160,&local_240,0x60);
            puVar22 = (undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
            ;
            while (uVar14 = FUN_0549b064(&local_160,*puVar22), uVar13 = uStack_108,
                  lVar19 = local_110, uVar9 = uStack_128, iVar2 = local_140, lVar21 = lStack_148,
                  (uVar14 & 1) != 0) {
              local_70 = uStack_12c;
              uStack_78 = CONCAT44(local_130,uStack_134);
              local_80 = CONCAT44(uStack_138,uStack_13c);
              uStack_98 = CONCAT44(uStack_118,uStack_11c);
              local_a0 = CONCAT44(uStack_120,uStack_124);
              local_90 = local_114;
              if (lStack_148 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03188cd8();
                }
                goto LAB_06ba2674;
              }
              if ((*(int *)(lStack_148 + 0x5c) == (int)local_150) &&
                 (*(int *)(lStack_148 + 0x58) == local_150._4_4_)) {
                if (*(long *)(lStack_148 + 0x50) == 0) {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                  goto LAB_06ba2674;
                }
                lVar16 = *(long *)(*(long *)(lStack_148 + 0x50) + 0x18);
                if (lVar16 == 0) {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                  goto LAB_06ba2674;
                }
                piVar26 = (int *)(lStack_148 + 0x18);
                puVar25 = (undefined8 *)(lStack_148 + 0x1c);
                FUN_04625f18(&local_170,*(undefined8 *)(lVar16 + 0x20),
                             *(undefined8 *)(lVar16 + 0x28),*piVar26,*(undefined4 *)puVar25,*puVar24
                            );
                if (lVar19 == 0) {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                  goto LAB_06ba2674;
                }
                lVar16 = *(long *)(lVar19 + 0x18);
                if (lVar16 == 0) {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                  goto LAB_06ba2674;
                }
                FUN_04625f18(&local_180,*(undefined8 *)(lVar16 + 0x20),
                             *(undefined8 *)(lVar16 + 0x28),iVar2,*(undefined4 *)puVar25,*puVar24);
                FUN_04626028(&local_180,local_170,uStack_168,
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<IXRGroupMember>__ctor__);
                if (*(long *)(lVar19 + 0x18) == 0) {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                  goto LAB_06ba2674;
                }
                FUN_0506d4c0(*(long *)(lVar19 + 0x18),iVar2,*(undefined4 *)puVar25,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleTextShadow,_TextShadow>__ctor__
                            );
                if ((uVar13 & 1) != 0) {
                  if (*(long *)(lVar21 + 0x50) == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03188cd8();
                    }
                    goto LAB_06ba2674;
                  }
                  lVar16 = *(long *)(*(long *)(lVar21 + 0x50) + 0x20);
                  if (lVar16 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03188cd8();
                    }
                    goto LAB_06ba2674;
                  }
                  FUN_04625998(&local_190,*(undefined8 *)(lVar16 + 0x20),
                               *(undefined8 *)(lVar16 + 0x28),*(undefined4 *)(lVar21 + 0x30),
                               *(undefined4 *)(lVar21 + 0x34),
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<StylePropertyId>_Add__);
                  lVar16 = *(long *)(lVar19 + 0x20);
                  if (lVar16 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03188cd8();
                    }
                    goto LAB_06ba2674;
                  }
                  FUN_04625998(&local_1a0,*(undefined8 *)(lVar16 + 0x20),
                               *(undefined8 *)(lVar16 + 0x28),uVar9,*(undefined4 *)(lVar21 + 0x34),
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<StylePropertyId>_Add__);
                  iVar10 = FUN_04625b84(&local_1a0,
                                        *(undefined8 *)
                                         Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_AsList__
                                       );
                  if (0 < iVar10) {
                    iVar3 = *piVar26;
                    iVar23 = 0;
                    do {
                      iVar11 = System_Collections_Generic_ObjectEqualityComparer<BackgroundPosition>__Equals
                                         (&local_190,iVar23,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_HashSet<IXRInteractionGroup>__ctor__
                                         );
                      FUN_04625a30(&local_1a0,iVar23,iVar11 + (iVar2 - iVar3),
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_get_Current__
                                  );
                      iVar23 = iVar23 + 1;
                    } while (iVar10 != iVar23);
                  }
                  if (*(long *)(lVar19 + 0x20) == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03188cd8();
                    }
                    goto LAB_06ba2674;
                  }
                  FUN_0506cd50(*(long *)(lVar19 + 0x20),uVar9,*(undefined4 *)(lVar21 + 0x34),
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleTransformOrigin,_TransformOrigin>__ctor__
                              );
                  puVar22 = (undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                  ;
                  puVar24 = (undefined8 *)
                            Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleTranslate,_Translate>__ctor__
                  ;
                }
                puVar5 = Method_System_Collections_Generic_HashSet<Transform>__ctor__;
                puStack_b8 = *(undefined8 **)(lVar21 + 0x20);
                local_c0 = *(undefined8 *)piVar26;
                local_b0 = *(undefined8 *)(lVar21 + 0x28);
                uVar17 = *(undefined8 *)(lVar21 + 0x50);
                lVar16 = *(long *)(lVar12 + 0x10);
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar16 == 0) {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                  goto LAB_06ba2674;
                }
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar1 * 0x28;
                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar16 + 0x30) = local_b0;
                  *(undefined8 *)(lVar16 + 0x38) = uVar17;
                  *(undefined8 **)(lVar16 + 0x28) = puStack_b8;
                  *(undefined8 *)(lVar16 + 0x20) = local_c0;
                  *(undefined1 *)(lVar16 + 0x40) = 1;
                  *(undefined4 *)(lVar16 + 0x41) = 0;
                  *(undefined4 *)(lVar16 + 0x44) = 0;
                }
                else {
                  local_220 = 1;
                  local_240 = local_c0;
                  puStack_238 = puStack_b8;
                  local_230 = local_b0;
                  uStack_228 = uVar17;
                  FUN_044befe4(lVar12,&local_240,
                               *(undefined8 *)
                                (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
                }
                local_b0 = *(undefined8 *)(lVar21 + 0x40);
                puStack_b8 = *(undefined8 **)(lVar21 + 0x38);
                local_c0 = *(undefined8 *)(lVar21 + 0x30);
                uVar17 = *(undefined8 *)(lVar21 + 0x50);
                lVar16 = *(long *)(lVar12 + 0x10);
                lVar20 = *(long *)puVar5;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar16 == 0) {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                  goto LAB_06ba2674;
                }
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar1 * 0x28;
                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                  *(undefined8 **)(lVar16 + 0x28) = puStack_b8;
                  *(undefined8 *)(lVar16 + 0x20) = local_c0;
                  *(undefined8 *)(lVar16 + 0x30) = local_b0;
                  *(undefined8 *)(lVar16 + 0x38) = uVar17;
                  *(undefined8 *)(lVar16 + 0x40) = 0;
                }
                else {
                  local_220 = 0;
                  local_240 = local_c0;
                  puStack_238 = puStack_b8;
                  local_230 = local_b0;
                  uStack_228 = uVar17;
                  FUN_044befe4(lVar12,&local_240,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                *(int *)(lVar21 + 0x18) = iVar2;
                *(undefined4 *)(lVar21 + 0x30) = uVar9;
                *(undefined8 *)(lVar21 + 0x24) = uStack_78;
                *puVar25 = local_80;
                *(undefined4 *)(lVar21 + 0x2c) = local_70;
                *(undefined8 *)(lVar21 + 0x3c) = uStack_98;
                *(undefined8 *)(lVar21 + 0x34) = local_a0;
                *(undefined4 *)(lVar21 + 0x44) = local_90;
                *(long *)(lVar21 + 0x50) = lVar19;
                *(undefined4 *)(lVar21 + 0x5c) = 0;
              }
            }
            FUN_0549b060(&local_160,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_AppendWithCapacity__
                        );
            iVar2 = *(int *)(lVar15 + 0x18);
            *(undefined4 *)(lVar15 + 0x18) = 0;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (0 < iVar2) {
              FUN_0595236c(*(undefined8 *)(lVar15 + 0x10),0,iVar2,0);
            }
            FUN_06ba3c58(param_1);
            if (*(long *)(lVar4 + 0x28) == local_68) {
              return;
            }
            goto LAB_06ba2674;
          }
        }
      }
    }
LAB_06ba2480:
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  else {
    uVar18 = (uint)*(undefined8 *)(lVar15 + 0x18);
    lVar19 = (long)(int)uVar18;
    lVar21 = 0;
    if (lVar19 != 0) {
      lVar21 = (long)(ulong)uVar1 / lVar19;
    }
    lVar21 = (ulong)uVar1 - lVar21 * lVar19;
    if ((uint)lVar21 < uVar18) {
      FUN_06ba3bd0(lVar12,*(undefined4 *)(lVar15 + lVar21 * 4 + 0x20));
      lVar12 = *(long *)(param_1 + 0x58);
      if (lVar12 == 0) goto LAB_06ba2480;
      if ((uint)lVar21 < *(uint *)(lVar12 + 0x18)) {
        *(undefined4 *)(lVar12 + lVar21 * 4 + 0x20) = 0;
        goto LAB_06ba1da4;
      }
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
  }
LAB_06ba2674:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


