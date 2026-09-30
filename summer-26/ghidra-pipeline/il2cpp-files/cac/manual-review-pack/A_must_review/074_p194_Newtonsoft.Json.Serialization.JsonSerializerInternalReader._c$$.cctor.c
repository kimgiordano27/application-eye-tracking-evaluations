/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 074bdfec
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x074be294) */
/* WARNING: Removing unreachable block (ram,0x074be2ac) */
/* WARNING: Removing unreachable block (ram,0x074be2c0) */
/* WARNING: Removing unreachable block (ram,0x074be2c4) */
/* WARNING: Removing unreachable block (ram,0x074be2d8) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined2 uVar5;
  char cVar6;
  uint in_w8;
  long unaff_x19;
  short *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long lVar7;
  long unaff_x23;
  undefined8 uVar8;
  int iVar9;
  int unaff_w26;
  long unaff_x27;
  
  uVar8 = *(undefined8 *)(unaff_x23 + 0x228);
  do {
    sVar1 = *unaff_x20;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x20 = unaff_x20 + 1;
      sVar3 = sVar1;
    }
    if (in_w8 == 0) {
      FUN_03f13384(uVar8);
      in_w8 = 1;
      *(undefined1 *)(unaff_x21 + 0x807) = 1;
    }
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) goto LAB_074be39c;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
    }
    else {
      FUN_07346f30();
      in_w8 = (uint)*(byte *)(unaff_x21 + 0x807);
    }
    unaff_w22 = unaff_w22 + -1;
  } while (1 < unaff_w22);
  if (unaff_w26 < 1) {
    return;
  }
  if (DAT_0968e4c0 == '\0') {
    FUN_03f13384(PTR_DAT_09129228);
    DAT_0968e4c0 = '\x01';
  }
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  if (*(int *)(unaff_x27 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
LAB_074be39c:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      lVar7 = *(long *)(unaff_x19 + 8);
      uVar5 = FUN_073213d0();
      *(undefined2 *)(lVar7 + (long)(int)uVar2 * 2) = uVar5;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      goto LAB_074be2f0;
    }
  }
  FUN_0734705c();
LAB_074be2f0:
  puVar4 = PTR_DAT_09129228;
  iVar9 = unaff_w26 + 1;
  cVar6 = DAT_0968d807;
  do {
    sVar1 = *unaff_x20;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x20 = unaff_x20 + 1;
      sVar3 = sVar1;
    }
    if (cVar6 == '\0') {
      FUN_03f13384(puVar4);
      cVar6 = '\x01';
      DAT_0968d807 = '\x01';
    }
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) goto LAB_074be39c;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
    }
    else {
      FUN_07346f30();
      cVar6 = DAT_0968d807;
    }
    iVar9 = iVar9 + -1;
    if (iVar9 < 2) {
      return;
    }
  } while( true );
}


