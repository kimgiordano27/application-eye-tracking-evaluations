/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c__DisplayClass38_0$$.ctor
ENTRY_POINT: 0675c384
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0___ctor(void)

{
  ushort uVar1;
  bool bVar2;
  bool in_ZR;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 *unaff_x20;
  ushort *puVar7;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  uint unaff_w25;
  uint unaff_w26;
  uint uVar9;
  uint *unaff_x27;
  long *unaff_x29;
  uint uStack000000000000001c;
  
  uStack000000000000001c = unaff_w26;
  if (in_ZR) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w23 <= unaff_w24) {
        unaff_w25 = 0;
        goto LAB_0675c61c;
      }
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    } while (uVar1 == 0x30);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    unaff_w25 = uVar1 - 0x30;
    if (unaff_w25 < 10) goto LAB_0675c3c0;
    unaff_w25 = 0;
    uVar8 = unaff_w24;
LAB_0675c510:
    uVar9 = (uint)uVar1;
    bVar2 = false;
LAB_0675c514:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((uVar9 - 9 < 5) || (uVar9 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0675c5d8;
      uVar8 = uVar8 + 1;
      if ((int)uVar8 < (int)unaff_w23) {
        puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        do {
          if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar1 = *puVar7;
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0675c598;
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (unaff_w23 != uVar8);
      }
      else {
LAB_0675c598:
        if (uVar8 < unaff_w23) goto LAB_0675c5ac;
      }
    }
    else {
LAB_0675c5ac:
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar4 = FUN_0675d708();
      if ((uVar4 & 1) == 0) {
LAB_0675c5d8:
        unaff_w25 = 0;
        uVar5 = 0;
        goto LAB_0675c5e0;
      }
    }
LAB_0675c608:
    if (!bVar2) {
LAB_0675c60c:
      if (unaff_w25 == 0) {
        uStack000000000000001c = 1;
      }
      if ((uStack000000000000001c & 1) != 0) {
LAB_0675c61c:
        uVar5 = 1;
        goto LAB_0675c5e0;
      }
    }
  }
  else {
LAB_0675c3c0:
    uVar8 = unaff_w24 + 9;
    iVar6 = 0;
    do {
      uVar9 = unaff_w24 + 1 + iVar6;
      if (unaff_w23 <= uVar9) goto LAB_0675c60c;
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      uVar9 = (uint)uVar1;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (9 < uVar1 - 0x30) {
        bVar2 = false;
        uVar8 = unaff_w24 + iVar6 + 1;
        goto LAB_0675c514;
      }
      iVar6 = iVar6 + 1;
      unaff_w25 = ((uint)uVar1 + unaff_w25 * 10) - 0x30;
    } while (iVar6 != 8);
    if (unaff_w23 <= uVar8) goto LAB_0675c60c;
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (9 < uVar1 - 0x30) goto LAB_0675c510;
    uVar8 = unaff_w24 + 10;
    if ((0x19999999 < unaff_w25) || ((bVar2 = false, unaff_w25 == 0x19999999 && (0x35 < uVar1)))) {
      bVar2 = true;
    }
    unaff_w25 = ((uint)uVar1 + unaff_w25 * 10) - 0x30;
    if (unaff_w23 <= uVar8) goto LAB_0675c608;
    lVar3 = *unaff_x29;
    do {
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
      uVar9 = (uint)uVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar3 = *unaff_x29;
      }
      if (9 < uVar1 - 0x30) goto LAB_0675c514;
      uVar8 = uVar8 + 1;
      bVar2 = true;
    } while (unaff_w23 != uVar8);
  }
  unaff_w25 = 0;
  uVar5 = 0;
  *unaff_x20 = 1;
LAB_0675c5e0:
  *unaff_x27 = unaff_w25;
  return uVar5;
}


