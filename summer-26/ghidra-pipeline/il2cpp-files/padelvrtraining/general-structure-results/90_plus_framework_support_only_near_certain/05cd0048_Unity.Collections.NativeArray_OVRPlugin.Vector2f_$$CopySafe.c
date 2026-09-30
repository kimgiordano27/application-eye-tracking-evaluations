/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 05cd0048
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_03d8f26c();
  }
  plVar1 = (long *)FUN_03d2d394(param_2,3);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *(long *)(unaff_x19 + 0x160);
  if ((lVar4 != 0) &&
     (lVar2 = thunk_FUN_03d2ee44(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_05cd0134:
    uVar3 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar3,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar4;
    thunk_FUN_03d1023c(plVar1 + 4,lVar4);
    lVar4 = *unaff_x22;
    if ((lVar4 != 0) &&
       (lVar2 = thunk_FUN_03d2ee44(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
    goto LAB_05cd0134;
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = lVar4;
      thunk_FUN_03d1023c(plVar1 + 5,lVar4);
      lVar4 = *(long *)(unaff_x19 + 0x150);
      if ((lVar4 != 0) &&
         (lVar2 = thunk_FUN_03d2ee44(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
      goto LAB_05cd0134;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar4;
        thunk_FUN_03d1023c(plVar1 + 6,lVar4);
                    /* WARNING: Could not recover jumptable at 0x05cd012c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58))();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


