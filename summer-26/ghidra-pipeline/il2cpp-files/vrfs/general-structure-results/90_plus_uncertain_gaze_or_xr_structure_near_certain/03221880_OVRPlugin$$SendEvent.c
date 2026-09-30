/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 03221880
PROGRAM: vrfs-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16] OVRPlugin__SendEvent(ulong param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  ushort *puVar10;
  int in_w11;
  ulong in_x12;
  long unaff_x19;
  int unaff_w20;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long unaff_x21;
  undefined8 uVar14;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar15;
  long unaff_x25;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  
  for (puVar10 = (ushort *)(unaff_x21 + 2); puVar10 < (ushort *)(unaff_x21 + (long)unaff_w24 * 2);
      puVar10 = puVar10 + 1) {
    in_w11 = (uint)*puVar10 + (in_w11 - 0x30U) * 10;
  }
  uVar11 = (param_1 >> (in_x12 & 0x3f) & 0xffffffff) * unaff_x25 + (ulong)(in_w11 - 0x30U);
  uVar1 = *(int *)(unaff_x19 + 4) + (unaff_w23 - unaff_w20);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar13 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar13 = uVar1;
  }
  if ((int)uVar13 < 0x160) {
    bVar2 = uVar11 >> 0x20 == 0;
    if (bVar2) {
      uVar11 = uVar11 << 0x20;
    }
    iVar9 = 0x40;
    if (bVar2) {
      iVar9 = 0x20;
    }
    bVar2 = uVar11 >> 0x30 == 0;
    if (bVar2) {
      uVar11 = uVar11 << 0x10;
    }
    if (bVar2) {
      iVar9 = iVar9 + -0x10;
    }
    bVar2 = uVar11 >> 0x38 == 0;
    if (bVar2) {
      uVar11 = uVar11 << 8;
    }
    if (bVar2) {
      iVar9 = iVar9 + -8;
    }
    bVar2 = uVar11 >> 0x3c == 0;
    if (bVar2) {
      uVar11 = uVar11 << 4;
    }
    if (bVar2) {
      iVar9 = iVar9 + -4;
    }
    if (uVar11 >> 0x3e == 0) {
      iVar9 = iVar9 + -2;
      uVar11 = uVar11 << 2;
    }
    iVar9 = iVar9 + ~(uint)((long)uVar11 >> 0x3f);
    uVar11 = uVar11 << (~uVar11 >> 0x3f);
    in_stack_00000008._4_4_ = iVar9;
    if ((int)((ulong)uVar13 & 0xf) != 0) {
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *unaff_x22;
      }
      lVar5 = *(long *)(lVar3 + 0xb8);
      lVar8 = *(long *)(lVar5 + 0x38);
      if (lVar8 == 0) goto LAB_03221bdc;
      lVar16 = ((ulong)uVar13 & 0xf) - 1;
      uVar15 = (uint)lVar16;
      if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_03221be0;
      iVar6 = (int)*(char *)(lVar8 + lVar16 + 0x20);
      iVar7 = 1 - iVar6;
      if (-1 < (int)uVar1) {
        iVar7 = iVar6;
      }
      in_stack_00000008._4_4_ = iVar7 + iVar9;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *unaff_x22;
        lVar5 = *(long *)(lVar3 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x30);
      if (lVar5 == 0) goto LAB_03221bdc;
      uVar15 = uVar15 + ((int)uVar1 >> 0x1f & 0xfU);
      if (*(uint *)(lVar5 + 0x18) <= uVar15) goto LAB_03221be0;
      uVar14 = *(undefined8 *)(lVar5 + (long)(int)uVar15 * 8 + 0x20);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar11 = FUN_0322a924(uVar11,uVar14,(long)&stack0x00000008 + 4);
    }
    if ((int)uVar13 >> 4 != 0) {
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
      lVar16 = (long)((int)uVar13 >> 4) + -1;
      uVar13 = (uint)lVar16;
      if (*(uint *)(lVar8 + 0x18) <= uVar13) {
LAB_03221be0:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      iVar7 = (int)*(short *)(lVar8 + lVar16 * 2 + 0x20);
      iVar9 = 1 - iVar7;
      if (-1 < (int)uVar1) {
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
      uVar13 = uVar13 + ((int)uVar1 >> 0x1f & 0x15U);
      if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_03221be0;
      uVar14 = *(undefined8 *)(lVar5 + (long)(int)uVar13 * 8 + 0x20);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar11 = FUN_0322a924(uVar11,uVar14,(long)&stack0x00000008 + 4);
    }
    uVar12 = uVar11;
    if ((((uint)uVar11 >> 10 & 1) != 0) &&
       (uVar12 = uVar11 + (uVar11 >> 0xb & 1) + 0x3ff, uVar12 < uVar11)) {
      uVar12 = uVar12 >> 1 | 0x8000000000000000;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    uVar1 = in_stack_00000008._4_4_ + 0x3fe;
    if ((int)uVar1 < 1) {
      if ((uVar12 < 0x8000000000000058) || (uVar1 != 0xffffffcc)) {
        if ((int)uVar1 < -0x33) {
          uVar12 = 0;
          in_stack_00000008._4_4_ = uVar1;
        }
        else {
          uVar12 = uVar12 >> ((ulong)(0xe - in_stack_00000008._4_4_) & 0x3f);
          in_stack_00000008._4_4_ = uVar1;
        }
      }
      else {
        uVar12 = 1;
        in_stack_00000008._4_4_ = uVar1;
      }
    }
    else if ((int)uVar1 < 0x7ff) {
      uVar12 = uVar12 >> 0xb & 0xfffffffffffff | (ulong)uVar1 << 0x34;
      in_stack_00000008._4_4_ = uVar1;
    }
    else {
      uVar12 = 0x7ff0000000000000;
      in_stack_00000008._4_4_ = uVar1;
    }
  }
  else {
    uVar12 = 0x7ff0000000000000;
    if ((int)uVar1 < 1) {
      uVar12 = 0;
    }
  }
  uVar4 = FUN_031c833c();
  uVar11 = uVar12 | 0x8000000000000000;
  if ((uVar4 & 1) == 0) {
    uVar11 = uVar12;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar11;
  return auVar17;
}


