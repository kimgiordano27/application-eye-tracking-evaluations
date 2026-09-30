/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 04911df8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_x9;
  int unaff_w21;
  
  uVar1 = *(undefined8 *)(in_x9 + 0x5f0);
  if (-1 < unaff_w21) {
    uVar1 = *(undefined8 *)(param_1 + 0x610);
  }
  uVar1 = thunk_FUN_03ce5214(uVar1);
  thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
  uVar2 = thunk_FUN_03cf5234();
  uVar3 = thunk_FUN_03ce5214(PTR_DAT_08e80608);
  FUN_070619b8(uVar2,uVar1,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar2);
}


