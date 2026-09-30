/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 0560ab34
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(void)

{
  short sVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined2 uVar5;
  int in_w8;
  long unaff_x20;
  long unaff_x21;
  short *unaff_x23;
  long lVar6;
  int unaff_w25;
  long unaff_x26;
  int unaff_w27;
  long lVar7;
  
  if (in_w8 == 0) {
    FUN_02f07e70(PTR_DAT_06d48780);
    *(undefined1 *)(unaff_x26 + 0xf5e) = 1;
  }
  uVar2 = *(uint *)(unaff_x21 + 0x18);
  if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
    if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_0560ae30;
    *(undefined2 *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = 0x30;
    *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
  }
  else {
    FUN_054832c0();
  }
  if ((-1 < unaff_w25) && (*unaff_x23 == 0)) goto LAB_0560ada0;
  if (unaff_x20 == 0) {
LAB_0560ae34:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar6 = *(long *)(unaff_x20 + 0x38);
  if (cRam00000000071c2cfa == '\0') {
    FUN_02f07e70(PTR_DAT_06d48780);
    cRam00000000071c2cfa = '\x01';
  }
  if (lVar6 == 0) goto LAB_0560ae34;
  if (*(int *)(lVar6 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)*(uint *)(unaff_x21 + 0x10) <= (int)uVar2) goto LAB_0560acb8;
    if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
LAB_0560ae30:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar7 = *(long *)(unaff_x21 + 8);
    uVar5 = FUN_05460528(lVar6,0,0);
    *(undefined2 *)(lVar7 + (long)(int)uVar2 * 2) = uVar5;
    *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    puVar3 = PTR_DAT_06d48780;
  }
  else {
LAB_0560acb8:
    FUN_054833ec();
    puVar3 = PTR_DAT_06d48780;
  }
  PTR_DAT_06d48780 = puVar3;
  if (unaff_w25 < 0) {
    do {
      if (*(char *)(unaff_x26 + 0xf5e) == '\0') {
        FUN_02f07e70(puVar3);
        *(undefined1 *)(unaff_x26 + 0xf5e) = 1;
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
        if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_0560ae30;
        *(undefined2 *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = 0x30;
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      }
      else {
        FUN_054832c0();
      }
      bVar4 = unaff_w25 != -1;
      unaff_w25 = unaff_w25 + 1;
    } while (bVar4);
  }
  puVar3 = PTR_DAT_06d48780;
  sVar1 = *unaff_x23;
  while (sVar1 != 0) {
    if (*(char *)(unaff_x26 + 0xf5e) == '\0') {
      FUN_02f07e70(puVar3);
      *(undefined1 *)(unaff_x26 + 0xf5e) = 1;
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_0560ae30;
      *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar1;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_054832c0();
    }
    unaff_x23 = unaff_x23 + 1;
    sVar1 = *unaff_x23;
  }
LAB_0560ada0:
  if (unaff_w27 != 0) {
    if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0560b1ec();
    return;
  }
  return;
}


