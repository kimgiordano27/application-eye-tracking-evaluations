/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$MoveNext
ENTRY_POINT: 04ed5f88
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__MoveNext(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  ulong uVar6;
  
  lVar2 = FUN_04ed3468();
  if (lVar2 != 0) {
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar6 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar6) goto LAB_04ed6170;
        FUN_04ed7c04();
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    lVar2 = FUN_04ed3468();
    if (lVar2 != 0) {
                    /* try { // try from 04ed5fe8 to 04fd6147 has its CatchHandler @ 04ed5fe8
                       catch() { ... } // from try @ 04ed5fe8 with catch @ 04ed5fe8
                       catch() { ... } // from try @ 04ed62e4 with catch @ 04ed5fe8
                       catch() { ... } // from try @ 04ed633c with catch @ 04ed5fe8
                       catch() { ... } // from try @ 04ed6384 with catch @ 04ed5fe8
                       catch() { ... } // from try @ 04ed63d8 with catch @ 04ed5fe8 */
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar6 = 0;
        uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        do {
          if (uVar4 <= uVar6) goto LAB_04ed6170;
          FUN_04ed7c04();
          uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
      FUN_04ed27f4();
      FUN_04ed7c04();
      lVar2 = FUN_04ed3468();
      if (lVar2 != 0) {
        if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
          uVar6 = 0;
          uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
          do {
            if (uVar4 <= uVar6) goto LAB_04ed6170;
            FUN_04ed7c04();
            uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
        }
        lVar2 = FUN_04ed3468();
        if (lVar2 != 0) {
          if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
            uVar6 = 0;
            uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
            do {
              if (uVar4 <= uVar6) goto LAB_04ed6170;
              FUN_04ed7c04();
              uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
          }
          if ((*(long *)(unaff_x19 + 0x10) == 0) ||
             (*(int *)(*(long *)(unaff_x19 + 0x10) + 0x18) < 1)) {
                    /* try { // try from 04ed6168 to 04fd619b has its CatchHandler @ 04ed6354 */
            return 0;
          }
          lVar2 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8918);
          puVar1 = PTR_DAT_065c9878;
          lVar5 = *(long *)(unaff_x19 + 0x10);
          if (lVar5 != 0) {
            uVar6 = 0;
            do {
              if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar6) {
                return lVar2;
              }
              uVar3 = FUN_03968108(lVar5,uVar6 & 0xffffffff,*(undefined8 *)puVar1);
              if (lVar2 == 0) break;
              if (*(uint *)(lVar2 + 0x18) <= uVar6) {
LAB_04ed6170:
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              *(undefined8 *)(lVar2 + 0x20 + uVar6 * 8) = uVar3;
                    /* try { // try from 04ed6148 to 04fd614b has its CatchHandler @ 04ed633c */
              lVar5 = *(long *)(unaff_x19 + 0x10);
                    /* try { // try from 04ed614c to 04fd6157 has its CatchHandler @ 04ed6348 */
              uVar6 = uVar6 + 1;
            } while (lVar5 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


