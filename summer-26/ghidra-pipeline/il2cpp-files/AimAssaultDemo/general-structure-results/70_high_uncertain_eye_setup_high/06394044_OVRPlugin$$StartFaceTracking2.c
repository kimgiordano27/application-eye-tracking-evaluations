/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking2
ENTRY_POINT: 06394044
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__StartFaceTracking2(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined4 unaff_w22;
  long *unaff_x25;
  long *unaff_x27;
  
  if (param_1 != 0) {
    uVar3 = FUN_060c316c(param_1,unaff_w22,param_3,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x27);
    }
    uVar4 = FUN_061d52c8(0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x25);
    }
    uVar2 = FUN_061b3e60(uVar3,uVar4,0);
    lVar5 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
      }
      else {
        FUN_04976584();
      }
      lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6648);
      FUN_062855bc(lVar5,0);
      *(long *)(lVar5 + 0x10) = unaff_x20;
      thunk_FUN_037aeb94();
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


