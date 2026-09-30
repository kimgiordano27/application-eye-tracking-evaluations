/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 040e9a90
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = in_stack_00000000;
  uVar1 = thunk_FUN_02f239f0(PTR_DAT_06d02bd0);
  uVar1 = FUN_02f07f14(uVar1,2);
  FUN_02a551a0();
  FUN_02a5b450(uVar1,param_1);
  FUN_02a551bc(uVar1,0,param_1);
  FUN_02a551a0(uVar1);
  FUN_02a5b450(uVar1,param_2);
  FUN_02a551bc(uVar1,1,param_2);
  uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d52790);
  uVar1 = FUN_05647938(uVar2,uVar1,0);
  thunk_FUN_02f239f0(PTR_DAT_06d02080);
  uVar2 = thunk_FUN_02ef1808();
  uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d02a28);
  FUN_05558580(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_02f239f0(PTR_DAT_06d527a0);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar2,uVar1);
}


