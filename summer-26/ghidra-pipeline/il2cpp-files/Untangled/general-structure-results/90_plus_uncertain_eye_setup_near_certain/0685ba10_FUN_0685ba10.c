/*
FUNCTION_NAME: FUN_0685ba10
ENTRY_POINT: 0685ba10
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


void FUN_0685ba10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = System_Xml_Linq_XCData_TypeInfo;
  if ((DAT_071d6b5c & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_45_0_TypeInfo);
    FUN_02f07e70(PixelCrushers_DialogueSystem_Actor_<>c__DisplayClass21_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3ab78);
    FUN_02f07e70(PTR_DAT_06d3a388);
    FUN_02f07e70(OVRPlugin_OVRP_1_46_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_02f07e70(System_Xml_Linq_XCData_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_56_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_57_0_TypeInfo);
    FUN_02f07e70(OVRControllerTest_BoolMonitor_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_58_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d044f0);
    FUN_02f07e70(OVRFace_IMeshWeightsProvider_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_59_0_TypeInfo);
    DAT_071d6b5c = 1;
  }
  lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_067dde44(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRControllerTest_BoolMonitor_TypeInfo;
    thunk_FUN_02f411dc();
    *(long *)(param_1 + 0x80) = lVar4;
    thunk_FUN_02f411dc((long *)(param_1 + 0x80),lVar4);
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
    FUN_067dde44(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRFace_IMeshWeightsProvider_TypeInfo;
      thunk_FUN_02f411dc();
      *(undefined4 *)(lVar4 + 0x40) = 0x41200000;
      *(long *)(param_1 + 0x88) = lVar4;
      thunk_FUN_02f411dc((long *)(param_1 + 0x88),lVar4);
      lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
      FUN_067dde44(lVar4,0);
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
            puVar1 = OVRPlugin_OVRP_1_56_0_TypeInfo;
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_57_0_TypeInfo;
              thunk_FUN_02f411dc();
              *(undefined1 *)(lVar4 + 0x40) = 0;
              *(long *)(param_1 + 0xa8) = lVar4;
              thunk_FUN_02f411dc((long *)(param_1 + 0xa8),lVar4);
              FUN_047d3c94(param_1,*(undefined8 *)puVar1);
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


