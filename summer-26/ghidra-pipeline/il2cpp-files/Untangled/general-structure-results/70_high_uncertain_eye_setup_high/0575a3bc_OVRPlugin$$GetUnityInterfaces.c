/*
FUNCTION_NAME: OVRPlugin$$GetUnityInterfaces
ENTRY_POINT: 0575a3bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetUnityInterfaces(void)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x23;
  long lVar12;
  undefined8 uVar13;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  while (lVar8 = *(long *)(unaff_x20 + 0x18), lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar11 = *(long *)PTR_DAT_06d59740;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
      *puVar10 = unaff_x23;
      thunk_FUN_02f411dc(puVar10,unaff_x23);
    }
    else {
      FUN_03fd0c9c(lVar8,unaff_x23,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    unaff_x21 = unaff_x21 + 1;
    if ((long)(int)*(uint *)(unaff_x28 + 0x18) <= (long)unaff_x21) {
      return unaff_x20;
    }
    if (*(uint *)(unaff_x28 + 0x18) <= unaff_x21) {
LAB_0575a460:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar8 = *(long *)(in_stack_00000008 + unaff_x21 * 8);
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (*(char *)(unaff_x29 + 1999) == '\0') {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x29 + 1999) = 1;
    }
    lVar9 = *unaff_x19;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar9 = *unaff_x19;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x60), lVar9 == 0)) break;
    plVar3 = (long *)(**(code **)(lVar9 + 0x18))
                               (*(undefined8 *)(lVar9 + 0x40),lVar8,*(undefined8 *)(lVar9 + 0x28));
    if (*(char *)(unaff_x29 + 1999) == '\0') {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x29 + 1999) = 1;
    }
    lVar9 = *unaff_x19;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar9 = *unaff_x19;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x58), lVar9 == 0)) break;
    plVar4 = (long *)(**(code **)(lVar9 + 0x18))
                               (*(undefined8 *)(lVar9 + 0x40),lVar8,*(undefined8 *)(lVar9 + 0x28));
    if (*(char *)(unaff_x29 + 1999) == '\0') {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x29 + 1999) = 1;
    }
    lVar9 = *unaff_x19;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar9 = *unaff_x19;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar9 == 0) break;
    lVar12 = *(long *)(lVar9 + 0x68);
    lVar11 = *(long *)PTR_DAT_06d05520;
    lVar9 = *(long *)(lVar11 + 0x38);
    if (lVar9 == 0) {
      FUN_02eea7c4(lVar11);
      lVar9 = *(long *)(lVar11 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768();
    }
    if (lVar12 == 0) break;
    lVar9 = (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),lVar8,**(undefined8 **)(lVar9 + 0xb8),
                       *(undefined8 *)(lVar12 + 0x28));
    if (*(char *)(unaff_x29 + 1999) == '\0') {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x29 + 1999) = 1;
    }
    lVar11 = *unaff_x19;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar11 = *unaff_x19;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
    if (lVar11 == 0) break;
    lVar11 = *(long *)(lVar11 + 0x40);
    plVar5 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
    if (plVar5 == (long *)0x0) break;
    if ((lVar8 != 0) &&
       (lVar12 = thunk_FUN_02ef170c(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0)) {
LAB_0575a464:
      uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar13,0);
    }
    if ((int)plVar5[3] == 0) goto LAB_0575a460;
    plVar5[4] = lVar8;
    thunk_FUN_02f411dc(plVar5 + 4,lVar8);
    if (lVar11 == 0) break;
    plVar5 = (long *)(**(code **)(lVar11 + 0x18))
                               (*(undefined8 *)(lVar11 + 0x40),0,plVar5,
                                *(undefined8 *)(lVar11 + 0x28));
    if (*(char *)(unaff_x29 + 1999) == '\0') {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x29 + 1999) = 1;
    }
    lVar11 = *unaff_x19;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar11 = *unaff_x19;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
    if (lVar11 == 0) break;
    lVar11 = *(long *)(lVar11 + 0x48);
    plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
    if (plVar6 == (long *)0x0) break;
    if ((lVar8 != 0) &&
       (lVar12 = thunk_FUN_02ef170c(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar12 == 0))
    goto LAB_0575a464;
    if ((int)plVar6[3] == 0) goto LAB_0575a460;
    plVar6[4] = lVar8;
    thunk_FUN_02f411dc(plVar6 + 4,lVar8);
    if (lVar11 == 0) break;
    plVar6 = (long *)(**(code **)(lVar11 + 0x18))
                               (*(undefined8 *)(lVar11 + 0x40),0,plVar6,
                                *(undefined8 *)(lVar11 + 0x28));
    unaff_x23 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59758);
    if (plVar3 == (long *)0x0) break;
    if (*(long *)(*plVar3 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar3);
    }
    puVar7 = (undefined4 *)thunk_FUN_02ef195c(plVar3);
    uVar1 = *puVar7;
    if (plVar4 != (long *)0x0) {
      if (*plVar4 != *(long *)PTR_DAT_06d02350) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar4);
      }
    }
    if (lVar9 == 0) {
      lVar8 = 0;
    }
    else {
      uVar13 = *(undefined8 *)PTR_DAT_06d4cd28;
      lVar8 = thunk_FUN_02ef170c(lVar9,uVar13);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(lVar9,uVar13);
      }
    }
    lVar9 = *(long *)PTR_DAT_06d56d00;
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar5);
      }
    }
    if (plVar6 != (long *)0x0) {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar6);
      }
    }
    FUN_0575a4ec(unaff_x23,uVar1,plVar4,lVar8,plVar5,plVar6);
    unaff_x20 = in_stack_00000000;
    if (in_stack_00000000 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


