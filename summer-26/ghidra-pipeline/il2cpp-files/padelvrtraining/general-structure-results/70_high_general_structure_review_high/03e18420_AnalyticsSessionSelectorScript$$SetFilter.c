/*
FUNCTION_NAME: AnalyticsSessionSelectorScript$$SetFilter
ENTRY_POINT: 03e18420
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 * AnalyticsSessionSelectorScript__SetFilter(void)

{
  long lVar1;
  undefined8 *puVar2;
  int in_w8;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 *puVar5;
  undefined8 *unaff_x21;
  void *pvVar6;
  
  puVar4 = unaff_x21;
                    /* try { // try from 03e18424 to 03f1843b has its CatchHandler @ 03e184e0 */
  if (in_w8 == 0x49) {
    lVar1 = FUN_03e0f258();
    if (lVar1 == 0) {
      return (undefined8 *)0x0;
    }
                    /* try { // try from 03e1843c to 03f1849f has its CatchHandler @ 03e184dc */
    pvVar6 = *(void **)(unaff_x19 + 0x1330);
    lVar3 = *(long *)((long)pvVar6 + 8);
    puVar2 = pvVar6;
    if (0xfef < lVar3 + 0x20U) {
      puVar2 = malloc(0x1000);
      if (puVar2 == (void *)0x0) goto LAB_03e184b8;
      lVar3 = 0;
      *puVar2 = pvVar6;
      puVar2[1] = 0;
      *(undefined8 **)(unaff_x19 + 0x1330) = puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
    puVar4 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
    *puVar4 = &UNK_0919eb60;
    *(undefined8 **)((long)puVar2 + lVar3 + 0x20) = unaff_x21;
    *(long *)((long)puVar2 + lVar3 + 0x28) = lVar1;
    *(undefined4 *)((long)puVar2 + lVar3 + 0x18) = 0x1010125;
  }
  pvVar6 = *(void **)(unaff_x19 + 0x1330);
  lVar1 = *(long *)((long)pvVar6 + 8);
  puVar2 = pvVar6;
  if (0xfef < lVar1 + 0x20U) {
    puVar2 = malloc(0x1000);
    if (puVar2 == (void *)0x0) {
LAB_03e184b8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar1 = 0;
    *puVar2 = pvVar6;
    puVar2[1] = 0;
    *(undefined8 **)(unaff_x19 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar1 + 0x20;
  puVar5 = (undefined8 *)((long)puVar2 + lVar1 + 0x10);
  *puVar5 = &UNK_0919e070;
  *(undefined4 *)((long)puVar2 + lVar1 + 0x18) = 0x101012b;
  *(undefined8 **)((long)puVar2 + lVar1 + 0x20) = puVar4;
                    /* try { // try from 03e184a0 to 03f184fb has its CatchHandler @ 03e18384 */
  return puVar5;
}


