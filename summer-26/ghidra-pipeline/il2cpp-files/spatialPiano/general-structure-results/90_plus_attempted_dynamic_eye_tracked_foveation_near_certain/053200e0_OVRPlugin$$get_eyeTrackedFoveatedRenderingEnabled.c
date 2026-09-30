/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 053200e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8
OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled
          (ulong param_1,ulong param_2,ulong param_3,float param_4,undefined1 param_5 [16],
          float param_6)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
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
  
  fVar6 = SQRT(param_6 + param_4) - fStack0000000000000038;
  *(float *)(unaff_x23 + 0x20) = fVar6;
  puVar1 = PTR_DAT_067c9790;
  if (in_NG == in_OV) {
    lVar2 = (param_1 & 0xffffffff) - 1;
    pfVar3 = (float *)(unaff_x23 + 0x24);
    fVar7 = fVar6;
    do {
      fVar6 = *pfVar3;
      if (*pfVar3 <= fVar7) {
        fVar6 = fVar7;
      }
      lVar2 = lVar2 + -1;
      pfVar3 = pfVar3 + 1;
      fVar7 = fVar6;
    } while (lVar2 != 0);
  }
  if (fVar6 < fStack0000000000000038) {
    fVar6 = SQRT(fStack0000000000000038 * fStack0000000000000038 - fVar6 * fVar6);
    param_2 = (ulong)(uint)((float)param_2 - fVar6 * *(float *)(unaff_x22 + 0xc));
    param_3 = CONCAT44((float)(param_3 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(unaff_x22 + 0x10) >> 0x20) * fVar6,
                       (float)param_3 - (float)*(undefined8 *)(unaff_x22 + 0x10) * fVar6);
  }
  uVar5 = (undefined4)(param_3 >> 0x20);
  uVar4 = FUN_0531f9e8(param_2,param_3,uVar5);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_060fda18(uVar4,param_3 & 0xffffffff,uVar5,uStack00000000000000cc,uStack00000000000000c8,
               uStack0000000000000040,uStack000000000000003c,&stack0x00000060,0);
  FUN_053201f8((undefined1 *)((long)&stack0x00000040 + 4));
  unaff_x19[1] = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  *unaff_x19 = uStack0000000000000044;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000058;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
  return 1;
}


