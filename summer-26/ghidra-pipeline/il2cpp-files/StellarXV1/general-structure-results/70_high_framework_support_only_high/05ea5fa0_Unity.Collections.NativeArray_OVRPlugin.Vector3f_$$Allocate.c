/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Allocate
ENTRY_POINT: 05ea5fa0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Allocate(void)

{
  uint uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  uint uVar2;
  long unaff_x21;
  undefined1 auVar3 [16];
  undefined8 uStack0000000000000008;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ea5f94 with catch @ 05ea5fa0
                        */
                    /* catch() { ... } // from try @ 05ea6034 with catch @ 05ea5fa4
                       catch() { ... } // from try @ 05ea6074 with catch @ 05ea5fa4
                       catch() { ... } // from try @ 05ea60ac with catch @ 05ea5fa4
                       catch() { ... } // from try @ 05ea60d8 with catch @ 05ea5fa4
                       catch() { ... } // from try @ 05ea614c with catch @ 05ea5fa4 */
  uStack0000000000000008 = 0;
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  uVar1 = (uint)unaff_x19;
  uVar2 = (uint)((ulong)unaff_x19 >> 0x20);
  if (unaff_x20 == 0) {
    if (uVar2 != 0 || uVar1 != 0) {
      FUN_0769a508(0);
    }
    unaff_x19 = 0;
    unaff_x20 = 0;
  }
  else {
    if ((*(uint *)(unaff_x20 + 0x18) < uVar1) || (*(uint *)(unaff_x20 + 0x18) - uVar1 < uVar2)) {
                    /* try { // try from 05ea5fd4 to 05fa6033 has its CatchHandler @ 05ea6044 */
      FUN_0769a508(0);
    }
    thunk_FUN_040ec700();
  }
  auVar3._8_8_ = unaff_x19;
  auVar3._0_8_ = unaff_x20;
  return auVar3;
}


