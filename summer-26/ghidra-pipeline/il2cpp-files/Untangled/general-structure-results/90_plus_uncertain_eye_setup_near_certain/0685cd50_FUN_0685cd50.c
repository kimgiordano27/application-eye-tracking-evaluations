/*
FUNCTION_NAME: FUN_0685cd50
ENTRY_POINT: 0685cd50
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_13
*/


void FUN_0685cd50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_06d3ac48;
  if ((DAT_071d6b67 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_45_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3ab78);
    FUN_02f07e70(PTR_DAT_06d3ac30);
    FUN_02f07e70(PTR_DAT_06d3a388);
    FUN_02f07e70(OVRPlugin_OVRP_1_46_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3ac48);
    FUN_02f07e70(OVRPlugin_OVRP_1_81_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_57_0_TypeInfo);
    FUN_02f07e70(OVRControllerTest_BoolMonitor_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_58_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d044f0);
    FUN_02f07e70(OVRFace_IMeshWeightsProvider_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_59_0_TypeInfo);
    DAT_071d6b67 = 1;
  }
  lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_067de46c(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRControllerTest_BoolMonitor_TypeInfo;
    thunk_FUN_02f411dc();
    *(long *)(param_1 + 0x80) = lVar4;
    thunk_FUN_02f411dc((long *)(param_1 + 0x80),lVar4);
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
    FUN_067de46c(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRFace_IMeshWeightsProvider_TypeInfo;
      thunk_FUN_02f411dc();
      *(undefined4 *)(lVar4 + 0x40) = 10;
      *(long *)(param_1 + 0x88) = lVar4;
      thunk_FUN_02f411dc((long *)(param_1 + 0x88),lVar4);
      lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
      FUN_067de46c(lVar4,0);
      puVar1 = PTR_DAT_06d3a388;
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo;
        thunk_FUN_02f411dc();
        *(undefined4 *)(lVar4 + 0x40) = 0;
        *(long *)(param_1 + 0x90) = lVar4;
        thunk_FUN_02f411dc((long *)(param_1 + 0x90),lVar4);
        lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
        FUN_067d5e70(lVar4,0);
        puVar3 = OVRPlugin_OVRP_1_47_0_TypeInfo;
        puVar2 = OVRPlugin_OVRP_1_46_0_TypeInfo;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo;
          thunk_FUN_02f411dc();
          *(undefined1 *)(lVar4 + 0x40) = 0;
          *(long *)(param_1 + 0x98) = lVar4;
          thunk_FUN_02f411dc((long *)(param_1 + 0x98),lVar4);
          lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
          FUN_047ccdbc(lVar4,*(undefined8 *)puVar2);
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_06d044f0;
            thunk_FUN_02f411dc();
            *(undefined4 *)(lVar4 + 0x40) = 0;
            *(long *)(param_1 + 0xa0) = lVar4;
            thunk_FUN_02f411dc((long *)(param_1 + 0xa0),lVar4);
            lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
            FUN_067d5e70(lVar4,0);
            puVar1 = OVRPlugin_OVRP_1_81_0_TypeInfo;
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_57_0_TypeInfo;
              thunk_FUN_02f411dc();
              *(undefined1 *)(lVar4 + 0x40) = 0;
              *(long *)(param_1 + 0xa8) = lVar4;
              thunk_FUN_02f411dc((long *)(param_1 + 0xa8),lVar4);
              FUN_047d22f4(param_1,*(undefined8 *)puVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


