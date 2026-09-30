/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$PopulateInternal
ENTRY_POINT: 074f03e0
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__PopulateInternal(void)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  bool in_ZR;
  bool in_CY;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *unaff_x20;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar9;
  uint unaff_w25;
  uint unaff_w26;
  uint *unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  
  if (in_CY && !in_ZR) {
    unaff_w25 = 0;
    uVar9 = unaff_w24;
LAB_074f0534:
    bVar3 = false;
LAB_074f0538:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((unaff_w26 - 9 < 5) || (unaff_w26 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_074f05fc;
      uVar9 = uVar9 + 1;
      if ((int)uVar9 < (int)unaff_w23) {
        puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
        do {
          if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          uVar2 = *puVar8;
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074f05bc;
          uVar9 = uVar9 + 1;
          puVar8 = puVar8 + 1;
        } while (unaff_w23 != uVar9);
      }
      else {
LAB_074f05bc:
        if (uVar9 < unaff_w23) goto LAB_074f05d0;
      }
    }
    else {
LAB_074f05d0:
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar5 = FUN_074f172c();
      if ((uVar5 & 1) == 0) {
LAB_074f05fc:
        unaff_w25 = 0;
        uVar6 = 0;
        goto LAB_074f0604;
      }
    }
LAB_074f062c:
    if (!bVar3) {
LAB_074f0630:
      if (unaff_w25 == 0) {
        in_stack_00000018._4_4_ = 1;
      }
      if ((in_stack_00000018._4_4_ & 1) != 0) {
        uVar6 = 1;
        goto LAB_074f0604;
      }
    }
  }
  else {
    uVar9 = unaff_w24 + 9;
    iVar7 = 0;
    do {
      uVar1 = unaff_w24 + 1 + iVar7;
      if (unaff_w23 <= uVar1) goto LAB_074f0630;
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar1 * 2);
      unaff_w26 = (uint)uVar2;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (9 < uVar2 - 0x30) {
        bVar3 = false;
        uVar9 = unaff_w24 + iVar7 + 1;
        goto LAB_074f0538;
      }
      iVar7 = iVar7 + 1;
      unaff_w25 = ((uint)uVar2 + unaff_w25 * 10) - 0x30;
    } while (iVar7 != 8);
    if (unaff_w23 <= uVar9) goto LAB_074f0630;
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
    unaff_w26 = (uint)uVar2;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (9 < uVar2 - 0x30) goto LAB_074f0534;
    uVar9 = unaff_w24 + 10;
    if ((0x19999999 < unaff_w25) || ((bVar3 = false, unaff_w25 == 0x19999999 && (0x35 < uVar2)))) {
      bVar3 = true;
    }
    unaff_w25 = ((uint)uVar2 + unaff_w25 * 10) - 0x30;
    if (unaff_w23 <= uVar9) goto LAB_074f062c;
    lVar4 = *unaff_x29;
    do {
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      unaff_w26 = (uint)uVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar4 = *unaff_x29;
      }
      if (9 < uVar2 - 0x30) goto LAB_074f0538;
      uVar9 = uVar9 + 1;
      bVar3 = true;
    } while (unaff_w23 != uVar9);
  }
  unaff_w25 = 0;
  uVar6 = 0;
  *unaff_x20 = 1;
LAB_074f0604:
  *unaff_x27 = unaff_w25;
  return uVar6;
}


