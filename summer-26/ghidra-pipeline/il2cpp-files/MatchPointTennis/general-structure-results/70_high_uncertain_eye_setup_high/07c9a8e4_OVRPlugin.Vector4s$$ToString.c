/*
FUNCTION_NAME: OVRPlugin.Vector4s$$ToString
ENTRY_POINT: 07c9a8e4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s__ToString
               (undefined8 param_1,undefined1 param_2 [16],float param_3,undefined8 param_4,
               float param_5,float param_6,float param_7,float param_8)

{
  bool in_NG;
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  fVar6 = *(float *)(unaff_x20 + 0x110);
  if (in_NG) {
    param_7 = param_8;
  }
  fVar3 = (float)((ulong)param_1 >> 0x20);
  *unaff_x19 = CONCAT44(fVar3 + ((param_2._4_4_ + (float)((ulong)param_4 >> 0x20)) - fVar3) *
                                param_7,
                        (float)param_1 +
                        ((param_2._0_4_ + (float)param_4) - (float)param_1) * param_7);
  *(float *)(unaff_x19 + 1) = fVar6 + param_7 * ((param_3 + param_6 * param_5) - fVar6);
  if (*(char *)(unaff_x20 + 0x105) == '\0') {
    lVar1 = *(long *)(unaff_x20 + 0x98);
  }
  else {
    lVar1 = *(long *)(unaff_x20 + 0x90);
  }
  if (lVar1 != 0) {
    FUN_07c1e698(lVar1,0);
    FUN_0951683c(*(undefined4 *)((long)unaff_x19 + 0xc),*(undefined4 *)(unaff_x19 + 2),
                 *(undefined4 *)((long)unaff_x19 + 0x14),*(undefined4 *)(unaff_x19 + 3),
                 *(undefined4 *)(unaff_x20 + 0xf4),*(undefined4 *)(unaff_x20 + 0xf8),
                 *(undefined4 *)(unaff_x20 + 0xfc),*(undefined4 *)(unaff_x20 + 0x100),0);
    uVar7 = *(undefined4 *)(unaff_x20 + 0x120);
    uVar4 = *(undefined4 *)(unaff_x20 + 0x118);
    uVar5 = *(undefined4 *)(unaff_x20 + 0x11c);
    uVar2 = FUN_0951683c(*(undefined4 *)(unaff_x20 + 0x114),0);
    *(undefined4 *)((long)unaff_x19 + 0xc) = uVar2;
    *(undefined4 *)(unaff_x19 + 2) = uVar4;
    *(undefined4 *)((long)unaff_x19 + 0x14) = uVar5;
    *(undefined4 *)(unaff_x19 + 3) = uVar7;
    FUN_07c1d744(unaff_x20 + 0x124);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


