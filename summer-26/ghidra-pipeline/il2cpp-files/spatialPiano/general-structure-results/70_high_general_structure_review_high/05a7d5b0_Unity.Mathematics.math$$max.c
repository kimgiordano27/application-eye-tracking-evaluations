/*
FUNCTION_NAME: Unity.Mathematics.math$$max
ENTRY_POINT: 05a7d5b0
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


void Unity_Mathematics_math__max(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined8 *unaff_x19;
  ulong uVar21;
  undefined8 *unaff_x21;
  undefined8 *puVar22;
  undefined8 *unaff_x22;
  uint uVar23;
  long unaff_x26;
  long *in_stack_00000020;
  long lStack0000000000000048;
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
  
  lStack0000000000000048 = param_1;
  FUN_03abf108(param_1,*unaff_x21);
  lVar3 = thunk_FUN_02f45270(*unaff_x22);
  FUN_03abf108(lVar3,*unaff_x19);
  puVar10 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__;
  if ((*in_stack_00000020 != 0) && (uVar11 = *(ulong *)(*in_stack_00000020 + 0x18), 0 < (int)uVar11)
     ) {
    uVar21 = 0;
    do {
      lVar12 = *in_stack_00000020;
      if (lVar12 == 0) goto LAB_05a7e1a4;
      if (*(uint *)(lVar12 + 0x18) <= uVar21) goto LAB_05a7e1a8;
      memcpy(&stack0x00000260,(void *)(lVar12 + uVar21 * 0x48 + 0x20),0x48);
      uVar4 = FUN_04f6ebb4(in_stack_00000260,0);
      if ((uVar4 & 1) != 0) {
        uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
        puVar10 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>__ctor__;
        goto LAB_05a7e280;
      }
      if (in_stack_00000260 == 0) goto LAB_05a7e1a4;
      iVar2 = FUN_04f73d7c(in_stack_00000260,0x2f,0);
      if (iVar2 == -1) {
        uVar5 = 0;
        lVar12 = in_stack_00000260;
      }
      else {
        uVar5 = FUN_04f71378(in_stack_00000260,0,iVar2,0);
        lVar12 = FUN_04f73508(in_stack_00000260,iVar2 + 1,0);
        uVar4 = FUN_04f6ebb4(lVar12,0);
        if ((uVar4 & 1) != 0) {
          uVar5 = thunk_FUN_02f6ef30(
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_NestedInteractionKind>__ctor__
                                    );
          uVar7 = thunk_FUN_02f6ef30(
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_TouchScrollBehavior>__ctor__
                                    );
          uVar5 = FUN_04f6f6b4(uVar5,in_stack_00000260,uVar7,0);
          goto LAB_05a7e1ec;
        }
      }
      if (unaff_x26 == 0) goto LAB_05a7e1a4;
      if (0 < *(int *)(unaff_x26 + 0x18)) {
        uVar23 = 0;
        do {
          lVar6 = FUN_03abf644(unaff_x26,uVar23,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                              );
          if (lVar6 == 0) goto LAB_05a7e1a4;
          iVar2 = FUN_04f6c698(*(undefined8 *)(lVar6 + 0x10),uVar5,3,0);
          if (iVar2 == 0) {
            lVar6 = FUN_03abf644(unaff_x26,uVar23,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                );
            if (lVar6 != 0) {
              lVar12 = FUN_05a81070(&stack0x00000260,lVar12);
              if (lStack0000000000000048 == 0) goto LAB_05a7e1a4;
              goto Unity_Mathematics_math__unlerp;
            }
            break;
          }
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < *(int *)(unaff_x26 + 0x18));
      }
      lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
      Unity_Mathematics_math__int2();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
      uVar23 = *(uint *)(unaff_x26 + 0x18);
      lVar13 = *(long *)(unaff_x26 + 0x10);
      lVar16 = *(long *)
                Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__
      ;
      *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_05a7e1a4;
      if (uVar23 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(unaff_x26 + 0x18) = uVar23 + 1;
        *(long *)(lVar13 + (long)(int)uVar23 * 8 + 0x20) = lVar6;
      }
      else {
        FUN_03abf904(unaff_x26,lVar6,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                                );
      FUN_03abf108(uVar5,*(undefined8 *)
                          Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                  );
      if (lStack0000000000000048 == 0) goto LAB_05a7e1a4;
      lVar6 = *(long *)(lStack0000000000000048 + 0x10);
      lVar13 = *(long *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
      ;
      *(int *)(lStack0000000000000048 + 0x1c) = *(int *)(lStack0000000000000048 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_05a7e1a4;
      uVar19 = *(uint *)(lStack0000000000000048 + 0x18);
      if (uVar19 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lStack0000000000000048 + 0x18) = uVar19 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar19 * 8 + 0x20) = uVar5;
      }
      else {
        FUN_03abf904(lStack0000000000000048,uVar5,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                                );
      FUN_03a5bcf0(uVar5,*(undefined8 *)
                          Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                  );
      if (lVar3 == 0) goto LAB_05a7e1a4;
      lVar6 = *(long *)(lVar3 + 0x10);
      lVar13 = *(long *)
                Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
      ;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_05a7e1a4;
      uVar19 = *(uint *)(lVar3 + 0x18);
      if (uVar19 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar19 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar19 * 8 + 0x20) = uVar5;
      }
      else {
        FUN_03abf904(lVar3,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar12 = FUN_05a81070(&stack0x00000260,lVar12);
Unity_Mathematics_math__unlerp:
      lVar6 = FUN_03abf644(lStack0000000000000048,uVar23,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                          );
      if (lVar6 == 0) goto LAB_05a7e1a4;
      lVar13 = *(long *)(lVar6 + 0x10);
      lVar16 = *(long *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_05a7e1a4;
      uVar19 = *(uint *)(lVar6 + 0x18);
      if (uVar19 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar19 + 1;
        *(long *)(lVar13 + (long)(int)uVar19 * 8 + 0x20) = lVar12;
      }
      else {
        FUN_03abf904(lVar6,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (in_stack_000002a0 != 0) {
        if (lVar3 == 0) goto LAB_05a7e1a4;
        lVar6 = FUN_03abf644(lVar3,uVar23,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                            );
        if (0 < (int)*(ulong *)(in_stack_000002a0 + 0x18)) {
          uVar4 = 0;
          uVar14 = *(ulong *)(in_stack_000002a0 + 0x18) & 0xffffffff;
          do {
            if (uVar14 <= uVar4) goto LAB_05a7e1a8;
            FUN_05a80edc(&stack0x000002b0,&stack0x00000220);
            in_stack_000001d0 = in_stack_000002e8;
            in_stack_000001d8 = in_stack_000002f0;
            in_stack_000001e0 = in_stack_000002f8;
            in_stack_000001e8 = in_stack_00000300;
            if ((lVar12 == 0) || (lVar6 == 0)) goto LAB_05a7e1a4;
            lVar13 = *(long *)(lVar6 + 0x10);
            uVar5 = *(undefined8 *)(lVar12 + 0x10);
            lVar16 = *(long *)puVar10;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_05a7e1a4;
            uVar23 = *(uint *)(lVar6 + 0x18);
            if (uVar23 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)uVar23 * 0x58;
              *(uint *)(lVar6 + 0x18) = uVar23 + 1;
              *(undefined8 *)(lVar13 + 0x28) = in_stack_000002b8;
              *(undefined8 *)(lVar13 + 0x20) = in_stack_000002b0;
              *(undefined8 *)(lVar13 + 0x38) = in_stack_000002c8;
              *(undefined8 *)(lVar13 + 0x30) = in_stack_000002c0;
              *(undefined8 *)(lVar13 + 0x48) = in_stack_000002d8;
              *(undefined8 *)(lVar13 + 0x40) = in_stack_000002d0;
              *(undefined8 *)(lVar13 + 0x50) = uVar5;
              *(undefined8 *)(lVar13 + 0x60) = in_stack_000002f0;
              *(undefined8 *)(lVar13 + 0x58) = in_stack_000002e8;
              *(undefined8 *)(lVar13 + 0x70) = in_stack_00000300;
              *(undefined8 *)(lVar13 + 0x68) = in_stack_000002f8;
            }
            else {
              FUN_03a5c5a4(lVar6,&stack0x000002b0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            uVar14 = (ulong)*(uint *)(in_stack_000002a0 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(in_stack_000002a0 + 0x18));
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != (uVar11 & 0xffffffff));
  }
  puVar10 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__;
  if ((in_stack_00000020[1] != 0) &&
     (uVar11 = *(ulong *)(in_stack_00000020[1] + 0x18), 0 < (int)uVar11)) {
    uVar21 = 0;
    do {
      lVar12 = in_stack_00000020[1];
      if (lVar12 == 0) goto LAB_05a7e1a4;
      if (*(uint *)(lVar12 + 0x18) <= uVar21) {
LAB_05a7e1a8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar12 = lVar12 + uVar21 * 0x20;
      uVar5 = *(undefined8 *)(lVar12 + 0x20);
      uVar7 = *(undefined8 *)(lVar12 + 0x28);
      lVar6 = *(long *)(lVar12 + 0x30);
      lVar12 = *(long *)(lVar12 + 0x38);
      uVar4 = FUN_04f6ebb4(uVar5,0);
      if ((uVar4 & 1) != 0) {
        uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
        puVar10 = 
        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Columns_StretchMode>__ctor__;
LAB_05a7e280:
        uVar7 = thunk_FUN_02f6ef30(puVar10);
        uVar5 = FUN_04f65e2c(uVar7,uVar5,0);
LAB_05a7e1ec:
        thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
        uVar7 = thunk_FUN_02f45270();
        FUN_050d5404(uVar7,uVar5,0);
        uVar5 = thunk_FUN_02f6ef30(
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>__ctor__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar7,uVar5);
      }
      if (unaff_x26 == 0) goto LAB_05a7e1a4;
      if (0 < *(int *)(unaff_x26 + 0x18)) {
        uVar23 = 0;
        do {
          lVar13 = FUN_03abf644(unaff_x26,uVar23,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                               );
          if (lVar13 == 0) goto LAB_05a7e1a4;
          iVar2 = FUN_04f6c698(*(undefined8 *)(lVar13 + 0x10),uVar5,3,0);
          if (iVar2 == 0) {
            lVar13 = FUN_03abf644(unaff_x26,uVar23,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                 );
            if (lVar13 != 0) goto LAB_05a7dd38;
            break;
          }
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < *(int *)(unaff_x26 + 0x18));
      }
      lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
      Unity_Mathematics_math__int2();
      *(undefined8 *)(lVar13 + 0x10) = uVar5;
      uVar4 = FUN_04f6ebb4(uVar7,0);
      puVar1 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__;
      uVar9 = 0;
      if ((uVar4 & 1) == 0) {
        uVar9 = uVar7;
      }
      *(undefined8 *)(lVar13 + 0x18) = uVar9;
      uVar23 = *(uint *)(unaff_x26 + 0x18);
      lVar16 = *(long *)puVar1;
      lVar17 = *(long *)(unaff_x26 + 0x10);
      *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
      if (lVar17 == 0) goto LAB_05a7e1a4;
      if (uVar23 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(unaff_x26 + 0x18) = uVar23 + 1;
        *(long *)(lVar17 + (long)(int)uVar23 * 8 + 0x20) = lVar13;
      }
      else {
        FUN_03abf904(unaff_x26,lVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                                );
      FUN_03abf108(uVar7,*(undefined8 *)
                          Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                  );
      if (lStack0000000000000048 == 0) goto LAB_05a7e1a4;
      lVar13 = *(long *)(lStack0000000000000048 + 0x10);
      lVar16 = *(long *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
      ;
      *(int *)(lStack0000000000000048 + 0x1c) = *(int *)(lStack0000000000000048 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_05a7e1a4;
      uVar19 = *(uint *)(lStack0000000000000048 + 0x18);
      if (uVar19 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lStack0000000000000048 + 0x18) = uVar19 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar19 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_03abf904(lStack0000000000000048,uVar7,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                                );
      FUN_03a5bcf0(uVar7,*(undefined8 *)
                          Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                  );
      if (lVar3 == 0) goto LAB_05a7e1a4;
      lVar13 = *(long *)(lVar3 + 0x10);
      lVar16 = *(long *)
                Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
      ;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_05a7e1a4;
      uVar19 = *(uint *)(lVar3 + 0x18);
      if (uVar19 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar19 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar19 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_03abf904(lVar3,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
        ;
      }
LAB_05a7dd38:
      if ((lVar6 != 0) && (uVar4 = *(ulong *)(lVar6 + 0x18), 0 < (int)uVar4)) {
        uVar14 = 0;
        do {
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_05a7e1a8;
          memcpy(&stack0x00000180,(void *)(lVar6 + uVar14 * 0x48 + 0x20),0x48);
          uVar8 = FUN_04f6ebb4(in_stack_00000180,0);
          if ((uVar8 & 1) != 0) {
            uVar7 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
            uVar9 = thunk_FUN_02f6ef30(
                                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>__ctor__
                                      );
            uVar5 = FUN_04f70018(uVar9,uVar7,uVar5,0);
            goto LAB_05a7e1ec;
          }
          lVar13 = FUN_05a81070(&stack0x00000180,0);
          if ((lStack0000000000000048 == 0) ||
             (lVar16 = FUN_03abf644(lStack0000000000000048,uVar23,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                   ), lVar16 == 0)) goto LAB_05a7e1a4;
          lVar17 = *(long *)(lVar16 + 0x10);
          lVar18 = *(long *)
                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
          ;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_05a7e1a4;
          uVar19 = *(uint *)(lVar16 + 0x18);
          if (uVar19 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar19 + 1;
            *(long *)(lVar17 + (long)(int)uVar19 * 8 + 0x20) = lVar13;
          }
          else {
            FUN_03abf904(lVar16,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          lVar16 = in_stack_000001c0;
          if (in_stack_000001c0 != 0) {
            if (lVar3 == 0) goto LAB_05a7e1a4;
            lVar17 = FUN_03abf644(lVar3,uVar23,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                                 );
            if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
              uVar8 = 0;
              uVar15 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
              puVar22 = (undefined8 *)(lVar16 + 0x20);
              do {
                if (uVar15 <= uVar8) goto LAB_05a7e1a8;
                in_stack_00000148 = puVar22[1];
                in_stack_00000140 = *puVar22;
                in_stack_00000158 = puVar22[3];
                in_stack_00000150 = puVar22[2];
                in_stack_00000168 = puVar22[5];
                in_stack_00000160 = puVar22[4];
                in_stack_00000178 = puVar22[7];
                in_stack_00000170 = puVar22[6];
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
                if ((lVar13 == 0) || (lVar17 == 0)) goto LAB_05a7e1a4;
                lVar18 = *(long *)(lVar17 + 0x10);
                uVar7 = *(undefined8 *)(lVar13 + 0x10);
                lVar20 = *(long *)puVar10;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar18 == 0) goto LAB_05a7e1a4;
                uVar19 = *(uint *)(lVar17 + 0x18);
                if (uVar19 < *(uint *)(lVar18 + 0x18)) {
                  lVar18 = lVar18 + (long)(int)uVar19 * 0x58;
                  *(uint *)(lVar17 + 0x18) = uVar19 + 1;
                  *(undefined8 *)(lVar18 + 0x28) = in_stack_000002b8;
                  *(undefined8 *)(lVar18 + 0x20) = in_stack_000002b0;
                  *(undefined8 *)(lVar18 + 0x38) = in_stack_000002c8;
                  *(undefined8 *)(lVar18 + 0x30) = in_stack_000002c0;
                  *(undefined8 *)(lVar18 + 0x48) = in_stack_000002d8;
                  *(undefined8 *)(lVar18 + 0x40) = in_stack_000002d0;
                  *(undefined8 *)(lVar18 + 0x50) = uVar7;
                  *(undefined8 *)(lVar18 + 0x60) = in_stack_000002f0;
                  *(undefined8 *)(lVar18 + 0x58) = in_stack_000002e8;
                  *(undefined8 *)(lVar18 + 0x70) = in_stack_00000300;
                  *(undefined8 *)(lVar18 + 0x68) = in_stack_000002f8;
                }
                else {
                  FUN_03a5c5a4(lVar17,&stack0x000002b0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                uVar15 = (ulong)*(uint *)(lVar16 + 0x18);
                uVar8 = uVar8 + 1;
                puVar22 = puVar22 + 8;
              } while ((long)uVar8 < (long)(int)*(uint *)(lVar16 + 0x18));
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != (uVar4 & 0xffffffff));
      }
      if (lVar12 == 0) {
        if (lVar3 == 0) goto LAB_05a7e1a4;
        FUN_03abf644(lVar3,uVar23,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                    );
      }
      else {
        if (lVar3 == 0) goto LAB_05a7e1a4;
        uVar19 = *(uint *)(lVar12 + 0x18);
        lVar6 = FUN_03abf644(lVar3,uVar23,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                            );
        if (0 < (int)uVar19) {
          uVar4 = 0;
          puVar22 = (undefined8 *)(lVar12 + 0x20);
          do {
            if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_05a7e1a8;
            in_stack_000000b8 = puVar22[1];
            in_stack_000000b0 = *puVar22;
            in_stack_000000c8 = puVar22[3];
            in_stack_000000c0 = puVar22[2];
            in_stack_000000d8 = puVar22[5];
            in_stack_000000d0 = puVar22[4];
            in_stack_000000e8 = puVar22[7];
            in_stack_000000e0 = puVar22[6];
            FUN_05a80edc(&stack0x00000050,&stack0x000000b0);
            if (lVar6 == 0) goto LAB_05a7e1a4;
            lVar13 = *(long *)(lVar6 + 0x10);
            lVar16 = *(long *)puVar10;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_05a7e1a4;
            uVar23 = *(uint *)(lVar6 + 0x18);
            if (uVar23 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar23 + 1;
              memcpy((void *)(lVar13 + (long)(int)uVar23 * 0x58 + 0x20),&stack0x00000050,0x58);
            }
            else {
              uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
              memcpy(&stack0x000002b0,&stack0x00000050,0x58);
              FUN_03a5c5a4(lVar6,&stack0x000002b0,uVar5);
            }
            uVar4 = uVar4 + 1;
            puVar22 = puVar22 + 8;
          } while (uVar19 != uVar4);
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != (uVar11 & 0xffffffff));
  }
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
      if ((((lStack0000000000000048 == 0) ||
           (lVar6 = FUN_03abf644(lStack0000000000000048,iVar2,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                ), lVar6 == 0)) ||
          (lVar6 = FUN_03ac12f8(lVar6,*(undefined8 *)puVar10), lVar3 == 0)) ||
         ((lVar13 = FUN_03abf644(lVar3,iVar2,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                                ), lVar13 == 0 ||
          (uVar5 = FUN_03a5e38c(lVar13,*(undefined8 *)puVar1), lVar12 == 0)))) goto LAB_05a7e1a4;
      *(long *)(lVar12 + 0x28) = lVar6;
      *(undefined8 *)(lVar12 + 0x30) = uVar5;
      if (lVar6 == 0) goto LAB_05a7e1a4;
      uVar23 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar23) {
        uVar19 = 0;
        do {
          if (uVar23 == uVar19) goto LAB_05a7e1a8;
          lVar13 = *(long *)(lVar6 + (long)(int)uVar19 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_05a7e1a4;
          uVar19 = uVar19 + 1;
          *(long *)(lVar13 + 200) = lVar12;
        } while ((uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU)) != uVar19);
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


