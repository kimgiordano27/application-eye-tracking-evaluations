/*
FUNCTION_NAME: Unity.Mathematics.math$$max
ENTRY_POINT: 05a7d558
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


void Unity_Mathematics_math__max(undefined1 param_1 [16])

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  undefined8 *unaff_x19;
  ulong uVar23;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *plVar24;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  uint uVar25;
  long *in_stack_00000020;
  long lStack0000000000000050;
  long lStack00000000000000b0;
  long lStack00000000000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long lStack00000000000000e0;
  long lStack00000000000000e8;
  long lStack00000000000000f0;
  long lStack0000000000000100;
  long lStack0000000000000110;
  long lStack0000000000000120;
  long lStack0000000000000130;
  long lStack0000000000000140;
  long lStack0000000000000148;
  long lStack0000000000000150;
  long lStack0000000000000158;
  long lStack0000000000000160;
  long lStack0000000000000168;
  long lStack0000000000000170;
  long lStack0000000000000178;
  long lStack0000000000000180;
  long lStack0000000000000190;
  long lStack00000000000001a0;
  long lStack00000000000001b0;
  long in_stack_000001c0;
  long lStack00000000000001d0;
  long lStack00000000000001e0;
  long in_stack_000002a0;
  long in_stack_000002b0;
  undefined8 in_stack_000002b8;
  long in_stack_000002c0;
  undefined8 in_stack_000002c8;
  long in_stack_000002d0;
  undefined8 in_stack_000002d8;
  long in_stack_000002e8;
  undefined8 in_stack_000002f0;
  long in_stack_000002f8;
  undefined8 in_stack_00000300;
  
  lStack00000000000000b8 = param_1._8_8_;
  lVar17 = param_1._0_8_;
  lStack0000000000000050 = lVar17;
  lStack00000000000000b0 = lVar17;
  lStack00000000000000e0 = lVar17;
  lStack00000000000000e8 = lStack00000000000000b8;
  lStack00000000000000f0 = lVar17;
  lStack0000000000000100 = lVar17;
  lStack0000000000000110 = lVar17;
  lStack0000000000000120 = lVar17;
  lStack0000000000000130 = lVar17;
  lStack0000000000000140 = lVar17;
  lStack0000000000000148 = lStack00000000000000b8;
  lStack0000000000000150 = lVar17;
  lStack0000000000000158 = lStack00000000000000b8;
  lStack0000000000000160 = lVar17;
  lStack0000000000000168 = lStack00000000000000b8;
  lStack0000000000000170 = lVar17;
  lStack0000000000000178 = lStack00000000000000b8;
  lStack0000000000000180 = lVar17;
  lStack0000000000000190 = lVar17;
  lStack00000000000001a0 = lVar17;
  lStack00000000000001b0 = lVar17;
  lStack00000000000001d0 = lVar17;
  lStack00000000000001e0 = lVar17;
  lVar3 = thunk_FUN_02f45270();
  FUN_03abf108(lVar3,*unaff_x20);
  lVar4 = thunk_FUN_02f45270(*unaff_x23);
  FUN_03abf108(lVar4,*unaff_x21);
  lVar5 = thunk_FUN_02f45270(*unaff_x22);
  FUN_03abf108(lVar5,*unaff_x19);
  puVar12 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__;
  if ((*in_stack_00000020 != 0) && (uVar13 = *(ulong *)(*in_stack_00000020 + 0x18), 0 < (int)uVar13)
     ) {
    uVar23 = 0;
    do {
      lVar14 = *in_stack_00000020;
      if (lVar14 == 0) goto LAB_05a7e1a4;
      if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_05a7e1a8;
      memcpy(&stack0x00000260,(void *)(lVar14 + uVar23 * 0x48 + 0x20),0x48);
      uVar6 = FUN_04f6ebb4(lVar17,0);
      if ((uVar6 & 1) != 0) {
        uVar7 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
        puVar12 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>__ctor__;
        goto LAB_05a7e280;
      }
      if (lVar17 == 0) goto LAB_05a7e1a4;
      iVar2 = FUN_04f73d7c(lVar17,0x2f,0);
      if (iVar2 == -1) {
        uVar7 = 0;
        lVar14 = lVar17;
      }
      else {
        uVar7 = FUN_04f71378(lVar17,0,iVar2,0);
        lVar14 = FUN_04f73508(lVar17,iVar2 + 1,0);
        uVar6 = FUN_04f6ebb4(lVar14,0);
        if ((uVar6 & 1) != 0) {
          uVar7 = thunk_FUN_02f6ef30(
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_NestedInteractionKind>__ctor__
                                    );
          uVar9 = thunk_FUN_02f6ef30(
                                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_TouchScrollBehavior>__ctor__
                                    );
          uVar7 = FUN_04f6f6b4(uVar7,lVar17,uVar9,0);
          goto LAB_05a7e1ec;
        }
      }
      if (lVar3 == 0) goto LAB_05a7e1a4;
      if (0 < *(int *)(lVar3 + 0x18)) {
        uVar25 = 0;
        do {
          lVar8 = FUN_03abf644(lVar3,uVar25,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                              );
          if (lVar8 == 0) goto LAB_05a7e1a4;
          iVar2 = FUN_04f6c698(*(undefined8 *)(lVar8 + 0x10),uVar7,3,0);
          if (iVar2 == 0) {
            lVar8 = FUN_03abf644(lVar3,uVar25,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                );
            if (lVar8 != 0) {
              lVar14 = FUN_05a81070(&stack0x00000260,lVar14);
              if (lVar4 == 0) goto LAB_05a7e1a4;
              goto Unity_Mathematics_math__unlerp;
            }
            break;
          }
          uVar25 = uVar25 + 1;
        } while ((int)uVar25 < *(int *)(lVar3 + 0x18));
      }
      lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
      Unity_Mathematics_math__int2();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
      uVar25 = *(uint *)(lVar3 + 0x18);
      lVar15 = *(long *)(lVar3 + 0x10);
      lVar19 = *(long *)
                Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__
      ;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_05a7e1a4;
      if (uVar25 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar25 + 1;
        *(long *)(lVar15 + (long)(int)uVar25 * 8 + 0x20) = lVar8;
      }
      else {
        FUN_03abf904(lVar3,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                                );
      FUN_03abf108(uVar7,*(undefined8 *)
                          Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                  );
      if (lVar4 == 0) goto LAB_05a7e1a4;
      lVar8 = *(long *)(lVar4 + 0x10);
      lVar15 = *(long *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
      ;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05a7e1a4;
      uVar21 = *(uint *)(lVar4 + 0x18);
      if (uVar21 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar21 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar21 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_03abf904(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                                );
      FUN_03a5bcf0(uVar7,*(undefined8 *)
                          Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                  );
      if (lVar5 == 0) goto LAB_05a7e1a4;
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar15 = *(long *)
                Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
      ;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05a7e1a4;
      uVar21 = *(uint *)(lVar5 + 0x18);
      if (uVar21 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar21 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar21 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_03abf904(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar14 = FUN_05a81070(&stack0x00000260,lVar14);
Unity_Mathematics_math__unlerp:
      lVar8 = FUN_03abf644(lVar4,uVar25,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                          );
      if (lVar8 == 0) goto LAB_05a7e1a4;
      lVar15 = *(long *)(lVar8 + 0x10);
      lVar19 = *(long *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_05a7e1a4;
      uVar21 = *(uint *)(lVar8 + 0x18);
      if (uVar21 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar21 + 1;
        *(long *)(lVar15 + (long)(int)uVar21 * 8 + 0x20) = lVar14;
      }
      else {
        FUN_03abf904(lVar8,lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (in_stack_000002a0 != 0) {
        if (lVar5 == 0) goto LAB_05a7e1a4;
        lVar8 = FUN_03abf644(lVar5,uVar25,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                            );
        if (0 < (int)*(ulong *)(in_stack_000002a0 + 0x18)) {
          uVar6 = 0;
          uVar16 = *(ulong *)(in_stack_000002a0 + 0x18) & 0xffffffff;
          do {
            if (uVar16 <= uVar6) goto LAB_05a7e1a8;
            FUN_05a80edc(&stack0x000002b0,&stack0x00000220);
            lStack00000000000001d0 = in_stack_000002e8;
            lStack00000000000001e0 = in_stack_000002f8;
            if ((lVar14 == 0) || (lVar8 == 0)) goto LAB_05a7e1a4;
            lVar15 = *(long *)(lVar8 + 0x10);
            uVar7 = *(undefined8 *)(lVar14 + 0x10);
            lVar19 = *(long *)puVar12;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_05a7e1a4;
            uVar25 = *(uint *)(lVar8 + 0x18);
            if (uVar25 < *(uint *)(lVar15 + 0x18)) {
              lVar15 = lVar15 + (long)(int)uVar25 * 0x58;
              *(uint *)(lVar8 + 0x18) = uVar25 + 1;
              *(undefined8 *)(lVar15 + 0x28) = in_stack_000002b8;
              *(long *)(lVar15 + 0x20) = in_stack_000002b0;
              *(undefined8 *)(lVar15 + 0x38) = in_stack_000002c8;
              *(long *)(lVar15 + 0x30) = in_stack_000002c0;
              *(undefined8 *)(lVar15 + 0x48) = in_stack_000002d8;
              *(long *)(lVar15 + 0x40) = in_stack_000002d0;
              *(undefined8 *)(lVar15 + 0x50) = uVar7;
              *(undefined8 *)(lVar15 + 0x60) = in_stack_000002f0;
              *(long *)(lVar15 + 0x58) = in_stack_000002e8;
              *(undefined8 *)(lVar15 + 0x70) = in_stack_00000300;
              *(long *)(lVar15 + 0x68) = in_stack_000002f8;
            }
            else {
              FUN_03a5c5a4(lVar8,&stack0x000002b0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            uVar16 = (ulong)*(uint *)(in_stack_000002a0 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)(int)*(uint *)(in_stack_000002a0 + 0x18));
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != (uVar13 & 0xffffffff));
  }
  puVar12 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>__ctor__;
  if ((in_stack_00000020[1] != 0) &&
     (uVar13 = *(ulong *)(in_stack_00000020[1] + 0x18), 0 < (int)uVar13)) {
    uVar23 = 0;
    do {
      lVar17 = in_stack_00000020[1];
      if (lVar17 == 0) goto LAB_05a7e1a4;
      if (*(uint *)(lVar17 + 0x18) <= uVar23) {
LAB_05a7e1a8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar17 = lVar17 + uVar23 * 0x20;
      uVar7 = *(undefined8 *)(lVar17 + 0x20);
      uVar9 = *(undefined8 *)(lVar17 + 0x28);
      lVar14 = *(long *)(lVar17 + 0x30);
      lVar17 = *(long *)(lVar17 + 0x38);
      uVar6 = FUN_04f6ebb4(uVar7,0);
      if ((uVar6 & 1) != 0) {
        uVar7 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
        puVar12 = 
        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Columns_StretchMode>__ctor__;
LAB_05a7e280:
        uVar9 = thunk_FUN_02f6ef30(puVar12);
        uVar7 = FUN_04f65e2c(uVar9,uVar7,0);
LAB_05a7e1ec:
        thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
        uVar9 = thunk_FUN_02f45270();
        FUN_050d5404(uVar9,uVar7,0);
        uVar7 = thunk_FUN_02f6ef30(
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>__ctor__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar9,uVar7);
      }
      if (lVar3 == 0) goto LAB_05a7e1a4;
      if (0 < *(int *)(lVar3 + 0x18)) {
        uVar25 = 0;
        do {
          lVar8 = FUN_03abf644(lVar3,uVar25,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                              );
          if (lVar8 == 0) goto LAB_05a7e1a4;
          iVar2 = FUN_04f6c698(*(undefined8 *)(lVar8 + 0x10),uVar7,3,0);
          if (iVar2 == 0) {
            lVar8 = FUN_03abf644(lVar3,uVar25,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                                );
            if (lVar8 != 0) goto LAB_05a7dd38;
            break;
          }
          uVar25 = uVar25 + 1;
        } while ((int)uVar25 < *(int *)(lVar3 + 0x18));
      }
      lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_Events_UnityEvent<Pose,_bool>__ctor__);
      Unity_Mathematics_math__int2();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
      uVar6 = FUN_04f6ebb4(uVar9,0);
      puVar1 = Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>__ctor__;
      uVar11 = 0;
      if ((uVar6 & 1) == 0) {
        uVar11 = uVar9;
      }
      *(undefined8 *)(lVar8 + 0x18) = uVar11;
      uVar25 = *(uint *)(lVar3 + 0x18);
      lVar15 = *(long *)puVar1;
      lVar19 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar19 == 0) goto LAB_05a7e1a4;
      if (uVar25 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar25 + 1;
        *(long *)(lVar19 + (long)(int)uVar25 * 8 + 0x20) = lVar8;
      }
      else {
        FUN_03abf904(lVar3,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                                );
      FUN_03abf108(uVar9,*(undefined8 *)
                          Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>__ctor__
                  );
      if (lVar4 == 0) goto LAB_05a7e1a4;
      lVar8 = *(long *)(lVar4 + 0x10);
      lVar15 = *(long *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
      ;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05a7e1a4;
      uVar21 = *(uint *)(lVar4 + 0x18);
      if (uVar21 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar21 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar21 * 8 + 0x20) = uVar9;
      }
      else {
        FUN_03abf904(lVar4,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                                );
      FUN_03a5bcf0(uVar9,*(undefined8 *)
                          Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>__ctor__
                  );
      if (lVar5 == 0) goto LAB_05a7e1a4;
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar15 = *(long *)
                Method_UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TryGetValueFromBag__
      ;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05a7e1a4;
      uVar21 = *(uint *)(lVar5 + 0x18);
      if (uVar21 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar21 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar21 * 8 + 0x20) = uVar9;
      }
      else {
        FUN_03abf904(lVar5,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
        ;
      }
LAB_05a7dd38:
      if ((lVar14 != 0) && (uVar6 = *(ulong *)(lVar14 + 0x18), 0 < (int)uVar6)) {
        uVar16 = 0;
        do {
          if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_05a7e1a8;
          memcpy(&stack0x00000180,(void *)(lVar14 + uVar16 * 0x48 + 0x20),0x48);
          uVar10 = FUN_04f6ebb4(lStack0000000000000180,0);
          if ((uVar10 & 1) != 0) {
            uVar9 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x000002b0);
            uVar11 = thunk_FUN_02f6ef30(
                                       Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>__ctor__
                                       );
            uVar7 = FUN_04f70018(uVar11,uVar9,uVar7,0);
            goto LAB_05a7e1ec;
          }
          lVar8 = FUN_05a81070(&stack0x00000180,0);
          if ((lVar4 == 0) ||
             (lVar15 = FUN_03abf644(lVar4,uVar25,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                   ), lVar15 == 0)) goto LAB_05a7e1a4;
          lVar19 = *(long *)(lVar15 + 0x10);
          lVar20 = *(long *)
                    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
          ;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_05a7e1a4;
          uVar21 = *(uint *)(lVar15 + 0x18);
          if (uVar21 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar21 + 1;
            *(long *)(lVar19 + (long)(int)uVar21 * 8 + 0x20) = lVar8;
          }
          else {
            FUN_03abf904(lVar15,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          lVar15 = in_stack_000001c0;
          if (in_stack_000001c0 != 0) {
            if (lVar5 == 0) goto LAB_05a7e1a4;
            lVar19 = FUN_03abf644(lVar5,uVar25,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                                 );
            if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
              uVar10 = 0;
              uVar18 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
              plVar24 = (long *)(lVar15 + 0x20);
              do {
                if (uVar18 <= uVar10) goto LAB_05a7e1a8;
                lStack0000000000000148 = plVar24[1];
                lStack0000000000000140 = *plVar24;
                lStack0000000000000158 = plVar24[3];
                lStack0000000000000150 = plVar24[2];
                lStack0000000000000168 = plVar24[5];
                lStack0000000000000160 = plVar24[4];
                lStack0000000000000178 = plVar24[7];
                lStack0000000000000170 = plVar24[6];
                FUN_05a80edc(&stack0x000002b0,&stack0x00000140);
                lStack00000000000000f0 = in_stack_000002e8;
                lStack0000000000000100 = in_stack_000002f8;
                lStack0000000000000110 = in_stack_000002b0;
                lStack0000000000000120 = in_stack_000002c0;
                lStack0000000000000130 = in_stack_000002d0;
                if ((lVar8 == 0) || (lVar19 == 0)) goto LAB_05a7e1a4;
                lVar20 = *(long *)(lVar19 + 0x10);
                uVar9 = *(undefined8 *)(lVar8 + 0x10);
                lVar22 = *(long *)puVar12;
                *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                if (lVar20 == 0) goto LAB_05a7e1a4;
                uVar21 = *(uint *)(lVar19 + 0x18);
                if (uVar21 < *(uint *)(lVar20 + 0x18)) {
                  lVar20 = lVar20 + (long)(int)uVar21 * 0x58;
                  *(uint *)(lVar19 + 0x18) = uVar21 + 1;
                  *(undefined8 *)(lVar20 + 0x28) = in_stack_000002b8;
                  *(long *)(lVar20 + 0x20) = in_stack_000002b0;
                  *(undefined8 *)(lVar20 + 0x38) = in_stack_000002c8;
                  *(long *)(lVar20 + 0x30) = in_stack_000002c0;
                  *(undefined8 *)(lVar20 + 0x48) = in_stack_000002d8;
                  *(long *)(lVar20 + 0x40) = in_stack_000002d0;
                  *(undefined8 *)(lVar20 + 0x50) = uVar9;
                  *(undefined8 *)(lVar20 + 0x60) = in_stack_000002f0;
                  *(long *)(lVar20 + 0x58) = in_stack_000002e8;
                  *(undefined8 *)(lVar20 + 0x70) = in_stack_00000300;
                  *(long *)(lVar20 + 0x68) = in_stack_000002f8;
                }
                else {
                  FUN_03a5c5a4(lVar19,&stack0x000002b0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
                uVar18 = (ulong)*(uint *)(lVar15 + 0x18);
                uVar10 = uVar10 + 1;
                plVar24 = plVar24 + 8;
              } while ((long)uVar10 < (long)(int)*(uint *)(lVar15 + 0x18));
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != (uVar6 & 0xffffffff));
      }
      if (lVar17 == 0) {
        if (lVar5 == 0) goto LAB_05a7e1a4;
        FUN_03abf644(lVar5,uVar25,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                    );
      }
      else {
        if (lVar5 == 0) goto LAB_05a7e1a4;
        uVar21 = *(uint *)(lVar17 + 0x18);
        lVar14 = FUN_03abf644(lVar5,uVar25,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                             );
        if (0 < (int)uVar21) {
          uVar6 = 0;
          plVar24 = (long *)(lVar17 + 0x20);
          do {
            if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_05a7e1a8;
            lStack00000000000000b8 = plVar24[1];
            lStack00000000000000b0 = *plVar24;
            in_stack_000000c8 = plVar24[3];
            in_stack_000000c0 = plVar24[2];
            in_stack_000000d8 = plVar24[5];
            in_stack_000000d0 = plVar24[4];
            lStack00000000000000e8 = plVar24[7];
            lStack00000000000000e0 = plVar24[6];
            FUN_05a80edc(&stack0x00000050,&stack0x000000b0);
            if (lVar14 == 0) goto LAB_05a7e1a4;
            lVar8 = *(long *)(lVar14 + 0x10);
            lVar15 = *(long *)puVar12;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_05a7e1a4;
            uVar25 = *(uint *)(lVar14 + 0x18);
            if (uVar25 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar25 + 1;
              memcpy((void *)(lVar8 + (long)(int)uVar25 * 0x58 + 0x20),&stack0x00000050,0x58);
            }
            else {
              uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
              memcpy(&stack0x000002b0,&stack0x00000050,0x58);
              FUN_03a5c5a4(lVar14,&stack0x000002b0,uVar7);
            }
            uVar6 = uVar6 + 1;
            plVar24 = plVar24 + 8;
          } while (uVar21 != uVar6);
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != (uVar13 & 0xffffffff));
  }
  puVar1 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__;
  puVar12 = 
  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<CollectionVirtualizationMethod>__ctor__
  ;
  if (lVar3 == 0) {
LAB_05a7e1a4:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (0 < *(int *)(lVar3 + 0x18)) {
    iVar2 = 0;
    do {
      lVar17 = FUN_03abf644(lVar3,iVar2,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TryGetValueFromBag__
                           );
      if ((((lVar4 == 0) ||
           (lVar14 = FUN_03abf644(lVar4,iVar2,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>__ctor__
                                 ), lVar14 == 0)) ||
          (lVar14 = FUN_03ac12f8(lVar14,*(undefined8 *)puVar12), lVar5 == 0)) ||
         ((lVar8 = FUN_03abf644(lVar5,iVar2,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                               ), lVar8 == 0 ||
          (uVar7 = FUN_03a5e38c(lVar8,*(undefined8 *)puVar1), lVar17 == 0)))) goto LAB_05a7e1a4;
      *(long *)(lVar17 + 0x28) = lVar14;
      *(undefined8 *)(lVar17 + 0x30) = uVar7;
      if (lVar14 == 0) goto LAB_05a7e1a4;
      uVar25 = *(uint *)(lVar14 + 0x18);
      if (0 < (int)uVar25) {
        uVar21 = 0;
        do {
          if (uVar25 == uVar21) goto LAB_05a7e1a8;
          lVar8 = *(long *)(lVar14 + (long)(int)uVar21 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_05a7e1a4;
          uVar21 = uVar21 + 1;
          *(long *)(lVar8 + 200) = lVar17;
        } while ((uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU)) != uVar21);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(lVar3 + 0x18));
  }
  FUN_03ac12f8(lVar3,*(undefined8 *)
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<ColumnSortingMode>__ctor__
              );
  return;
}


