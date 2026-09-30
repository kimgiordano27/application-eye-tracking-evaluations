/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 0624b13c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined2 uVar5;
  long unaff_x19;
  short *unaff_x20;
  long lVar6;
  int iVar7;
  int unaff_w26;
  int unaff_w27;
  long unaff_x28;
  
  FUN_060dbfe4();
  if (unaff_w27 < 1) {
    return;
  }
  if (DAT_0825ba12 == '\0') {
    FUN_0373b518(PTR_DAT_07da5848);
    DAT_0825ba12 = '\x01';
  }
  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(int *)(unaff_x28 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
LAB_0624b448:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      lVar6 = *(long *)(unaff_x19 + 8);
      uVar5 = FUN_060bb390();
      *(undefined2 *)(lVar6 + (long)(int)uVar2 * 2) = uVar5;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      goto joined_r0x0624b358;
    }
  }
  FUN_060dc110();
joined_r0x0624b358:
  if (unaff_w26 < 0) {
    if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar7 = unaff_w27;
    if (-unaff_w26 <= unaff_w27) {
      iVar7 = -unaff_w26;
    }
    FUN_060dc484();
    unaff_w27 = unaff_w27 - iVar7;
    if (unaff_w27 < 1) {
      return;
    }
  }
  puVar4 = PTR_DAT_07da5848;
  iVar7 = unaff_w27 + 1;
  do {
    sVar1 = *unaff_x20;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x20 = unaff_x20 + 1;
      sVar3 = sVar1;
    }
    if (DAT_0825aded == '\0') {
      FUN_0373b518(puVar4);
      DAT_0825aded = '\x01';
    }
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) goto LAB_0624b448;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_060dbfe4();
    }
    iVar7 = iVar7 + -1;
    if (iVar7 < 2) {
      return;
    }
  } while( true );
}


