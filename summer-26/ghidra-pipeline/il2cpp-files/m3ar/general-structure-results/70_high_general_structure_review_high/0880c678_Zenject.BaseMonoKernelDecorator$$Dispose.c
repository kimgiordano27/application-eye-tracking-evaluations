/*
FUNCTION_NAME: Zenject.BaseMonoKernelDecorator$$Dispose
ENTRY_POINT: 0880c678
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Zenject_BaseMonoKernelDecorator__Dispose
               (undefined4 param_1,undefined4 param_2,float param_3,float param_4,long param_5,
               undefined4 *param_6)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  long lVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uStack0000000000000014;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  if ((DAT_0955c080 & 1) == 0) {
    FUN_0403162c(PTR_DAT_0900d520);
    FUN_0403162c(PTR_DAT_08f8c7a8);
    DAT_0955c080 = 1;
  }
  _iStack0000000000000018 = 0;
  plVar11 = (long *)FUN_08809944(param_5);
  puVar3 = PTR_DAT_0900d520;
  if (plVar11 == (long *)0x0) {
    return;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_0900d520 + 0x130);
  if (*(byte *)(*plVar11 + 0x130) < bVar2) {
    return;
  }
  if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0900d520) {
    return;
  }
  plVar12 = (long *)FUN_087a8250(plVar11,0);
  if (plVar12 == (long *)0x0) goto LAB_0880cc14;
  iVar5 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*param_6,*(undefined8 *)(*plVar12 + 0x200));
  FUN_0880cc18(param_5,*param_6,(long)&stack0x00000018 + 4,&stack0x00000018);
  lVar13 = *(long *)puVar3;
  iVar9 = iStack000000000000001c;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar13 = *(long *)puVar3;
  }
  if (iVar9 == *(int *)(*(long *)(lVar13 + 0xb8) + 0xa0)) {
    return;
  }
  uVar14 = (**(code **)(*plVar12 + 0x2f8))(plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x300));
  if ((uVar14 & 1) == 0) {
    uStack0000000000000014 = 0;
  }
  else {
    uStack0000000000000014 =
         UnityEngine_Networking_UnityWebRequest__get_uploadHandler(plVar11,iVar9,0);
  }
  iVar6 = FUN_086c7430(plVar12,iVar9,0);
  uVar14 = _iStack0000000000000018;
  iVar8 = iStack0000000000000018;
  iVar7 = FUN_086c7430(plVar12,_iStack0000000000000018 & 0xffffffff,0);
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar13);
    lVar13 = *(long *)puVar3;
  }
  iVar1 = 0;
  if (iVar8 != *(int *)(*(long *)(lVar13 + 0xb8) + 0xa0)) {
    iVar1 = iVar7;
  }
  iVar8 = FUN_086c7430(plVar12,iVar9,0);
  lVar13 = FUN_087abce8(plVar11,iVar9,0);
  if ((iVar6 < 1) || (lVar13 == 0)) {
    lVar13 = FUN_087a8250(plVar11,0);
    if (lVar13 == 0) goto LAB_0880cc14;
    iVar6 = FUN_086c7430(lVar13,iVar5,0);
    if (0 < iVar6) {
      lVar13 = FUN_087abce8(plVar11,iVar5,0);
      lVar15 = *(long *)puVar3;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_0408f364(lVar15);
        lVar15 = *(long *)puVar3;
      }
      lVar18 = *(long *)PTR_DAT_08f8c7a8;
      uVar19 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 200);
      iVar7 = *(int *)(lVar18 + 0xe4);
      goto joined_r0x0880c8d4;
    }
    fVar22 = 15.0;
    param_3 = 15.0;
  }
  else {
    lVar15 = *(long *)puVar3;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar15 = *(long *)puVar3;
    }
    lVar18 = *(long *)PTR_DAT_08f8c7a8;
    uVar19 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 200);
    iVar7 = *(int *)(lVar18 + 0xe4);
joined_r0x0880c8d4:
    if (iVar7 == 0) {
      thunk_FUN_0408f364(lVar18);
    }
    lVar15 = FUN_0873f3b4(lVar13,uVar19,0,0);
    lVar13 = FUN_0873f3b4(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb8),0,0);
    if ((lVar13 == 0) || (FUN_086f574c(lVar13,0), lVar15 == 0)) goto LAB_0880cc14;
    fVar22 = param_3;
    FUN_086f574c(lVar15,0);
    fVar22 = fVar22 / (float)iVar6;
  }
  iVar8 = iVar8 + (uStack0000000000000014 & 1);
  if (iVar1 < iVar8) {
    plVar16 = (long *)plVar11[0x69];
    if (plVar16 == (long *)0x0) goto LAB_0880cc14;
    uVar19 = (**(code **)(*plVar16 + 0x988))(plVar16,*(undefined8 *)(*plVar16 + 0x990));
    fVar20 = (float)FUN_0874e534(param_1,param_2,uVar19,0);
    if (DAT_09539c12 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539c12 = '\x01';
    }
    fVar20 = (fVar20 - param_3) / fVar22;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar17 = INFINITY;
    iVar6 = -0x80000000;
    if ((float)(int)fVar20 != INFINITY) {
      iVar6 = (int)fVar20;
    }
    if (iVar6 < iVar8) {
      iVar8 = FUN_086c7430(plVar12,iVar9,0);
      if ((iVar1 < iVar8) && (iVar8 != iVar6)) {
        iVar7 = iVar8;
        do {
          iVar9 = (**(code **)(*plVar12 + 0x2c8))(plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x2d0));
          iVar8 = iVar7 + -1;
          if (iVar8 <= iVar1) break;
          bVar4 = iVar6 + 1 != iVar7;
          iVar7 = iVar8;
        } while (bVar4);
      }
      if ((iVar9 != iVar5) && (lVar13 = FUN_087abce8(plVar11,iVar9,0), lVar13 != 0)) {
        lVar15 = FUN_088099c0(param_5);
        if (lVar15 != 0) {
          lVar15 = *(long *)(lVar15 + 0x328);
          FUN_086f7aa0(lVar13,0);
          FUN_0874e780(lVar15,0);
          if (lVar15 != 0) {
            fVar20 = fVar17;
            fVar21 = param_4;
            FUN_086f7b5c(lVar15,0);
            param_4 = param_4 + fVar17;
            if ((fVar20 < param_4) && (FUN_086f7b5c(lVar15,0), param_4 < fVar21 + fVar20)) {
              *(float *)(param_5 + 0x6c) = param_4;
            }
            goto LAB_0880cb70;
          }
        }
LAB_0880cc14:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
LAB_0880cb70:
      uVar10 = (**(code **)(*plVar12 + 0x2c8))(plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x2d0));
      param_6[1] = uVar10;
      iVar9 = FUN_086c58ac(plVar12,iVar9,0);
      param_6[2] = iVar9 + 1;
      *(float *)(param_5 + 0x68) = param_3 + fVar22 * (float)iVar8;
      return;
    }
    *(float *)(param_5 + 0x68) = param_3 + fVar22 * (float)iVar8;
    if ((uStack0000000000000014 & 1) == 0) {
      uVar10 = (**(code **)(*plVar12 + 0x2c8))(plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x2d0));
      param_6[1] = uVar10;
      goto LAB_0880cbd4;
    }
  }
  else {
    *(float *)(param_5 + 0x68) = param_3 + fVar22 * (float)iVar1;
    if ((uStack0000000000000014 & 1) == 0) {
      uVar10 = (**(code **)(*plVar12 + 0x2c8))(plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x2d0));
      param_6[1] = uVar10;
      iVar5 = (**(code **)(*plVar12 + 0x2c8))
                        (plVar12,uVar14 & 0xffffffff,*(undefined8 *)(*plVar12 + 0x2d0));
      iVar6 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*param_6,*(undefined8 *)(*plVar12 + 0x200));
      if (iVar5 != iVar6) {
        uVar10 = FUN_086c58ac(plVar12,uVar14 & 0xffffffff,0);
        param_6[2] = uVar10;
        return;
      }
LAB_0880cbd4:
      iVar9 = FUN_086c58ac(plVar12,iVar9,0);
      param_6[2] = iVar9 + 1;
      return;
    }
  }
  param_6[1] = iVar9;
  param_6[2] = 0;
  return;
}


