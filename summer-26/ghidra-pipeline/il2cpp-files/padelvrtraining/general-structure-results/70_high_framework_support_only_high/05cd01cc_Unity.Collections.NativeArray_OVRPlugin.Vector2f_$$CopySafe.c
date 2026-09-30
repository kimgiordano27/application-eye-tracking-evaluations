/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 05cd01cc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_05cd01fc;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_03d8f370(unaff_x24,param_3,0);
LAB_05cd01fc:
        unaff_x19 = (*(code *)*puVar1)(unaff_x24,unaff_x19,puVar1[1]);
        if ((unaff_x19 == 0) || (unaff_w22 = unaff_w22 + 1, unaff_w22 == unaff_w21)) {
          return unaff_x19;
        }
        if ((*(long *)(unaff_x23 + 0x110) == 0) ||
           (unaff_x24 = (long *)FUN_05a39464(*(long *)(unaff_x23 + 0x110),unaff_w22,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10)
                                            ), unaff_x24 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_03d8f26c(param_3);
        }
        param_1 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


