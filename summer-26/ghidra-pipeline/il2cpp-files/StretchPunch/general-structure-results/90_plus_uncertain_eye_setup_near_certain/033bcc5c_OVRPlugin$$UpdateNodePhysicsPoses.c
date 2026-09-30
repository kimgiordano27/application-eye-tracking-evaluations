/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 033bcc5c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__UpdateNodePhysicsPoses(void)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  uint uVar10;
  long *unaff_x21;
  undefined8 uVar11;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  while( true ) {
    plVar5 = (long *)FUN_03315340(unaff_x21,0);
    uVar6 = FUN_03308b18(plVar5,unaff_x21,0);
    if ((uVar6 & 1) != 0) break;
    if (plVar5 == (long *)0x0) goto LAB_033bcd08;
    lVar7 = (**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380));
    uVar2 = (**(code **)(*unaff_x19 + 0x1e8))();
    if (lVar7 == 0) goto LAB_033bcd08;
    if (*(uint *)(lVar7 + 0x18) <= uVar2) {
LAB_033bcd0c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar3 = *(long **)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_033bcd08;
    lVar7 = (**(code **)(*plVar3 + 0x228))
                      (plVar3,in_stack_00000008,0,*(undefined8 *)(*plVar3 + 0x230));
    if (lVar7 == 0) goto LAB_033bcd08;
    uVar11 = *(undefined8 *)StringLiteral_8776;
    lVar8 = thunk_FUN_01de26bc(lVar7,uVar11);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar7,uVar11);
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar2) {
      uVar10 = 0;
      do {
        if (uVar2 <= uVar10) goto LAB_033bcd0c;
        lVar7 = *(long *)(lVar8 + (long)(int)uVar10 * 8 + 0x20);
        if ((lVar7 == 0) || (uVar11 = thunk_FUN_01dfff04(lVar7,0), unaff_x23 == 0))
        goto LAB_033bcd08;
        uVar6 = FUN_03199300();
        if ((uVar6 & 1) == 0) {
          lVar9 = *(long *)(unaff_x23 + 0x10);
          *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_033bcd08;
          uVar2 = *(uint *)(unaff_x23 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
            puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
            *puVar4 = uVar11;
            thunk_FUN_01e10808(puVar4,uVar11);
          }
          else {
            FUN_03198f70();
          }
          if (unaff_x22 == 0) goto LAB_033bcd08;
          lVar9 = *(long *)(unaff_x22 + 0x10);
          *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_033bcd08;
          uVar2 = *(uint *)(unaff_x22 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
            plVar3 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
            *plVar3 = lVar7;
            thunk_FUN_01e10808(plVar3,lVar7);
          }
          else {
            FUN_03198f70();
          }
        }
        uVar2 = *(uint *)(lVar8 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar2);
    }
    bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (unaff_x21 = plVar5,
       *(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_5177))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(plVar5);
    }
  }
  if (unaff_x22 != 0) {
    lVar7 = FUN_033b8088(in_stack_00000008,*(undefined4 *)(unaff_x22 + 0x18),0);
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      uVar11 = *(undefined8 *)StringLiteral_8776;
      lVar8 = thunk_FUN_01de26bc(lVar7,uVar11);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar7,uVar11);
      }
    }
    FUN_03199520();
    return lVar8;
  }
LAB_033bcd08:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


