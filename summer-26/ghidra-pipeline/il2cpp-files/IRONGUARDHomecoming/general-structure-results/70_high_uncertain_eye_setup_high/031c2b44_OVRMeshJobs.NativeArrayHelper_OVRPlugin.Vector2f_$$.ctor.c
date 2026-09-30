/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 031c2b44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>___ctor(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = in_stack_00000000;
  uVar1 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                             ,param_2,0);
  uVar1 = FUN_01f08890(uVar1,2);
  FUN_01bc50c0();
  FUN_01bc56ec(uVar1);
  FUN_01bc5408(uVar1,0);
  FUN_01bc50c0(uVar1);
  FUN_01bc56ec(uVar1,param_2);
  FUN_01bc5408(uVar1,1,param_2);
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_n_s32__);
  uVar1 = FUN_035ae81c(uVar2,uVar1,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar2 = thunk_FUN_01f117cc();
  uVar3 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                            );
  FUN_034efd98(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_n_u16__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar1);
}


