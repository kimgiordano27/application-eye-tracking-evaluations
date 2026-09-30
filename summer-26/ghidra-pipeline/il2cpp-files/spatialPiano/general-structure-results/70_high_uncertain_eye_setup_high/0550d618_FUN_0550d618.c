/*
FUNCTION_NAME: FUN_0550d618
ENTRY_POINT: 0550d618
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_0550d618(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_06bbf595 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_84_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_85_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_120_0_TypeInfo);
    DAT_06bbf595 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_120_0_TypeInfo;
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    lVar3 = *(long *)OVRPlugin_OVRP_1_120_0_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = OVRPlugin_OVRP_1_83_0_TypeInfo;
    puVar4 = *(undefined8 **)(lVar3 + 0xb8);
    lVar6 = puVar4[1];
    if (lVar6 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar7 = *puVar4;
      lVar6 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_84_0_TypeInfo);
      FUN_04e0200c(lVar6,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_85_0_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar6;
    }
    FUN_03385ff8(uVar5,lVar6,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


