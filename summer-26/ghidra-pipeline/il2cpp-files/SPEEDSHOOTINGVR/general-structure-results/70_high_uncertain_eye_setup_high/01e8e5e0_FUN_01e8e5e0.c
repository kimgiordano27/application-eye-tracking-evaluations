/*
FUNCTION_NAME: FUN_01e8e5e0
ENTRY_POINT: 01e8e5e0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool FUN_01e8e5e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int local_14;
  
  puVar1 = PTR_DAT_0234c2e8;
  if ((DAT_0247e2d8 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235f320);
    FUN_00fdc2e4(PTR_DAT_0234c2e8);
    DAT_0247e2d8 = 1;
  }
  puVar2 = PTR_DAT_0235f320;
  local_14 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar4 = FUN_01e79184();
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar6);
    lVar6 = *(long *)puVar2;
  }
  uVar5 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                    (uVar4,**(undefined8 **)(lVar6 + 0xb8),0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    iVar3 = UnityEngine_AndroidJNI__ToByteArray(&local_14,0);
    if (iVar3 == 0) {
      return local_14 == 1;
    }
  }
  return false;
}


