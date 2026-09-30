/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 05ccf43c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long lVar3;
  long unaff_x23;
  
  if (param_1 != 0) {
    if ((int)unaff_x21[3] != 0) {
      unaff_x21[4] = unaff_x23;
      thunk_FUN_03d1023c();
      lVar3 = *unaff_x22;
      if ((lVar3 != 0) &&
         (lVar1 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0))
      goto LAB_05ccf4f4;
      if (1 < *(uint *)(unaff_x21 + 3)) {
        unaff_x21[5] = lVar3;
        thunk_FUN_03d1023c(unaff_x21 + 5,lVar3);
        lVar3 = *(long *)(unaff_x19 + 0x150);
        if ((lVar3 != 0) &&
           (lVar1 = thunk_FUN_03d2ee44(lVar3,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0))
        goto LAB_05ccf4f4;
        if (2 < *(uint *)(unaff_x21 + 3)) {
          unaff_x21[6] = lVar3;
          thunk_FUN_03d1023c(unaff_x21 + 6,lVar3);
          FUN_05cd023c();
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
LAB_05ccf4f4:
  uVar2 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar2,0);
}


