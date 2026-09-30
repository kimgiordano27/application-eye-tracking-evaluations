/*
FUNCTION_NAME: FUN_04c601d4
ENTRY_POINT: 04c601d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] FUN_04c601d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  ulong uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_24;
  
  local_24 = param_2;
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_04447ba8(PTR_DAT_09f250b0);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_04482014(param_4);
    }
  }
  local_40 = 0;
  uStack_38 = 0;
  if (*(int *)(*(long *)PTR_DAT_09f250b0 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar3 = FUN_0898f4ac(param_2,0);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_0898f9bc(&local_24,0);
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_Item
              (&local_40,param_1,uVar2,param_3,**(undefined8 **)(param_4 + 0x38));
  }
  else {
    local_40 = 0;
    uStack_38 = 0;
    FUN_04e4d3f8(&local_40,param_1,param_2,param_3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18)
                );
  }
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}


