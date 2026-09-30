/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_unset_focus
ENTRY_POINT: 085a316c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x085a3424) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_unset_focus
               (void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  int unaff_w21;
  undefined8 uVar8;
  long lVar9;
  long *unaff_x24;
  long *in_stack_00000018;
  
  piVar4 = *(int **)(*unaff_x20 + 0xb8);
  if (unaff_w21 != *piVar4) {
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      piVar4 = *(int **)(*unaff_x20 + 0xb8);
    }
    if (unaff_w21 != piVar4[1]) goto LAB_085a3224;
  }
  FUN_08990480(*(undefined8 *)PTR_DAT_0932d9b8,0);
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *in_stack_00000018;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto LAB_085a3210;
      }
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x24,3);
LAB_085a3210:
  (*(code *)*puVar2)(in_stack_00000018);
LAB_085a3224:
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *in_stack_00000018;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 0xb) * 0x10 + 0x138);
        goto LAB_085a327c;
      }
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x24,0xb);
LAB_085a327c:
  (*(code *)*puVar2)(in_stack_00000018,0,puVar2[1]);
  puVar1 = PTR_DAT_0932fee0;
  lVar5 = *(long *)PTR_DAT_0932fee0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *(long *)puVar1;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
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
  lVar5 = *in_stack_00000018;
  lVar9 = *(long *)PTR_DAT_0932fec8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto FUN_085a3370;
      }
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_040b1e00(in_stack_00000018);
FUN_085a3370:
  lVar5 = thunk_FUN_04096bb4(*(undefined8 *)(lVar5 + 8),lVar9);
  (**(code **)(lVar5 + 8))(in_stack_00000018,lVar7,lVar5);
  if (in_stack_00000018 != (long *)0x0) {
    lVar5 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_085a33f4;
        }
        uVar6 = uVar6 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_085a33f4:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
  return;
}


