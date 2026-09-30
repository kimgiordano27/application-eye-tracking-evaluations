/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 0177a7c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName(void)

{
  short sVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int unaff_w19;
  long unaff_x21;
  short *unaff_x23;
  undefined1 unaff_w25;
  long unaff_x26;
  int unaff_w27;
  undefined2 unaff_w28;
  
  do {
    *(undefined1 *)(unaff_x26 + 0x1dd) = unaff_w25;
    do {
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
        if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_0177a90c;
        *(undefined2 *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = unaff_w28;
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      }
      else {
        FUN_0161aa84();
      }
      puVar3 = StringLiteral_4591;
      bVar4 = unaff_w19 == -1;
      unaff_w19 = unaff_w19 + 1;
      if (bVar4) {
        sVar1 = *unaff_x23;
        do {
          if (sVar1 == 0) {
            if (unaff_w27 != 0) {
                    /* try { // try from 0177a890 to 0187a89b has its CatchHandler @ 0177a938 */
              if (*(int *)(*(long *)
                            Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__
                          + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
                    /* try { // try from 0177a8b4 to 0187a8c3 has its CatchHandler @ 0177a934 */
                    /* try { // try from 0177a8c4 to 0187a90f has its CatchHandler @ 0177a748 */
              FUN_0177acb0();
              return;
            }
            return;
          }
          if (*(char *)(unaff_x26 + 0x1dd) == '\0') {
            thunk_FUN_00d48444(puVar3);
            *(undefined1 *)(unaff_x26 + 0x1dd) = 1;
          }
          uVar2 = *(uint *)(unaff_x21 + 0x18);
          if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
                    /* try { // try from 0177a840 to 0187a847 has its CatchHandler @ 0177a940 */
            if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
LAB_0177a90c:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
                    /* try { // try from 0177a850 to 0187a857 has its CatchHandler @ 0177a930 */
            *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar1;
            *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
          }
          else {
            FUN_0161aa84();
          }
                    /* try { // try from 0177a86c to 0187a86f has its CatchHandler @ 0177a92c */
          unaff_x23 = unaff_x23 + 1;
                    /* try { // try from 0177a870 to 0187a87f has its CatchHandler @ 0177a93c */
          sVar1 = *unaff_x23;
        } while( true );
      }
    } while (*(char *)(unaff_x26 + 0x1dd) != '\0');
    thunk_FUN_00d48444();
  } while( true );
}


