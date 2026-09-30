/*
FUNCTION_NAME: OVRPlugin$$SetEyeBufferSharpenType
ENTRY_POINT: 03163438
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetEyeBufferSharpenType(ulong param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x21;
  undefined8 uVar5;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13663);
    *(undefined1 *)(unaff_x21 + 0x5c) = 1;
  }
  plVar4 = (long *)(param_2 + 0x30);
  lVar2 = FUN_03084da8(*plVar4,param_3,0);
  puVar1 = StringLiteral_13663;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)StringLiteral_13663;
    lVar3 = thunk_FUN_01afa9e0(lVar2,uVar5);
    if (lVar3 != 0) {
      *plVar4 = lVar3;
      uVar5 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_01afa9e0(lVar2,uVar5);
      if (lVar3 != 0) goto LAB_031634b8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_031634b8:
  thunk_FUN_01b4f09c(plVar4,lVar3);
  return;
}


