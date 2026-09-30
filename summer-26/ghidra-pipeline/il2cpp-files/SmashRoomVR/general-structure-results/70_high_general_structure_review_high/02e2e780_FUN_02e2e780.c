/*
FUNCTION_NAME: FUN_02e2e780
ENTRY_POINT: 02e2e780
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


undefined8
FUN_02e2e780(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_03ff01d5 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01d5 = 1;
  }
  lVar4 = *(long *)(param_5 + 0x20);
  if (*(int *)(param_5 + 0x10) == 1) {
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_5 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_02e2ee24;
    *(undefined1 *)(lVar4 + 0x3a8) = 1;
    *(undefined1 *)(lVar4 + 0x309) = 1;
    uVar6 = FUN_02e218ec(lVar4,0);
    *(undefined4 *)(param_5 + 0x28) = uVar6;
    *(float *)(param_5 + 0x2c) = param_2;
    *(float *)(param_5 + 0x30) = param_3;
    if (*(long *)(lVar4 + 0x180) == 0) goto LAB_02e2ee24;
    fVar7 = (float)FUN_03928280(*(long *)(lVar4 + 0x180),0);
    param_2 = -param_2;
    param_3 = -param_3;
    *(float *)(param_5 + 0x34) = -fVar7;
    *(float *)(param_5 + 0x38) = param_2;
    *(float *)(param_5 + 0x3c) = param_3;
    lVar1 = FUN_0391c27c(lVar4,0);
    if (lVar1 == 0) goto LAB_02e2ee24;
    uVar6 = FUN_03928d34(lVar1,0);
    *(undefined4 *)(param_5 + 0x40) = uVar6;
    *(float *)(param_5 + 0x44) = param_2;
    *(float *)(param_5 + 0x48) = param_3;
    if (*(char *)(lVar4 + 0x270) != '\0') {
      uVar6 = FUN_02e2bdb0(lVar4,*(undefined8 *)(lVar4 + 0x98),*(undefined8 *)(lVar4 + 0x280),0);
      *(undefined4 *)(lVar4 + 0x2c4) = uVar6;
      *(float *)(lVar4 + 0x2c8) = param_2;
      *(float *)(lVar4 + 0x2cc) = param_3;
      uVar6 = FUN_02e21b34(lVar4,0);
      *(undefined4 *)(param_5 + 0x28) = uVar6;
      *(float *)(param_5 + 0x2c) = param_2;
      *(float *)(param_5 + 0x30) = param_3;
      fVar7 = (float)FUN_02e25b74(lVar4,*(undefined8 *)(lVar4 + 0x280),0);
      *(float *)(param_5 + 0x34) = -fVar7;
      *(float *)(param_5 + 0x38) = -param_2;
      *(float *)(param_5 + 0x3c) = -param_3;
    }
    fVar7 = *(float *)(param_5 + 0x28);
    fVar17 = *(float *)(param_5 + 0x2c);
    fVar18 = *(float *)(param_5 + 0x30);
    lVar1 = FUN_0391c27c(lVar4,0);
    if (lVar1 == 0) goto LAB_02e2ee24;
    fVar10 = *(float *)(param_5 + 0x38);
    fVar12 = *(float *)(param_5 + 0x3c);
    fVar8 = (float)FUN_03929a40(*(undefined4 *)(param_5 + 0x34),lVar1,0);
    fVar14 = fVar10;
    param_3 = fVar12;
    lVar1 = FUN_0391c27c(lVar4,0);
    if (lVar1 == 0) goto LAB_02e2ee24;
    fVar9 = (float)FUN_03928d34(lVar1,0);
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    fVar9 = (fVar7 + fVar8) - fVar9;
    fVar14 = (fVar17 + fVar10) - fVar14;
    param_3 = (fVar18 + fVar12) - param_3;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar14 = fVar14 * fVar14;
    param_4 = *(float *)(lVar4 + 0xcc);
    param_3 = param_3 * param_3;
    *(float *)(param_5 + 0x4c) = SQRT(param_3 + fVar9 * fVar9 + fVar14) / param_4;
    *(undefined4 *)(param_5 + 0x50) = 0;
    if (*(long *)(lVar4 + 0x78) == 0) goto LAB_02e2ee24;
    FUN_0395a82c(*(long *)(lVar4 + 0x78),0,0);
    if (*(long *)(lVar4 + 0x180) == 0) goto LAB_02e2ee24;
    uVar6 = FUN_039274a0(*(long *)(lVar4 + 0x180),0);
    *(undefined4 *)(param_5 + 0x54) = uVar6;
    *(float *)(param_5 + 0x58) = fVar14;
    *(float *)(param_5 + 0x5c) = param_3;
    *(float *)(param_5 + 0x60) = param_4;
  }
  fVar7 = *(float *)(param_5 + 0x4c);
  if (fVar7 <= *(float *)(param_5 + 0x50)) {
    if (lVar4 == 0) goto LAB_02e2ee24;
  }
  else {
    if (lVar4 == 0) goto LAB_02e2ee24;
    uVar5 = *(undefined8 *)(lVar4 + 0x98);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*(char *)(lVar4 + 0x270) == '\0') {
        uVar6 = FUN_02e218ec(lVar4,0);
      }
      else {
        uVar6 = FUN_02e21b34(lVar4,0);
      }
      fVar17 = *(float *)(param_5 + 0x50);
      *(undefined4 *)(param_5 + 0x28) = uVar6;
      *(float *)(param_5 + 0x2c) = fVar7;
      *(float *)(param_5 + 0x30) = param_3;
      fVar7 = (float)FUN_03925dbc(0);
      *(float *)(param_5 + 0x50) = fVar17 + fVar7;
      lVar1 = FUN_0391c27c(lVar4,0);
      uVar5 = *(undefined8 *)(param_5 + 0x40);
      fVar7 = *(float *)(param_5 + 0x48);
      uVar15 = *(undefined8 *)(param_5 + 0x28);
      fVar17 = *(float *)(param_5 + 0x30);
      lVar3 = FUN_0391c27c(lVar4,0);
      if (lVar3 != 0) {
        fVar8 = *(float *)(param_5 + 0x38);
        fVar10 = *(float *)(param_5 + 0x3c);
        fVar14 = (float)FUN_03929a40(*(undefined4 *)(param_5 + 0x34),fVar8,fVar10,lVar3,0);
        fVar12 = *(float *)(param_5 + 0x50) / *(float *)(param_5 + 0x4c);
        fVar18 = fVar12;
        if (1.0 < fVar12) {
          fVar18 = 1.0;
        }
        if (fVar12 < 0.0) {
          fVar18 = 0.0;
        }
        uVar2 = (ulong)(uint)fVar18;
        if (lVar1 != 0) {
          fVar9 = (float)uVar5;
          fVar12 = (float)((ulong)uVar5 >> 0x20);
          fVar12 = fVar12 + (((float)((ulong)uVar15 >> 0x20) + fVar8) - fVar12) * fVar18;
          uVar13 = (ulong)(uint)(fVar7 + ((fVar17 + fVar10) - fVar7) * fVar18);
          uVar11 = (ulong)(uint)fVar12;
          FUN_03928dd4(CONCAT44(fVar12,fVar9 + (((float)uVar15 + fVar14) - fVar9) * fVar18),uVar11,
                       uVar13,lVar1,0);
          lVar1 = FUN_0391c27c(lVar4,0);
          uVar6 = *(undefined4 *)(param_5 + 0x54);
          fVar18 = *(float *)(param_5 + 0x58);
          fVar8 = *(float *)(param_5 + 0x5c);
          fVar12 = *(float *)(param_5 + 0x60);
          uVar5 = FUN_02e2183c(lVar4,0);
          fVar7 = (float)FUN_03914490(uVar6,fVar18,fVar8,fVar12,uVar5,uVar11,uVar13,uVar2,0);
          fVar9 = *(float *)(lVar4 + 0x248);
          fVar14 = *(float *)(lVar4 + 0x240);
          fVar10 = *(float *)(lVar4 + 0x244);
          fVar17 = (float)FUN_03914250(*(undefined4 *)(lVar4 + 0x23c),fVar14,fVar10,fVar9,0);
          if (lVar1 != 0) {
            FUN_03928f54((fVar18 * fVar10 + fVar12 * fVar17 + fVar7 * fVar9) - fVar8 * fVar14,
                         (fVar8 * fVar17 + fVar12 * fVar14 + fVar18 * fVar9) - fVar7 * fVar10,
                         (fVar7 * fVar14 + fVar12 * fVar10 + fVar8 * fVar9) - fVar18 * fVar17,
                         ((fVar12 * fVar9 - fVar7 * fVar17) - fVar18 * fVar14) - fVar8 * fVar10,
                         lVar1,0);
            *(undefined8 *)(param_5 + 0x18) = *(undefined8 *)(lVar4 + 0x3a0);
            thunk_FUN_01b4f09c((undefined8 *)(param_5 + 0x18));
            *(undefined4 *)(param_5 + 0x10) = 1;
            return 1;
          }
        }
      }
      goto LAB_02e2ee24;
    }
  }
  *(undefined1 *)(lVar4 + 0x309) = 0;
  uVar5 = *(undefined8 *)(lVar4 + 0x98);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar5,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(long *)(lVar4 + 0x98) != 0) {
    if (*(char *)(*(long *)(lVar4 + 0x98) + 0xda) == '\0') {
      *(undefined1 *)(lVar4 + 0x3c9) = 1;
      uVar6 = FUN_03925ca4(0);
      *(undefined4 *)(lVar4 + 0x3cc) = uVar6;
    }
    fVar8 = (float)FUN_02e1e434(lVar4,0);
    fVar17 = param_4;
    fVar18 = fVar7;
    fVar14 = param_3;
    FUN_02e2183c(lVar4,0);
    fVar10 = (float)FUN_03914250(0);
    fVar12 = (param_3 * fVar10 + param_4 * fVar18 + fVar7 * fVar17) - fVar8 * fVar14;
    fVar9 = (fVar8 * fVar18 + param_4 * fVar14 + param_3 * fVar17) - fVar7 * fVar10;
    fVar16 = ((param_4 * fVar17 - fVar8 * fVar10) - fVar7 * fVar18) - param_3 * fVar14;
    lVar1 = FUN_0391c27c(lVar4,0);
    fVar14 = (float)FUN_03914250((fVar7 * fVar14 + param_4 * fVar10 + fVar8 * fVar17) -
                                 param_3 * fVar18,fVar12,fVar9,fVar16,0);
    fVar7 = fVar16;
    fVar17 = fVar9;
    fVar18 = fVar12;
    lVar3 = FUN_0391c27c(lVar4,0);
    if ((lVar3 != 0) && (fVar8 = (float)FUN_039274a0(lVar3,0), lVar1 != 0)) {
      FUN_03928f54((fVar12 * fVar17 + fVar16 * fVar8 + fVar14 * fVar7) - fVar9 * fVar18,
                   (fVar9 * fVar8 + fVar16 * fVar18 + fVar12 * fVar7) - fVar14 * fVar17,
                   (fVar14 * fVar18 + fVar16 * fVar17 + fVar9 * fVar7) - fVar12 * fVar8,
                   ((fVar16 * fVar7 - fVar14 * fVar8) - fVar12 * fVar18) - fVar9 * fVar17,lVar1,0);
      lVar1 = FUN_0391c27c(lVar4,0);
      fVar7 = *(float *)(param_5 + 0x28);
      fVar17 = *(float *)(param_5 + 0x2c);
      fVar18 = *(float *)(param_5 + 0x30);
      lVar3 = FUN_0391c27c(lVar4,0);
      if (lVar3 != 0) {
        fVar8 = *(float *)(param_5 + 0x38);
        fVar10 = *(float *)(param_5 + 0x3c);
        fVar14 = (float)FUN_03929a40(*(undefined4 *)(param_5 + 0x34),fVar8,fVar10,lVar3,0);
        if (lVar1 != 0) {
          FUN_03928dd4(fVar7 + fVar14,fVar17 + fVar8,fVar18 + fVar10,lVar1,0);
          FUN_02e2b2f8(lVar4,*(undefined8 *)(lVar4 + 0x98),0);
          return 0;
        }
      }
    }
  }
LAB_02e2ee24:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


