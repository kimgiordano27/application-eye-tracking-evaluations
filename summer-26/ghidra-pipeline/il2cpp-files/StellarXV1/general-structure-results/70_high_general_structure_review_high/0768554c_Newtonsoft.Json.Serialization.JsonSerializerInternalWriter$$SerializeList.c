/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 0768554c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList(void)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong unaff_x20;
  ushort *puVar7;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  uint unaff_w25;
  undefined4 uVar9;
  long *unaff_x26;
  uint unaff_w27;
  ulong uVar10;
  uint uStack000000000000000c;
  undefined1 *in_stack_00000018;
  
  while ((int)unaff_x20 == 0x30) {
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w23 <= unaff_w24) {
      uVar10 = 0;
      uVar9 = 1;
      goto LAB_07685784;
    }
    unaff_x20 = (ulong)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar8 = (int)unaff_x20 - 0x30;
  uStack000000000000000c = unaff_w27;
  if (uVar8 < 10) {
    uVar10 = (ulong)uVar8;
    uVar8 = unaff_w24 + 0x13;
    iVar5 = 1;
    do {
      if (unaff_w23 <= unaff_w24 + iVar5) goto LAB_076857b0;
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar5) * 2);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (9 < uVar1 - 0x30) {
        uVar8 = unaff_w24 + iVar5;
        unaff_x20 = (ulong)(uint)uVar1;
        goto LAB_076856a0;
      }
      iVar5 = iVar5 + 1;
      uVar10 = ((ulong)uVar1 + uVar10 * 10) - 0x30;
    } while (iVar5 != 0x13);
    if (uVar8 < unaff_w23) {
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
      unaff_x20 = (ulong)uVar1;
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (9 < uVar1 - 0x30) goto LAB_076856a0;
      uVar8 = unaff_w24 + 0x14;
      if ((0x1999999999999999 < uVar10) ||
         ((bVar2 = false, uVar10 == 0x1999999999999999 && (0x35 < uVar1)))) {
        bVar2 = true;
      }
      uVar10 = (unaff_x20 + uVar10 * 10) - 0x30;
      if (unaff_w23 <= uVar8) goto LAB_07685774;
      lVar3 = *unaff_x26;
      do {
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        uVar6 = (uint)uVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar3 = *unaff_x26;
        }
        if (9 < uVar1 - 0x30) goto LAB_076856a4;
        uVar8 = uVar8 + 1;
        bVar2 = true;
      } while (unaff_w23 != uVar8);
    }
    else {
LAB_076857b0:
      if (uVar10 == 0) {
        unaff_w25 = 1;
      }
      if ((unaff_w25 & 1) != 0) {
        uVar9 = 1;
        goto LAB_07685784;
      }
    }
LAB_076857c8:
    uVar10 = 0;
    uVar9 = 0;
    *in_stack_00000018 = 1;
  }
  else {
    uVar10 = 0;
    uVar8 = unaff_w24;
LAB_076856a0:
    uVar6 = (uint)unaff_x20;
    bVar2 = false;
LAB_076856a4:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((uVar6 - 9 < 5) || (uVar6 == 0x20)) {
      if ((uStack000000000000000c >> 1 & 1) != 0) {
        uVar8 = uVar8 + 1;
        if ((int)uVar8 < (int)unaff_w23) {
          puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
          do {
            if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            uVar1 = *puVar7;
            if (*(int *)(*unaff_x26 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07685724;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while (unaff_w23 != uVar8);
          if (bVar2) goto LAB_076857c8;
          goto LAB_076857b0;
        }
LAB_07685724:
        if (unaff_w23 <= uVar8) goto LAB_07685774;
        goto LAB_07685738;
      }
    }
    else {
LAB_07685738:
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_076860bc();
      if ((uVar4 & 1) != 0) {
LAB_07685774:
        if (!bVar2) goto LAB_076857b0;
        goto LAB_076857c8;
      }
    }
    uVar10 = 0;
    uVar9 = 0;
  }
LAB_07685784:
  *unaff_x22 = uVar10;
  return uVar9;
}


