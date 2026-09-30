/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 0177c1a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x19;
  ulong uVar8;
  ushort *puVar9;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint uVar10;
  int unaff_w25;
  ulong unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  int in_stack_00000008;
  undefined1 *in_stack_00000010;
  
  uVar10 = unaff_w25 + unaff_w27 + 0x12;
  uVar4 = *(ushort *)(unaff_x22 + (long)(int)uVar10 * 2);
  uVar8 = (ulong)uVar4;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (uVar4 - 0x30 < 10) {
    bVar2 = 0xccccccccccccccc < (long)unaff_x26;
    iVar3 = 2 - in_stack_00000008;
    if (-1 < 1 - in_stack_00000008) {
      iVar3 = 1 - in_stack_00000008;
    }
    uVar10 = unaff_w25 + unaff_w27 + 0x13;
    unaff_x26 = (uVar8 + unaff_x26 * 10) - 0x30;
    bVar1 = (long)(iVar3 >> 1) + 0x7fffffffffffffffU < unaff_x26;
    bVar5 = bVar2 || bVar1;
    if (uVar10 < unaff_w21) {
      do {
        uVar4 = *(ushort *)(unaff_x22 + (long)(int)uVar10 * 2);
        uVar8 = (ulong)uVar4;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (9 < uVar4 - 0x30) goto LAB_0177c29c;
        uVar10 = uVar10 + 1;
        bVar5 = true;
      } while (unaff_w21 != uVar10);
    }
    else if (!bVar2 && !bVar1) goto LAB_0177c270;
  }
  else {
    bVar5 = false;
LAB_0177c29c:
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
                    /* try { // try from 0177c320 to 0187c3a3 has its CatchHandler @ 0177c320
                       catch() { ... } // from try @ 0177c320 with catch @ 0177c320
                       catch() { ... } // from try @ 0177c3e0 with catch @ 0177c320
                       catch() { ... } // from try @ 0177c4a4 with catch @ 0177c320
                       catch() { ... } // from try @ 0177c524 with catch @ 0177c320
                       catch() { ... } // from try @ 0177c610 with catch @ 0177c320 */
    if (((int)uVar8 - 9U < 5) || ((int)uVar8 == 0x20)) {
      if ((unaff_w23 >> 1 & 1) == 0) goto LAB_0177c384;
      uVar10 = uVar10 + 1;
      if ((int)uVar10 < (int)unaff_w21) {
        puVar9 = (ushort *)(unaff_x22 + (long)(int)uVar10 * 2);
        do {
          if (unaff_w21 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar4 = *puVar9;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if ((4 < uVar4 - 9) && (uVar4 != 0x20)) goto LAB_0177c310;
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (unaff_w21 != uVar10);
      }
      else {
LAB_0177c310:
        if (uVar10 < unaff_w21) goto LAB_0177c324;
      }
    }
    else {
LAB_0177c324:
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_0177dfe4();
      if ((uVar8 & 1) == 0) {
LAB_0177c384:
        lVar7 = 0;
        uVar6 = 0;
        goto LAB_0177c38c;
      }
    }
    if (!bVar5) {
LAB_0177c270:
      lVar7 = unaff_x26 * (long)in_stack_00000008;
      uVar6 = 1;
      goto LAB_0177c38c;
    }
  }
  lVar7 = 0;
  uVar6 = 0;
  *in_stack_00000010 = 1;
LAB_0177c38c:
  *unaff_x19 = lVar7;
                    /* try { // try from 0177c3a4 to 0187c3a7 has its CatchHandler @ 0177c4f0 */
  return uVar6;
}


