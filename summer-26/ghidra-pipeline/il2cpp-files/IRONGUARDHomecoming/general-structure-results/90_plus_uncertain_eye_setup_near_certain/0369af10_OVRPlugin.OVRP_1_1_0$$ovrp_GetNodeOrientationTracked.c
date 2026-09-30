/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodeOrientationTracked
ENTRY_POINT: 0369af10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNodeOrientationTracked
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  *(long *)(unaff_x19 + 0x158) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x150) = param_2._0_8_;
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar1 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    lVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                              );
    FUN_02ab2244(lVar3,uVar4,
                 *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_0__,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar2 = lVar3;
    thunk_FUN_01f51358(plVar2,lVar3);
  }
  *(long *)(unaff_x19 + 0x168) = lVar3;
  thunk_FUN_01f51358(unaff_x19 + 0x168,lVar3);
  FUN_02f499f0();
  return;
}


