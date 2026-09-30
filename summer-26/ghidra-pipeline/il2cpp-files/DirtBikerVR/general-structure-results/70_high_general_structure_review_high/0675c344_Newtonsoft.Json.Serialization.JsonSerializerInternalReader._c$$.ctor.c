/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.ctor
ENTRY_POINT: 0675c344
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___ctor(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *unaff_x20;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *unaff_x27;
  uint uVar12;
  uint uStack000000000000001c;
  
  puVar3 = PTR_DAT_084a5b08;
  uVar9 = unaff_w24 + 1;
  uVar10 = 0;
  if (unaff_w23 <= uVar9) {
    uVar6 = 0;
    goto LAB_0675c5e0;
  }
  uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
  if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar12 = (uint)uVar1;
  uVar10 = uVar12 - 0x30;
  if (9 < uVar10) goto LAB_0675c5d8;
  uStack000000000000001c = 0;
  if (uVar12 == 0x30) {
    do {
      uVar9 = uVar9 + 1;
      if (unaff_w23 <= uVar9) {
        uVar10 = 0;
        goto LAB_0675c61c;
      }
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
    } while (uVar1 == 0x30);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar10 = uVar1 - 0x30;
    if (uVar10 < 10) goto LAB_0675c3c0;
    uVar10 = 0;
    uVar12 = uVar9;
LAB_0675c510:
    uVar11 = (uint)uVar1;
    bVar2 = false;
LAB_0675c514:
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((uVar11 - 9 < 5) || (uVar11 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0675c5d8;
      uVar12 = uVar12 + 1;
      if ((int)uVar12 < (int)unaff_w23) {
        puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
        do {
          if (unaff_w23 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar1 = *puVar8;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0675c598;
          uVar12 = uVar12 + 1;
          puVar8 = puVar8 + 1;
        } while (unaff_w23 != uVar12);
      }
      else {
LAB_0675c598:
        if (uVar12 < unaff_w23) goto LAB_0675c5ac;
      }
    }
    else {
LAB_0675c5ac:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_0675d708();
      if ((uVar5 & 1) == 0) {
LAB_0675c5d8:
        uVar10 = 0;
        uVar6 = 0;
        goto LAB_0675c5e0;
      }
    }
LAB_0675c608:
    if (!bVar2) {
LAB_0675c60c:
      if (uVar10 == 0) {
        uStack000000000000001c = 1;
      }
      if ((uStack000000000000001c & 1) != 0) {
LAB_0675c61c:
        uVar6 = 1;
        goto LAB_0675c5e0;
      }
    }
  }
  else {
LAB_0675c3c0:
    uVar12 = uVar9 + 9;
    iVar7 = 0;
    do {
      uVar11 = uVar9 + 1 + iVar7;
      if (unaff_w23 <= uVar11) goto LAB_0675c60c;
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
      uVar11 = (uint)uVar1;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (9 < uVar1 - 0x30) {
        bVar2 = false;
        uVar12 = uVar9 + iVar7 + 1;
        goto LAB_0675c514;
      }
      iVar7 = iVar7 + 1;
      uVar10 = ((uint)uVar1 + uVar10 * 10) - 0x30;
    } while (iVar7 != 8);
    if (unaff_w23 <= uVar12) goto LAB_0675c60c;
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (9 < uVar1 - 0x30) goto LAB_0675c510;
    uVar12 = uVar9 + 10;
    if ((0x19999999 < uVar10) || ((bVar2 = false, uVar10 == 0x19999999 && (0x35 < uVar1)))) {
      bVar2 = true;
    }
    uVar10 = ((uint)uVar1 + uVar10 * 10) - 0x30;
    if (unaff_w23 <= uVar12) goto LAB_0675c608;
    lVar4 = *(long *)puVar3;
    do {
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
      uVar11 = (uint)uVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *(long *)puVar3;
      }
      if (9 < uVar1 - 0x30) goto LAB_0675c514;
      uVar12 = uVar12 + 1;
      bVar2 = true;
    } while (unaff_w23 != uVar12);
  }
  uVar10 = 0;
  uVar6 = 0;
  *unaff_x20 = 1;
LAB_0675c5e0:
  *unaff_x27 = uVar10;
  return uVar6;
}


