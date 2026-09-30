/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_ChangeVirtualKeyboardTextContext
ENTRY_POINT: 03174120
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_74_0__ovrp_ChangeVirtualKeyboardTextContext(long param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xa30));
  *(undefined1 *)(unaff_x21 + 0x117) = 1;
  puVar3 = PTR_DAT_03d80a30;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  lVar5 = *(long *)puVar3;
  puVar6 = *(undefined4 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  uVar11 = *puVar6;
  uVar10 = puVar6[1];
  uVar9 = puVar6[2];
  uVar8 = puVar6[3];
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *(long *)puVar3;
  }
  pfVar7 = *(float **)(lVar5 + 0xb8);
  fVar12 = *pfVar7;
  fVar14 = pfVar7[1];
  fVar15 = pfVar7[2];
  iVar4 = FUN_03172d20();
  fVar13 = -fVar12;
  fVar1 = -fVar14;
  fVar2 = -fVar15;
  if (iVar4 != 0) {
    fVar13 = fVar12;
    fVar1 = fVar14;
    fVar2 = fVar15;
  }
  fVar12 = (float)FUN_03173058();
  uStack000000000000000c = 0;
  uStack0000000000000014 = 0;
  FUN_03927140(fVar12 * fVar13,fVar12 * fVar1,fVar12 * fVar2,uVar11,uVar10,uVar9,uVar8);
  *(ulong *)((long)unaff_x19 + 0x14) = (ulong)uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = (ulong)uStack000000000000000c;
  unaff_x19[1] = (ulong)uStack000000000000000c << 0x20;
  *unaff_x19 = 0;
  return 1;
}


