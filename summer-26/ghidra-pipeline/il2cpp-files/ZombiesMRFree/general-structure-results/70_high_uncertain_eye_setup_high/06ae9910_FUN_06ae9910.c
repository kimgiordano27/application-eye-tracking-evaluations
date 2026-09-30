/*
FUNCTION_NAME: FUN_06ae9910
ENTRY_POINT: 06ae9910
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06ae9910(undefined8 param_1,long param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  
  if ((DAT_073ab338 & 1) == 0) {
    FUN_02fe925c(AI_Ragdoll_<IgnoreEnvironmentCollisions>d__55_TypeInfo);
    DAT_073ab338 = 1;
  }
  if (param_3 == 0x10003) {
    lVar2 = FUN_04bc3274(param_1,*(undefined8 *)
                                  AI_Ragdoll_<IgnoreEnvironmentCollisions>d__55_TypeInfo);
    uVar3 = *param_4;
    uVar5 = param_4[2];
    uVar1 = *(undefined4 *)(param_4 + 3);
    *(undefined8 *)(lVar2 + 0x28) = param_4[1];
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    *(undefined8 *)(lVar2 + 0x30) = uVar5;
    *(undefined4 *)(lVar2 + 0x38) = uVar1;
    if (param_2 != 0) {
      FUN_06b0d1e0(param_2,0x810,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  local_48 = thunk_FUN_03037804(
                               Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass80_0_TypeInfo
                               );
  uStack_40 = 0xffffffffffffffff;
  local_38 = param_3;
  uVar5 = FUN_05b259a4(&local_48,0);
  uVar3 = thunk_FUN_03037804(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
  uVar4 = thunk_FUN_03037804(OVRPassthroughLayer_<>c__DisplayClass10_0_TypeInfo);
  uVar5 = FUN_05971ec8(uVar3,uVar5,uVar4,0);
  thunk_FUN_03037804(PTR_DAT_06f6d8e8);
  uVar3 = thunk_FUN_0301080c();
  uVar4 = thunk_FUN_03037804(PTR_DAT_06fa5ba8);
  FUN_05a5ea40(uVar3,uVar5,uVar4,0);
  uVar5 = thunk_FUN_03037804(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar3,uVar5);
}


