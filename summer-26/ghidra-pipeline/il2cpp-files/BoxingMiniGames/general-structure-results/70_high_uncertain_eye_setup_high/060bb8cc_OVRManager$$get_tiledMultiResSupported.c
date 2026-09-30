/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResSupported
ENTRY_POINT: 060bb8cc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_tiledMultiResSupported(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  uint uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
                    /* try { // try from 060bb8cc to 061bb8d7 has its CatchHandler @ 060bb96c */
  if ((param_1 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a20890);
                    /* try { // try from 060bb8e0 to 061bb8e3 has its CatchHandler @ 060bb960 */
    FUN_03642964(PTR_DAT_07a20898);
    FUN_03642964(PTR_DAT_07a20878);
    *(undefined1 *)(unaff_x19 + 0x9c7) = 1;
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x22 == (long *)0x0) {
LAB_060bbe14:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar8 = *unaff_x22;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07a20878) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 4) * 0x10 + 0x138);
        goto LAB_060bb968;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_0367cd30();
LAB_060bb968:
  lVar8 = (*(code *)*puVar7)();
  if (lVar8 == 0) goto LAB_060bbe14;
  uVar3 = FUN_060e3404(lVar8,0);
  uVar4 = FUN_060e34e4(lVar8,0);
  puVar2 = PTR_DAT_07a20898;
  if (unaff_x20 == (long *)0x0) goto LAB_060bbe14;
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07a20898) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto LAB_060bb9f4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_0367cd30();
LAB_060bb9f4:
  iVar5 = (*(code *)*puVar7)();
  puVar1 = PTR_DAT_07a20890;
  if (iVar5 == 0) {
    if (*(int *)(*(long *)PTR_DAT_07a20890 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (DAT_07ee0a92 == '\0') {
      FUN_03642964(PTR_DAT_07a20890);
      DAT_07ee0a92 = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar9 = *(long *)puVar1;
    }
    lVar9 = *(long *)(lVar9 + 0xb8);
    in_stack_00000048 = *(undefined8 *)(lVar9 + 0x38);
    in_stack_00000040 = *(undefined8 *)(lVar9 + 0x30);
    in_stack_00000050 = *(undefined8 *)(lVar9 + 0x40);
    uVar10 = FUN_060e3510(lVar8,&stack0x00000040,uVar3,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (DAT_07ee0a92 == '\0') {
        FUN_03642964(PTR_DAT_07a20890);
        DAT_07ee0a92 = '\x01';
      }
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar9 = *(long *)puVar1;
      }
      lVar9 = *(long *)(lVar9 + 0xb8);
      in_stack_00000028 = *(undefined8 *)(lVar9 + 0x38);
      in_stack_00000020 = *(undefined8 *)(lVar9 + 0x30);
      in_stack_00000030 = *(undefined8 *)(lVar9 + 0x40);
      uVar10 = FUN_060e3510(lVar8,&stack0x00000020,uVar4,0);
      if ((uVar10 & 1) == 0) {
        return 3;
      }
    }
    return 0;
  }
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto LAB_060bbb40;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_0367cd30();
LAB_060bbb40:
  (*(code *)*puVar7)();
  uVar10 = FUN_060c00fc();
  if ((uVar10 & 1) != 0) {
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_060bbbac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30();
LAB_060bbbac:
    (*(code *)*puVar7)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar10 = FUN_060e3510(lVar8,&stack0x00000040,uVar3,0);
    if ((uVar10 & 1) == 0) {
      lVar9 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_060bbc44;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30();
LAB_060bbc44:
      (*(code *)*puVar7)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar6 = FUN_060e3a08(lVar8,&stack0x00000020,0);
      uVar6 = uVar6 & 1;
      goto LAB_060bbc78;
    }
  }
  uVar6 = 0;
LAB_060bbc78:
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto LAB_060bbcc8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_0367cd30();
LAB_060bbcc8:
  (*(code *)*puVar7)();
  uVar10 = FUN_060c01ac();
  uVar12 = uVar6;
  if ((uVar10 & 1) != 0) {
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_060bbd34;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30();
LAB_060bbd34:
    (*(code *)*puVar7)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar10 = FUN_060e3510(lVar8,&stack0x00000040,uVar4,0);
    if ((uVar10 & 1) == 0) {
      lVar9 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_060bbdbc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30();
LAB_060bbdbc:
      (*(code *)*puVar7)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar10 = FUN_060e3ddc(lVar8,&stack0x00000020,0);
      uVar12 = uVar6 | 2;
      if ((uVar10 & 1) == 0) {
        uVar12 = uVar6;
      }
    }
  }
  return uVar12;
}


