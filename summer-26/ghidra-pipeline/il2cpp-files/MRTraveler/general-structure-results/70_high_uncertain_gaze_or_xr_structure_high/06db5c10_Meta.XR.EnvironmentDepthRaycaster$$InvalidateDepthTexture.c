/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$InvalidateDepthTexture
ENTRY_POINT: 06db5c10
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentDepthRaycaster__InvalidateDepthTexture(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x19;
  undefined8 uVar11;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_06a4d5f0();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x10),param_1);
  if (*(char *)(unaff_x23 + 0xc01) == '\0') {
    FUN_03c8f898(PTR_DAT_08e902c0);
    *(undefined1 *)(unaff_x23 + 0xc01) = 1;
  }
  puVar8 = PTR_DAT_08e902f0;
  puVar7 = PTR_DAT_08e902e8;
  puVar6 = PTR_DAT_08e902e0;
  puVar5 = PTR_DAT_08e902d0;
  puVar4 = PTR_DAT_08e902c8;
  puVar3 = PTR_DAT_08e879e0;
  puVar2 = PTR_DAT_08e879d8;
  puVar1 = PTR_DAT_08e7a2c8;
  lVar9 = *unaff_x22;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar9 = *unaff_x22;
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18);
  uVar10 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_06a4d5f0(uVar10,uVar11,*(undefined8 *)puVar4);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar10;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x18),uVar10);
  uVar10 = thunk_FUN_03cf5234(*(undefined8 *)puVar8);
  FUN_06a4d5c4(uVar10,*(undefined8 *)puVar6);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar10;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x20),uVar10);
  uVar10 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
  FUN_06a4d5c4(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar10;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x28),uVar10);
  uVar10 = thunk_FUN_03cf5234(*(undefined8 *)puVar7);
  FUN_06a4d5c4(uVar10,*(undefined8 *)puVar5);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar10;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x30),uVar10);
  FUN_07145224();
  return;
}


