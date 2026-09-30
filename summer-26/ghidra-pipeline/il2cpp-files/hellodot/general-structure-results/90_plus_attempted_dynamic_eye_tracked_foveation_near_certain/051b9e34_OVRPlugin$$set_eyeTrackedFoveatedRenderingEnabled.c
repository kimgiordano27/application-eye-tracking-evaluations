/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 051b9e34
PROGRAM: hellodot-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,float *param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fStack000000000000004c;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  undefined8 uStack_30;
  float fStack_28;
  undefined8 uStack_20;
  float fStack_18;
  undefined8 uStack_10;
  float fStack_8;
  
  uVar16 = param_2;
  uVar6 = param_3;
  if ((DAT_06a7134a & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065eea08);
    DAT_06a7134a = 1;
  }
  fStack_8 = 0.0;
  uStack_10 = 0;
  fStack_18 = 0.0;
  uStack_20 = 0;
  fStack_28 = 0.0;
  uStack_30 = 0;
  fStack_38 = 0.0;
  uStack_40 = 0;
  uVar14 = FUN_051b8da8(param_5,param_8);
  uVar17 = uVar16;
  uVar4 = uVar6;
  uVar18 = param_4;
  fStack000000000000004c = (float)FUN_051b8c4c(param_5,param_8);
  fVar21 = (float)uVar4;
  fVar15 = (float)uVar18;
  if (DAT_06a6722f == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a6722f = '\x01';
  }
  puVar2 = PTR_DAT_065eea08;
  puVar1 = PTR_DAT_065c9850;
  lVar8 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
  uVar4 = uVar16;
  uVar18 = uVar6;
  fVar9 = (float)FUN_05eea23c(uVar14,uVar16,uVar6,param_4,*(undefined4 *)(lVar8 + 0x3c),
                              *(undefined4 *)(lVar8 + 0x40),*(undefined4 *)(lVar8 + 0x44),0);
  if (DAT_06a67233 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67233 = '\x01';
  }
  lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar10 = (float)FUN_05eea23c(uVar14,uVar16,uVar6,param_4,*(undefined4 *)(lVar8 + 0x48),
                               *(undefined4 *)(lVar8 + 0x4c),*(undefined4 *)(lVar8 + 0x50),0);
  FUN_051b94b8(param_5,&uStack_10,&uStack_20,&uStack_30,&uStack_40,param_8);
  fVar3 = fStack_8;
  fVar33 = fStack_18;
  fVar34 = (float)uStack_10;
  fVar35 = uStack_10._4_4_;
  fVar25 = (float)uStack_20;
  fVar32 = uStack_20._4_4_;
  fVar28 = (float)uVar17;
  fVar30 = fVar28 * (float)uVar4;
  fVar27 = fVar28 * (float)uVar18;
  fVar29 = fStack000000000000004c * fVar9;
  fVar31 = fStack000000000000004c * (float)uVar4;
  fVar26 = fStack000000000000004c * (float)uVar18;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar4 = FUN_0419e090(fVar28 * fVar9 + (float)uStack_10,fVar30 + uStack_10._4_4_,fVar27 + fStack_8,
                       fVar29 + (float)uStack_20,fVar31 + uStack_20._4_4_,fVar26 + fStack_18,
                       &uStack_58,*(undefined8 *)puVar2);
  uStack_68 = uStack_50;
  uStack_70 = uStack_58;
  uStack_60 = uStack_48;
  uVar17 = param_2;
  uVar18 = param_3;
  fStack000000000000004c = (float)FUN_051b96c8(param_1,uVar4,&uStack_70);
  fVar24 = fStack_28;
  fVar20 = fStack_38;
  fVar11 = (float)uStack_30;
  fVar23 = uStack_30._4_4_;
  fVar12 = (float)uStack_40;
  fVar22 = uStack_40._4_4_;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uVar5 = FUN_0419e090((float)uStack_30 - fVar29,uStack_30._4_4_ - fVar31,fStack_28 - fVar26,
                       (float)uStack_40 - fVar28 * fVar9,uStack_40._4_4_ - fVar30,fStack_38 - fVar27
                       ,&uStack_88,*(undefined8 *)puVar2);
  uStack_98 = uStack_80;
  uStack_a0 = uStack_88;
  uStack_90 = uStack_78;
  uVar4 = param_2;
  uVar14 = param_3;
  fVar26 = (float)FUN_051b96c8(param_1,uVar5,&uStack_a0);
  fVar9 = fVar21 * (float)uVar16;
  fVar27 = fVar21 * (float)uVar6;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  fVar29 = fVar15 * (float)uVar16;
  fVar28 = fVar15 * (float)uVar6;
  uVar6 = FUN_0419e090(fVar34 - fVar21 * fVar10,fVar35 - fVar9,fVar3 - fVar27,
                       fVar11 - fVar15 * fVar10,fVar23 - fVar29,fVar24 - fVar28,&uStack_b8,
                       *(undefined8 *)puVar2);
  uStack_c8 = uStack_b0;
  uStack_d0 = uStack_b8;
  uStack_c0 = uStack_a8;
  uVar16 = param_2;
  uVar5 = param_3;
  fVar11 = (float)FUN_051b96c8(param_1,uVar6,&uStack_d0);
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uVar7 = FUN_0419e090(fVar15 * fVar10 + fVar25,fVar29 + fVar32,fVar28 + fVar33,
                       fVar21 * fVar10 + fVar12,fVar9 + fVar22,fVar27 + fVar20,&uStack_e8,
                       *(undefined8 *)puVar2);
  uStack_f8 = uStack_e0;
  uStack_100 = uStack_e8;
  uStack_f0 = uStack_d8;
  uVar6 = param_2;
  uVar19 = param_3;
  fVar12 = (float)FUN_051b96c8(param_1,uVar7,&uStack_100);
  fVar20 = (float)param_1;
  fVar25 = (float)param_2;
  fVar21 = (float)uVar17 - fVar25;
  fVar23 = (float)uVar4 - fVar25;
  fVar15 = (float)uVar6;
  fVar24 = (float)uVar16 - fVar25;
  fVar33 = (float)param_3;
  fVar9 = (float)uVar19;
  fVar32 = (float)uVar5 - fVar33;
  fVar22 = (float)uVar18 - fVar33;
  fVar34 = (float)uVar14 - fVar33;
  fVar35 = fVar22 * fVar22 +
           (fStack000000000000004c - fVar20) * (fStack000000000000004c - fVar20) + fVar21 * fVar21;
  fVar23 = fVar34 * fVar34 + (fVar26 - fVar20) * (fVar26 - fVar20) + fVar23 * fVar23;
  fVar22 = fVar32 * fVar32 + (fVar11 - fVar20) * (fVar11 - fVar20) + fVar24 * fVar24;
  fVar20 = (fVar9 - fVar33) * (fVar9 - fVar33) +
           (fVar12 - fVar20) * (fVar12 - fVar20) + (fVar15 - fVar25) * (fVar15 - fVar25);
  fVar21 = fVar22;
  if (fVar20 <= fVar22) {
    fVar21 = fVar20;
  }
  fVar20 = fVar23;
  if (fVar21 <= fVar23) {
    fVar20 = fVar21;
  }
  fVar21 = fVar35;
  if (fVar20 <= fVar35) {
    fVar21 = fVar20;
  }
  if (fVar35 == fVar21) {
    *param_6 = fStack000000000000004c;
    uVar13 = 0;
    fVar15 = (float)uVar17;
    fVar9 = (float)uVar18;
  }
  else if (fVar23 == fVar21) {
    *param_6 = fVar26;
    uVar13 = 0x43340000;
    fVar15 = (float)uVar4;
    fVar9 = (float)uVar14;
  }
  else if (fVar22 == fVar21) {
    *param_6 = fVar11;
    uVar13 = 0x42b40000;
    fVar15 = (float)uVar16;
    fVar9 = (float)uVar5;
  }
  else {
    *param_6 = fVar12;
    uVar13 = 0xc2b40000;
  }
  param_6[1] = fVar15;
  param_6[2] = fVar9;
  *param_7 = uVar13;
  return;
}


