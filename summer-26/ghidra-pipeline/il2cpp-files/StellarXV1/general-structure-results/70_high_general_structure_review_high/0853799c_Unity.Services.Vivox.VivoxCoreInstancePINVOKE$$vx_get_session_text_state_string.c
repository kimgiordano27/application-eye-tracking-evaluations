/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_get_session_text_state_string
ENTRY_POINT: 0853799c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08537dfc) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_get_session_text_state_string
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x26;
  undefined8 *unaff_x28;
  uint unaff_w29;
  undefined8 *in_stack_00000010;
  long in_stack_00000190;
  long *in_stack_00000198;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_040ec700();
  if (*(long *)(unaff_x26 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (in_stack_00000190 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_00000190 + 0x20) = *(undefined8 *)(*(long *)(unaff_x26 + 0x1a0) + 0x58);
  thunk_FUN_040ec700();
  if (in_stack_00000190 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar9 = *unaff_x28;
  *(undefined8 *)(in_stack_00000190 + 0x30) = unaff_x28[1];
  *(undefined8 *)(in_stack_00000190 + 0x28) = uVar9;
  *(undefined8 *)(in_stack_00000190 + 0x40) = *(undefined8 *)(unaff_x26 + 0x150);
  thunk_FUN_040ec700();
  if (in_stack_00000190 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_00000190 + 0x38) = *(undefined8 *)(unaff_x26 + 0x148);
  thunk_FUN_040ec700();
  puVar1 = PTR_DAT_09327080;
  if (in_stack_00000198 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000198;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09327080) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
        goto LAB_08537a50;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000198,*(long *)PTR_DAT_09327080,0xb);
LAB_08537a50:
  (*(code *)*puVar2)(in_stack_00000198,0,puVar2[1]);
  if (in_stack_00000198 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000198;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_08537ab4;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000198,*(long *)puVar1,0);
LAB_08537ab4:
  (*(code *)*puVar2)(in_stack_00000198);
  if (0 < (int)unaff_w29) {
    uVar6 = 0;
    do {
      lVar4 = *(long *)(unaff_x26 + 0x150);
      if ((lVar4 == 0) || (in_stack_00000198 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar5 = *in_stack_00000198;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_08537b40;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000198,*(long *)puVar1,0);
LAB_08537b40:
      (*(code *)*puVar2)(in_stack_00000198,lVar4 + uVar6 * 0x10 + 0x20,3,puVar2[1]);
      lVar4 = *(long *)(unaff_x26 + 0x148);
      if ((lVar4 == 0) || (in_stack_00000198 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar5 = *in_stack_00000198;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_08537bc0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000198,*(long *)puVar1,0);
LAB_08537bc0:
      (*(code *)*puVar2)(in_stack_00000198,lVar4 + uVar6 * 0x10 + 0x20,3,puVar2[1]);
      uVar6 = uVar6 + 1;
    } while (uVar6 != unaff_w29);
  }
  puVar1 = PTR_DAT_0932dd00;
  lVar4 = *(long *)PTR_DAT_0932dd00;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = *(undefined8 **)(lVar4 + 0xb8);
  lVar5 = puVar2[10];
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar9 = *puVar2;
    lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932de78);
    FUN_06ac8788(lVar5,uVar9,*(undefined8 *)PTR_DAT_0932de90,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
    *plVar3 = lVar5;
    thunk_FUN_040ec700(plVar3,lVar5);
  }
  if (in_stack_00000198 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000198;
  lVar10 = *(long *)PTR_DAT_0932de80;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_08537cc8;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  lVar4 = FUN_040b1e00(in_stack_00000198);
LAB_08537cc8:
  lVar4 = thunk_FUN_04096bb4(*(undefined8 *)(lVar4 + 8),lVar10);
  (**(code **)(lVar4 + 8))(in_stack_00000198,lVar5,lVar4);
  if (in_stack_00000190 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *(long *)(in_stack_00000190 + 0x38);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  uVar9 = *(undefined8 *)(lVar4 + 0x20);
  in_stack_00000010[1] = *(undefined8 *)(lVar4 + 0x28);
  *in_stack_00000010 = uVar9;
  if (in_stack_00000198 != (long *)0x0) {
    lVar4 = *in_stack_00000198;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08537d70;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000198,*(long *)PTR_DAT_092860c0,0);
LAB_08537d70:
    (*(code *)*puVar2)(in_stack_00000198,puVar2[1]);
  }
  return;
}


