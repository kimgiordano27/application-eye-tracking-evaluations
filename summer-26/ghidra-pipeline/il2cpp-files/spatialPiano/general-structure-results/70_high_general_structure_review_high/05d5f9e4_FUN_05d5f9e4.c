/*
FUNCTION_NAME: FUN_05d5f9e4
ENTRY_POINT: 05d5f9e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_05d5f9e4(long param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_48;
  undefined1 local_44 [4];
  
  puVar1 = Method_OVRSpatialAnchor_ShareAsync__;
  if ((DAT_06bc394a & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f80);
    FUN_02f08768(Method_OVRSpatialAnchor_ShareAsync__);
    FUN_02f08768(Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    FUN_02f08768(Method_OVRTask_SetResult<bool>__);
    DAT_06bc394a = 1;
  }
  lVar4 = *(long *)puVar1;
  local_44[0] = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar1;
  }
  FUN_05c5cb44(local_44,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20),0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *(long *)(param_3 + 0xd8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar2 = FUN_060a5194(lVar4,0);
  iVar3 = FUN_060a5248(lVar4,0);
  if (*(int *)(param_3 + 0xe8) == 1) {
    iVar2 = *(int *)(param_3 + 0x160);
    iVar3 = *(int *)(param_3 + 0x164);
  }
  if (*(long *)(param_3 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_05c35d3c(*(long *)(param_3 + 0x1a0),0);
  fVar19 = (float)(int)param_4;
  fVar14 = (float)(int)((ulong)param_4 >> 0x20);
  if ((uVar5 & 1) == 0) {
    local_48 = (float)iVar2;
    fVar15 = (float)iVar3;
  }
  else {
    *(undefined1 *)(param_1 + 0x134) = 0;
    fVar15 = fVar14;
    local_48 = fVar19;
  }
  uVar5 = FUN_060a3f68(lVar4,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_3 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar5 = FUN_05c35d3c(*(long *)(param_3 + 0x1a0),0);
    if ((uVar5 & 1) == 0) {
      fVar7 = (float)FUN_060b61e4(0);
      fVar8 = (float)FUN_060b620c(0);
      fVar19 = fVar7 * fVar19;
      fVar14 = fVar8 * fVar14;
    }
    else {
      lVar6 = *(long *)(param_3 + 0x1a0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      fVar19 = (float)*(int *)(lVar6 + 0x34);
      fVar14 = (float)*(int *)(lVar6 + 0x38);
    }
  }
  fVar7 = (float)FUN_060a37f0(lVar4,0);
  fVar8 = (float)FUN_060a3978(lVar4,0);
  if (DAT_06bb42c0 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb42c0 = '\x01';
  }
  fVar17 = DAT_011b0568;
  fVar9 = ABS(fVar8);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar16 = **(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) * 8.0;
  fVar10 = fVar9 * DAT_011b0568;
  if (fVar9 * DAT_011b0568 <= fVar16) {
    fVar10 = fVar16;
  }
  fVar9 = 0.0;
  if (fVar10 <= ABS(0.0 - fVar8)) {
    fVar9 = 1.0 / fVar8;
  }
  uVar5 = FUN_060a41a4(lVar4,0);
  fVar10 = ABS(fVar7);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar18 = fVar10 * fVar17;
  if (fVar10 * fVar17 <= fVar16) {
    fVar18 = fVar16;
  }
  fVar17 = 0.0;
  if (fVar18 <= ABS(0.0 - fVar7)) {
    fVar17 = 1.0 / fVar7;
  }
  fVar10 = 1.0;
  if ((uVar5 & 1) == 0) {
    fVar10 = 0.0;
  }
  uVar5 = FUN_060fb560(0);
  puVar1 = Method_OVRTask_SetResult<bool>__;
  fVar17 = fVar8 * fVar17;
  fVar16 = 1.0 - fVar17;
  fVar18 = fVar17 * fVar9;
  fVar20 = fVar16 * fVar9;
  if ((uVar5 & 1) != 0) {
    fVar17 = fVar17 + fVar16;
    fVar16 = -fVar16;
    fVar18 = fVar18 + fVar20;
    fVar20 = -fVar20;
  }
  if (*(int *)(param_3 + 0xe8) == 1) {
    uVar11 = 0xbf800000;
    if ((param_5 & 1) == 0) {
      uVar11 = 0x3f800000;
    }
    if (*(int *)(*(long *)Method_OVRTask_SetResult<bool>__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05c41224(uVar11,fVar7,fVar8,fVar9,param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x44),0);
  }
  fVar7 = (float)FUN_060a401c(lVar4,0);
  fVar8 = *(float *)(param_3 + 0x168);
  uVar11 = FUN_060a401c(lVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (param_2 != 0) {
    FUN_05c41224(*(undefined4 *)(param_3 + 0x1e4),*(undefined4 *)(param_3 + 0x1e8),
                 *(undefined4 *)(param_3 + 0x1ec),0,param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38),0);
    FUN_05c41224(local_48,fVar15,1.0 / local_48 + 1.0,1.0 / fVar15 + 1.0,param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x3c),0);
    FUN_05c41224(fVar19,fVar14,1.0 / fVar19 + 1.0,1.0 / fVar14 + 1.0,param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34),0);
    FUN_05c41224(fVar16,fVar17,fVar20,fVar18,param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48),0);
    FUN_05c41224(fVar7 * fVar8,uVar11,0,fVar10,param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x4c),0);
    FUN_05c41224(fVar19,fVar14,1.0 / fVar19,1.0 / fVar14,param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x54),0);
    FUN_05c41350(param_2,*(long *)(*(long *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                  + 0xb8) + 0x108,*(undefined1 *)(param_3 + 0x13c),0);
    FUN_05c41224(*(undefined4 *)(param_3 + 0x140),*(undefined4 *)(param_3 + 0x144),
                 *(undefined4 *)(param_3 + 0x148),*(undefined4 *)(param_3 + 0x14c),param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x5c),0);
    FUN_05c41224(*(undefined4 *)(param_3 + 0x150),*(undefined4 *)(param_3 + 0x154),
                 *(undefined4 *)(param_3 + 0x158),*(undefined4 *)(param_3 + 0x15c),param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58),0);
    uVar11 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 200);
    if (DAT_06bbdb98 == '\0') {
      FUN_02f08768(PTR_DAT_067c9860);
      DAT_06bbdb98 = '\x01';
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_067c9860 + 0xb8);
    FUN_05c41224(*(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),
                 *(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),param_2,uVar11,0);
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    dVar13 = (double)Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize
                               ((double)(local_48 / fVar19),0x4000000000000000,0);
    uVar11 = FUN_050d65d8(-(float)dVar13,0,0);
    uVar12 = FUN_050d65d8(*(undefined4 *)(param_3 + 0x21c),0,0);
    fVar14 = (float)FUN_050d65d8(uVar11,uVar12,0);
    uVar11 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
    fVar19 = exp2f(fVar14);
    FUN_05c41224(fVar14,fVar19,0,0,param_2,uVar11,0);
    if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) == 0
       ) {
      thunk_FUN_02f6670c();
    }
    FUN_05d5f408(param_2,param_3,1,param_5 & 1);
    FUN_05c5cb50(local_44,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


