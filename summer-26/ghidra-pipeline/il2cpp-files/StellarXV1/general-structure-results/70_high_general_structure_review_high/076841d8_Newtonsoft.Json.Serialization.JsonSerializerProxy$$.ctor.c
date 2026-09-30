/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 076841d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(void)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ushort *puVar10;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long unaff_x25;
  ulong uVar14;
  uint unaff_w28;
  long *unaff_x29;
  undefined1 *in_stack_00000018;
  
  uVar4 = FUN_07688554();
  puVar3 = PTR_DAT_092d6630;
  if ((uVar4 & 1) == 0) {
    uVar11 = 0;
    iVar9 = 1;
LAB_07684224:
    if (*(int *)(*(long *)PTR_DAT_092d6630 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar7 = unaff_w28 - 0x30;
    if (uVar7 < 10) {
      if (unaff_w28 == 0x30) {
        do {
          uVar11 = uVar11 + 1;
          if (unaff_w23 <= uVar11) {
            uVar4 = 0;
            goto LAB_076844c4;
          }
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
          uVar14 = (ulong)uVar2;
        } while (uVar2 == 0x30);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar7 = uVar2 - 0x30;
        if (uVar7 < 10) goto LAB_07684288;
        uVar8 = 0;
        uVar12 = uVar11;
LAB_076843d8:
        uVar11 = (uint)uVar14;
        bVar1 = false;
LAB_076843dc:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if ((uVar11 - 9 < 5) || (uVar11 == 0x20)) {
          if ((unaff_w22 >> 1 & 1) != 0) {
            uVar12 = uVar12 + 1;
            if ((int)uVar12 < (int)unaff_w23) {
              puVar10 = (ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
              do {
                if (unaff_w23 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                uVar2 = *puVar10;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_07684458;
                uVar12 = uVar12 + 1;
                puVar10 = puVar10 + 1;
              } while (unaff_w23 != uVar12);
            }
            else {
LAB_07684458:
              if (uVar12 < unaff_w23) goto LAB_0768446c;
            }
            goto LAB_076844a8;
          }
        }
        else {
LAB_0768446c:
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar4 = FUN_076860bc();
          if ((uVar4 & 1) != 0) {
LAB_076844a8:
            uVar4 = uVar8;
            if (!bVar1) goto LAB_076844c4;
            goto LAB_076844ac;
          }
        }
        lVar5 = 0;
        uVar6 = 0;
      }
      else {
LAB_07684288:
        uVar12 = uVar11 + 0x12;
        iVar13 = 1;
        uVar8 = (ulong)uVar7;
        do {
          uVar4 = uVar8;
          if (unaff_w23 <= uVar11 + iVar13) goto LAB_076844c4;
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)(uVar11 + iVar13) * 2);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (9 < uVar2 - 0x30) {
            uVar14 = (ulong)(uint)uVar2;
            uVar12 = uVar11 + iVar13;
            goto LAB_076843d8;
          }
          iVar13 = iVar13 + 1;
          uVar4 = ((ulong)uVar2 + uVar8 * 10) - 0x30;
          uVar8 = uVar4;
        } while (iVar13 != 0x12);
        if (unaff_w23 <= uVar12) {
LAB_076844c4:
          uVar6 = 1;
          lVar5 = uVar4 * (long)iVar9;
          goto LAB_07684390;
        }
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
        uVar14 = (ulong)uVar2;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (9 < uVar2 - 0x30) goto LAB_076843d8;
        uVar12 = uVar11 + 0x13;
        uVar8 = (uVar14 + uVar4 * 10) - 0x30;
        bVar1 = (ulong)(1U - iVar9 >> 1) + 0x7fffffffffffffff < uVar8 ||
                0xccccccccccccccc < (long)uVar4;
        if (unaff_w23 <= uVar12) goto LAB_076844a8;
        lVar5 = *(long *)puVar3;
        do {
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
          uVar11 = (uint)uVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar5 = *(long *)puVar3;
          }
          if (9 < uVar2 - 0x30) goto LAB_076843dc;
          uVar12 = uVar12 + 1;
          bVar1 = true;
        } while (unaff_w23 != uVar12);
LAB_076844ac:
        lVar5 = 0;
        uVar6 = 0;
        *in_stack_00000018 = 1;
      }
      goto LAB_07684390;
    }
  }
  else {
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar11 = *(uint *)(unaff_x25 + 0x10);
    if (uVar11 < unaff_w23) {
      iVar9 = -1;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
      goto LAB_07684224;
    }
  }
  lVar5 = 0;
  uVar6 = 0;
LAB_07684390:
  *unaff_x29 = lVar5;
  return uVar6;
}


