/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 074710c0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__UpdateNodePhysicsPoses(void)

{
  undefined *puVar1;
  int in_w8;
  long lVar2;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x22;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float unaff_s9;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float unaff_s11;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack000000000000005c;
  
  if (in_w8 == 0) {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    *(undefined1 *)(unaff_x22 + 0x37e) = 1;
  }
  puVar1 = PTR_DAT_091a0f88;
  fVar3 = (float)FUN_08a44d84(0);
  uVar6 = *unaff_x19;
  fVar7 = (float)unaff_x19[1];
  fVar11 = (float)unaff_x19[2];
  uVar9 = unaff_x19[3];
  fStack000000000000000c = unaff_s11;
  fStack000000000000005c = unaff_s9;
  if (*(char *)(unaff_x22 + 0x37e) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    *(undefined1 *)(unaff_x22 + 0x37e) = 1;
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  fStack0000000000000004 =
       (float)FUN_08a44d84(uVar6,fVar7,fVar11,uVar9,*(undefined4 *)(lVar2 + 0x48),
                           *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  uVar6 = *unaff_x20;
  fVar8 = (float)unaff_x20[1];
  fVar12 = (float)unaff_x20[2];
  uVar9 = unaff_x20[3];
  if (DAT_09836325 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    DAT_09836325 = '\x01';
  }
                    /* try { // try from 07471198 to 0757119f has its CatchHandler @ 074711e0 */
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar4 = (float)FUN_08a44d84(uVar6,fVar8,fVar12,uVar9,*(undefined4 *)(lVar2 + 0x18),
                              *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
  uVar6 = *unaff_x19;
  fVar10 = (float)unaff_x19[1];
  fVar13 = (float)unaff_x19[2];
  uVar9 = unaff_x19[3];
  if (DAT_09836325 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    DAT_09836325 = '\x01';
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar3 = fVar3 * fStack0000000000000004;
  fVar5 = (float)FUN_08a44d84(uVar6,fVar10,fVar13,uVar9,*(undefined4 *)(lVar2 + 0x18),
                              *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
  return ((fStack000000000000000c * fVar11 + fVar3 + fStack000000000000005c * fVar7) * 0.5 + 0.5) *
         ((fVar12 * fVar13 + fVar4 * fVar5 + fVar8 * fVar10) * 0.5 + 0.5);
}


