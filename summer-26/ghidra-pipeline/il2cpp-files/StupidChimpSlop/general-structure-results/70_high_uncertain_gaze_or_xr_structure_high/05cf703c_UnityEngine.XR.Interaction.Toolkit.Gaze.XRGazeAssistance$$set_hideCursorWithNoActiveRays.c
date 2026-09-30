/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Gaze.XRGazeAssistance$$set_hideCursorWithNoActiveRays
ENTRY_POINT: 05cf703c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance__set_hideCursorWithNoActiveRays
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar7;
  long *unaff_x23;
  
  FUN_05edd364(param_1,param_2,0);
  if (((unaff_x21 & 1) == 0) && (*(char *)(unaff_x19 + 0x220) == '\0')) {
    FUN_05cfa13c();
  }
  puVar2 = Method_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_CreateKeyExchange__;
  plVar7 = *(long **)(unaff_x19 + 0x128);
  uVar3 = FUN_04e723e0();
  if (plVar7 == (long *)0x0) goto LAB_05cf7230;
  (**(code **)(*plVar7 + 0x558))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x560));
  if (*(char *)(unaff_x19 + 0x150) != '\0') {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x108);
    if (*(int *)(*(long *)Method_System_Net_HttpWebRequest_GetRequestStream__ + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_061c0e00(uVar3,0);
  }
  if (0 < *(int *)(unaff_x19 + 0x2d4)) {
    plVar7 = *(long **)(unaff_x19 + 0x128);
    if (plVar7 == (long *)0x0) goto LAB_05cf7230;
    (**(code **)(*plVar7 + 0x7d8))(plVar7,0,0,*(undefined8 *)(*plVar7 + 0x7e0));
    if (*(long *)(unaff_x19 + 0x128) == 0) goto LAB_05cf7230;
    lVar4 = FUN_05d04cb4(*(long *)(unaff_x19 + 0x128),0);
    if (lVar4 != 0) {
      if (*(int *)(unaff_x19 + 0x2d4) < *(int *)(lVar4 + 0x2c)) {
        lVar6 = *(long *)(lVar4 + 0x50);
        if (lVar6 == 0) goto LAB_05cf7230;
        uVar1 = *(int *)(unaff_x19 + 0x2d4) - 1;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_05cf7234:
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        if (*(long *)(lVar4 + 0x38) == 0) goto LAB_05cf7230;
        if (*(uint *)(*(long *)(lVar4 + 0x38) + 0x18) <=
            *(uint *)(lVar6 + (long)(int)uVar1 * 0x60 + 0x40)) goto LAB_05cf7234;
        if (unaff_x20 == 0) goto LAB_05cf7230;
        FUN_04e82100();
        FUN_05cf6c58();
        plVar7 = *(long **)(unaff_x19 + 0x128);
        uVar3 = FUN_04e723e0(*(undefined8 *)(unaff_x19 + 0x210),*(undefined8 *)puVar2,0);
        if (plVar7 == (long *)0x0) goto LAB_05cf7230;
        (**(code **)(*plVar7 + 0x558))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x560));
      }
    }
  }
  if (*(char *)(unaff_x19 + 0x29a) == '\0') {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x140);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar5 = FUN_05ee6de4(uVar3,0);
    if (((uVar5 & 1) == 0) ||
       ((*(char *)(unaff_x19 + 0x2eb) != '\0' && (*(char *)(unaff_x19 + 0x2ea) != '\0'))))
    goto LAB_05cf7214;
  }
  plVar7 = *(long **)(unaff_x19 + 0x128);
  *(undefined1 *)(unaff_x19 + 0x29a) = 0;
  if (plVar7 == (long *)0x0) {
LAB_05cf7230:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  (**(code **)(*plVar7 + 0x7d8))(plVar7,0,0,*(undefined8 *)(*plVar7 + 0x7e0));
LAB_05cf7214:
  FUN_05cf73fc();
  *(undefined1 *)(unaff_x19 + 0x298) = 0;
  return;
}


