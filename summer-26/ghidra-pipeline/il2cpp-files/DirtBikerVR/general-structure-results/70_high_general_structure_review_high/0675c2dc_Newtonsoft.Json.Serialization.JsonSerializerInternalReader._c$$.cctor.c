/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 0675c2dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *unaff_x20;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long unaff_x25;
  uint uVar12;
  uint *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  FUN_065cab58();
  uVar4 = FUN_0675fba0();
  puVar3 = PTR_DAT_084a5b08;
  if ((uVar4 & 1) == 0) {
    uVar9 = 0;
    uVar10 = 1;
  }
  else {
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar9 = *(uint *)(unaff_x25 + 0x10);
    uVar11 = 0;
    if (unaff_w23 <= uVar9) {
      uVar6 = 0;
      goto LAB_0675c5e0;
    }
    unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
    uVar10 = 0;
  }
  if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar11 = unaff_w28 - 0x30;
  if (9 < uVar11) goto LAB_0675c5d8;
  uStack000000000000001c = uVar10;
  if (unaff_w28 == 0x30) {
    do {
      uVar9 = uVar9 + 1;
      if (unaff_w23 <= uVar9) {
        uVar11 = 0;
        goto LAB_0675c61c;
      }
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
    } while (uVar1 == 0x30);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar11 = uVar1 - 0x30;
    if (uVar11 < 10) goto LAB_0675c3c0;
    uVar11 = 0;
    uVar10 = uVar9;
LAB_0675c510:
    uVar12 = (uint)uVar1;
    bVar2 = false;
LAB_0675c514:
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((uVar12 - 9 < 5) || (uVar12 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0675c5d8;
      uVar10 = uVar10 + 1;
      if ((int)uVar10 < (int)unaff_w23) {
        puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
        do {
          if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar1 = *puVar8;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0675c598;
          uVar10 = uVar10 + 1;
          puVar8 = puVar8 + 1;
        } while (unaff_w23 != uVar10);
      }
      else {
LAB_0675c598:
        if (uVar10 < unaff_w23) goto LAB_0675c5ac;
      }
    }
    else {
LAB_0675c5ac:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar4 = FUN_0675d708();
      if ((uVar4 & 1) == 0) {
LAB_0675c5d8:
        uVar11 = 0;
        uVar6 = 0;
        goto LAB_0675c5e0;
      }
    }
LAB_0675c608:
    if (!bVar2) {
LAB_0675c60c:
      if (uVar11 == 0) {
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
    uVar10 = uVar9 + 9;
    iVar7 = 0;
    do {
      uVar12 = uVar9 + 1 + iVar7;
      if (unaff_w23 <= uVar12) goto LAB_0675c60c;
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
      uVar12 = (uint)uVar1;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (9 < uVar1 - 0x30) {
        bVar2 = false;
        uVar10 = uVar9 + iVar7 + 1;
        goto LAB_0675c514;
      }
      iVar7 = iVar7 + 1;
      uVar11 = ((uint)uVar1 + uVar11 * 10) - 0x30;
    } while (iVar7 != 8);
    if (unaff_w23 <= uVar10) goto LAB_0675c60c;
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (9 < uVar1 - 0x30) goto LAB_0675c510;
    uVar10 = uVar9 + 10;
    if ((0x19999999 < uVar11) || ((bVar2 = false, uVar11 == 0x19999999 && (0x35 < uVar1)))) {
      bVar2 = true;
    }
    uVar11 = ((uint)uVar1 + uVar11 * 10) - 0x30;
    if (unaff_w23 <= uVar10) goto LAB_0675c608;
    lVar5 = *(long *)puVar3;
    do {
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
      uVar12 = (uint)uVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar5 = *(long *)puVar3;
      }
      if (9 < uVar1 - 0x30) goto LAB_0675c514;
      uVar10 = uVar10 + 1;
      bVar2 = true;
    } while (unaff_w23 != uVar10);
  }
  uVar11 = 0;
  uVar6 = 0;
  *unaff_x20 = 1;
LAB_0675c5e0:
  *unaff_x27 = uVar11;
  return uVar6;
}


