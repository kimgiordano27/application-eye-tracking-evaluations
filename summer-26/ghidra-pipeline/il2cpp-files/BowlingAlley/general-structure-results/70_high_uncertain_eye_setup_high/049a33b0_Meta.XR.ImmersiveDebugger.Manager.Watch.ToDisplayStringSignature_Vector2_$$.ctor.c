/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$.ctor
ENTRY_POINT: 049a33b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>___ctor
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  plVar1 = (long *)thunk_FUN_032cddd4(param_2,*(long *)(*(long *)(param_1 + 0x10) + 0x80) + 0x2c0);
                    /* try { // try from 049a33c4 to 04aa36d7 has its CatchHandler @ 049a33c4
                       catch() { ... } // from try @ 049a33c4 with catch @ 049a33c4
                       catch() { ... } // from try @ 049a37d0 with catch @ 049a33c4
                       catch() { ... } // from try @ 049a381c with catch @ 049a33c4
                       catch() { ... } // from try @ 049a3858 with catch @ 049a33c4 */
  lVar3 = *plVar1;
  uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x130))();
  if (lVar3 != 0) {
    FUN_063d4c04(lVar3,uVar2,0);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(*(long *)(lVar3 + 0x18) + 0x135) & 1) == 0) {
      FUN_032934b8();
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    }
    uVar2 = (*(code *)**(undefined8 **)(lVar3 + 0x130))();
    FUN_057ab1f0(uVar2,0);
    if (unaff_x19 != 0) {
      FUN_06db07d4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


