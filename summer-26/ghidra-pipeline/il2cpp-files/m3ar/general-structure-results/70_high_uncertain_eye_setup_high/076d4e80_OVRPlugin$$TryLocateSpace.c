/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 076d4e80
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d5050) */

void OVRPlugin__TryLocateSpace(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar8;
  long unaff_x23;
  undefined8 uVar9;
  undefined1 unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  
code_r0x076d4e80:
  if (*(char *)(unaff_x29 + 0xc0f) == '\0') {
    FUN_0403162c();
    *(undefined1 *)(unaff_x29 + 0xc0f) = unaff_w25;
  }
  lVar4 = *(long *)(*unaff_x20 + 0xb8);
  UnityEngine_UI_Dropdown__OnSubmit
            (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
             *(undefined4 *)(lVar4 + 0x14),unaff_x23,0);
  if (*(char *)(unaff_x27 + 0xe1a) == '\0') {
    FUN_0403162c();
    *(undefined1 *)(unaff_x27 + 0xe1a) = unaff_w25;
  }
  puVar5 = *(undefined4 **)(*unaff_x21 + 0xb8);
  FUN_08598c90(*puVar5,puVar5[1],puVar5[2],puVar5[3],unaff_x23,0);
  if (*(char *)(unaff_x28 + 0xc10) == '\0') {
    FUN_0403162c();
    *(undefined1 *)(unaff_x28 + 0xc10) = unaff_w25;
  }
  puVar5 = *(undefined4 **)(*unaff_x20 + 0xb8);
  FUN_08597db0(*puVar5,puVar5[1],puVar5[2],unaff_x23,0);
  do {
    if (in_stack_00000020 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000020;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076d4d6c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000020,*unaff_x26,0);
LAB_076d4d6c:
    uVar6 = (*(code *)*puVar1)(in_stack_00000020,puVar1[1]);
    if ((uVar6 & 1) != 0) break;
    if (in_stack_00000020 != (long *)0x0) {
      lVar4 = *in_stack_00000020;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076d4f84;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000020,*(long *)PTR_DAT_08f65868,0);
LAB_076d4f84:
      (*(code *)*puVar1)(in_stack_00000020,puVar1[1]);
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000028;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076d4c24;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x26,0);
LAB_076d4c24:
    uVar6 = (*(code *)*puVar1)(in_stack_00000028,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      plVar8 = (long *)*in_stack_00000018;
      if (plVar8 == (long *)0x0) goto LAB_076d5120;
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_076d50f8;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_076d50e0;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000028;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08fadf70) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076d4c90;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*(long *)PTR_DAT_08fadf70,0);
LAB_076d4c90:
    unaff_x22 = (*(code *)*puVar1)(in_stack_00000028,puVar1[1]);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar8 = *(long **)(unaff_x22 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08fadd00) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076d4d00;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08fadd00,0);
LAB_076d4d00:
    in_stack_00000020 = (long *)(*(code *)*puVar1)(plVar8,puVar1[1]);
  } while( true );
  if (in_stack_00000020 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar4 = *in_stack_00000020;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08fadd08) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_076d4dd8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000020,*(long *)PTR_DAT_08fadd08,0);
LAB_076d4dd8:
  uVar2 = (*(code *)*puVar1)(in_stack_00000020,puVar1[1]);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar4 = FUN_04c2777c(uVar9,*(undefined8 *)PTR_DAT_08f67d08);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar3 = FUN_04b60dd0(lVar4,*(undefined8 *)PTR_DAT_08fae000);
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_076d2b14(lVar3,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x28),
               *(undefined4 *)(unaff_x22 + 0x10),uVar2);
  unaff_x23 = FUN_085883f0(lVar4,0);
  uVar2 = FUN_085849e0();
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c(uVar2,uVar2);
  }
  FUN_085991ec(unaff_x23,uVar2,0);
  goto code_r0x076d4e80;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076d50e0:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076d5114;
    }
  }
LAB_076d50f8:
  puVar1 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f65868,0);
LAB_076d5114:
  (*(code *)*puVar1)(plVar8,puVar1[1]);
LAB_076d5120:
  if (in_stack_00000010 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031884();
}


