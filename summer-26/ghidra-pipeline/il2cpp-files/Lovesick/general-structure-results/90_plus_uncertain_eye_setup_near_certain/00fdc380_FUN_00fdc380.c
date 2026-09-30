/*
FUNCTION_NAME: FUN_00fdc380
ENTRY_POINT: 00fdc380
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00fdc380(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_28;
  
  if ((DAT_03775bdf & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4918);
    thunk_FUN_00d48444(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(PTR_DAT_033ead30);
    DAT_03775bdf = 1;
  }
  *(long *)(param_1 + 0x28) = param_2;
                    /* try { // try from 00fdc3dc to 010dc3e3 has its CatchHandler @ 00fdc430 */
  if (param_2 != 0) {
                    /* try { // try from 00fdc3ec to 010dc403 has its CatchHandler @ 00fdc434 */
    plVar5 = *(long **)(param_1 + 0x18);
    uVar2 = FUN_01600424(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)PTR_DAT_033ead30,
                         *(undefined8 *)(param_2 + 0x38),0);
    puVar1 = StringLiteral_4918;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x558))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x560));
      FUN_010c2c5c(param_1,&local_28,*(undefined8 *)puVar1);
      if (local_28 != 0) {
        lVar4 = *(long *)(local_28 + 0xf8);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
        if ((lVar3 != 0) &&
           (FUN_026c8404(lVar3,param_1,*(undefined8 *)Method_OVRPlugin_PinnedArray<Guid>_Dispose__,0
                        ), lVar4 != 0)) {
          FUN_026c84dc(lVar4,lVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


