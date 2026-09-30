/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_GetRenderModelPaths
ENTRY_POINT: 03172ae8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_68_0__ovrp_GetRenderModelPaths
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = param_2._0_4_;
  *(long *)(unaff_x20 + 0x1c) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x14) = param_1._0_8_;
  *(long *)(unaff_x20 + 0x28) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x20) = param_2._0_8_;
  puVar2 = 
  Field_<PrivateImplementationDetails>_F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
  ;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
                    /* catch() { ... } // from try @ 031729c4 with catch @ 03172b00 */
                    /* catch() { ... } // from try @ 03172974 with catch @ 03172b04 */
                    /* catch() { ... } // from try @ 031729a0 with catch @ 03172b08 */
    lVar8 = 0;
                    /* catch() { ... } // from try @ 0317297c with catch @ 03172b0c */
    uVar6 = 0;
                    /* catch() { ... } // from try @ 031729c8 with catch @ 03172b10 */
    *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x60) = 0x3f800000;
    while (*(long *)(unaff_x19 + 0x58) != 0) {
                    /* try { // try from 03172b28 to 03272b3f has its CatchHandler @ 03172d64 */
      lVar3 = FUN_02b59714(*(long *)(unaff_x19 + 0x58),uVar6 & 0xffffffff,*(undefined8 *)puVar2);
      if (*(long *)(unaff_x19 + 0x58) == 0) break;
                    /* try { // try from 03172b40 to 03272cc3 has its CatchHandler @ 03172760 */
      uVar4 = FUN_02b59714(*(long *)(unaff_x19 + 0x58),uVar6 & 0xffffffff,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar5 = FUN_03922f24(uVar4,0,0);
      if ((uVar5 & 1) == 0) {
        if ((*(long *)(unaff_x19 + 0x48) == 0) || (lVar3 == 0)) break;
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
        lVar3 = FUN_0391c27c(lVar3,0);
        if ((lVar3 == 0) || (uVar9 = FUN_03928fd8(lVar3,0), lVar7 == 0)) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar7 = lVar7 + lVar8;
        *(undefined4 *)(lVar7 + 0x20) = uVar9;
        *(undefined4 *)(lVar7 + 0x24) = uVar10;
        *(undefined4 *)(lVar7 + 0x28) = param_3;
        *(undefined4 *)(lVar7 + 0x2c) = param_4;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
      if (uVar6 == 0x18) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


