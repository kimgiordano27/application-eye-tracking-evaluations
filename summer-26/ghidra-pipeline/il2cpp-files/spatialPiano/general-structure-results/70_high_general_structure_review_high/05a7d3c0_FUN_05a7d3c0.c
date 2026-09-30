/*
FUNCTION_NAME: FUN_05a7d3c0
ENTRY_POINT: 05a7d3c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_12
*/


void FUN_05a7d3c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined8 *puVar28;
  uint uVar29;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar5 = Method_System_Threading_Tasks_UnwrapPromise<VoidTaskResult>__ctor__;
  puVar4 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeRingQueue<int>_Free__;
  puVar3 = Method_Unity_Collections_UnsafeQueue<int>_Free__;
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>_get_Length__
  ;
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>_get_Item__
  ;
  puVar16 = 
  Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>_Dispose__
  ;
  if ((DAT_06bc2359 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__);
    FUN_02f08768(
                Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<CollectionVirtualizationMethod>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ColumnSortingMode>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__
                );
    FUN_02f08768(Method_Unity_Collections_UnsafeQueue<int>_Free__);
    FUN_02f08768(Method_System_Threading_Tasks_UnwrapPromise<VoidTaskResult>__ctor__);
    FUN_02f08768(
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>_get_Item__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollViewMode>__ctor__)
    ;
    FUN_02f08768(
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>_Dispose__
                );
    FUN_02f08768(Method_Unity_Collections_LowLevel_Unsafe_UnsafeRingQueue<int>_Free__);
    FUN_02f08768(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>_get_Length__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__);
    DAT_06bc2359 = 1;
  }
  local_d0 = 0;
  local_1b0 = 0;
  local_2d0 = 0;
  uStack_308 = 0;
  local_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_278 = 0;
  local_280 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_318 = 0;
  local_320 = 0;
  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar16);
  FUN_03abf108(lVar7,*(undefined8 *)puVar1);
  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_03abf108(lVar8,*(undefined8 *)puVar3);
  lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_03abf108(lVar9,*(undefined8 *)puVar5);
  puVar16 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__;
  if ((*param_1 != 0) && (uVar17 = *(ulong *)(*param_1 + 0x18), 0 < (int)uVar17)) {
    uVar27 = 0;
    do {
      lVar18 = *param_1;
      if (lVar18 == 0) goto LAB_05a7e1a4;
      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05a7e1a8;
      memcpy(&local_110,(void *)(lVar18 + uVar27 * 0x48 + 0x20),0x48);
      lVar18 = local_110;
      uVar10 = FUN_04f6ebb4(local_110,0);
      if ((uVar10 & 1) != 0) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)uVar27 + 1);
        uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_c0);
        puVar16 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>__ctor__;
        goto LAB_05a7e280;
      }
      if (lVar18 == 0) goto LAB_05a7e1a4;
      iVar6 = FUN_04f73d7c(lVar18,0x2f,0);
      if (iVar6 == -1) {
        uVar11 = 0;
        lVar12 = lVar18;
      }
      else {
        uVar11 = FUN_04f71378(lVar18,0,iVar6,0);
        lVar12 = FUN_04f73508(lVar18,iVar6 + 1,0);
        uVar10 = FUN_04f6ebb4(lVar12,0);
        if ((uVar10 & 1) != 0) {
          uVar11 = thunk_FUN_02f6ef30(
                                     Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_NestedInteractionKind>__ctor__
                                     );
          uVar13 = thunk_FUN_02f6ef30(
                                     Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_TouchScrollBehavior>__ctor__
                                     );
          uVar11 = FUN_04f6f6b4(uVar11,lVar18,uVar13,0);
          goto LAB_05a7e1ec;
        }
      }
      if (lVar7 == 0) goto LAB_05a7e1a4;
      if (0 < *(int *)(lVar7 + 0x18)) {
        uVar29 = 0;
        do {
          lVar18 = FUN_03abf644(lVar7,uVar29,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                               );
          if (lVar18 == 0) goto LAB_05a7e1a4;
          iVar6 = FUN_04f6c698(*(undefined8 *)(lVar18 + 0x10),uVar11,3,0);
          if (iVar6 == 0) {
            lVar18 = FUN_03abf644(lVar7,uVar29,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                 );
            if (lVar18 != 0) {
              lVar18 = FUN_05a81070(&local_110,lVar12);
              if (lVar8 == 0) goto LAB_05a7e1a4;
              goto Unity_Mathematics_math__unlerp;
            }
            break;
          }
          uVar29 = uVar29 + 1;
        } while ((int)uVar29 < *(int *)(lVar7 + 0x18));
      }
      lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
      Unity_Mathematics_math__int2();
      *(undefined8 *)(lVar18 + 0x10) = uVar11;
      uVar29 = *(uint *)(lVar7 + 0x18);
      lVar19 = *(long *)(lVar7 + 0x10);
      lVar22 = *(long *)
                Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__
      ;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar19 == 0) goto LAB_05a7e1a4;
      if (uVar29 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar29 + 1;
        *(long *)(lVar19 + (long)(int)uVar29 * 8 + 0x20) = lVar18;
      }
      else {
        FUN_03abf904(lVar7,lVar18,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                                 );
      FUN_03abf108(uVar11,*(undefined8 *)
                           Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                  );
      if (lVar8 == 0) goto LAB_05a7e1a4;
      lVar18 = *(long *)(lVar8 + 0x10);
      lVar19 = *(long *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
      ;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_05a7e1a4;
      uVar24 = *(uint *)(lVar8 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar24 + 1;
        *(undefined8 *)(lVar18 + (long)(int)uVar24 * 8 + 0x20) = uVar11;
      }
      else {
        FUN_03abf904(lVar8,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                                 );
      FUN_03a5bcf0(uVar11,*(undefined8 *)
                           Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                  );
      if (lVar9 == 0) goto LAB_05a7e1a4;
      lVar18 = *(long *)(lVar9 + 0x10);
      lVar19 = *(long *)
                Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
      ;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_05a7e1a4;
      uVar24 = *(uint *)(lVar9 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar24 + 1;
        *(undefined8 *)(lVar18 + (long)(int)uVar24 * 8 + 0x20) = uVar11;
      }
      else {
        FUN_03abf904(lVar9,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar18 = FUN_05a81070(&local_110,lVar12);
Unity_Mathematics_math__unlerp:
      lVar12 = FUN_03abf644(lVar8,uVar29,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                           );
      if (lVar12 == 0) goto LAB_05a7e1a4;
      lVar19 = *(long *)(lVar12 + 0x10);
      lVar22 = *(long *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar19 == 0) goto LAB_05a7e1a4;
      uVar24 = *(uint *)(lVar12 + 0x18);
      if (uVar24 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar24 + 1;
        *(long *)(lVar19 + (long)(int)uVar24 * 8 + 0x20) = lVar18;
      }
      else {
        FUN_03abf904(lVar12,lVar18,
                     *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
      lVar12 = local_d0;
      if (local_d0 != 0) {
        if (lVar9 == 0) goto LAB_05a7e1a4;
        lVar19 = FUN_03abf644(lVar9,uVar29,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                             );
        if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
          uVar10 = 0;
          uVar20 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
          puVar28 = (undefined8 *)(lVar12 + 0x20);
          do {
            if (uVar20 <= uVar10) goto LAB_05a7e1a8;
            uStack_148 = puVar28[1];
            local_150 = *puVar28;
            uStack_138 = puVar28[3];
            uStack_140 = puVar28[2];
            uStack_128 = puVar28[5];
            local_130 = puVar28[4];
            uStack_118 = puVar28[7];
            uStack_120 = puVar28[6];
            FUN_05a80edc(&local_c0,&local_150);
            uStack_158 = uStack_98;
            local_160 = local_a0;
            uStack_178 = uStack_b8;
            local_180 = local_c0;
            uStack_168 = uStack_a8;
            uStack_170 = uStack_b0;
            uStack_198 = uStack_80;
            local_1a0 = local_88;
            uStack_188 = uStack_70;
            uStack_190 = local_78;
            if ((lVar18 == 0) || (lVar19 == 0)) goto LAB_05a7e1a4;
            lVar22 = *(long *)(lVar19 + 0x10);
            uVar11 = *(undefined8 *)(lVar18 + 0x10);
            lVar25 = *(long *)puVar16;
            *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
            if (lVar22 == 0) goto LAB_05a7e1a4;
            uVar29 = *(uint *)(lVar19 + 0x18);
            if (uVar29 < *(uint *)(lVar22 + 0x18)) {
              lVar22 = lVar22 + (long)(int)uVar29 * 0x58;
              *(uint *)(lVar19 + 0x18) = uVar29 + 1;
              *(undefined8 *)(lVar22 + 0x28) = uStack_b8;
              *(undefined8 *)(lVar22 + 0x20) = local_c0;
              *(undefined8 *)(lVar22 + 0x38) = uStack_a8;
              *(undefined8 *)(lVar22 + 0x30) = uStack_b0;
              *(undefined8 *)(lVar22 + 0x48) = uStack_98;
              *(undefined8 *)(lVar22 + 0x40) = local_a0;
              *(undefined8 *)(lVar22 + 0x50) = uVar11;
              *(undefined8 *)(lVar22 + 0x60) = uStack_80;
              *(undefined8 *)(lVar22 + 0x58) = local_88;
              *(undefined8 *)(lVar22 + 0x70) = uStack_70;
              *(undefined8 *)(lVar22 + 0x68) = local_78;
            }
            else {
              local_90 = uVar11;
              FUN_03a5c5a4(lVar19,&local_c0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
            }
            uVar20 = (ulong)*(uint *)(lVar12 + 0x18);
            uVar10 = uVar10 + 1;
            puVar28 = puVar28 + 8;
          } while ((long)uVar10 < (long)(int)*(uint *)(lVar12 + 0x18));
        }
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != (uVar17 & 0xffffffff));
  }
  puVar16 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__;
  if ((param_1[1] != 0) && (uVar17 = *(ulong *)(param_1[1] + 0x18), 0 < (int)uVar17)) {
    uVar27 = 0;
    do {
      lVar18 = param_1[1];
      if (lVar18 == 0) goto LAB_05a7e1a4;
      if (*(uint *)(lVar18 + 0x18) <= uVar27) {
LAB_05a7e1a8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar18 = lVar18 + uVar27 * 0x20;
      uVar11 = *(undefined8 *)(lVar18 + 0x20);
      uVar13 = *(undefined8 *)(lVar18 + 0x28);
      lVar12 = *(long *)(lVar18 + 0x30);
      lVar18 = *(long *)(lVar18 + 0x38);
      uVar10 = FUN_04f6ebb4(uVar11,0);
      if ((uVar10 & 1) != 0) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)uVar27 + 1);
        uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_c0);
        puVar16 = 
        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Columns_StretchMode>__ctor__;
LAB_05a7e280:
        uVar13 = thunk_FUN_02f6ef30(puVar16);
        uVar11 = FUN_04f65e2c(uVar13,uVar11,0);
LAB_05a7e1ec:
        thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
        uVar13 = thunk_FUN_02f45270();
        FUN_050d5404(uVar13,uVar11,0);
        uVar11 = thunk_FUN_02f6ef30(
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>__ctor__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar13,uVar11);
      }
      if (lVar7 == 0) goto LAB_05a7e1a4;
      if (0 < *(int *)(lVar7 + 0x18)) {
        uVar29 = 0;
        do {
          lVar19 = FUN_03abf644(lVar7,uVar29,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                               );
          if (lVar19 == 0) goto LAB_05a7e1a4;
          iVar6 = FUN_04f6c698(*(undefined8 *)(lVar19 + 0x10),uVar11,3,0);
          if (iVar6 == 0) {
            lVar19 = FUN_03abf644(lVar7,uVar29,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                 );
            if (lVar19 != 0) goto LAB_05a7dd38;
            break;
          }
          uVar29 = uVar29 + 1;
        } while ((int)uVar29 < *(int *)(lVar7 + 0x18));
      }
      lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
      Unity_Mathematics_math__int2();
      *(undefined8 *)(lVar19 + 0x10) = uVar11;
      uVar10 = FUN_04f6ebb4(uVar13,0);
      puVar1 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__;
      uVar15 = 0;
      if ((uVar10 & 1) == 0) {
        uVar15 = uVar13;
      }
      *(undefined8 *)(lVar19 + 0x18) = uVar15;
      uVar29 = *(uint *)(lVar7 + 0x18);
      lVar22 = *(long *)puVar1;
      lVar25 = *(long *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar25 == 0) goto LAB_05a7e1a4;
      if (uVar29 < *(uint *)(lVar25 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar29 + 1;
        *(long *)(lVar25 + (long)(int)uVar29 * 8 + 0x20) = lVar19;
      }
      else {
        FUN_03abf904(lVar7,lVar19,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                                 );
      FUN_03abf108(uVar13,*(undefined8 *)
                           Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                  );
      if (lVar8 == 0) goto LAB_05a7e1a4;
      lVar19 = *(long *)(lVar8 + 0x10);
      lVar22 = *(long *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
      ;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar19 == 0) goto LAB_05a7e1a4;
      uVar24 = *(uint *)(lVar8 + 0x18);
      if (uVar24 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar24 + 1;
        *(undefined8 *)(lVar19 + (long)(int)uVar24 * 8 + 0x20) = uVar13;
      }
      else {
        FUN_03abf904(lVar8,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                                 );
      FUN_03a5bcf0(uVar13,*(undefined8 *)
                           Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                  );
      if (lVar9 == 0) goto LAB_05a7e1a4;
      lVar19 = *(long *)(lVar9 + 0x10);
      lVar22 = *(long *)
                Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
      ;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar19 == 0) goto LAB_05a7e1a4;
      uVar24 = *(uint *)(lVar9 + 0x18);
      if (uVar24 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar24 + 1;
        *(undefined8 *)(lVar19 + (long)(int)uVar24 * 8 + 0x20) = uVar13;
      }
      else {
        FUN_03abf904(lVar9,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70)
                    );
      }
LAB_05a7dd38:
      if ((lVar12 != 0) && (uVar10 = *(ulong *)(lVar12 + 0x18), 0 < (int)uVar10)) {
        uVar20 = 0;
        do {
          if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_05a7e1a8;
          memcpy(&local_1f0,(void *)(lVar12 + uVar20 * 0x48 + 0x20),0x48);
          uVar14 = FUN_04f6ebb4(local_1f0,0);
          if ((uVar14 & 1) != 0) {
            local_c0 = CONCAT44(local_c0._4_4_,(int)uVar27 + 1);
            uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_c0);
            uVar15 = thunk_FUN_02f6ef30(
                                       Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>__ctor__
                                       );
            uVar11 = FUN_04f70018(uVar15,uVar13,uVar11,0);
            goto LAB_05a7e1ec;
          }
          lVar19 = FUN_05a81070(&local_1f0,0);
          if ((lVar8 == 0) ||
             (lVar22 = FUN_03abf644(lVar8,uVar29,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                   ), lVar22 == 0)) goto LAB_05a7e1a4;
          lVar25 = *(long *)(lVar22 + 0x10);
          lVar23 = *(long *)
                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
          ;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          if (lVar25 == 0) goto LAB_05a7e1a4;
          uVar24 = *(uint *)(lVar22 + 0x18);
          if (uVar24 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(lVar22 + 0x18) = uVar24 + 1;
            *(long *)(lVar25 + (long)(int)uVar24 * 8 + 0x20) = lVar19;
          }
          else {
            FUN_03abf904(lVar22,lVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          lVar22 = local_1b0;
          if (local_1b0 != 0) {
            if (lVar9 == 0) goto LAB_05a7e1a4;
            lVar25 = FUN_03abf644(lVar9,uVar29,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                                 );
            if (0 < (int)*(ulong *)(lVar22 + 0x18)) {
              uVar14 = 0;
              uVar21 = *(ulong *)(lVar22 + 0x18) & 0xffffffff;
              puVar28 = (undefined8 *)(lVar22 + 0x20);
              do {
                if (uVar21 <= uVar14) goto LAB_05a7e1a8;
                uStack_228 = puVar28[1];
                local_230 = *puVar28;
                uStack_218 = puVar28[3];
                uStack_220 = puVar28[2];
                uStack_208 = puVar28[5];
                local_210 = puVar28[4];
                uStack_1f8 = puVar28[7];
                uStack_200 = puVar28[6];
                FUN_05a80edc(&local_c0,&local_230);
                uStack_238 = uStack_98;
                local_240 = local_a0;
                uStack_258 = uStack_b8;
                local_260 = local_c0;
                uStack_248 = uStack_a8;
                local_250 = uStack_b0;
                uStack_278 = uStack_80;
                local_280 = local_88;
                uStack_268 = uStack_70;
                local_270 = local_78;
                if ((lVar19 == 0) || (lVar25 == 0)) goto LAB_05a7e1a4;
                lVar23 = *(long *)(lVar25 + 0x10);
                uVar13 = *(undefined8 *)(lVar19 + 0x10);
                lVar26 = *(long *)puVar16;
                *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
                if (lVar23 == 0) goto LAB_05a7e1a4;
                uVar24 = *(uint *)(lVar25 + 0x18);
                if (uVar24 < *(uint *)(lVar23 + 0x18)) {
                  lVar23 = lVar23 + (long)(int)uVar24 * 0x58;
                  *(uint *)(lVar25 + 0x18) = uVar24 + 1;
                  *(undefined8 *)(lVar23 + 0x28) = uStack_b8;
                  *(undefined8 *)(lVar23 + 0x20) = local_c0;
                  *(undefined8 *)(lVar23 + 0x38) = uStack_a8;
                  *(undefined8 *)(lVar23 + 0x30) = uStack_b0;
                  *(undefined8 *)(lVar23 + 0x48) = uStack_98;
                  *(undefined8 *)(lVar23 + 0x40) = local_a0;
                  *(undefined8 *)(lVar23 + 0x50) = uVar13;
                  *(undefined8 *)(lVar23 + 0x60) = uStack_80;
                  *(undefined8 *)(lVar23 + 0x58) = local_88;
                  *(undefined8 *)(lVar23 + 0x70) = uStack_70;
                  *(undefined8 *)(lVar23 + 0x68) = local_78;
                }
                else {
                  local_90 = uVar13;
                  FUN_03a5c5a4(lVar25,&local_c0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                }
                uVar21 = (ulong)*(uint *)(lVar22 + 0x18);
                uVar14 = uVar14 + 1;
                puVar28 = puVar28 + 8;
              } while ((long)uVar14 < (long)(int)*(uint *)(lVar22 + 0x18));
            }
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != (uVar10 & 0xffffffff));
      }
      if (lVar18 == 0) {
        if (lVar9 == 0) goto LAB_05a7e1a4;
        FUN_03abf644(lVar9,uVar29,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                    );
      }
      else {
        if (lVar9 == 0) goto LAB_05a7e1a4;
        uVar24 = *(uint *)(lVar18 + 0x18);
        lVar12 = FUN_03abf644(lVar9,uVar29,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                             );
        if (0 < (int)uVar24) {
          uVar10 = 0;
          puVar28 = (undefined8 *)(lVar18 + 0x20);
          do {
            if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_05a7e1a8;
            uStack_2b8 = puVar28[1];
            local_2c0 = *puVar28;
            uStack_2a8 = puVar28[3];
            local_2b0 = puVar28[2];
            uStack_298 = puVar28[5];
            local_2a0 = puVar28[4];
            uStack_288 = puVar28[7];
            local_290 = puVar28[6];
            FUN_05a80edc(&local_320,&local_2c0);
            if (lVar12 == 0) goto LAB_05a7e1a4;
            lVar19 = *(long *)(lVar12 + 0x10);
            lVar22 = *(long *)puVar16;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_05a7e1a4;
            uVar29 = *(uint *)(lVar12 + 0x18);
            if (uVar29 < *(uint *)(lVar19 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar29 + 1;
              memcpy((void *)(lVar19 + (long)(int)uVar29 * 0x58 + 0x20),&local_320,0x58);
            }
            else {
              uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_c0,&local_320,0x58);
              FUN_03a5c5a4(lVar12,&local_c0,uVar11);
            }
            uVar10 = uVar10 + 1;
            puVar28 = puVar28 + 8;
          } while (uVar24 != uVar10);
        }
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != (uVar17 & 0xffffffff));
  }
  puVar1 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__;
  puVar16 = 
  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<CollectionVirtualizationMethod>__ctor__
  ;
  if (lVar7 == 0) {
LAB_05a7e1a4:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (0 < *(int *)(lVar7 + 0x18)) {
    iVar6 = 0;
    do {
      lVar18 = FUN_03abf644(lVar7,iVar6,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                           );
      if ((((lVar8 == 0) ||
           (lVar12 = FUN_03abf644(lVar8,iVar6,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                 ), lVar12 == 0)) ||
          (lVar12 = FUN_03ac12f8(lVar12,*(undefined8 *)puVar16), lVar9 == 0)) ||
         ((lVar19 = FUN_03abf644(lVar9,iVar6,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                                ), lVar19 == 0 ||
          (uVar11 = FUN_03a5e38c(lVar19,*(undefined8 *)puVar1), lVar18 == 0)))) goto LAB_05a7e1a4;
      *(long *)(lVar18 + 0x28) = lVar12;
      *(undefined8 *)(lVar18 + 0x30) = uVar11;
      if (lVar12 == 0) goto LAB_05a7e1a4;
      uVar29 = *(uint *)(lVar12 + 0x18);
      if (0 < (int)uVar29) {
        uVar24 = 0;
        do {
          if (uVar29 == uVar24) goto LAB_05a7e1a8;
          lVar19 = *(long *)(lVar12 + (long)(int)uVar24 * 8 + 0x20);
          if (lVar19 == 0) goto LAB_05a7e1a4;
          uVar24 = uVar24 + 1;
          *(long *)(lVar19 + 200) = lVar18;
        } while ((uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU)) != uVar24);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar7 + 0x18));
  }
  FUN_03ac12f8(lVar7,*(undefined8 *)
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ColumnSortingMode>__ctor__
              );
  return;
}


