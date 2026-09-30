/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 0500c124
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0500c1e8) */
/* WARNING: Removing unreachable block (ram,0x0500c200) */
/* WARNING: Removing unreachable block (ram,0x0500c210) */
/* WARNING: Removing unreachable block (ram,0x0500c214) */
/* WARNING: Removing unreachable block (ram,0x0500c224) */
/* WARNING: Removing unreachable block (ram,0x0500c250) */
/* WARNING: Removing unreachable block (ram,0x0500c234) */
/* WARNING: Removing unreachable block (ram,0x0500c23c) */
/* WARNING: Removing unreachable block (ram,0x0500c264) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  char in_NG;
  char in_OV;
  undefined2 uVar5;
  char cVar6;
  uint in_w8;
  long in_x9;
  uint in_w10;
  long unaff_x20;
  long unaff_x21;
  short *unaff_x23;
  long lVar7;
  short unaff_w25;
  long unaff_x26;
  int unaff_w27;
  int unaff_w28;
  short unaff_w29;
  long lVar8;
  
  while( true ) {
    if (in_NG == in_OV) {
      FUN_04e984dc();
      in_w8 = (uint)*(byte *)(unaff_x26 + 0x421);
    }
    else {
      if (in_w10 <= (uint)in_x9) goto LAB_0500c368;
      *(uint *)(unaff_x21 + 0x18) = (uint)in_x9 + 1;
      *(short *)(*(long *)(unaff_x21 + 8) + in_x9 * 2) = unaff_w25;
    }
    unaff_w28 = unaff_w28 + -1;
    if (unaff_w28 < 2) break;
    sVar1 = *unaff_x23;
    unaff_w25 = unaff_w29;
    if (sVar1 != 0) {
      unaff_x23 = unaff_x23 + 1;
      unaff_w25 = sVar1;
    }
    if (in_w8 == 0) {
      FUN_02d4dc40();
      in_w8 = 1;
      *(undefined1 *)(unaff_x26 + 0x421) = 1;
    }
    iVar2 = *(int *)(unaff_x21 + 0x18);
    in_x9 = (long)iVar2;
    in_w10 = *(uint *)(unaff_x21 + 0x10);
    in_OV = SBORROW4(iVar2,in_w10);
    in_NG = (int)(iVar2 - in_w10) < 0;
  }
  if (*unaff_x23 == 0) goto LAB_0500c2e0;
  if (unaff_x20 == 0) {
LAB_0500c36c:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar7 = *(long *)(unaff_x20 + 0x38);
  if (DAT_06a4f0a5 == '\0') {
    FUN_02d4dc40(PTR_DAT_06650d78);
    DAT_06a4f0a5 = '\x01';
  }
  if (lVar7 == 0) goto LAB_0500c36c;
  if (*(int *)(lVar7 + 0x10) == 1) {
    uVar3 = *(uint *)(unaff_x21 + 0x18);
    if ((int)*(uint *)(unaff_x21 + 0x10) <= (int)uVar3) goto LAB_0500c1ec;
    if (*(uint *)(unaff_x21 + 0x10) <= uVar3) {
LAB_0500c368:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    lVar8 = *(long *)(unaff_x21 + 8);
    uVar5 = FUN_04e7a3d8(lVar7,0,0);
    *(undefined2 *)(lVar8 + (long)(int)uVar3 * 2) = uVar5;
    *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
  }
  else {
LAB_0500c1ec:
    FUN_04e98608();
  }
  puVar4 = PTR_DAT_06650d78;
  sVar1 = *unaff_x23;
  if (sVar1 != 0) {
    cVar6 = *(char *)(unaff_x26 + 0x421);
    do {
      unaff_x23 = unaff_x23 + 1;
      if (cVar6 == '\0') {
        FUN_02d4dc40(puVar4);
        cVar6 = '\x01';
        *(undefined1 *)(unaff_x26 + 0x421) = 1;
      }
      uVar3 = *(uint *)(unaff_x21 + 0x18);
      if ((int)uVar3 < (int)*(uint *)(unaff_x21 + 0x10)) {
        if (*(uint *)(unaff_x21 + 0x10) <= uVar3) goto LAB_0500c368;
        *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
        *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar3 * 2) = sVar1;
      }
      else {
        FUN_04e984dc();
        cVar6 = *(char *)(unaff_x26 + 0x421);
      }
      sVar1 = *unaff_x23;
    } while (sVar1 != 0);
  }
LAB_0500c2e0:
  if (unaff_w27 != 0) {
    if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_0500c738();
    return;
  }
  return;
}


