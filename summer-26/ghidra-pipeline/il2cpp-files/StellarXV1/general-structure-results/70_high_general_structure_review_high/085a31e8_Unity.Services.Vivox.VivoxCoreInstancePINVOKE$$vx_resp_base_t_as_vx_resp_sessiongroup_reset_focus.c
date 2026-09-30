/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_reset_focus
ENTRY_POINT: 085a31e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x085a3424) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_reset_focus
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *unaff_x24;
  long *in_stack_00000018;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(in_x10[4] + 3) * 0x10 + 0x138);
      goto LAB_085a3210;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_085a3210:
  (*(code *)*puVar2)();
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000018;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
        goto LAB_085a327c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x24,0xb);
LAB_085a327c:
  (*(code *)*puVar2)(in_stack_00000018,0,puVar2[1]);
  puVar1 = PTR_DAT_0932fee0;
  lVar4 = *(long *)PTR_DAT_0932fee0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar2[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932fec0);
    FUN_06ac88dc(lVar7,uVar8,*(undefined8 *)PTR_DAT_0932fed8,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar7;
    thunk_FUN_040ec700(plVar3,lVar7);
  }
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000018;
  lVar9 = *(long *)PTR_DAT_0932fec8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto FUN_085a3370;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar4 = FUN_040b1e00(in_stack_00000018);
FUN_085a3370:
  lVar4 = thunk_FUN_04096bb4(*(undefined8 *)(lVar4 + 8),lVar9);
  (**(code **)(lVar4 + 8))(in_stack_00000018,lVar7,lVar4);
  if (in_stack_00000018 != (long *)0x0) {
    lVar4 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_085a33f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_085a33f4:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
  return;
}


