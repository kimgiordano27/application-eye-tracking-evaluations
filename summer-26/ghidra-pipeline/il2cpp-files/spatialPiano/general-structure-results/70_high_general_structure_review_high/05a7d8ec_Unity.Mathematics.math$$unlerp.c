/*
FUNCTION_NAME: Unity.Mathematics.math$$unlerp
ENTRY_POINT: 05a7d8ec
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


void Unity_Mathematics_math__unlerp(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong unaff_x19;
  ulong uVar19;
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
  
code_r0x05a7d8ec:
  do {
    lVar3 = FUN_03abf644(param_1,unaff_w24,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                        );
    if (lVar3 == 0) goto LAB_05a7e1a4;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar14 = *(long *)
              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
    ;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_05a7e1a4;
    uVar22 = *(uint *)(lVar3 + 0x18);
    if (uVar22 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar22 + 1;
      *(long *)(lVar9 + (long)(int)uVar22 * 8 + 0x20) = unaff_x23;
    }
    else {
      FUN_03abf904(lVar3,unaff_x23,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    if (in_stack_000002a0 != 0) {
      if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
      lVar3 = FUN_03abf644(in_stack_00000030,unaff_w24,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                          );
      if (0 < (int)*(ulong *)(in_stack_000002a0 + 0x18)) {
        uVar20 = 0;
        uVar10 = *(ulong *)(in_stack_000002a0 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar20) goto LAB_05a7e1a8;
          FUN_05a80edc(&stack0x000002b0,&stack0x00000220);
          in_stack_000001d8 = *(undefined8 *)(unaff_x29 + 0x40);
          in_stack_000001d0 = *(undefined8 *)(unaff_x29 + 0x38);
          in_stack_000001e8 = *(undefined8 *)(unaff_x29 + 0x50);
          in_stack_000001e0 = *(undefined8 *)(unaff_x29 + 0x48);
          if ((unaff_x23 == 0) || (lVar3 == 0)) goto LAB_05a7e1a4;
          lVar9 = *(long *)(lVar3 + 0x10);
          uVar11 = *(undefined8 *)(unaff_x23 + 0x10);
          lVar14 = *unaff_x28;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_05a7e1a4;
          uVar22 = *(uint *)(lVar3 + 0x18);
          if (uVar22 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar22 * (long)unaff_w27;
            *(uint *)(lVar3 + 0x18) = uVar22 + 1;
            *(undefined8 *)(lVar9 + 0x28) = in_stack_000002b8;
            *(undefined8 *)(lVar9 + 0x20) = in_stack_000002b0;
            *(undefined8 *)(lVar9 + 0x38) = in_stack_000002c8;
            *(undefined8 *)(lVar9 + 0x30) = in_stack_000002c0;
            *(undefined8 *)(lVar9 + 0x48) = in_stack_000002d8;
            *(undefined8 *)(lVar9 + 0x40) = in_stack_000002d0;
            *(undefined8 *)(lVar9 + 0x50) = uVar11;
            *(undefined8 *)(lVar9 + 0x60) = in_stack_000001d8;
            *(undefined8 *)(lVar9 + 0x58) = in_stack_000001d0;
            *(undefined8 *)(lVar9 + 0x70) = in_stack_000001e8;
            *(undefined8 *)(lVar9 + 0x68) = in_stack_000001e0;
          }
          else {
            uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
            *(undefined8 *)(unaff_x29 + 0x40) = in_stack_000001d8;
            *(undefined8 *)(unaff_x29 + 0x38) = in_stack_000001d0;
            *(undefined8 *)(unaff_x29 + 0x50) = in_stack_000001e8;
            *(undefined8 *)(unaff_x29 + 0x48) = in_stack_000001e0;
            FUN_03a5c5a4(lVar3,&stack0x000002b0,uVar11);
          }
          uVar10 = (ulong)*(uint *)(in_stack_000002a0 + 0x18);
          uVar20 = uVar20 + 1;
        } while ((long)uVar20 < (long)(int)*(uint *)(in_stack_000002a0 + 0x18));
      }
    }
    puVar8 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__;
    unaff_x19 = unaff_x19 + 1;
    if (unaff_x19 == in_stack_00000038) {
      if ((in_stack_00000020[1] == 0) ||
         (uVar20 = *(ulong *)(in_stack_00000020[1] + 0x18), (int)uVar20 < 1)) goto LAB_05a7e088;
      uVar10 = 0;
      break;
    }
    lVar3 = *in_stack_00000020;
    if (lVar3 == 0) goto LAB_05a7e1a4;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x19) goto LAB_05a7e1a8;
    memcpy(&stack0x00000260,(void *)(lVar3 + unaff_x19 * 0x48 + 0x20),0x48);
    uVar20 = FUN_04f6ebb4(in_stack_00000260,0);
    if ((uVar20 & 1) != 0) {
      uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
      puVar8 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>__ctor__;
      goto LAB_05a7e280;
    }
    if (in_stack_00000260 == 0) goto LAB_05a7e1a4;
    iVar2 = FUN_04f73d7c(in_stack_00000260,0x2f,0);
    if (iVar2 == -1) {
      uVar11 = 0;
      lVar3 = in_stack_00000260;
    }
    else {
      uVar11 = FUN_04f71378(in_stack_00000260,0,iVar2,0);
      lVar3 = FUN_04f73508(in_stack_00000260,iVar2 + 1,0);
      uVar20 = FUN_04f6ebb4(lVar3,0);
      if ((uVar20 & 1) != 0) {
        uVar11 = thunk_FUN_02f6ef30(
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_NestedInteractionKind>__ctor__
                                   );
        uVar5 = thunk_FUN_02f6ef30(
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_TouchScrollBehavior>__ctor__
                                  );
        uVar11 = FUN_04f6f6b4(uVar11,in_stack_00000260,uVar5,0);
        goto LAB_05a7e1ec;
      }
    }
    if (unaff_x26 == 0) goto LAB_05a7e1a4;
    param_1 = in_stack_00000048;
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      unaff_w24 = 0;
      do {
        lVar9 = FUN_03abf644(unaff_x26,unaff_w24,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                            );
        if (lVar9 == 0) goto LAB_05a7e1a4;
        iVar2 = FUN_04f6c698(*(undefined8 *)(lVar9 + 0x10),uVar11,3,0);
        if (iVar2 == 0) {
          lVar9 = FUN_03abf644(unaff_x26,unaff_w24,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                              );
          if (lVar9 != 0) {
            unaff_x23 = FUN_05a81070(&stack0x00000260,lVar3);
            if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
            goto code_r0x05a7d8ec;
          }
          break;
        }
        unaff_w24 = unaff_w24 + 1;
      } while ((int)unaff_w24 < *(int *)(unaff_x26 + 0x18));
    }
    lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
    Unity_Mathematics_math__int2();
    *(undefined8 *)(lVar9 + 0x10) = uVar11;
    unaff_w24 = *(uint *)(unaff_x26 + 0x18);
    lVar14 = *(long *)(unaff_x26 + 0x10);
    lVar12 = *(long *)
              Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__;
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_05a7e1a4;
    if (unaff_w24 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(in_stack_00000040 + 0x18) = unaff_w24 + 1;
      *(long *)(lVar14 + (long)(int)unaff_w24 * 8 + 0x20) = lVar9;
    }
    else {
      FUN_03abf904(in_stack_00000040,lVar9,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                               );
    FUN_03abf108(uVar11,*(undefined8 *)
                         Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                );
    if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
    lVar9 = *(long *)(in_stack_00000048 + 0x10);
    lVar14 = *(long *)
              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
    ;
    *(int *)(in_stack_00000048 + 0x1c) = *(int *)(in_stack_00000048 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_05a7e1a4;
    uVar22 = *(uint *)(in_stack_00000048 + 0x18);
    if (uVar22 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = uVar22 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar22 * 8 + 0x20) = uVar11;
    }
    else {
      FUN_03abf904(in_stack_00000048,uVar11,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                               );
    FUN_03a5bcf0(uVar11,*(undefined8 *)
                         Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                );
    if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
    lVar9 = *(long *)(in_stack_00000030 + 0x10);
    lVar14 = *(long *)
              Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
    ;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_05a7e1a4;
    uVar22 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar22 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar22 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar22 * 8 + 0x20) = uVar11;
    }
    else {
      FUN_03abf904(in_stack_00000030,uVar11,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    unaff_x23 = FUN_05a81070(&stack0x00000260,lVar3);
    unaff_x26 = in_stack_00000040;
  } while( true );
  do {
    lVar3 = in_stack_00000020[1];
    if (lVar3 == 0) goto LAB_05a7e1a4;
    if (*(uint *)(lVar3 + 0x18) <= uVar10) {
LAB_05a7e1a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar3 = lVar3 + uVar10 * 0x20;
    uVar11 = *(undefined8 *)(lVar3 + 0x20);
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    lVar9 = *(long *)(lVar3 + 0x30);
    lVar3 = *(long *)(lVar3 + 0x38);
    uVar4 = FUN_04f6ebb4(uVar11,0);
    if ((uVar4 & 1) != 0) {
      uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
      puVar8 = 
      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Columns_StretchMode>__ctor__;
LAB_05a7e280:
      uVar5 = thunk_FUN_02f6ef30(puVar8);
      uVar11 = FUN_04f65e2c(uVar5,uVar11,0);
LAB_05a7e1ec:
      thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
      uVar5 = thunk_FUN_02f45270();
      FUN_050d5404(uVar5,uVar11,0);
      uVar11 = thunk_FUN_02f6ef30(
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>__ctor__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar5,uVar11);
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
        iVar2 = FUN_04f6c698(*(undefined8 *)(lVar14 + 0x10),uVar11,3,0);
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
    *(undefined8 *)(lVar14 + 0x10) = uVar11;
    uVar4 = FUN_04f6ebb4(uVar5,0);
    puVar1 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__;
    uVar7 = 0;
    if ((uVar4 & 1) == 0) {
      uVar7 = uVar5;
    }
    *(undefined8 *)(lVar14 + 0x18) = uVar7;
    uVar22 = *(uint *)(unaff_x26 + 0x18);
    lVar12 = *(long *)puVar1;
    lVar15 = *(long *)(unaff_x26 + 0x10);
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_05a7e1a4;
    if (uVar22 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(in_stack_00000040 + 0x18) = uVar22 + 1;
      *(long *)(lVar15 + (long)(int)uVar22 * 8 + 0x20) = lVar14;
    }
    else {
      FUN_03abf904(in_stack_00000040,lVar14,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                              );
    FUN_03abf108(uVar5,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                );
    if (in_stack_00000048 == 0) goto LAB_05a7e1a4;
    lVar14 = *(long *)(in_stack_00000048 + 0x10);
    lVar12 = *(long *)
              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
    ;
    *(int *)(in_stack_00000048 + 0x1c) = *(int *)(in_stack_00000048 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_05a7e1a4;
    uVar17 = *(uint *)(in_stack_00000048 + 0x18);
    if (uVar17 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = uVar17 + 1;
      *(undefined8 *)(lVar14 + (long)(int)uVar17 * 8 + 0x20) = uVar5;
    }
    else {
      FUN_03abf904(in_stack_00000048,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                              );
    FUN_03a5bcf0(uVar5,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                );
    if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
    lVar14 = *(long *)(in_stack_00000030 + 0x10);
    lVar12 = *(long *)
              Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
    ;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_05a7e1a4;
    uVar17 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar17 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar17 + 1;
      *(undefined8 *)(lVar14 + (long)(int)uVar17 * 8 + 0x20) = uVar5;
      unaff_x26 = in_stack_00000040;
    }
    else {
      FUN_03abf904(in_stack_00000030,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      unaff_x26 = in_stack_00000040;
    }
LAB_05a7dd38:
    if ((lVar9 != 0) && (uVar4 = *(ulong *)(lVar9 + 0x18), 0 < (int)uVar4)) {
      uVar19 = 0;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_05a7e1a8;
        memcpy(&stack0x00000180,(void *)(lVar9 + uVar19 * 0x48 + 0x20),0x48);
        uVar6 = FUN_04f6ebb4(in_stack_00000180,0);
        if ((uVar6 & 1) != 0) {
          uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
          uVar7 = thunk_FUN_02f6ef30(
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>__ctor__
                                    );
          uVar11 = FUN_04f70018(uVar7,uVar5,uVar11,0);
          goto LAB_05a7e1ec;
        }
        lVar14 = FUN_05a81070(&stack0x00000180,0);
        if ((in_stack_00000048 == 0) ||
           (lVar12 = FUN_03abf644(in_stack_00000048,uVar22,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                 ), lVar12 == 0)) goto LAB_05a7e1a4;
        lVar15 = *(long *)(lVar12 + 0x10);
        lVar16 = *(long *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
        ;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_05a7e1a4;
        uVar17 = *(uint *)(lVar12 + 0x18);
        if (uVar17 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar17 + 1;
          *(long *)(lVar15 + (long)(int)uVar17 * 8 + 0x20) = lVar14;
        }
        else {
          FUN_03abf904(lVar12,lVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar12 = in_stack_000001c0;
        if (in_stack_000001c0 != 0) {
          if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
          lVar15 = FUN_03abf644(in_stack_00000030,uVar22,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                               );
          if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
            uVar6 = 0;
            uVar13 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
            puVar21 = (undefined8 *)(lVar12 + 0x20);
            do {
              if (uVar13 <= uVar6) goto LAB_05a7e1a8;
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
              if ((lVar14 == 0) || (lVar15 == 0)) goto LAB_05a7e1a4;
              lVar16 = *(long *)(lVar15 + 0x10);
              uVar5 = *(undefined8 *)(lVar14 + 0x10);
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
              uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
              uVar6 = uVar6 + 1;
              puVar21 = puVar21 + 8;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar12 + 0x18));
          }
        }
        uVar19 = uVar19 + 1;
        unaff_x26 = in_stack_00000040;
      } while (uVar19 != (uVar4 & 0xffffffff));
    }
    if (lVar3 == 0) {
      if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
      FUN_03abf644(in_stack_00000030,uVar22,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                  );
    }
    else {
      if (in_stack_00000030 == 0) goto LAB_05a7e1a4;
      uVar17 = *(uint *)(lVar3 + 0x18);
      lVar9 = FUN_03abf644(in_stack_00000030,uVar22,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                          );
      if (0 < (int)uVar17) {
        uVar4 = 0;
        puVar21 = (undefined8 *)(lVar3 + 0x20);
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_05a7e1a8;
          in_stack_000000b8 = puVar21[1];
          in_stack_000000b0 = *puVar21;
          in_stack_000000c8 = puVar21[3];
          in_stack_000000c0 = puVar21[2];
          in_stack_000000d8 = puVar21[5];
          in_stack_000000d0 = puVar21[4];
          in_stack_000000e8 = puVar21[7];
          in_stack_000000e0 = puVar21[6];
          FUN_05a80edc(&stack0x00000050,&stack0x000000b0);
          if (lVar9 == 0) goto LAB_05a7e1a4;
          lVar14 = *(long *)(lVar9 + 0x10);
          lVar12 = *(long *)puVar8;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_05a7e1a4;
          uVar22 = *(uint *)(lVar9 + 0x18);
          if (uVar22 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar22 + 1;
            memcpy((void *)(lVar14 + (long)(int)uVar22 * 0x58 + 0x20),&stack0x00000050,0x58);
          }
          else {
            uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
            memcpy(&stack0x000002b0,&stack0x00000050,0x58);
            FUN_03a5c5a4(lVar9,&stack0x000002b0,uVar11);
          }
          uVar4 = uVar4 + 1;
          puVar21 = puVar21 + 8;
        } while (uVar17 != uVar4);
      }
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != (uVar20 & 0xffffffff));
LAB_05a7e088:
  puVar1 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__;
  puVar8 = 
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
      lVar3 = FUN_03abf644(unaff_x26,iVar2,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                          );
      if ((((in_stack_00000048 == 0) ||
           (lVar9 = FUN_03abf644(in_stack_00000048,iVar2,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                ), lVar9 == 0)) ||
          (lVar9 = FUN_03ac12f8(lVar9,*(undefined8 *)puVar8), in_stack_00000030 == 0)) ||
         ((lVar14 = FUN_03abf644(in_stack_00000030,iVar2,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                                ), lVar14 == 0 ||
          (uVar11 = FUN_03a5e38c(lVar14,*(undefined8 *)puVar1), lVar3 == 0)))) goto LAB_05a7e1a4;
      *(long *)(lVar3 + 0x28) = lVar9;
      *(undefined8 *)(lVar3 + 0x30) = uVar11;
      if (lVar9 == 0) goto LAB_05a7e1a4;
      uVar22 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar22) {
        uVar17 = 0;
        do {
          if (uVar22 == uVar17) goto LAB_05a7e1a8;
          lVar14 = *(long *)(lVar9 + (long)(int)uVar17 * 8 + 0x20);
          if (lVar14 == 0) goto LAB_05a7e1a4;
          uVar17 = uVar17 + 1;
          *(long *)(lVar14 + 200) = lVar3;
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


