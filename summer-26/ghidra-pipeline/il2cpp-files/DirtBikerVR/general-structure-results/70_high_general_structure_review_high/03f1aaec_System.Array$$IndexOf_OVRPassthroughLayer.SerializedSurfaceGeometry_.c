/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03f1aaec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  long unaff_x19;
  int unaff_w20;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  double dVar14;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float unaff_s8;
  float fVar19;
  float unaff_s9;
  float fVar20;
  float fVar21;
  float unaff_s10;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  double unaff_d13;
  float fVar25;
  double unaff_d14;
  float fVar26;
  float unaff_s15;
  undefined8 in_stack_00000010;
  long in_stack_00000038;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  float in_stack_000000d0;
  double in_stack_000000e8;
  
  do {
    FUN_03a8a718();
    *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
    do {
      uVar23 = **(undefined8 **)(*unaff_x24 + 0xb8);
      fVar24 = *(float *)(*(undefined8 **)(*unaff_x24 + 0xb8) + 1);
      if (*(char *)(unaff_x28 + 0xe27) == '\0') {
        FUN_03a8a718(PTR_DAT_08486c60);
        *(undefined1 *)(unaff_x28 + 0xe27) = 1;
      }
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      fVar24 = unaff_s8 - fVar24;
      in_stack_000000d0 = in_stack_000000d0 - (float)uVar23;
      fVar15 = 0.0 - (float)((ulong)uVar23 >> 0x20);
      uVar17 = 0x447a0000;
      fVar24 = SQRT(fVar24 * fVar24 + in_stack_000000d0 * in_stack_000000d0 + fVar15 * fVar15) *
               1000.0;
      dVar14 = modf((double)fVar24,&stack0x000000e8);
      if (0.0 <= fVar24) {
        if (dVar14 == unaff_d14) {
          fVar24 = 1.0;
          goto LAB_03f1abb8;
        }
        fVar15 = (float)(int)(fVar24 + 0.5);
      }
      else if (dVar14 == unaff_d13) {
        fVar24 = -1.0;
LAB_03f1abb8:
        fVar15 = (float)in_stack_000000e8;
        uVar17 = (ulong)(uint)fVar15;
        if (((long)in_stack_000000e8 & 1U) != 0) {
          fVar15 = fVar15 + fVar24;
        }
      }
      else {
        fVar15 = (float)(int)(fVar24 + -0.5);
      }
      iVar6 = FUN_04d8be94();
      if ((iVar6 == unaff_w20) && ((unaff_s15 < unaff_s10 || (unaff_s15 < fVar15)))) {
        FUN_04d8bee8();
      }
      iVar6 = FUN_04d8be94();
      if ((iVar6 == unaff_w20) && ((unaff_s15 < unaff_s9 || (unaff_s15 < fVar15)))) {
        FUN_04d8bee8();
      }
      iVar6 = FUN_04d8be94();
      if ((iVar6 == unaff_w20) && ((unaff_s15 < unaff_s9 || (unaff_s15 < unaff_s10)))) {
        FUN_04d8bee8();
      }
      unaff_w29 = unaff_w29 + 3;
      if (*(int *)(unaff_x19 + 0x18) <= unaff_w29) {
        do {
          do {
            do {
              unaff_w23 = unaff_w23 + 3;
              if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) {
                do {
                  do {
                    in_stack_00000078 = in_stack_00000078 + 1;
                    if ((long)((int)*(ulong *)(in_stack_00000038 + 0x18) + -1) <=
                        (long)in_stack_00000078) {
                      lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e660);
                      FUN_07c6e968(lVar8,0);
                      lVar9 = FUN_04561560(in_stack_00000010,*(undefined8 *)PTR_DAT_0848e898);
                      if ((lVar9 != 0) && (FUN_07c6dd58(lVar9,lVar8,0), lVar8 != 0)) {
                        FUN_07c74b98(lVar8,0);
                        uVar23 = FUN_04ed8888();
                        FUN_07c72230(lVar8,uVar23,0);
                        puVar2 = PTR_DAT_0848e8c0;
                        uVar23 = FUN_04ed36a0(in_stack_00000058,*(undefined8 *)PTR_DAT_0848e8c0);
                        FUN_07c72434(lVar8,uVar23,0);
                        uVar23 = FUN_04ed36a0(in_stack_00000060,*(undefined8 *)puVar2);
                        FUN_07c7258c(lVar8,uVar23,0);
                        uVar23 = FUN_04ceb200(in_stack_00000068,*(undefined8 *)PTR_DAT_0848ed48);
                        FUN_07c72638(lVar8,uVar23,0);
                        if (unaff_x19 != 0) {
                          uVar23 = FUN_04d8dc3c();
                          FUN_07c73ad4(lVar8,uVar23,0);
                          FUN_07c74ba0(lVar8,0);
                          FUN_07c74c60(lVar8,0);
                          FUN_07c74d20(lVar8,0);
                          return;
                        }
                      }
                      goto LAB_03f1ae44;
                    }
                    if ((*(ulong *)(in_stack_00000038 + 0x18) & 0xffffffff) <= in_stack_00000078) {
LAB_03f1ae48:
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c8();
                    }
                  } while (*(char *)(in_stack_00000038 + in_stack_00000078 + 0x20) == '\0');
                  if (*(uint *)(in_stack_00000070 + 0x18) <= in_stack_00000078) goto LAB_03f1ae48;
                  uVar17 = 0x447a0000;
                  fVar24 = *(float *)(in_stack_00000070 + in_stack_00000078 * 8 + 0x20) * 1000.0;
                  dVar14 = modf((double)fVar24,&stack0x000000e8);
                  if (0.0 <= fVar24) {
                    if (dVar14 == unaff_d14) {
                      fVar24 = 1.0;
                      goto LAB_03f19508;
                    }
                    in_stack_00000088._4_4_ = (float)(int)(fVar24 + 0.5);
                  }
                  else if (dVar14 == unaff_d13) {
                    fVar24 = -1.0;
LAB_03f19508:
                    in_stack_00000088._4_4_ = (float)in_stack_000000e8;
                    uVar17 = (ulong)(uint)in_stack_00000088._4_4_;
                    if (((long)in_stack_000000e8 & 1U) != 0) {
                      in_stack_00000088._4_4_ = in_stack_00000088._4_4_ + fVar24;
                    }
                  }
                  else {
                    in_stack_00000088._4_4_ = (float)(int)(fVar24 + -0.5);
                  }
                  if (unaff_x19 == 0) goto LAB_03f1ae44;
                } while (*(int *)(unaff_x19 + 0x18) < 1);
                unaff_w23 = 0;
                unaff_s15 = in_stack_00000088._4_4_;
              }
              FUN_04d8be94();
              FUN_04ed6994();
              FUN_04d8be94();
              FUN_04ed6994();
              if (*(char *)(unaff_x27 + 0xd8f) == '\0') {
                FUN_03a8a718();
                *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
              }
              if (*(char *)(unaff_x28 + 0xe27) == '\0') {
                FUN_03a8a718(PTR_DAT_08486c60);
                *(undefined1 *)(unaff_x28 + 0xe27) = 1;
              }
              if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_04d8be94();
              FUN_04ed6994();
              FUN_04d8be94();
              FUN_04ed6994();
              if (*(char *)(unaff_x27 + 0xd8f) == '\0') {
                FUN_03a8a718();
                *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
              }
              if (*(char *)(unaff_x28 + 0xe27) == '\0') {
                FUN_03a8a718(PTR_DAT_08486c60);
                *(undefined1 *)(unaff_x28 + 0xe27) = 1;
              }
              if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_04d8be94();
              FUN_04ed6994();
              FUN_04d8be94();
              FUN_04ed6994();
              if (*(char *)(unaff_x27 + 0xd8f) == '\0') {
                FUN_03a8a718();
                *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
              }
              if (*(char *)(unaff_x28 + 0xe27) == '\0') {
                FUN_03a8a718(PTR_DAT_08486c60);
                *(undefined1 *)(unaff_x28 + 0xe27) = 1;
              }
              if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              lVar8 = FUN_04de82e0(in_stack_00000080,in_stack_00000078 & 0xffffffff,
                                   *(undefined8 *)PTR_DAT_0848e728);
              uVar3 = FUN_04d8be94();
              if (lVar8 == 0) goto LAB_03f1ae44;
              uVar7 = FUN_04d8c50c(lVar8,uVar3,*(undefined8 *)PTR_DAT_0848c618);
              if ((uVar7 & 1) != 0) {
                uVar3 = FUN_04d8be94();
                FUN_04d8be94();
                FUN_04ed6994();
                iVar6 = FUN_03f1ae4c(uVar3);
                iVar4 = FUN_04d8be94();
                if (iVar6 == -1) {
                  FUN_04d8be94();
                  uVar3 = FUN_04ed6994();
                  lVar8 = *(long *)(unaff_x25 + 0x10);
                  *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
                  if (lVar8 == 0) goto LAB_03f1ae44;
                  uVar1 = *(uint *)(unaff_x25 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)uVar1 * 0xc;
                    *(uint *)(unaff_x25 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + 0x20) = uVar3;
                    *(int *)(lVar8 + 0x24) = (int)uVar17;
                    *(float *)(lVar8 + 0x28) = param_3;
                    uVar7 = uVar17;
                  }
                  else {
                    FUN_04ed6cc4();
                    uVar7 = uVar17;
                  }
                  uVar3 = FUN_04d8be94();
                  FUN_04ed18a4(in_stack_00000060,uVar3,*(undefined8 *)PTR_DAT_0848d680);
                  uVar17 = uVar7;
                  uVar3 = FUN_04e87140(in_stack_00000050,in_stack_00000078,
                                       *(undefined8 *)PTR_DAT_084895f0);
                  lVar8 = *(long *)(in_stack_00000060 + 0x10);
                  lVar9 = *(long *)PTR_DAT_0848d6a8;
                  *(int *)(in_stack_00000060 + 0x1c) = *(int *)(in_stack_00000060 + 0x1c) + 1;
                  if (lVar8 == 0) goto LAB_03f1ae44;
                  uVar1 = *(uint *)(in_stack_00000060 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)uVar1 * 8;
                    *(uint *)(in_stack_00000060 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + 0x20) = uVar3;
                    *(int *)(lVar8 + 0x24) = (int)uVar7;
                  }
                  else {
                    uVar17 = uVar7 & 0xffffffff;
                    FUN_04ed1ba4(in_stack_00000060,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar3 = FUN_04d8be94();
                  uVar3 = FUN_04ed18a4(in_stack_00000058,uVar3,*(undefined8 *)PTR_DAT_0848d680);
                  lVar8 = *(long *)(in_stack_00000058 + 0x10);
                  lVar9 = *(long *)PTR_DAT_0848d6a8;
                  *(int *)(in_stack_00000058 + 0x1c) = *(int *)(in_stack_00000058 + 0x1c) + 1;
                  if (lVar8 == 0) goto LAB_03f1ae44;
                  uVar1 = *(uint *)(in_stack_00000058 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)uVar1 * 8;
                    *(uint *)(in_stack_00000058 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + 0x20) = uVar3;
                    *(int *)(lVar8 + 0x24) = (int)uVar17;
                  }
                  else {
                    FUN_04ed1ba4(in_stack_00000058,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar3 = FUN_04d8be94();
                  uVar3 = FUN_04ce9358(in_stack_00000068,uVar3,*(undefined8 *)PTR_DAT_0848f2a8);
                  lVar8 = *(long *)(in_stack_00000068 + 0x10);
                  lVar9 = *(long *)PTR_DAT_0848c610;
                  *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
                  if (lVar8 == 0) goto LAB_03f1ae44;
                  uVar1 = *(uint *)(in_stack_00000068 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                    *(uint *)(in_stack_00000068 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + 0x20) = uVar3;
                    *(int *)(lVar8 + 0x24) = (int)uVar17;
                    *(float *)(lVar8 + 0x28) = param_3;
                    *(float *)(lVar8 + 0x2c) = param_4;
                  }
                  else {
                    FUN_04ce967c(in_stack_00000068,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  if (0 < *(int *)(unaff_x19 + 0x18)) {
                    iVar6 = 0;
                    do {
                      FUN_04d8be94();
                      fVar15 = (float)FUN_04ed6994();
                      FUN_04d8be94();
                      FUN_04ed6994();
                      fVar24 = param_3;
                      if (*(char *)(unaff_x27 + 0xd8f) == '\0') {
                        FUN_03a8a718();
                        *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
                      }
                      pfVar10 = *(float **)(*unaff_x24 + 0xb8);
                      fVar16 = *pfVar10;
                      fVar11 = pfVar10[1];
                      param_4 = pfVar10[2];
                      if (*(char *)(unaff_x28 + 0xe27) == '\0') {
                        FUN_03a8a718(PTR_DAT_08486c60);
                        *(undefined1 *)(unaff_x28 + 0xe27) = 1;
                      }
                      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      FUN_04d8be94();
                      fVar12 = (float)FUN_04ed6994();
                      FUN_04d8be94();
                      FUN_04ed6994();
                      fVar21 = fVar24;
                      if (*(char *)(unaff_x27 + 0xd8f) == '\0') {
                        FUN_03a8a718();
                        *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
                      }
                      pfVar10 = *(float **)(*unaff_x24 + 0xb8);
                      fVar19 = *pfVar10;
                      fVar26 = pfVar10[1];
                      fVar25 = pfVar10[2];
                      if (*(char *)(unaff_x28 + 0xe27) == '\0') {
                        FUN_03a8a718(PTR_DAT_08486c60);
                        *(undefined1 *)(unaff_x28 + 0xe27) = 1;
                      }
                      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      FUN_04d8be94();
                      fVar13 = (float)FUN_04ed6994();
                      FUN_04d8be94();
                      FUN_04ed6994();
                      if (*(char *)(unaff_x27 + 0xd8f) == '\0') {
                        FUN_03a8a718();
                        *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
                      }
                      pfVar10 = *(float **)(*unaff_x24 + 0xb8);
                      fVar18 = *pfVar10;
                      fVar22 = pfVar10[1];
                      fVar20 = pfVar10[2];
                      if (*(char *)(unaff_x28 + 0xe27) == '\0') {
                        FUN_03a8a718(PTR_DAT_08486c60);
                        *(undefined1 *)(unaff_x28 + 0xe27) = 1;
                      }
                      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      fVar24 = SQRT((fVar24 - fVar25) * (fVar24 - fVar25) +
                                    (fVar12 - fVar19) * (fVar12 - fVar19) +
                                    (0.0 - fVar26) * (0.0 - fVar26));
                      fVar21 = SQRT((fVar21 - fVar20) * (fVar21 - fVar20) +
                                    (fVar13 - fVar18) * (fVar13 - fVar18) +
                                    (0.0 - fVar22) * (0.0 - fVar22));
                      iVar5 = FUN_04d8be94();
                      if ((iVar5 == iVar4) &&
                         ((in_stack_00000088._4_4_ < fVar24 || (in_stack_00000088._4_4_ < fVar21))))
                      {
                        FUN_04d8bee8();
                      }
                      param_3 = param_3 - param_4;
                      uVar17 = (ulong)(uint)(param_3 * param_3);
                      fVar15 = SQRT(param_3 * param_3 +
                                    (fVar15 - fVar16) * (fVar15 - fVar16) +
                                    (0.0 - fVar11) * (0.0 - fVar11));
                      iVar5 = FUN_04d8be94();
                      unaff_d13 = -0.5;
                      unaff_d14 = 0.5;
                      if ((iVar5 == iVar4) &&
                         ((in_stack_00000088._4_4_ < fVar15 || (in_stack_00000088._4_4_ < fVar21))))
                      {
                        FUN_04d8bee8();
                      }
                      iVar5 = FUN_04d8be94();
                      if ((iVar5 == iVar4) &&
                         ((in_stack_00000088._4_4_ < fVar15 || (in_stack_00000088._4_4_ < fVar24))))
                      {
                        FUN_04d8bee8();
                      }
                      iVar6 = iVar6 + 3;
                      unaff_s15 = in_stack_00000088._4_4_;
                    } while (iVar6 < *(int *)(unaff_x19 + 0x18));
                  }
                }
              }
              lVar8 = FUN_04de82e0(in_stack_00000080,in_stack_00000078,
                                   *(undefined8 *)PTR_DAT_0848e728);
              uVar3 = FUN_04d8be94();
              if (lVar8 == 0) goto LAB_03f1ae44;
              uVar7 = FUN_04d8c50c(lVar8,uVar3,*(undefined8 *)PTR_DAT_0848c618);
              if ((uVar7 & 1) != 0) {
                uVar3 = FUN_04d8be94();
                FUN_04d8be94();
                FUN_04ed6994();
                iVar6 = FUN_03f1ae4c(uVar3);
                iVar4 = FUN_04d8be94();
                if (iVar6 == -1) {
                  FUN_04d8be94();
                  uVar3 = FUN_04ed6994();
                  lVar8 = *(long *)(unaff_x25 + 0x10);
                  *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
                  puVar2 = PTR_DAT_0848d680;
                  if (lVar8 == 0) goto LAB_03f1ae44;
                  uVar1 = *(uint *)(unaff_x25 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)uVar1 * 0xc;
                    *(uint *)(unaff_x25 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + 0x20) = uVar3;
                    *(int *)(lVar8 + 0x24) = (int)uVar17;
                    *(float *)(lVar8 + 0x28) = param_3;
                    uVar7 = uVar17;
                  }
                  else {
                    FUN_04ed6cc4();
                    uVar7 = uVar17;
                  }
                  uVar3 = FUN_04d8be94();
                  FUN_04ed18a4(in_stack_00000060,uVar3,*(undefined8 *)puVar2);
                  uVar17 = uVar7;
                  uVar3 = FUN_04e87140(in_stack_00000050,in_stack_00000078,
                                       *(undefined8 *)PTR_DAT_084895f0);
                  lVar8 = *(long *)(in_stack_00000060 + 0x10);
                  lVar9 = *(long *)PTR_DAT_0848d6a8;
                  *(int *)(in_stack_00000060 + 0x1c) = *(int *)(in_stack_00000060 + 0x1c) + 1;
                  if (lVar8 == 0) goto LAB_03f1ae44;
                  uVar1 = *(uint *)(in_stack_00000060 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)uVar1 * 8;
                    *(uint *)(in_stack_00000060 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + 0x20) = uVar3;
                    *(int *)(lVar8 + 0x24) = (int)uVar7;
                  }
                  else {
                    uVar17 = uVar7 & 0xffffffff;
                    FUN_04ed1ba4(in_stack_00000060,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar3 = FUN_04d8be94();
                  uVar3 = FUN_04ed18a4(in_stack_00000058,uVar3,*(undefined8 *)PTR_DAT_0848d680);
                  lVar8 = *(long *)(in_stack_00000058 + 0x10);
                  lVar9 = *(long *)PTR_DAT_0848d6a8;
                  *(int *)(in_stack_00000058 + 0x1c) = *(int *)(in_stack_00000058 + 0x1c) + 1;
                  if (lVar8 == 0) goto LAB_03f1ae44;
                  uVar1 = *(uint *)(in_stack_00000058 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)uVar1 * 8;
                    *(uint *)(in_stack_00000058 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + 0x20) = uVar3;
                    *(int *)(lVar8 + 0x24) = (int)uVar17;
                  }
                  else {
                    FUN_04ed1ba4(in_stack_00000058,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar3 = FUN_04d8be94();
                  uVar3 = FUN_04ce9358(in_stack_00000068,uVar3,*(undefined8 *)PTR_DAT_0848f2a8);
                  lVar8 = *(long *)(in_stack_00000068 + 0x10);
                  lVar9 = *(long *)PTR_DAT_0848c610;
                  *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
                  if (lVar8 == 0) goto LAB_03f1ae44;
                  uVar1 = *(uint *)(in_stack_00000068 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                    *(uint *)(in_stack_00000068 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + 0x20) = uVar3;
                    *(int *)(lVar8 + 0x24) = (int)uVar17;
                    *(float *)(lVar8 + 0x28) = param_3;
                    *(float *)(lVar8 + 0x2c) = param_4;
                  }
                  else {
                    FUN_04ce967c(in_stack_00000068,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  if (0 < *(int *)(unaff_x19 + 0x18)) {
                    iVar6 = 0;
                    do {
                      FUN_04d8be94();
                      fVar15 = (float)FUN_04ed6994();
                      FUN_04d8be94();
                      FUN_04ed6994();
                      fVar24 = param_3;
                      if (*(char *)(unaff_x27 + 0xd8f) == '\0') {
                        FUN_03a8a718();
                        *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
                      }
                      uVar23 = **(undefined8 **)(*unaff_x24 + 0xb8);
                      fVar11 = *(float *)(*(undefined8 **)(*unaff_x24 + 0xb8) + 1);
                      if (*(char *)(unaff_x28 + 0xe27) == '\0') {
                        FUN_03a8a718(PTR_DAT_08486c60);
                        *(undefined1 *)(unaff_x28 + 0xe27) = 1;
                      }
                      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      param_3 = param_3 - fVar11;
                      fVar15 = fVar15 - (float)uVar23;
                      fVar11 = 0.0 - (float)((ulong)uVar23 >> 0x20);
                      fVar15 = SQRT(param_3 * param_3 + fVar15 * fVar15 + fVar11 * fVar11) * 1000.0;
                      dVar14 = modf((double)fVar15,&stack0x000000e8);
                      if (0.0 <= fVar15) {
                        if (dVar14 == unaff_d14) {
                          fVar15 = 1.0;
                          goto LAB_03f1a170;
                        }
                        fVar11 = (float)(int)(fVar15 + 0.5);
                      }
                      else if (dVar14 == unaff_d13) {
                        fVar15 = -1.0;
LAB_03f1a170:
                        fVar11 = (float)in_stack_000000e8;
                        if (((long)in_stack_000000e8 & 1U) != 0) {
                          fVar11 = (float)in_stack_000000e8 + fVar15;
                        }
                      }
                      else {
                        fVar11 = (float)(int)(fVar15 + -0.5);
                      }
                      FUN_04d8be94();
                      fVar16 = (float)FUN_04ed6994();
                      FUN_04d8be94();
                      FUN_04ed6994();
                      fVar15 = fVar24;
                      if (*(char *)(unaff_x27 + 0xd8f) == '\0') {
                        FUN_03a8a718();
                        *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
                      }
                      uVar23 = **(undefined8 **)(*unaff_x24 + 0xb8);
                      fVar21 = *(float *)(*(undefined8 **)(*unaff_x24 + 0xb8) + 1);
                      if (*(char *)(unaff_x28 + 0xe27) == '\0') {
                        FUN_03a8a718(PTR_DAT_08486c60);
                        *(undefined1 *)(unaff_x28 + 0xe27) = 1;
                      }
                      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      fVar24 = fVar24 - fVar21;
                      fVar16 = fVar16 - (float)uVar23;
                      fVar21 = 0.0 - (float)((ulong)uVar23 >> 0x20);
                      fVar24 = SQRT(fVar24 * fVar24 + fVar16 * fVar16 + fVar21 * fVar21) * 1000.0;
                      dVar14 = modf((double)fVar24,&stack0x000000e8);
                      if (0.0 <= fVar24) {
                        if (dVar14 == unaff_d14) {
                          fVar24 = 1.0;
                          goto LAB_03f1a2bc;
                        }
                        fVar16 = (float)(int)(fVar24 + 0.5);
                      }
                      else if (dVar14 == unaff_d13) {
                        fVar24 = -1.0;
LAB_03f1a2bc:
                        fVar16 = (float)in_stack_000000e8;
                        if (((long)in_stack_000000e8 & 1U) != 0) {
                          fVar16 = (float)in_stack_000000e8 + fVar24;
                        }
                      }
                      else {
                        fVar16 = (float)(int)(fVar24 + -0.5);
                      }
                      FUN_04d8be94();
                      fVar24 = (float)FUN_04ed6994();
                      FUN_04d8be94();
                      FUN_04ed6994();
                      param_3 = fVar15;
                      if (*(char *)(unaff_x27 + 0xd8f) == '\0') {
                        FUN_03a8a718();
                        *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
                      }
                      uVar23 = **(undefined8 **)(*unaff_x24 + 0xb8);
                      fVar21 = *(float *)(*(undefined8 **)(*unaff_x24 + 0xb8) + 1);
                      if (*(char *)(unaff_x28 + 0xe27) == '\0') {
                        FUN_03a8a718(PTR_DAT_08486c60);
                        *(undefined1 *)(unaff_x28 + 0xe27) = 1;
                      }
                      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      fVar15 = fVar15 - fVar21;
                      fVar24 = fVar24 - (float)uVar23;
                      fVar21 = 0.0 - (float)((ulong)uVar23 >> 0x20);
                      uVar17 = 0x447a0000;
                      fVar24 = SQRT(fVar15 * fVar15 + fVar24 * fVar24 + fVar21 * fVar21) * 1000.0;
                      dVar14 = modf((double)fVar24,&stack0x000000e8);
                      if (0.0 <= fVar24) {
                        if (dVar14 == unaff_d14) {
                          fVar24 = 1.0;
                          goto LAB_03f1a408;
                        }
                        fVar15 = (float)(int)(fVar24 + 0.5);
                      }
                      else if (dVar14 == unaff_d13) {
                        fVar24 = -1.0;
LAB_03f1a408:
                        fVar15 = (float)in_stack_000000e8;
                        uVar17 = (ulong)(uint)fVar15;
                        if (((long)in_stack_000000e8 & 1U) != 0) {
                          fVar15 = fVar15 + fVar24;
                        }
                      }
                      else {
                        fVar15 = (float)(int)(fVar24 + -0.5);
                      }
                      iVar5 = FUN_04d8be94();
                      if ((iVar5 == iVar4) && ((unaff_s15 < fVar16 || (unaff_s15 < fVar15)))) {
                        FUN_04d8bee8();
                      }
                      iVar5 = FUN_04d8be94();
                      if ((iVar5 == iVar4) && ((unaff_s15 < fVar11 || (unaff_s15 < fVar15)))) {
                        FUN_04d8bee8();
                      }
                      iVar5 = FUN_04d8be94();
                      if ((iVar5 == iVar4) && ((unaff_s15 < fVar11 || (unaff_s15 < fVar16)))) {
                        FUN_04d8bee8();
                      }
                      iVar6 = iVar6 + 3;
                    } while (iVar6 < *(int *)(unaff_x19 + 0x18));
                  }
                }
              }
              lVar8 = FUN_04de82e0(in_stack_00000080,in_stack_00000078,
                                   *(undefined8 *)PTR_DAT_0848e728);
              uVar3 = FUN_04d8be94();
              if (lVar8 == 0) {
LAB_03f1ae44:
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar7 = FUN_04d8c50c(lVar8,uVar3,*(undefined8 *)PTR_DAT_0848c618);
            } while ((uVar7 & 1) == 0);
            uVar3 = FUN_04d8be94();
            FUN_04d8be94();
            FUN_04ed6994();
            iVar6 = FUN_03f1ae4c(uVar3);
            unaff_w20 = FUN_04d8be94();
          } while (iVar6 != -1);
          FUN_04d8be94();
          uVar3 = FUN_04ed6994();
          lVar8 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          puVar2 = PTR_DAT_0848d680;
          if (lVar8 == 0) goto LAB_03f1ae44;
          uVar1 = *(uint *)(unaff_x25 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar1 * 0xc;
            *(uint *)(unaff_x25 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar8 + 0x20) = uVar3;
            *(int *)(lVar8 + 0x24) = (int)uVar17;
            *(float *)(lVar8 + 0x28) = param_3;
            uVar7 = uVar17;
          }
          else {
            FUN_04ed6cc4();
            uVar7 = uVar17;
          }
          uVar3 = FUN_04d8be94();
          FUN_04ed18a4(in_stack_00000060,uVar3,*(undefined8 *)puVar2);
          uVar17 = uVar7;
          uVar3 = FUN_04e87140(in_stack_00000050,in_stack_00000078,*(undefined8 *)PTR_DAT_084895f0);
          lVar8 = *(long *)(in_stack_00000060 + 0x10);
          lVar9 = *(long *)PTR_DAT_0848d6a8;
          *(int *)(in_stack_00000060 + 0x1c) = *(int *)(in_stack_00000060 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_03f1ae44;
          uVar1 = *(uint *)(in_stack_00000060 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar1 * 8;
            *(uint *)(in_stack_00000060 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar8 + 0x20) = uVar3;
            *(int *)(lVar8 + 0x24) = (int)uVar7;
          }
          else {
            uVar17 = uVar7 & 0xffffffff;
            FUN_04ed1ba4(in_stack_00000060,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          uVar3 = FUN_04d8be94();
          uVar3 = FUN_04ed18a4(in_stack_00000058,uVar3,*(undefined8 *)PTR_DAT_0848d680);
          lVar8 = *(long *)(in_stack_00000058 + 0x10);
          lVar9 = *(long *)PTR_DAT_0848d6a8;
          *(int *)(in_stack_00000058 + 0x1c) = *(int *)(in_stack_00000058 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_03f1ae44;
          uVar1 = *(uint *)(in_stack_00000058 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar1 * 8;
            *(uint *)(in_stack_00000058 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar8 + 0x20) = uVar3;
            *(int *)(lVar8 + 0x24) = (int)uVar17;
          }
          else {
            FUN_04ed1ba4(in_stack_00000058,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          uVar3 = FUN_04d8be94();
          uVar3 = FUN_04ce9358(in_stack_00000068,uVar3,*(undefined8 *)PTR_DAT_0848f2a8);
          lVar8 = *(long *)(in_stack_00000068 + 0x10);
          lVar9 = *(long *)PTR_DAT_0848c610;
          *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_03f1ae44;
          uVar1 = *(uint *)(in_stack_00000068 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
            *(uint *)(in_stack_00000068 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar8 + 0x20) = uVar3;
            *(int *)(lVar8 + 0x24) = (int)uVar17;
            *(float *)(lVar8 + 0x28) = param_3;
            *(float *)(lVar8 + 0x2c) = param_4;
          }
          else {
            FUN_04ce967c(in_stack_00000068,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        } while (*(int *)(unaff_x19 + 0x18) < 1);
        unaff_w29 = 0;
      }
      FUN_04d8be94();
      fVar15 = (float)FUN_04ed6994();
      FUN_04d8be94();
      FUN_04ed6994();
      fVar24 = param_3;
      if (*(char *)(unaff_x27 + 0xd8f) == '\0') {
        FUN_03a8a718();
        *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
      }
      uVar23 = **(undefined8 **)(*unaff_x24 + 0xb8);
      fVar11 = *(float *)(*(undefined8 **)(*unaff_x24 + 0xb8) + 1);
      if (*(char *)(unaff_x28 + 0xe27) == '\0') {
        FUN_03a8a718(PTR_DAT_08486c60);
        *(undefined1 *)(unaff_x28 + 0xe27) = 1;
      }
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      param_3 = param_3 - fVar11;
      fVar15 = fVar15 - (float)uVar23;
      fVar11 = 0.0 - (float)((ulong)uVar23 >> 0x20);
      fVar15 = SQRT(param_3 * param_3 + fVar15 * fVar15 + fVar11 * fVar11) * 1000.0;
      dVar14 = modf((double)fVar15,&stack0x000000e8);
      if (0.0 <= fVar15) {
        if (dVar14 == unaff_d14) {
          fVar15 = 1.0;
          goto LAB_03f1a920;
        }
        unaff_s9 = (float)(int)(fVar15 + 0.5);
      }
      else if (dVar14 == unaff_d13) {
        fVar15 = -1.0;
LAB_03f1a920:
        unaff_s9 = (float)in_stack_000000e8;
        if (((long)in_stack_000000e8 & 1U) != 0) {
          unaff_s9 = (float)in_stack_000000e8 + fVar15;
        }
      }
      else {
        unaff_s9 = (float)(int)(fVar15 + -0.5);
      }
      FUN_04d8be94();
      fVar15 = (float)FUN_04ed6994();
      FUN_04d8be94();
      FUN_04ed6994();
      param_3 = fVar24;
      if (*(char *)(unaff_x27 + 0xd8f) == '\0') {
        FUN_03a8a718();
        *(undefined1 *)(unaff_x27 + 0xd8f) = 1;
      }
      uVar23 = **(undefined8 **)(*unaff_x24 + 0xb8);
      fVar11 = *(float *)(*(undefined8 **)(*unaff_x24 + 0xb8) + 1);
      if (*(char *)(unaff_x28 + 0xe27) == '\0') {
        FUN_03a8a718(PTR_DAT_08486c60);
        *(undefined1 *)(unaff_x28 + 0xe27) = 1;
      }
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      fVar24 = fVar24 - fVar11;
      fVar15 = fVar15 - (float)uVar23;
      fVar11 = 0.0 - (float)((ulong)uVar23 >> 0x20);
      fVar24 = SQRT(fVar24 * fVar24 + fVar15 * fVar15 + fVar11 * fVar11) * 1000.0;
      dVar14 = modf((double)fVar24,&stack0x000000e8);
      if (0.0 <= fVar24) {
        if (dVar14 == unaff_d14) {
          fVar24 = 1.0;
          goto LAB_03f1aa6c;
        }
        unaff_s10 = (float)(int)(fVar24 + 0.5);
      }
      else if (dVar14 == unaff_d13) {
        fVar24 = -1.0;
LAB_03f1aa6c:
        unaff_s10 = (float)in_stack_000000e8;
        if (((long)in_stack_000000e8 & 1U) != 0) {
          unaff_s10 = (float)in_stack_000000e8 + fVar24;
        }
      }
      else {
        unaff_s10 = (float)(int)(fVar24 + -0.5);
      }
      FUN_04d8be94();
      in_stack_000000d0 = (float)FUN_04ed6994();
      FUN_04d8be94();
      FUN_04ed6994();
      unaff_s8 = param_3;
    } while (*(char *)(unaff_x27 + 0xd8f) != '\0');
  } while( true );
}


