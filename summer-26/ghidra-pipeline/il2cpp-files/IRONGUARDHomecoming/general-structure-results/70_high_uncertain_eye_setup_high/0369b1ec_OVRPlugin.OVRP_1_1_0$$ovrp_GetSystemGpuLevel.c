/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemGpuLevel
ENTRY_POINT: 0369b1ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemGpuLevel(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x160));
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_13__);
  *(undefined1 *)(unaff_x20 + 0xf29) = 1;
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  uVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                            );
  FUN_02ab2244();
  if (lVar2 != 0) {
    FUN_03699a90(lVar2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


