/*
FUNCTION_NAME: FUN_050d9dc4
ENTRY_POINT: 050d9dc4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_050d9dc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_4 + 0x20);
    uVar2 = *(ulong *)(param_1 + 0x18);
                    /* try { // try from 050d9df0 to 051d9e3b has its CatchHandler @ 050d9df0
                       catch() { ... } // from try @ 050d9df0 with catch @ 050d9df0
                       catch() { ... } // from try @ 050d9f28 with catch @ 050d9df0
                       catch() { ... } // from try @ 050d9f58 with catch @ 050d9df0
                       catch() { ... } // from try @ 050d9fcc with catch @ 050d9df0 */
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe
              (param_1,0,param_2,param_3,0,uVar2 & 0xffffffff,
               *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xc0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


