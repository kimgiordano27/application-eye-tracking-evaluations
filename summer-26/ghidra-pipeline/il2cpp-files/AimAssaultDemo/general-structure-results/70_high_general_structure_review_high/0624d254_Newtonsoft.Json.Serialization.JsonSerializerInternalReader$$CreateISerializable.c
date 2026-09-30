/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 0624d254
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(void)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar7;
  uint unaff_w23;
  uint unaff_w24;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 *unaff_x27;
  int unaff_w28;
  ulong uVar11;
  uint uVar12;
  
  puVar3 = PTR_DAT_07daae20;
  if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar12 = unaff_w28 - 0x30;
  if (9 < uVar12) goto LAB_0624d66c;
  if (unaff_w28 == 0x30) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w23 <= unaff_w24) {
        uVar11 = 0;
        goto LAB_0624d6a8;
      }
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      uVar9 = (uint)uVar2;
      uVar12 = uVar2 - 0x30;
    } while (uVar12 == 0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (uVar12 < 10) goto LAB_0624d430;
    uVar11 = 0;
    bVar4 = false;
LAB_0624d584:
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if ((uVar9 - 9 < 5) || (uVar9 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0624d66c;
      uVar12 = unaff_w24 + 1;
      if ((int)uVar12 < (int)unaff_w23) {
        puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
        do {
          if (unaff_w23 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          uVar2 = *puVar7;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0624d5f8;
          uVar12 = uVar12 + 1;
          puVar7 = puVar7 + 1;
        } while (unaff_w23 != uVar12);
      }
      else {
LAB_0624d5f8:
        if (uVar12 < unaff_w23) goto LAB_0624d60c;
      }
    }
    else {
LAB_0624d60c:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar10 = FUN_0624f240();
      if ((uVar10 & 1) == 0) {
LAB_0624d66c:
        lVar6 = 0;
        uVar5 = 0;
        goto LAB_0624d674;
      }
    }
    if (!bVar4) {
LAB_0624d6a8:
      uVar5 = 1;
      lVar6 = -uVar11;
      goto LAB_0624d674;
    }
  }
  else {
LAB_0624d430:
    uVar9 = unaff_w24 + 1;
    uVar11 = (ulong)uVar12;
    iVar8 = -0x11;
    do {
      if (unaff_w23 <= uVar9) goto LAB_0624d6a8;
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar8 + 0x12) * 2);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (9 < uVar2 - 0x30) {
        uVar10 = (ulong)(uint)uVar2;
        uVar12 = unaff_w24 + iVar8 + 0x12;
        goto LAB_0624d574;
      }
      uVar9 = unaff_w24 + iVar8 + 0x13;
      bVar4 = iVar8 != -1;
      iVar8 = iVar8 + 1;
      uVar11 = ((ulong)uVar2 + uVar11 * 10) - 0x30;
    } while (bVar4);
    if (unaff_w23 <= uVar9) goto LAB_0624d6a8;
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + 0x12) * 2);
    uVar10 = (ulong)uVar2;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar12 = unaff_w24 + 0x12;
    if (9 < uVar2 - 0x30) {
LAB_0624d574:
      unaff_w24 = uVar12;
      bVar4 = false;
      uVar9 = (uint)uVar10;
      goto LAB_0624d584;
    }
    bVar1 = 0xccccccccccccccc < (long)uVar11;
    uVar11 = (uVar10 + uVar11 * 10) - 0x30;
    unaff_w24 = unaff_w24 + 0x13;
    bVar4 = bVar1 || 0x8000000000000000 < uVar11;
    if (unaff_w24 < unaff_w23) {
      do {
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar9 = (uint)uVar2;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (9 < uVar2 - 0x30) goto LAB_0624d584;
        unaff_w24 = unaff_w24 + 1;
        bVar4 = true;
      } while (unaff_w23 != unaff_w24);
    }
    else if (!bVar1 && 0x8000000000000000 >= uVar11) goto LAB_0624d6a8;
  }
  lVar6 = 0;
  uVar5 = 0;
  *unaff_x27 = 1;
LAB_0624d674:
  *unaff_x19 = lVar6;
  return uVar5;
}


