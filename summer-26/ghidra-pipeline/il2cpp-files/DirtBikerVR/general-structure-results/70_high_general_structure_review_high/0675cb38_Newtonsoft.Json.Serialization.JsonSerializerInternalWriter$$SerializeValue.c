/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 0675cb38
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ushort *puVar7;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint unaff_w27;
  ulong uVar11;
  int unaff_w29;
  uint uStack000000000000000c;
  undefined1 *in_stack_00000018;
  
  puVar3 = PTR_DAT_084a5b08;
  uVar8 = 0;
  if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar9 = unaff_w29 - 0x30;
  if (uVar9 < 10) {
    uStack000000000000000c = unaff_w27;
    if (unaff_w29 == 0x30) {
      do {
        uVar8 = uVar8 + 1;
        if (unaff_w23 <= uVar8) {
          uVar11 = 0;
          uVar10 = 1;
          goto LAB_0675cdd0;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        uVar6 = (ulong)uVar1;
      } while (uVar1 == 0x30);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar9 = uVar1 - 0x30;
      if (uVar9 < 10) goto LAB_0675cbcc;
      uVar11 = 0;
      uVar9 = uVar8;
LAB_0675ccec:
      uVar8 = (uint)uVar6;
      bVar2 = false;
LAB_0675ccf0:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((uVar8 - 9 < 5) || (uVar8 == 0x20)) {
        if ((uStack000000000000000c >> 1 & 1) == 0) goto LAB_0675cdc8;
        uVar9 = uVar9 + 1;
        if ((int)uVar9 < (int)unaff_w23) {
          puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
          do {
            if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            uVar1 = *puVar7;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0675cd70;
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (unaff_w23 != uVar9);
          if (bVar2) goto LAB_0675ce14;
          goto LAB_0675cdfc;
        }
LAB_0675cd70:
        if (unaff_w23 <= uVar9) goto LAB_0675cdc0;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar6 = FUN_0675d708();
      if ((uVar6 & 1) == 0) goto LAB_0675cdc8;
LAB_0675cdc0:
      if (!bVar2) goto LAB_0675cdfc;
    }
    else {
LAB_0675cbcc:
      uVar11 = (ulong)uVar9;
      uVar9 = uVar8 + 0x13;
      iVar5 = 1;
      do {
        if (unaff_w23 <= uVar8 + iVar5) goto LAB_0675cdfc;
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)(uVar8 + iVar5) * 2);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (9 < uVar1 - 0x30) {
          uVar9 = uVar8 + iVar5;
          uVar6 = (ulong)(uint)uVar1;
          goto LAB_0675ccec;
        }
        iVar5 = iVar5 + 1;
        uVar11 = ((ulong)uVar1 + uVar11 * 10) - 0x30;
      } while (iVar5 != 0x13);
      if (unaff_w23 <= uVar9) {
LAB_0675cdfc:
        uVar10 = 1;
        goto LAB_0675cdd0;
      }
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      uVar6 = (ulong)uVar1;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (9 < uVar1 - 0x30) goto LAB_0675ccec;
      uVar9 = uVar8 + 0x14;
      if ((0x1999999999999999 < uVar11) ||
         ((bVar2 = false, uVar11 == 0x1999999999999999 && (0x35 < uVar1)))) {
        bVar2 = true;
      }
      uVar11 = (uVar6 + uVar11 * 10) - 0x30;
      if (unaff_w23 <= uVar9) goto LAB_0675cdc0;
      lVar4 = *(long *)puVar3;
      do {
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
        uVar8 = (uint)uVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar4 = *(long *)puVar3;
        }
        if (9 < uVar1 - 0x30) goto LAB_0675ccf0;
        uVar9 = uVar9 + 1;
        bVar2 = true;
      } while (unaff_w23 != uVar9);
    }
LAB_0675ce14:
    uVar11 = 0;
    uVar10 = 0;
    *in_stack_00000018 = 1;
  }
  else {
LAB_0675cdc8:
    uVar11 = 0;
    uVar10 = 0;
  }
LAB_0675cdd0:
  *unaff_x22 = uVar11;
  return uVar10;
}


