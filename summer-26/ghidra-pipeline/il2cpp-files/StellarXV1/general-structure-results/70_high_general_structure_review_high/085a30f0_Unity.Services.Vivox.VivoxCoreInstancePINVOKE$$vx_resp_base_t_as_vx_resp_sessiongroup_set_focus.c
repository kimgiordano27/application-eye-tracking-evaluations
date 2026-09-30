/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_set_focus
ENTRY_POINT: 085a30f0
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_set_focus
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  uint unaff_w21;
  undefined8 uVar9;
  long lVar10;
  long *unaff_x24;
  long *in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce5a == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5a = '\x01';
  }
  puVar1 = PTR_DAT_092b9d10;
  if (*(int *)(*(long *)PTR_DAT_092b9d10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce5b == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5b = '\x01';
  }
  if ((unaff_w21 & 0xffff0000) != 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar2 = *(long *)puVar1;
    }
    puVar5 = *(uint **)(lVar2 + 0xb8);
    if ((unaff_w21 & 0xffff0000) != *puVar5) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar5 = *(uint **)(*(long *)puVar1 + 0xb8);
      }
      if ((unaff_w21 & 0xffff0000) != puVar5[1]) goto LAB_085a3224;
    }
    FUN_08990480(*(undefined8 *)PTR_DAT_0932d9b8,0);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar2 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_085a3210;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x24,3);
LAB_085a3210:
    (*(code *)*puVar3)(in_stack_00000018);
  }
LAB_085a3224:
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar2 = *in_stack_00000018;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x24) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_085a327c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x24,0xb);
LAB_085a327c:
  (*(code *)*puVar3)(in_stack_00000018,0,puVar3[1]);
  puVar1 = PTR_DAT_0932fee0;
  lVar2 = *(long *)PTR_DAT_0932fee0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar8 = puVar3[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar9 = *puVar3;
    lVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932fec0);
    FUN_06ac88dc(lVar8,uVar9,*(undefined8 *)PTR_DAT_0932fed8,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar8;
    thunk_FUN_040ec700(plVar4,lVar8);
  }
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar2 = *in_stack_00000018;
  lVar10 = *(long *)PTR_DAT_0932fec8;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar2 = lVar2 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto FUN_085a3370;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar2 = FUN_040b1e00(in_stack_00000018);
FUN_085a3370:
  lVar2 = thunk_FUN_04096bb4(*(undefined8 *)(lVar2 + 8),lVar10);
  (**(code **)(lVar2 + 8))(in_stack_00000018,lVar8,lVar2);
  if (in_stack_00000018 != (long *)0x0) {
    lVar2 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_085a33f4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_085a33f4:
    (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
  }
  return;
}


