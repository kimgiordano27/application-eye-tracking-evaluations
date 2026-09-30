/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 0907f584
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_VrFocusLost(float param_1,float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
                    /* try { // try from 0907f584 to 0917f58f has its CatchHandler @ 0907f7e0 */
  lVar1 = FUN_0a17834c(param_4,0);
  if (lVar1 != 0) {
    fVar4 = (float)FUN_0a18a1a0(lVar1,0);
                    /* try { // try from 0907f59c to 0917f5af has its CatchHandler @ 0907f7ec */
    if (DAT_0b32d3e8 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b32d3e8 = '\x01';
    }
                    /* try { // try from 0907f5c8 to 0917f5cf has its CatchHandler @ 0907f7dc */
    if (*(long *)(unaff_x20 + 0x20) != 0) {
                    /* try { // try from 0907f5d4 to 0917f5ef has its CatchHandler @ 0907f7f0 */
      lVar1 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
      fVar12 = *(float *)(lVar1 + 0x24);
      fVar9 = *(float *)(lVar1 + 0x28);
      fVar11 = *(float *)(lVar1 + 0x2c);
      fVar5 = (float)FUN_0a1ecf3c(*(long *)(unaff_x20 + 0x20),0);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
                    /* try { // try from 0907f600 to 0917f60b has its CatchHandler @ 0907f7d0 */
                    /* try { // try from 0907f60c to 0917f61b has its CatchHandler @ 0907f7d8 */
        fVar6 = (float)FUN_0a1ecdb4(*(long *)(unaff_x20 + 0x20),0);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
                    /* try { // try from 0907f620 to 0917f63f has its CatchHandler @ 0907f7d4 */
          fVar7 = (float)FUN_0a1ecdb4(*(long *)(unaff_x20 + 0x20),0);
          if (*(long *)(unaff_x20 + 0x20) != 0) {
            fVar6 = fVar5 * 0.5 - fVar6;
            fVar10 = *(float *)(unaff_x20 + 0x28);
                    /* try { // try from 0907f650 to 0917f65b has its CatchHandler @ 0907f7cc */
            param_2 = param_2 + fVar9 * fVar6;
                    /* try { // try from 0907f65c to 0917f67b has its CatchHandler @ 0907f7c8 */
            param_3 = param_3 + fVar11 * fVar6;
            fVar5 = (float)FUN_0a1ecdb4(*(long *)(unaff_x20 + 0x20),0);
            uVar2 = FUN_09081468(fVar4 + fVar12 * fVar6,param_2,param_3,fVar7 + fVar10,
                                 fVar5 + *(float *)(unaff_x20 + 0x28) + param_1);
            if ((uVar2 & 1) != 0) {
              return 1;
            }
            if ((*(long *)(unaff_x20 + 0x20) != 0) &&
               (lVar1 = FUN_0a17834c(*(long *)(unaff_x20 + 0x20),0), lVar1 != 0)) {
              uVar8 = FUN_0a18a1a0(lVar1,0);
              if (*(long *)(unaff_x20 + 0x20) != 0) {
                fVar4 = (float)FUN_0a1ecdb4(*(long *)(unaff_x20 + 0x20),0);
                if (*(long *)(unaff_x20 + 0x20) != 0) {
                  fVar9 = *(float *)(unaff_x20 + 0x28);
                  fVar5 = (float)FUN_0a1ecf3c(*(long *)(unaff_x20 + 0x20),0);
                  uVar3 = FUN_09081468(uVar8,param_2,param_3,fVar4 + fVar9,
                                       fVar5 * 0.5 + *(float *)(unaff_x20 + 0x28) + param_1);
                  return uVar3;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


