/*
FUNCTION_NAME: OVRPlugin$$GetLayerTextureStageCount
ENTRY_POINT: 033bca70
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetLayerTextureStageCount(void)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *unaff_x19;
  uint uVar9;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  
  FUN_0319873c();
  do {
    if (unaff_x21 == (long *)0x0) goto LAB_033bcd08;
    lVar3 = (**(code **)(*unaff_x21 + 0x378))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x380));
    uVar2 = (**(code **)(*unaff_x19 + 0x1e8))();
    if (lVar3 == 0) goto LAB_033bcd08;
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
LAB_033bcd0c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar4 = *(long **)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
    if (plVar4 == (long *)0x0) goto LAB_033bcd08;
    lVar3 = (**(code **)(*plVar4 + 0x228))
                      (plVar4,in_stack_00000008,0,*(undefined8 *)(*plVar4 + 0x230));
    if (lVar3 == 0) goto LAB_033bcd08;
    uVar10 = *(undefined8 *)StringLiteral_8776;
    lVar5 = thunk_FUN_01de26bc(lVar3,uVar10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar3,uVar10);
    }
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar2) {
      uVar9 = 0;
      do {
        if (uVar2 <= uVar9) goto LAB_033bcd0c;
        lVar3 = *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
        if ((lVar3 == 0) || (uVar10 = thunk_FUN_01dfff04(lVar3,0), unaff_x23 == 0))
        goto LAB_033bcd08;
        uVar6 = FUN_03199300();
        if ((uVar6 & 1) == 0) {
          lVar8 = *(long *)(unaff_x23 + 0x10);
          *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_033bcd08;
          uVar2 = *(uint *)(unaff_x23 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
            puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *puVar7 = uVar10;
            thunk_FUN_01e10808(puVar7,uVar10);
          }
          else {
            FUN_03198f70();
          }
          if (unaff_x22 == 0) goto LAB_033bcd08;
          lVar8 = *(long *)(unaff_x22 + 0x10);
          *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_033bcd08;
          uVar2 = *(uint *)(unaff_x22 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
            plVar4 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *plVar4 = lVar3;
            thunk_FUN_01e10808(plVar4,lVar3);
          }
          else {
            FUN_03198f70();
          }
        }
        uVar2 = *(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar2);
    }
    bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
    if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)StringLiteral_5177)) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(unaff_x21);
    }
    plVar4 = (long *)FUN_03315340(unaff_x21,0);
    uVar6 = FUN_03308b18(plVar4,unaff_x21,0);
    unaff_x21 = plVar4;
  } while ((uVar6 & 1) == 0);
  if (unaff_x22 != 0) {
    lVar3 = FUN_033b8088(in_stack_00000008,*(undefined4 *)(unaff_x22 + 0x18),0);
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      uVar10 = *(undefined8 *)StringLiteral_8776;
      lVar5 = thunk_FUN_01de26bc(lVar3,uVar10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar3,uVar10);
      }
    }
    FUN_03199520();
    return lVar5;
  }
LAB_033bcd08:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


