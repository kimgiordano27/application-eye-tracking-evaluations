/*
FUNCTION_NAME: OVRPlugin$$StopFaceTracking
ENTRY_POINT: 0368d478
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


void OVRPlugin__StopFaceTracking(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_40__);
  *(undefined1 *)(unaff_x20 + 0xeb1) = 1;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_40__;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 0368d498 to 0378d607 has its CatchHandler @ 0368d498
                       catch() { ... } // from try @ 0368d498 with catch @ 0368d498
                       catch() { ... } // from try @ 0368d610 with catch @ 0368d498
                       catch() { ... } // from try @ 0368d64c with catch @ 0368d498
                       catch() { ... } // from try @ 0368d8b8 with catch @ 0368d498
                       catch() { ... } // from try @ 0368d8e8 with catch @ 0368d498
                       catch() { ... } // from try @ 0368d91c with catch @ 0368d498
                       catch() { ... } // from try @ 0368d948 with catch @ 0368d498
                       catch() { ... } // from try @ 0368d994 with catch @ 0368d498 */
    return;
  }
  lVar4 = *(long *)(unaff_x19 + 0x28);
  lVar2 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__653_40__;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_38__);
    FUN_02a7036c(lVar5,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_4__,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar5;
    thunk_FUN_01f51358(plVar3,lVar5);
  }
  if (lVar4 != 0) {
    FUN_02134528(lVar4,lVar5,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_39__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


