/*
FUNCTION_NAME: OVRPlugin$$PollEvent
ENTRY_POINT: 0575a004
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


long OVRPlugin__PollEvent(void)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined1 in_w8;
  undefined8 *puVar10;
  long *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long lVar11;
  long lVar12;
  long unaff_x28;
  undefined8 uVar13;
  long unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    *(undefined1 *)(unaff_x29 + 1999) = in_w8;
    do {
      lVar3 = *unaff_x19;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *unaff_x19;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0)) {
LAB_0575a45c:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar4 = (long *)(**(code **)(lVar3 + 0x18))
                                 (*(undefined8 *)(lVar3 + 0x40),unaff_x23,
                                  *(undefined8 *)(lVar3 + 0x28));
      if (*(char *)(unaff_x29 + 1999) == '\0') {
        FUN_02f07e70();
        *(undefined1 *)(unaff_x29 + 1999) = 1;
      }
      lVar3 = *unaff_x19;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *unaff_x19;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x58), lVar3 == 0)) goto LAB_0575a45c;
      plVar5 = (long *)(**(code **)(lVar3 + 0x18))
                                 (*(undefined8 *)(lVar3 + 0x40),unaff_x23,
                                  *(undefined8 *)(lVar3 + 0x28));
      if (*(char *)(unaff_x29 + 1999) == '\0') {
        FUN_02f07e70();
        *(undefined1 *)(unaff_x29 + 1999) = 1;
      }
      lVar3 = *unaff_x19;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *unaff_x19;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_0575a45c;
      lVar12 = *(long *)(lVar3 + 0x68);
      lVar11 = *(long *)PTR_DAT_06d05520;
      lVar3 = *(long *)(lVar11 + 0x38);
      if (lVar3 == 0) {
        FUN_02eea7c4(lVar11);
        lVar3 = *(long *)(lVar11 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar3 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768();
      }
      if (lVar12 == 0) goto LAB_0575a45c;
      lVar3 = (**(code **)(lVar12 + 0x18))
                        (*(undefined8 *)(lVar12 + 0x40),unaff_x23,**(undefined8 **)(lVar3 + 0xb8),
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
      if (lVar11 == 0) goto LAB_0575a45c;
      lVar11 = *(long *)(lVar11 + 0x40);
      plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
      if (plVar6 == (long *)0x0) goto LAB_0575a45c;
      if ((unaff_x23 != 0) &&
         (lVar12 = thunk_FUN_02ef170c(unaff_x23,*(undefined8 *)(*plVar6 + 0x40)), lVar12 == 0)) {
LAB_0575a464:
        uVar8 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar8,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_0575a460:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      plVar6[4] = unaff_x23;
      thunk_FUN_02f411dc(plVar6 + 4,unaff_x23);
      if (lVar11 == 0) goto LAB_0575a45c;
      plVar6 = (long *)(**(code **)(lVar11 + 0x18))
                                 (*(undefined8 *)(lVar11 + 0x40),0,plVar6,
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
      if (lVar11 == 0) goto LAB_0575a45c;
      lVar11 = *(long *)(lVar11 + 0x48);
      plVar7 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
      if (plVar7 == (long *)0x0) goto LAB_0575a45c;
      if ((unaff_x23 != 0) &&
         (lVar12 = thunk_FUN_02ef170c(unaff_x23,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0))
      goto LAB_0575a464;
      if ((int)plVar7[3] == 0) goto LAB_0575a460;
      plVar7[4] = unaff_x23;
      thunk_FUN_02f411dc(plVar7 + 4,unaff_x23);
      if (lVar11 == 0) goto LAB_0575a45c;
      plVar7 = (long *)(**(code **)(lVar11 + 0x18))
                                 (*(undefined8 *)(lVar11 + 0x40),0,plVar7,
                                  *(undefined8 *)(lVar11 + 0x28));
      uVar8 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59758);
      if (plVar4 == (long *)0x0) goto LAB_0575a45c;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar4);
      }
      puVar9 = (undefined4 *)thunk_FUN_02ef195c(plVar4);
      uVar1 = *puVar9;
      if (plVar5 != (long *)0x0) {
        if (*plVar5 != *(long *)PTR_DAT_06d02350) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar5);
        }
      }
      if (lVar3 == 0) {
        lVar11 = 0;
      }
      else {
        uVar13 = *(undefined8 *)PTR_DAT_06d4cd28;
        lVar11 = thunk_FUN_02ef170c(lVar3,uVar13);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar3,uVar13);
        }
      }
      lVar3 = *(long *)PTR_DAT_06d56d00;
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar6);
        }
      }
      if (plVar7 != (long *)0x0) {
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar7);
        }
      }
      FUN_0575a4ec(uVar8,uVar1,plVar5,lVar11,plVar6,plVar7);
      if ((in_stack_00000000 == 0) || (lVar3 = *(long *)(in_stack_00000000 + 0x18), lVar3 == 0))
      goto LAB_0575a45c;
      lVar11 = *(long *)(lVar3 + 0x10);
      lVar12 = *(long *)PTR_DAT_06d59740;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_0575a45c;
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar2 + 1;
        puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
        *puVar10 = uVar8;
        thunk_FUN_02f411dc(puVar10,uVar8);
      }
      else {
        FUN_03fd0c9c(lVar3,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      unaff_x21 = unaff_x21 + 1;
      if ((long)(int)*(uint *)(unaff_x28 + 0x18) <= (long)unaff_x21) {
        return in_stack_00000000;
      }
      if (*(uint *)(unaff_x28 + 0x18) <= unaff_x21) goto LAB_0575a460;
      unaff_x23 = *(long *)(in_stack_00000008 + unaff_x21 * 8);
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
    } while (*(char *)(unaff_x29 + 1999) != '\0');
    FUN_02f07e70();
    in_w8 = 1;
  } while( true );
}


