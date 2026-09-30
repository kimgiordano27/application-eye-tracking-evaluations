/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<DeserializeTokenAsync>d__6$$MoveNext
ENTRY_POINT: 06d92ffc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert_<DeserializeTokenAsync>d__6__MoveNext(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 *unaff_x19;
  long *plVar5;
  long unaff_x20;
  long unaff_x21;
  
  FUN_03d2d2b0(PTR_DAT_091a1508);
  *(undefined1 *)(unaff_x21 + 0xc43) = 1;
  if (unaff_x19[1] != 5) {
                    /* try { // try from 06d9301c to 06e9302b has its CatchHandler @ 06d9302c */
    if (unaff_x19[1] == 1) {
                    /* catch() { ... } // from try @ 06d92f9c with catch @ 06d9302c
                       catch() { ... } // from try @ 06d9301c with catch @ 06d9302c */
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 06d93030 to 06e93033 has its CatchHandler @ 06d9303c */
        FUN_03d8f26c();
      }
                    /* try { // try from 06d93034 to 06e9303f has its CatchHandler @ 06d92da0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06d92f74 with catch @ 06d9303c
                       catch(type#2 @ 00000000) { ... } // from try @ 06d93030 with catch @ 06d9303c
                        */
      FUN_06d9b0b0();
      *unaff_x19 = 0xffffffff;
    }
    return;
  }
  plVar5 = *(long **)(unaff_x19 + 4);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_091a1508) {
                    /* try { // try from 06d930a8 to 06e930ff has its CatchHandler @ 06d930a8
                       catch() { ... } // from try @ 06d930a8 with catch @ 06d930a8
                       catch() { ... } // from try @ 06d931c0 with catch @ 06d930a8
                       catch() { ... } // from try @ 06d9323c with catch @ 06d930a8
                       catch() { ... } // from try @ 06d93280 with catch @ 06d930a8
                       catch() { ... } // from try @ 06d932bc with catch @ 06d930a8
                       catch() { ... } // from try @ 06d9333c with catch @ 06d930a8 */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_06d930b8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370(plVar5,*(long *)PTR_DAT_091a1508,2);
LAB_06d930b8:
                    /* WARNING: Could not recover jumptable at 0x06d930c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


