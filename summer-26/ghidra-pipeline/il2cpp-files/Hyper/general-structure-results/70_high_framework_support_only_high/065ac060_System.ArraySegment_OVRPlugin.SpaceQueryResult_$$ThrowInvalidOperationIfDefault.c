/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$ThrowInvalidOperationIfDefault
ENTRY_POINT: 065ac060
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void System_ArraySegment<OVRPlugin_SpaceQueryResult>__ThrowInvalidOperationIfDefault(void)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 065ac06c to 066ac23b has its CatchHandler @ 065ac06c
                       catch() { ... } // from try @ 065ac06c with catch @ 065ac06c
                       catch() { ... } // from try @ 065ac2cc with catch @ 065ac06c
                       catch() { ... } // from try @ 065ac4d8 with catch @ 065ac06c
                       catch() { ... } // from try @ 065ac594 with catch @ 065ac06c
                       catch() { ... } // from try @ 065ac680 with catch @ 065ac06c
                       catch() { ... } // from try @ 065ac6d4 with catch @ 065ac06c
                       catch() { ... } // from try @ 065ac71c with catch @ 065ac06c
                       catch() { ... } // from try @ 065ac778 with catch @ 065ac06c */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
  FUN_065abc90(&stack0x00000008,unaff_w21,unaff_w20,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x138)
              );
  return;
}


