/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 063abaa4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcHeadsetControllerPose(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long *unaff_x19;
  undefined4 uVar6;
  
  if (*param_2 == **(long **)(param_1 + 0xf30)) {
    puVar4 = (undefined8 *)thunk_FUN_03778a20();
    uVar2 = *puVar4;
    uVar3 = puVar4[1];
    if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
                    /* try { // try from 063abe78 to 064abe83 has its CatchHandler @ 063ac218 */
    FUN_06a0f61c(uVar2,uVar3,0);
  }
  else {
    plVar1 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if ((plVar1 == (long *)0x0) || (*plVar1 != *(long *)(PTR_DAT_07d86548 + 0x78))) {
      uVar2 = (**(code **)(*unaff_x19 + 0x248))();
      if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
      }
      uVar3 = FUN_061d52c8(0);
      if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
      }
      uVar2 = FUN_061b5284(uVar2,uVar3,0);
      if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_06a0f988(uVar2,0);
    }
    else {
      puVar5 = (undefined4 *)thunk_FUN_03778a20();
      uVar6 = *puVar5;
      if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_06a0f818(uVar6,0);
    }
  }
  return;
}


