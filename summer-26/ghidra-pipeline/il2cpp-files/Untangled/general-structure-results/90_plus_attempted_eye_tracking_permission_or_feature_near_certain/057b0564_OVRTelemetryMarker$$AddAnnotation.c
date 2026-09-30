/*
FUNCTION_NAME: OVRTelemetryMarker$$AddAnnotation
ENTRY_POINT: 057b0564
PROGRAM: Untangled-libil2cpp.so
SCORE: 125
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetryMarker__AddAnnotation(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *plVar11;
  undefined8 *unaff_x22;
  ulong uVar12;
  long *unaff_x26;
  
  thunk_FUN_02f12b58();
  uVar5 = OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking();
  uVar4 = FUN_0565dbf4(uVar5,0);
                    /* try { // try from 057b0588 to 058b0597 has its CatchHandler @ 057b0598 */
  lVar6 = thunk_FUN_02ef1808(*unaff_x22);
                    /* catch() { ... } // from try @ 057b0520 with catch @ 057b0598
                       catch() { ... } // from try @ 057b0588 with catch @ 057b0598 */
  FUN_03fd04d8(lVar6,(ulong)uVar4,*unaff_x21);
                    /* try { // try from 057b059c to 058b059f has its CatchHandler @ 057b05a8 */
                    /* try { // try from 057b05a0 to 058b05ab has its CatchHandler @ 057b034c */
  plVar11 = (long *)(unaff_x19 + 0x10);
  *plVar11 = lVar6;
                    /* catch() { ... } // from try @ 057b059c with catch @ 057b05a8 */
  thunk_FUN_02f411dc(plVar11,lVar6);
  puVar3 = PTR_DAT_06d5b6f8;
  puVar2 = PTR_DAT_06d5b568;
  if (0 < (int)uVar4) {
    uVar12 = 0;
    do {
      lVar6 = *plVar11;
      FUN_0565dbf8(uVar12,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x26);
      }
      uVar5 = FUN_05784d38();
      uVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_057add18(uVar7,uVar5);
      if (lVar6 == 0) {
LAB_057b06d4:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar9 = *(long *)(lVar6 + 0x10);
      lVar10 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_057b06d4;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = uVar7;
        thunk_FUN_02f411dc(puVar8,uVar7);
      }
      else {
        FUN_03fd0c9c(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar12 = uVar12 + 1;
    } while (uVar4 != uVar12);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_05784dbc();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x18),uVar5);
  return;
}


