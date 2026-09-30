/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeObject
ENTRY_POINT: 07684e10
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeObject(void)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint in_w8;
  undefined1 *unaff_x20;
  ushort *puVar6;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar7;
  uint unaff_w25;
  int iVar8;
  uint unaff_w26;
  int *unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  
  if ((in_w8 + 1 <= unaff_w25) || ((bVar2 = false, unaff_w25 == in_w8 && (0x35 < unaff_w26)))) {
    bVar2 = true;
  }
  iVar8 = unaff_w26 + unaff_w25 * 10 + -0x30;
  if (unaff_w23 <= unaff_w24) goto LAB_07684fbc;
  lVar3 = *unaff_x29;
  do {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar3 = *unaff_x29;
    }
    if (9 < uVar1 - 0x30) {
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07684f60;
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_07684f8c;
      uVar7 = unaff_w24 + 1;
      if ((int)unaff_w23 <= (int)uVar7) goto LAB_07684f4c;
      puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
      goto LAB_07684f00;
    }
    unaff_w24 = unaff_w24 + 1;
    bVar2 = true;
  } while (unaff_w23 != unaff_w24);
  goto LAB_07684fd8;
LAB_07684f4c:
  if (uVar7 < unaff_w23) {
LAB_07684f60:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_076860bc();
    if ((uVar4 & 1) == 0) {
LAB_07684f8c:
      iVar8 = 0;
      uVar5 = 0;
      goto LAB_07684f94;
    }
  }
  goto LAB_07684fbc;
  while( true ) {
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 1;
    if (unaff_w23 == uVar7) break;
LAB_07684f00:
    if (unaff_w23 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    uVar1 = *puVar6;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07684f4c;
  }
LAB_07684fbc:
  if (!bVar2) {
    if (iVar8 == 0) {
      in_stack_00000018._4_4_ = 1;
    }
    if ((in_stack_00000018._4_4_ & 1) != 0) {
      uVar5 = 1;
      goto LAB_07684f94;
    }
  }
LAB_07684fd8:
  iVar8 = 0;
  uVar5 = 0;
  *unaff_x20 = 1;
LAB_07684f94:
  *unaff_x27 = iVar8;
  return uVar5;
}


