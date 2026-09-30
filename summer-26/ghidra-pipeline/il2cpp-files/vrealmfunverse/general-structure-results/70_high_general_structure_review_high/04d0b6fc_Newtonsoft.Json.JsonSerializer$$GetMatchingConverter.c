/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetMatchingConverter
ENTRY_POINT: 04d0b6fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__GetMatchingConverter(long param_1)

{
  undefined1 in_CY;
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  undefined8 uVar5;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  double dVar6;
  double dVar7;
  
  do {
    if ((bool)in_CY) {
LAB_04d0b8b8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
                    /* try { // try from 04d0b704 to 04e0b7b7 has its CatchHandler @ 04d0b3e4 */
    uVar5 = *(undefined8 *)(param_1 + (long)(int)unaff_w26 * 0x10 + 0x28);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar1 = FUN_04d5c2b4(&stack0x00000008,uVar5,0);
    if (iVar1 < 1) {
      lVar2 = *unaff_x23;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *unaff_x23;
      }
      lVar2 = **(long **)(lVar2 + 0xb8);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= unaff_w26) goto LAB_04d0b8b8;
        uVar5 = *(undefined8 *)(lVar2 + (long)(int)unaff_w26 * 0x10 + 0x28);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar1 = FUN_04d5c2b4(&stack0x00000008,uVar5,0);
        lVar2 = *unaff_x23;
        if (iVar1 != 0) {
          unaff_w26 = unaff_w26 - 1;
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar2 = *unaff_x23;
        }
        lVar2 = **(long **)(lVar2 + 0xb8);
        if (lVar2 != 0) {
                    /* try { // try from 04d0b7b8 to 04e0b7bb has its CatchHandler @ 04d0b850 */
                    /* try { // try from 04d0b7bc to 04e0b7bf has its CatchHandler @ 04d0b84c */
                    /* try { // try from 04d0b7c0 to 04e0b807 has its CatchHandler @ 04d0b3e4 */
          if (*(uint *)(lVar2 + 0x18) <= unaff_w26) goto LAB_04d0b8b8;
          uVar5 = *(undefined8 *)(lVar2 + (long)(int)unaff_w26 * 0x10 + 0x28);
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_04d5d9fc(&stack0x00000008,uVar5,0);
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*unaff_x25);
          }
                    /* try { // try from 04d0b808 to 04e0b80b has its CatchHandler @ 04d0b840 */
                    /* try { // try from 04d0b80c to 04e0b813 has its CatchHandler @ 04d0b3e4 */
          dVar6 = (double)FUN_04d92540();
                    /* try { // try from 04d0b814 to 04e0b817 has its CatchHandler @ 04d0b834 */
                    /* try { // try from 04d0b818 to 04e0b81b has its CatchHandler @ 04d0b830 */
                    /* try { // try from 04d0b81c to 04e0b81f has its CatchHandler @ 04d0b828 */
          lVar2 = **(long **)(*unaff_x23 + 0xb8);
                    /* catch() { ... } // from try @ 04d0b6f8 with catch @ 04d0b820
                       try { // try from 04d0b820 to 04e0b877 has its CatchHandler @ 04d0b3e4 */
          if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 04d0b604 with catch @ 04d0b824 */
                    /* catch() { ... } // from try @ 04d0b81c with catch @ 04d0b828 */
                    /* catch() { ... } // from try @ 04d0b5f0 with catch @ 04d0b82c */
            if (unaff_w26 < *(uint *)(lVar2 + 0x18)) {
                    /* catch() { ... } // from try @ 04d0b818 with catch @ 04d0b830 */
                    /* catch() { ... } // from try @ 04d0b814 with catch @ 04d0b834 */
              uVar3 = *(uint *)(lVar2 + (long)(int)unaff_w26 * 0x10 + 0x20);
                    /* catch() { ... } // from try @ 04d0b5c4 with catch @ 04d0b838 */
                    /* catch() { ... } // from try @ 04d0b560 with catch @ 04d0b83c */
                    /* catch() { ... } // from try @ 04d0b808 with catch @ 04d0b840 */
              dVar7 = (double)((uVar3 & 1) + 0x1d);
                    /* catch() { ... } // from try @ 04d0b4f4 with catch @ 04d0b844 */
              iVar1 = 1;
                    /* catch() { ... } // from try @ 04d0b688 with catch @ 04d0b848 */
                    /* catch() { ... } // from try @ 04d0b7bc with catch @ 04d0b84c */
              if (dVar7 <= dVar6) {
                do {
                    /* catch() { ... } // from try @ 04d0b7b8 with catch @ 04d0b850 */
                  uVar3 = (int)uVar3 >> 1;
                    /* catch() { ... } // from try @ 04d0b614 with catch @ 04d0b854 */
                  dVar6 = dVar6 - dVar7;
                  iVar1 = iVar1 + 1;
                  dVar7 = (double)((uVar3 & 1) + 0x1d);
                } while (dVar7 <= dVar6);
              }
              iVar4 = -0x7fffffff;
              if (dVar6 != INFINITY) {
                iVar4 = (int)dVar6 + 1;
              }
              *unaff_x21 = iVar4;
              *unaff_x20 = iVar1;
              *unaff_x19 = unaff_w26 + 0x526;
              return;
            }
            goto LAB_04d0b8b8;
          }
        }
      }
LAB_04d0b8b4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *unaff_x23;
    }
    param_1 = **(long **)(lVar2 + 0xb8);
    if (param_1 == 0) goto LAB_04d0b8b4;
    unaff_w26 = unaff_w26 + 1;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_w26;
  } while( true );
}


