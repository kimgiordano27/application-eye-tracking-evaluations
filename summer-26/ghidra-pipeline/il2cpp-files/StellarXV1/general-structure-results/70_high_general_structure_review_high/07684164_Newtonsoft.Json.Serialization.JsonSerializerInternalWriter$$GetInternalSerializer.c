/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 07684164
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(void)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  int iVar9;
  ulong uVar10;
  ulong unaff_x27;
  uint uVar11;
  ulong *unaff_x29;
  undefined1 *in_stack_00000018;
  
  puVar3 = PTR_DAT_092d6630;
  if (unaff_w24 < unaff_w23) {
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (*(int *)(*(long *)PTR_DAT_092d6630 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar11 = (uint)uVar2;
    uVar6 = uVar11 - 0x30;
    if (uVar6 < 10) {
      if (uVar11 == 0x30) {
        do {
          unaff_w24 = unaff_w24 + 1;
          if (unaff_w23 <= unaff_w24) {
            unaff_x27 = 0;
            goto LAB_076844c4;
          }
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
          uVar10 = (ulong)uVar2;
        } while (uVar2 == 0x30);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar6 = uVar2 - 0x30;
        if (uVar6 < 10) goto LAB_07684288;
        uVar7 = 0;
        uVar11 = unaff_w24;
LAB_076843d8:
        uVar6 = (uint)uVar10;
        bVar1 = false;
LAB_076843dc:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if ((uVar6 - 9 < 5) || (uVar6 == 0x20)) {
          if ((unaff_w22 >> 1 & 1) != 0) {
            uVar11 = uVar11 + 1;
            if ((int)uVar11 < (int)unaff_w23) {
              puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
              do {
                if (unaff_w23 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                uVar2 = *puVar8;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_07684458;
                uVar11 = uVar11 + 1;
                puVar8 = puVar8 + 1;
              } while (unaff_w23 != uVar11);
            }
            else {
LAB_07684458:
              if (uVar11 < unaff_w23) goto LAB_0768446c;
            }
            goto LAB_076844a8;
          }
        }
        else {
LAB_0768446c:
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar10 = FUN_076860bc();
          if ((uVar10 & 1) != 0) {
LAB_076844a8:
            unaff_x27 = uVar7;
            if (!bVar1) goto LAB_076844c4;
            goto LAB_076844ac;
          }
        }
        unaff_x27 = 0;
        uVar5 = 0;
      }
      else {
LAB_07684288:
        uVar11 = unaff_w24 + 0x12;
        iVar9 = 1;
        uVar7 = (ulong)uVar6;
        do {
          unaff_x27 = uVar7;
          if (unaff_w23 <= unaff_w24 + iVar9) goto LAB_076844c4;
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar9) * 2);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (9 < uVar2 - 0x30) {
            uVar10 = (ulong)(uint)uVar2;
            uVar11 = unaff_w24 + iVar9;
            goto LAB_076843d8;
          }
          iVar9 = iVar9 + 1;
          unaff_x27 = ((ulong)uVar2 + uVar7 * 10) - 0x30;
          uVar7 = unaff_x27;
        } while (iVar9 != 0x12);
        if (unaff_w23 <= uVar11) {
LAB_076844c4:
          uVar5 = 1;
          goto LAB_07684390;
        }
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
        uVar10 = (ulong)uVar2;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (9 < uVar2 - 0x30) goto LAB_076843d8;
        uVar11 = unaff_w24 + 0x13;
        uVar7 = (uVar10 + unaff_x27 * 10) - 0x30;
        bVar1 = 0x7fffffffffffffff < uVar7 || 0xccccccccccccccc < (long)unaff_x27;
        if (unaff_w23 <= uVar11) goto LAB_076844a8;
        lVar4 = *(long *)puVar3;
        do {
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
          uVar6 = (uint)uVar2;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar4 = *(long *)puVar3;
          }
          if (9 < uVar2 - 0x30) goto LAB_076843dc;
          uVar11 = uVar11 + 1;
          bVar1 = true;
        } while (unaff_w23 != uVar11);
LAB_076844ac:
        unaff_x27 = 0;
        uVar5 = 0;
        *in_stack_00000018 = 1;
      }
      goto LAB_07684390;
    }
    unaff_x27 = 0;
  }
  uVar5 = 0;
LAB_07684390:
  *unaff_x29 = unaff_x27;
  return uVar5;
}


