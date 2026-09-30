/*
FUNCTION_NAME: FUN_06ae976c
ENTRY_POINT: 06ae976c
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


void FUN_06ae976c(undefined8 param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  
  if ((DAT_073ab337 & 1) == 0) {
    FUN_02fe925c(ARGameManager_<InstantiateItem>d__110_TypeInfo);
    FUN_02fe925c(AI_Ragdoll_<IgnoreEnvironmentCollisions>d__55_TypeInfo);
    DAT_073ab337 = 1;
  }
  if (param_3 != 0x10005) {
    local_58 = thunk_FUN_03037804(
                                 Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass80_0_TypeInfo
                                 );
    uStack_50 = 0xffffffffffffffff;
    local_48 = param_3;
    uVar3 = FUN_05b259a4(&local_58,0);
    uVar4 = thunk_FUN_03037804(OVRPlugin_EyeTextureFormat_TypeInfo);
    uVar5 = thunk_FUN_03037804(OVRPassthroughLayer_<>c__DisplayClass10_0_TypeInfo);
    uVar3 = FUN_05971ec8(uVar4,uVar3,uVar5,0);
    thunk_FUN_03037804(PTR_DAT_06f6d8e8);
    uVar4 = thunk_FUN_0301080c();
    uVar5 = thunk_FUN_03037804(PTR_DAT_06fa5ba8);
    FUN_05a5ea40(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_03037804(OVRPlugin_GUID_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar4,uVar3);
  }
  lVar1 = FUN_04bc3258(param_1,*(undefined8 *)ARGameManager_<InstantiateItem>d__110_TypeInfo);
  uVar2 = FUN_06b06788(*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50),param_4,param_5,0
                      );
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar1 = FUN_04bc3274(param_1,*(undefined8 *)AI_Ragdoll_<IgnoreEnvironmentCollisions>d__55_TypeInfo
                      );
  *(undefined8 *)(lVar1 + 0x48) = param_4;
  *(undefined8 *)(lVar1 + 0x50) = param_5;
  thunk_FUN_03048534((undefined8 *)(lVar1 + 0x48),0);
  if (param_2 != 0) {
    FUN_06b0d1e0(param_2,0x818,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


