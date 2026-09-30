/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryConsentWindow
ENTRY_POINT: 0696d330
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  
  FUN_04de85b0(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
                    /* try { // try from 0696d348 to 06a6d36f has its CatchHandler @ 0696d604 */
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x20));
  uVar12 = DAT_015c4ed0;
  uVar10 = *unaff_x23;
  *(undefined4 *)(unaff_x19 + 0x30) = 0x43480000;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar12;
  lVar11 = thunk_FUN_03ac74bc(uVar10);
  FUN_04de7d48(lVar11,*unaff_x22);
  if (lVar11 != 0) {
    lVar13 = *(long *)(lVar11 + 0x10);
    uVar12 = *unaff_x24;
    lVar14 = *unaff_x25;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    puVar9 = PTR_DAT_084b7100;
    puVar8 = PTR_DAT_084b70f8;
    puVar7 = PTR_DAT_084b6eb8;
    puVar6 = PTR_DAT_084b6eb0;
    puVar5 = PTR_DAT_0849b3b0;
    puVar4 = PTR_DAT_0849b3a8;
    puVar3 = PTR_DAT_0848f7c0;
    puVar2 = PTR_DAT_0848f798;
    if (lVar13 != 0) {
                    /* try { // try from 0696d3ac to 06a6d3d7 has its CatchHandler @ 0696d600 */
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    /* try { // try from 0696d3e4 to 06a6d453 has its CatchHandler @ 0696d608 */
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
        thunk_FUN_03afed3c();
      }
      else {
        FUN_04de85b0(lVar11,uVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(unaff_x19 + 0x38) = lVar11;
      thunk_FUN_03afed3c((long *)(unaff_x19 + 0x38),lVar11);
      uVar12 = DAT_015c5280;
      uVar10 = *(undefined8 *)puVar6;
      *(undefined8 *)(unaff_x19 + 0x48) = 0x1f403f000000;
      *(undefined4 *)(unaff_x19 + 0x58) = 0xbf800000;
      *(undefined8 *)(unaff_x19 + 0x40) = uVar12;
      *(undefined1 *)(unaff_x19 + 0x5c) = 1;
      uVar12 = thunk_FUN_03ac74bc(uVar10);
      FUN_04de7d48(uVar12,*(undefined8 *)puVar7);
      *(undefined8 *)(unaff_x19 + 0x60) = uVar12;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x60),uVar12);
      uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar9);
      FUN_054c51e0(uVar12,*(undefined8 *)puVar8);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar12;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x70),uVar12);
      uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
      FUN_04de7d48(uVar12,*(undefined8 *)puVar5);
      *(undefined8 *)(unaff_x19 + 0x78) = uVar12;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x78),uVar12);
      uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      FUN_04de7d48(uVar12,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x19 + 0x80) = uVar12;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x80),uVar12);
      thunk_FUN_07c988f8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


