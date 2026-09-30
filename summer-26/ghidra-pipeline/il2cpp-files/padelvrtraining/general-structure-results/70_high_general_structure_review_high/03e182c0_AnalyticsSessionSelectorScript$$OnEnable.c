/*
FUNCTION_NAME: AnalyticsSessionSelectorScript$$OnEnable
ENTRY_POINT: 03e182c0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 * AnalyticsSessionSelectorScript__OnEnable(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *puVar4;
  void *pvVar5;
  
  lVar1 = FUN_03e1818c();
  if (lVar1 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    pvVar5 = *(void **)(unaff_x19 + 0x1330);
    lVar3 = *(long *)((long)pvVar5 + 8);
    puVar2 = pvVar5;
    if (0xfef < lVar3 + 0x20U) {
      puVar2 = malloc(0x1000);
      if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = 0;
      *puVar2 = pvVar5;
      puVar2[1] = 0;
      *(undefined8 **)(unaff_x19 + 0x1330) = puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
    puVar4 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
    *puVar4 = &UNK_0919e070;
    *(undefined4 *)((long)puVar2 + lVar3 + 0x18) = 0x101012b;
    *(long *)((long)puVar2 + lVar3 + 0x20) = lVar1;
                    /* try { // try from 03e18328 to 03f1834b has its CatchHandler @ 03e18328
                       catch() { ... } // from try @ 03e18328 with catch @ 03e18328
                       catch() { ... } // from try @ 03e18358 with catch @ 03e18328 */
  }
  return puVar4;
}


