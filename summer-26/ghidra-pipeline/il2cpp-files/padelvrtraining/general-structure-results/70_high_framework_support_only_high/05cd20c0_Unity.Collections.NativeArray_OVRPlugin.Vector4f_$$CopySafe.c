/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 05cd20c0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0xd0);
  lVar5 = *(long *)(unaff_x20 + 0x78);
  uVar1 = thunk_FUN_03d1e194(*(undefined8 *)(param_1 + 0xc68));
  if (lVar5 == 0) {
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091add20);
  }
  else {
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (plVar3 = (long *)thunk_FUN_03d9f2a8(*(long *)(unaff_x20 + 0x78),0), plVar3 == (long *)0x0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  }
  uVar1 = FUN_06fd2168(uVar4,uVar1,uVar2,0);
  thunk_FUN_03d1e194(PTR_DAT_091a4f90);
  uVar4 = thunk_FUN_03d2ef40();
  FUN_071b07cc(uVar4,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar4);
}


