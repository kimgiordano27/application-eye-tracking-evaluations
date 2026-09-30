/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 07a2b6b0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpacePosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 in_w8;
  long lVar6;
  undefined8 *puVar7;
  int in_w9;
  undefined8 uVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined4 *)(unaff_x19 + 0xe4) = in_w8;
  if (in_w9 == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_09895265 == '\0') {
    FUN_04077588(PTR_DAT_092ecfe0);
    DAT_09895265 = '\x01';
  }
  lVar4 = *unaff_x20;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *unaff_x20;
  }
  cVar3 = DAT_09895266;
  lVar6 = *(long *)(lVar4 + 0xb8);
  uVar8 = *(undefined8 *)(lVar6 + 0x20);
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar8;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar5;
  if (cVar3 == '\0') {
    FUN_04077588();
    lVar4 = *unaff_x20;
    DAT_09895266 = '\x01';
  }
  puVar2 = PTR_DAT_092efff8;
  puVar1 = PTR_DAT_092effa8;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *unaff_x20;
  }
  puVar7 = *(undefined8 **)(lVar4 + 0xb8);
  uVar5 = *(undefined8 *)puVar1;
  uVar8 = puVar7[2];
  uVar10 = puVar7[1];
  uVar9 = *puVar7;
  *(undefined4 *)(unaff_x19 + 0x128) = 1;
  *(undefined8 *)(unaff_x19 + 0x110) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar9;
  uVar5 = thunk_FUN_040b4efc(uVar5);
  FUN_05c26520(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar5;
  thunk_FUN_040ec700(unaff_x19 + 0x130,uVar5);
  FUN_061ccdbc();
  return;
}


