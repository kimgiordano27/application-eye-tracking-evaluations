/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking
ENTRY_POINT: 05d27b24
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 *puVar4;
  long unaff_x22;
  undefined4 uVar5;
  
  puVar1 = PTR_DAT_06fb8bc0;
  puVar4 = *(undefined8 **)(unaff_x20 + 0xf20);
  if ((*(byte *)(unaff_x22 + 0x91b) & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f73f20);
    FUN_02fe925c(PTR_DAT_06fb8bc0);
    *(undefined1 *)(unaff_x22 + 0x91b) = 1;
  }
  uVar2 = thunk_FUN_0301080c(*puVar4);
  FUN_05a645d0(uVar2,param_4,*(undefined8 *)puVar1,0);
  FUN_05c38dfc(param_4,param_4 + 0x21,uVar2,0);
  lVar3 = FUN_068f5d7c(param_4,0);
  if (lVar3 != 0) {
    uVar5 = FUN_06904a04(lVar3,0);
    *(undefined4 *)(param_4 + 100) = uVar5;
    *(undefined4 *)(param_4 + 0x68) = param_2;
    *(undefined4 *)(param_4 + 0x6c) = param_3;
    FUN_05c38ea0(param_4,param_4 + 0x21,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


