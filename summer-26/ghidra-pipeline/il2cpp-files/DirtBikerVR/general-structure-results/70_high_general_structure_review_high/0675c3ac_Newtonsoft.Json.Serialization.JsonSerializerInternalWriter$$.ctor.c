/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$.ctor
ENTRY_POINT: 0675c3ac
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor(void)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int in_w8;
  int iVar7;
  undefined1 *unaff_x20;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar9;
  uint uVar10;
  uint unaff_w26;
  uint *unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = unaff_w26 - 0x30;
  if (uVar10 < 10) {
    uVar9 = unaff_w24 + 9;
    iVar7 = 0;
    do {
      uVar1 = unaff_w24 + 1 + iVar7;
      if (unaff_w23 <= uVar1) goto LAB_0675c60c;
      unaff_w26 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar1 * 2);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (9 < unaff_w26 - 0x30) {
        bVar3 = false;
        uVar9 = unaff_w24 + iVar7 + 1;
        goto LAB_0675c514;
      }
      iVar7 = iVar7 + 1;
      uVar10 = (unaff_w26 + uVar10 * 10) - 0x30;
    } while (iVar7 != 8);
    if (unaff_w23 <= uVar9) goto LAB_0675c60c;
    unaff_w26 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (9 < unaff_w26 - 0x30) goto LAB_0675c510;
    uVar9 = unaff_w24 + 10;
    if ((0x19999999 < uVar10) || ((bVar3 = false, uVar10 == 0x19999999 && (0x35 < unaff_w26)))) {
      bVar3 = true;
    }
    uVar10 = (unaff_w26 + uVar10 * 10) - 0x30;
    if (unaff_w23 <= uVar9) goto LAB_0675c608;
    lVar4 = *unaff_x29;
    do {
      unaff_w26 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *unaff_x29;
      }
      if (9 < unaff_w26 - 0x30) goto LAB_0675c514;
      uVar9 = uVar9 + 1;
      bVar3 = true;
    } while (unaff_w23 != uVar9);
  }
  else {
    uVar10 = 0;
    uVar9 = unaff_w24;
LAB_0675c510:
    bVar3 = false;
LAB_0675c514:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((unaff_w26 - 9 < 5) || (unaff_w26 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0675c5d8;
      uVar9 = uVar9 + 1;
      if ((int)uVar9 < (int)unaff_w23) {
        puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
        do {
          if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar2 = *puVar8;
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0675c598;
          uVar9 = uVar9 + 1;
          puVar8 = puVar8 + 1;
        } while (unaff_w23 != uVar9);
      }
      else {
LAB_0675c598:
        if (uVar9 < unaff_w23) goto LAB_0675c5ac;
      }
    }
    else {
LAB_0675c5ac:
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
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
    if (!bVar3) {
LAB_0675c60c:
      if (uVar10 == 0) {
        in_stack_00000018._4_4_ = 1;
      }
      if ((in_stack_00000018._4_4_ & 1) != 0) {
        uVar6 = 1;
        goto LAB_0675c5e0;
      }
    }
  }
  uVar10 = 0;
  uVar6 = 0;
  *unaff_x20 = 1;
LAB_0675c5e0:
  *unaff_x27 = uVar10;
  return uVar6;
}


