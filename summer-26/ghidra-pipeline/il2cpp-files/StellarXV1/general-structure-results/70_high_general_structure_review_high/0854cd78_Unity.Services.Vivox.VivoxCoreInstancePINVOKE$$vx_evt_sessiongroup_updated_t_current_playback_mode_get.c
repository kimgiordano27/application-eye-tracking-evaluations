/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_current_playback_mode_get
ENTRY_POINT: 0854cd78
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0854d184) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_current_playback_mode_get
               (void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  long *in_stack_00000018;
  
  FUN_083e7714();
  puVar2 = PTR_DAT_09327080;
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *unaff_x24;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09327080) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
        goto LAB_0854ce3c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0854ce3c:
  (*(code *)*puVar4)();
  puVar3 = PTR_DAT_09327ed0;
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *in_stack_00000018;
  uVar5 = *(undefined8 *)(unaff_x19 + 200);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xd0);
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09327ed0) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0854ceac;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_09327ed0,0);
LAB_0854ceac:
  (*(code *)*puVar4)(in_stack_00000018,uVar5,uVar1,0,2,puVar4[1]);
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *in_stack_00000018;
  uVar5 = *(undefined8 *)(unaff_x19 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xe8);
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_0854cf24;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)puVar3,4);
LAB_0854cf24:
  uVar5 = (*(code *)*puVar4)(in_stack_00000018,uVar5,uVar1,2,puVar4[1]);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_0854c57c(uVar5,unaff_x20 + 0x18,unaff_x22 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = *in_stack_00000018;
  lVar6 = *(long *)puVar2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 9) * 0x10 + 0x138);
        goto LAB_0854cfb4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000018,lVar6,9);
LAB_0854cfb4:
  (*(code *)*puVar4)(in_stack_00000018,lVar7 + 0x10,puVar4[1]);
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *in_stack_00000018;
  lVar7 = *(long *)puVar2;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
        goto LAB_0854d01c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000018,lVar7,0xc);
LAB_0854d01c:
  (*(code *)*puVar4)(in_stack_00000018,1,puVar4[1]);
  FUN_0854c798();
  uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e430);
  FUN_06ac88dc();
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *in_stack_00000018;
  lVar6 = *(long *)PTR_DAT_0932e438;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_0854d0c8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  lVar7 = FUN_040b1e00(in_stack_00000018);
LAB_0854d0c8:
  lVar7 = thunk_FUN_04096bb4(*(undefined8 *)(lVar7 + 8),lVar6);
  (**(code **)(lVar7 + 8))(in_stack_00000018,uVar5,lVar7);
  if (in_stack_00000018 != (long *)0x0) {
    lVar7 = *in_stack_00000018;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0854d14c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_0854d14c:
    (*(code *)*puVar4)(in_stack_00000018,puVar4[1]);
  }
  return;
}


