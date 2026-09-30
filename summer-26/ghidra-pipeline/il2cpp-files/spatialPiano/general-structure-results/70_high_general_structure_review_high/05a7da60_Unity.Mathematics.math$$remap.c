/*
FUNCTION_NAME: Unity.Mathematics.math$$remap
ENTRY_POINT: 05a7da60
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_9
*/


void Unity_Mathematics_math__remap
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4
               ,undefined1 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong unaff_x19;
  ulong uVar20;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 *puVar21;
  ulong uVar22;
  long unaff_x23;
  uint uVar23;
  long unaff_x24;
  undefined8 uVar24;
  long unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  long *in_stack_00000020;
  long in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  long in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000260;
  long in_stack_000002a0;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  
  uVar10 = param_3._8_8_;
  uVar9 = param_3._0_8_;
code_r0x05a7da60:
  *(undefined8 *)(unaff_x29 + 0x40) = in_stack_000001d8;
  *(undefined8 *)(unaff_x29 + 0x38) = in_stack_000001d0;
  *(undefined8 *)(unaff_x29 + 0x50) = in_stack_000001e8;
  *(undefined8 *)(unaff_x29 + 0x48) = in_stack_000001e0;
  FUN_03a5c5a4(param_4,param_5,param_6);
  param_4 = unaff_x24;
  do {
    uVar12 = (ulong)*(uint *)(unaff_x21 + 0x18);
    unaff_x20 = unaff_x20 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x20) {
      do {
        do {
          puVar11 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__;
          unaff_x19 = unaff_x19 + 1;
          if (unaff_x19 == in_stack_00000038) {
            if ((in_stack_00000020[1] == 0) ||
               (uVar12 = *(ulong *)(in_stack_00000020[1] + 0x18), (int)uVar12 < 1))
            goto LAB_05a7e088;
            uVar22 = 0;
            goto LAB_05a7dad0;
          }
          lVar13 = *in_stack_00000020;
          if (lVar13 == 0) goto LAB_05a7e1a4;
          if (*(uint *)(lVar13 + 0x18) <= unaff_x19) goto LAB_05a7e1a8;
          memcpy(&stack0x00000260,(void *)(lVar13 + unaff_x19 * 0x48 + 0x20),0x48);
          uVar12 = FUN_04f6ebb4(in_stack_00000260,0);
          if ((uVar12 & 1) != 0) {
            uVar9 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
            puVar11 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>__ctor__
            ;
            goto LAB_05a7e280;
          }
          if (in_stack_00000260 == 0) goto LAB_05a7e1a4;
          iVar3 = FUN_04f73d7c(in_stack_00000260,0x2f,0);
          if (iVar3 == -1) {
            uVar24 = 0;
            lVar13 = in_stack_00000260;
          }
          else {
            uVar24 = FUN_04f71378(in_stack_00000260,0,iVar3,0);
            lVar13 = FUN_04f73508(in_stack_00000260,iVar3 + 1,0);
            uVar12 = FUN_04f6ebb4(lVar13,0);
            if ((uVar12 & 1) != 0) {
              uVar9 = thunk_FUN_02f6ef30(
                                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_NestedInteractionKind>__ctor__
                                        );
              uVar10 = thunk_FUN_02f6ef30(
                                         Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_TouchScrollBehavior>__ctor__
                                         );
              uVar9 = FUN_04f6f6b4(uVar9,in_stack_00000260,uVar10,0);
              goto LAB_05a7e1ec;
            }
          }
          if (unaff_x26 == 0) goto LAB_05a7e1a4;
          if (0 < *(int *)(unaff_x26 + 0x18)) {
            uVar23 = 0;
            do {
              lVar8 = FUN_03abf644(unaff_x26,uVar23,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                  );
              if (lVar8 == 0) goto LAB_05a7e1a4;
              iVar3 = FUN_04f6c698(*(undefined8 *)(lVar8 + 0x10),uVar24,3,0);
              if (iVar3 == 0) {
                lVar8 = FUN_03abf644(unaff_x26,uVar23,
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                    );
                if (lVar8 != 0) {
                  unaff_x23 = FUN_05a81070(&stack0x00000260,lVar13);
                  if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
                  goto Unity_Mathematics_math__unlerp;
                }
                break;
              }
              uVar23 = uVar23 + 1;
            } while ((int)uVar23 < *(int *)(unaff_x26 + 0x18));
          }
          lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
          Unity_Mathematics_math__int2();
          *(undefined8 *)(lVar8 + 0x10) = uVar24;
          uVar23 = *(uint *)(unaff_x26 + 0x18);
          lVar5 = *(long *)(unaff_x26 + 0x10);
          lVar14 = *(long *)
                    Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__
          ;
          *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_05a7e1a4;
          if (uVar23 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(in_stack_00000040 + 0x18) = uVar23 + 1;
            *(long *)(lVar5 + (long)(int)uVar23 * 8 + 0x20) = lVar8;
          }
          else {
            FUN_03abf904(in_stack_00000040,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          uVar24 = thunk_FUN_02f45270(*(undefined8 *)
                                       Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                                     );
          FUN_03abf108(uVar24,*(undefined8 *)
                               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                      );
          if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
          lVar8 = *(long *)(in_stack_00000048 + 0x10);
          lVar5 = *(long *)
                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
          ;
          *(int *)(in_stack_00000048 + 0x1c) = *(int *)(in_stack_00000048 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_05a7e1a4;
          uVar18 = *(uint *)(in_stack_00000048 + 0x18);
          if (uVar18 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(in_stack_00000048 + 0x18) = uVar18 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar18 * 8 + 0x20) = uVar24;
          }
          else {
            FUN_03abf904(in_stack_00000048,uVar24,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          uVar24 = thunk_FUN_02f45270(*(undefined8 *)
                                       Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                                     );
          FUN_03a5bcf0(uVar24,*(undefined8 *)
                               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                      );
          if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
          lVar8 = *(long *)(in_stack_00000030 + 0x10);
          lVar5 = *(long *)
                   Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
          ;
          *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_05a7e1a4;
          uVar18 = *(uint *)(in_stack_00000030 + 0x18);
          if (uVar18 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(in_stack_00000030 + 0x18) = uVar18 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar18 * 8 + 0x20) = uVar24;
          }
          else {
            FUN_03abf904(in_stack_00000030,uVar24,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          unaff_x23 = FUN_05a81070(&stack0x00000260,lVar13);
          unaff_x26 = in_stack_00000040;
Unity_Mathematics_math__unlerp:
          lVar13 = FUN_03abf644(in_stack_00000048,uVar23,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                               );
          if (lVar13 == 0) goto LAB_05a7e1a4;
          lVar8 = *(long *)(lVar13 + 0x10);
          lVar5 = *(long *)
                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
          ;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_05a7e1a4;
          uVar18 = *(uint *)(lVar13 + 0x18);
          if (uVar18 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar18 + 1;
            *(long *)(lVar8 + (long)(int)uVar18 * 8 + 0x20) = unaff_x23;
          }
          else {
            FUN_03abf904(lVar13,unaff_x23,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        } while (in_stack_000002a0 == 0);
        if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
        param_4 = FUN_03abf644(in_stack_00000030,uVar23,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                              );
      } while ((int)*(ulong *)(in_stack_000002a0 + 0x18) < 1);
      unaff_x20 = 0;
      uVar12 = *(ulong *)(in_stack_000002a0 + 0x18) & 0xffffffff;
      unaff_x21 = in_stack_000002a0;
    }
    if (uVar12 <= unaff_x20) goto LAB_05a7e1a8;
    FUN_05a80edc(&stack0x000002b0,&stack0x00000220);
    in_stack_000001d8 = *(undefined8 *)(unaff_x29 + 0x40);
    in_stack_000001d0 = *(undefined8 *)(unaff_x29 + 0x38);
    in_stack_000001e8 = *(undefined8 *)(unaff_x29 + 0x50);
    in_stack_000001e0 = *(undefined8 *)(unaff_x29 + 0x48);
    if ((unaff_x23 == 0) || (param_4 == 0)) goto LAB_05a7e1a4;
    lVar13 = *(long *)(param_4 + 0x10);
    uVar24 = *(undefined8 *)(unaff_x23 + 0x10);
    lVar8 = *unaff_x28;
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_05a7e1a4;
    uVar23 = *(uint *)(param_4 + 0x18);
    if (*(uint *)(lVar13 + 0x18) <= uVar23) break;
    lVar13 = lVar13 + (long)(int)uVar23 * (long)unaff_w27;
    *(uint *)(param_4 + 0x18) = uVar23 + 1;
    *(undefined8 *)(lVar13 + 0x28) = in_stack_000002b8;
    *(undefined8 *)(lVar13 + 0x20) = in_stack_000002b0;
    *(undefined8 *)(lVar13 + 0x38) = in_stack_000002c8;
    *(undefined8 *)(lVar13 + 0x30) = in_stack_000002c0;
    *(undefined8 *)(lVar13 + 0x48) = uVar10;
    *(undefined8 *)(lVar13 + 0x40) = uVar9;
    *(undefined8 *)(lVar13 + 0x50) = uVar24;
    *(undefined8 *)(lVar13 + 0x60) = in_stack_000001d8;
    *(undefined8 *)(lVar13 + 0x58) = in_stack_000001d0;
    *(undefined8 *)(lVar13 + 0x70) = in_stack_000001e8;
    *(undefined8 *)(lVar13 + 0x68) = in_stack_000001e0;
  } while( true );
  param_5 = &stack0x000002b0;
  param_6 = *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70);
  unaff_x24 = param_4;
  goto code_r0x05a7da60;
LAB_05a7dad0:
  do {
    lVar13 = in_stack_00000020[1];
    if (lVar13 == 0) goto LAB_05a7e1a4;
    if (*(uint *)(lVar13 + 0x18) <= uVar22) {
LAB_05a7e1a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar13 = lVar13 + uVar22 * 0x20;
    uVar24 = *(undefined8 *)(lVar13 + 0x20);
    uVar6 = *(undefined8 *)(lVar13 + 0x28);
    lVar8 = *(long *)(lVar13 + 0x30);
    lVar13 = *(long *)(lVar13 + 0x38);
    uVar4 = FUN_04f6ebb4(uVar24,0);
    if ((uVar4 & 1) != 0) {
      uVar9 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
      puVar11 = 
      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Columns_StretchMode>__ctor__;
LAB_05a7e280:
      uVar10 = thunk_FUN_02f6ef30(puVar11);
      uVar9 = FUN_04f65e2c(uVar10,uVar9,0);
LAB_05a7e1ec:
      thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
      uVar10 = thunk_FUN_02f45270();
      FUN_050d5404(uVar10,uVar9,0);
      uVar9 = thunk_FUN_02f6ef30(
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar10,uVar9);
    }
    if (unaff_x26 == 0) goto LAB_05a7e1a4;
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      uVar23 = 0;
      do {
        lVar5 = FUN_03abf644(unaff_x26,uVar23,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                            );
        if (lVar5 == 0) goto LAB_05a7e1a4;
        iVar3 = FUN_04f6c698(*(undefined8 *)(lVar5 + 0x10),uVar24,3,0);
        if (iVar3 == 0) {
          lVar5 = FUN_03abf644(unaff_x26,uVar23,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                              );
          if (lVar5 != 0) goto LAB_05a7dd38;
          break;
        }
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < *(int *)(unaff_x26 + 0x18));
    }
    lVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
    Unity_Mathematics_math__int2();
    *(undefined8 *)(lVar5 + 0x10) = uVar24;
    uVar4 = FUN_04f6ebb4(uVar6,0);
    puVar2 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__;
    uVar1 = 0;
    if ((uVar4 & 1) == 0) {
      uVar1 = uVar6;
    }
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
    uVar23 = *(uint *)(unaff_x26 + 0x18);
    lVar14 = *(long *)puVar2;
    lVar16 = *(long *)(unaff_x26 + 0x10);
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_05a7e1a4;
    if (uVar23 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(in_stack_00000040 + 0x18) = uVar23 + 1;
      *(long *)(lVar16 + (long)(int)uVar23 * 8 + 0x20) = lVar5;
    }
    else {
      FUN_03abf904(in_stack_00000040,lVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                              );
    FUN_03abf108(uVar6,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                );
    if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
    lVar5 = *(long *)(in_stack_00000048 + 0x10);
    lVar14 = *(long *)
              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
    ;
    *(int *)(in_stack_00000048 + 0x1c) = *(int *)(in_stack_00000048 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_05a7e1a4;
    uVar18 = *(uint *)(in_stack_00000048 + 0x18);
    if (uVar18 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = uVar18 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar18 * 8 + 0x20) = uVar6;
    }
    else {
      FUN_03abf904(in_stack_00000048,uVar6,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                              );
    FUN_03a5bcf0(uVar6,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                );
    if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
    lVar5 = *(long *)(in_stack_00000030 + 0x10);
    lVar14 = *(long *)
              Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
    ;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_05a7e1a4;
    uVar18 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar18 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar18 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar18 * 8 + 0x20) = uVar6;
      unaff_x26 = in_stack_00000040;
    }
    else {
      FUN_03abf904(in_stack_00000030,uVar6,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      unaff_x26 = in_stack_00000040;
    }
LAB_05a7dd38:
    if ((lVar8 != 0) && (uVar4 = *(ulong *)(lVar8 + 0x18), 0 < (int)uVar4)) {
      uVar20 = 0;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar20) goto LAB_05a7e1a8;
        memcpy(&stack0x00000180,(void *)(lVar8 + uVar20 * 0x48 + 0x20),0x48);
        uVar7 = FUN_04f6ebb4(in_stack_00000180,0);
        if ((uVar7 & 1) != 0) {
          uVar9 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
          uVar10 = thunk_FUN_02f6ef30(
                                     Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>__ctor__
                                     );
          uVar9 = FUN_04f70018(uVar10,uVar9,uVar24,0);
          goto LAB_05a7e1ec;
        }
        lVar5 = FUN_05a81070(&stack0x00000180,0);
        if ((in_stack_00000048 == 0) ||
           (lVar14 = FUN_03abf644(in_stack_00000048,uVar23,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                 ), lVar14 == 0)) goto LAB_05a7e1a4;
        lVar16 = *(long *)(lVar14 + 0x10);
        lVar17 = *(long *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
        ;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_05a7e1a4;
        uVar18 = *(uint *)(lVar14 + 0x18);
        if (uVar18 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar18 + 1;
          *(long *)(lVar16 + (long)(int)uVar18 * 8 + 0x20) = lVar5;
        }
        else {
          FUN_03abf904(lVar14,lVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = in_stack_000001c0;
        if (in_stack_000001c0 != 0) {
          if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
          lVar16 = FUN_03abf644(in_stack_00000030,uVar23,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                               );
          if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
            uVar7 = 0;
            uVar15 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
            puVar21 = (undefined8 *)(lVar14 + 0x20);
            do {
              if (uVar15 <= uVar7) goto LAB_05a7e1a8;
              in_stack_00000148 = puVar21[1];
              in_stack_00000140 = *puVar21;
              in_stack_00000158 = puVar21[3];
              in_stack_00000150 = puVar21[2];
              in_stack_00000168 = puVar21[5];
              in_stack_00000160 = puVar21[4];
              in_stack_00000178 = puVar21[7];
              in_stack_00000170 = puVar21[6];
              FUN_05a80edc(&stack0x000002b0,&stack0x00000140);
              in_stack_000000f0 = in_stack_000002e8;
              in_stack_000000f8 = in_stack_000002f0;
              in_stack_00000100 = in_stack_000002f8;
              in_stack_00000108 = in_stack_00000300;
              in_stack_00000110 = in_stack_000002b0;
              in_stack_00000118 = in_stack_000002b8;
              in_stack_00000120 = in_stack_000002c0;
              in_stack_00000128 = in_stack_000002c8;
              in_stack_00000130 = uVar9;
              in_stack_00000138 = uVar10;
              if ((lVar5 == 0) || (lVar16 == 0)) goto LAB_05a7e1a4;
              lVar17 = *(long *)(lVar16 + 0x10);
              uVar6 = *(undefined8 *)(lVar5 + 0x10);
              lVar19 = *(long *)puVar11;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_05a7e1a4;
              uVar18 = *(uint *)(lVar16 + 0x18);
              if (uVar18 < *(uint *)(lVar17 + 0x18)) {
                lVar17 = lVar17 + (long)(int)uVar18 * 0x58;
                *(uint *)(lVar16 + 0x18) = uVar18 + 1;
                *(undefined8 *)(lVar17 + 0x28) = in_stack_000002b8;
                *(undefined8 *)(lVar17 + 0x20) = in_stack_000002b0;
                *(undefined8 *)(lVar17 + 0x38) = in_stack_000002c8;
                *(undefined8 *)(lVar17 + 0x30) = in_stack_000002c0;
                *(undefined8 *)(lVar17 + 0x48) = uVar10;
                *(undefined8 *)(lVar17 + 0x40) = uVar9;
                *(undefined8 *)(lVar17 + 0x50) = uVar6;
                *(undefined8 *)(lVar17 + 0x60) = in_stack_000002f0;
                *(undefined8 *)(lVar17 + 0x58) = in_stack_000002e8;
                *(undefined8 *)(lVar17 + 0x70) = in_stack_00000300;
                *(undefined8 *)(lVar17 + 0x68) = in_stack_000002f8;
              }
              else {
                FUN_03a5c5a4(lVar16,&stack0x000002b0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              uVar15 = (ulong)*(uint *)(lVar14 + 0x18);
              uVar7 = uVar7 + 1;
              puVar21 = puVar21 + 8;
            } while ((long)uVar7 < (long)(int)*(uint *)(lVar14 + 0x18));
          }
        }
        uVar20 = uVar20 + 1;
        unaff_x26 = in_stack_00000040;
      } while (uVar20 != (uVar4 & 0xffffffff));
    }
    if (lVar13 == 0) {
      if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
      FUN_03abf644(in_stack_00000030,uVar23,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                  );
    }
    else {
      if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
      uVar18 = *(uint *)(lVar13 + 0x18);
      lVar8 = FUN_03abf644(in_stack_00000030,uVar23,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                          );
      if (0 < (int)uVar18) {
        uVar4 = 0;
        puVar21 = (undefined8 *)(lVar13 + 0x20);
        do {
          if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_05a7e1a8;
          in_stack_000000b8 = puVar21[1];
          in_stack_000000b0 = *puVar21;
          in_stack_000000c8 = puVar21[3];
          in_stack_000000c0 = puVar21[2];
          in_stack_000000d8 = puVar21[5];
          in_stack_000000d0 = puVar21[4];
          in_stack_000000e8 = puVar21[7];
          in_stack_000000e0 = puVar21[6];
          FUN_05a80edc(&stack0x00000050,&stack0x000000b0);
          if (lVar8 == 0) goto LAB_05a7e1a4;
          lVar5 = *(long *)(lVar8 + 0x10);
          lVar14 = *(long *)puVar11;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_05a7e1a4;
          uVar23 = *(uint *)(lVar8 + 0x18);
          if (uVar23 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar23 + 1;
            memcpy((void *)(lVar5 + (long)(int)uVar23 * 0x58 + 0x20),&stack0x00000050,0x58);
          }
          else {
            uVar24 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
            memcpy(&stack0x000002b0,&stack0x00000050,0x58);
            FUN_03a5c5a4(lVar8,&stack0x000002b0,uVar24);
          }
          uVar4 = uVar4 + 1;
          puVar21 = puVar21 + 8;
        } while (uVar18 != uVar4);
      }
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 != (uVar12 & 0xffffffff));
LAB_05a7e088:
  puVar2 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__;
  puVar11 = 
  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<CollectionVirtualizationMethod>__ctor__
  ;
  if (unaff_x26 == 0) {
LAB_05a7e1a4:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (0 < *(int *)(unaff_x26 + 0x18)) {
    iVar3 = 0;
    do {
      lVar13 = FUN_03abf644(unaff_x26,iVar3,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                           );
      if ((((in_stack_00000048 == 0) ||
           (lVar8 = FUN_03abf644(in_stack_00000048,iVar3,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                ), lVar8 == 0)) ||
          (lVar8 = FUN_03ac12f8(lVar8,*(undefined8 *)puVar11), in_stack_00000030 == 0)) ||
         ((lVar5 = FUN_03abf644(in_stack_00000030,iVar3,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                               ), lVar5 == 0 ||
          (uVar9 = FUN_03a5e38c(lVar5,*(undefined8 *)puVar2), lVar13 == 0)))) goto LAB_05a7e1a4;
      *(long *)(lVar13 + 0x28) = lVar8;
      *(undefined8 *)(lVar13 + 0x30) = uVar9;
      if (lVar8 == 0) goto LAB_05a7e1a4;
      uVar23 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar23) {
        uVar18 = 0;
        do {
          if (uVar23 == uVar18) goto LAB_05a7e1a8;
          lVar5 = *(long *)(lVar8 + (long)(int)uVar18 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_05a7e1a4;
          uVar18 = uVar18 + 1;
          *(long *)(lVar5 + 200) = lVar13;
        } while ((uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU)) != uVar18);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_x26 + 0x18));
  }
  FUN_03ac12f8(unaff_x26,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ColumnSortingMode>__ctor__
              );
  return;
}


