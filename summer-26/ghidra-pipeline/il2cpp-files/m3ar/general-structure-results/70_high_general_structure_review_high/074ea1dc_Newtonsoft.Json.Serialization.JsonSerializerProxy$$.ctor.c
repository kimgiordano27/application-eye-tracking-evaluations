/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 074ea1dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(long param_1)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong in_x9;
  long lVar9;
  int in_w10;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  ulong unaff_x25;
  undefined1 auVar14 [16];
  uint uStack000000000000000c;
  
  if (param_1 != 0) {
    in_x9 = unaff_x25;
  }
  iVar5 = 0x20;
                    /* try { // try from 074ea1e8 to 075ea23b has its CatchHandler @ 074ea1e8
                       catch() { ... } // from try @ 074ea1e8 with catch @ 074ea1e8
                       catch() { ... } // from try @ 074ea2f4 with catch @ 074ea1e8
                       catch() { ... } // from try @ 074ea3c8 with catch @ 074ea1e8
                       catch() { ... } // from try @ 074ea418 with catch @ 074ea1e8
                       catch() { ... } // from try @ 074ea44c with catch @ 074ea1e8 */
  if (param_1 != 0) {
    iVar5 = in_w10;
  }
  iVar8 = iVar5 + -0x10;
  uVar1 = in_x9 << 0x10;
  if (in_x9 >> 0x30 != 0) {
    iVar8 = iVar5;
    uVar1 = in_x9;
  }
  iVar5 = iVar8 + -8;
  uVar10 = uVar1 << 8;
  if (uVar1 >> 0x38 != 0) {
    iVar5 = iVar8;
    uVar10 = uVar1;
  }
  iVar8 = iVar5 + -4;
  uVar1 = uVar10 << 4;
  if (uVar10 >> 0x3c != 0) {
    iVar8 = iVar5;
    uVar1 = uVar10;
  }
                    /* try { // try from 074ea23c to 075ea24f has its CatchHandler @ 074ea3dc */
  iVar5 = iVar8 + -2;
  uVar10 = uVar1 << 2;
  if (uVar1 >> 0x3e != 0) {
    iVar5 = iVar8;
    uVar10 = uVar1;
  }
  uVar11 = (uint)(uVar10 >> 0x3f) ^ 1;
  uVar10 = uVar10 << uVar11;
  iVar5 = iVar5 - uVar11;
  uStack000000000000000c = iVar5;
  if ((unaff_w24 & 0xf) != 0) {
    lVar3 = *unaff_x22;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar3 = *unaff_x22;
    }
    lVar6 = *(long *)(lVar3 + 0xb8);
    lVar9 = *(long *)(lVar6 + 0x38);
    if (lVar9 == 0) goto LAB_074ea4bc;
    uVar11 = (unaff_w24 & 0xf) - 1;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_074ea4c0;
    iVar7 = (int)*(char *)(lVar9 + (ulong)uVar11 + 0x20);
    iVar8 = 1 - iVar7;
    if (-1 < unaff_w23) {
      iVar8 = iVar7;
    }
    uStack000000000000000c = iVar8 + iVar5;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar3 = *unaff_x22;
      lVar6 = *(long *)(lVar3 + 0xb8);
    }
    lVar6 = *(long *)(lVar6 + 0x30);
    if (lVar6 == 0) goto LAB_074ea4bc;
    uVar11 = uVar11 + (unaff_w23 >> 0x1f & 0xfU);
    if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_074ea4c0;
    uVar12 = *(undefined8 *)(lVar6 + (ulong)uVar11 * 8 + 0x20);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar10 = FUN_074f2a58(uVar10,uVar12,&stack0x0000000c);
  }
  if (unaff_w24 < 0x10) {
LAB_074ea3d4:
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
    uVar4 = FUN_074f3a04();
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
    thunk_FUN_0408f364();
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
        thunk_FUN_0408f364();
        lVar3 = *unaff_x22;
        lVar6 = *(long *)(lVar3 + 0xb8);
      }
      lVar6 = *(long *)(lVar6 + 0x40);
      if (lVar6 == 0) goto LAB_074ea4bc;
      uVar11 = uVar11 + (unaff_w23 >> 0x1f & 0x15U);
      if (uVar11 < *(uint *)(lVar6 + 0x18)) {
        uVar12 = *(undefined8 *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar10 = FUN_074f2a58(uVar10,uVar12,&stack0x0000000c);
        goto LAB_074ea3d4;
      }
    }
LAB_074ea4c0:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
LAB_074ea4bc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


