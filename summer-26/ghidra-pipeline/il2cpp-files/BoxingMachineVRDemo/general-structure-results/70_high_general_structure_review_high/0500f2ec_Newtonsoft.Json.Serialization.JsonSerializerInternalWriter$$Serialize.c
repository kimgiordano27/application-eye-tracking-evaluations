/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 0500f2ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0500f578) */
/* WARNING: Removing unreachable block (ram,0x0500f590) */
/* WARNING: Removing unreachable block (ram,0x0500f5a4) */
/* WARNING: Removing unreachable block (ram,0x0500f5a8) */
/* WARNING: Removing unreachable block (ram,0x0500f5b0) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined2 uVar5;
  long unaff_x19;
  short *unaff_x20;
  int unaff_w21;
  short unaff_w22;
  long lVar6;
  int iVar7;
  long unaff_x25;
  undefined1 unaff_w26;
  int unaff_w27;
  long unaff_x28;
  
  do {
    sVar1 = *unaff_x20;
    sVar3 = unaff_w22;
    if (sVar1 != 0) {
      unaff_x20 = unaff_x20 + 1;
      sVar3 = sVar1;
    }
    if (*(char *)(unaff_x25 + 0x666) == '\0') {
      FUN_02d6084c();
      *(undefined1 *)(unaff_x25 + 0x666) = unaff_w26;
    }
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) goto LAB_0500f67c;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_04ea5848();
    }
    unaff_w21 = unaff_w21 + -1;
  } while (1 < unaff_w21);
  if (unaff_w27 < 1) {
    return;
  }
  if (DAT_06b79233 == '\0') {
    FUN_02d6084c(PTR_DAT_067714a8);
    DAT_06b79233 = '\x01';
  }
  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)(unaff_x28 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
LAB_0500f67c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar6 = *(long *)(unaff_x19 + 8);
      uVar5 = FUN_04e87a5c();
      *(undefined2 *)(lVar6 + (long)(int)uVar2 * 2) = uVar5;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      goto LAB_0500f5d4;
    }
  }
  FUN_04ea5974();
LAB_0500f5d4:
  puVar4 = PTR_DAT_067714a8;
  iVar7 = unaff_w27 + 1;
  do {
    sVar1 = *unaff_x20;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x20 = unaff_x20 + 1;
      sVar3 = sVar1;
    }
    if (DAT_06b78666 == '\0') {
      FUN_02d6084c(puVar4);
      DAT_06b78666 = '\x01';
    }
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) goto LAB_0500f67c;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_04ea5848();
    }
    iVar7 = iVar7 + -1;
    if (iVar7 < 2) {
      return;
    }
  } while( true );
}


