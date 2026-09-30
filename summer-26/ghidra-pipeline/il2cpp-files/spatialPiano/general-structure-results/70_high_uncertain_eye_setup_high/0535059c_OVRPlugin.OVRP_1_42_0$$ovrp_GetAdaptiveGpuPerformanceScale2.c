/*
FUNCTION_NAME: OVRPlugin.OVRP_1_42_0$$ovrp_GetAdaptiveGpuPerformanceScale2
ENTRY_POINT: 0535059c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_42_0__ovrp_GetAdaptiveGpuPerformanceScale2(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  
  if ((*(byte *)(unaff_x21 + 0x55f) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9ca0);
    FUN_02f08768(PTR_DAT_067c9ca8);
    FUN_02f08768(UnityEngine_UIElements_FocusController_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x55f) = 1;
  }
  puVar2 = UnityEngine_UIElements_FocusController_TypeInfo;
  puVar1 = PTR_DAT_067c9ca0;
  if (unaff_x20 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9600);
    uVar4 = thunk_FUN_02f45270();
    uVar5 = thunk_FUN_02f6ef30(PTR_DAT_067c9cb0);
    FUN_0510bee0(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02f6ef30(Unity_AppUI_Bridge_FocusControllerExtensionsBridge_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar4,uVar5);
  }
  lVar3 = *(long *)PTR_DAT_067c9ca0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  lVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_05116b38(lVar3,0);
  *(long *)(lVar3 + 0x10) = unaff_x20;
  if (lVar6 != 0) {
    FUN_049c3338(lVar6,param_1,lVar3,*(undefined8 *)PTR_DAT_067c9ca8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


