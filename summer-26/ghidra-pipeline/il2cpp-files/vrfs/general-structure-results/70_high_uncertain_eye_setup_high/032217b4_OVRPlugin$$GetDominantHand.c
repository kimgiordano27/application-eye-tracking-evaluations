/*
FUNCTION_NAME: OVRPlugin$$GetDominantHand
ENTRY_POINT: 032217b4
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__GetDominantHand(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  long unaff_x19;
  int unaff_w20;
  ulong uVar12;
  ushort *unaff_x21;
  undefined8 uVar13;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  int unaff_w25;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  iVar9 = unaff_w23 - unaff_w25;
  uVar6 = (uint)*unaff_x21;
  puVar10 = unaff_x21;
  while( true ) {
    puVar10 = puVar10 + 1;
    if (unaff_x21 + unaff_w25 <= puVar10) break;
    uVar6 = (uint)*puVar10 + (uVar6 - 0x30) * 10;
  }
  uVar15 = (ulong)(uVar6 - 0x30);
  if (iVar9 < 1) {
    lVar3 = *unaff_x22;
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar3 = *unaff_x22;
    iVar7 = iVar9;
    if (8 < iVar9) {
      iVar7 = 9;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar3 = *unaff_x22;
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
    if (lVar5 == 0) goto LAB_03221bdc;
    uVar6 = iVar7 - 1;
    if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_03221be0;
    lVar8 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
    if (lVar8 == 0) goto LAB_03221bdc;
    if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_03221be0;
    iVar9 = iVar9 - iVar7;
    uVar11 = (uint)unaff_x21[9];
    for (puVar10 = unaff_x21 + 10; puVar10 < unaff_x21 + 9 + iVar7; puVar10 = puVar10 + 1) {
      uVar11 = (uint)*puVar10 + (uVar11 - 0x30) * 10;
    }
    uVar15 = (*(ulong *)(lVar5 + (long)(int)uVar6 * 8 + 0x20) >>
              ((ulong)-(uint)*(byte *)(lVar8 + (int)uVar6 + 0x20) & 0x3f) & 0xffffffff) * uVar15 +
             (ulong)(uVar11 - 0x30);
  }
  uVar6 = *(int *)(unaff_x19 + 4) + (iVar9 - unaff_w20);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar11 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar11 = uVar6;
  }
  if ((int)uVar11 < 0x160) {
    bVar2 = uVar15 >> 0x20 == 0;
    if (bVar2) {
      uVar15 = uVar15 << 0x20;
    }
    iVar9 = 0x40;
    if (bVar2) {
      iVar9 = 0x20;
    }
    bVar2 = uVar15 >> 0x30 == 0;
    if (bVar2) {
      uVar15 = uVar15 << 0x10;
    }
    if (bVar2) {
      iVar9 = iVar9 + -0x10;
    }
    bVar2 = uVar15 >> 0x38 == 0;
    if (bVar2) {
      uVar15 = uVar15 << 8;
    }
    if (bVar2) {
      iVar9 = iVar9 + -8;
    }
    bVar2 = uVar15 >> 0x3c == 0;
    if (bVar2) {
      uVar15 = uVar15 << 4;
    }
    if (bVar2) {
      iVar9 = iVar9 + -4;
    }
    if (uVar15 >> 0x3e == 0) {
      iVar9 = iVar9 + -2;
      uVar15 = uVar15 << 2;
    }
    uVar1 = iVar9 + ~(uint)((long)uVar15 >> 0x3f);
    uVar15 = uVar15 << (~uVar15 >> 0x3f);
    in_stack_00000008._4_4_ = uVar1;
    if ((int)((ulong)uVar11 & 0xf) != 0) {
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *unaff_x22;
      }
      lVar5 = *(long *)(lVar3 + 0xb8);
      lVar8 = *(long *)(lVar5 + 0x38);
      if (lVar8 == 0) goto LAB_03221bdc;
      lVar16 = ((ulong)uVar11 & 0xf) - 1;
      uVar14 = (uint)lVar16;
      if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_03221be0;
      iVar7 = (int)*(char *)(lVar8 + lVar16 + 0x20);
      iVar9 = 1 - iVar7;
      if (-1 < (int)uVar6) {
        iVar9 = iVar7;
      }
      in_stack_00000008._4_4_ = iVar9 + uVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *unaff_x22;
        lVar5 = *(long *)(lVar3 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x30);
      if (lVar5 == 0) goto LAB_03221bdc;
      uVar14 = uVar14 + ((int)uVar6 >> 0x1f & 0xfU);
      if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_03221be0;
      uVar13 = *(undefined8 *)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar15 = FUN_0322a924(uVar15,uVar13,(long)&stack0x00000008 + 4);
    }
    if ((int)uVar11 >> 4 != 0) {
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *unaff_x22;
      }
      lVar5 = *(long *)(lVar3 + 0xb8);
      lVar8 = *(long *)(lVar5 + 0x48);
      if (lVar8 == 0) {
LAB_03221bdc:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar16 = (long)((int)uVar11 >> 4) + -1;
      uVar11 = (uint)lVar16;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) {
LAB_03221be0:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      iVar7 = (int)*(short *)(lVar8 + lVar16 * 2 + 0x20);
      iVar9 = 1 - iVar7;
      if (-1 < (int)uVar6) {
        iVar9 = iVar7;
      }
      in_stack_00000008._4_4_ = iVar9 + in_stack_00000008._4_4_;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *unaff_x22;
        lVar5 = *(long *)(lVar3 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x40);
      if (lVar5 == 0) goto LAB_03221bdc;
      uVar11 = uVar11 + ((int)uVar6 >> 0x1f & 0x15U);
      if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_03221be0;
      uVar13 = *(undefined8 *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar15 = FUN_0322a924(uVar15,uVar13,(long)&stack0x00000008 + 4);
    }
    uVar12 = uVar15;
    if ((((uint)uVar15 >> 10 & 1) != 0) &&
       (uVar12 = uVar15 + (uVar15 >> 0xb & 1) + 0x3ff, uVar12 < uVar15)) {
      uVar12 = uVar12 >> 1 | 0x8000000000000000;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    uVar6 = in_stack_00000008._4_4_ + 0x3fe;
    if ((int)uVar6 < 1) {
      if ((uVar12 < 0x8000000000000058) || (uVar6 != 0xffffffcc)) {
        if ((int)uVar6 < -0x33) {
          uVar12 = 0;
          in_stack_00000008._4_4_ = uVar6;
        }
        else {
          uVar12 = uVar12 >> ((ulong)(0xe - in_stack_00000008._4_4_) & 0x3f);
          in_stack_00000008._4_4_ = uVar6;
        }
      }
      else {
        uVar12 = 1;
        in_stack_00000008._4_4_ = uVar6;
      }
    }
    else if ((int)uVar6 < 0x7ff) {
      uVar12 = uVar12 >> 0xb & 0xfffffffffffff | (ulong)uVar6 << 0x34;
      in_stack_00000008._4_4_ = uVar6;
    }
    else {
      uVar12 = 0x7ff0000000000000;
      in_stack_00000008._4_4_ = uVar6;
    }
  }
  else {
    uVar12 = 0x7ff0000000000000;
    if ((int)uVar6 < 1) {
      uVar12 = 0;
    }
  }
  uVar4 = FUN_031c833c();
  uVar15 = uVar12 | 0x8000000000000000;
  if ((uVar4 & 1) == 0) {
    uVar15 = uVar12;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar15;
  return auVar17;
}


