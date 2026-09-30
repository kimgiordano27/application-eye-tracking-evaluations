/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c__DisplayClass38_0$$<CreateObjectUsingCreatorWithParameters>b__1
ENTRY_POINT: 0675c38c
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
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0__<CreateObjectUsingCreatorWithParameters>b__1
          (void)

{
  ushort uVar1;
  bool bVar2;
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
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  
  do {
    uVar8 = unaff_w24;
    unaff_w24 = uVar8 + 1;
    if (unaff_w23 <= unaff_w24) {
      uVar10 = 0;
      goto LAB_0675c61c;
    }
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
  } while (uVar1 == 0x30);
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = uVar1 - 0x30;
  if (uVar10 < 10) {
    uVar9 = uVar8 + 10;
    iVar6 = 0;
    do {
      uVar11 = uVar8 + 2 + iVar6;
      if (unaff_w23 <= uVar11) goto LAB_0675c60c;
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
      uVar11 = (uint)uVar1;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (9 < uVar1 - 0x30) {
        bVar2 = false;
        uVar9 = unaff_w24 + iVar6 + 1;
        goto LAB_0675c514;
      }
      iVar6 = iVar6 + 1;
      uVar10 = ((uint)uVar1 + uVar10 * 10) - 0x30;
    } while (iVar6 != 8);
    if (unaff_w23 <= uVar9) goto LAB_0675c60c;
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (9 < uVar1 - 0x30) goto LAB_0675c510;
    uVar9 = uVar8 + 0xb;
    if ((0x19999999 < uVar10) || ((bVar2 = false, uVar10 == 0x19999999 && (0x35 < uVar1)))) {
      bVar2 = true;
    }
    uVar10 = ((uint)uVar1 + uVar10 * 10) - 0x30;
    if (unaff_w23 <= uVar9) goto LAB_0675c608;
    lVar3 = *unaff_x29;
    do {
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      uVar11 = (uint)uVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar3 = *unaff_x29;
      }
      if (9 < uVar1 - 0x30) goto LAB_0675c514;
      uVar9 = uVar9 + 1;
      bVar2 = true;
    } while (unaff_w23 != uVar9);
  }
  else {
    uVar10 = 0;
    uVar9 = unaff_w24;
LAB_0675c510:
    uVar11 = (uint)uVar1;
    bVar2 = false;
LAB_0675c514:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((uVar11 - 9 < 5) || (uVar11 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0675c5d8;
      uVar9 = uVar9 + 1;
      if ((int)uVar9 < (int)unaff_w23) {
        puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
        do {
          if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar1 = *puVar7;
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0675c598;
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 1;
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
      uVar4 = FUN_0675d708();
      if ((uVar4 & 1) == 0) {
LAB_0675c5d8:
        uVar10 = 0;
        uVar5 = 0;
        goto LAB_0675c5e0;
      }
    }
LAB_0675c608:
    if (!bVar2) {
LAB_0675c60c:
      if (uVar10 == 0) {
        in_stack_00000018._4_4_ = 1;
      }
      if ((in_stack_00000018._4_4_ & 1) != 0) {
LAB_0675c61c:
        uVar5 = 1;
        goto LAB_0675c5e0;
      }
    }
  }
  uVar10 = 0;
  uVar5 = 0;
  *unaff_x20 = 1;
LAB_0675c5e0:
  *unaff_x27 = uVar10;
  return uVar5;
}


