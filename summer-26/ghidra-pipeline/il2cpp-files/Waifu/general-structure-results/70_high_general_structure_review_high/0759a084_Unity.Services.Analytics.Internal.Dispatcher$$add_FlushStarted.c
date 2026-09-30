/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$add_FlushStarted
ENTRY_POINT: 0759a084
PROGRAM: Waifu-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Analytics_Internal_Dispatcher__add_FlushStarted(ulong *param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong in_x9;
  uint in_w11;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while (in_w11 != 0) {
    bVar2 = 1;
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = *param_1 | in_x9;
      bVar2 = ExclusiveMonitorsStatus();
    }
    in_w11 = (uint)bVar2;
  }
  lVar5 = FUN_0682c484(unaff_x22 + 0x28);
                    /* try { // try from 0759a09c to 0769a0a7 has its CatchHandler @ 0759a180 */
                    /* try { // try from 0759a0b0 to 0769a0c3 has its CatchHandler @ 0759a194 */
  if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
  {
LAB_0759a348:
    uVar7 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar7,0);
  }
  if (7 < *(uint *)(unaff_x19 + 3)) {
    plVar8 = unaff_x19 + 0xb;
    *plVar8 = lVar5;
                    /* try { // try from 0759a0d0 to 0769a0d7 has its CatchHandler @ 0759a1ac */
    if (*(int *)(unaff_x25 + 0xcd0) != 0) {
                    /* try { // try from 0759a0d8 to 0769a16f has its CatchHandler @ 07599cd8 */
      puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar5 = FUN_0682c484(unaff_x22 + 8);
    if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0)
       ) goto LAB_0759a348;
    if (8 < *(uint *)(unaff_x19 + 3)) {
      plVar8 = unaff_x19 + 0xc;
      *plVar8 = lVar5;
      if (*(int *)(unaff_x25 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
                    /* try { // try from 0759a170 to 0769a177 has its CatchHandler @ 0759a1ac */
                    /* try { // try from 0759a178 to 0769a17b has its CatchHandler @ 0759a1a0 */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
                    /* catch() { ... } // from try @ 07599fdc with catch @ 0759a17c
                       try { // try from 0759a17c to 0769a1e3 has its CatchHandler @ 07599cd8 */
        } while (cVar3 != '\0');
      }
                    /* catch() { ... } // from try @ 0759a09c with catch @ 0759a180 */
                    /* catch() { ... } // from try @ 07599fe4 with catch @ 0759a184 */
                    /* catch() { ... } // from try @ 07599fc4 with catch @ 0759a188 */
                    /* catch() { ... } // from try @ 07599f08 with catch @ 0759a18c */
                    /* catch() { ... } // from try @ 07599ef0 with catch @ 0759a190 */
      lVar5 = FUN_0682c484(unaff_x22 + 0x14);
                    /* catch() { ... } // from try @ 0759a0b0 with catch @ 0759a194 */
                    /* catch() { ... } // from try @ 07599f94 with catch @ 0759a198 */
      if ((lVar5 != 0) &&
         (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
      goto LAB_0759a348;
      if (9 < *(uint *)(unaff_x19 + 3)) {
        plVar8 = unaff_x19 + 0xd;
        *plVar8 = lVar5;
        if (*(int *)(unaff_x25 + 0xcd0) != 0) {
          puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar5 = FUN_0682c484(unaff_x22 + 0x20);
        if ((lVar5 != 0) &&
           (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
        goto LAB_0759a348;
        if (10 < *(uint *)(unaff_x19 + 3)) {
          plVar8 = unaff_x19 + 0xe;
          *plVar8 = lVar5;
          if (*(int *)(unaff_x25 + 0xcd0) != 0) {
            puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar5 = FUN_0682c484(unaff_x22 + 0x2c);
          if ((lVar5 != 0) &&
             (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
          goto LAB_0759a348;
          if (0xb < *(uint *)(unaff_x19 + 3)) {
            plVar8 = unaff_x19 + 0xf;
            *plVar8 = lVar5;
            if (*(int *)(unaff_x25 + 0xcd0) != 0) {
              puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            uVar7 = DAT_08454060;
            in_stack_00000028 = 0;
            in_stack_00000020 = 0;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            FUN_0683f768(&stack0x00000020);
            FUN_0666f060(0,uVar7);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


