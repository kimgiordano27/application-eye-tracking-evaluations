/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 05010014
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(void)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long lVar5;
  long lVar6;
  long unaff_x29;
  
  do {
    FUN_0500f154();
LAB_05010118:
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
      return;
    }
    sVar3 = FUN_04e87a5c();
    if (sVar3 == 0x2d) {
      cVar1 = *(char *)(unaff_x29 + 0x233);
      lVar5 = *(long *)(unaff_x19 + 0x30);
joined_r0x05010034:
      if (cVar1 == '\0') {
        FUN_02d6084c(PTR_DAT_067714a8);
        *(undefined1 *)(unaff_x29 + 0x233) = 1;
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(int *)(lVar5 + 0x10) == 1) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar2) goto LAB_050100a8;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar2) {
LAB_0501014c:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar6 = *(long *)(unaff_x22 + 8);
        uVar4 = FUN_04e87a5c(lVar5,0,0);
        *(undefined2 *)(lVar6 + (long)(int)uVar2 * 2) = uVar4;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      }
      else {
LAB_050100a8:
        FUN_04ea5974();
      }
      goto LAB_05010118;
    }
    if (sVar3 == 0x25) {
      cVar1 = *(char *)(unaff_x29 + 0x233);
      lVar5 = *(long *)(unaff_x19 + 0x90);
      goto joined_r0x05010034;
    }
    if (sVar3 != 0x23) {
      if (*(char *)(unaff_x25 + 0x666) == '\0') {
        FUN_02d6084c(PTR_DAT_067714a8);
        *(undefined1 *)(unaff_x25 + 0x666) = 1;
      }
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_0501014c;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar3;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      }
      else {
        FUN_04ea5848();
      }
      goto LAB_05010118;
    }
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
  } while( true );
}


