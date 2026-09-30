/*
FUNCTION_NAME: AnalyticsSessionSelectorScript$$RefreshSessionList
ENTRY_POINT: 03e18550
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


undefined8 * AnalyticsSessionSelectorScript__RefreshSessionList(void)

{
  bool in_CY;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong in_x9;
  long *unaff_x19;
  char *unaff_x20;
  void *pvVar4;
  
  if (in_CY) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *unaff_x19 = (long)(unaff_x20 + in_x9);
                    /* try { // try from 03e185a8 to 03f185eb has its CatchHandler @ 03e185a8
                       catch() { ... } // from try @ 03e185a8 with catch @ 03e185a8
                       catch() { ... } // from try @ 03e18604 with catch @ 03e185a8
                       catch() { ... } // from try @ 03e18678 with catch @ 03e185a8
                       catch() { ... } // from try @ 03e18688 with catch @ 03e185a8 */
    if ((((((in_x9 < 10) || (*unaff_x20 != '_')) || (unaff_x20[1] != 'G')) ||
         ((unaff_x20[2] != 'L' || (unaff_x20[3] != 'O')))) ||
        ((unaff_x20[4] != 'B' || ((unaff_x20[5] != 'A' || (unaff_x20[6] != 'L')))))) ||
       ((unaff_x20[7] != '_' || ((unaff_x20[8] != '_' || (unaff_x20[9] != 'N')))))) {
      pvVar4 = (void *)unaff_x19[0x266];
      lVar3 = *(long *)((long)pvVar4 + 8);
      puVar1 = pvVar4;
      if (0xfef < lVar3 + 0x20U) {
                    /* try { // try from 03e18670 to 03f18677 has its CatchHandler @ 03e18680 */
        puVar1 = malloc(0x1000);
                    /* try { // try from 03e18678 to 03f18683 has its CatchHandler @ 03e185a8 */
        if (puVar1 == (void *)0x0) goto LAB_03e186b8;
        lVar3 = 0;
                    /* catch() { ... } // from try @ 03e18670 with catch @ 03e18680 */
        *puVar1 = pvVar4;
        puVar1[1] = 0;
                    /* try { // try from 03e18684 to 03f18687 has its CatchHandler @ 03e18690 */
                    /* try { // try from 03e18688 to 03f18693 has its CatchHandler @ 03e185a8 */
        unaff_x19[0x266] = (long)puVar1;
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03e18684 with catch @ 03e18690
                        */
      *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
      puVar2 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
      *puVar2 = &UNK_0919d430;
      *(undefined4 *)((long)puVar1 + lVar3 + 0x18) = 0x1010107;
      *(char **)((long)puVar1 + lVar3 + 0x20) = unaff_x20;
      *(char **)((long)puVar1 + lVar3 + 0x28) = unaff_x20 + in_x9;
    }
    else {
      pvVar4 = (void *)unaff_x19[0x266];
      lVar3 = *(long *)((long)pvVar4 + 8);
                    /* try { // try from 03e185ec to 03f18603 has its CatchHandler @ 03e18658 */
      puVar1 = pvVar4;
      if (0xfef < lVar3 + 0x20U) {
        puVar1 = malloc(0x1000);
        if (puVar1 == (void *)0x0) {
LAB_03e186b8:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar3 = 0;
        *puVar1 = pvVar4;
        puVar1[1] = 0;
                    /* try { // try from 03e18604 to 03f1866f has its CatchHandler @ 03e185a8 */
        unaff_x19[0x266] = (long)puVar1;
      }
      *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
      puVar2 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
      *puVar2 = &UNK_0919d430;
      *(undefined4 *)((long)puVar1 + lVar3 + 0x18) = 0x1010107;
      *(char **)((long)puVar1 + lVar3 + 0x20) = "(anonymous namespace)";
      *(char **)((long)puVar1 + lVar3 + 0x28) = "";
    }
  }
                    /* catch(type#1 @ 091999c0) { ... } // from try @ 03e185ec with catch @ 03e18658
                        */
  return puVar2;
}


