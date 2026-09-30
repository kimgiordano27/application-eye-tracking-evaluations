/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 05907688
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int in_w8;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_031e5338();
    }
    if (unaff_x20 == (long *)0x0) break;
    FUN_057cac1c();
    do {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_05905430(unaff_x21);
      if ((uVar4 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_0590781c;
      }
      else {
        if (unaff_x20 == (long *)0x0) goto LAB_0590781c;
        FUN_057ca33c();
                    /* try { // try from 059076dc to 05a07703 has its CatchHandler @ 0590782c */
      }
      unaff_w25 = unaff_w25 + -1;
      FUN_057cac1c();
      bVar1 = false;
      if (0 < unaff_w25) {
        if (0 < *(int *)(unaff_x21 + 0x10)) {
                    /* try { // try from 05907710 to 05a0771f has its CatchHandler @ 05907820 */
          sVar2 = FUN_057b9840(unaff_x21,*(int *)(unaff_x21 + 0x10) + -1,0);
          lVar8 = *unaff_x23;
          if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 0590772c to 05a0772f has its CatchHandler @ 05907828 */
                    /* try { // try from 05907730 to 05a077c7 has its CatchHandler @ 05907548 */
            thunk_FUN_031e5338(lVar8);
            lVar8 = *unaff_x23;
          }
          lVar9 = *(long *)(lVar8 + 0xb8);
          if (*(short *)(lVar9 + 10) != sVar2) {
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_031e5338(lVar8);
              lVar8 = *unaff_x23;
              lVar9 = *(long *)(lVar8 + 0xb8);
            }
            if (*(short *)(lVar9 + 8) != sVar2) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_031e5338(lVar8);
                lVar9 = *(long *)(*unaff_x23 + 0xb8);
              }
              bVar1 = *(short *)(lVar9 + 0x18) != sVar2;
              goto LAB_05907798;
            }
          }
          bVar1 = false;
        }
      }
LAB_05907798:
      do {
        unaff_x22 = unaff_x22 + 1;
        if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x22) {
          if (unaff_x20 != (long *)0x0) {
                    /* try { // try from 059077c8 to 05a077cb has its CatchHandler @ 05907824 */
                    /* WARNING: Could not recover jumptable at 0x059077cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 059077cc to 05a0784b has its CatchHandler @ 05907548 */
            (**(code **)(*unaff_x20 + 0x168))();
            return;
          }
          goto LAB_0590781c;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x22) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        unaff_x21 = *(long *)(unaff_x24 + unaff_x22 * 8);
        if (unaff_x21 == 0) {
          thunk_FUN_031edd38(PTR_DAT_070c2888);
          uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
          uVar7 = thunk_FUN_031edd38(PTR_DAT_07105180);
          uVar5 = thunk_FUN_031edd38(PTR_DAT_07105188);
          FUN_058a3364(uVar6,uVar7,uVar5,0);
          goto LAB_05907850;
        }
      } while (*(int *)(unaff_x21 + 0x10) == 0);
      lVar8 = *unaff_x23;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar8 = *unaff_x23;
      }
      iVar3 = FUN_057c47b8(unaff_x21,**(undefined8 **)(lVar8 + 0xb8),0);
      if (iVar3 != -1) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05907710 with catch @ 05907820
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059077c8 with catch @ 05907824
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0590772c with catch @ 05907828
                        */
        thunk_FUN_031edd38(PTR_DAT_070c3af0);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059076dc with catch @ 0590782c
                        */
        uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05907678 with catch @ 05907830
                        */
        uVar7 = thunk_FUN_031edd38(PTR_DAT_071050e0);
                    /* try { // try from 0590784c to 05a0784f has its CatchHandler @ 0590785c */
        FUN_058a1e9c(uVar6,uVar7,0);
LAB_05907850:
        uVar7 = thunk_FUN_031edd38(PTR_DAT_07105190);
                    /* catch() { ... } // from try @ 0590784c with catch @ 0590785c */
                    /* try { // try from 05907860 to 05a07867 has its CatchHandler @ 05907870 */
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar6,uVar7);
      }
    } while (!bVar1);
    in_w8 = *(int *)(*unaff_x23 + 0xe4);
  }
LAB_0590781c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


