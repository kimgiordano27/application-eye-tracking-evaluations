/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 07ca0378
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin_UnityOpenXR__OnSessionCreate(void)

{
  undefined *puVar1;
  int in_w8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined8 unaff_d9;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uStack0000000000000004;
  
  uVar11 = (ulong)(uint)unaff_x21[2];
  plVar3 = *(long **)(unaff_x23 + 0xa8);
  if (in_w8 == 0) {
    FUN_04447ba8(PTR_DAT_09f1e740);
    *(undefined1 *)(unaff_x22 + 0xf41) = 1;
  }
  puVar1 = PTR_DAT_09f1e740;
  FUN_09516eb8(0);
  uStack0000000000000004 = (undefined4)unaff_d9;
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar6 = FUN_07ca0274();
  uVar16 = *unaff_x21;
  uVar9 = (ulong)(uint)unaff_x21[1];
  uVar12 = (ulong)(uint)unaff_x21[2];
  uVar18 = unaff_x21[3];
  if (DAT_0a51bf40 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    DAT_0a51bf40 = '\x01';
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  FUN_09516eb8(uVar16,uVar9,uVar12,uVar18,*(undefined4 *)(lVar2 + 0x18),
               *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
  uStack0000000000000004 = (undefined4)uVar9;
  uVar7 = FUN_07ca0274();
  fVar4 = (float)FUN_09516bac(uVar6,unaff_d9,uVar11,uVar7,uVar9,uVar12,0);
  fVar10 = *(float *)(unaff_x20 + 0x2c);
  fVar13 = *(float *)(unaff_x20 + 0x30);
  fVar8 = *(float *)(unaff_x20 + 0x28);
  fVar5 = (float)FUN_095165fc(*(undefined4 *)(unaff_x20 + 0x24),fVar8,fVar10,fVar13,0);
  fVar17 = (float)uVar7;
  fVar14 = (float)unaff_d9;
  fVar15 = (float)uVar11;
  return (*(float *)(unaff_x19 + 0x2c) *
          ((fVar15 * fVar5 + fVar17 * fVar8 + fVar14 * fVar13) - fVar4 * fVar10) +
         *(float *)(unaff_x19 + 0x24) *
         (((fVar17 * fVar13 - fVar4 * fVar5) - fVar14 * fVar8) - fVar15 * fVar10) +
         *(float *)(unaff_x19 + 0x30) *
         ((fVar14 * fVar10 + fVar17 * fVar5 + fVar4 * fVar13) - fVar15 * fVar8)) -
         *(float *)(unaff_x19 + 0x28) *
         ((fVar4 * fVar8 + fVar17 * fVar10 + fVar15 * fVar13) - fVar14 * fVar5);
}


