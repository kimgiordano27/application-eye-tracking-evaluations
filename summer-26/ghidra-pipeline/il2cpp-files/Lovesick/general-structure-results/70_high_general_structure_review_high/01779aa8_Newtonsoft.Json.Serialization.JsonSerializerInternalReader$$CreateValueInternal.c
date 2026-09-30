/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateValueInternal
ENTRY_POINT: 01779aa8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal(void)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  int in_w10;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long lVar5;
  long lVar6;
  long unaff_x29;
  
  do {
    *(int *)(unaff_x22 + 0x18) = in_w10;
LAB_01779ac0:
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
      return;
    }
    sVar3 = FUN_015fa29c();
    if (sVar3 == 0x2d) {
      cVar1 = *(char *)(unaff_x29 + 0xdcf);
      lVar5 = *(long *)(unaff_x19 + 0x30);
joined_r0x01779a5c:
      if (cVar1 == '\0') {
        thunk_FUN_00d48444(StringLiteral_4591);
        *(undefined1 *)(unaff_x29 + 0xdcf) = 1;
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar5 + 0x10) == 1) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar2) goto LAB_01779a40;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_01779af4;
        lVar6 = *(long *)(unaff_x22 + 8);
        uVar4 = FUN_015fa29c(lVar5,0,0);
        *(undefined2 *)(lVar6 + (long)(int)uVar2 * 2) = uVar4;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      }
      else {
LAB_01779a40:
        FUN_0161abb0();
      }
      goto LAB_01779ac0;
    }
    if (sVar3 == 0x24) {
      cVar1 = *(char *)(unaff_x29 + 0xdcf);
      lVar5 = *(long *)(unaff_x19 + 0x58);
      goto joined_r0x01779a5c;
    }
    if (sVar3 == 0x23) {
      if (*(int *)(*(long *)Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01779af8();
      goto LAB_01779ac0;
    }
    if (*(char *)(unaff_x25 + 0x1dd) == '\0') {
      thunk_FUN_00d48444(StringLiteral_4591);
      *(undefined1 *)(unaff_x25 + 0x1dd) = 1;
    }
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar2) {
      FUN_0161aa84();
      goto LAB_01779ac0;
    }
    if (*(uint *)(unaff_x22 + 0x10) <= uVar2) {
LAB_01779af4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    in_w10 = uVar2 + 1;
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar3;
  } while( true );
}


