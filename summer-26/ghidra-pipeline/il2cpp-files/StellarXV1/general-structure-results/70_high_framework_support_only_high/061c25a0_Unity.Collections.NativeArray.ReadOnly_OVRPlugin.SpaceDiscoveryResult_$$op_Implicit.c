/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 061c25a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__op_Implicit
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_w20;
  long *unaff_x21;
  
  iVar1 = thunk_FUN_040b1560(param_1,param_3,0);
  if ((long *)*unaff_x21 != (long *)0x0) {
    FUN_0896df44(*(long *)*unaff_x21 + (long)((iVar1 - unaff_w20) * 0x70));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


