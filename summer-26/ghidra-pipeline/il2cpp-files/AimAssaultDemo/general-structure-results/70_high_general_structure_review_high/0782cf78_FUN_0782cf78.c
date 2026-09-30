/*
FUNCTION_NAME: FUN_0782cf78
ENTRY_POINT: 0782cf78
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_5;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior
*/


void FUN_0782cf78(undefined8 param_1,undefined8 param_2,float param_3,float param_4,long param_5,
                 undefined4 *param_6)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_88;
  
  if ((DAT_0827241a & 1) == 0) {
    FUN_0373b518(
                Method_Unity_VisualScripting_ConnectionCollectionBase<ValueConnection,_ValueOutput,_ValueInput,_GraphElementCollection<ValueConnection>>_SingleOrDefaultWithDestination__
                );
    FUN_0373b518(PTR_DAT_07d97d38);
    DAT_0827241a = 1;
  }
  local_88 = 0;
  plVar12 = (long *)FUN_0782a230(param_5);
  puVar3 = 
  Method_Unity_VisualScripting_ConnectionCollectionBase<ValueConnection,_ValueOutput,_ValueInput,_GraphElementCollection<ValueConnection>>_SingleOrDefaultWithDestination__
  ;
  if (plVar12 == (long *)0x0) {
    return;
  }
  bVar2 = *(byte *)(*(long *)
                     Method_Unity_VisualScripting_ConnectionCollectionBase<ValueConnection,_ValueOutput,_ValueInput,_GraphElementCollection<ValueConnection>>_SingleOrDefaultWithDestination__
                   + 0x130);
  if (*(byte *)(*plVar12 + 0x130) < bVar2) {
    return;
  }
  if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)
       Method_Unity_VisualScripting_ConnectionCollectionBase<ValueConnection,_ValueOutput,_ValueInput,_GraphElementCollection<ValueConnection>>_SingleOrDefaultWithDestination__
     ) {
    plVar12 = (long *)0x0;
  }
  if (plVar12 == (long *)0x0) {
    return;
  }
  plVar13 = (long *)FUN_077cbe38(plVar12,0);
  if (plVar13 == (long *)0x0) goto LAB_0782d55c;
  iVar5 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*param_6,*(undefined8 *)(*plVar13 + 0x200));
  FUN_0782d560(param_5,*param_6,(long)&local_88 + 4,&local_88);
  lVar14 = *(long *)puVar3;
  iVar10 = local_88._4_4_;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar14 = *(long *)puVar3;
  }
  if (iVar10 == *(int *)(*(long *)(lVar14 + 0xb8) + 0x98)) {
    return;
  }
  uVar15 = (**(code **)(*plVar13 + 0x2f8))(plVar13,iVar10,*(undefined8 *)(*plVar13 + 0x300));
  if ((uVar15 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_077cd738(plVar12,iVar10,0);
    uVar6 = uVar6 & 1;
  }
  iVar7 = UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition(plVar13,iVar10,0);
  uVar15 = local_88;
  iVar9 = (int)local_88;
  iVar8 = UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition
                    (plVar13,local_88 & 0xffffffff,0);
  lVar14 = *(long *)puVar3;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar14);
    lVar14 = *(long *)puVar3;
  }
  iVar1 = 0;
  if (iVar9 != *(int *)(*(long *)(lVar14 + 0xb8) + 0x98)) {
    iVar1 = iVar8;
  }
  iVar9 = UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition(plVar13,iVar10,0);
  if (iVar7 < 1) {
    lVar14 = FUN_077cbe38(plVar12,0);
    if (lVar14 == 0) goto LAB_0782d55c;
    iVar7 = UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition(lVar14,iVar5,0);
    if (0 < iVar7) {
      uVar16 = FUN_077cf8e4(plVar12,iVar5,0);
      lVar14 = *(long *)puVar3;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar14);
        lVar14 = *(long *)puVar3;
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0xc0);
      if (*(int *)(*(long *)PTR_DAT_07d97d38 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar14 = FUN_07759a8c(uVar16,uVar19,0,0);
      lVar17 = FUN_07759a8c(uVar16,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb0),0,0);
      if (lVar17 == 0) goto LAB_0782d55c;
      FUN_07712e00(lVar17,0);
      goto joined_r0x0782d298;
    }
    fVar23 = 15.0;
    param_3 = 15.0;
  }
  else {
    uVar16 = FUN_077cf8e4(plVar12,iVar10,0);
    lVar14 = *(long *)puVar3;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar14);
      lVar14 = *(long *)puVar3;
    }
    uVar19 = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0xc0);
    if (*(int *)(*(long *)PTR_DAT_07d97d38 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar14 = FUN_07759a8c(uVar16,uVar19,0,0);
    lVar17 = FUN_07759a8c(uVar16,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb0),0,0);
    if (lVar17 == 0) goto LAB_0782d55c;
    FUN_07712e00(lVar17,0);
joined_r0x0782d298:
    if (lVar14 == 0) goto LAB_0782d55c;
    fVar23 = param_3;
    FUN_07712e00(lVar14,0);
    fVar23 = fVar23 / (float)iVar7;
  }
  iVar9 = iVar9 + uVar6;
  if (iVar1 < iVar9) {
    plVar18 = (long *)plVar12[0xa4];
    if (plVar18 == (long *)0x0) goto LAB_0782d55c;
    uVar16 = (**(code **)(*plVar18 + 0x9a8))(plVar18,*(undefined8 *)(*plVar18 + 0x9b0));
    fVar20 = (float)FUN_077699d4(param_1,param_2,uVar16,0);
    if (DAT_08252c4f == '\0') {
      FUN_0373b518(PTR_DAT_07d863e8);
      DAT_08252c4f = '\x01';
    }
    fVar20 = (fVar20 - param_3) / fVar23;
    if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar16 = 0x7f800000;
    iVar7 = -0x80000000;
    if ((float)(int)fVar20 != INFINITY) {
      iVar7 = (int)fVar20;
    }
    if (iVar7 < iVar9) {
      iVar9 = UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition(plVar13,iVar10,0);
      fVar20 = (float)uVar16;
      if ((iVar1 < iVar9) && (iVar9 != iVar7)) {
        iVar8 = iVar9;
        do {
          iVar10 = (**(code **)(*plVar13 + 0x2c8))(plVar13,iVar10,*(undefined8 *)(*plVar13 + 0x2d0))
          ;
          fVar20 = (float)uVar16;
          iVar9 = iVar8 + -1;
          if (iVar9 <= iVar1) break;
          bVar4 = iVar7 + 1 != iVar8;
          iVar8 = iVar9;
        } while (bVar4);
      }
      if ((iVar10 != iVar5) && (lVar14 = FUN_077cf8e4(plVar12,iVar10,0), lVar14 != 0)) {
        lVar17 = FUN_0782a230(param_5);
        if ((lVar17 != 0) && (*(long *)(lVar17 + 0x520) != 0)) {
          lVar17 = *(long *)(*(long *)(lVar17 + 0x520) + 0x4f8);
          FUN_07714a44(lVar14,0);
          FUN_07769ba4(lVar17,0);
          if (lVar17 != 0) {
            fVar22 = param_4;
            fVar21 = fVar20;
            FUN_07714b00(lVar17,0);
            param_4 = param_4 + fVar20;
            if ((fVar21 < param_4) && (FUN_07714b00(lVar17,0), param_4 < fVar22 + fVar21)) {
              *(float *)(param_5 + 0x6c) = param_4;
            }
            goto LAB_0782d4b8;
          }
        }
LAB_0782d55c:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
LAB_0782d4b8:
      uVar11 = (**(code **)(*plVar13 + 0x2c8))(plVar13,iVar10,*(undefined8 *)(*plVar13 + 0x2d0));
      param_6[1] = uVar11;
      iVar10 = FUN_076eff8c(plVar13,iVar10,0);
      param_6[2] = iVar10 + 1;
      *(float *)(param_5 + 0x68) = param_3 + fVar23 * (float)iVar9;
      return;
    }
    *(float *)(param_5 + 0x68) = param_3 + fVar23 * (float)iVar9;
    if (uVar6 == 0) {
      uVar11 = (**(code **)(*plVar13 + 0x2c8))(plVar13,iVar10,*(undefined8 *)(*plVar13 + 0x2d0));
      param_6[1] = uVar11;
      iVar10 = FUN_076eff8c(plVar13,iVar10,0);
      param_6[2] = iVar10 + 1;
      return;
    }
  }
  else {
    *(float *)(param_5 + 0x68) = param_3 + fVar23 * (float)iVar1;
    if (uVar6 == 0) {
      uVar11 = (**(code **)(*plVar13 + 0x2c8))(plVar13,iVar10,*(undefined8 *)(*plVar13 + 0x2d0));
      param_6[1] = uVar11;
      uVar11 = FUN_076eff8c(plVar13,uVar15 & 0xffffffff,0);
      param_6[2] = uVar11;
      return;
    }
  }
  param_6[1] = iVar10;
  param_6[2] = 0;
  return;
}


