/*
FUNCTION_NAME: FUN_0685aba4
ENTRY_POINT: 0685aba4
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_0685aba4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = System_Xml_Linq_XCData_TypeInfo;
  if ((DAT_071d6b53 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(OVRPlugin_OVRP_1_45_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_46_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_02f07e70(System_Xml_Linq_XCData_TypeInfo);
    FUN_02f07e70(OVRControllerTest_BoolMonitor_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d044f0);
    FUN_02f07e70(PTR_DAT_06d02a28);
    FUN_02f07e70(OVRFace_IMeshWeightsProvider_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_48_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_49_0_TypeInfo);
    DAT_071d6b53 = 1;
  }
  lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_067dde44(lVar4,0);
  puVar1 = PTR_DAT_06d02220;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRControllerTest_BoolMonitor_TypeInfo;
    thunk_FUN_02f411dc();
    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0685ae20:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo;
      thunk_FUN_02f411dc();
      FUN_067dd564(lVar4,lVar5,0);
      *(long *)(param_1 + 0x70) = lVar4;
      thunk_FUN_02f411dc((long *)(param_1 + 0x70),lVar4);
      lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_067dde44(lVar4,0);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)OVRFace_IMeshWeightsProvider_TypeInfo;
        thunk_FUN_02f411dc();
        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
        puVar3 = OVRPlugin_OVRP_1_47_0_TypeInfo;
        puVar1 = OVRPlugin_OVRP_1_46_0_TypeInfo;
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0685ae20;
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)OVRPlugin_OVRP_1_49_0_TypeInfo;
          thunk_FUN_02f411dc();
          FUN_067dd564(lVar4,lVar5,0);
          *(long *)(param_1 + 0x78) = lVar4;
          thunk_FUN_02f411dc((long *)(param_1 + 0x78),lVar4);
          lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
          FUN_047ccdbc(lVar4,*(undefined8 *)puVar1);
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_06d044f0;
            thunk_FUN_02f411dc();
            *(undefined4 *)(lVar4 + 0x40) = 1;
            *(long *)(param_1 + 0x80) = lVar4;
            thunk_FUN_02f411dc((long *)(param_1 + 0x80),lVar4);
            lVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
            FUN_067dde44(lVar4,0);
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_06d02a28;
              thunk_FUN_02f411dc();
              *(long *)(param_1 + 0x88) = lVar4;
              thunk_FUN_02f411dc((long *)(param_1 + 0x88),lVar4);
              FUN_068d30d8(param_1,0);
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


