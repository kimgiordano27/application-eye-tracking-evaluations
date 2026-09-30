/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 0624df10
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract(void)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int in_w8;
  uint *unaff_x19;
  int iVar6;
  ushort *puVar7;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  uint unaff_w25;
  uint unaff_w26;
  undefined1 *unaff_x27;
  long *unaff_x29;
  ulong in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_03798b70();
  }
  if (unaff_w26 < 10) {
    uVar1 = unaff_w24 + 1;
    uVar8 = unaff_w24 + 9;
    iVar6 = -8;
    do {
      if (unaff_w23 <= uVar1) goto LAB_0624e140;
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar6 + 9) * 2);
      unaff_w25 = (uint)uVar2;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (9 < uVar2 - 0x30) {
        bVar3 = false;
        uVar8 = unaff_w24 + iVar6 + 9;
        goto LAB_0624e07c;
      }
      uVar1 = unaff_w24 + iVar6 + 10;
      bVar3 = iVar6 != -1;
      iVar6 = iVar6 + 1;
      unaff_w26 = ((uint)uVar2 + unaff_w26 * 10) - 0x30;
    } while (bVar3);
    if (unaff_w23 <= uVar1) goto LAB_0624e140;
    uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
    unaff_w25 = (uint)uVar2;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar1 = uVar2 - 0x30;
    if (9 < uVar1) goto LAB_0624e078;
    uVar8 = unaff_w24 + 10;
    if ((0x19999999 < unaff_w26) || ((bVar3 = false, unaff_w26 == 0x19999999 && (0x35 < uVar2)))) {
      bVar3 = true;
    }
    unaff_w26 = uVar1 + unaff_w26 * 10;
    if (unaff_w23 <= uVar8) goto LAB_0624e13c;
    do {
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
      unaff_w25 = (uint)uVar2;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (9 < uVar2 - 0x30) goto LAB_0624e07c;
      uVar8 = uVar8 + 1;
      bVar3 = true;
    } while (unaff_w23 != uVar8);
  }
  else {
    unaff_w26 = 0;
    uVar8 = unaff_w24;
LAB_0624e078:
    bVar3 = false;
LAB_0624e07c:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if ((unaff_w25 - 9 < 5) || (unaff_w25 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0624e15c;
      uVar8 = uVar8 + 1;
      if ((int)uVar8 < (int)unaff_w23) {
        puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        do {
          if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          uVar2 = *puVar7;
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0624e0f8;
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (unaff_w23 != uVar8);
      }
      else {
LAB_0624e0f8:
        if (uVar8 < unaff_w23) goto LAB_0624e10c;
      }
    }
    else {
LAB_0624e10c:
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar4 = FUN_0624f240();
      if ((uVar4 & 1) == 0) {
LAB_0624e15c:
        unaff_w26 = 0;
        uVar5 = 0;
        goto LAB_0624e164;
      }
    }
LAB_0624e13c:
    if (!bVar3) {
LAB_0624e140:
      if ((in_stack_00000018 & 0x100000000) != 0 || unaff_w26 == 0) {
        uVar5 = 1;
        goto LAB_0624e164;
      }
    }
  }
  unaff_w26 = 0;
  uVar5 = 0;
  *unaff_x27 = 1;
LAB_0624e164:
  *unaff_x19 = unaff_w26;
  return uVar5;
}


