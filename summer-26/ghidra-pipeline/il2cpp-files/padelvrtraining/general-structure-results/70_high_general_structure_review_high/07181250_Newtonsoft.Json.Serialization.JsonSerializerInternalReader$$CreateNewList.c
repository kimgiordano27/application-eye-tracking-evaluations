/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 07181250
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList(void)

{
  short sVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 unaff_w19;
  long unaff_x21;
  short *unaff_x23;
  int unaff_w25;
  long unaff_x26;
  int unaff_w27;
  undefined2 unaff_w28;
  
code_r0x07181250:
  FUN_06ff15f4();
  do {
    puVar3 = PTR_DAT_091fa408;
    bVar4 = unaff_w25 == -1;
    unaff_w25 = unaff_w25 + 1;
    if (bVar4) {
      sVar1 = *unaff_x23;
      do {
        if (sVar1 == 0) {
          if (unaff_w27 != 0) {
            if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            FUN_07181720();
            return;
          }
          return;
        }
        if (*(char *)(unaff_x26 + 0x200) == '\0') {
          FUN_03d2d2b0(puVar3);
          *(undefined1 *)(unaff_x26 + 0x200) = 1;
        }
        uVar2 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
          if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
LAB_07181364:
                    /* WARNING: Subroutine does not return */
            FUN_03d2d550();
          }
          *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar1;
          *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        }
        else {
          FUN_06ff15f4();
        }
        unaff_x23 = unaff_x23 + 1;
        sVar1 = *unaff_x23;
      } while( true );
    }
    if (*(char *)(unaff_x26 + 0x200) == '\0') {
      FUN_03d2d2b0();
      *(undefined1 *)(unaff_x26 + 0x200) = unaff_w19;
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)*(uint *)(unaff_x21 + 0x10) <= (int)uVar2) goto code_r0x07181250;
    if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_07181364;
    *(undefined2 *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = unaff_w28;
    *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
  } while( true );
}


