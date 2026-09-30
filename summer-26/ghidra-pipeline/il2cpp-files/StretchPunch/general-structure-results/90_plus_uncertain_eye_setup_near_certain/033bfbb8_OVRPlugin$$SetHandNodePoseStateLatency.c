/*
FUNCTION_NAME: OVRPlugin$$SetHandNodePoseStateLatency
ENTRY_POINT: 033bfbb8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetHandNodePoseStateLatency(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 unaff_w19;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  long unaff_x23;
  byte unaff_w25;
  undefined8 unaff_x26;
  long *plVar16;
  long *unaff_x28;
  long *in_stack_00000010;
  long in_stack_00000038;
  long in_stack_00000040;
  
  FUN_033d8040();
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x26;
  thunk_FUN_01e10808();
  *(undefined4 *)(unaff_x22 + 0x18) = unaff_w19;
  *(byte *)(unaff_x22 + 0x1c) = unaff_w25 & 1;
  *in_stack_00000010 = unaff_x22;
  thunk_FUN_01e10808();
  if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
  uVar13 = *(undefined8 *)(unaff_x23 + 0x20);
  lVar15 = *unaff_x28;
  if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033c0ca4(uVar13,lVar15);
  puVar4 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if ((int)*(undefined8 *)(in_stack_00000040 + 0x18) == 0) goto LAB_033bfa24;
  plVar16 = (long *)(in_stack_00000040 + 0x20);
  plVar6 = (long *)*plVar16;
  if (((plVar6 == (long *)0x0) ||
      (lVar15 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0)), lVar15 == 0
      )) || (*unaff_x28 == 0)) {
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  iVar1 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar15 + 0x18) == iVar1) {
    if (in_stack_00000038 == 0) goto LAB_033bec5c;
    if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_033bfa24;
    uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar7 = FUN_033ab18c(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar15 + 0x18))
      ;
      uVar5 = *(int *)(lVar15 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar6,0,uVar5,0);
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_033bfa24;
      uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
      lVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar15 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      lVar15 = thunk_FUN_033b4750(uVar13,lVar15,0);
      if (plVar6 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar15 != 0) &&
         (lVar8 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_033bfa24;
      plVar9 = plVar6 + (long)(int)uVar5 + 4;
      *plVar9 = lVar15;
      thunk_FUN_01e10808(plVar9,lVar15);
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_033bfa24;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_033bfa24;
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_033bec5c;
      bVar3 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)StringLiteral_1183
         )) {
LAB_033c090c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar9);
      }
      FUN_033b49e8(plVar9,*(undefined8 *)(lVar15 + (long)(int)uVar5 * 8 + 0x20),0,0);
      goto LAB_033c0730;
    }
  }
  else {
    if (iVar1 < *(int *)(lVar15 + 0x18)) {
      plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar8 = *unaff_x28;
      if (lVar8 != 0) {
        uVar7 = 0;
        plVar9 = plVar6 + 4;
        do {
          if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar7) {
            uVar5 = *(uint *)(lVar15 + 0x18);
            if ((int)(uVar5 - 1) <= (int)uVar7) goto LAB_033c0080;
            goto LAB_033c000c;
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_033bfa24;
          if (plVar6 == (long *)0x0) break;
          lVar8 = *(long *)(lVar8 + uVar7 * 8 + 0x20);
          if ((lVar8 != 0) &&
             (lVar10 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
          goto LAB_033c07f0;
          if (*(uint *)(plVar6 + 3) <= uVar7) goto LAB_033bfa24;
          *plVar9 = lVar8;
          thunk_FUN_01e10808(plVar9,lVar8);
          lVar8 = *unaff_x28;
          uVar7 = uVar7 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_033bec5c;
    }
    if (*(int *)(in_stack_00000040 + 0x18) == 0) goto LAB_033bfa24;
    plVar6 = (long *)*plVar16;
    if (plVar6 == (long *)0x0) goto LAB_033bec5c;
    uVar5 = (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
    if ((uVar5 >> 1 & 1) == 0) {
      plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar15 + 0x18))
      ;
      uVar5 = *(int *)(lVar15 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar6,0,uVar5,0);
      if (in_stack_00000038 == 0) goto LAB_033bec5c;
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_033bfa24;
      uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
      lVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*unaff_x28 == 0) || (lVar15 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar15 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar5;
      lVar15 = thunk_FUN_033b4750(uVar13,lVar15,0);
      if (plVar6 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar15 != 0) &&
         (lVar8 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_033bfa24;
      plVar9 = plVar6 + (long)(int)uVar5 + 4;
      *plVar9 = lVar15;
      thunk_FUN_01e10808(plVar9,lVar15);
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_033bfa24;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_033bec5c;
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar15,uVar5,plVar9,0,*(int *)(lVar15 + 0x18) - uVar5,0);
      *unaff_x28 = (long)plVar6;
      thunk_FUN_01e10808();
    }
  }
  goto LAB_033c0740;
  while( true ) {
    plVar11 = *(long **)(lVar15 + 0x20 + uVar7 * 8);
    if ((plVar11 == (long *)0x0) ||
       (lVar8 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar6 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar8 != 0) &&
       (lVar10 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar6 + 3) <= (uint)uVar7) goto LAB_033bfa24;
    *plVar9 = lVar8;
    thunk_FUN_01e10808(plVar9,lVar8);
    uVar5 = *(uint *)(lVar15 + 0x18);
    uVar7 = uVar7 + 1;
    plVar9 = plVar9 + 1;
    if ((int)(uVar5 - 1) <= (int)uVar7) break;
LAB_033c000c:
    if (uVar5 <= (uint)uVar7) goto LAB_033bfa24;
  }
LAB_033c0080:
  if (in_stack_00000038 == 0) goto LAB_033bec5c;
  if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_033bfa24;
  uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar12 = FUN_033ab18c(uVar13,0,0);
  uVar5 = (uint)uVar7;
  if ((uVar12 & 1) == 0) {
    if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_033bfa24;
    plVar9 = *(long **)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
    if ((plVar9 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200)),
       plVar6 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar15 != 0) &&
       (lVar8 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_033c07f0;
    uVar2 = *(uint *)(plVar6 + 3);
  }
  else {
    if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_033bfa24;
    uVar14 = *(undefined8 *)(in_stack_00000038 + 0x20);
    uVar13 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    lVar15 = thunk_FUN_033b4750(uVar14,uVar13,0);
    if (plVar6 == (long *)0x0) goto LAB_033bec5c;
    if ((lVar15 != 0) &&
       (lVar8 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_033c07f0:
      uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar13,0);
    }
    uVar2 = *(uint *)(plVar6 + 3);
  }
  if (uVar2 <= uVar5) goto LAB_033bfa24;
  plVar6[(long)(int)uVar5 + 4] = lVar15;
  thunk_FUN_01e10808(plVar6 + (long)(int)uVar5 + 4,lVar15);
LAB_033c0730:
  *unaff_x28 = (long)plVar6;
  thunk_FUN_01e10808();
LAB_033c0740:
  if (*(int *)(in_stack_00000040 + 0x18) != 0) {
    return *plVar16;
  }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


