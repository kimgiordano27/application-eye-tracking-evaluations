/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$MoveNext
ENTRY_POINT: 0566f9b4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__MoveNext(void)

{
  long lVar1;
  undefined8 uVar2;
  int in_w8;
  int *unaff_x19;
  int *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (in_w8 + -1 != 0 && 0 < in_w8) {
    lVar1 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
                    /* try { // try from 0566f9cc to 0576facf has its CatchHandler @ 0566f9cc
                       catch() { ... } // from try @ 0566f9cc with catch @ 0566f9cc
                       catch() { ... } // from try @ 0566fb94 with catch @ 0566f9cc
                       catch() { ... } // from try @ 0566fc4c with catch @ 0566f9cc
                       catch() { ... } // from try @ 0566fce8 with catch @ 0566f9cc */
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    uVar2 = FUN_03d2d394(lVar1,in_w8 + -1);
    *unaff_x21 = uVar2;
    thunk_FUN_03d1023c();
    in_w8 = *unaff_x19;
  }
  *unaff_x20 = in_w8;
  if (0 < in_w8) {
    uVar4 = *(undefined8 *)(unaff_x19 + 2);
    uVar3 = *(undefined8 *)(unaff_x19 + 6);
    uVar2 = *(undefined8 *)(unaff_x19 + 4);
    uVar5 = *(undefined8 *)(unaff_x19 + 8);
    *(undefined8 *)(unaff_x20 + 10) = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(unaff_x20 + 8) = uVar5;
    *(undefined8 *)(unaff_x20 + 6) = uVar3;
    *(undefined8 *)(unaff_x20 + 4) = uVar2;
    *(undefined8 *)(unaff_x20 + 2) = uVar4;
    thunk_FUN_03d1023c(unaff_x20 + 8,0);
    if (1 < *unaff_x20) {
      FUN_0719c8e0(*(undefined8 *)(unaff_x19 + 0xc),*unaff_x21,*unaff_x20 + -1,0);
      return;
    }
  }
  return;
}


