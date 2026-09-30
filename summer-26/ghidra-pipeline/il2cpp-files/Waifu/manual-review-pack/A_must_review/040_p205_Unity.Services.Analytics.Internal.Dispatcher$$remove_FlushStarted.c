/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$remove_FlushStarted
ENTRY_POINT: 0759a19c
PROGRAM: Waifu-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Analytics_Internal_Dispatcher__remove_FlushStarted(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
                    /* catch() { ... } // from try @ 07599f74 with catch @ 0759a19c */
                    /* catch() { ... } // from try @ 0759a178 with catch @ 0759a1a0 */
                    /* catch() { ... } // from try @ 07599f14 with catch @ 0759a1a4 */
                    /* catch() { ... } // from try @ 07599ecc with catch @ 0759a1a8 */
  lVar4 = FUN_0339898c();
                    /* catch() { ... } // from try @ 0759a0d0 with catch @ 0759a1ac
                       catch() { ... } // from try @ 0759a170 with catch @ 0759a1ac */
  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 0759a050 with catch @ 0759a1b8 */
    if (9 < *(uint *)(unaff_x19 + 3)) {
      plVar7 = unaff_x19 + 0xd;
                    /* catch() { ... } // from try @ 0759a064 with catch @ 0759a1bc */
                    /* catch() { ... } // from try @ 0759a034 with catch @ 0759a1c0 */
      *plVar7 = unaff_x23;
                    /* catch() { ... } // from try @ 0759a014 with catch @ 0759a1c4 */
                    /* catch() { ... } // from try @ 0759a024 with catch @ 0759a1c8 */
      if (*(int *)(unaff_x25 + 0xcd0) != 0) {
                    /* try { // try from 0759a1e4 to 0769a1e7 has its CatchHandler @ 0759a208 */
        puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
                    /* try { // try from 0759a1f0 to 0769a207 has its CatchHandler @ 0759a300 */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
                    /* catch() { ... } // from try @ 0759a1e4 with catch @ 0759a208
                       try { // try from 0759a208 to 0769a22f has its CatchHandler @ 07599cd8 */
      lVar4 = FUN_0682c484(unaff_x22 + 0x20);
                    /* catch() { ... } // from try @ 07599f3c with catch @ 0759a214 */
      if ((lVar4 != 0) &&
         (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
      goto LAB_0759a348;
                    /* try { // try from 0759a230 to 0769a233 has its CatchHandler @ 0759a27c */
      if (10 < *(uint *)(unaff_x19 + 3)) {
        plVar7 = unaff_x19 + 0xe;
        *plVar7 = lVar4;
                    /* try { // try from 0759a244 to 0769a24b has its CatchHandler @ 0759a300 */
        if (*(int *)(unaff_x25 + 0xcd0) != 0) {
                    /* try { // try from 0759a24c to 0769a263 has its CatchHandler @ 07599cd8 */
          puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                    /* try { // try from 0759a264 to 0769a267 has its CatchHandler @ 0759a288 */
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
                    /* try { // try from 0759a274 to 0769a2eb has its CatchHandler @ 0759a300 */
          } while (cVar2 != '\0');
        }
                    /* catch() { ... } // from try @ 0759a230 with catch @ 0759a27c */
                    /* catch() { ... } // from try @ 0759a264 with catch @ 0759a288 */
        lVar4 = FUN_0682c484(unaff_x22 + 0x2c);
        if ((lVar4 != 0) &&
           (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
        goto LAB_0759a348;
        if (0xb < *(uint *)(unaff_x19 + 3)) {
          plVar7 = unaff_x19 + 0xf;
          *plVar7 = lVar4;
          if (*(int *)(unaff_x25 + 0xcd0) != 0) {
            puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uVar6 = DAT_08454060;
          in_stack_00000028 = 0;
          in_stack_00000020 = 0;
          in_stack_00000038 = 0;
          in_stack_00000030 = 0;
          FUN_0683f768(&stack0x00000020);
          FUN_0666f060(0,uVar6);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_0759a348:
  uVar6 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar6,0);
}


