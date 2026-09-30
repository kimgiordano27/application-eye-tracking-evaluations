/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateObject
ENTRY_POINT: 05604f70
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateObject(void)

{
  uint uVar1;
  undefined2 uVar2;
  short *psVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x21;
  long lVar5;
  long lVar6;
  
  psVar3 = (short *)FUN_056106b0();
  if (*psVar3 == 0) {
    FUN_056106a4();
  }
  uVar4 = FUN_05610694();
  if ((uVar4 & 1) == 0) {
LAB_056051dc:
    if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0560aa80();
    return;
  }
  if (unaff_x19 != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x30);
    if (cRam00000000071c2cfa == '\0') {
      FUN_02f07e70(PTR_DAT_06d48780);
      cRam00000000071c2cfa = '\x01';
    }
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x10) == 1) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
          if (*(uint *)(unaff_x21 + 0x10) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          lVar6 = *(long *)(unaff_x21 + 8);
          uVar2 = FUN_05460528(lVar5,0,0);
          *(undefined2 *)(lVar6 + (long)(int)uVar1 * 2) = uVar2;
          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
          goto LAB_056051dc;
        }
      }
      FUN_054833ec();
      goto LAB_056051dc;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


