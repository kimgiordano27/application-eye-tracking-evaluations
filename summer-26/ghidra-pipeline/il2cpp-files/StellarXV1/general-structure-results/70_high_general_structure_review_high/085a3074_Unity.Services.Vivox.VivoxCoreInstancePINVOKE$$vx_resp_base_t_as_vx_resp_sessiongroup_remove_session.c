/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_remove_session
ENTRY_POINT: 085a3074
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x085a3424) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_remove_session
               (void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  uint *puVar7;
  ulong uVar8;
  int *piVar9;
  uint *unaff_x19;
  long unaff_x20;
  long lVar10;
  byte unaff_w21;
  undefined8 uVar11;
  long lVar12;
  long *unaff_x24;
  long in_stack_00000010;
  long *in_stack_00000018;
  
  puVar4 = (undefined8 *)FUN_040b1e00();
  (*(code *)*puVar4)();
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
  lVar5 = *(long *)PTR_DAT_09324758;
  *(undefined4 *)(in_stack_00000010 + 0x48) = *(undefined4 *)(unaff_x20 + 200);
  *(undefined4 *)(in_stack_00000010 + 0x4c) = uVar1;
  uVar2 = *unaff_x19;
  if (*(int *)(lVar5 + 0xe4) == 0) {
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
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar5 = *(long *)puVar3;
    }
    puVar7 = *(uint **)(lVar5 + 0xb8);
    if (uVar2 != *puVar7) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar7 = *(uint **)(*(long *)puVar3 + 0xb8);
      }
      if (uVar2 != puVar7[1]) goto LAB_085a3224;
    }
    FUN_08990480(*(undefined8 *)PTR_DAT_0932d9b8,0);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *in_stack_00000018;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_085a3210;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x24,3);
LAB_085a3210:
    (*(code *)*puVar4)(in_stack_00000018);
  }
LAB_085a3224:
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *in_stack_00000018;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
        goto LAB_085a327c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x24,0xb);
LAB_085a327c:
  (*(code *)*puVar4)(in_stack_00000018,0,puVar4[1]);
  puVar3 = PTR_DAT_0932fee0;
  lVar5 = *(long *)PTR_DAT_0932fee0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *(long *)puVar3;
  }
  puVar4 = *(undefined8 **)(lVar5 + 0xb8);
  lVar10 = puVar4[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar4 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar11 = *puVar4;
    lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932fec0);
    FUN_06ac88dc(lVar10,uVar11,*(undefined8 *)PTR_DAT_0932fed8,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar10;
    thunk_FUN_040ec700(plVar6,lVar10);
  }
  if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *in_stack_00000018;
  lVar12 = *(long *)PTR_DAT_0932fec8;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto FUN_085a3370;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  lVar5 = FUN_040b1e00(in_stack_00000018);
FUN_085a3370:
  lVar5 = thunk_FUN_04096bb4(*(undefined8 *)(lVar5 + 8),lVar12);
  (**(code **)(lVar5 + 8))(in_stack_00000018,lVar10,lVar5);
  if (in_stack_00000018 != (long *)0x0) {
    lVar5 = *in_stack_00000018;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_085a33f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_085a33f4:
    (*(code *)*puVar4)(in_stack_00000018,puVar4[1]);
  }
  return;
}


