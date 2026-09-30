/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 0531df00
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__OverrideExternalCameraStaticPose(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x22;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float unaff_s9;
  float fVar6;
  float fVar7;
  float unaff_s10;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack000000000000005c;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xf78));
  *(undefined1 *)(unaff_x22 + 0x2c5) = 1;
  puVar1 = PTR_DAT_067c8f78;
  fStack000000000000005c = (float)FUN_060dfb18(0);
  uVar5 = *unaff_x19;
  fVar6 = (float)unaff_x19[1];
  fVar8 = (float)unaff_x19[2];
  uVar11 = unaff_x19[3];
  fStack000000000000000c = unaff_s10;
  if (*(char *)(unaff_x22 + 0x2c5) == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    *(undefined1 *)(unaff_x22 + 0x2c5) = 1;
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar3 = (float)FUN_060dfb18(uVar5,fVar6,fVar8,uVar11,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  uVar5 = *unaff_x20;
  fVar7 = (float)unaff_x20[1];
  fVar9 = (float)unaff_x20[2];
  uVar11 = unaff_x20[3];
  fStack0000000000000004 = fVar6;
  if (DAT_06bb42c4 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c4 = '\x01';
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar6 = (float)FUN_060dfb18(uVar5,fVar7,fVar9,uVar11,*(undefined4 *)(lVar2 + 0x18),
                              *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
  uVar5 = *unaff_x19;
  fVar10 = (float)unaff_x19[1];
  fVar12 = (float)unaff_x19[2];
  uVar11 = unaff_x19[3];
  if (DAT_06bb42c4 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c4 = '\x01';
  }
  fVar3 = fStack000000000000005c * fVar3;
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  unaff_s9 = unaff_s9 * fStack0000000000000004;
  fVar4 = (float)FUN_060dfb18(uVar5,fVar10,fVar12,uVar11,*(undefined4 *)(lVar2 + 0x18),
                              *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
  return ((fStack000000000000000c * fVar8 + fVar3 + unaff_s9) * 0.5 + 0.5) *
         ((fVar9 * fVar12 + fVar6 * fVar4 + fVar7 * fVar10) * 0.5 + 0.5);
}


