/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_loop_buffer_capacity_get
ENTRY_POINT: 0854cf78
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0854d184) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_loop_buffer_capacity_get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  long lVar6;
  long *unaff_x27;
  long *in_stack_00000018;
  
  piVar5 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 9) * 0x10 + 0x138);
      goto LAB_0854cfb4;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0854cfb4:
  (*(code *)*puVar1)();
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *in_stack_00000018;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x27) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xc) * 0x10 + 0x138);
        goto LAB_0854d01c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x27,0xc);
LAB_0854d01c:
  (*(code *)*puVar1)(in_stack_00000018,1,puVar1[1]);
  FUN_0854c798();
  uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e430);
  FUN_06ac88dc();
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *in_stack_00000018;
  lVar6 = *(long *)PTR_DAT_0932e438;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_0854d0c8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_040b1e00(in_stack_00000018);
LAB_0854d0c8:
  lVar3 = thunk_FUN_04096bb4(*(undefined8 *)(lVar3 + 8),lVar6);
  (**(code **)(lVar3 + 8))(in_stack_00000018,uVar2,lVar3);
  if (in_stack_00000018 != (long *)0x0) {
    lVar3 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0854d14c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_0854d14c:
    (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  }
  return;
}


