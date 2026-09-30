/*
FUNCTION_NAME: FUN_03248810
ENTRY_POINT: 03248810
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03248810(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_48 [12];
  long local_38;
  
  puVar2 = OVRPlugin_Vector4s___TypeInfo;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_0412c775 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_Vector4s___TypeInfo);
    DAT_0412c775 = 1;
  }
  local_48 = FUN_032734f8(0);
  lVar3 = FUN_01f8a5ac(param_1,local_48,*(undefined8 *)puVar2);
  if (-1 < lVar3) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_48._8_4_);
  }
  uVar4 = thunk_FUN_01a6ca08(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
  uVar4 = FUN_025b4d3c(uVar4,param_1,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
  uVar5 = thunk_FUN_01a89e68();
  FUN_02765308(uVar5,uVar4,0);
  uVar4 = thunk_FUN_01a6ca08(OVRTrackedKeyboardHands_HandBoneMapping___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar5,uVar4);
}


