/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_playback_paused_get
ENTRY_POINT: 0854ce78
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0854d184) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_playback_paused_get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x27;
  long *unaff_x28;
  long *in_stack_00000018;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0854ceac;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0854ceac:
  (*(code *)*puVar2)();
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000018;
  uVar3 = *(undefined8 *)(unaff_x19 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xe8);
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x28) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_0854cf24;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x28,4);
LAB_0854cf24:
  uVar3 = (*(code *)*puVar2)(in_stack_00000018,uVar3,uVar1,2,puVar2[1]);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_0854c57c(uVar3,unaff_x20 + 0x18,unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *in_stack_00000018;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x27) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_0854cfb4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x27,9);
LAB_0854cfb4:
  (*(code *)*puVar2)(in_stack_00000018,lVar4 + 0x10,puVar2[1]);
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000018;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x27) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
        goto LAB_0854d01c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x27,0xc);
LAB_0854d01c:
  (*(code *)*puVar2)(in_stack_00000018,1,puVar2[1]);
  FUN_0854c798();
  uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e430);
  FUN_06ac88dc();
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000018;
  lVar5 = *(long *)PTR_DAT_0932e438;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar5 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
        goto LAB_0854d0c8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar4 = FUN_040b1e00(in_stack_00000018);
LAB_0854d0c8:
  lVar4 = thunk_FUN_04096bb4(*(undefined8 *)(lVar4 + 8),lVar5);
  (**(code **)(lVar4 + 8))(in_stack_00000018,uVar3,lVar4);
  if (in_stack_00000018 != (long *)0x0) {
    lVar4 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0854d14c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_0854d14c:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
  return;
}


