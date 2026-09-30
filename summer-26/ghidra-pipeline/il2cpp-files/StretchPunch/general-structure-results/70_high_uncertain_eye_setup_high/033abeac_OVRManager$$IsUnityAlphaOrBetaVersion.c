/*
FUNCTION_NAME: OVRManager$$IsUnityAlphaOrBetaVersion
ENTRY_POINT: 033abeac
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__IsUnityAlphaOrBetaVersion(void)

{
  short sVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long *unaff_x21;
  
                    /* catch() { ... } // from try @ 033abd94 with catch @ 033abeac */
                    /* catch() { ... } // from try @ 033aba00 with catch @ 033abeb0 */
                    /* catch() { ... } // from try @ 033ab974 with catch @ 033abeb4 */
                    /* catch() { ... } // from try @ 033ab760 with catch @ 033abeb8 */
                    /* catch() { ... } // from try @ 033abd44 with catch @ 033abebc */
                    /* catch() { ... } // from try @ 033ab468 with catch @ 033abec0 */
  if (*unaff_x19 != *(long *)StringLiteral_1184) {
    thunk_FUN_01dd295c(StringLiteral_6081);
    uVar5 = thunk_FUN_01de27b8();
    uVar6 = thunk_FUN_01dd295c(StringLiteral_6082);
    FUN_03308044(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01dd295c(StringLiteral_8490);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar5,uVar6);
  }
                    /* catch() { ... } // from try @ 033ab40c with catch @ 033abec4 */
  lVar3 = FUN_0327d400();
  if (unaff_x21 == (long *)0x0) {
LAB_033abfbc:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
                    /* try { // try from 033abee0 to 034abee3 has its CatchHandler @ 033abef0 */
  lVar4 = (**(code **)(*unaff_x21 + 0x1a8))();
                    /* catch() { ... } // from try @ 033abee0 with catch @ 033abef0 */
                    /* try { // try from 033abef8 to 034abf5f has its CatchHandler @ 033abf74 */
  iVar2 = (**(code **)(*unaff_x21 + 0x198))();
  if (iVar2 == 0x80) {
    if (lVar4 == 0) goto LAB_033abfbc;
    iVar2 = FUN_0327e148(lVar4,0x2b,0);
    lVar4 = FUN_0327d024(lVar4,iVar2 + 1,0);
  }
  if (lVar3 == 0) goto LAB_033abfbc;
  if (0 < *(int *)(lVar3 + 0x10)) {
    sVar1 = FUN_03271744(lVar3,*(int *)(lVar3 + 0x10) + -1,0);
    if (sVar1 == 0x2a) {
                    /* try { // try from 033abf60 to 034abf6b has its CatchHandler @ 033ab314 */
      lVar3 = System_DateTime__GetDatePart(lVar3,0,*(int *)(lVar3 + 0x10) + -1,0);
                    /* try { // try from 033abf6c to 034abf73 has its CatchHandler @ 033abf74 */
      if (lVar3 == 0) goto LAB_033abfbc;
                    /* catch() { ... } // from try @ 033abc9c with catch @ 033abf74
                       catch() { ... } // from try @ 033abd5c with catch @ 033abf74
                       catch() { ... } // from try @ 033abef8 with catch @ 033abf74
                       catch() { ... } // from try @ 033abf6c with catch @ 033abf74 */
                    /* try { // try from 033abf78 to 034ac0b7 has its CatchHandler @ 033abf78
                       catch() { ... } // from try @ 033abf78 with catch @ 033abf78
                       catch() { ... } // from try @ 033ac1ac with catch @ 033abf78
                       catch() { ... } // from try @ 033ac3a0 with catch @ 033abf78
                       catch() { ... } // from try @ 033ac500 with catch @ 033abf78
                       catch() { ... } // from try @ 033ac648 with catch @ 033abf78
                       catch() { ... } // from try @ 033ac660 with catch @ 033abf78
                       catch() { ... } // from try @ 033ac764 with catch @ 033abf78
                       catch() { ... } // from try @ 033ac80c with catch @ 033abf78
                       catch() { ... } // from try @ 033ac8b8 with catch @ 033abf78 */
      iVar2 = FUN_03278104(lVar4,0,lVar3,0,*(undefined4 *)(lVar3 + 0x10),5,0);
      goto LAB_033abfa8;
    }
  }
  iVar2 = FUN_03277cf0(lVar3,lVar4,5,0);
LAB_033abfa8:
  return iVar2 == 0;
}


