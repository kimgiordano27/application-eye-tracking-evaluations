/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 029021c0
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_Qpl__MarkerAnnotation(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if (*(long *)(param_1 + 0x40) == unaff_x22) {
    lVar7 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    puVar4 = (undefined8 *)PTR_DAT_06e18670;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x24) {
          iVar8 = *piVar10 + 2;
          goto LAB_029026e0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    goto LAB_02902614;
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    param_2 = *unaff_x25;
    param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
    if (param_1 == 0) goto LAB_02902c20;
  }
  if (*(uint *)(param_1 + 0x18) < 6) goto LAB_02902bd4;
  if (*(long *)(param_1 + 0x48) == unaff_x22) {
    lVar7 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    puVar4 = (undefined8 *)PTR_DAT_06e5e6c8;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x24) {
          iVar8 = *piVar10 + 3;
          goto LAB_02902798;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
FUN_029026cc:
    puVar5 = (undefined8 *)FUN_015c2a80();
LAB_029027a0:
    uVar2 = (*(code *)*puVar5)();
    uVar6 = *puVar4;
    in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2);
LAB_029027c0:
    unaff_x21 = thunk_FUN_015d01b0(uVar6,&stack0x00000008);
  }
  else {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    if (*(uint *)(param_1 + 0x18) < 7) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x50) == unaff_x22) {
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      puVar4 = (undefined8 *)PTR_DAT_06e0ce20;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
OVRPlugin_Qpl_Variant__From:
        if (*(long *)(piVar10 + -2) != *unaff_x24) goto code_r0x029026bc;
        iVar8 = *piVar10 + 4;
LAB_02902798:
        puVar5 = (undefined8 *)(lVar7 + (long)iVar8 * 0x10 + 0x138);
        goto LAB_029027a0;
      }
      goto FUN_029026cc;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    if (*(uint *)(param_1 + 0x18) < 8) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x58) == unaff_x22) {
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      puVar4 = (undefined8 *)PTR_DAT_06e467c0;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            iVar8 = *piVar10 + 5;
            goto LAB_029026e0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
LAB_02902614:
      puVar5 = (undefined8 *)FUN_015c2a80();
LAB_029026e8:
      uVar3 = (*(code *)*puVar5)();
      uVar6 = *puVar4;
      in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar3);
      goto LAB_029027c0;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    if (*(uint *)(param_1 + 0x18) < 9) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x60) == unaff_x22) {
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      puVar4 = (undefined8 *)PTR_DAT_06dc2fe0;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
LAB_02902770:
        if (*(long *)(piVar10 + -2) != *unaff_x24) goto code_r0x0290277c;
        iVar8 = *piVar10 + 6;
LAB_029026e0:
        puVar5 = (undefined8 *)(lVar7 + (long)iVar8 * 0x10 + 0x138);
        goto LAB_029026e8;
      }
      goto LAB_02902614;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    if (*(uint *)(param_1 + 0x18) < 10) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x68) == unaff_x22) {
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      puVar4 = (undefined8 *)PTR_DAT_06e1faf8;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            iVar8 = *piVar10 + 7;
            goto LAB_02902930;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
LAB_0290287c:
      puVar5 = (undefined8 *)FUN_015c2a80();
LAB_02902938:
      uVar11 = (*(code *)*puVar5)();
      uVar6 = *puVar4;
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar11);
      goto LAB_029027c0;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    if (*(uint *)(param_1 + 0x18) < 0xb) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x70) == unaff_x22) {
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      puVar4 = (undefined8 *)PTR_DAT_06dd3570;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
LAB_02902860:
        if (*(long *)(piVar10 + -2) != *unaff_x24) goto code_r0x0290286c;
        iVar8 = *piVar10 + 8;
LAB_02902930:
        puVar5 = (undefined8 *)(lVar7 + (long)iVar8 * 0x10 + 0x138);
        goto LAB_02902938;
      }
      goto LAB_0290287c;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    if (*(uint *)(param_1 + 0x18) < 0xc) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x78) == unaff_x22) {
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      puVar4 = (undefined8 *)PTR_DAT_06e199e0;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            iVar8 = *piVar10 + 9;
            goto LAB_029029f8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
LAB_0290291c:
      puVar5 = (undefined8 *)FUN_015c2a80();
LAB_02902a00:
      uVar6 = (*(code *)*puVar5)();
      in_stack_00000008 = uVar6;
      uVar6 = *puVar4;
      goto LAB_029027c0;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    if (*(uint *)(param_1 + 0x18) < 0xd) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x80) == unaff_x22) {
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      puVar4 = (undefined8 *)PTR_DAT_06e4c678;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            iVar8 = *piVar10 + 10;
            goto LAB_029029f8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
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
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
            goto LAB_02902a74;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_015c2a80();
LAB_02902a74:
      uVar11 = (*(code *)*puVar4)();
      uVar6 = *(undefined8 *)puVar1;
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar11);
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
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
            goto LAB_02902ae0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_015c2a80();
LAB_02902ae0:
      uVar6 = (*(code *)*puVar4)();
      in_stack_00000008 = uVar6;
      uVar6 = *(undefined8 *)puVar1;
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
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
            goto LAB_02902b50;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_015c2a80();
LAB_02902b50:
      _in_stack_00000008 = (*(code *)*puVar4)();
      uVar6 = *(undefined8 *)puVar1;
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
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      puVar4 = (undefined8 *)PTR_DAT_06e56f18;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
LAB_02902ab0:
        if (*(long *)(piVar10 + -2) != *unaff_x24) goto code_r0x02902abc;
        iVar8 = *piVar10 + 0xe;
LAB_029029f8:
        puVar5 = (undefined8 *)(lVar7 + (long)iVar8 * 0x10 + 0x138);
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
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xf) * 0x10 + 0x138);
            goto LAB_02902bb0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_015c2a80();
LAB_02902bb0:
      uVar6 = (*(code *)*puVar4)();
LAB_02902bc0:
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
        return uVar6;
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
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x10) * 0x10 + 0x138);
            goto LAB_02902b88;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_015c2a80();
LAB_02902b88:
      uVar6 = (*(code *)*puVar4)();
      goto LAB_02902bc0;
    }
  }
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return unaff_x21;
  }
LAB_02902bd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x029026bc:
  uVar9 = uVar9 - 1;
  piVar10 = piVar10 + 4;
  if (uVar9 == 0) goto FUN_029026cc;
  goto OVRPlugin_Qpl_Variant__From;
code_r0x0290277c:
  uVar9 = uVar9 - 1;
  piVar10 = piVar10 + 4;
  if (uVar9 == 0) goto LAB_02902614;
  goto LAB_02902770;
code_r0x0290286c:
  uVar9 = uVar9 - 1;
  piVar10 = piVar10 + 4;
  if (uVar9 == 0) goto LAB_0290287c;
  goto LAB_02902860;
code_r0x02902abc:
  uVar9 = uVar9 - 1;
  piVar10 = piVar10 + 4;
  if (uVar9 == 0) goto LAB_0290291c;
  goto LAB_02902ab0;
}


