/*
FUNCTION_NAME: FUN_0280a1dc
ENTRY_POINT: 0280a1dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0280a1dc(long param_1,long param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  
  if ((DAT_03788b54 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_114_0_TypeInfo);
    DAT_03788b54 = 1;
  }
  if (param_3 == 0x70001) {
    lVar1 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
    uVar2 = *param_4;
    uVar4 = param_4[3];
    uVar3 = param_4[2];
    *(undefined8 *)(lVar1 + 0x18) = param_4[1];
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    *(undefined8 *)(lVar1 + 0x28) = uVar4;
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    if (param_2 != 0) {
      FUN_0274a398(param_2,0x800,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_48 = thunk_FUN_00d48444(
                               Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__
                               );
  uStack_40 = 0xffffffffffffffff;
  local_38 = param_3;
  uVar2 = FUN_017a7f78(&local_48,0);
  uVar3 = thunk_FUN_00d48444(System_Collections_Generic_List<OVRBoneCapsule>_TypeInfo);
  uVar4 = thunk_FUN_00d48444(StringLiteral_5497);
  uVar2 = FUN_01600424(uVar3,uVar2,uVar4,0);
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar3 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar4 = thunk_FUN_00d48444(System_Func<JsonProperty,_int>_TypeInfo);
  FUN_016ec624(uVar3,uVar2,uVar4,0);
  uVar2 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_f64__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar3,uVar2);
}


