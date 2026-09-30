/*
FUNCTION_NAME: OVRPlugin$$GetAppFramerate
ENTRY_POINT: 033bfafc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin__GetAppFramerate(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long unaff_x19;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *unaff_x22;
  long unaff_x23;
  long *plVar17;
  long lVar18;
  long *unaff_x28;
  uint unaff_w29;
  long *in_stack_00000010;
  long in_stack_00000038;
  long in_stack_00000040;
  
  plVar14 = (long *)(unaff_x23 + unaff_x19 * 8 + 0x20);
  lVar6 = *plVar14;
  if (lVar6 == 0) {
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar6 = FUN_033b5440(lVar6,0);
  lVar18 = *unaff_x28;
  if ((lVar18 == 0) || (in_stack_00000038 == 0)) goto LAB_033bec5c;
  if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_033bfa24;
  uVar15 = *(undefined8 *)(in_stack_00000038 + unaff_x19 * 8 + 0x20);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  bVar4 = FUN_033ab18c(uVar15,0,0);
  lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    uVar15 = *(undefined8 *)StringLiteral_151;
    lVar8 = thunk_FUN_01de26bc(lVar6,uVar15);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar6,uVar15);
    }
  }
  uVar15 = *(undefined8 *)(lVar18 + 0x18);
  FUN_033d8040(lVar7,0);
  *(long *)(lVar7 + 0x10) = lVar8;
  thunk_FUN_01e10808((long *)(lVar7 + 0x10),lVar8);
  *(int *)(lVar7 + 0x18) = (int)uVar15;
  *(byte *)(lVar7 + 0x1c) = bVar4 & 1;
  *in_stack_00000010 = lVar7;
  thunk_FUN_01e10808(in_stack_00000010,lVar7);
  if (*(uint *)(unaff_x23 + 0x18) <= unaff_w29) goto LAB_033bfa24;
  lVar6 = *plVar14;
  lVar18 = *unaff_x28;
  if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033c0ca4(lVar6,lVar18);
  puVar3 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (*(uint *)(in_stack_00000040 + 0x18) <= unaff_w29) goto LAB_033bfa24;
  plVar17 = (long *)(in_stack_00000040 + unaff_x19 * 8 + 0x20);
  plVar14 = (long *)*plVar17;
  if (((plVar14 == (long *)0x0) ||
      (lVar6 = (**(code **)(*plVar14 + 0x3b8))(plVar14,*(undefined8 *)(*plVar14 + 0x3c0)),
      lVar6 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
  iVar1 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar6 + 0x18) == iVar1) {
    if (in_stack_00000038 == 0) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_033bfa24;
    puVar13 = (undefined8 *)(in_stack_00000038 + unaff_x19 * 8 + 0x20);
    uVar15 = *puVar13;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar9 = FUN_033ab18c(uVar15,0,0);
    if ((uVar9 & 1) != 0) {
      plVar14 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar6 + 0x18))
      ;
      uVar5 = *(int *)(lVar6 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar14,0,uVar5,0);
      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_033bfa24;
      uVar15 = *puVar13;
      lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar6 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar6 + 0x20) = 1;
      lVar6 = thunk_FUN_033b4750(uVar15,lVar6,0);
      if (plVar14 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar6 != 0) &&
         (lVar18 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar18 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar14 + 3) <= uVar5) goto LAB_033bfa24;
      plVar10 = plVar14 + (long)(int)uVar5 + 4;
      *plVar10 = lVar6;
      thunk_FUN_01e10808(plVar10,lVar6);
      if (*(uint *)(plVar14 + 3) <= uVar5) goto LAB_033bfa24;
      lVar6 = *unaff_x28;
      if (lVar6 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_033bfa24;
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)StringLiteral_1183)) {
LAB_033c090c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar10);
      }
      FUN_033b49e8(plVar10,*(undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20),0,0);
      goto FUN_033c07b0;
    }
  }
  else {
    if (iVar1 < *(int *)(lVar6 + 0x18)) {
      plVar14 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar18 = *unaff_x28;
      if (lVar18 != 0) {
        uVar9 = 0;
        plVar10 = plVar14 + 4;
        do {
          if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar9) {
            uVar5 = *(uint *)(lVar6 + 0x18);
            if ((int)(uVar5 - 1) <= (int)uVar9) goto LAB_033c0618;
            goto LAB_033c05a4;
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_033bfa24;
          if (plVar14 == (long *)0x0) break;
          lVar18 = *(long *)(lVar18 + uVar9 * 8 + 0x20);
          if ((lVar18 != 0) &&
             (lVar7 = thunk_FUN_01de26bc(lVar18,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
          goto LAB_033c07f0;
          if (*(uint *)(plVar14 + 3) <= uVar9) goto LAB_033bfa24;
          *plVar10 = lVar18;
          thunk_FUN_01e10808(plVar10,lVar18);
          lVar18 = *unaff_x28;
          uVar9 = uVar9 + 1;
          plVar10 = plVar10 + 1;
        } while (lVar18 != 0);
      }
      goto LAB_033bec5c;
    }
    if (*(uint *)(in_stack_00000040 + 0x18) <= unaff_w29) goto LAB_033bfa24;
    plVar14 = (long *)*plVar17;
    if (plVar14 == (long *)0x0) goto LAB_033bec5c;
    uVar5 = (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
    if ((uVar5 >> 1 & 1) == 0) {
      plVar14 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar6 + 0x18))
      ;
      uVar5 = *(int *)(lVar6 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar14,0,uVar5,0);
      if (in_stack_00000038 == 0) goto LAB_033bec5c;
      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_033bfa24;
      uVar15 = *(undefined8 *)(in_stack_00000038 + unaff_x19 * 8 + 0x20);
      lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*unaff_x28 == 0) || (lVar6 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar6 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar5;
      lVar6 = thunk_FUN_033b4750(uVar15,lVar6,0);
      if (plVar14 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar6 != 0) &&
         (lVar18 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar18 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar14 + 3) <= uVar5) goto LAB_033bfa24;
      plVar10 = plVar14 + (long)(int)uVar5 + 4;
      *plVar10 = lVar6;
      thunk_FUN_01e10808(plVar10,lVar6);
      if (*(uint *)(plVar14 + 3) <= uVar5) goto LAB_033bfa24;
      lVar6 = *unaff_x28;
      if (lVar6 == 0) goto LAB_033bec5c;
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar6,uVar5,plVar10,0,*(int *)(lVar6 + 0x18) - uVar5,0);
      *unaff_x28 = (long)plVar14;
      thunk_FUN_01e10808();
    }
  }
  goto OVRPlugin__TriggerVibrationAction;
  while( true ) {
    plVar11 = *(long **)(lVar6 + 0x20 + uVar9 * 8);
    if ((plVar11 == (long *)0x0) ||
       (lVar18 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar18 != 0) &&
       (lVar7 = thunk_FUN_01de26bc(lVar18,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar14 + 3) <= (uint)uVar9) goto LAB_033bfa24;
    *plVar10 = lVar18;
    thunk_FUN_01e10808(plVar10,lVar18);
    uVar5 = *(uint *)(lVar6 + 0x18);
    uVar9 = uVar9 + 1;
    plVar10 = plVar10 + 1;
    if ((int)(uVar5 - 1) <= (int)uVar9) break;
LAB_033c05a4:
    if (uVar5 <= (uint)uVar9) goto LAB_033bfa24;
  }
LAB_033c0618:
  if (in_stack_00000038 == 0) goto LAB_033bec5c;
  if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_033bfa24;
  puVar13 = (undefined8 *)(in_stack_00000038 + unaff_x19 * 8 + 0x20);
  uVar15 = *puVar13;
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar12 = FUN_033ab18c(uVar15,0,0);
  uVar5 = (uint)uVar9;
  if ((uVar12 & 1) == 0) {
    if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_033bfa24;
    plVar10 = *(long **)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
    if ((plVar10 == (long *)0x0) ||
       (lVar6 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar6 != 0) &&
       (lVar18 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar18 == 0))
    goto LAB_033c07f0;
    uVar2 = *(uint *)(plVar14 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_033bfa24;
    uVar16 = *puVar13;
    uVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    lVar6 = thunk_FUN_033b4750(uVar16,uVar15,0);
    if (plVar14 == (long *)0x0) goto LAB_033bec5c;
    if ((lVar6 != 0) &&
       (lVar18 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar18 == 0)) {
LAB_033c07f0:
      uVar15 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar15,0);
    }
    uVar2 = *(uint *)(plVar14 + 3);
  }
  if (uVar2 <= uVar5) goto LAB_033bfa24;
  plVar14[(long)(int)uVar5 + 4] = lVar6;
  thunk_FUN_01e10808(plVar14 + (long)(int)uVar5 + 4,lVar6);
FUN_033c07b0:
  *unaff_x28 = (long)plVar14;
  thunk_FUN_01e10808();
OVRPlugin__TriggerVibrationAction:
  if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
    return *plVar17;
  }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


