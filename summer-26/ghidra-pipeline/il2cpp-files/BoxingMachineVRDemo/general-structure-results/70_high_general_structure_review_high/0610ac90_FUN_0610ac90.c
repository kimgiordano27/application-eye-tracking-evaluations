/*
FUNCTION_NAME: FUN_0610ac90
ENTRY_POINT: 0610ac90
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0610ac90(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = Method_OVRPassthroughLayer_SetColorMap__;
  if ((DAT_06b8a722 & 1) == 0) {
    FUN_02d6084c(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    FUN_02d6084c(Method_OVRPermissionsRequester_GetPermissionId__);
    FUN_02d6084c(Method_OVRPassthroughLayer_SetColorMap__);
    FUN_02d6084c(Method_OVRPermissionsRequester_IsPermissionSupportedByPlatform__);
    FUN_02d6084c(Method_OVRPlatformMenu_RetreatOneLevel__);
    FUN_02d6084c(Method_OVRPlayerController_ResetOrientation__);
                    /* try { // try from 0610ad04 to 0620ad6b has its CatchHandler @ 0610ad04
                       catch() { ... } // from try @ 0610ad04 with catch @ 0610ad04
                       catch() { ... } // from try @ 0610ae2c with catch @ 0610ad04
                       catch() { ... } // from try @ 0610ae68 with catch @ 0610ad04 */
    FUN_02d6084c(Method_OVRPlayerController_UpdateTransform__);
    DAT_06b8a722 = 1;
  }
  puVar7 = Method_OVRPlayerController_UpdateTransform__;
  puVar6 = Method_OVRPlayerController_ResetOrientation__;
  puVar5 = Method_OVRPlatformMenu_RetreatOneLevel__;
  puVar4 = Method_OVRPermissionsRequester_IsPermissionSupportedByPlatform__;
  puVar3 = Method_OVRPermissionsRequester_GetPermissionId__;
  puVar2 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0468e768(param_1,*(undefined8 *)puVar3);
  uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
                    /* try { // try from 0610ad6c to 0620ad8b has its CatchHandler @ 0610ae4c */
  FUN_0610bdd0();
  FUN_030407b0(param_1,uVar8,*(undefined8 *)puVar2);
  uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
  FUN_0610be18();
  FUN_030407b0(param_1,uVar8,*(undefined8 *)puVar2);
                    /* try { // try from 0610ada0 to 0620adab has its CatchHandler @ 0610ae48 */
  uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
  FUN_0610be60();
                    /* try { // try from 0610adb0 to 0620adbb has its CatchHandler @ 0610ae44 */
  FUN_030407b0(param_1,uVar8,*(undefined8 *)puVar2);
  uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
                    /* try { // try from 0610adc8 to 0620adf3 has its CatchHandler @ 0610ae50 */
  UnityEngine_UIElements_UQueryExtensions__Q();
  FUN_030407b0(param_1,uVar8,*(undefined8 *)puVar2);
  return;
}


