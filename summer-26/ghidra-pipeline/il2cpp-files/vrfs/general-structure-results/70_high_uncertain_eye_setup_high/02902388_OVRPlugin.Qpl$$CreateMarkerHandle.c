/*
FUNCTION_NAME: OVRPlugin.Qpl$$CreateMarkerHandle
ENTRY_POINT: 02902388
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Qpl__CreateMarkerHandle(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  puVar1 = PTR_DAT_06e10ca0;
  if (*(uint *)(param_1 + 0x18) < 0xe) goto LAB_02902bd4;
  if (*(long *)(param_1 + 0x88) == unaff_x22) {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
          goto LAB_02902a74;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902a74:
    uVar7 = (*(code *)*puVar2)();
    uVar3 = *(undefined8 *)puVar1;
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar7);
LAB_029027c0:
    unaff_x21 = thunk_FUN_015d01b0(uVar3,&stack0x00000008);
  }
  else {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    puVar1 = PTR_DAT_06e01080;
    if (*(uint *)(param_1 + 0x18) < 0xf) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0x90) == unaff_x22) {
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
            goto LAB_02902ae0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902ae0:
      uVar3 = (*(code *)*puVar2)();
      in_stack_00000008 = uVar3;
      uVar3 = *(undefined8 *)puVar1;
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
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
            goto LAB_02902b50;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902b50:
      _in_stack_00000008 = (*(code *)*puVar2)();
      uVar3 = *(undefined8 *)puVar1;
      goto LAB_029027c0;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x25;
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_02902c20;
    }
    puVar1 = PTR_DAT_06e56f18;
    if (*(uint *)(param_1 + 0x18) < 0x11) goto LAB_02902bd4;
    if (*(long *)(param_1 + 0xa0) == unaff_x22) {
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xe) * 0x10 + 0x138);
            goto LAB_02902a00;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902a00:
      uVar3 = (*(code *)*puVar2)();
      in_stack_00000008 = uVar3;
      uVar3 = *(undefined8 *)puVar1;
      goto LAB_029027c0;
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
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xf) * 0x10 + 0x138);
            goto LAB_02902bb0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902bb0:
      uVar3 = (*(code *)*puVar2)();
LAB_02902bc0:
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
        return uVar3;
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
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x10) * 0x10 + 0x138);
            goto LAB_02902b88;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02902b88:
      uVar3 = (*(code *)*puVar2)();
      goto LAB_02902bc0;
    }
  }
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return unaff_x21;
  }
LAB_02902bd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


