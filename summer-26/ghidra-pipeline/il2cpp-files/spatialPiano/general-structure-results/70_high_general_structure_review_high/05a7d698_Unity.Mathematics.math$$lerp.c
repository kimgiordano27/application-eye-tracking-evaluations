/*
FUNCTION_NAME: Unity.Mathematics.math$$lerp
ENTRY_POINT: 05a7d698
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


void Unity_Mathematics_math__lerp(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong unaff_x19;
  ulong uVar20;
  undefined8 *puVar21;
  long unaff_x23;
  uint uVar22;
  undefined8 unaff_x25;
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
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  
code_r0x05a7d698:
  uVar3 = FUN_04f6ebb4(param_1,param_2);
  if ((uVar3 & 1) == 0) {
    if (unaff_x26 != 0) {
      do {
        if (0 < *(int *)(unaff_x26 + 0x18)) {
          uVar22 = 0;
          do {
            lVar4 = FUN_03abf644(unaff_x26,uVar22,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                );
            if (lVar4 == 0) goto LAB_05a7e1a4;
            iVar2 = FUN_04f6c698(*(undefined8 *)(lVar4 + 0x10),unaff_x25,3,0);
            if (iVar2 == 0) {
              lVar4 = FUN_03abf644(unaff_x26,uVar22,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                  );
              if (lVar4 != 0) {
                lVar4 = FUN_05a81070(&stack0x00000260,param_1);
                if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
                goto Unity_Mathematics_math__unlerp;
              }
              break;
            }
            uVar22 = uVar22 + 1;
          } while ((int)uVar22 < *(int *)(unaff_x26 + 0x18));
        }
        lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
        Unity_Mathematics_math__int2();
        *(undefined8 *)(lVar4 + 0x10) = unaff_x25;
        uVar22 = *(uint *)(unaff_x26 + 0x18);
        lVar11 = *(long *)(unaff_x26 + 0x10);
        lVar14 = *(long *)
                  Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__
        ;
        *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
        if (lVar11 == 0) break;
        if (uVar22 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(in_stack_00000040 + 0x18) = uVar22 + 1;
          *(long *)(lVar11 + (long)(int)uVar22 * 8 + 0x20) = lVar4;
        }
        else {
          FUN_03abf904(in_stack_00000040,lVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                                  );
        FUN_03abf108(uVar5,*(undefined8 *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                    );
        if (in_stack_00000048 == 0) break;
        lVar4 = *(long *)(in_stack_00000048 + 0x10);
        lVar11 = *(long *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
        ;
        *(int *)(in_stack_00000048 + 0x1c) = *(int *)(in_stack_00000048 + 0x1c) + 1;
        if (lVar4 == 0) break;
        uVar18 = *(uint *)(in_stack_00000048 + 0x18);
        if (uVar18 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(in_stack_00000048 + 0x18) = uVar18 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar18 * 8 + 0x20) = uVar5;
        }
        else {
          FUN_03abf904(in_stack_00000048,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                                  );
        FUN_03a5bcf0(uVar5,*(undefined8 *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                    );
        if (in_stack_00000030 == 0) break;
        lVar4 = *(long *)(in_stack_00000030 + 0x10);
        lVar11 = *(long *)
                  Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
        ;
        *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
        if (lVar4 == 0) break;
        uVar18 = *(uint *)(in_stack_00000030 + 0x18);
        if (uVar18 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(in_stack_00000030 + 0x18) = uVar18 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar18 * 8 + 0x20) = uVar5;
        }
        else {
          FUN_03abf904(in_stack_00000030,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        lVar4 = FUN_05a81070(&stack0x00000260,param_1);
        unaff_x26 = in_stack_00000040;
Unity_Mathematics_math__unlerp:
        lVar11 = FUN_03abf644(in_stack_00000048,uVar22,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                             );
        if (lVar11 == 0) break;
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar15 = *(long *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
        ;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) break;
        uVar18 = *(uint *)(lVar11 + 0x18);
        if (uVar18 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar18 + 1;
          *(long *)(lVar14 + (long)(int)uVar18 * 8 + 0x20) = lVar4;
        }
        else {
          FUN_03abf904(lVar11,lVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        if (in_stack_000002a0 != 0) {
          if (in_stack_00000030 == 0) break;
          lVar11 = FUN_03abf644(in_stack_00000030,uVar22,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                               );
          if (0 < (int)*(ulong *)(in_stack_000002a0 + 0x18)) {
            uVar3 = 0;
            uVar12 = *(ulong *)(in_stack_000002a0 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= uVar3) goto LAB_05a7e1a8;
              FUN_05a80edc(&stack0x000002b0,&stack0x00000220);
              in_stack_000001d8 = *(undefined8 *)(unaff_x29 + 0x40);
              in_stack_000001d0 = *(undefined8 *)(unaff_x29 + 0x38);
              in_stack_000001e8 = *(undefined8 *)(unaff_x29 + 0x50);
              in_stack_000001e0 = *(undefined8 *)(unaff_x29 + 0x48);
              if ((lVar4 == 0) || (lVar11 == 0)) goto LAB_05a7e1a4;
              lVar14 = *(long *)(lVar11 + 0x10);
              uVar5 = *(undefined8 *)(lVar4 + 0x10);
              lVar15 = *unaff_x28;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_05a7e1a4;
              uVar22 = *(uint *)(lVar11 + 0x18);
              if (uVar22 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar22 * (long)unaff_w27;
                *(uint *)(lVar11 + 0x18) = uVar22 + 1;
                *(undefined8 *)(lVar14 + 0x28) = in_stack_000002b8;
                *(undefined8 *)(lVar14 + 0x20) = in_stack_000002b0;
                *(undefined8 *)(lVar14 + 0x38) = in_stack_000002c8;
                *(undefined8 *)(lVar14 + 0x30) = in_stack_000002c0;
                *(undefined8 *)(lVar14 + 0x48) = in_stack_000002d8;
                *(undefined8 *)(lVar14 + 0x40) = in_stack_000002d0;
                *(undefined8 *)(lVar14 + 0x50) = uVar5;
                *(undefined8 *)(lVar14 + 0x60) = in_stack_000001d8;
                *(undefined8 *)(lVar14 + 0x58) = in_stack_000001d0;
                *(undefined8 *)(lVar14 + 0x70) = in_stack_000001e8;
                *(undefined8 *)(lVar14 + 0x68) = in_stack_000001e0;
              }
              else {
                uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
                *(undefined8 *)(unaff_x29 + 0x40) = in_stack_000001d8;
                *(undefined8 *)(unaff_x29 + 0x38) = in_stack_000001d0;
                *(undefined8 *)(unaff_x29 + 0x50) = in_stack_000001e8;
                *(undefined8 *)(unaff_x29 + 0x48) = in_stack_000001e0;
                FUN_03a5c5a4(lVar11,&stack0x000002b0,uVar5);
              }
              uVar12 = (ulong)*(uint *)(in_stack_000002a0 + 0x18);
              uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)(int)*(uint *)(in_stack_000002a0 + 0x18));
          }
        }
        puVar10 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__;
        unaff_x19 = unaff_x19 + 1;
        if (unaff_x19 == in_stack_00000038) {
          if ((in_stack_00000020[1] == 0) ||
             (uVar3 = *(ulong *)(in_stack_00000020[1] + 0x18), (int)uVar3 < 1)) goto LAB_05a7e088;
          uVar12 = 0;
          goto LAB_05a7dad0;
        }
        lVar4 = *in_stack_00000020;
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x19) goto LAB_05a7e1a8;
        memcpy(&stack0x00000260,(void *)(lVar4 + unaff_x19 * 0x48 + 0x20),0x48);
        uVar3 = FUN_04f6ebb4(in_stack_00000260,0);
        if ((uVar3 & 1) != 0) {
          uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
          puVar10 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>__ctor__;
          goto LAB_05a7e280;
        }
        if (in_stack_00000260 == 0) break;
        iVar2 = FUN_04f73d7c(in_stack_00000260,0x2f,0);
        if (iVar2 != -1) goto code_r0x05a7d668;
        unaff_x25 = 0;
        param_1 = in_stack_00000260;
        if (unaff_x26 == 0) break;
      } while( true );
    }
    goto LAB_05a7e1a4;
  }
  uVar5 = thunk_FUN_02f6ef30(
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_NestedInteractionKind>__ctor__
                            );
  uVar7 = thunk_FUN_02f6ef30(
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_TouchScrollBehavior>__ctor__
                            );
  uVar5 = FUN_04f6f6b4(uVar5,unaff_x23,uVar7,0);
LAB_05a7e1ec:
  thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
  uVar7 = thunk_FUN_02f45270();
  FUN_050d5404(uVar7,uVar5,0);
  uVar5 = thunk_FUN_02f6ef30(
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar7,uVar5);
code_r0x05a7d668:
  unaff_x25 = FUN_04f71378(in_stack_00000260,0,iVar2,0);
  param_1 = FUN_04f73508(in_stack_00000260,iVar2 + 1,0);
  param_2 = 0;
  unaff_x23 = in_stack_00000260;
  goto code_r0x05a7d698;
LAB_05a7dad0:
  do {
    lVar4 = in_stack_00000020[1];
    if (lVar4 == 0) goto LAB_05a7e1a4;
    if (*(uint *)(lVar4 + 0x18) <= uVar12) {
LAB_05a7e1a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar4 = lVar4 + uVar12 * 0x20;
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    uVar7 = *(undefined8 *)(lVar4 + 0x28);
    lVar11 = *(long *)(lVar4 + 0x30);
    lVar4 = *(long *)(lVar4 + 0x38);
    uVar6 = FUN_04f6ebb4(uVar5,0);
    if ((uVar6 & 1) != 0) {
      uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
      puVar10 = 
      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Columns_StretchMode>__ctor__;
LAB_05a7e280:
      uVar7 = thunk_FUN_02f6ef30(puVar10);
      uVar5 = FUN_04f65e2c(uVar7,uVar5,0);
      goto LAB_05a7e1ec;
    }
    if (unaff_x26 == 0) goto LAB_05a7e1a4;
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      uVar22 = 0;
      do {
        lVar14 = FUN_03abf644(unaff_x26,uVar22,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                             );
        if (lVar14 == 0) goto LAB_05a7e1a4;
        iVar2 = FUN_04f6c698(*(undefined8 *)(lVar14 + 0x10),uVar5,3,0);
        if (iVar2 == 0) {
          lVar14 = FUN_03abf644(unaff_x26,uVar22,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                               );
          if (lVar14 != 0) goto LAB_05a7dd38;
          break;
        }
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < *(int *)(unaff_x26 + 0x18));
    }
    lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
    Unity_Mathematics_math__int2();
    *(undefined8 *)(lVar14 + 0x10) = uVar5;
    uVar6 = FUN_04f6ebb4(uVar7,0);
    puVar1 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__;
    uVar9 = 0;
    if ((uVar6 & 1) == 0) {
      uVar9 = uVar7;
    }
    *(undefined8 *)(lVar14 + 0x18) = uVar9;
    uVar22 = *(uint *)(unaff_x26 + 0x18);
    lVar15 = *(long *)puVar1;
    lVar16 = *(long *)(unaff_x26 + 0x10);
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_05a7e1a4;
    if (uVar22 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(in_stack_00000040 + 0x18) = uVar22 + 1;
      *(long *)(lVar16 + (long)(int)uVar22 * 8 + 0x20) = lVar14;
    }
    else {
      FUN_03abf904(in_stack_00000040,lVar14,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                              );
    FUN_03abf108(uVar7,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                );
    if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
    lVar14 = *(long *)(in_stack_00000048 + 0x10);
    lVar15 = *(long *)
              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
    ;
    *(int *)(in_stack_00000048 + 0x1c) = *(int *)(in_stack_00000048 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_05a7e1a4;
    uVar18 = *(uint *)(in_stack_00000048 + 0x18);
    if (uVar18 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = uVar18 + 1;
      *(undefined8 *)(lVar14 + (long)(int)uVar18 * 8 + 0x20) = uVar7;
    }
    else {
      FUN_03abf904(in_stack_00000048,uVar7,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                              );
    FUN_03a5bcf0(uVar7,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                );
    if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
    lVar14 = *(long *)(in_stack_00000030 + 0x10);
    lVar15 = *(long *)
              Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
    ;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_05a7e1a4;
    uVar18 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar18 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar18 + 1;
      *(undefined8 *)(lVar14 + (long)(int)uVar18 * 8 + 0x20) = uVar7;
      unaff_x26 = in_stack_00000040;
    }
    else {
      FUN_03abf904(in_stack_00000030,uVar7,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      unaff_x26 = in_stack_00000040;
    }
LAB_05a7dd38:
    if ((lVar11 != 0) && (uVar6 = *(ulong *)(lVar11 + 0x18), 0 < (int)uVar6)) {
      uVar20 = 0;
      do {
        if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_05a7e1a8;
        memcpy(&stack0x00000180,(void *)(lVar11 + uVar20 * 0x48 + 0x20),0x48);
        uVar8 = FUN_04f6ebb4(in_stack_00000180,0);
        if ((uVar8 & 1) != 0) {
          uVar7 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
          uVar9 = thunk_FUN_02f6ef30(
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>__ctor__
                                    );
          uVar5 = FUN_04f70018(uVar9,uVar7,uVar5,0);
          goto LAB_05a7e1ec;
        }
        lVar14 = FUN_05a81070(&stack0x00000180,0);
        if ((in_stack_00000048 == 0) ||
           (lVar15 = FUN_03abf644(in_stack_00000048,uVar22,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                 ), lVar15 == 0)) goto LAB_05a7e1a4;
        lVar16 = *(long *)(lVar15 + 0x10);
        lVar17 = *(long *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
        ;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_05a7e1a4;
        uVar18 = *(uint *)(lVar15 + 0x18);
        if (uVar18 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar18 + 1;
          *(long *)(lVar16 + (long)(int)uVar18 * 8 + 0x20) = lVar14;
        }
        else {
          FUN_03abf904(lVar15,lVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        lVar15 = in_stack_000001c0;
        if (in_stack_000001c0 != 0) {
          if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
          lVar16 = FUN_03abf644(in_stack_00000030,uVar22,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                               );
          if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
            uVar8 = 0;
            uVar13 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
            puVar21 = (undefined8 *)(lVar15 + 0x20);
            do {
              if (uVar13 <= uVar8) goto LAB_05a7e1a8;
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
              in_stack_00000130 = in_stack_000002d0;
              in_stack_00000138 = in_stack_000002d8;
              if ((lVar14 == 0) || (lVar16 == 0)) goto LAB_05a7e1a4;
              lVar17 = *(long *)(lVar16 + 0x10);
              uVar7 = *(undefined8 *)(lVar14 + 0x10);
              lVar19 = *(long *)puVar10;
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
                *(undefined8 *)(lVar17 + 0x48) = in_stack_000002d8;
                *(undefined8 *)(lVar17 + 0x40) = in_stack_000002d0;
                *(undefined8 *)(lVar17 + 0x50) = uVar7;
                *(undefined8 *)(lVar17 + 0x60) = in_stack_000002f0;
                *(undefined8 *)(lVar17 + 0x58) = in_stack_000002e8;
                *(undefined8 *)(lVar17 + 0x70) = in_stack_00000300;
                *(undefined8 *)(lVar17 + 0x68) = in_stack_000002f8;
              }
              else {
                FUN_03a5c5a4(lVar16,&stack0x000002b0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              uVar13 = (ulong)*(uint *)(lVar15 + 0x18);
              uVar8 = uVar8 + 1;
              puVar21 = puVar21 + 8;
            } while ((long)uVar8 < (long)(int)*(uint *)(lVar15 + 0x18));
          }
        }
        uVar20 = uVar20 + 1;
        unaff_x26 = in_stack_00000040;
      } while (uVar20 != (uVar6 & 0xffffffff));
    }
    if (lVar4 == 0) {
      if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
      FUN_03abf644(in_stack_00000030,uVar22,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                  );
    }
    else {
      if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
      uVar18 = *(uint *)(lVar4 + 0x18);
      lVar11 = FUN_03abf644(in_stack_00000030,uVar22,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                           );
      if (0 < (int)uVar18) {
        uVar6 = 0;
        puVar21 = (undefined8 *)(lVar4 + 0x20);
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_05a7e1a8;
          in_stack_000000b8 = puVar21[1];
          in_stack_000000b0 = *puVar21;
          in_stack_000000c8 = puVar21[3];
          in_stack_000000c0 = puVar21[2];
          in_stack_000000d8 = puVar21[5];
          in_stack_000000d0 = puVar21[4];
          in_stack_000000e8 = puVar21[7];
          in_stack_000000e0 = puVar21[6];
          FUN_05a80edc(&stack0x00000050,&stack0x000000b0);
          if (lVar11 == 0) goto LAB_05a7e1a4;
          lVar14 = *(long *)(lVar11 + 0x10);
          lVar15 = *(long *)puVar10;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_05a7e1a4;
          uVar22 = *(uint *)(lVar11 + 0x18);
          if (uVar22 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar22 + 1;
            memcpy((void *)(lVar14 + (long)(int)uVar22 * 0x58 + 0x20),&stack0x00000050,0x58);
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
            memcpy(&stack0x000002b0,&stack0x00000050,0x58);
            FUN_03a5c5a4(lVar11,&stack0x000002b0,uVar5);
          }
          uVar6 = uVar6 + 1;
          puVar21 = puVar21 + 8;
        } while (uVar18 != uVar6);
      }
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 != (uVar3 & 0xffffffff));
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
      lVar4 = FUN_03abf644(unaff_x26,iVar2,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                          );
      if ((((in_stack_00000048 == 0) ||
           (lVar11 = FUN_03abf644(in_stack_00000048,iVar2,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                 ), lVar11 == 0)) ||
          (lVar11 = FUN_03ac12f8(lVar11,*(undefined8 *)puVar10), in_stack_00000030 == 0)) ||
         ((lVar14 = FUN_03abf644(in_stack_00000030,iVar2,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                                ), lVar14 == 0 ||
          (uVar5 = FUN_03a5e38c(lVar14,*(undefined8 *)puVar1), lVar4 == 0)))) goto LAB_05a7e1a4;
      *(long *)(lVar4 + 0x28) = lVar11;
      *(undefined8 *)(lVar4 + 0x30) = uVar5;
      if (lVar11 == 0) goto LAB_05a7e1a4;
      uVar22 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar22) {
        uVar18 = 0;
        do {
          if (uVar22 == uVar18) goto LAB_05a7e1a8;
          lVar14 = *(long *)(lVar11 + (long)(int)uVar18 * 8 + 0x20);
          if (lVar14 == 0) goto LAB_05a7e1a4;
          uVar18 = uVar18 + 1;
          *(long *)(lVar14 + 200) = lVar4;
        } while ((uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU)) != uVar18);
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


