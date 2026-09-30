/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRInstance
ENTRY_POINT: 0575a204
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetNativeOpenXRInstance(void)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *unaff_x19;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x28;
  undefined8 uVar10;
  long unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    FUN_02f07e70();
    *(undefined1 *)(unaff_x29 + 1999) = 1;
    do {
      lVar3 = *unaff_x19;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *unaff_x19;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) {
LAB_0575a45c:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = *(long *)(lVar3 + 0x48);
      plVar4 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
      if (plVar4 == (long *)0x0) goto LAB_0575a45c;
      if ((unaff_x23 != 0) &&
         (lVar5 = thunk_FUN_02ef170c(unaff_x23,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_0575a464:
        uVar6 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar6,0);
      }
      if ((int)plVar4[3] == 0) {
LAB_0575a460:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      plVar4[4] = unaff_x23;
      thunk_FUN_02f411dc(plVar4 + 4,unaff_x23);
      if (lVar3 == 0) goto LAB_0575a45c;
      plVar4 = (long *)(**(code **)(lVar3 + 0x18))
                                 (*(undefined8 *)(lVar3 + 0x40),0,plVar4,
                                  *(undefined8 *)(lVar3 + 0x28));
      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59758);
      if (unaff_x24 == (long *)0x0) goto LAB_0575a45c;
      if (*(long *)(*unaff_x24 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(unaff_x24);
      }
      puVar7 = (undefined4 *)thunk_FUN_02ef195c(unaff_x24);
      uVar1 = *puVar7;
      if ((unaff_x22 != (long *)0x0) && (*unaff_x22 != *(long *)PTR_DAT_06d02350)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(unaff_x22);
      }
      if (unaff_x25 == 0) {
        lVar3 = 0;
      }
      else {
        uVar10 = *(undefined8 *)PTR_DAT_06d4cd28;
        lVar3 = thunk_FUN_02ef170c(unaff_x25,uVar10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(unaff_x25,uVar10);
        }
      }
      lVar5 = *(long *)PTR_DAT_06d56d00;
      if (unaff_x26 != (long *)0x0) {
        if ((*(byte *)(*unaff_x26 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
           (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) !=
            lVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(unaff_x26);
        }
      }
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar4);
        }
      }
      FUN_0575a4ec(uVar6,uVar1,unaff_x22,lVar3,unaff_x26,plVar4);
      if ((in_stack_00000000 == 0) || (lVar3 = *(long *)(in_stack_00000000 + 0x18), lVar3 == 0))
      goto LAB_0575a45c;
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar9 = *(long *)PTR_DAT_06d59740;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0575a45c;
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar2 + 1;
        puVar8 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
        *puVar8 = uVar6;
        thunk_FUN_02f411dc(puVar8,uVar6);
      }
      else {
        FUN_03fd0c9c(lVar3,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
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
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0)) goto LAB_0575a45c;
      unaff_x24 = (long *)(**(code **)(lVar3 + 0x18))
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
      unaff_x22 = (long *)(**(code **)(lVar3 + 0x18))
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
      lVar9 = *(long *)(lVar3 + 0x68);
      lVar5 = *(long *)PTR_DAT_06d05520;
      lVar3 = *(long *)(lVar5 + 0x38);
      if (lVar3 == 0) {
        FUN_02eea7c4(lVar5);
        lVar3 = *(long *)(lVar5 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768();
      }
      if (lVar9 == 0) goto LAB_0575a45c;
      unaff_x25 = (**(code **)(lVar9 + 0x18))
                            (*(undefined8 *)(lVar9 + 0x40),unaff_x23,**(undefined8 **)(lVar3 + 0xb8)
                             ,*(undefined8 *)(lVar9 + 0x28));
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
      lVar3 = *(long *)(lVar3 + 0x40);
      plVar4 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
      if (plVar4 == (long *)0x0) goto LAB_0575a45c;
      if ((unaff_x23 != 0) &&
         (lVar5 = thunk_FUN_02ef170c(unaff_x23,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_0575a464;
      if ((int)plVar4[3] == 0) goto LAB_0575a460;
      plVar4[4] = unaff_x23;
      thunk_FUN_02f411dc(plVar4 + 4,unaff_x23);
      if (lVar3 == 0) goto LAB_0575a45c;
      unaff_x26 = (long *)(**(code **)(lVar3 + 0x18))
                                    (*(undefined8 *)(lVar3 + 0x40),0,plVar4,
                                     *(undefined8 *)(lVar3 + 0x28));
    } while (*(char *)(unaff_x29 + 1999) != '\0');
  } while( true );
}


