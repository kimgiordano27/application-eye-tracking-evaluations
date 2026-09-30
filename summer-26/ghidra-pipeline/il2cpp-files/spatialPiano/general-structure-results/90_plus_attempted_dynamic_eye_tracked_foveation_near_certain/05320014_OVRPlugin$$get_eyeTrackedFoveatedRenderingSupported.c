/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05320014
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8
OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  uint in_w8;
  long lVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_s19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  param_3 = param_3 + param_1 + param_2;
  fVar8 = 1.0 / (param_3 * param_3 + -1.0);
  fVar11 = unaff_s10 * (in_s19 - in_stack_00000008._4_4_) +
           unaff_s8 * (fStack0000000000000034 - unaff_s14) +
           unaff_s9 * (fStack0000000000000030 - unaff_s15);
  fVar5 = (in_s19 - in_stack_00000008._4_4_) * unaff_s11 +
          (fStack0000000000000034 - unaff_s14) * unaff_s12 +
          (fStack0000000000000030 - unaff_s15) * unaff_s13;
  fVar6 = (fVar11 * param_3 - fVar5) * fVar8;
  fVar8 = (fVar11 - param_3 * fVar5) * fVar8;
  in_stack_00000028 = in_stack_00000028 + in_stack_00000018._4_4_ * fVar6;
  fVar5 = (float)in_stack_00000020 + (float)in_stack_00000010 * fVar6;
  fVar6 = (float)((ulong)in_stack_00000020 >> 0x20) +
          (float)((ulong)in_stack_00000010 >> 0x20) * fVar6;
  uVar7 = CONCAT44(fVar6,fVar5);
  fVar11 = (fStack0000000000000034 + unaff_s8 * fVar8) - in_stack_00000028;
  fVar10 = (fStack0000000000000030 + unaff_s9 * fVar8) - fVar5;
  fVar8 = (in_s19 + unaff_s10 * fVar8) - fVar6;
  fVar8 = SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar10 * fVar10) - fStack0000000000000038;
  *(float *)(unaff_x23 + 0x20) = fVar8;
  puVar1 = PTR_DAT_067c9790;
  if (1 < (int)in_w8) {
    lVar2 = (ulong)in_w8 - 1;
    pfVar3 = (float *)(unaff_x23 + 0x24);
    do {
      fVar11 = *pfVar3;
      if (*pfVar3 <= fVar8) {
        fVar11 = fVar8;
      }
      fVar8 = fVar11;
      lVar2 = lVar2 + -1;
      pfVar3 = pfVar3 + 1;
    } while (lVar2 != 0);
  }
  if (fVar8 < fStack0000000000000038) {
    fVar8 = SQRT(fStack0000000000000038 * fStack0000000000000038 - fVar8 * fVar8);
    in_stack_00000028 = in_stack_00000028 - fVar8 * *(float *)(unaff_x22 + 0xc);
    uVar7 = CONCAT44(fVar6 - (float)((ulong)*(undefined8 *)(unaff_x22 + 0x10) >> 0x20) * fVar8,
                     fVar5 - (float)*(undefined8 *)(unaff_x22 + 0x10) * fVar8);
  }
  uVar9 = (undefined4)(uVar7 >> 0x20);
  uVar4 = FUN_0531f9e8(in_stack_00000028,uVar7,uVar7 >> 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_060fda18(uVar4,uVar7 & 0xffffffff,uVar9,uStack00000000000000cc,uStack00000000000000c8,
               uStack0000000000000040,uStack000000000000003c,&stack0x00000060,0);
  FUN_053201f8((undefined1 *)((long)&stack0x00000040 + 4));
  unaff_x19[1] = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  *unaff_x19 = uStack0000000000000044;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000058;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
  return 1;
}


