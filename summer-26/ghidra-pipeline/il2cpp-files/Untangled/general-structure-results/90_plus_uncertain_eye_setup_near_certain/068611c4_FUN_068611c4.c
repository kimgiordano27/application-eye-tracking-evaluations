/*
FUNCTION_NAME: FUN_068611c4
ENTRY_POINT: 068611c4
PROGRAM: Untangled-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_068611c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_06d3ac48;
  if ((DAT_071d6b83 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_Posef_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3ac30);
    FUN_02f07e70(OVRPlugin_Quatf_TypeInfo);
    FUN_02f07e70(OVRPlugin_Result_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3ac48);
    FUN_02f07e70(OVRPlugin_Size3f_TypeInfo);
    FUN_02f07e70(OVRPlugin_Sizef_TypeInfo);
    FUN_02f07e70(OVRPlugin_Sizei_TypeInfo);
    DAT_071d6b83 = 1;
  }
  lVar3 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_067de46c(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)OVRPlugin_Sizef_TypeInfo;
    thunk_FUN_02f411dc();
    *(undefined4 *)(lVar3 + 0x40) = 0;
    *(long *)(param_1 + 0x70) = lVar3;
    thunk_FUN_02f411dc((long *)(param_1 + 0x70),lVar3);
    lVar3 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
    FUN_067de46c(lVar3,0);
    puVar2 = OVRPlugin_Result_TypeInfo;
    puVar1 = OVRPlugin_Quatf_TypeInfo;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)OVRPlugin_Size3f_TypeInfo;
      thunk_FUN_02f411dc();
      *(undefined4 *)(lVar3 + 0x40) = 100;
      *(long *)(param_1 + 0x78) = lVar3;
      thunk_FUN_02f411dc((long *)(param_1 + 0x78),lVar3);
      lVar3 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_047ccdbc(lVar3,*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)OVRPlugin_Sizei_TypeInfo;
        thunk_FUN_02f411dc();
        *(undefined4 *)(lVar3 + 0x40) = 0;
        *(long *)(param_1 + 0x80) = lVar3;
        thunk_FUN_02f411dc((long *)(param_1 + 0x80),lVar3);
        FUN_068d30d8(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


