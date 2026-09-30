/*
FUNCTION_NAME: OVRManager$$ShutdownInsightPassthrough
ENTRY_POINT: 07c62630
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__ShutdownInsightPassthrough
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,ulong param_5)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* try { // try from 07c62638 to 07d6263b has its CatchHandler @ 07c6267c */
                    /* try { // try from 07c6263c to 07d6263f has its CatchHandler @ 07c62680 */
                    /* try { // try from 07c62640 to 07d62643 has its CatchHandler @ 07c62678 */
                    /* try { // try from 07c62644 to 07d62647 has its CatchHandler @ 07c62660 */
                    /* try { // try from 07c62648 to 07d6264b has its CatchHandler @ 07c62668 */
                    /* catch() { ... } // from try @ 07c625f8 with catch @ 07c6264c
                       try { // try from 07c6264c to 07d62697 has its CatchHandler @ 07c622f0 */
  if (*(long *)(param_4 + 0x38) != 0) {
                    /* catch() { ... } // from try @ 07c62614 with catch @ 07c62650 */
                    /* catch() { ... } // from try @ 07c625a4 with catch @ 07c62654 */
                    /* catch() { ... } // from try @ 07c62544 with catch @ 07c62658 */
    fVar3 = (float)FUN_094bab0c(*(long *)(param_4 + 0x38),0);
                    /* catch() { ... } // from try @ 07c62534 with catch @ 07c6265c */
                    /* catch() { ... } // from try @ 07c62644 with catch @ 07c62660 */
                    /* catch() { ... } // from try @ 07c625c0 with catch @ 07c62664 */
                    /* catch() { ... } // from try @ 07c6252c with catch @ 07c62668
                       catch() { ... } // from try @ 07c62648 with catch @ 07c62668 */
                    /* catch() { ... } // from try @ 07c6249c with catch @ 07c6266c */
                    /* catch() { ... } // from try @ 07c624c4 with catch @ 07c62670 */
    if ((360.0 <= fVar3) || ((param_5 & 1) == 0)) {
      if (*(long *)(param_4 + 0x30) != 0) {
        FUN_0952508c(*(long *)(param_4 + 0x30),0,0);
        lVar2 = *(long *)(param_4 + 0x30);
        if (lVar2 != 0) {
          fVar3 = 360.0;
LAB_07c627bc:
          *(float *)(lVar2 + 0x74) = fVar3;
          return;
        }
      }
    }
    else {
                    /* catch() { ... } // from try @ 07c624d4 with catch @ 07c62674 */
                    /* catch() { ... } // from try @ 07c62640 with catch @ 07c62678 */
      if (*(long *)(param_4 + 0x28) != 0) {
                    /* catch() { ... } // from try @ 07c62638 with catch @ 07c6267c */
                    /* catch() { ... } // from try @ 07c624bc with catch @ 07c62680
                       catch() { ... } // from try @ 07c6263c with catch @ 07c62680 */
        fVar4 = (float)FUN_09539d64(*(long *)(param_4 + 0x28),0);
        if (*(long *)(param_4 + 0x20) != 0) {
          fVar6 = param_2;
          fVar7 = param_3;
                    /* try { // try from 07c62698 to 07d626af has its CatchHandler @ 07c62710 */
          fVar5 = (float)FUN_09539d64(*(long *)(param_4 + 0x20),0);
                    /* try { // try from 07c626b0 to 07d626ff has its CatchHandler @ 07c622f0 */
          if (DAT_0a51bf42 == '\0') {
            FUN_04447ba8(PTR_DAT_09f1e748);
            DAT_0a51bf42 = '\x01';
          }
          fVar4 = fVar4 - fVar5;
          param_2 = param_2 - fVar6;
          param_3 = param_3 - fVar7;
          if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
                    /* try { // try from 07c62700 to 07d6270f has its CatchHandler @ 07c62710 */
          fVar6 = SQRT(param_3 * param_3 + fVar4 * fVar4 + param_2 * param_2);
                    /* catch() { ... } // from try @ 07c62698 with catch @ 07c62710
                       catch() { ... } // from try @ 07c62700 with catch @ 07c62710 */
                    /* try { // try from 07c62714 to 07d62717 has its CatchHandler @ 07c62720 */
          if (fVar6 <= DAT_01c7607c) {
            if (DAT_0a51bf43 == '\0') {
              FUN_04447ba8(PTR_DAT_09f1e740);
              DAT_0a51bf43 = '\x01';
            }
            pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
            fVar4 = *pfVar1;
            param_2 = pfVar1[1];
            param_3 = pfVar1[2];
          }
          else {
                    /* try { // try from 07c62718 to 07d62723 has its CatchHandler @ 07c622f0 */
            fVar4 = fVar4 / fVar6;
            param_2 = param_2 / fVar6;
                    /* catch() { ... } // from try @ 07c62714 with catch @ 07c62720 */
            param_3 = param_3 / fVar6;
          }
          if (*(long *)(param_4 + 0x30) != 0) {
            FUN_0952508c(*(long *)(param_4 + 0x30),1,0);
            lVar2 = *(long *)(param_4 + 0x30);
            if (lVar2 != 0) {
              *(undefined1 *)(lVar2 + 0x4c) = 1;
              *(float *)(lVar2 + 0x40) = fVar4;
              *(float *)(lVar2 + 0x44) = param_2;
              *(float *)(lVar2 + 0x48) = param_3;
              lVar2 = *(long *)(param_4 + 0x30);
              if (lVar2 != 0) goto LAB_07c627bc;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


