/*
FUNCTION_NAME: OVRManager$$add_PassthroughLayerResumed
ENTRY_POINT: 07c596e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__add_PassthroughLayerResumed(ulong param_1,undefined8 param_2,long param_3,uint *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long unaff_x21;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f50008);
    *(undefined1 *)(unaff_x21 + 0x61e) = 1;
  }
                    /* try { // try from 07c5970c to 07d59733 has its CatchHandler @ 07c59748 */
  *param_4 = 0xffffffff;
  lVar3 = *(long *)(param_3 + 0x38);
  if (lVar3 == 0) {
LAB_07c597d0:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar4 = (uint)*(undefined8 *)(lVar3 + 0x18);
  if ((int)uVar4 < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    uVar5 = 0xffffffff;
                    /* try { // try from 07c59734 to 07d5973f has its CatchHandler @ 07c5917c */
    fVar8 = INFINITY;
    do {
      if (uVar4 <= uVar6) goto LAB_07c597d4;
                    /* try { // try from 07c59740 to 07d59747 has its CatchHandler @ 07c59748 */
                    /* catch() { ... } // from try @ 07c5970c with catch @ 07c59748
                       catch() { ... } // from try @ 07c59740 with catch @ 07c59748 */
      if (*(long *)(lVar3 + (long)(int)uVar6 * 8 + 0x20) == 0) goto LAB_07c597d0;
                    /* try { // try from 07c5974c to 07d598e3 has its CatchHandler @ 07c5974c
                       catch() { ... } // from try @ 07c5974c with catch @ 07c5974c
                       catch() { ... } // from try @ 07c59a8c with catch @ 07c5974c
                       catch() { ... } // from try @ 07c59ba4 with catch @ 07c5974c
                       catch() { ... } // from try @ 07c59c5c with catch @ 07c5974c
                       catch() { ... } // from try @ 07c59d1c with catch @ 07c5974c */
      fVar7 = (float)FUN_07c597d8(param_2);
      if (fVar7 < fVar8) {
        *param_4 = uVar6;
        uVar5 = uVar6;
        fVar8 = fVar7;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar4);
  }
  puVar1 = PTR_DAT_09f50008;
  if (uVar5 == 0xffffffff) {
    lVar3 = *(long *)PTR_DAT_09f50008;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = *(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    if (uVar4 <= uVar5) {
LAB_07c597d4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
  }
  return *puVar2;
}


