/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 01bbadb0
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  thunk_FUN_0159f088();
  *(undefined1 *)(unaff_x21 + 0xcbc) = 1;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_01bbaef8();
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_01bbaef8();
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_01bbaef8();
        if ((*(long *)(unaff_x19 + 0x18) != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
          FUN_01bb87e4(*(long *)(unaff_x19 + 0x10),
                       *(int *)(*(long *)(unaff_x19 + 0x18) + 0x24) + -0x101,5);
          if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
            FUN_01bb87e4(*(long *)(unaff_x19 + 0x10),
                         *(int *)(*(long *)(unaff_x19 + 0x20) + 0x24) + -1,5);
            if (*(long *)(unaff_x19 + 0x10) != 0) {
              FUN_01bb87e4(*(long *)(unaff_x19 + 0x10),unaff_w20 - 4,4);
              puVar2 = PTR_DAT_06e62878;
              if (0 < (int)unaff_w20) {
                uVar5 = 0;
                do {
                  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_01bbaef0;
                  lVar3 = *(long *)puVar2;
                  lVar4 = *(long *)(unaff_x19 + 0x10);
                  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x18);
                  if (*(int *)(lVar3 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                    lVar3 = *(long *)puVar2;
                  }
                  lVar3 = **(long **)(lVar3 + 0xb8);
                  if (lVar3 == 0) goto LAB_01bbaef0;
                  if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_01bbaef4:
                    /* WARNING: Subroutine does not return */
                    FUN_0160eebc();
                  }
                  if (lVar6 == 0) goto LAB_01bbaef0;
                  uVar1 = *(uint *)(lVar3 + (long)(int)uVar5 * 4 + 0x20);
                  if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_01bbaef4;
                  if (lVar4 == 0) goto LAB_01bbaef0;
                  FUN_01bb87e4(lVar4,*(undefined1 *)(lVar6 + (int)uVar1 + 0x20),3);
                  uVar5 = uVar5 + 1;
                } while (unaff_w20 != uVar5);
              }
              if (*(long *)(unaff_x19 + 0x18) != 0) {
                FUN_01bbb0e8(*(long *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x28));
                if (*(long *)(unaff_x19 + 0x20) != 0) {
                  FUN_01bbb0e8(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x28));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01bbaef0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


