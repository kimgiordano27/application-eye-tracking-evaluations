/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 090837dc
PROGRAM: Hyper-libil2cpp.so
SCORE: 103
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFixedFoveatedRenderingSupported
               (undefined4 param_1,float param_2,float param_3,undefined4 param_4,long param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  undefined4 uStack000000000000006c;
  
  if (DAT_0b32d23b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b32d23b = '\x01';
  }
  puVar1 = PTR_DAT_0ac0def8;
  lVar3 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
  fVar12 = param_2;
  fVar13 = param_3;
  fStack0000000000000014 =
       (float)FUN_0a16adac(param_1,param_2,param_3,param_4,*(undefined4 *)(lVar3 + 0x48),
                           *(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x50),0);
  if (DAT_0b31f3e4 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e4 = '\x01';
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar6 = param_2;
  fVar8 = param_3;
  fVar4 = (float)FUN_0a16adac(param_1,param_2,param_3,param_4,*(undefined4 *)(lVar3 + 0x18),
                              *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),0);
  fStack000000000000000c = fVar6;
  if (DAT_0b31f3e4 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e4 = '\x01';
  }
  fVar6 = fStack0000000000000014;
  fStack000000000000001c = param_2;
  uStack000000000000006c = param_4;
  if (*(long *)(param_5 + 0x78) != 0) {
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    fVar11 = *(float *)(lVar3 + 0x18);
    fVar10 = *(float *)(lVar3 + 0x1c);
    fVar9 = *(float *)(lVar3 + 0x20);
    fVar5 = (float)FUN_0a12f64c(fVar13 * fVar9 + fStack0000000000000014 * fVar11 + fVar12 * fVar10,
                                *(long *)(param_5 + 0x78),0);
    fVar7 = -1.0;
    if (0.0 <= fVar5) {
      fVar7 = 1.0;
    }
    fVar6 = (float)FUN_0a168d24(fVar6,fVar12,fVar13,-(fVar7 * fVar4),
                                -(fVar7 * fStack000000000000000c),-(fVar7 * fVar8),ABS(fVar5),0);
    if (DAT_0b31f3e5 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b31f3e5 = '\x01';
    }
    uVar2 = uStack000000000000006c;
    fVar8 = fStack000000000000001c;
    fVar4 = fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
    if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar4) {
      fVar5 = fVar9 * fVar13 + fVar11 * fVar6 + fVar10 * fVar12;
      fVar6 = fVar6 - (fVar11 * fVar5) / fVar4;
      fVar12 = fVar12 - (fVar10 * fVar5) / fVar4;
      fVar13 = fVar13 - (fVar9 * fVar5) / fVar4;
    }
    if (DAT_0b31f3e6 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0a830);
      DAT_0b31f3e6 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((SQRT(fVar13 * fVar13 + fVar6 * fVar6 + fVar12 * fVar12) <= DAT_01df50c4) &&
       (DAT_0b31f3e7 == '\0')) {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    if (DAT_0b32d23b == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b32d23b = '\x01';
    }
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    FUN_0a16adac(param_1,fVar8,param_3,uVar2,*(undefined4 *)(lVar3 + 0x48),
                 *(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x50),0);
    FUN_0a16a4c4(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


