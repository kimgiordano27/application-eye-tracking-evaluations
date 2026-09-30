/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Allocate
ENTRY_POINT: 036daed0
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Allocate(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if ((unaff_x21 != 0) && (lVar2 = thunk_FUN_015d0480(), lVar2 == 0)) {
LAB_036daf84:
    uVar4 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar4,0);
  }
  if ((int)param_1[3] != 0) {
    param_1[4] = unaff_x21;
    thunk_FUN_01656ef8();
    lVar2 = *(long *)(unaff_x20 + 0xc0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*param_1 + 0x40)), lVar3 == 0))
    goto LAB_036daf84;
    puVar1 = PTR_DAT_06dd57c0;
    if (1 < *(uint *)(param_1 + 3)) {
      param_1[5] = lVar2;
      thunk_FUN_01656ef8(param_1 + 5,lVar2);
      uVar4 = FUN_04748adc(*(undefined8 *)puVar1,param_1,0);
      *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
      thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar4);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


