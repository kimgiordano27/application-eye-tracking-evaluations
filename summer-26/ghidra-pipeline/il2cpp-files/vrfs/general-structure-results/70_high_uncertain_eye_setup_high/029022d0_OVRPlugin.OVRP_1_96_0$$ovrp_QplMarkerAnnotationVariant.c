/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$ovrp_QplMarkerAnnotationVariant
ENTRY_POINT: 029022d0
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_96_0__ovrp_QplMarkerAnnotationVariant(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    param_2 = *unaff_x25;
    param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
    if (param_1 == 0) goto LAB_02902c20;
  }
  puVar1 = PTR_DAT_06dd3570;
  if (*(uint *)(param_1 + 0x18) < 0xb) goto LAB_02902bd4;
  if (*(long *)(param_1 + 0x70) == unaff_x22) {
    lVar5 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_02902938;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902938:
    uVar9 = (*(code *)*puVar2)();
    uVar4 = *(undefined8 *)puVar1;
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar9);
    goto LAB_029027c0;
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    param_2 = *unaff_x25;
    param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
    if (param_1 == 0) goto LAB_02902c20;
  }
  if (*(uint *)(param_1 + 0x18) < 0xc) goto LAB_02902bd4;
  if (*(long *)(param_1 + 0x78) == unaff_x22) {
    lVar5 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    puVar2 = (undefined8 *)PTR_DAT_06e199e0;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          iVar6 = *piVar8 + 9;
          goto LAB_029029f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
LAB_0290291c:
    puVar3 = (undefined8 *)FUN_015c2a80();
LAB_02902a00:
    uVar4 = (*(code *)*puVar3)();
    in_stack_00000008 = uVar4;
    uVar4 = *puVar2;
LAB_029027c0:
    unaff_x21 = thunk_FUN_015d01b0(uVar4,&stack0x00000008);
  }
  else {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    if (*(uint *)(param_1 + 0x18) < 0xd) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x80) == unaff_x22) {
      lVar5 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      puVar2 = (undefined8 *)PTR_DAT_06e4c678;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            iVar6 = *piVar8 + 10;
            goto LAB_029029f8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      goto LAB_0290291c;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    puVar1 = PTR_DAT_06e10ca0;
    if (*(uint *)(param_1 + 0x18) < 0xe) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x88) == unaff_x22) {
      lVar5 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
            goto LAB_02902a74;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902a74:
      uVar9 = (*(code *)*puVar2)();
      uVar4 = *(undefined8 *)puVar1;
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar9);
      goto LAB_029027c0;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    puVar1 = PTR_DAT_06e01080;
    if (*(uint *)(param_1 + 0x18) < 0xf) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x90) == unaff_x22) {
      lVar5 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
            goto LAB_02902ae0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902ae0:
      uVar4 = (*(code *)*puVar2)();
      in_stack_00000008 = uVar4;
      uVar4 = *(undefined8 *)puVar1;
      goto LAB_029027c0;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    puVar1 = PTR_DAT_06d98c30;
    if (*(uint *)(param_1 + 0x18) < 0x10) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x98) == unaff_x22) {
      lVar5 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
            goto LAB_02902b50;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902b50:
      _in_stack_00000008 = (*(code *)*puVar2)();
      uVar4 = *(undefined8 *)puVar1;
      goto LAB_029027c0;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    if (*(uint *)(param_1 + 0x18) < 0x11) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0xa0) == unaff_x22) {
      lVar5 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      puVar2 = (undefined8 *)PTR_DAT_06e56f18;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
LAB_02902ab0:
        if (*(long *)(piVar8 + -2) != *unaff_x24) goto code_r0x02902abc;
        iVar6 = *piVar8 + 0xe;
LAB_029029f8:
        puVar3 = (undefined8 *)(lVar5 + (long)iVar6 * 0x10 + 0x138);
        goto LAB_02902a00;
      }
      goto LAB_0290291c;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    if (*(uint *)(param_1 + 0x18) < 0x13) {
LAB_02902bd4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    if (*(long *)(param_1 + 0xb0) == unaff_x22) {
      lVar5 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
            goto LAB_02902bb0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902bb0:
      uVar4 = (*(code *)*puVar2)();
LAB_02902bc0:
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
        return uVar4;
      }
      goto LAB_02902bd0;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_1 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
      if (param_1 == 0) {
LAB_02902c20:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
    }
    if (*(uint *)(param_1 + 0x18) < 2) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x28) != unaff_x22) {
      lVar5 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x10) * 0x10 + 0x138);
            goto LAB_02902b88;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902b88:
      uVar4 = (*(code *)*puVar2)();
      goto LAB_02902bc0;
    }
  }
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return unaff_x21;
  }
LAB_02902bd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x02902abc:
  uVar7 = uVar7 - 1;
  piVar8 = piVar8 + 4;
  if (uVar7 == 0) goto LAB_0290291c;
  goto LAB_02902ab0;
}


