/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 01bbc960
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bbcad0) */

undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  byte *unaff_x25;
  undefined4 unaff_w26;
  undefined4 unaff_w28;
  
  iVar1 = FUN_01bbc6e0();
  if (iVar1 < 0) {
    return 0;
  }
  lVar4 = *(long *)(unaff_x19 + 0x48);
  if (lVar4 != 0) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) >> (ulong)(uVar2 & 0x1f);
    *(uint *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) - uVar2;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + iVar1;
    *(undefined4 *)(unaff_x19 + 0x10) = unaff_w26;
    if (*unaff_x21 != 0) {
      uVar2 = FUN_01bbcd30(*unaff_x21,*(undefined8 *)(unaff_x19 + 0x48));
      if ((int)uVar2 < 0) {
        return 0;
      }
      lVar4 = *unaff_x24;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar4 = *unaff_x24;
      }
      lVar4 = *(long *)(lVar4 + 0xb8);
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20);
      lVar4 = *(long *)(lVar4 + 0x18);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      iVar1 = *(int *)(lVar4 + (long)(int)uVar2 * 4 + 0x20);
      *(int *)(unaff_x19 + 0x18) = iVar1;
      if (0 < iVar1) {
        *(undefined4 *)(unaff_x19 + 0x10) = unaff_w28;
        if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01bbcacc;
        iVar1 = FUN_01bbc6e0();
        if (iVar1 < 0) {
          return 0;
        }
        lVar4 = *(long *)(unaff_x19 + 0x48);
        if (lVar4 == 0) goto LAB_01bbcacc;
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) >> (ulong)(uVar2 & 0x1f);
        *(uint *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) - uVar2;
        *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + iVar1;
      }
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        FUN_01bbcec8(*(long *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x1c),
                     *(undefined4 *)(unaff_x19 + 0x20));
        *(undefined4 *)(unaff_x19 + 0x10) = 7;
        if (0x101 < unaff_w23 - *(int *)(unaff_x19 + 0x1c)) {
                    /* WARNING: Could not recover jumptable at 0x01bbc898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*(code *)((ulong)*unaff_x25 * 4 + 0x1bbc89c))();
          return uVar3;
        }
        return 1;
      }
    }
  }
LAB_01bbcacc:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


