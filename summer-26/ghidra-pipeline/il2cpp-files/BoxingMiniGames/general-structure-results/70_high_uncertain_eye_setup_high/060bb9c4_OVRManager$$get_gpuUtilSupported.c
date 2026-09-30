/*
FUNCTION_NAME: OVRManager$$get_gpuUtilSupported
ENTRY_POINT: 060bb9c4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_gpuUtilSupported(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long *unaff_x20;
  uint uVar8;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
                    /* catch() { ... } // from try @ 060bb9b4 with catch @ 060bb9d4 */
                    /* try { // try from 060bb9d8 to 061bb9df has its CatchHandler @ 060bb9e8 */
      puVar4 = (undefined8 *)FUN_0367cd30();
                    /* try { // try from 060bb9e0 to 061bb9eb has its CatchHandler @ 060bb4ac */
      goto LAB_060bb9f4;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
                    /* catch() { ... } // from try @ 060bb9d8 with catch @ 060bb9e8 */
  puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 7) * 0x10 + 0x138);
LAB_060bb9f4:
  iVar2 = (*(code *)*puVar4)();
  puVar1 = PTR_DAT_07a20890;
  if (iVar2 == 0) {
    if (*(int *)(*(long *)PTR_DAT_07a20890 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (DAT_07ee0a92 == '\0') {
      FUN_03642964(PTR_DAT_07a20890);
      DAT_07ee0a92 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(lVar5 + 0xb8);
    in_stack_00000048 = *(undefined8 *)(lVar5 + 0x38);
    in_stack_00000040 = *(undefined8 *)(lVar5 + 0x30);
    in_stack_00000050 = *(undefined8 *)(lVar5 + 0x40);
    uVar6 = FUN_060e3510();
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (DAT_07ee0a92 == '\0') {
        FUN_03642964(PTR_DAT_07a20890);
        DAT_07ee0a92 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(lVar5 + 0xb8);
      in_stack_00000028 = *(undefined8 *)(lVar5 + 0x38);
      in_stack_00000020 = *(undefined8 *)(lVar5 + 0x30);
      in_stack_00000030 = *(undefined8 *)(lVar5 + 0x40);
      uVar6 = FUN_060e3510();
      if ((uVar6 & 1) == 0) {
        return 3;
      }
    }
    return 0;
  }
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
        goto LAB_060bbb40;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30();
LAB_060bbb40:
  (*(code *)*puVar4)();
  uVar6 = FUN_060c00fc();
  if ((uVar6 & 1) != 0) {
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_060bbbac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30();
LAB_060bbbac:
    (*(code *)*puVar4)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar6 = FUN_060e3510();
    if ((uVar6 & 1) == 0) {
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
            goto LAB_060bbc44;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0367cd30();
LAB_060bbc44:
      (*(code *)*puVar4)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar3 = FUN_060e3a08();
      uVar3 = uVar3 & 1;
      goto LAB_060bbc78;
    }
  }
  uVar3 = 0;
LAB_060bbc78:
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
        goto LAB_060bbcc8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30();
LAB_060bbcc8:
  (*(code *)*puVar4)();
  uVar6 = FUN_060c01ac();
  uVar8 = uVar3;
  if ((uVar6 & 1) != 0) {
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_060bbd34;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30();
LAB_060bbd34:
    (*(code *)*puVar4)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar6 = FUN_060e3510();
    if ((uVar6 & 1) == 0) {
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
            goto LAB_060bbdbc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0367cd30();
LAB_060bbdbc:
      (*(code *)*puVar4)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar6 = FUN_060e3ddc();
      uVar8 = uVar3 | 2;
      if ((uVar6 & 1) == 0) {
        uVar8 = uVar3;
      }
    }
  }
  return uVar8;
}


