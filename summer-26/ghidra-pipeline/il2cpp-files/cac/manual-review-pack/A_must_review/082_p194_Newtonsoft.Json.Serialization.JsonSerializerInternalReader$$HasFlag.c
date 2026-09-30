/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasFlag
ENTRY_POINT: 074bacdc
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasFlag(long param_1)

{
  ulong uVar1;
  bool in_ZR;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int in_w10;
  int in_w11;
  long in_x12;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  undefined1 auVar14 [16];
  uint uStack000000000000000c;
  
  if (!in_ZR) {
    in_w11 = in_w10;
    in_x12 = param_1;
  }
  uVar11 = (uint)((ulong)in_x12 >> 0x3f) ^ 1;
  uVar10 = in_x12 << uVar11;
  iVar5 = in_w11 - uVar11;
  uStack000000000000000c = iVar5;
  if ((unaff_w24 & 0xf) != 0) {
    lVar3 = *unaff_x22;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar3 = *unaff_x22;
    }
    lVar6 = *(long *)(lVar3 + 0xb8);
    lVar9 = *(long *)(lVar6 + 0x38);
    if (lVar9 == 0) goto LAB_074baf54;
    uVar11 = (unaff_w24 & 0xf) - 1;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_074baf58;
    iVar7 = (int)*(char *)(lVar9 + (ulong)uVar11 + 0x20);
    iVar8 = 1 - iVar7;
    if (-1 < unaff_w23) {
      iVar8 = iVar7;
    }
    uStack000000000000000c = iVar8 + iVar5;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar3 = *unaff_x22;
      lVar6 = *(long *)(lVar3 + 0xb8);
    }
    lVar6 = *(long *)(lVar6 + 0x30);
    if (lVar6 == 0) goto LAB_074baf54;
    uVar11 = uVar11 + (unaff_w23 >> 0x1f & 0xfU);
    if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_074baf58;
    uVar12 = *(undefined8 *)(lVar6 + (ulong)uVar11 * 8 + 0x20);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar10 = FUN_074c34f0(uVar10,uVar12,&stack0x0000000c);
  }
  if (unaff_w24 < 0x10) {
LAB_074bae6c:
    iVar5 = uStack000000000000000c;
    if ((((uint)uVar10 >> 10 & 1) != 0) &&
       (uVar1 = uVar10 + (uVar10 >> 0xb & 1) + 0x3ff, bVar2 = uVar1 < uVar10, uVar10 = uVar1, bVar2)
       ) {
      uVar10 = uVar1 >> 1 | 0x8000000000000000;
      iVar5 = uStack000000000000000c + 1;
    }
    uStack000000000000000c = iVar5 + 0x3fe;
    if ((int)uStack000000000000000c < 1) {
      if ((uStack000000000000000c == 0xffffffcc) && (0x8000000000000057 < uVar10)) {
        uVar10 = 1;
      }
      else if ((int)uStack000000000000000c < -0x33) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar10 >> ((ulong)(-iVar5 - 0x3f2) & 0x3f);
      }
    }
    else if (uStack000000000000000c < 0x7ff) {
      uVar10 = uVar10 >> 0xb & 0xfffffffffffff | (ulong)uStack000000000000000c << 0x34;
    }
    else {
      uVar10 = 0x7ff0000000000000;
    }
    uVar4 = FUN_074c4764();
    uVar1 = uVar10 | 0x8000000000000000;
    if ((uVar4 & 1) == 0) {
      uVar1 = uVar10;
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar1;
    return auVar14;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar3 = *unaff_x22;
  }
  lVar6 = *(long *)(lVar3 + 0xb8);
  lVar9 = *(long *)(lVar6 + 0x48);
  if (lVar9 != 0) {
    lVar13 = (long)((int)unaff_w24 >> 4) + -1;
    uVar11 = (uint)lVar13;
    if (uVar11 < *(uint *)(lVar9 + 0x18)) {
      iVar8 = (int)*(short *)(lVar9 + lVar13 * 2 + 0x20);
      iVar5 = 1 - iVar8;
      if (-1 < unaff_w23) {
        iVar5 = iVar8;
      }
      uStack000000000000000c = iVar5 + uStack000000000000000c;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar3 = *unaff_x22;
        lVar6 = *(long *)(lVar3 + 0xb8);
      }
      lVar6 = *(long *)(lVar6 + 0x40);
      if (lVar6 == 0) goto LAB_074baf54;
      uVar11 = uVar11 + (unaff_w23 >> 0x1f & 0x15U);
      if (uVar11 < *(uint *)(lVar6 + 0x18)) {
        uVar12 = *(undefined8 *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar10 = FUN_074c34f0(uVar10,uVar12,&stack0x0000000c);
        goto LAB_074bae6c;
      }
    }
LAB_074baf58:
                    /* WARNING: Subroutine does not return */
    FUN_03f13634();
  }
LAB_074baf54:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


