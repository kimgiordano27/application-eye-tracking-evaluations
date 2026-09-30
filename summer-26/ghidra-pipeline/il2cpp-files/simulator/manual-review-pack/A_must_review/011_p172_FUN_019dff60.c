/*
FUNCTION_NAME: FUN_019dff60
ENTRY_POINT: 019dff60
PROGRAM: simulator-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4
*/


void FUN_019dff60(undefined8 param_1,undefined8 param_2,long param_3,byte *param_4,long param_5,
                 ulong param_6,undefined8 param_7,long param_8,byte *param_9,long param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  int iVar14;
  float fVar15;
  double dVar16;
  double __x;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  
  puVar6 = PTR_DAT_03498448;
                    /* try { // try from 019dff60 to 01adff6b has its CatchHandler @ 019dfff8 */
  puVar12 = &local_b0;
                    /* try { // try from 019dff6c to 01ae0013 has its CatchHandler @ 019dff2c */
  if ((DAT_036c2c6a & 1) == 0) {
    FUN_018c48dc(PTR_DAT_03495fa0);
    FUN_018c48dc(PTR_DAT_03498250);
    FUN_018c48dc(PTR_DAT_03498448);
    DAT_036c2c6a = 1;
  }
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_018cd5b0();
    lVar8 = *(long *)puVar6;
  }
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (lVar8 == 0) goto LAB_019e03f4;
  uVar7 = FUN_02963f9c(lVar8,0);
  FUN_0296ab48(lVar8,0,uVar7,0);
  if ((param_6 & 1) != 0) {
    if (param_5 == 0) goto LAB_019e03f4;
    if ((*(int *)(param_5 + 0xa8) == 2) &&
       (iVar14 = *(int *)(param_5 + 0x10c) - (*(byte *)(param_5 + 0x111) & 1), 0 < iVar14)) {
      lVar8 = *(long *)puVar6;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_018cd5b0();
        lVar8 = *(long *)puVar6;
      }
      if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_019e03f4;
      FUN_029637f0(**(long **)(lVar8 + 0xb8),param_9,0);
      while( true ) {
        lVar8 = *(long *)puVar6;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_018cd5b0();
          lVar8 = *(long *)puVar6;
        }
        plVar9 = (long *)**(long **)(lVar8 + 0xb8);
        if (plVar9 == (long *)0x0) goto LAB_019e03f4;
        if (iVar14 == 0) break;
        FUN_029637f0(plVar9,param_10,0);
        iVar14 = iVar14 + -1;
      }
      param_9 = (byte *)(**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      lVar8 = **(long **)(*(long *)puVar6 + 0xb8);
      if (lVar8 == 0) goto LAB_019e03f4;
      uVar7 = FUN_02963f9c(lVar8,0);
      FUN_0296ab48(lVar8,0,uVar7,0);
    }
  }
  pbVar4 = param_4;
  if ((*param_4 & 1) == 0) {
    uVar10 = FUN_027f2390(param_9,0);
    if ((uVar10 & 1) == 0) {
      pbVar4 = param_9;
      if (param_9 == (byte *)0x0) goto LAB_019e03f4;
      goto LAB_019e0128;
    }
    iVar14 = 0;
  }
  else {
LAB_019e0128:
    iVar14 = *(int *)(pbVar4 + 0x10);
  }
  puVar5 = PTR_DAT_03495fa0;
  if ((*param_4 & 1) == 0) {
    if (param_10 == 0) goto LAB_019e03f4;
    puVar13 = (uint *)(param_10 + 0x10);
  }
  else {
    puVar13 = (uint *)(param_4 + 0x14);
  }
  if (param_5 == 0) goto LAB_019e03f4;
  uVar3 = *puVar13;
  fVar15 = (float)FUN_019ece7c(param_1,param_2,*(undefined4 *)(param_5 + 0xc0),
                               *(undefined4 *)(param_5 + 0xc4),*(undefined4 *)(param_5 + 0xb4),
                               *(undefined8 *)(param_5 + 0xb8),0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_018cd5b0();
  }
  fVar15 = fVar15 * (float)(int)uVar3;
  __x = (double)fVar15;
  dVar16 = modf(__x,&local_78);
  if (0.0 <= fVar15) {
    if (dVar16 == 0.5) {
      dVar16 = 1.0;
      goto LAB_019e01d0;
    }
    local_78 = (double)(long)(__x + 0.5);
  }
  else if (dVar16 == -0.5) {
    dVar16 = -1.0;
LAB_019e01d0:
    if (((long)local_78 & 1U) != 0) {
      local_78 = local_78 + dVar16;
    }
  }
  else {
    local_78 = (double)(long)(__x + -0.5);
  }
  uVar1 = 0x80000000;
  if (local_78 != INFINITY) {
    uVar1 = (int)local_78;
  }
  uVar2 = uVar3;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  }
  if ((param_6 & 1) == 0) {
    if (*(int *)(param_4 + 4) != 0) {
      plVar9 = (long *)UnityEngine_Rendering_AsyncGPUReadback__RequestIntoNativeArray<AffineTransform>
                                 ();
      uStack_a8 = *(undefined8 *)(param_4 + 8);
      local_b0 = *(undefined8 *)param_4;
      local_a0 = *(undefined8 *)(param_4 + 0x10);
LAB_019e02c0:
      uVar11 = FUN_019e0abc(plVar9,puVar12);
      if (*(int *)(*(long *)PTR_DAT_03498250 + 0xe0) == 0) {
        thunk_FUN_018cd5b0(*(long *)PTR_DAT_03498250);
      }
      FUN_019e0bc0(plVar9,uVar3 - uVar2,uVar11);
      goto LAB_019e02f4;
    }
    uVar1 = uVar2;
    if (0 < (int)(iVar14 - uVar3)) {
      fVar15 = ((float)(int)uVar2 / (float)(int)uVar3) * (float)iVar14;
      uVar1 = 0x80000000;
      if (fVar15 != INFINITY) {
        uVar1 = (int)fVar15;
      }
    }
    uVar11 = UnityEngine_Rendering_AsyncGPUReadback__RequestIntoNativeArray<AffineTransform>();
    if (((int)uVar2 < (int)uVar3) && ((int)uVar2 < iVar14)) {
      if (param_3 == 0) goto LAB_019e03f4;
      UnityEngine_Rendering_AsyncGPUReadback__RequestIntoNativeArray<AffineTransform>
                (uVar11,param_9,uVar2,(iVar14 - uVar1) + (-(*param_4 & 1) & uVar2),*param_4 & 1);
    }
    lVar8 = *(long *)puVar6;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_018cd5b0();
      lVar8 = *(long *)puVar6;
    }
    plVar9 = (long *)**(long **)(lVar8 + 0xb8);
    if (plVar9 == (long *)0x0) goto LAB_019e03f4;
    lVar8 = *plVar9;
  }
  else {
    lVar8 = *(long *)puVar6;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_018cd5b0();
      lVar8 = *(long *)puVar6;
    }
    if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_019e03f4;
    uVar11 = FUN_029637f0(**(long **)(lVar8 + 0xb8),param_9,0);
    iVar14 = *(int *)(param_4 + 4);
    plVar9 = (long *)UnityEngine_Rendering_AsyncGPUReadback__RequestIntoNativeArray<AffineTransform>
                               (uVar11,param_10,0,uVar2,*param_4 & 1);
    if (iVar14 != 0) {
      local_80 = *(undefined8 *)(param_4 + 0x10);
      uStack_88 = *(undefined8 *)(param_4 + 8);
      local_90 = *(undefined8 *)param_4;
      puVar12 = &local_90;
      goto LAB_019e02c0;
    }
LAB_019e02f4:
    if (plVar9 == (long *)0x0) goto LAB_019e03f4;
    lVar8 = *plVar9;
  }
  uVar11 = (**(code **)(lVar8 + 0x168))(plVar9,*(undefined8 *)(lVar8 + 0x170));
  if (param_8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x019e0340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_8 + 0x18))
              (*(undefined8 *)(param_8 + 0x40),uVar11,*(undefined8 *)(param_8 + 0x28));
    return;
  }
LAB_019e03f4:
                    /* WARNING: Subroutine does not return */
  FUN_018c4afc();
}


