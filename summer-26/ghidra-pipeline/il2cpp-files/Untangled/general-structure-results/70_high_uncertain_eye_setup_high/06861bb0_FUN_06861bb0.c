/*
FUNCTION_NAME: FUN_06861bb0
ENTRY_POINT: 06861bb0
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_06861bb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = OVRPlugin_SkeletonType_TypeInfo;
  puVar1 = PTR_DAT_06d3a3b0;
  if ((DAT_071d6b8a & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3a3c0);
    FUN_02f07e70(PTR_DAT_06d3bc78);
    FUN_02f07e70(PTR_DAT_06d3a3c8);
    FUN_02f07e70(PTR_DAT_06d3a560);
    FUN_02f07e70(PTR_DAT_06d3a3b0);
    FUN_02f07e70(PTR_DAT_06d3a3b8);
    FUN_02f07e70(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02f07e70(OVRPlugin_SpaceQueryResult_TypeInfo);
    FUN_02f07e70(OVRPlugin_SystemHeadset_TypeInfo);
    DAT_071d6b8a = 1;
  }
  lVar3 = FUN_06893178(param_1,0);
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_05025f00(uVar4,param_1,*(undefined8 *)puVar2,0);
  puVar2 = OVRPlugin_SpaceQueryResult_TypeInfo;
  puVar1 = PTR_DAT_06d3a560;
  if (lVar3 != 0) {
    FUN_037e9794(lVar3,uVar4,0,*(undefined8 *)PTR_DAT_06d3a3c0);
    lVar3 = FUN_06893178(param_1,0);
    uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
    FUN_05025f00(uVar4,param_1,*(undefined8 *)puVar2,0);
    puVar2 = OVRPlugin_SystemHeadset_TypeInfo;
    puVar1 = PTR_DAT_06d3a3b8;
    if (lVar3 != 0) {
      FUN_037e9794(lVar3,uVar4,0,*(undefined8 *)PTR_DAT_06d3bc78);
      lVar3 = FUN_06893178(param_1,0);
      uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
      FUN_05025f00(uVar4,param_1,*(undefined8 *)puVar2,0);
      if (lVar3 != 0) {
        FUN_037e9794(lVar3,uVar4,0,*(undefined8 *)PTR_DAT_06d3a3c8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


