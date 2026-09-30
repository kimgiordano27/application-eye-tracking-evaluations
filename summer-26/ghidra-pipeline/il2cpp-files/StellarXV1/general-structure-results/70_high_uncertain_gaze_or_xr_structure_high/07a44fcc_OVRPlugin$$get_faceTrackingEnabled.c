/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 07a44fcc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_faceTrackingEnabled(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x22 + 0x788);
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_09285e40);
    FUN_04077588(PTR_DAT_092f0790);
    FUN_04077588(PTR_DAT_092f0798);
                    /* try { // try from 07a44ffc to 07b451a7 has its CatchHandler @ 07a44ffc
                       catch() { ... } // from try @ 07a44ffc with catch @ 07a44ffc
                       catch() { ... } // from try @ 07a451c4 with catch @ 07a44ffc
                       catch() { ... } // from try @ 07a45228 with catch @ 07a44ffc
                       catch() { ... } // from try @ 07a45254 with catch @ 07a44ffc
                       catch() { ... } // from try @ 07a45280 with catch @ 07a44ffc */
    FUN_04077588(PTR_DAT_092f07a0);
    FUN_04077588(PTR_DAT_092f0788);
    *(undefined1 *)(unaff_x20 + 0x305) = 1;
  }
  lVar2 = *plVar6;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *plVar6;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar4 = puVar3[1];
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar3 = *(undefined8 **)(*plVar6 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285e40);
    FUN_075d444c(lVar4,uVar5,*(undefined8 *)PTR_DAT_092f07a0,0);
    plVar6 = (long *)(*(long *)(*plVar6 + 0xb8) + 8);
    *plVar6 = lVar4;
    thunk_FUN_040ec700(plVar6,lVar4);
  }
  puVar1 = PTR_DAT_092f0798;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x78) = lVar4;
    thunk_FUN_040ec700((long *)(unaff_x19 + 0x78),lVar4);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_06cbbccc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


