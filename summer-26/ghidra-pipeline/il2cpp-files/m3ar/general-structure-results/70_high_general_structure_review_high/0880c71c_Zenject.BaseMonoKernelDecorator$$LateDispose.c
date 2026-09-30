/*
FUNCTION_NAME: Zenject.BaseMonoKernelDecorator$$LateDispose
ENTRY_POINT: 0880c71c
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


void Zenject_BaseMonoKernelDecorator__LateDispose
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               float param_5,long *param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  long lVar13;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  int iVar14;
  long *unaff_x28;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uStack0000000000000014;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  iVar4 = (**(code **)(param_1 + 0x1f8))(param_6,param_7,*(undefined8 *)(param_1 + 0x200));
  FUN_0880cc18();
  lVar8 = *unaff_x28;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar8 = *unaff_x28;
  }
  if (iStack000000000000001c == *(int *)(*(long *)(lVar8 + 0xb8) + 0xa0)) {
    return;
  }
  uVar9 = (**(code **)(*param_6 + 0x2f8))
                    (param_6,iStack000000000000001c,*(undefined8 *)(*param_6 + 0x300));
  if ((uVar9 & 1) == 0) {
    uStack0000000000000014 = 0;
  }
  else {
    uStack0000000000000014 = UnityEngine_Networking_UnityWebRequest__get_uploadHandler();
  }
  iVar5 = FUN_086c7430(param_6,iStack000000000000001c,0);
  iVar6 = FUN_086c7430(param_6,iStack0000000000000018,0);
  lVar8 = *unaff_x28;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar8);
    lVar8 = *unaff_x28;
  }
  iVar1 = 0;
  if (iStack0000000000000018 != *(int *)(*(long *)(lVar8 + 0xb8) + 0xa0)) {
    iVar1 = iVar6;
  }
  iVar6 = FUN_086c7430(param_6,iStack000000000000001c,0);
  lVar8 = FUN_087abce8();
  if ((iVar5 < 1) || (lVar8 == 0)) {
    lVar8 = FUN_087a8250();
    if (lVar8 == 0) goto LAB_0880cc14;
    iVar5 = FUN_086c7430(lVar8,iVar4,0);
    if (0 < iVar5) {
      lVar8 = FUN_087abce8();
      lVar10 = *unaff_x28;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0408f364(lVar10);
        lVar10 = *unaff_x28;
      }
      lVar13 = *(long *)PTR_DAT_08f8c7a8;
      uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 200);
      iVar14 = *(int *)(lVar13 + 0xe4);
      goto joined_r0x0880c8d4;
    }
    fVar18 = 15.0;
    param_4 = 15.0;
  }
  else {
    lVar10 = *unaff_x28;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar10 = *unaff_x28;
    }
    lVar13 = *(long *)PTR_DAT_08f8c7a8;
    uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 200);
    iVar14 = *(int *)(lVar13 + 0xe4);
joined_r0x0880c8d4:
    if (iVar14 == 0) {
      thunk_FUN_0408f364(lVar13);
    }
    lVar10 = FUN_0873f3b4(lVar8,uVar15,0,0);
    lVar8 = FUN_0873f3b4(lVar8,*(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0xb8),0,0);
    if ((lVar8 == 0) || (FUN_086f574c(lVar8,0), lVar10 == 0)) goto LAB_0880cc14;
    fVar18 = param_4;
    FUN_086f574c(lVar10,0);
    fVar18 = fVar18 / (float)iVar5;
  }
  uVar2 = uStack0000000000000014;
  iVar6 = iVar6 + (uStack0000000000000014 & 1);
  if (iVar1 < iVar6) {
    plVar11 = *(long **)(unaff_x23 + 0x348);
    if (plVar11 == (long *)0x0) goto LAB_0880cc14;
    uVar15 = (**(code **)(*plVar11 + 0x988))(plVar11,*(undefined8 *)(*plVar11 + 0x990));
    fVar16 = (float)FUN_0874e534(uVar15,0);
    if (DAT_09539c12 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539c12 = '\x01';
    }
    fVar16 = (fVar16 - param_4) / fVar18;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar12 = INFINITY;
    iVar5 = -0x80000000;
    if ((float)(int)fVar16 != INFINITY) {
      iVar5 = (int)fVar16;
    }
    if (iVar5 < iVar6) {
      iVar6 = FUN_086c7430(param_6,iStack000000000000001c,0);
      if ((iVar1 < iVar6) && (iVar6 != iVar5)) {
        iVar14 = iVar6;
        do {
          iStack000000000000001c =
               (**(code **)(*param_6 + 0x2c8))
                         (param_6,iStack000000000000001c,*(undefined8 *)(*param_6 + 0x2d0));
          iVar6 = iVar14 + -1;
          if (iVar6 <= iVar1) break;
          bVar3 = iVar5 + 1 != iVar14;
          iVar14 = iVar6;
        } while (bVar3);
      }
      if ((iStack000000000000001c != iVar4) && (lVar8 = FUN_087abce8(), lVar8 != 0)) {
        lVar10 = FUN_088099c0();
        if (lVar10 != 0) {
          lVar10 = *(long *)(lVar10 + 0x328);
          FUN_086f7aa0(lVar8,0);
          FUN_0874e780(lVar10,0);
          if (lVar10 != 0) {
            fVar16 = fVar12;
            fVar17 = param_5;
            FUN_086f7b5c(lVar10,0);
            param_5 = param_5 + fVar12;
            if ((fVar16 < param_5) && (FUN_086f7b5c(lVar10,0), param_5 < fVar17 + fVar16)) {
              *(float *)(unaff_x20 + 0x6c) = param_5;
            }
            goto LAB_0880cb70;
          }
        }
LAB_0880cc14:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
LAB_0880cb70:
      uVar7 = (**(code **)(*param_6 + 0x2c8))
                        (param_6,iStack000000000000001c,*(undefined8 *)(*param_6 + 0x2d0));
      unaff_x19[1] = uVar7;
      iVar4 = FUN_086c58ac(param_6,iStack000000000000001c,0);
      unaff_x19[2] = iVar4 + 1;
      *(float *)(unaff_x20 + 0x68) = param_4 + fVar18 * (float)iVar6;
      return;
    }
    *(float *)(unaff_x20 + 0x68) = param_4 + fVar18 * (float)iVar6;
    if ((uVar2 & 1) == 0) {
      uVar7 = (**(code **)(*param_6 + 0x2c8))
                        (param_6,iStack000000000000001c,*(undefined8 *)(*param_6 + 0x2d0));
      unaff_x19[1] = uVar7;
      goto LAB_0880cbd4;
    }
  }
  else {
    *(float *)(unaff_x20 + 0x68) = param_4 + fVar18 * (float)iVar1;
    if ((uStack0000000000000014 & 1) == 0) {
      uVar7 = (**(code **)(*param_6 + 0x2c8))
                        (param_6,iStack000000000000001c,*(undefined8 *)(*param_6 + 0x2d0));
      unaff_x19[1] = uVar7;
      iVar4 = (**(code **)(*param_6 + 0x2c8))
                        (param_6,iStack0000000000000018,*(undefined8 *)(*param_6 + 0x2d0));
      iVar5 = (**(code **)(*param_6 + 0x1f8))(param_6,*unaff_x19,*(undefined8 *)(*param_6 + 0x200));
      if (iVar4 != iVar5) {
        uVar7 = FUN_086c58ac(param_6,iStack0000000000000018,0);
        unaff_x19[2] = uVar7;
        return;
      }
LAB_0880cbd4:
      iVar4 = FUN_086c58ac(param_6,iStack000000000000001c,0);
      unaff_x19[2] = iVar4 + 1;
      return;
    }
  }
  unaff_x19[1] = iStack000000000000001c;
  unaff_x19[2] = 0;
  return;
}


