/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$op_Implicit
ENTRY_POINT: 04f5e324
PROGRAM: Waifu-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__op_Implicit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((DAT_086daf80 & 1) == 0) {
    FUN_0335b6c8(&DAT_083c9b78,1);
    DataMemoryBarrier(2,3);
    DAT_086daf80 = 1;
  }
  if (*(int *)(DAT_083c9b78 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar3 = **(long **)(DAT_083c9b78 + 0xb8);
  in_stack_00000010 = param_2;
  in_stack_00000018 = param_3;
  uVar1 = FUN_03398650(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),&stack0x00000010);
  uVar2 = FUN_03398650(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0));
  if (lVar3 != 0) {
    FUN_067f634c(lVar3,uVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


