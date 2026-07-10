/*
FUNCTION_NAME: UnityEngine.UIElements.KeyboardTextEditorEventHandler$$OnKeyDown
ENTRY_POINT: 0397b7dc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_UIElements_KeyboardTextEditorEventHandler__OnKeyDown(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  
                    /* catch() { ... } // from try @ 0397b718 with catch @ 0397b7dc */
                    /* catch() { ... } // from try @ 0397b3f8 with catch @ 0397b7e0 */
                    /* catch() { ... } // from try @ 0397b708 with catch @ 0397b7e4 */
                    /* catch() { ... } // from try @ 0397b700 with catch @ 0397b7e8 */
                    /* catch() { ... } // from try @ 0397b628 with catch @ 0397b7ec */
                    /* catch() { ... } // from try @ 0397b6f8 with catch @ 0397b7f0 */
  if ((DAT_03efcc3f & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_UIElements_ITextEdition_TypeInfo_03cb7f28);
                    /* try { // try from 0397b810 to 03a7b813 has its CatchHandler @ 0397bab8 */
                    /* try { // try from 0397b814 to 03a7b857 has its CatchHandler @ 0397af3c */
    FUN_01c5c92c(
                PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_actionKey___03cf8738
                );
                    /* catch() { ... } // from try @ 0397b328 with catch @ 0397b820
                       catch() { ... } // from try @ 0397b720 with catch @ 0397b820 */
    FUN_01c5c92c(
                PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_altKey___03cf7928
                );
                    /* catch() { ... } // from try @ 0397b6f0 with catch @ 0397b824 */
                    /* catch() { ... } // from try @ 0397b2dc with catch @ 0397b828 */
                    /* catch() { ... } // from try @ 0397b2a0 with catch @ 0397b82c */
    FUN_01c5c92c(
                PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_character___03cf8740
                );
                    /* catch() { ... } // from try @ 0397b6e8 with catch @ 0397b830 */
                    /* catch() { ... } // from try @ 0397b294 with catch @ 0397b834 */
                    /* catch() { ... } // from try @ 0397b3ec with catch @ 0397b838
                       catch() { ... } // from try @ 0397b710 with catch @ 0397b838 */
    FUN_01c5c92c(
                PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_keyCode___03cb7d78
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_modifiers___03cf8748
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_shiftKey___03cb7d80
                );
                    /* try { // try from 0397b858 to 03a7b85b has its CatchHandler @ 0397bacc */
                    /* try { // try from 0397b85c to 03a7b8d3 has its CatchHandler @ 0397af3c */
    FUN_01c5c92c(PTR_UnityEngine_UIElements_VisualElementFocusChangeDirection_TypeInfo_03cf4808);
    DAT_03efcc3f = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0397beb4;
  uVar8 = UnityEngine_UIElements_TextElement__get_hasFocus(*(long *)(param_1 + 0x10),0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (param_2 == 0) goto LAB_0397beb4;
  UnityEngine_UIElements_KeyDownEvent__GetEquivalentImguiEvent
            (param_2,*(undefined8 *)(param_1 + 0x20),0);
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_0397beb4;
  uVar7 = UnityEngine_TextEditingUtilities__HandleKeyEvent
                    (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar7 & 1) == 0) {
                    /* try { // try from 0397b96c to 03a7b973 has its CatchHandler @ 0397bb48 */
    uVar3 = *(ushort *)(param_2 + 0x68);
                    /* try { // try from 0397b97c to 03a7b983 has its CatchHandler @ 0397bb38 */
    uVar8 = UnityEngine_UIElements_KeyboardEventBase<object>__get_actionKey
                      (param_2,*(undefined8 *)
                                PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_actionKey___03cf8738
                      );
    uVar15 = (uint)uVar3;
    if ((uVar8 & 1) != 0) {
                    /* try { // try from 0397b988 to 03a7b993 has its CatchHandler @ 0397bb34 */
                    /* try { // try from 0397b994 to 03a7ba7f has its CatchHandler @ 0397af3c */
      uVar8 = UnityEngine_UIElements_KeyboardEventBase<object>__get_altKey
                        (param_2,*(undefined8 *)
                                  PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_altKey___03cf7928
                        );
      if ((uVar8 & 1) == 0) {
        return;
      }
      if (uVar15 == 0) {
        return;
      }
    }
    puVar5 = PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_altKey___03cf7928
    ;
    uVar1 = *(uint *)(param_2 + 0x6c);
    if (0x119 < (int)uVar1) {
      if (uVar1 < 0x129) {
        return;
      }
      if (0xfffffff6 < uVar1 - 0x2a7) {
        return;
      }
    }
    uVar8 = UnityEngine_UIElements_KeyboardEventBase<object>__get_altKey
                      (param_2,*(undefined8 *)
                                PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_altKey___03cf7928
                      );
    if (((uVar8 & 1) != 0) && (uVar15 == 0)) {
      return;
    }
    if ((uVar15 == 9) && (*(int *)(param_2 + 0x6c) == 0)) {
      if (*(int *)(param_2 + 100) == 0) {
        return;
      }
    }
    else if (*(int *)(param_2 + 0x6c) == 9) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar13 = UnityEngine_UIElements_TextElement__get_edition(*(long *)(param_1 + 0x10),0),
         lVar13 == 0)) goto LAB_0397beb4;
      uVar8 = FUN_01986a14(0,*(undefined8 *)
                              PTR_UnityEngine_UIElements_ITextEdition_TypeInfo_03cb7f28,lVar13);
                    /* try { // try from 0397ba80 to 03a7ba83 has its CatchHandler @ 0397bbf0 */
                    /* try { // try from 0397ba84 to 03a7ba87 has its CatchHandler @ 0397bbec */
                    /* try { // try from 0397ba88 to 03a7ba8b has its CatchHandler @ 0397bb3c */
                    /* try { // try from 0397ba8c to 03a7ba8f has its CatchHandler @ 0397bb30 */
                    /* try { // try from 0397ba90 to 03a7ba93 has its CatchHandler @ 0397bb28 */
                    /* try { // try from 0397ba94 to 03a7ba97 has its CatchHandler @ 0397af3c */
                    /* try { // try from 0397ba98 to 03a7ba9b has its CatchHandler @ 0397bb20 */
      if (((uVar8 & 1) == 0) ||
         (uVar8 = UnityEngine_UIElements_KeyboardEventBase<object>__get_shiftKey
                            (param_2,*(undefined8 *)
                                      PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_shiftKey___03cb7d80
                            ), (uVar8 & 1) != 0)) {
                    /* try { // try from 0397ba9c to 03a7ba9f has its CatchHandler @ 0397bb1c */
                    /* try { // try from 0397baa0 to 03a7baa3 has its CatchHandler @ 0397bb18 */
                    /* try { // try from 0397baa4 to 03a7baab has its CatchHandler @ 0397bb10 */
        uVar8 = UnityEngine_UIElements_KeyboardEventExtensions__ShouldSendNavigationMoveEvent
                          (param_2,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
                    /* try { // try from 0397baac to 03a7baaf has its CatchHandler @ 0397bb08 */
        plVar9 = *(long **)(param_1 + 0x10);
                    /* try { // try from 0397bab0 to 03a7bab3 has its CatchHandler @ 0397baf0 */
        if (plVar9 != (long *)0x0) {
                    /* try { // try from 0397bab4 to 03a7bab7 has its CatchHandler @ 0397bae8 */
                    /* catch() { ... } // from try @ 0397b810 with catch @ 0397bab8 */
                    /* try { // try from 0397bac0 to 03a7badb has its CatchHandler @ 0397bc3c */
          lVar13 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
                    /* catch() { ... } // from try @ 0397b858 with catch @ 0397bacc */
          uVar10 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0397badc to 03a7bb63 has its CatchHandler @ 0397af3c */
          uVar8 = UnityEngine_UIElements_KeyboardEventBase<object>__get_shiftKey
                            (param_2,*(undefined8 *)
                                      PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_shiftKey___03cb7d80
                            );
                    /* catch() { ... } // from try @ 0397b7c0 with catch @ 0397bae0 */
                    /* catch() { ... } // from try @ 0397b6cc with catch @ 0397bae4 */
                    /* catch() { ... } // from try @ 0397bab4 with catch @ 0397bae8 */
                    /* catch() { ... } // from try @ 0397b6b8 with catch @ 0397baec */
                    /* catch() { ... } // from try @ 0397bab0 with catch @ 0397baf0 */
                    /* catch() { ... } // from try @ 0397b5f0 with catch @ 0397baf4 */
          if ((uVar8 & 1) == 0) {
            if (*(int *)(*(long *)
                          PTR_UnityEngine_UIElements_VisualElementFocusChangeDirection_TypeInfo_03cf4808
                        + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uVar12 = FUN_03990264(0);
          }
          else {
                    /* catch() { ... } // from try @ 0397b604 with catch @ 0397baf8 */
            if (*(int *)(*(long *)
                          PTR_UnityEngine_UIElements_VisualElementFocusChangeDirection_TypeInfo_03cf4808
                        + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0397b650 with catch @ 0397bafc */
              thunk_FUN_01cb0d4c();
            }
                    /* catch() { ... } // from try @ 0397b27c with catch @ 0397bb00 */
                    /* catch() { ... } // from try @ 0397b554 with catch @ 0397bb04 */
            uVar12 = FUN_039902b4(0);
                    /* catch() { ... } // from try @ 0397baac with catch @ 0397bb08 */
          }
          if (lVar13 != 0) {
            UnityEngine_UIElements_FocusController__FocusNextInDirection(lVar13,uVar10,uVar12,0);
            UnityEngine_UIElements_EventBase__StopPropagation(param_2,0);
            return;
          }
        }
        goto LAB_0397beb4;
      }
                    /* catch() { ... } // from try @ 0397b668 with catch @ 0397bb0c */
                    /* catch() { ... } // from try @ 0397baa4 with catch @ 0397bb10 */
                    /* catch() { ... } // from try @ 0397b58c with catch @ 0397bb14 */
      uVar8 = UnityEngine_UIElements_KeyboardEventExtensions__ShouldSendNavigationMoveEvent
                        (param_2,0);
                    /* catch() { ... } // from try @ 0397baa0 with catch @ 0397bb18 */
      if ((uVar8 & 1) == 0) {
        return;
      }
    }
                    /* catch() { ... } // from try @ 0397ba9c with catch @ 0397bb1c */
                    /* catch() { ... } // from try @ 0397ba98 with catch @ 0397bb20 */
                    /* catch() { ... } // from try @ 0397b5a4 with catch @ 0397bb24 */
                    /* catch() { ... } // from try @ 0397ba90 with catch @ 0397bb28 */
                    /* catch() { ... } // from try @ 0397b248 with catch @ 0397bb2c */
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar13 = UnityEngine_UIElements_TextElement__get_edition(*(long *)(param_1 + 0x10),0),
       puVar4 = PTR_UnityEngine_UIElements_ITextEdition_TypeInfo_03cb7f28, lVar13 == 0))
    goto LAB_0397beb4;
                    /* catch() { ... } // from try @ 0397ba8c with catch @ 0397bb30 */
                    /* catch() { ... } // from try @ 0397b988 with catch @ 0397bb34 */
                    /* catch() { ... } // from try @ 0397b97c with catch @ 0397bb38 */
                    /* catch() { ... } // from try @ 0397ba88 with catch @ 0397bb3c */
                    /* catch() { ... } // from try @ 0397b8f0 with catch @ 0397bb40 */
                    /* catch() { ... } // from try @ 0397b8e4 with catch @ 0397bb44 */
    uVar8 = FUN_01986a14(0,*(undefined8 *)PTR_UnityEngine_UIElements_ITextEdition_TypeInfo_03cb7f28,
                         lVar13);
                    /* catch() { ... } // from try @ 0397b96c with catch @ 0397bb48 */
    if (((uVar8 & 1) == 0) &&
       ((*(int *)(param_2 + 0x6c) == 0x10f || (*(int *)(param_2 + 0x6c) == 0xd)))) {
                    /* try { // try from 0397bb64 to 03a7bb67 has its CatchHandler @ 0397bb8c */
                    /* try { // try from 0397bb68 to 03a7bb8f has its CatchHandler @ 0397af3c */
      if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_0397beb4;
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38);
      lVar13 = UnityEngine_UIElements_TextElement__get_edition(*(long *)(param_1 + 0x10),0);
      if (lVar13 == 0) goto LAB_0397beb4;
                    /* catch() { ... } // from try @ 0397bb64 with catch @ 0397bb8c */
      lVar13 = FUN_01986a14(0x10,*(undefined8 *)puVar4,lVar13);
                    /* try { // try from 0397bb90 to 03a7bb97 has its CatchHandler @ 0397bc3c */
      if (lVar13 != 0) {
                    /* try { // try from 0397bb98 to 03a7bbb7 has its CatchHandler @ 0397af3c */
                    /* catch() { ... } // from try @ 0397b8d4 with catch @ 0397bb9c */
        (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      }
                    /* try { // try from 0397bbb8 to 03a7bbbb has its CatchHandler @ 0397bbdc */
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar13 = UnityEngine_UIElements_TextElement__get_edition(*(long *)(param_1 + 0x10),0),
         lVar13 == 0)) goto LAB_0397beb4;
                    /* try { // try from 0397bbbc to 03a7bbdf has its CatchHandler @ 0397af3c */
      uVar8 = FUN_01986a14(8,*(undefined8 *)puVar4,lVar13);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_0397beb4;
                    /* catch() { ... } // from try @ 0397bbb8 with catch @ 0397bbdc */
                    /* try { // try from 0397bbe0 to 03a7bbe7 has its CatchHandler @ 0397bc3c */
        UnityEngine_TextEditingUtilities__set_text(*(long *)(param_1 + 0x18),uVar10,0);
      }
    }
                    /* try { // try from 0397bbe8 to 03a7bc1b has its CatchHandler @ 0397af3c */
                    /* catch() { ... } // from try @ 0397ba84 with catch @ 0397bbec */
    UnityEngine_UIElements_EventBase__StopPropagation(param_2,0);
                    /* catch() { ... } // from try @ 0397ba80 with catch @ 0397bbf0 */
                    /* catch() { ... } // from try @ 0397b20c with catch @ 0397bbf4 */
                    /* catch() { ... } // from try @ 0397b218 with catch @ 0397bbf8 */
                    /* catch() { ... } // from try @ 0397b1fc with catch @ 0397bbfc */
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar13 = UnityEngine_UIElements_TextElement__get_edition(*(long *)(param_1 + 0x10),0),
       lVar13 == 0)) goto LAB_0397beb4;
    uVar8 = FUN_01986a14(0,*(undefined8 *)puVar4,lVar13);
    if ((uVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 0397bac0 with catch @ 0397bc3c
                       catch() { ... } // from try @ 0397bb90 with catch @ 0397bc3c
                       catch() { ... } // from try @ 0397bbe0 with catch @ 0397bc3c
                       catch() { ... } // from try @ 0397bc2c with catch @ 0397bc3c */
                    /* try { // try from 0397bc40 to 03a7bcff has its CatchHandler @ 0397bc40
                       catch() { ... } // from try @ 0397bc40 with catch @ 0397bc40
                       catch() { ... } // from try @ 0397bd74 with catch @ 0397bc40
                       catch() { ... } // from try @ 0397bda8 with catch @ 0397bc40
                       catch() { ... } // from try @ 0397bdfc with catch @ 0397bc40 */
      if (((uVar15 != 10) && (uVar15 != 0xd)) ||
         (uVar8 = UnityEngine_UIElements_KeyboardEventBase<object>__get_altKey
                            (param_2,*(undefined8 *)puVar5), (uVar8 & 1) != 0)) goto LAB_0397bc58;
    }
    else {
                    /* try { // try from 0397bc1c to 03a7bc1f has its CatchHandler @ 0397bc28 */
                    /* catch() { ... } // from try @ 0397bc1c with catch @ 0397bc28 */
                    /* try { // try from 0397bc2c to 03a7bc33 has its CatchHandler @ 0397bc3c */
                    /* try { // try from 0397bc34 to 03a7bc3f has its CatchHandler @ 0397af3c */
      if ((uVar15 != 10) ||
         (uVar8 = UnityEngine_UIElements_KeyboardEventBase<object>__get_shiftKey
                            (param_2,*(undefined8 *)
                                      PTR_Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_shiftKey___03cb7d80
                            ), (uVar8 & 1) == 0)) {
LAB_0397bc58:
        if (*(int *)(param_2 + 0x6c) == 0x1b) {
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar13 = UnityEngine_UIElements_TextElement__get_edition(*(long *)(param_1 + 0x10),0),
             lVar13 == 0)) goto LAB_0397beb4;
          FUN_01986a14(0xb,*(undefined8 *)puVar4,lVar13);
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar13 = UnityEngine_UIElements_TextElement__get_edition(*(long *)(param_1 + 0x10),0),
             lVar13 == 0)) goto LAB_0397beb4;
          lVar13 = FUN_01986a14(0x10,*(undefined8 *)puVar4,lVar13);
          if (lVar13 != 0) {
            (**(code **)(lVar13 + 0x18))
                      (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
          }
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar13 = UnityEngine_UIElements_TextElement__get_edition(*(long *)(param_1 + 0x10),0),
             lVar13 == 0)) goto LAB_0397beb4;
          lVar13 = FUN_01986a14(0x14,*(undefined8 *)puVar4,lVar13);
          if (lVar13 != 0) {
            (**(code **)(lVar13 + 0x18))
                      (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
          }
        }
                    /* try { // try from 0397bd00 to 03a7bd07 has its CatchHandler @ 0397bdb8 */
        uVar1 = *(uint *)(param_2 + 0x6c);
        if (*(uint *)(param_2 + 0x6c) != 9) {
          uVar1 = uVar15;
        }
                    /* try { // try from 0397bd10 to 03a7bd1b has its CatchHandler @ 0397bdbc */
                    /* try { // try from 0397bd1c to 03a7bd2b has its CatchHandler @ 0397bdc0 */
        if (((*(long *)(param_1 + 0x10) == 0) ||
            (lVar13 = UnityEngine_UIElements_TextElement__get_edition(*(long *)(param_1 + 0x10),0),
            lVar13 == 0)) || (lVar13 = FUN_01986a14(0xc,*(undefined8 *)puVar4,lVar13), lVar13 == 0))
        goto LAB_0397beb4;
                    /* try { // try from 0397bd34 to 03a7bd3f has its CatchHandler @ 0397bdb4 */
        uVar8 = (**(code **)(lVar13 + 0x18))
                          (*(undefined8 *)(lVar13 + 0x40),uVar1,*(undefined8 *)(lVar13 + 0x28));
                    /* try { // try from 0397bd4c to 03a7bd4f has its CatchHandler @ 0397bdc8 */
        if ((uVar8 & 1) == 0) {
          return;
        }
        if ((0x1f < (uVar1 & 0xffff)) || (*(int *)(param_2 + 0x6c) == 9)) {
LAB_0397bd68:
                    /* try { // try from 0397bd68 to 03a7bd73 has its CatchHandler @ 0397bdb0 */
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_0397beb4;
                    /* try { // try from 0397bd74 to 03a7bda3 has its CatchHandler @ 0397bc40 */
          bVar6 = UnityEngine_TextEditingUtilities__Insert(*(long *)(param_1 + 0x18),uVar1,0);
          uVar7 = 0;
          bVar6 = bVar6 & 1;
          *(byte *)(param_1 + 0x28) = bVar6;
          goto LAB_0397b8fc;
        }
                    /* catch() { ... } // from try @ 0397bde4 with catch @ 0397bdf0 */
                    /* try { // try from 0397bdf4 to 03a7bdfb has its CatchHandler @ 0397be04 */
                    /* try { // try from 0397bdfc to 03a7be07 has its CatchHandler @ 0397bc40 */
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar13 = UnityEngine_UIElements_TextElement__get_edition(*(long *)(param_1 + 0x10),0),
           lVar13 == 0)) goto LAB_0397beb4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0397bdf4 with catch @ 0397be04
                        */
                    /* try { // try from 0397be08 to 03a7befb has its CatchHandler @ 0397be08
                       catch() { ... } // from try @ 0397be08 with catch @ 0397be08
                       catch() { ... } // from try @ 0397bfc0 with catch @ 0397be08
                       catch() { ... } // from try @ 0397bff4 with catch @ 0397be08
                       catch() { ... } // from try @ 0397c00c with catch @ 0397be08
                       catch() { ... } // from try @ 0397c068 with catch @ 0397be08 */
        uVar8 = FUN_01986a14(0,*(undefined8 *)puVar4,lVar13);
        if ((((uVar8 & 1) != 0) &&
            (uVar8 = UnityEngine_UIElements_KeyboardEventBase<object>__get_altKey
                               (param_2,*(undefined8 *)puVar5), (uVar8 & 1) == 0)) &&
           (((uVar1 & 0xffff) == 0xd || ((uVar1 & 0xffff) == 10)))) goto LAB_0397bd68;
        lVar13 = *(long *)(param_1 + 0x18);
        if (lVar13 == 0) goto LAB_0397beb4;
        cVar2 = *(char *)(lVar13 + 0x24);
        uVar8 = UnityEngine_TextEditingUtilities__UpdateImeState(lVar13,0);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_0397beb4;
          if (cVar2 == *(char *)(*(long *)(param_1 + 0x18) + 0x24)) goto LAB_0397b8f4;
        }
        uVar7 = 1;
        *(undefined1 *)(param_1 + 0x28) = 1;
        goto LAB_0397b900;
      }
    }
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar13 = UnityEngine_UIElements_TextElement__get_edition(*(long *)(param_1 + 0x10),0),
       lVar13 == 0)) goto LAB_0397beb4;
                    /* try { // try from 0397bda4 to 03a7bda7 has its CatchHandler @ 0397bdc4 */
                    /* try { // try from 0397bda8 to 03a7bde3 has its CatchHandler @ 0397bc40 */
    lVar13 = FUN_01986a14(0x14,*(undefined8 *)puVar4,lVar13);
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 0397bd68 with catch @ 0397bdb0
                        */
    if (lVar13 != 0) {
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 0397bd34 with catch @ 0397bdb4
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 0397bd00 with catch @ 0397bdb8
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 0397bd10 with catch @ 0397bdbc
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 0397bd1c with catch @ 0397bdc0
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 0397bda4 with catch @ 0397bdc4
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 0397bd4c with catch @ 0397bdc8
                        */
                    /* WARNING: Could not recover jumptable at 0x0397bdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      return;
    }
  }
  else {
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_0397beb4;
    uVar10 = (**(code **)(*plVar9 + 0xdb8))(plVar9,*(undefined8 *)(*plVar9 + 0xdc0));
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0397beb4;
                    /* try { // try from 0397b8d4 to 03a7b8db has its CatchHandler @ 0397bb9c */
    uVar8 = System_String__op_Inequality(uVar10,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),0)
    ;
    if ((uVar8 & 1) != 0) {
                    /* try { // try from 0397b8e4 to 03a7b8eb has its CatchHandler @ 0397bb44 */
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
                    /* try { // try from 0397b8f0 to 03a7b8ff has its CatchHandler @ 0397bb40 */
    UnityEngine_UIElements_EventBase__StopPropagation(param_2,0);
LAB_0397b8f4:
    bVar6 = *(byte *)(param_1 + 0x28);
    uVar7 = uVar7 ^ 1;
LAB_0397b8fc:
    if (bVar6 != 0) {
LAB_0397b900:
                    /* try { // try from 0397b900 to 03a7b96b has its CatchHandler @ 0397af3c */
      UnityEngine_UIElements_KeyboardTextEditorEventHandler__UpdateLabel(param_1,uVar7 & 1);
    }
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (plVar9 = (long *)UnityEngine_UIElements_TextElement__get_edition
                                   (*(long *)(param_1 + 0x10),0), plVar9 == (long *)0x0)) {
LAB_0397beb4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar13 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)PTR_UnityEngine_UIElements_ITextEdition_TypeInfo_03cb7f28) {
          puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_0397ba0c;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01c8cb54(plVar9,*(long *)PTR_UnityEngine_UIElements_ITextEdition_TypeInfo_03cb7f28
                           ,0xe);
LAB_0397ba0c:
    lVar13 = (*(code *)*puVar11)(plVar9,puVar11[1]);
    if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0397ba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar13 + 0x18))
                (*(undefined8 *)(lVar13 + 0x40),*(int *)(param_2 + 0x6c) == 8,
                 *(undefined8 *)(lVar13 + 0x28));
      return;
    }
  }
                    /* try { // try from 0397bde4 to 03a7bde7 has its CatchHandler @ 0397bdf0 */
  return;
}


