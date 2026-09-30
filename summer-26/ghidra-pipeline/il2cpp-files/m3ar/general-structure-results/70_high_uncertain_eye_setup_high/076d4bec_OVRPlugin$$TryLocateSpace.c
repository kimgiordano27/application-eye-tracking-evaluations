/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 076d4bec
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

void OVRPlugin__TryLocateSpace(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong in_x9;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  undefined1 unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  long *in_stack_00000028;
  
code_r0x076d4bec:
  piVar8 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076d4c24;
    }
    in_x9 = in_x9 - 1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
LAB_076d4c08:
  puVar1 = (undefined8 *)FUN_0406ae20(unaff_x22,param_3,0);
LAB_076d4c24:
  uVar2 = (*(code *)*puVar1)(unaff_x22,puVar1[1]);
  if ((uVar2 & 1) != 0) {
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *in_stack_00000028;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fadf70) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076d4c90;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*(long *)PTR_DAT_08fadf70,0);
LAB_076d4c90:
    lVar5 = (*(code *)*puVar1)(in_stack_00000028,puVar1[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar9 = *(long **)(lVar5 + 0x18);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fadd00) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076d4d00;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08fadd00,0);
LAB_076d4d00:
    plVar9 = (long *)(*(code *)*puVar1)(plVar9,puVar1[1]);
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar6 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076d4d6c;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_0406ae20(plVar9,*unaff_x26,0);
LAB_076d4d6c:
      uVar2 = (*(code *)*puVar1)(plVar9,puVar1[1]);
      if ((uVar2 & 1) == 0) goto LAB_076d4f20;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar6 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fadd08) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076d4dd8;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08fadd08,0);
LAB_076d4dd8:
      uVar3 = (*(code *)*puVar1)(plVar9,puVar1[1]);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar6 = FUN_04c2777c(uVar10,*(undefined8 *)PTR_DAT_08f67d08);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar4 = FUN_04b60dd0(lVar6,*(undefined8 *)PTR_DAT_08fae000);
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_076d2b14(lVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x28),
                   *(undefined4 *)(lVar5 + 0x10),uVar3);
      lVar6 = FUN_085883f0(lVar6,0);
      uVar3 = FUN_085849e0();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c(uVar3,uVar3);
      }
      FUN_085991ec(lVar6,uVar3,0);
      if (*(char *)(unaff_x29 + 0xc0f) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x29 + 0xc0f) = unaff_w25;
      }
      lVar4 = *(long *)(*unaff_x20 + 0xb8);
      UnityEngine_UI_Dropdown__OnSubmit
                (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                 *(undefined4 *)(lVar4 + 0x14),lVar6,0);
      if (*(char *)(unaff_x27 + 0xe1a) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x27 + 0xe1a) = unaff_w25;
      }
      puVar7 = *(undefined4 **)(*unaff_x21 + 0xb8);
      FUN_08598c90(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar6,0);
      if (*(char *)(unaff_x28 + 0xc10) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x28 + 0xc10) = unaff_w25;
      }
      puVar7 = *(undefined4 **)(*unaff_x20 + 0xb8);
      FUN_08597db0(*puVar7,puVar7[1],puVar7[2],lVar6,0);
    } while( true );
  }
  plVar9 = (long *)*in_stack_00000018;
  if (plVar9 == (long *)0x0) goto LAB_076d5120;
  lVar5 = *plVar9;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 == 0) goto LAB_076d50f8;
  piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
  goto LAB_076d50e0;
LAB_076d4f20:
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076d4f84;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f65868,0);
LAB_076d4f84:
    (*(code *)*puVar1)(plVar9,puVar1[1]);
  }
  if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  param_1 = *in_stack_00000028;
  param_3 = *unaff_x26;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  unaff_x22 = in_stack_00000028;
  if (in_x9 != 0) goto code_r0x076d4be8;
  goto LAB_076d4c08;
code_r0x076d4be8:
  in_x10 = *(long *)(param_1 + 0xb0);
  goto code_r0x076d4bec;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar8 = piVar8 + 4;
    if (uVar2 == 0) break;
LAB_076d50e0:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076d5114;
    }
  }
LAB_076d50f8:
  puVar1 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f65868,0);
LAB_076d5114:
  (*(code *)*puVar1)(plVar9,puVar1[1]);
LAB_076d5120:
  if (in_stack_00000010 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031884();
}


