/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
ENTRY_POINT: 076827e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07682a48) */
/* WARNING: Removing unreachable block (ram,0x07682a60) */
/* WARNING: Removing unreachable block (ram,0x07682a64) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty(void)

{
  short sVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined2 uVar5;
  char cVar6;
  long unaff_x20;
  long unaff_x21;
  short *unaff_x23;
  long lVar7;
  int unaff_w25;
  long unaff_x26;
  long lVar8;
  
  FUN_04077588(PTR_DAT_092d03e8);
  *(undefined1 *)(unaff_x26 + 0x578) = 1;
  uVar2 = *(uint *)(unaff_x21 + 0x18);
  if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
    if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_07682acc;
    *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    *(undefined2 *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = 0x30;
  }
  else {
    FUN_07503cf0();
  }
  if ((*unaff_x23 == 0) && (-1 < unaff_w25)) {
    return;
  }
  if (unaff_x20 == 0) {
LAB_07682ad0:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *(long *)(unaff_x20 + 0x38);
  if (DAT_0989226f == '\0') {
    FUN_04077588(PTR_DAT_092d03e8);
    DAT_0989226f = '\x01';
  }
  if (lVar7 == 0) goto LAB_07682ad0;
  if (*(int *)(lVar7 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
LAB_07682acc:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar8 = *(long *)(unaff_x21 + 8);
      uVar5 = FUN_074e0328(lVar7,0,0);
      *(undefined2 *)(lVar8 + (long)(int)uVar2 * 2) = uVar5;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      puVar3 = PTR_DAT_092d03e8;
      goto joined_r0x07682960;
    }
  }
  FUN_07503e1c();
  puVar3 = PTR_DAT_092d03e8;
joined_r0x07682960:
  PTR_DAT_092d03e8 = puVar3;
  if (unaff_w25 < 0) {
    cVar6 = *(char *)(unaff_x26 + 0x578);
    do {
      if (cVar6 == '\0') {
        FUN_04077588(puVar3);
        cVar6 = '\x01';
        *(undefined1 *)(unaff_x26 + 0x578) = 1;
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
        if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_07682acc;
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        *(undefined2 *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = 0x30;
      }
      else {
        FUN_07503cf0();
        cVar6 = *(char *)(unaff_x26 + 0x578);
      }
      bVar4 = unaff_w25 != -1;
      unaff_w25 = unaff_w25 + 1;
    } while (bVar4);
  }
  puVar3 = PTR_DAT_092d03e8;
  sVar1 = *unaff_x23;
  if (sVar1 != 0) {
    cVar6 = *(char *)(unaff_x26 + 0x578);
    do {
      unaff_x23 = unaff_x23 + 1;
      if (cVar6 == '\0') {
        FUN_04077588(puVar3);
        cVar6 = '\x01';
        *(undefined1 *)(unaff_x26 + 0x578) = 1;
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
        if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_07682acc;
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar1;
      }
      else {
        FUN_07503cf0();
        cVar6 = *(char *)(unaff_x26 + 0x578);
      }
      sVar1 = *unaff_x23;
    } while (sVar1 != 0);
  }
  return;
}


