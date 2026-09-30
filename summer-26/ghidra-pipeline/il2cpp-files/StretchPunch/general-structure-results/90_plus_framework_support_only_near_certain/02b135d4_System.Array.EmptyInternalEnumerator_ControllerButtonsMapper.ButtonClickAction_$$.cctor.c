/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ControllerButtonsMapper.ButtonClickAction>$$.cctor
ENTRY_POINT: 02b135d4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 127
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void System_Array_EmptyInternalEnumerator<ControllerButtonsMapper_ButtonClickAction>___cctor(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  iVar1 = thunk_FUN_01dff4e0();
  if (iVar1 != 1) {
                    /* try { // try from 02b135e0 to 02c135eb has its CatchHandler @ 02b130fc */
    FUN_033b2d60(7,0);
  }
                    /* try { // try from 02b135ec to 02c135f3 has its CatchHandler @ 02b135f4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02b135b8 with catch @ 02b135f4
                       catch(type#2 @ 00000000) { ... } // from try @ 02b135ec with catch @ 02b135f4
                        */
  iVar1 = thunk_FUN_01dff49c();
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar2 = FUN_033aadfc();
  if (uVar2 < unaff_w19) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc();
  if ((int)(iVar1 - unaff_w19) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar8);
  }
  lVar8 = thunk_FUN_01de26bc();
  if (lVar8 != 0) {
    System_Array_EmptyInternalEnumerator<XRView>___cctor();
    return;
  }
  lVar8 = thunk_FUN_01de26bc();
  if (lVar8 == 0) {
    plVar4 = (long *)thunk_FUN_01de26bc();
    if (plVar4 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      lVar9 = lVar8 + 0x30;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(lVar9 + -0x10)) {
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          FUN_0306e624(&stack0x00000040,*(undefined8 *)(lVar9 + -8));
          lVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar7,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar4[(long)(int)unaff_w19 + 4] = lVar5;
          thunk_FUN_01e10808(plVar4 + (long)(int)unaff_w19 + 4,lVar5);
          unaff_w19 = unaff_w19 + 1;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x28;
      } while (uVar2 != uVar10);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar1) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x30);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02b13898:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(puVar11 + -2)) {
          in_stack_00000050 = puVar11[2];
          in_stack_00000048 = puVar11[1];
          in_stack_00000040 = *puVar11;
          thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78),
                             &stack0x00000040);
          FUN_0336f7b8();
          if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_02b13898;
          lVar5 = lVar8 + (long)(int)unaff_w19 * 0x10;
          puVar3 = (undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *puVar3 = 0;
          unaff_w19 = unaff_w19 + 1;
          thunk_FUN_01e10808(puVar3,0);
          iVar1 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 5;
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


