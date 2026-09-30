/*
FUNCTION_NAME: Unity.Mathematics.math$$remap
ENTRY_POINT: 05a7da24
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
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long in_x9;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong unaff_x19;
  ulong uVar19;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 *puVar20;
  ulong uVar21;
  long unaff_x23;
  uint uVar22;
  long unaff_x24;
  long unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
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
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  
  uVar25 = param_4._8_8_;
  uVar24 = param_4._0_8_;
  uVar23 = param_3._8_8_;
  uVar9 = param_3._0_8_;
  uVar5 = param_2._8_8_;
  uVar8 = param_2._0_8_;
code_r0x05a7da24:
  *(undefined8 *)(in_x9 + 0x28) = uVar5;
  *(undefined8 *)(in_x9 + 0x20) = uVar8;
  *(undefined8 *)(in_x9 + 0x38) = uVar23;
  *(undefined8 *)(in_x9 + 0x30) = uVar9;
  *(undefined8 *)(in_x9 + 0x48) = uVar25;
  *(undefined8 *)(in_x9 + 0x40) = uVar24;
  *(undefined8 *)(in_x9 + 0x50) = param_1;
  *(undefined8 *)(in_x9 + 0x60) = in_stack_000001d8;
  *(undefined8 *)(in_x9 + 0x58) = in_stack_000001d0;
  *(undefined8 *)(in_x9 + 0x70) = in_stack_000001e8;
  *(undefined8 *)(in_x9 + 0x68) = in_stack_000001e0;
  do {
    uVar11 = (ulong)*(uint *)(unaff_x21 + 0x18);
    unaff_x20 = unaff_x20 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x20) {
      do {
        do {
          puVar10 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__;
          unaff_x19 = unaff_x19 + 1;
          if (unaff_x19 == in_stack_00000038) {
            if ((in_stack_00000020[1] == 0) ||
               (uVar11 = *(ulong *)(in_stack_00000020[1] + 0x18), (int)uVar11 < 1))
            goto LAB_05a7e088;
            uVar21 = 0;
            goto LAB_05a7dad0;
          }
          lVar12 = *in_stack_00000020;
          if (lVar12 == 0) goto LAB_05a7e1a4;
          if (*(uint *)(lVar12 + 0x18) <= unaff_x19) goto LAB_05a7e1a8;
          memcpy(&stack0x00000260,(void *)(lVar12 + unaff_x19 * 0x48 + 0x20),0x48);
          uVar11 = FUN_04f6ebb4(in_stack_00000260,0);
          if ((uVar11 & 1) != 0) {
            uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
            puVar10 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>__ctor__
            ;
            goto LAB_05a7e280;
          }
          if (in_stack_00000260 == 0) goto LAB_05a7e1a4;
          iVar2 = FUN_04f73d7c(in_stack_00000260,0x2f,0);
          if (iVar2 == -1) {
            uVar8 = 0;
            lVar12 = in_stack_00000260;
          }
          else {
            uVar8 = FUN_04f71378(in_stack_00000260,0,iVar2,0);
            lVar12 = FUN_04f73508(in_stack_00000260,iVar2 + 1,0);
            uVar11 = FUN_04f6ebb4(lVar12,0);
            if ((uVar11 & 1) != 0) {
              uVar8 = thunk_FUN_02f6ef30(
                                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_NestedInteractionKind>__ctor__
                                        );
              uVar5 = thunk_FUN_02f6ef30(
                                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_TouchScrollBehavior>__ctor__
                                        );
              uVar8 = FUN_04f6f6b4(uVar8,in_stack_00000260,uVar5,0);
              goto LAB_05a7e1ec;
            }
          }
          if (unaff_x26 == 0) goto LAB_05a7e1a4;
          if (0 < *(int *)(unaff_x26 + 0x18)) {
            uVar22 = 0;
            do {
              lVar7 = FUN_03abf644(unaff_x26,uVar22,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                  );
              if (lVar7 == 0) goto LAB_05a7e1a4;
              iVar2 = FUN_04f6c698(*(undefined8 *)(lVar7 + 0x10),uVar8,3,0);
              if (iVar2 == 0) {
                lVar7 = FUN_03abf644(unaff_x26,uVar22,
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                    );
                if (lVar7 != 0) {
                  unaff_x23 = FUN_05a81070(&stack0x00000260,lVar12);
                  if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
                  goto Unity_Mathematics_math__unlerp;
                }
                break;
              }
              uVar22 = uVar22 + 1;
            } while ((int)uVar22 < *(int *)(unaff_x26 + 0x18));
          }
          lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
          Unity_Mathematics_math__int2();
          *(undefined8 *)(lVar7 + 0x10) = uVar8;
          uVar22 = *(uint *)(unaff_x26 + 0x18);
          lVar4 = *(long *)(unaff_x26 + 0x10);
          lVar13 = *(long *)
                    Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__
          ;
          *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
          if (lVar4 == 0) goto LAB_05a7e1a4;
          if (uVar22 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(in_stack_00000040 + 0x18) = uVar22 + 1;
            *(long *)(lVar4 + (long)(int)uVar22 * 8 + 0x20) = lVar7;
          }
          else {
            FUN_03abf904(in_stack_00000040,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                                    );
          FUN_03abf108(uVar8,*(undefined8 *)
                              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                      );
          if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
          lVar7 = *(long *)(in_stack_00000048 + 0x10);
          lVar4 = *(long *)
                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
          ;
          *(int *)(in_stack_00000048 + 0x1c) = *(int *)(in_stack_00000048 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_05a7e1a4;
          uVar17 = *(uint *)(in_stack_00000048 + 0x18);
          if (uVar17 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(in_stack_00000048 + 0x18) = uVar17 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar17 * 8 + 0x20) = uVar8;
          }
          else {
            FUN_03abf904(in_stack_00000048,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                                    );
          FUN_03a5bcf0(uVar8,*(undefined8 *)
                              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                      );
          if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
          lVar7 = *(long *)(in_stack_00000030 + 0x10);
          lVar4 = *(long *)
                   Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
          ;
          *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_05a7e1a4;
          uVar17 = *(uint *)(in_stack_00000030 + 0x18);
          if (uVar17 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(in_stack_00000030 + 0x18) = uVar17 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar17 * 8 + 0x20) = uVar8;
          }
          else {
            FUN_03abf904(in_stack_00000030,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          unaff_x23 = FUN_05a81070(&stack0x00000260,lVar12);
          unaff_x26 = in_stack_00000040;
Unity_Mathematics_math__unlerp:
          lVar12 = FUN_03abf644(in_stack_00000048,uVar22,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                               );
          if (lVar12 == 0) goto LAB_05a7e1a4;
          lVar7 = *(long *)(lVar12 + 0x10);
          lVar4 = *(long *)
                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
          ;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_05a7e1a4;
          uVar17 = *(uint *)(lVar12 + 0x18);
          if (uVar17 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar17 + 1;
            *(long *)(lVar7 + (long)(int)uVar17 * 8 + 0x20) = unaff_x23;
          }
          else {
            FUN_03abf904(lVar12,unaff_x23,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
        } while (in_stack_000002a0 == 0);
        if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
        unaff_x24 = FUN_03abf644(in_stack_00000030,uVar22,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                                );
      } while ((int)*(ulong *)(in_stack_000002a0 + 0x18) < 1);
      unaff_x20 = 0;
      uVar11 = *(ulong *)(in_stack_000002a0 + 0x18) & 0xffffffff;
      unaff_x21 = in_stack_000002a0;
    }
    if (uVar11 <= unaff_x20) goto LAB_05a7e1a8;
    FUN_05a80edc(&stack0x000002b0,&stack0x00000220);
    in_stack_000001d8 = *(undefined8 *)(unaff_x29 + 0x40);
    in_stack_000001d0 = *(undefined8 *)(unaff_x29 + 0x38);
    in_stack_000001e8 = *(undefined8 *)(unaff_x29 + 0x50);
    in_stack_000001e0 = *(undefined8 *)(unaff_x29 + 0x48);
    if ((unaff_x23 == 0) || (unaff_x24 == 0)) goto LAB_05a7e1a4;
    lVar12 = *(long *)(unaff_x24 + 0x10);
    param_1 = *(undefined8 *)(unaff_x23 + 0x10);
    lVar7 = *unaff_x28;
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_05a7e1a4;
    uVar22 = *(uint *)(unaff_x24 + 0x18);
    if (uVar22 < *(uint *)(lVar12 + 0x18)) break;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70);
    *(undefined8 *)(unaff_x29 + 0x40) = in_stack_000001d8;
    *(undefined8 *)(unaff_x29 + 0x38) = in_stack_000001d0;
    *(undefined8 *)(unaff_x29 + 0x50) = in_stack_000001e8;
    *(undefined8 *)(unaff_x29 + 0x48) = in_stack_000001e0;
    FUN_03a5c5a4(unaff_x24,&stack0x000002b0,uVar8);
  } while( true );
  in_x9 = lVar12 + (long)(int)uVar22 * (long)unaff_w27;
  *(uint *)(unaff_x24 + 0x18) = uVar22 + 1;
  uVar8 = in_stack_000002b0;
  uVar5 = in_stack_000002b8;
  uVar9 = in_stack_000002c0;
  uVar23 = in_stack_000002c8;
  uVar24 = in_stack_000002d0;
  uVar25 = in_stack_000002d8;
  goto code_r0x05a7da24;
LAB_05a7dad0:
  do {
    lVar12 = in_stack_00000020[1];
    if (lVar12 == 0) goto LAB_05a7e1a4;
    if (*(uint *)(lVar12 + 0x18) <= uVar21) {
LAB_05a7e1a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar12 = lVar12 + uVar21 * 0x20;
    uVar8 = *(undefined8 *)(lVar12 + 0x20);
    uVar5 = *(undefined8 *)(lVar12 + 0x28);
    lVar7 = *(long *)(lVar12 + 0x30);
    lVar12 = *(long *)(lVar12 + 0x38);
    uVar3 = FUN_04f6ebb4(uVar8,0);
    if ((uVar3 & 1) != 0) {
      uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
      puVar10 = 
      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Columns_StretchMode>__ctor__;
LAB_05a7e280:
      uVar5 = thunk_FUN_02f6ef30(puVar10);
      uVar8 = FUN_04f65e2c(uVar5,uVar8,0);
LAB_05a7e1ec:
      thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
      uVar5 = thunk_FUN_02f45270();
      FUN_050d5404(uVar5,uVar8,0);
      uVar8 = thunk_FUN_02f6ef30(
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar5,uVar8);
    }
    if (unaff_x26 == 0) goto LAB_05a7e1a4;
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      uVar22 = 0;
      do {
        lVar4 = FUN_03abf644(unaff_x26,uVar22,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                            );
        if (lVar4 == 0) goto LAB_05a7e1a4;
        iVar2 = FUN_04f6c698(*(undefined8 *)(lVar4 + 0x10),uVar8,3,0);
        if (iVar2 == 0) {
          lVar4 = FUN_03abf644(unaff_x26,uVar22,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                              );
          if (lVar4 != 0) goto LAB_05a7dd38;
          break;
        }
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < *(int *)(unaff_x26 + 0x18));
    }
    lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
    Unity_Mathematics_math__int2();
    *(undefined8 *)(lVar4 + 0x10) = uVar8;
    uVar3 = FUN_04f6ebb4(uVar5,0);
    puVar1 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__;
    uVar9 = 0;
    if ((uVar3 & 1) == 0) {
      uVar9 = uVar5;
    }
    *(undefined8 *)(lVar4 + 0x18) = uVar9;
    uVar22 = *(uint *)(unaff_x26 + 0x18);
    lVar13 = *(long *)puVar1;
    lVar15 = *(long *)(unaff_x26 + 0x10);
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_05a7e1a4;
    if (uVar22 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(in_stack_00000040 + 0x18) = uVar22 + 1;
      *(long *)(lVar15 + (long)(int)uVar22 * 8 + 0x20) = lVar4;
    }
    else {
      FUN_03abf904(in_stack_00000040,lVar4,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                              );
    FUN_03abf108(uVar5,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                );
    if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
    lVar4 = *(long *)(in_stack_00000048 + 0x10);
    lVar13 = *(long *)
              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
    ;
    *(int *)(in_stack_00000048 + 0x1c) = *(int *)(in_stack_00000048 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_05a7e1a4;
    uVar17 = *(uint *)(in_stack_00000048 + 0x18);
    if (uVar17 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = uVar17 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar17 * 8 + 0x20) = uVar5;
    }
    else {
      FUN_03abf904(in_stack_00000048,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                              );
    FUN_03a5bcf0(uVar5,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                );
    if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
    lVar4 = *(long *)(in_stack_00000030 + 0x10);
    lVar13 = *(long *)
              Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
    ;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_05a7e1a4;
    uVar17 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar17 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar17 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar17 * 8 + 0x20) = uVar5;
      unaff_x26 = in_stack_00000040;
    }
    else {
      FUN_03abf904(in_stack_00000030,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      unaff_x26 = in_stack_00000040;
    }
LAB_05a7dd38:
    if ((lVar7 != 0) && (uVar3 = *(ulong *)(lVar7 + 0x18), 0 < (int)uVar3)) {
      uVar19 = 0;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05a7e1a8;
        memcpy(&stack0x00000180,(void *)(lVar7 + uVar19 * 0x48 + 0x20),0x48);
        uVar6 = FUN_04f6ebb4(in_stack_00000180,0);
        if ((uVar6 & 1) != 0) {
          uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
          uVar9 = thunk_FUN_02f6ef30(
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>__ctor__
                                    );
          uVar8 = FUN_04f70018(uVar9,uVar5,uVar8,0);
          goto LAB_05a7e1ec;
        }
        lVar4 = FUN_05a81070(&stack0x00000180,0);
        if ((in_stack_00000048 == 0) ||
           (lVar13 = FUN_03abf644(in_stack_00000048,uVar22,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                 ), lVar13 == 0)) goto LAB_05a7e1a4;
        lVar15 = *(long *)(lVar13 + 0x10);
        lVar16 = *(long *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
        ;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_05a7e1a4;
        uVar17 = *(uint *)(lVar13 + 0x18);
        if (uVar17 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar17 + 1;
          *(long *)(lVar15 + (long)(int)uVar17 * 8 + 0x20) = lVar4;
        }
        else {
          FUN_03abf904(lVar13,lVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar13 = in_stack_000001c0;
        if (in_stack_000001c0 != 0) {
          if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
          lVar15 = FUN_03abf644(in_stack_00000030,uVar22,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                               );
          if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
            uVar6 = 0;
            uVar14 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
            puVar20 = (undefined8 *)(lVar13 + 0x20);
            do {
              if (uVar14 <= uVar6) goto LAB_05a7e1a8;
              in_stack_00000148 = puVar20[1];
              in_stack_00000140 = *puVar20;
              in_stack_00000158 = puVar20[3];
              in_stack_00000150 = puVar20[2];
              in_stack_00000168 = puVar20[5];
              in_stack_00000160 = puVar20[4];
              in_stack_00000178 = puVar20[7];
              in_stack_00000170 = puVar20[6];
              FUN_05a80edc(&stack0x000002b0,&stack0x00000140);
              in_stack_000000f0 = in_stack_000002e8;
              in_stack_000000f8 = in_stack_000002f0;
              in_stack_00000100 = in_stack_000002f8;
              in_stack_00000108 = in_stack_00000300;
              in_stack_00000110 = in_stack_000002b0;
              in_stack_00000118 = in_stack_000002b8;
              in_stack_00000120 = in_stack_000002c0;
              in_stack_00000128 = in_stack_000002c8;
              in_stack_00000130 = in_stack_000002d0;
              in_stack_00000138 = in_stack_000002d8;
              if ((lVar4 == 0) || (lVar15 == 0)) goto LAB_05a7e1a4;
              lVar16 = *(long *)(lVar15 + 0x10);
              uVar5 = *(undefined8 *)(lVar4 + 0x10);
              lVar18 = *(long *)puVar10;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_05a7e1a4;
              uVar17 = *(uint *)(lVar15 + 0x18);
              if (uVar17 < *(uint *)(lVar16 + 0x18)) {
                lVar16 = lVar16 + (long)(int)uVar17 * 0x58;
                *(uint *)(lVar15 + 0x18) = uVar17 + 1;
                *(undefined8 *)(lVar16 + 0x28) = in_stack_000002b8;
                *(undefined8 *)(lVar16 + 0x20) = in_stack_000002b0;
                *(undefined8 *)(lVar16 + 0x38) = in_stack_000002c8;
                *(undefined8 *)(lVar16 + 0x30) = in_stack_000002c0;
                *(undefined8 *)(lVar16 + 0x48) = in_stack_000002d8;
                *(undefined8 *)(lVar16 + 0x40) = in_stack_000002d0;
                *(undefined8 *)(lVar16 + 0x50) = uVar5;
                *(undefined8 *)(lVar16 + 0x60) = in_stack_000002f0;
                *(undefined8 *)(lVar16 + 0x58) = in_stack_000002e8;
                *(undefined8 *)(lVar16 + 0x70) = in_stack_00000300;
                *(undefined8 *)(lVar16 + 0x68) = in_stack_000002f8;
              }
              else {
                FUN_03a5c5a4(lVar15,&stack0x000002b0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
              uVar6 = uVar6 + 1;
              puVar20 = puVar20 + 8;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar13 + 0x18));
          }
        }
        uVar19 = uVar19 + 1;
        unaff_x26 = in_stack_00000040;
      } while (uVar19 != (uVar3 & 0xffffffff));
    }
    if (lVar12 == 0) {
      if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
      FUN_03abf644(in_stack_00000030,uVar22,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                  );
    }
    else {
      if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
      uVar17 = *(uint *)(lVar12 + 0x18);
      lVar7 = FUN_03abf644(in_stack_00000030,uVar22,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                          );
      if (0 < (int)uVar17) {
        uVar3 = 0;
        puVar20 = (undefined8 *)(lVar12 + 0x20);
        do {
          if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_05a7e1a8;
          in_stack_000000b8 = puVar20[1];
          in_stack_000000b0 = *puVar20;
          in_stack_000000c8 = puVar20[3];
          in_stack_000000c0 = puVar20[2];
          in_stack_000000d8 = puVar20[5];
          in_stack_000000d0 = puVar20[4];
          in_stack_000000e8 = puVar20[7];
          in_stack_000000e0 = puVar20[6];
          FUN_05a80edc(&stack0x00000050,&stack0x000000b0);
          if (lVar7 == 0) goto LAB_05a7e1a4;
          lVar4 = *(long *)(lVar7 + 0x10);
          lVar13 = *(long *)puVar10;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar4 == 0) goto LAB_05a7e1a4;
          uVar22 = *(uint *)(lVar7 + 0x18);
          if (uVar22 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar22 + 1;
            memcpy((void *)(lVar4 + (long)(int)uVar22 * 0x58 + 0x20),&stack0x00000050,0x58);
          }
          else {
            uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
            memcpy(&stack0x000002b0,&stack0x00000050,0x58);
            FUN_03a5c5a4(lVar7,&stack0x000002b0,uVar8);
          }
          uVar3 = uVar3 + 1;
          puVar20 = puVar20 + 8;
        } while (uVar17 != uVar3);
      }
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 != (uVar11 & 0xffffffff));
LAB_05a7e088:
  puVar1 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__;
  puVar10 = 
  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<CollectionVirtualizationMethod>__ctor__
  ;
  if (unaff_x26 == 0) {
LAB_05a7e1a4:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (0 < *(int *)(unaff_x26 + 0x18)) {
    iVar2 = 0;
    do {
      lVar12 = FUN_03abf644(unaff_x26,iVar2,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                           );
      if ((((in_stack_00000048 == 0) ||
           (lVar7 = FUN_03abf644(in_stack_00000048,iVar2,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                ), lVar7 == 0)) ||
          (lVar7 = FUN_03ac12f8(lVar7,*(undefined8 *)puVar10), in_stack_00000030 == 0)) ||
         ((lVar4 = FUN_03abf644(in_stack_00000030,iVar2,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                               ), lVar4 == 0 ||
          (uVar8 = FUN_03a5e38c(lVar4,*(undefined8 *)puVar1), lVar12 == 0)))) goto LAB_05a7e1a4;
      *(long *)(lVar12 + 0x28) = lVar7;
      *(undefined8 *)(lVar12 + 0x30) = uVar8;
      if (lVar7 == 0) goto LAB_05a7e1a4;
      uVar22 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar22) {
        uVar17 = 0;
        do {
          if (uVar22 == uVar17) goto LAB_05a7e1a8;
          lVar4 = *(long *)(lVar7 + (long)(int)uVar17 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_05a7e1a4;
          uVar17 = uVar17 + 1;
          *(long *)(lVar4 + 200) = lVar12;
        } while ((uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU)) != uVar17);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_x26 + 0x18));
  }
  FUN_03ac12f8(unaff_x26,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ColumnSortingMode>__ctor__
              );
  return;
}


