/*
FUNCTION_NAME: Unity.Mathematics.math$$lerp
ENTRY_POINT: 05a7d770
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_10
*/


void Unity_Mathematics_math__lerp(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **in_x9;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int in_w10;
  uint uVar17;
  long lVar18;
  ulong unaff_x19;
  ulong uVar19;
  long unaff_x20;
  ulong uVar20;
  undefined8 *puVar21;
  long unaff_x23;
  uint unaff_w24;
  uint uVar22;
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
  
  while( true ) {
    lVar9 = *(long *)(unaff_x20 + 0x10);
    lVar13 = *(long *)in_x9[0xa0];
    *(int *)(unaff_x20 + 0x1c) = in_w10 + 1;
    if (lVar9 == 0) break;
    if (unaff_w24 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(in_stack_00000040 + 0x18) = unaff_w24 + 1;
      *(long *)(lVar9 + (long)(int)unaff_w24 * 8 + 0x20) = unaff_x26;
    }
    else {
      FUN_03abf904(in_stack_00000040,unaff_x26,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    uVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                              );
    FUN_03abf108(uVar3,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                );
    if (in_stack_00000048 == 0) break;
    lVar9 = *(long *)(in_stack_00000048 + 0x10);
    lVar13 = *(long *)
              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
    ;
    *(int *)(in_stack_00000048 + 0x1c) = *(int *)(in_stack_00000048 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar22 = *(uint *)(in_stack_00000048 + 0x18);
    if (uVar22 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = uVar22 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar22 * 8 + 0x20) = uVar3;
    }
    else {
      FUN_03abf904(in_stack_00000048,uVar3,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    uVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                              );
    FUN_03a5bcf0(uVar3,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                );
    if (in_stack_00000030 == 0) break;
    lVar9 = *(long *)(in_stack_00000030 + 0x10);
    lVar13 = *(long *)
              Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
    ;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar22 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar22 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar22 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar22 * 8 + 0x20) = uVar3;
    }
    else {
      FUN_03abf904(in_stack_00000030,uVar3,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = FUN_05a81070(&stack0x00000260,unaff_x23);
    while( true ) {
      lVar13 = FUN_03abf644(in_stack_00000048,unaff_w24,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                           );
      if (lVar13 == 0) goto LAB_05a7e1a4;
      lVar10 = *(long *)(lVar13 + 0x10);
      lVar14 = *(long *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_05a7e1a4;
      uVar22 = *(uint *)(lVar13 + 0x18);
      if (uVar22 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar22 + 1;
        *(long *)(lVar10 + (long)(int)uVar22 * 8 + 0x20) = lVar9;
      }
      else {
        FUN_03abf904(lVar13,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (in_stack_000002a0 != 0) {
        if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
        lVar13 = FUN_03abf644(in_stack_00000030,unaff_w24,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                             );
        if (0 < (int)*(ulong *)(in_stack_000002a0 + 0x18)) {
          uVar20 = 0;
          uVar11 = *(ulong *)(in_stack_000002a0 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar20) goto LAB_05a7e1a8;
            FUN_05a80edc(&stack0x000002b0,&stack0x00000220);
            in_stack_000001d8 = *(undefined8 *)(unaff_x29 + 0x40);
            in_stack_000001d0 = *(undefined8 *)(unaff_x29 + 0x38);
            in_stack_000001e8 = *(undefined8 *)(unaff_x29 + 0x50);
            in_stack_000001e0 = *(undefined8 *)(unaff_x29 + 0x48);
            if ((lVar9 == 0) || (lVar13 == 0)) goto LAB_05a7e1a4;
            lVar10 = *(long *)(lVar13 + 0x10);
            uVar3 = *(undefined8 *)(lVar9 + 0x10);
            lVar14 = *unaff_x28;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_05a7e1a4;
            uVar22 = *(uint *)(lVar13 + 0x18);
            if (uVar22 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + (long)(int)uVar22 * (long)unaff_w27;
              *(uint *)(lVar13 + 0x18) = uVar22 + 1;
              *(undefined8 *)(lVar10 + 0x28) = in_stack_000002b8;
              *(undefined8 *)(lVar10 + 0x20) = in_stack_000002b0;
              *(undefined8 *)(lVar10 + 0x38) = in_stack_000002c8;
              *(undefined8 *)(lVar10 + 0x30) = in_stack_000002c0;
              *(undefined8 *)(lVar10 + 0x48) = in_stack_000002d8;
              *(undefined8 *)(lVar10 + 0x40) = in_stack_000002d0;
              *(undefined8 *)(lVar10 + 0x50) = uVar3;
              *(undefined8 *)(lVar10 + 0x60) = in_stack_000001d8;
              *(undefined8 *)(lVar10 + 0x58) = in_stack_000001d0;
              *(undefined8 *)(lVar10 + 0x70) = in_stack_000001e8;
              *(undefined8 *)(lVar10 + 0x68) = in_stack_000001e0;
            }
            else {
              uVar3 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
              *(undefined8 *)(unaff_x29 + 0x40) = in_stack_000001d8;
              *(undefined8 *)(unaff_x29 + 0x38) = in_stack_000001d0;
              *(undefined8 *)(unaff_x29 + 0x50) = in_stack_000001e8;
              *(undefined8 *)(unaff_x29 + 0x48) = in_stack_000001e0;
              FUN_03a5c5a4(lVar13,&stack0x000002b0,uVar3);
            }
            uVar11 = (ulong)*(uint *)(in_stack_000002a0 + 0x18);
            uVar20 = uVar20 + 1;
          } while ((long)uVar20 < (long)(int)*(uint *)(in_stack_000002a0 + 0x18));
        }
      }
      puVar8 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__;
      unaff_x19 = unaff_x19 + 1;
      if (unaff_x19 == in_stack_00000038) {
        if ((in_stack_00000020[1] == 0) ||
           (uVar20 = *(ulong *)(in_stack_00000020[1] + 0x18), (int)uVar20 < 1)) goto LAB_05a7e088;
        uVar11 = 0;
        goto LAB_05a7dad0;
      }
      lVar9 = *in_stack_00000020;
      if (lVar9 == 0) goto LAB_05a7e1a4;
      if (*(uint *)(lVar9 + 0x18) <= unaff_x19) goto LAB_05a7e1a8;
      memcpy(&stack0x00000260,(void *)(lVar9 + unaff_x19 * 0x48 + 0x20),0x48);
      uVar20 = FUN_04f6ebb4(in_stack_00000260,0);
      if ((uVar20 & 1) != 0) {
        uVar3 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
        puVar8 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>__ctor__;
        goto LAB_05a7e280;
      }
      if (in_stack_00000260 == 0) goto LAB_05a7e1a4;
      iVar2 = FUN_04f73d7c(in_stack_00000260,0x2f,0);
      if (iVar2 == -1) {
        uVar3 = 0;
        unaff_x23 = in_stack_00000260;
      }
      else {
        uVar3 = FUN_04f71378(in_stack_00000260,0,iVar2,0);
        unaff_x23 = FUN_04f73508(in_stack_00000260,iVar2 + 1,0);
        uVar20 = FUN_04f6ebb4(unaff_x23,0);
        if ((uVar20 & 1) != 0) {
          uVar3 = thunk_FUN_02f6ef30(
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_NestedInteractionKind>__ctor__
                                    );
          uVar5 = thunk_FUN_02f6ef30(
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_TouchScrollBehavior>__ctor__
                                    );
          uVar3 = FUN_04f6f6b4(uVar3,in_stack_00000260,uVar5,0);
          goto LAB_05a7e1ec;
        }
      }
      if (in_stack_00000040 == 0) goto LAB_05a7e1a4;
      if (*(int *)(in_stack_00000040 + 0x18) < 1) break;
      unaff_w24 = 0;
      while( true ) {
        lVar9 = FUN_03abf644(in_stack_00000040,unaff_w24,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                            );
        if (lVar9 == 0) goto LAB_05a7e1a4;
        iVar2 = FUN_04f6c698(*(undefined8 *)(lVar9 + 0x10),uVar3,3,0);
        if (iVar2 == 0) break;
        unaff_w24 = unaff_w24 + 1;
        if (*(int *)(in_stack_00000040 + 0x18) <= (int)unaff_w24) goto LAB_05a7d748;
      }
      lVar9 = FUN_03abf644(in_stack_00000040,unaff_w24,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                          );
      if (lVar9 == 0) break;
      lVar9 = FUN_05a81070(&stack0x00000260,unaff_x23);
      if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
    }
LAB_05a7d748:
    unaff_x26 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
    Unity_Mathematics_math__int2();
    *(undefined8 *)(unaff_x26 + 0x10) = uVar3;
    in_x9 = &Method_UnityEngine_Events_UnityEvent<PointerEvent>_Invoke__;
    unaff_w24 = *(uint *)(in_stack_00000040 + 0x18);
    in_w10 = *(int *)(in_stack_00000040 + 0x1c);
    unaff_x20 = in_stack_00000040;
  }
  goto LAB_05a7e1a4;
LAB_05a7dad0:
  do {
    lVar9 = in_stack_00000020[1];
    if (lVar9 == 0) goto LAB_05a7e1a4;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_05a7e1a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar9 = lVar9 + uVar11 * 0x20;
    uVar3 = *(undefined8 *)(lVar9 + 0x20);
    uVar5 = *(undefined8 *)(lVar9 + 0x28);
    lVar13 = *(long *)(lVar9 + 0x30);
    lVar9 = *(long *)(lVar9 + 0x38);
    uVar4 = FUN_04f6ebb4(uVar3,0);
    if ((uVar4 & 1) != 0) {
      uVar3 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
      puVar8 = 
      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Columns_StretchMode>__ctor__;
LAB_05a7e280:
      uVar5 = thunk_FUN_02f6ef30(puVar8);
      uVar3 = FUN_04f65e2c(uVar5,uVar3,0);
LAB_05a7e1ec:
      thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
      uVar5 = thunk_FUN_02f45270();
      FUN_050d5404(uVar5,uVar3,0);
      uVar3 = thunk_FUN_02f6ef30(
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar5,uVar3);
    }
    if (in_stack_00000040 == 0) goto LAB_05a7e1a4;
    if (0 < *(int *)(in_stack_00000040 + 0x18)) {
      uVar22 = 0;
      do {
        lVar10 = FUN_03abf644(in_stack_00000040,uVar22,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                             );
        if (lVar10 == 0) goto LAB_05a7e1a4;
        iVar2 = FUN_04f6c698(*(undefined8 *)(lVar10 + 0x10),uVar3,3,0);
        if (iVar2 == 0) {
          lVar10 = FUN_03abf644(in_stack_00000040,uVar22,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                               );
          if (lVar10 != 0) goto LAB_05a7dd38;
          break;
        }
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < *(int *)(in_stack_00000040 + 0x18));
    }
    lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
    Unity_Mathematics_math__int2();
    *(undefined8 *)(lVar10 + 0x10) = uVar3;
    uVar4 = FUN_04f6ebb4(uVar5,0);
    puVar1 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__;
    uVar7 = 0;
    if ((uVar4 & 1) == 0) {
      uVar7 = uVar5;
    }
    *(undefined8 *)(lVar10 + 0x18) = uVar7;
    uVar22 = *(uint *)(in_stack_00000040 + 0x18);
    lVar14 = *(long *)puVar1;
    lVar15 = *(long *)(in_stack_00000040 + 0x10);
    *(int *)(in_stack_00000040 + 0x1c) = *(int *)(in_stack_00000040 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_05a7e1a4;
    if (uVar22 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(in_stack_00000040 + 0x18) = uVar22 + 1;
      *(long *)(lVar15 + (long)(int)uVar22 * 8 + 0x20) = lVar10;
    }
    else {
      FUN_03abf904(in_stack_00000040,lVar10,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                              );
    FUN_03abf108(uVar5,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                );
    if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
    lVar10 = *(long *)(in_stack_00000048 + 0x10);
    lVar14 = *(long *)
              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
    ;
    *(int *)(in_stack_00000048 + 0x1c) = *(int *)(in_stack_00000048 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_05a7e1a4;
    uVar17 = *(uint *)(in_stack_00000048 + 0x18);
    if (uVar17 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = uVar17 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar17 * 8 + 0x20) = uVar5;
    }
    else {
      FUN_03abf904(in_stack_00000048,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                              );
    FUN_03a5bcf0(uVar5,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                );
    if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
    lVar10 = *(long *)(in_stack_00000030 + 0x10);
    lVar14 = *(long *)
              Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
    ;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_05a7e1a4;
    uVar17 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar17 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar17 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar17 * 8 + 0x20) = uVar5;
    }
    else {
      FUN_03abf904(in_stack_00000030,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
LAB_05a7dd38:
    if ((lVar13 != 0) && (uVar4 = *(ulong *)(lVar13 + 0x18), 0 < (int)uVar4)) {
      uVar19 = 0;
      do {
        if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_05a7e1a8;
        memcpy(&stack0x00000180,(void *)(lVar13 + uVar19 * 0x48 + 0x20),0x48);
        uVar6 = FUN_04f6ebb4(in_stack_00000180,0);
        if ((uVar6 & 1) != 0) {
          uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
          uVar7 = thunk_FUN_02f6ef30(
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>__ctor__
                                    );
          uVar3 = FUN_04f70018(uVar7,uVar5,uVar3,0);
          goto LAB_05a7e1ec;
        }
        lVar10 = FUN_05a81070(&stack0x00000180,0);
        if ((in_stack_00000048 == 0) ||
           (lVar14 = FUN_03abf644(in_stack_00000048,uVar22,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                 ), lVar14 == 0)) goto LAB_05a7e1a4;
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar16 = *(long *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
        ;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_05a7e1a4;
        uVar17 = *(uint *)(lVar14 + 0x18);
        if (uVar17 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar17 + 1;
          *(long *)(lVar15 + (long)(int)uVar17 * 8 + 0x20) = lVar10;
        }
        else {
          FUN_03abf904(lVar14,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = in_stack_000001c0;
        if (in_stack_000001c0 != 0) {
          if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
          lVar15 = FUN_03abf644(in_stack_00000030,uVar22,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                               );
          if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
            uVar6 = 0;
            uVar12 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
            puVar21 = (undefined8 *)(lVar14 + 0x20);
            do {
              if (uVar12 <= uVar6) goto LAB_05a7e1a8;
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
              if ((lVar10 == 0) || (lVar15 == 0)) goto LAB_05a7e1a4;
              lVar16 = *(long *)(lVar15 + 0x10);
              uVar5 = *(undefined8 *)(lVar10 + 0x10);
              lVar18 = *(long *)puVar8;
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
              uVar12 = (ulong)*(uint *)(lVar14 + 0x18);
              uVar6 = uVar6 + 1;
              puVar21 = puVar21 + 8;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar14 + 0x18));
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != (uVar4 & 0xffffffff));
    }
    if (lVar9 == 0) {
      if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
      FUN_03abf644(in_stack_00000030,uVar22,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                  );
    }
    else {
      if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
      uVar17 = *(uint *)(lVar9 + 0x18);
      lVar13 = FUN_03abf644(in_stack_00000030,uVar22,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                           );
      if (0 < (int)uVar17) {
        uVar4 = 0;
        puVar21 = (undefined8 *)(lVar9 + 0x20);
        do {
          if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_05a7e1a8;
          in_stack_000000b8 = puVar21[1];
          in_stack_000000b0 = *puVar21;
          in_stack_000000c8 = puVar21[3];
          in_stack_000000c0 = puVar21[2];
          in_stack_000000d8 = puVar21[5];
          in_stack_000000d0 = puVar21[4];
          in_stack_000000e8 = puVar21[7];
          in_stack_000000e0 = puVar21[6];
          FUN_05a80edc(&stack0x00000050,&stack0x000000b0);
          if (lVar13 == 0) goto LAB_05a7e1a4;
          lVar10 = *(long *)(lVar13 + 0x10);
          lVar14 = *(long *)puVar8;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_05a7e1a4;
          uVar22 = *(uint *)(lVar13 + 0x18);
          if (uVar22 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar22 + 1;
            memcpy((void *)(lVar10 + (long)(int)uVar22 * 0x58 + 0x20),&stack0x00000050,0x58);
          }
          else {
            uVar3 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
            memcpy(&stack0x000002b0,&stack0x00000050,0x58);
            FUN_03a5c5a4(lVar13,&stack0x000002b0,uVar3);
          }
          uVar4 = uVar4 + 1;
          puVar21 = puVar21 + 8;
        } while (uVar17 != uVar4);
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != (uVar20 & 0xffffffff));
LAB_05a7e088:
  puVar1 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__;
  puVar8 = 
  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<CollectionVirtualizationMethod>__ctor__
  ;
  if (in_stack_00000040 != 0) {
    if (0 < *(int *)(in_stack_00000040 + 0x18)) {
      iVar2 = 0;
      do {
        lVar9 = FUN_03abf644(in_stack_00000040,iVar2,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                            );
        if ((((in_stack_00000048 == 0) ||
             (lVar13 = FUN_03abf644(in_stack_00000048,iVar2,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                   ), lVar13 == 0)) ||
            (lVar13 = FUN_03ac12f8(lVar13,*(undefined8 *)puVar8), in_stack_00000030 == 0)) ||
           ((lVar10 = FUN_03abf644(in_stack_00000030,iVar2,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                                  ), lVar10 == 0 ||
            (uVar3 = FUN_03a5e38c(lVar10,*(undefined8 *)puVar1), lVar9 == 0)))) goto LAB_05a7e1a4;
        *(long *)(lVar9 + 0x28) = lVar13;
        *(undefined8 *)(lVar9 + 0x30) = uVar3;
        if (lVar13 == 0) goto LAB_05a7e1a4;
        uVar22 = *(uint *)(lVar13 + 0x18);
        if (0 < (int)uVar22) {
          uVar17 = 0;
          do {
            if (uVar22 == uVar17) goto LAB_05a7e1a8;
            lVar10 = *(long *)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_05a7e1a4;
            uVar17 = uVar17 + 1;
            *(long *)(lVar10 + 200) = lVar9;
          } while ((uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU)) != uVar17);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(in_stack_00000040 + 0x18));
    }
    FUN_03ac12f8(in_stack_00000040,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ColumnSortingMode>__ctor__
                );
    return;
  }
LAB_05a7e1a4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


