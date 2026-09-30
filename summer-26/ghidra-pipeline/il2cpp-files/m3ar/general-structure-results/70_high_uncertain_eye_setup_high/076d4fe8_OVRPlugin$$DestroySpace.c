/*
FUNCTION_NAME: OVRPlugin$$DestroySpace
ENTRY_POINT: 076d4fe8
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


void OVRPlugin__DestroySpace(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined1 unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  
  if (param_2 == 1) {
    plVar4 = (long *)__cxa_begin_catch(param_1);
    lVar9 = *plVar4;
    __cxa_end_catch();
code_r0x076d4f28:
    plVar4 = (long *)*in_stack_00000008;
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f65868) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076d4f84;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar4,*(long *)PTR_DAT_08f65868,0);
LAB_076d4f84:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
    plVar4 = in_stack_00000028;
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04031884(lVar9);
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar9 = *in_stack_00000028;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076d4c24;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x26,0);
LAB_076d4c24:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    plVar4 = in_stack_00000028;
    if ((uVar7 & 1) != 0) {
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar9 = *in_stack_00000028;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fadf70) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076d4c90;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*(long *)PTR_DAT_08fadf70,0);
LAB_076d4c90:
      lVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar4 = *(long **)(lVar9 + 0x18);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fadd00) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076d4d00;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar4,*(long *)PTR_DAT_08fadd00,0);
LAB_076d4d00:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      do {
        in_stack_00000020 = plVar4;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076d4d6c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(plVar4,*unaff_x26,0);
LAB_076d4d6c:
        uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        plVar4 = in_stack_00000020;
        if ((uVar7 & 1) == 0) goto LAB_076d4f20;
        if (in_stack_00000020 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar6 = *in_stack_00000020;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fadd08) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076d4dd8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000020,*(long *)PTR_DAT_08fadd08,0);
LAB_076d4dd8:
        uVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        uVar10 = *(undefined8 *)(unaff_x19 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar6 = FUN_04c2777c(uVar10,*(undefined8 *)PTR_DAT_08f67d08);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar2 = FUN_04b60dd0(lVar6,*(undefined8 *)PTR_DAT_08fae000);
        if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        FUN_076d2b14(lVar2,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x28),
                     *(undefined4 *)(lVar9 + 0x10),uVar1);
        lVar6 = FUN_085883f0(lVar6,0);
        uVar1 = FUN_085849e0();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c(uVar1,uVar1);
        }
        FUN_085991ec(lVar6,uVar1,0);
        if (*(char *)(unaff_x29 + 0xc0f) == '\0') {
          FUN_0403162c();
          *(undefined1 *)(unaff_x29 + 0xc0f) = unaff_w25;
        }
        lVar2 = *(long *)(*unaff_x20 + 0xb8);
        UnityEngine_UI_Dropdown__OnSubmit
                  (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                   *(undefined4 *)(lVar2 + 0x14),lVar6,0);
        if (*(char *)(unaff_x27 + 0xe1a) == '\0') {
          FUN_0403162c();
          *(undefined1 *)(unaff_x27 + 0xe1a) = unaff_w25;
        }
        puVar5 = *(undefined4 **)(*unaff_x21 + 0xb8);
        FUN_08598c90(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar6,0);
        if (*(char *)(unaff_x28 + 0xc10) == '\0') {
          FUN_0403162c();
          *(undefined1 *)(unaff_x28 + 0xc10) = unaff_w25;
        }
        puVar5 = *(undefined4 **)(*unaff_x20 + 0xb8);
        FUN_08597db0(*puVar5,puVar5[1],puVar5[2],lVar6,0);
        plVar4 = in_stack_00000020;
      } while( true );
    }
    goto LAB_076d50b4;
  }
  FUN_03a8b9cc();
  if (param_2 != 1) {
    FUN_03a8b9cc(&stack0x00000010);
                    /* WARNING: Subroutine does not return */
    FUN_0412026c(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  in_stack_00000010 = *plVar4;
  __cxa_end_catch();
LAB_076d50b4:
  plVar4 = (long *)*in_stack_00000018;
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076d5114;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar4,*(long *)PTR_DAT_08f65868,0);
LAB_076d5114:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031884();
  }
  return;
LAB_076d4f20:
  lVar9 = 0;
  in_stack_00000008 = &stack0x00000020;
  goto code_r0x076d4f28;
}


