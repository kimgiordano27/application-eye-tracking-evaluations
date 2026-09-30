/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 0501008c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(long param_1)

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
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
code_r0x0501008c:
  uVar4 = FUN_04e87a5c(param_1,0,0);
  *(undefined2 *)(unaff_x28 + unaff_x27 * 2) = uVar4;
  *(int *)(unaff_x22 + 0x18) = (int)unaff_x27 + 1;
LAB_05010118:
  do {
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
      return;
    }
    sVar3 = FUN_04e87a5c();
    if (sVar3 == 0x2d) {
      cVar1 = *(char *)(unaff_x29 + 0x233);
      param_1 = *(long *)(unaff_x19 + 0x30);
    }
    else {
      if (sVar3 != 0x25) {
        if (sVar3 == 0x23) {
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
          uVar2 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_0501014c;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          }
          else {
            FUN_04ea5848();
          }
        }
        goto LAB_05010118;
      }
      cVar1 = *(char *)(unaff_x29 + 0x233);
      param_1 = *(long *)(unaff_x19 + 0x90);
    }
    if (cVar1 == '\0') {
      FUN_02d6084c(PTR_DAT_067714a8);
      *(undefined1 *)(unaff_x29 + 0x233) = 1;
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(int *)(param_1 + 0x10) == 1) {
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      unaff_x27 = (long)(int)uVar2;
      if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) break;
    }
    FUN_04ea5974();
  } while( true );
  if (*(uint *)(unaff_x22 + 0x10) <= uVar2) {
LAB_0501014c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  unaff_x28 = *(long *)(unaff_x22 + 8);
  goto code_r0x0501008c;
}


