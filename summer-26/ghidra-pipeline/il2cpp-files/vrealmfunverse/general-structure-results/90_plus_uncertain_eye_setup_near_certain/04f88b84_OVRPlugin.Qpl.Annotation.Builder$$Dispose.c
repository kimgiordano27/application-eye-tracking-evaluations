/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 04f88b84
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Dispose
               (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               undefined1 param_6 [16],float param_7,float param_8)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  
  fVar8 = param_2;
  if (in_ZR || in_NG != in_OV) {
    fVar8 = param_3;
  }
  fVar4 = (float)*unaff_x19;
  fVar6 = (float)((ulong)*unaff_x19 >> 0x20);
  fVar7 = param_4;
  if (0.0 <= param_3) {
    fVar7 = fVar8;
  }
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  if (0.0 <= param_1) {
    param_4 = param_2;
  }
  fVar10 = *(float *)(unaff_x20 + 0x110);
  fVar8 = (float)*(undefined8 *)(unaff_x20 + 0x108);
  fVar9 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0x108) >> 0x20);
  *unaff_x19 = CONCAT44(fVar9 + ((fVar6 + (param_6._4_4_ - fVar6) * fVar7) - fVar9) * param_4,
                        fVar8 + ((fVar4 + (param_6._0_4_ - fVar4) * fVar7) - fVar8) * param_4);
  *(float *)(unaff_x19 + 1) = fVar10 + param_4 * ((param_7 + param_8 * fVar7) - fVar10);
  if (*(char *)(unaff_x20 + 0x105) == '\0') {
    lVar1 = *(long *)(unaff_x20 + 0x98);
  }
  else {
    lVar1 = *(long *)(unaff_x20 + 0x90);
  }
  if (lVar1 != 0) {
    FUN_04f0e0c4(lVar1,0);
    FUN_05c7b74c(*(undefined4 *)((long)unaff_x19 + 0xc),*(undefined4 *)(unaff_x19 + 2),
                 *(undefined4 *)((long)unaff_x19 + 0x14),*(undefined4 *)(unaff_x19 + 3),
                 *(undefined4 *)(unaff_x20 + 0xf4),*(undefined4 *)(unaff_x20 + 0xf8),
                 *(undefined4 *)(unaff_x20 + 0xfc),*(undefined4 *)(unaff_x20 + 0x100),0);
    uVar11 = *(undefined4 *)(unaff_x20 + 0x120);
    uVar3 = *(undefined4 *)(unaff_x20 + 0x118);
    uVar5 = *(undefined4 *)(unaff_x20 + 0x11c);
    uVar2 = FUN_05c7b74c(*(undefined4 *)(unaff_x20 + 0x114),0);
    *(undefined4 *)((long)unaff_x19 + 0xc) = uVar2;
    *(undefined4 *)(unaff_x19 + 2) = uVar3;
    *(undefined4 *)((long)unaff_x19 + 0x14) = uVar5;
    *(undefined4 *)(unaff_x19 + 3) = uVar11;
    FUN_04f0d164(unaff_x20 + 0x124);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


