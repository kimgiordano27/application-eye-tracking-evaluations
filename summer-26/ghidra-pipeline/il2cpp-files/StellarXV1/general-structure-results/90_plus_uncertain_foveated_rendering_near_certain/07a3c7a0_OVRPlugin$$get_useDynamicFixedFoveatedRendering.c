/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 07a3c7a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFixedFoveatedRendering
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  ulong uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s10;
  float fVar11;
  undefined8 unaff_d11;
  float in_stack_00000020;
  float in_stack_00000030;
  float in_stack_00000040;
  
  fVar4 = (float)FUN_07a3caa8();
  if (DAT_098855ad == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098855ad = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (0 < (int)unaff_x19[10]) {
    lVar2 = 0;
    uVar3 = 0;
    fVar9 = (float)unaff_d11 + in_stack_00000040 * in_stack_00000020;
    fVar10 = (float)((ulong)unaff_d11 >> 0x20) + in_stack_00000030 * in_stack_00000020;
    fVar11 = unaff_s10 + unaff_s8 * in_stack_00000020;
    fVar4 = SQRT((fVar11 - param_3) * (fVar11 - param_3) +
                 (fVar9 - fVar4) * (fVar9 - fVar4) + (fVar10 - param_2) * (fVar10 - param_2));
    fVar7 = fVar10 + in_stack_00000030 * fVar4 * 0.5;
    do {
      fVar6 = fVar10;
      fVar8 = fVar11;
      uVar5 = FUN_07a3cccc(CONCAT44(fVar10,fVar9),fVar10,fVar11,
                           CONCAT44(fVar7,fVar9 + in_stack_00000040 * fVar4 * 0.5),fVar7,
                           fVar11 + unaff_s8 * fVar4 * 0.5);
      lVar1 = unaff_x19[7];
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar1 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar1 = lVar1 + lVar2;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0xc;
      *(undefined4 *)(lVar1 + 0x20) = uVar5;
      *(float *)(lVar1 + 0x24) = fVar6;
      *(float *)(lVar1 + 0x28) = fVar8;
    } while ((long)uVar3 < (long)(int)unaff_x19[10]);
  }
  (**(code **)(*unaff_x19 + 0x1c8))();
  return;
}


