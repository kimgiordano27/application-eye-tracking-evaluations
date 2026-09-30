/*
FUNCTION_NAME: FUN_06859aa4
ENTRY_POINT: 06859aa4
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_06859aa4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = OVRPlugin_OVRP_1_125_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_124_0_TypeInfo;
  if ((DAT_071d6b42 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3a2b0);
    FUN_02f07e70(OVRPlugin_OVRP_1_126_0_TypeInfo);
    FUN_02f07e70(PixelCrushers_DialogueSystem_Actor_<>c__DisplayClass21_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_127_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Interpreter_AndInstruction_AndInt64_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3a388);
    FUN_02f07e70(OVRPlugin_OVRP_1_129_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_12_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_15_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_125_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_124_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_17_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_18_0_TypeInfo);
    FUN_02f07e70(System_Xml_Linq_XCData_TypeInfo);
    FUN_02f07e70(OVRPassthroughColorLut_ColorChannels_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_19_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_1_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_21_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_28_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_29_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_2_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_30_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_32_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d04d08);
    FUN_02f07e70(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_35_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_36_0_TypeInfo);
    DAT_071d6b42 = 1;
  }
  lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_047ccdbc(lVar4,*(undefined8 *)puVar1);
  puVar1 = OVRPlugin_OVRP_1_17_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_129_0_TypeInfo;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_06d04d08;
    thunk_FUN_02f411dc();
    *(undefined4 *)(lVar4 + 0x40) = 0;
    *(long *)(param_1 + 0x70) = lVar4;
    thunk_FUN_02f411dc((long *)(param_1 + 0x70),lVar4);
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
    FUN_047ccdbc(lVar4,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_06d3a388;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo;
      thunk_FUN_02f411dc();
      *(undefined4 *)(lVar4 + 0x40) = 0;
      *(long *)(param_1 + 0x78) = lVar4;
      thunk_FUN_02f411dc((long *)(param_1 + 0x78),lVar4);
      lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_067d5e70(lVar4,0);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_2_0_TypeInfo;
        thunk_FUN_02f411dc();
        *(long *)(param_1 + 0x80) = lVar4;
        thunk_FUN_02f411dc((long *)(param_1 + 0x80),lVar4);
        lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
        FUN_067d5e70(lVar4,0);
        puVar1 = OVRPlugin_OVRP_1_18_0_TypeInfo;
        puVar2 = OVRPlugin_OVRP_1_15_0_TypeInfo;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo;
          thunk_FUN_02f411dc();
          *(long *)(param_1 + 0x88) = lVar4;
          thunk_FUN_02f411dc((long *)(param_1 + 0x88),lVar4);
          lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
          FUN_047ccdbc(lVar4,*(undefined8 *)puVar2);
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_32_0_TypeInfo;
            thunk_FUN_02f411dc();
            *(long *)(param_1 + 0x90) = lVar4;
            thunk_FUN_02f411dc((long *)(param_1 + 0x90),lVar4);
            lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
            FUN_047ccdbc(lVar4,*(undefined8 *)puVar2);
            puVar2 = System_Xml_Linq_XCData_TypeInfo;
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo;
              thunk_FUN_02f411dc();
              *(long *)(param_1 + 0x98) = lVar4;
              thunk_FUN_02f411dc((long *)(param_1 + 0x98),lVar4);
              lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
              FUN_067dde44(lVar4,0);
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_35_0_TypeInfo;
                thunk_FUN_02f411dc();
                *(undefined4 *)(lVar4 + 0x40) = 0xbf800000;
                *(long *)(param_1 + 0xa0) = lVar4;
                thunk_FUN_02f411dc((long *)(param_1 + 0xa0),lVar4);
                lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                FUN_067dde44(lVar4,0);
                if (lVar4 != 0) {
                  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo;
                  thunk_FUN_02f411dc();
                  *(undefined4 *)(lVar4 + 0x40) = 0xbf800000;
                  *(long *)(param_1 + 0xa8) = lVar4;
                  thunk_FUN_02f411dc((long *)(param_1 + 0xa8),lVar4);
                  lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                  FUN_067dde44(lVar4,0);
                  puVar3 = OVRPlugin_OVRP_1_16_0_TypeInfo;
                  puVar1 = OVRPlugin_OVRP_1_12_0_TypeInfo;
                  if (lVar4 != 0) {
                    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo;
                    thunk_FUN_02f411dc();
                    *(undefined4 *)(lVar4 + 0x40) = 0x41900000;
                    *(long *)(param_1 + 0xb0) = lVar4;
                    thunk_FUN_02f411dc((long *)(param_1 + 0xb0),lVar4);
                    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
                    FUN_047ccdbc(lVar4,*(undefined8 *)puVar1);
                    if (lVar4 != 0) {
                      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_29_0_TypeInfo;
                      thunk_FUN_02f411dc();
                      *(undefined4 *)(lVar4 + 0x40) = 2;
                      *(long *)(param_1 + 0xb8) = lVar4;
                      thunk_FUN_02f411dc((long *)(param_1 + 0xb8),lVar4);
                      lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                      FUN_067dde44(lVar4,0);
                      puVar1 = PTR_DAT_06d3a2b0;
                      if (lVar4 != 0) {
                        *(undefined8 *)(lVar4 + 0x10) =
                             *(undefined8 *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        thunk_FUN_02f411dc();
                        lVar5 = *(long *)puVar1;
                        if (*(int *)(lVar5 + 0xe0) == 0) {
                          thunk_FUN_02f12b58();
                          lVar5 = *(long *)puVar1;
                        }
                        *(undefined4 *)(lVar4 + 0x40) = **(undefined4 **)(lVar5 + 0xb8);
                        *(long *)(param_1 + 0xc0) = lVar4;
                        thunk_FUN_02f411dc((long *)(param_1 + 0xc0),lVar4);
                        lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                        FUN_067dde44(lVar4,0);
                        puVar2 = OVRPassthroughColorLut_ColorChannels_TypeInfo;
                        if (lVar4 != 0) {
                          *(undefined8 *)(lVar4 + 0x10) =
                               *(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo;
                          thunk_FUN_02f411dc();
                          *(undefined4 *)(lVar4 + 0x40) =
                               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4);
                          *(long *)(param_1 + 200) = lVar4;
                          thunk_FUN_02f411dc((long *)(param_1 + 200),lVar4);
                          lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                          FUN_067deed8(lVar4,0);
                          if (lVar4 != 0) {
                            *(undefined8 *)(lVar4 + 0x10) =
                                 *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo;
                            thunk_FUN_02f411dc();
                            *(undefined8 *)(lVar4 + 0x40) =
                                 *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                            *(long *)(param_1 + 0xd0) = lVar4;
                            thunk_FUN_02f411dc((long *)(param_1 + 0xd0),lVar4);
                            FUN_068d30d8(param_1,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


