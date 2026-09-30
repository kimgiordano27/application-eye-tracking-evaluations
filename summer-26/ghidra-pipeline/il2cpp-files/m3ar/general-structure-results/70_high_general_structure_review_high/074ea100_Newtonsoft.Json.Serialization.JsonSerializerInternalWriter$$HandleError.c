/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 074ea100
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(void)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ushort *puVar11;
  uint uVar12;
  long unaff_x19;
  int unaff_w20;
  ulong uVar13;
  uint uVar14;
  long unaff_x21;
  undefined8 uVar15;
  long lVar16;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  ulong unaff_x25;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  
  thunk_FUN_0408f364();
  lVar10 = *(long *)(*unaff_x22 + 0xb8);
  lVar6 = *(long *)(lVar10 + 0x30);
  if (lVar6 == 0) {
LAB_074ea4bc:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar8 = (long)unaff_w24 + -1;
  if ((uint)lVar8 < *(uint *)(lVar6 + 0x18)) {
    lVar10 = *(long *)(lVar10 + 0x38);
    if (lVar10 == 0) goto LAB_074ea4bc;
    if ((uint)lVar8 < *(uint *)(lVar10 + 0x18)) {
      uVar12 = (uint)*(ushort *)(unaff_x21 + 0x12);
      for (puVar11 = (ushort *)(unaff_x21 + 0x14);
          puVar11 < (ushort *)(unaff_x21 + 0x12 + (ulong)(uint)(unaff_w24 << 1));
          puVar11 = puVar11 + 1) {
        uVar12 = (uint)*puVar11 + (uVar12 - 0x30) * 10;
      }
      uVar13 = (*(ulong *)(lVar6 + lVar8 * 8 + 0x20) >>
                ((ulong)-(uint)*(byte *)(lVar10 + lVar8 + 0x20) & 0x3f) & 0xffffffff) *
               (unaff_x25 & 0xffffffff) + (ulong)(uVar12 - 0x30);
      uVar12 = ((unaff_w23 - unaff_w24) - unaff_w20) + *(int *)(unaff_x19 + 4);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar14 = -uVar12;
      if (-1 < (int)uVar12) {
        uVar14 = uVar12;
      }
      if ((int)uVar14 < 0x160) {
        bVar4 = uVar13 >> 0x20 != 0;
        uVar1 = uVar13 << 0x20;
        if (bVar4) {
          uVar1 = uVar13;
        }
        iVar9 = 0x20;
        if (bVar4) {
          iVar9 = 0x40;
        }
        iVar7 = iVar9 + -0x10;
        uVar13 = uVar1 << 0x10;
        if (uVar1 >> 0x30 != 0) {
          iVar7 = iVar9;
          uVar13 = uVar1;
        }
        iVar9 = iVar7 + -8;
        uVar1 = uVar13 << 8;
        if (uVar13 >> 0x38 != 0) {
          iVar9 = iVar7;
          uVar1 = uVar13;
        }
        iVar7 = iVar9 + -4;
        uVar5 = uVar1 << 4;
        if (uVar1 >> 0x3c != 0) {
          iVar7 = iVar9;
          uVar5 = uVar1;
        }
        iVar9 = iVar7 + -2;
        uVar13 = uVar5 << 2;
        if (uVar5 >> 0x3e != 0) {
          iVar9 = iVar7;
          uVar13 = uVar5;
        }
        uVar2 = (uint)(uVar13 >> 0x3f) ^ 1;
        uVar13 = uVar13 << uVar2;
        uVar2 = iVar9 - uVar2;
        in_stack_00000008._4_4_ = uVar2;
        if ((uVar14 & 0xf) != 0) {
          lVar6 = *unaff_x22;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar6 = *unaff_x22;
          }
          lVar10 = *(long *)(lVar6 + 0xb8);
          lVar8 = *(long *)(lVar10 + 0x38);
          if (lVar8 == 0) goto LAB_074ea4bc;
          uVar3 = (uVar14 & 0xf) - 1;
          if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_074ea4c0;
          iVar7 = (int)*(char *)(lVar8 + (ulong)uVar3 + 0x20);
          iVar9 = 1 - iVar7;
          if (-1 < (int)uVar12) {
            iVar9 = iVar7;
          }
          in_stack_00000008._4_4_ = iVar9 + uVar2;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar6 = *unaff_x22;
            lVar10 = *(long *)(lVar6 + 0xb8);
          }
          lVar10 = *(long *)(lVar10 + 0x30);
          if (lVar10 == 0) goto LAB_074ea4bc;
          uVar3 = uVar3 + ((int)uVar12 >> 0x1f & 0xfU);
          if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_074ea4c0;
          uVar15 = *(undefined8 *)(lVar10 + (ulong)uVar3 * 8 + 0x20);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar13 = FUN_074f2a58(uVar13,uVar15,(long)&stack0x00000008 + 4);
        }
        if (0xf < uVar14) {
          lVar6 = *unaff_x22;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar6 = *unaff_x22;
          }
          lVar10 = *(long *)(lVar6 + 0xb8);
          lVar8 = *(long *)(lVar10 + 0x48);
          if (lVar8 == 0) goto LAB_074ea4bc;
          lVar16 = (long)((int)uVar14 >> 4) + -1;
          uVar14 = (uint)lVar16;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_074ea4c0;
          iVar7 = (int)*(short *)(lVar8 + lVar16 * 2 + 0x20);
          iVar9 = 1 - iVar7;
          if (-1 < (int)uVar12) {
            iVar9 = iVar7;
          }
          in_stack_00000008._4_4_ = iVar9 + in_stack_00000008._4_4_;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar6 = *unaff_x22;
            lVar10 = *(long *)(lVar6 + 0xb8);
          }
          lVar10 = *(long *)(lVar10 + 0x40);
          if (lVar10 == 0) goto LAB_074ea4bc;
          uVar14 = uVar14 + ((int)uVar12 >> 0x1f & 0x15U);
          if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_074ea4c0;
          uVar15 = *(undefined8 *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar13 = FUN_074f2a58(uVar13,uVar15,(long)&stack0x00000008 + 4);
        }
        uVar12 = in_stack_00000008._4_4_;
        if ((((uint)uVar13 >> 10 & 1) != 0) &&
           (uVar1 = uVar13 + (uVar13 >> 0xb & 1) + 0x3ff, bVar4 = uVar1 < uVar13, uVar13 = uVar1,
           bVar4)) {
          uVar13 = uVar1 >> 1 | 0x8000000000000000;
          uVar12 = in_stack_00000008._4_4_ + 1;
        }
        in_stack_00000008._4_4_ = uVar12 + 0x3fe;
        if ((int)in_stack_00000008._4_4_ < 1) {
          if ((in_stack_00000008._4_4_ == 0xffffffcc) && (0x8000000000000057 < uVar13)) {
            uVar13 = 1;
          }
          else if ((int)in_stack_00000008._4_4_ < -0x33) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar13 >> ((ulong)(-uVar12 - 0x3f2) & 0x3f);
          }
        }
        else if (in_stack_00000008._4_4_ < 0x7ff) {
          uVar13 = uVar13 >> 0xb & 0xfffffffffffff | (ulong)in_stack_00000008._4_4_ << 0x34;
        }
        else {
          uVar13 = 0x7ff0000000000000;
        }
      }
      else {
        uVar13 = 0x7ff0000000000000;
        if ((int)uVar12 < 1) {
          uVar13 = 0;
        }
      }
      uVar5 = FUN_074f3a04();
      uVar1 = uVar13 | 0x8000000000000000;
      if ((uVar5 & 1) == 0) {
        uVar1 = uVar13;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar1;
      return auVar17;
    }
  }
LAB_074ea4c0:
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


