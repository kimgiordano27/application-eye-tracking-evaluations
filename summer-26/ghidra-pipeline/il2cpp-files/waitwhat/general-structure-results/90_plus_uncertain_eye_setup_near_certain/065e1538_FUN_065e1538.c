/*
FUNCTION_NAME: FUN_065e1538
ENTRY_POINT: 065e1538
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_9;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_065e1538(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 local_40 [16];
  
  if ((DAT_0755787a & 1) == 0) {
    FUN_03188a78(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo);
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeGroup___TypeInfo);
    FUN_03188a78(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
    DAT_0755787a = 1;
  }
  puVar4 = UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeGroup___TypeInfo;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  uVar3 = -*(uint *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x28) & 3;
  if (-1 < (int)uVar3) {
    uVar1 = -(uVar3 & 3);
  }
  auVar8 = ZEXT816(0);
  if (*(long *)(param_1 + 0x18) != 0) {
    local_40 = FUN_041ebc4c(*(long *)(param_1 + 0x18),uVar1,
                            *(undefined8 *)
                             UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeGroup___TypeInfo
                           );
    uVar5 = FUN_069f4d94(local_40,0);
    if ((uVar5 & 1) == 0) {
      auVar8 = local_40;
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_065e166c;
      auVar8 = FUN_041ebc4c(*(long *)(param_1 + 0x18),uVar1,*(undefined8 *)puVar4);
      local_40 = auVar8;
      FUN_069f4d58(local_40,0);
    }
    puVar4 = OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo;
    lVar6 = *(long *)OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar6 = *(long *)puVar4;
    }
    auVar8 = local_40;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x10);
      uVar7 = FUN_042e47a4(*(long *)(param_1 + 0x10),uVar1,
                           *(undefined8 *)
                            OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo);
      auVar8 = local_40;
      if (param_2 != 0) {
        thunk_FUN_06a009a8(param_2,uVar2,uVar7,0);
        FUN_065e1670(param_1);
        return;
      }
    }
  }
LAB_065e166c:
  local_40 = auVar8;
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


