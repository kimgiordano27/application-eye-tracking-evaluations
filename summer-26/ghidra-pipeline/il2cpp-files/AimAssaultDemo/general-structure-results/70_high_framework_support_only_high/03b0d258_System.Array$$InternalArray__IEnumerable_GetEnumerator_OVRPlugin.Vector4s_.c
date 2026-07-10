/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Vector4s>
ENTRY_POINT: 03b0d258
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Vector4s>(void)

{
  long lVar1;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  FUN_062b0bcc();
  if (*(int *)(*(long *)PTR_DAT_07d95a30 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)PTR_DAT_07d95a30);
  }
                    /* try { // try from 03b0d28c to 03c0d413 has its CatchHandler @ 03b0d28c
                       catch() { ... } // from try @ 03b0d28c with catch @ 03b0d28c
                       catch() { ... } // from try @ 03b0d4a8 with catch @ 03b0d28c
                       catch() { ... } // from try @ 03b0d508 with catch @ 03b0d28c
                       catch() { ... } // from try @ 03b0d548 with catch @ 03b0d28c
                       catch() { ... } // from try @ 03b0d578 with catch @ 03b0d28c */
  if (unaff_x22 != 0) {
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    FUN_04e19b18();
    memcpy(&stack0x00000008,unaff_x19,0x58);
    if (unaff_x20 != 0) {
      memcpy((void *)(unaff_x20 + 0x10),&stack0x00000008,0x58);
      thunk_FUN_037aeb94(unaff_x20 + 0x18,0);
      lVar1 = *(long *)(unaff_x20 + 0x68);
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03b0d314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


