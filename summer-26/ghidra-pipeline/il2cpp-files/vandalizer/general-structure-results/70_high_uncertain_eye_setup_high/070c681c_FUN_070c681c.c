/*
FUNCTION_NAME: FUN_070c681c
ENTRY_POINT: 070c681c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_070c681c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
                    /* try { // try from 070c6834 to 071c685f has its CatchHandler @ 070c6e0c */
  if ((DAT_07a5a94c & 1) == 0) {
    FUN_031f20f4(OVRPlugin_BodyJointSet_TypeInfo);
    FUN_031f20f4(OVRPlugin_BodyTrackingFidelity2_TypeInfo);
    FUN_031f20f4(OVRPlugin_EyeTextureFormat_TypeInfo);
    FUN_031f20f4(OVRPlugin_GUID_TypeInfo);
    FUN_031f20f4(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    DAT_07a5a94c = 1;
  }
  puVar2 = OVRPlugin_EyeTextureFormat_TypeInfo;
  puVar1 = OVRPlugin_BodyTrackingFidelity2_TypeInfo;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if ((char)param_1[0x9f] == '\0') {
    auVar6 = (**(code **)(*param_1 + 0xa28))(param_1,*(undefined8 *)(*param_1 + 0xa30));
                    /* try { // try from 070c692c to 071c695b has its CatchHandler @ 070c6dcc */
    (**(code **)(*param_1 + 0xac8))
              (param_1,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)(*param_1 + 0xad0));
  }
  else {
    if (param_1[0xa7] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
                    /* try { // try from 070c689c to 071c68c7 has its CatchHandler @ 070c6de0 */
    FUN_047afec0(&local_38,param_1[0xa7],*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo)
    ;
    while (uVar5 = FUN_05a2e8e4(&local_38,*(undefined8 *)puVar2), lVar3 = local_28, (uVar5 & 1) != 0
          ) {
      if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar4 = FUN_06fc56bc(local_28,0);
                    /* try { // try from 070c68dc to 071c68e3 has its CatchHandler @ 070c6db0 */
      FUN_06fc56c4(lVar3,uVar4 & 0xfffffff7,0);
      FUN_06fc19b8(lVar3,0x20,0);
    }
    FUN_05a2e8e0(&local_38,*(undefined8 *)puVar1);
  }
  return;
}


