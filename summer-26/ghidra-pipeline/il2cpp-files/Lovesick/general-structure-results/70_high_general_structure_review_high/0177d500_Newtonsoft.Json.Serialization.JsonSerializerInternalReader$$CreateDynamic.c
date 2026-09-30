/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
ENTRY_POINT: 0177d500
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic(void)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  int unaff_w20;
  ushort *puVar5;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint uVar6;
  long unaff_x25;
  ulong unaff_x26;
  long lVar7;
  int unaff_w27;
  long *unaff_x28;
  ulong in_stack_00000010;
  undefined1 *in_stack_00000018;
  
  uVar6 = unaff_w20 + unaff_w27 + 0x14;
  if ((0x1999999999999999 < unaff_x26) ||
     ((bVar2 = false, unaff_x26 == 0x1999999999999999 && (0x35 < (uint)unaff_x25)))) {
    bVar2 = true;
  }
  lVar7 = unaff_x25 + unaff_x26 * 10 + -0x30;
  if (unaff_w21 <= uVar6) goto LAB_0177d690;
  do {
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar6 * 2);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (9 < uVar1 - 0x30) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0177d660;
      if ((unaff_w23 >> 1 & 1) == 0) goto LAB_0177d6c0;
      uVar6 = uVar6 + 1;
      if ((int)unaff_w21 <= (int)uVar6) goto LAB_0177d64c;
      puVar5 = (ushort *)(unaff_x22 + (long)(int)uVar6 * 2);
      goto LAB_0177d604;
    }
    uVar6 = uVar6 + 1;
    bVar2 = true;
  } while (unaff_w21 != uVar6);
  goto LAB_0177d694;
LAB_0177d64c:
  if (uVar6 < unaff_w21) {
LAB_0177d660:
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_0177dfe4();
    if ((uVar3 & 1) == 0) {
LAB_0177d6c0:
      lVar7 = 0;
      uVar4 = 0;
      goto LAB_0177d6c8;
    }
  }
  goto LAB_0177d690;
  while( true ) {
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 1;
    if (unaff_w21 == uVar6) break;
LAB_0177d604:
    if (unaff_w21 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar1 = *puVar5;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0177d64c;
  }
LAB_0177d690:
  if ((bVar2) || ((in_stack_00000010 & 0x100000000) == 0 && lVar7 != 0)) {
LAB_0177d694:
    lVar7 = 0;
    uVar4 = 0;
    *in_stack_00000018 = 1;
  }
  else {
    uVar4 = 1;
  }
LAB_0177d6c8:
  *unaff_x19 = lVar7;
  return uVar4;
}


