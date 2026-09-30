/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_add_session
ENTRY_POINT: 085a2ff8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x085a3424) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_add_session
               (long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  uint *unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  undefined8 uVar12;
  long lVar13;
  undefined8 *unaff_x22;
  long in_stack_00000010;
  long *in_stack_00000018;
  
  (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar12 = *unaff_x22;
  *(undefined8 *)(in_stack_00000010 + 0x18) = unaff_x22[1];
  *(undefined8 *)(in_stack_00000010 + 0x10) = uVar12;
  puVar4 = PTR_DAT_09327080;
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *in_stack_00000018;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09327080) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_085a3088;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_09327080,0);
LAB_085a3088:
  (*(code *)*puVar5)(in_stack_00000018);
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_00000010 + 0x38) = *(undefined8 *)(unaff_x20 + 0xc0);
  *(byte *)(in_stack_00000010 + 0x30) = unaff_w21 & 1;
  thunk_FUN_040ec700();
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_00000010 + 0x40) = *(undefined8 *)(unaff_x20 + 0xd0);
  thunk_FUN_040ec700();
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar1 = *(undefined4 *)(unaff_x20 + 0xb8);
  lVar7 = *(long *)PTR_DAT_09324758;
  *(undefined4 *)(in_stack_00000010 + 0x48) = *(undefined4 *)(unaff_x20 + 200);
  *(undefined4 *)(in_stack_00000010 + 0x4c) = uVar1;
  uVar2 = *unaff_x19;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce5a == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5a = '\x01';
  }
  puVar3 = PTR_DAT_092b9d10;
  if (*(int *)(*(long *)PTR_DAT_092b9d10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce5b == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5b = '\x01';
  }
  uVar2 = uVar2 & 0xffff0000;
  if (uVar2 != 0) {
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar7 = *(long *)puVar3;
    }
    puVar8 = *(uint **)(lVar7 + 0xb8);
    if (uVar2 != *puVar8) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar8 = *(uint **)(*(long *)puVar3 + 0xb8);
      }
      if (uVar2 != puVar8[1]) goto LAB_085a3224;
    }
    FUN_08990480(*(undefined8 *)PTR_DAT_0932d9b8,0);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar9 = *in_stack_00000018;
    lVar7 = *(long *)puVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_085a3210;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000018,lVar7,3);
LAB_085a3210:
    (*(code *)*puVar5)(in_stack_00000018);
  }
LAB_085a3224:
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *in_stack_00000018;
  lVar7 = *(long *)puVar4;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar7) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
        goto LAB_085a327c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000018,lVar7,0xb);
LAB_085a327c:
  (*(code *)*puVar5)(in_stack_00000018,0,puVar5[1]);
  puVar4 = PTR_DAT_0932fee0;
  lVar7 = *(long *)PTR_DAT_0932fee0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar7 = *(long *)puVar4;
  }
  puVar5 = *(undefined8 **)(lVar7 + 0xb8);
  lVar9 = puVar5[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar5 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar5;
    lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932fec0);
    FUN_06ac88dc(lVar9,uVar12,*(undefined8 *)PTR_DAT_0932fed8,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar9;
    thunk_FUN_040ec700(plVar6,lVar9);
  }
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *in_stack_00000018;
  lVar13 = *(long *)PTR_DAT_0932fec8;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)(lVar13 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
        goto FUN_085a3370;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  lVar7 = FUN_040b1e00(in_stack_00000018);
FUN_085a3370:
  lVar7 = thunk_FUN_04096bb4(*(undefined8 *)(lVar7 + 8),lVar13);
  (**(code **)(lVar7 + 8))(in_stack_00000018,lVar9,lVar7);
  if (in_stack_00000018 != (long *)0x0) {
    lVar7 = *in_stack_00000018;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_085a33f4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_085a33f4:
    (*(code *)*puVar5)(in_stack_00000018,puVar5[1]);
  }
  return;
}


