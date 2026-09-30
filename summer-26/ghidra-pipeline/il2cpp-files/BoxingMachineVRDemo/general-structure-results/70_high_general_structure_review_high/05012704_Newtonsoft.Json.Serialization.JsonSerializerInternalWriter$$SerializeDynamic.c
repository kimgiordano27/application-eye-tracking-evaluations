/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 05012704
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic(void)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong *unaff_x19;
  uint uVar5;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar6;
  uint unaff_w23;
  int unaff_w24;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *unaff_x27;
  
  puVar2 = PTR_DAT_06777060;
  uVar7 = unaff_w24 + 1;
  if (uVar7 < unaff_w23) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = (uint)uVar1;
    uVar8 = uVar5 - 0x30;
    if (uVar8 < 10) {
      if (uVar5 != 0x30) {
LAB_050128e0:
        uVar5 = uVar7 + 1;
        uVar11 = (ulong)uVar8;
        uVar8 = uVar7 + 0x13;
        iVar9 = -0x12;
        do {
          if (unaff_w23 <= uVar5) goto LAB_05012b70;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)(uVar7 + iVar9 + 0x13) * 2);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = (uint)uVar1;
          if (9 < uVar5 - 0x30) {
            bVar3 = false;
            uVar8 = uVar7 + iVar9 + 0x13;
            goto LAB_05012a64;
          }
          uVar5 = uVar7 + iVar9 + 0x14;
          bVar3 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          uVar11 = ((ulong)uVar1 + uVar11 * 10) - 0x30;
        } while (bVar3);
        if (unaff_w23 <= uVar5) {
LAB_05012b70:
          uVar4 = 1;
          goto LAB_05012b34;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        uVar10 = (ulong)uVar1;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (9 < uVar1 - 0x30) goto LAB_05012a60;
        uVar8 = uVar7 + 0x14;
        if ((0x1999999999999999 < uVar11) ||
           ((bVar3 = false, uVar11 == 0x1999999999999999 && (0x35 < uVar1)))) {
          bVar3 = true;
        }
        uVar11 = (uVar10 + uVar11 * 10) - 0x30;
        if (unaff_w23 <= uVar8) goto LAB_05012b5c;
        do {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
          uVar5 = (uint)uVar1;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (9 < uVar1 - 0x30) goto LAB_05012a64;
          uVar8 = uVar8 + 1;
          bVar3 = true;
        } while (unaff_w23 != uVar8);
LAB_05012b78:
        uVar11 = 0;
        uVar4 = 0;
        *unaff_x27 = 1;
        goto LAB_05012b34;
      }
      do {
        uVar7 = uVar7 + 1;
        if (unaff_w23 <= uVar7) {
          uVar11 = 0;
          goto LAB_05012b70;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
        uVar10 = (ulong)uVar1;
        uVar8 = uVar1 - 0x30;
      } while (uVar8 == 0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (uVar8 < 10) goto LAB_050128e0;
      uVar11 = 0;
      uVar8 = uVar7;
LAB_05012a60:
      uVar5 = (uint)uVar10;
      bVar3 = false;
LAB_05012a64:
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if ((uVar5 - 9 < 5) || (uVar5 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar8 = uVar8 + 1;
          if ((int)uVar8 < (int)unaff_w23) {
            puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
            do {
              if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              uVar1 = *puVar6;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_05012ae0;
              uVar8 = uVar8 + 1;
              puVar6 = puVar6 + 1;
            } while (unaff_w23 != uVar8);
          }
          else {
LAB_05012ae0:
            if (uVar8 < unaff_w23) goto LAB_05012af4;
          }
          goto LAB_05012b5c;
        }
      }
      else {
LAB_05012af4:
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_05013474();
        if ((uVar10 & 1) != 0) {
LAB_05012b5c:
          if (!bVar3) goto LAB_05012b70;
          goto LAB_05012b78;
        }
      }
    }
  }
  uVar11 = 0;
  uVar4 = 0;
LAB_05012b34:
  *unaff_x19 = uVar11;
  return uVar4;
}


