/*
FUNCTION_NAME: OVRManager$$ShutdownInsightPassthrough
ENTRY_POINT: 06ab3814
PROGRAM: Waifu-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__ShutdownInsightPassthrough(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  uint unaff_w20;
  long lVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float unaff_s11;
  float fVar9;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_0338f71c();
      goto LAB_06ab3840;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_06ab3840:
  fVar6 = (float)(*(code *)*puVar3)();
  fVar8 = fVar6;
  if (1.0 < fVar6) {
    fVar8 = 1.0;
  }
  if (fVar6 < 0.0) {
    fVar8 = 0.0;
  }
  fVar8 = unaff_s9 * fVar8 + 0.0;
  lVar5 = *(long *)(unaff_x19 + 0x68);
  if (lVar5 == 0) goto LAB_06ab3a98;
  if (DAT_086ef168 == (code *)0x0) {
    DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
  }
  (*DAT_086ef168)(lVar5,0.0 <= unaff_s8);
  lVar5 = *(long *)(unaff_x19 + 0x60);
  if (lVar5 == 0) goto LAB_06ab3a98;
  fVar6 = ABS(unaff_s8);
  if (1.0 < fVar6) {
    fVar6 = 1.0;
  }
  fVar6 = unaff_s10 * fVar6 + unaff_s11;
  if (DAT_086ef168 == (code *)0x0) {
    DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
  }
  lVar1 = unaff_x19;
  lVar2 = 0;
  if (unaff_s8 >= 0.0) {
    lVar1 = 0;
    lVar2 = unaff_x19;
  }
  (*DAT_086ef168)(lVar5,unaff_s8 < 0.0);
  fVar7 = *(float *)(unaff_x19 + 0x9c);
  lVar5 = *(long *)(unaff_x19 + 0x58);
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  if (lVar5 == 0) goto LAB_06ab3a98;
  fVar9 = fVar8 + fVar6;
  if (0.0 <= unaff_s8) {
    fVar7 = fVar9;
  }
  if (DAT_086ef188 == (code *)0x0) {
    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
  }
  (*DAT_086ef188)(lVar5);
  uVar4 = FUN_06ab3d04(fVar7);
  if ((unaff_s8 < 0.0) || (((unaff_w20 ^ 1) & 1) != 0)) {
    FUN_06ab3ecc(0,uVar4,*(undefined8 *)(unaff_x19 + 0x78));
    if (0.0 <= unaff_s8) {
      fVar7 = fVar9;
      if ((unaff_w20 & 1) != 0) goto LAB_06ab3978;
      goto LAB_06ab3980;
    }
    if (lVar1 == 0) goto LAB_06ab3a98;
    FUN_06ab3f78(*(undefined4 *)(unaff_x19 + 0x9c),lVar1,*(undefined8 *)(unaff_x19 + 0x78));
    fVar7 = -fVar6 - fVar8;
  }
  else {
    if ((unaff_w20 & 1) == 0) goto LAB_06ab3a98;
    FUN_06ab3ecc(fVar6 - *(float *)(unaff_x19 + 0x9c),uVar4,*(undefined8 *)(unaff_x19 + 0x78));
LAB_06ab3978:
    fVar7 = fVar8 + *(float *)(unaff_x19 + 0x9c);
LAB_06ab3980:
    FUN_06ab3f78(fVar7,lVar2,*(undefined8 *)(unaff_x19 + 0x78));
    fVar7 = -*(float *)(unaff_x19 + 0x9c);
  }
  lVar5 = *(long *)(unaff_x19 + 0x50);
  if (lVar5 != 0) {
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    (*DAT_086ef188)(lVar5);
    uVar4 = FUN_06ab3d04(fVar7);
    fVar7 = 0.0;
    if (unaff_s8 < 0.0 && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
      fVar7 = *(float *)(unaff_x19 + 0x9c) - fVar6;
    }
    FUN_06ab3ecc(fVar7,uVar4,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      fVar9 = *(float *)(unaff_x19 + 0x9c);
    }
    else if ((unaff_w20 & 1) != 0) {
      fVar9 = fVar8 + *(float *)(unaff_x19 + 0x9c);
    }
    FUN_06ab3f78(fVar9);
    FUN_06ab3fcc(fVar6,fVar8);
    return;
  }
LAB_06ab3a98:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


