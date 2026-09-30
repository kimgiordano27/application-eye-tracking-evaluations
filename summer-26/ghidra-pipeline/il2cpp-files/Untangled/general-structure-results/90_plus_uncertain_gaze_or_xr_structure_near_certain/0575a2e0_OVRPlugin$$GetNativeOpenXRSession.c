/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 0575a2e0
PROGRAM: Untangled-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin__GetNativeOpenXRSession(void)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long lVar9;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 uVar10;
  long unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  while( true ) {
    puVar4 = (undefined4 *)thunk_FUN_02ef195c(unaff_x24);
    uVar1 = *puVar4;
    if ((unaff_x22 != (long *)0x0) && (*unaff_x22 != *(long *)PTR_DAT_06d02350)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(unaff_x22);
    }
    if (unaff_x25 == 0) {
      lVar5 = 0;
    }
    else {
      uVar10 = *(undefined8 *)PTR_DAT_06d4cd28;
      lVar5 = thunk_FUN_02ef170c(unaff_x25,uVar10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(unaff_x25,uVar10);
      }
    }
    lVar6 = *(long *)PTR_DAT_06d56d00;
    if (unaff_x26 != (long *)0x0) {
      if ((*(byte *)(*unaff_x26 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
         (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(unaff_x26);
      }
    }
    if (unaff_x27 != (long *)0x0) {
      if ((*(byte *)(*unaff_x27 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
         (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(unaff_x27);
      }
    }
    FUN_0575a4ec(unaff_x23,uVar1,unaff_x22,lVar5,unaff_x26,unaff_x27);
    if ((in_stack_00000000 == 0) || (lVar5 = *(long *)(in_stack_00000000 + 0x18), lVar5 == 0))
    break;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)PTR_DAT_06d59740;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
      puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
      *puVar7 = unaff_x23;
      thunk_FUN_02f411dc(puVar7,unaff_x23);
    }
    else {
      FUN_03fd0c9c(lVar5,unaff_x23,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                  );
    }
    unaff_x21 = unaff_x21 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x21) {
      return in_stack_00000000;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) goto LAB_0575a460;
    lVar5 = *(long *)(in_stack_00000008 + unaff_x21 * 8);
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (*(char *)(unaff_x29 + 1999) == '\0') {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x29 + 1999) = 1;
    }
    lVar6 = *unaff_x19;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *unaff_x19;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x60), lVar6 == 0)) break;
    unaff_x24 = (long *)(**(code **)(lVar6 + 0x18))
                                  (*(undefined8 *)(lVar6 + 0x40),lVar5,*(undefined8 *)(lVar6 + 0x28)
                                  );
    if (*(char *)(unaff_x29 + 1999) == '\0') {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x29 + 1999) = 1;
    }
    lVar6 = *unaff_x19;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *unaff_x19;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0)) break;
    unaff_x22 = (long *)(**(code **)(lVar6 + 0x18))
                                  (*(undefined8 *)(lVar6 + 0x40),lVar5,*(undefined8 *)(lVar6 + 0x28)
                                  );
    if (*(char *)(unaff_x29 + 1999) == '\0') {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x29 + 1999) = 1;
    }
    lVar6 = *unaff_x19;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *unaff_x19;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 == 0) break;
    lVar9 = *(long *)(lVar6 + 0x68);
    lVar8 = *(long *)PTR_DAT_06d05520;
    lVar6 = *(long *)(lVar8 + 0x38);
    if (lVar6 == 0) {
      FUN_02eea7c4(lVar8);
      lVar6 = *(long *)(lVar8 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    if (lVar9 == 0) break;
    unaff_x25 = (**(code **)(lVar9 + 0x18))
                          (*(undefined8 *)(lVar9 + 0x40),lVar5,**(undefined8 **)(lVar6 + 0xb8),
                           *(undefined8 *)(lVar9 + 0x28));
    if (*(char *)(unaff_x29 + 1999) == '\0') {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x29 + 1999) = 1;
    }
    lVar6 = *unaff_x19;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *unaff_x19;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 == 0) break;
    lVar6 = *(long *)(lVar6 + 0x40);
    plVar3 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
    if (plVar3 == (long *)0x0) break;
    if ((lVar5 != 0) &&
       (lVar8 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0)) {
LAB_0575a464:
      uVar10 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar10,0);
    }
    if ((int)plVar3[3] == 0) {
LAB_0575a460:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    plVar3[4] = lVar5;
    thunk_FUN_02f411dc(plVar3 + 4,lVar5);
    if (lVar6 == 0) break;
    unaff_x26 = (long *)(**(code **)(lVar6 + 0x18))
                                  (*(undefined8 *)(lVar6 + 0x40),0,plVar3,
                                   *(undefined8 *)(lVar6 + 0x28));
    if (*(char *)(unaff_x29 + 1999) == '\0') {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x29 + 1999) = 1;
    }
    lVar6 = *unaff_x19;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *unaff_x19;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 == 0) break;
    lVar6 = *(long *)(lVar6 + 0x48);
    plVar3 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
    if (plVar3 == (long *)0x0) break;
    if ((lVar5 != 0) &&
       (lVar8 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0))
    goto LAB_0575a464;
    if ((int)plVar3[3] == 0) goto LAB_0575a460;
    plVar3[4] = lVar5;
    thunk_FUN_02f411dc(plVar3 + 4,lVar5);
    if (lVar6 == 0) break;
    unaff_x27 = (long *)(**(code **)(lVar6 + 0x18))
                                  (*(undefined8 *)(lVar6 + 0x40),0,plVar3,
                                   *(undefined8 *)(lVar6 + 0x28));
    unaff_x23 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59758);
    if (unaff_x24 == (long *)0x0) break;
    if (*(long *)(*unaff_x24 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(unaff_x24);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


