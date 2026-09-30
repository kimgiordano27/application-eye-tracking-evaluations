/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyPresence
ENTRY_POINT: 0500f04c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence(void)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long lVar4;
  long unaff_x29;
  
code_r0x0500f04c:
  do {
    FUN_02d6084c(PTR_DAT_067714a8);
    *(undefined1 *)(unaff_x29 + 0x233) = 1;
LAB_0500f060:
    do {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(int *)(unaff_x26 + 0x10) == 1) {
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar1) goto LAB_0500f0ac;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar1) {
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___ctor:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar4 = *(long *)(unaff_x22 + 8);
        uVar3 = FUN_04e87a5c(unaff_x26,0,0);
        *(undefined2 *)(lVar4 + (long)(int)uVar1 * 2) = uVar3;
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      }
      else {
LAB_0500f0ac:
        FUN_04ea5974();
      }
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
          return;
        }
        sVar2 = FUN_04e87a5c();
        if (sVar2 == 0x2d) {
          unaff_x26 = *(long *)(unaff_x19 + 0x30);
          if (*(char *)(unaff_x29 + 0x233) == '\0') goto code_r0x0500f04c;
          goto LAB_0500f060;
        }
        if (sVar2 == 0x24) break;
        if (sVar2 == 0x23) {
          if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0500f154();
        }
        else {
          if (*(char *)(unaff_x25 + 0x666) == '\0') {
            FUN_02d6084c(PTR_DAT_067714a8);
            *(undefined1 *)(unaff_x25 + 0x666) = 1;
          }
          uVar1 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar1)
            goto 
            Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___ctor
            ;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar2;
            *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          }
          else {
            FUN_04ea5848();
          }
        }
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x58);
    } while (*(char *)(unaff_x29 + 0x233) != '\0');
  } while( true );
}


