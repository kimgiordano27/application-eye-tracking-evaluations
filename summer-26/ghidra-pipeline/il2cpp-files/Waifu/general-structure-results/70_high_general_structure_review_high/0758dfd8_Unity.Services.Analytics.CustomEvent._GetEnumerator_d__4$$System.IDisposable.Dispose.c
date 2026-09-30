/*
FUNCTION_NAME: Unity.Services.Analytics.CustomEvent.<GetEnumerator>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 0758dfd8
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_CustomEvent_<GetEnumerator>d__4__System_IDisposable_Dispose(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
                    /* catch() { ... } // from try @ 0758dcf8 with catch @ 0758dfd8 */
                    /* catch() { ... } // from try @ 0758de5c with catch @ 0758dfdc */
                    /* catch() { ... } // from try @ 0758d708 with catch @ 0758dfe0
                       catch() { ... } // from try @ 0758d838 with catch @ 0758dfe0
                       catch() { ... } // from try @ 0758d968 with catch @ 0758dfe0
                       catch() { ... } // from try @ 0758dc14 with catch @ 0758dfe0
                       catch() { ... } // from try @ 0758dd78 with catch @ 0758dfe0
                       catch() { ... } // from try @ 0758def8 with catch @ 0758dfe0 */
                    /* catch() { ... } // from try @ 0758d6d8 with catch @ 0758dfe4 */
  lVar4 = FUN_0339898c();
                    /* catch() { ... } // from try @ 0758df3c with catch @ 0758dfe8 */
  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 0758d6c0 with catch @ 0758dfec */
                    /* catch() { ... } // from try @ 0758d808 with catch @ 0758dff0 */
                    /* catch() { ... } // from try @ 0758df38 with catch @ 0758dff4 */
    if (2 < *(uint *)(unaff_x19 + 3)) {
      plVar7 = unaff_x19 + 6;
                    /* catch() { ... } // from try @ 0758d7f0 with catch @ 0758dff8 */
                    /* catch() { ... } // from try @ 0758d938 with catch @ 0758dffc */
      *plVar7 = unaff_x21;
                    /* catch() { ... } // from try @ 0758df34 with catch @ 0758e000 */
                    /* catch() { ... } // from try @ 0758d920 with catch @ 0758e004 */
      if (*(int *)(unaff_x24 + 0xcd0) != 0) {
                    /* try { // try from 0758e018 to 0768e01b has its CatchHandler @ 0758e03c */
                    /* try { // try from 0758e01c to 0768e047 has its CatchHandler @ 0758d440 */
        puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      in_stack_00000008 = *(undefined4 *)(unaff_x20 + 0x10);
                    /* catch() { ... } // from try @ 0758e018 with catch @ 0758e03c */
                    /* try { // try from 0758e048 to 0768e053 has its CatchHandler @ 0758e054 */
      lVar4 = FUN_03398650(*(undefined8 *)(unaff_x23 + 0xa98),&stack0x00000008);
                    /* catch() { ... } // from try @ 0758e048 with catch @ 0758e054 */
      if ((lVar4 != 0) &&
         (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
      goto LAB_0758e200;
      if (3 < *(uint *)(unaff_x19 + 3)) {
        plVar7 = unaff_x19 + 7;
        *plVar7 = lVar4;
        if (*(int *)(unaff_x24 + 0xcd0) != 0) {
          puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        in_stack_00000000._4_4_ = *(undefined4 *)(unaff_x20 + 8);
        lVar4 = FUN_03398650(*(undefined8 *)(unaff_x23 + 0xa98),(long)&stack0x00000000 + 4);
        if ((lVar4 != 0) &&
           (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
        goto LAB_0758e200;
        if (4 < *(uint *)(unaff_x19 + 3)) {
          plVar7 = unaff_x19 + 8;
          *plVar7 = lVar4;
          if (*(int *)(unaff_x24 + 0xcd0) != 0) {
            puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          lVar4 = FUN_03398650(*(undefined8 *)(unaff_x23 + 0xa98));
          if ((lVar4 != 0) &&
             (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
          goto LAB_0758e200;
          if (5 < *(uint *)(unaff_x19 + 3)) {
            plVar7 = unaff_x19 + 9;
            *plVar7 = lVar4;
            if (*(int *)(unaff_x24 + 0xcd0) != 0) {
              puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uVar6 = DAT_08454050;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            in_stack_00000048 = 0;
            in_stack_00000040 = 0;
            FUN_0683f768(&stack0x00000030);
            in_stack_00000018 = in_stack_00000038;
            in_stack_00000010 = in_stack_00000030;
            in_stack_00000028 = in_stack_00000048;
            in_stack_00000020 = in_stack_00000040;
            FUN_0666f060(0,uVar6,&stack0x00000010);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_0758e200:
  uVar6 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar6,0);
}


