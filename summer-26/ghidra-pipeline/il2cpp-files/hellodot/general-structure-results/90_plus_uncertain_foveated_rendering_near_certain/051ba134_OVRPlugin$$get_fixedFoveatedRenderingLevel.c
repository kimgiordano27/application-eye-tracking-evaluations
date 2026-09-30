/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 051ba134
PROGRAM: hellodot-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel
               (undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],float param_4)

{
  undefined8 uVar1;
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined8 *unaff_x23;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  float unaff_s15;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined8 in_stack_00000070;
  float in_stack_00000080;
  float in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000e0;
  float fStack00000000000001e8;
  float fStack00000000000001ec;
  
  uStack00000000000000d0 = param_2;
  uStack00000000000000e0 = param_1;
  fVar5 = in_stack_00000080;
  fVar2 = (float)FUN_051b96c8(in_stack_00000070);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  uVar1 = FUN_0419e090(unaff_s14 + fStack0000000000000040,unaff_s15 + fStack0000000000000044,
                       unaff_s10 + fStack0000000000000048,unaff_s8 + in_stack_00000000._4_4_,
                       unaff_s9 + fStack0000000000000008,unaff_s11 + fStack000000000000000c,
                       &stack0x000000b8,*unaff_x23);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar11 = in_stack_00000080;
  fVar12 = in_stack_00000090;
  fVar3 = (float)FUN_051b96c8(in_stack_00000070,uVar1,&stack0x000000a0);
  fVar9 = (float)in_stack_00000070;
  fVar10 = (fStack000000000000004c - in_stack_00000090) *
           (fStack000000000000004c - in_stack_00000090) +
           (fStack00000000000001ec - fVar9) * (fStack00000000000001ec - fVar9) +
           (fStack00000000000001e8 - in_stack_00000080) *
           (fStack00000000000001e8 - in_stack_00000080);
  fVar8 = (fStack0000000000000010 - in_stack_00000090) *
          (fStack0000000000000010 - in_stack_00000090) +
          (in_stack_00000018 - fVar9) * (in_stack_00000018 - fVar9) +
          (fStack0000000000000014 - in_stack_00000080) *
          (fStack0000000000000014 - in_stack_00000080);
  fVar6 = (param_4 - in_stack_00000090) * (param_4 - in_stack_00000090) +
          (fVar2 - fVar9) * (fVar2 - fVar9) +
          (fVar5 - in_stack_00000080) * (fVar5 - in_stack_00000080);
  fVar7 = (fVar12 - in_stack_00000090) * (fVar12 - in_stack_00000090) +
          (fVar3 - fVar9) * (fVar3 - fVar9) +
          (fVar11 - in_stack_00000080) * (fVar11 - in_stack_00000080);
  fVar9 = fVar6;
  if (fVar7 <= fVar6) {
    fVar9 = fVar7;
  }
  fVar7 = fVar8;
  if (fVar9 <= fVar8) {
    fVar7 = fVar9;
  }
  fVar9 = fVar10;
  if (fVar7 <= fVar10) {
    fVar9 = fVar7;
  }
  if (fVar10 == fVar9) {
    *unaff_x20 = fStack00000000000001ec;
    uVar4 = 0;
    fVar11 = fStack00000000000001e8;
    fVar12 = fStack000000000000004c;
  }
  else if (fVar8 == fVar9) {
    *unaff_x20 = in_stack_00000018;
    uVar4 = 0x43340000;
    fVar11 = fStack0000000000000014;
    fVar12 = fStack0000000000000010;
  }
  else if (fVar6 == fVar9) {
    *unaff_x20 = fVar2;
    uVar4 = 0x42b40000;
    fVar11 = fVar5;
    fVar12 = param_4;
  }
  else {
    *unaff_x20 = fVar3;
    uVar4 = 0xc2b40000;
  }
  unaff_x20[1] = fVar11;
  unaff_x20[2] = fVar12;
  *unaff_x19 = uVar4;
  return;
}


