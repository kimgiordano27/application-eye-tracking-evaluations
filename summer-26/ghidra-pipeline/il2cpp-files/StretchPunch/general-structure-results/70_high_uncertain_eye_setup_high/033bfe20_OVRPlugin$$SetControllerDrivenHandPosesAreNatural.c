/*
FUNCTION_NAME: OVRPlugin$$SetControllerDrivenHandPosesAreNatural
ENTRY_POINT: 033bfe20
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetControllerDrivenHandPosesAreNatural(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong in_x9;
  uint uVar6;
  ulong unaff_x19;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar9;
  undefined8 *unaff_x26;
  long *unaff_x28;
  long in_stack_00000038;
  long in_stack_00000040;
  
  do {
    if (in_x9 <= unaff_x19) goto LAB_033bfa24;
    if (unaff_x22 == (long *)0x0) goto LAB_033bec5c;
    lVar9 = *(long *)(param_1 + unaff_x19 * 8 + 0x20);
    if ((lVar9 != 0) &&
       (lVar2 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(unaff_x22 + 3) <= unaff_x19) goto LAB_033bfa24;
    plVar5 = unaff_x24 + 1;
    *unaff_x24 = lVar9;
    thunk_FUN_01e10808(unaff_x24,lVar9);
    param_1 = *unaff_x28;
    unaff_x19 = unaff_x19 + 1;
    if (param_1 == 0) goto LAB_033bec5c;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
    unaff_x24 = plVar5;
  } while ((long)unaff_x19 < (long)(int)*(uint *)(param_1 + 0x18));
  uVar6 = *(uint *)(unaff_x23 + 0x18);
  if ((int)unaff_x19 < (int)(uVar6 - 1)) {
    do {
      if (uVar6 <= (uint)unaff_x19) goto LAB_033bfa24;
      plVar3 = *(long **)(unaff_x23 + 0x20 + unaff_x19 * 8);
      if ((plVar3 == (long *)0x0) ||
         (lVar9 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200)),
         unaff_x22 == (long *)0x0)) goto LAB_033bec5c;
      if ((lVar9 != 0) &&
         (lVar2 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(unaff_x22 + 3) <= (uint)unaff_x19) goto LAB_033bfa24;
      *plVar5 = lVar9;
      thunk_FUN_01e10808(plVar5,lVar9);
      uVar6 = *(uint *)(unaff_x23 + 0x18);
      unaff_x19 = unaff_x19 + 1;
      plVar5 = plVar5 + 1;
    } while ((int)unaff_x19 < (int)(uVar6 - 1));
  }
  if (in_stack_00000038 == 0) {
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(int *)(in_stack_00000038 + 0x18) != 0) {
    uVar7 = *(undefined8 *)(in_stack_00000038 + 0x20);
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar4 = FUN_033ab18c(uVar7,0,0);
    uVar6 = (uint)unaff_x19;
    if ((uVar4 & 1) == 0) {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
      plVar5 = *(long **)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
      if ((plVar5 == (long *)0x0) ||
         (lVar9 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200)),
         unaff_x22 == (long *)0x0)) goto LAB_033bec5c;
      if ((lVar9 != 0) &&
         (lVar2 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
      goto LAB_033c07f0;
      uVar1 = *(uint *)(unaff_x22 + 3);
    }
    else {
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_033bfa24;
      uVar8 = *(undefined8 *)(in_stack_00000038 + 0x20);
      uVar7 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      lVar9 = thunk_FUN_033b4750(uVar8,uVar7,0);
      if (unaff_x22 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar9 != 0) &&
         (lVar2 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
LAB_033c07f0:
        uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7,0);
      }
      uVar1 = *(uint *)(unaff_x22 + 3);
    }
    if (uVar6 < uVar1) {
      unaff_x22[(long)(int)uVar6 + 4] = lVar9;
      thunk_FUN_01e10808(unaff_x22 + (long)(int)uVar6 + 4,lVar9);
      *unaff_x28 = (long)unaff_x22;
      thunk_FUN_01e10808();
      if (*(int *)(in_stack_00000040 + 0x18) != 0) {
        return *unaff_x26;
      }
    }
  }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


