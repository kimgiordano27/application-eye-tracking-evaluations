/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 051d992c
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__ShouldRequestPermission(void)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  *(undefined1 *)(unaff_x19 + 0x590) = 1;
  puVar1 = PTR_DAT_06604b68;
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *unaff_x20;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar8 = *(undefined4 *)(lVar2 + 0x54);
  uVar9 = *(undefined4 *)(lVar2 + 0x58);
  uVar10 = *(undefined4 *)(lVar2 + 0x5c);
  uVar11 = *(undefined4 *)(lVar2 + 0x84);
  uVar12 = *(undefined4 *)(lVar2 + 0x88);
  uVar13 = *(undefined4 *)(lVar2 + 0x8c);
  uVar14 = *(undefined8 *)(lVar2 + 0x6c);
  uVar15 = *(undefined4 *)(lVar2 + 0x74);
  uVar5 = uVar9;
  uVar6 = uVar10;
  uVar7 = uVar11;
  uVar4 = FUN_05ee9fc0(uVar8,0);
  puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
  *puVar3 = uVar8;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  puVar3[4] = uVar12;
  puVar3[5] = uVar13;
  *(undefined8 *)(puVar3 + 6) = uVar14;
  puVar3[8] = uVar15;
  puVar3[9] = uVar4;
  puVar3[10] = uVar5;
  puVar3[0xb] = uVar6;
  puVar3[0xc] = uVar7;
  lVar2 = *(long *)(*unaff_x20 + 0xb8);
  uVar8 = *(undefined4 *)(lVar2 + 0xc);
  uVar9 = *(undefined4 *)(lVar2 + 0x10);
  uVar10 = *(undefined4 *)(lVar2 + 0x14);
  uVar11 = *(undefined4 *)(lVar2 + 0x3c);
  uVar12 = *(undefined4 *)(lVar2 + 0x40);
  uVar13 = *(undefined4 *)(lVar2 + 0x44);
  uVar14 = *(undefined8 *)(lVar2 + 0x24);
  uVar15 = *(undefined4 *)(lVar2 + 0x2c);
  uVar5 = uVar9;
  uVar6 = uVar10;
  uVar7 = uVar11;
  uVar4 = FUN_05ee9fc0(uVar8,0);
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined4 *)(lVar2 + 0x34) = uVar8;
  *(undefined4 *)(lVar2 + 0x38) = uVar9;
  *(undefined4 *)(lVar2 + 0x3c) = uVar10;
  *(undefined4 *)(lVar2 + 0x40) = uVar11;
  *(undefined4 *)(lVar2 + 0x44) = uVar12;
  *(undefined4 *)(lVar2 + 0x48) = uVar13;
  *(undefined8 *)(lVar2 + 0x4c) = uVar14;
  *(undefined4 *)(lVar2 + 0x54) = uVar15;
  *(undefined4 *)(lVar2 + 0x58) = uVar4;
  *(undefined4 *)(lVar2 + 0x5c) = uVar5;
  *(undefined4 *)(lVar2 + 0x60) = uVar6;
  *(undefined4 *)(lVar2 + 100) = uVar7;
  return;
}


