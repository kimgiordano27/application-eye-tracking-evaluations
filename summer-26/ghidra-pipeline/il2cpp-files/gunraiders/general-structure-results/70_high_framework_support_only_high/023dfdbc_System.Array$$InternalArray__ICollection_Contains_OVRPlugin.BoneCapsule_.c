/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.BoneCapsule>
ENTRY_POINT: 023dfdbc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_BoneCapsule>
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  int unaff_w20;
  long lVar8;
  int unaff_w24;
  long *plVar9;
  long *unaff_x28;
  int unaff_w29;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar20;
  float fVar21;
  double dVar18;
  double dVar19;
  byte bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  byte bVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  byte bVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  int iVar34;
  int iVar35;
  float unaff_s8;
  float fVar36;
  float fStack000000000000000c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  long in_stack_00000048;
  int in_stack_00000058;
  ulong in_stack_00000070;
  
  bVar31 = param_3[3];
  bVar28 = param_3[2];
  bVar25 = param_3[1];
  bVar22 = param_3[0];
  puVar4 = (undefined8 *)FUN_01c72498();
  uVar5 = (*(code *)*puVar4)();
  fVar36 = (float)in_stack_00000070;
  fVar11 = (float)(in_stack_00000070 >> 0x20);
  if ((uVar5 & 1) == 0) {
    uVar5 = NEON_fmov(0x3f800000,4);
    iVar34 = -(uint)((float)uVar5 < fVar36);
    iVar35 = -(uint)((float)(uVar5 >> 0x20) < fVar11);
    iVar10 = -(uint)(0x7f800000 < (uint)(in_stack_00000070 & 0x7fffffff7fffffff));
    iVar20 = -(uint)(0x7f800000 < (uint)((in_stack_00000070 & 0x7fffffff7fffffff) >> 0x20));
    in_stack_00000070 =
         in_stack_00000070 ^
         (in_stack_00000070 ^ uVar5) &
         CONCAT17((byte)((uint)iVar35 >> 0x18) | (byte)((uint)iVar20 >> 0x18),
                  CONCAT16((byte)((uint)iVar35 >> 0x10) | (byte)((uint)iVar20 >> 0x10),
                           CONCAT15((byte)((uint)iVar35 >> 8) | (byte)((uint)iVar20 >> 8),
                                    CONCAT14((byte)iVar35 | (byte)iVar20,
                                             CONCAT13((byte)((uint)iVar34 >> 0x18) |
                                                      (byte)((uint)iVar10 >> 0x18),
                                                      CONCAT12((byte)((uint)iVar34 >> 0x10) |
                                                               (byte)((uint)iVar10 >> 0x10),
                                                               CONCAT11((byte)((uint)iVar34 >> 8) |
                                                                        (byte)((uint)iVar10 >> 8),
                                                                        (byte)iVar34 | (byte)iVar10)
                                                              ))))));
    iVar20 = -(uint)(0x7f800000 < (uint)(in_stack_00000070 & 0x7fffffff7fffffff));
    iVar34 = -(uint)(0x7f800000 < (uint)((in_stack_00000070 & 0x7fffffff7fffffff) >> 0x20));
    iVar10 = -(uint)((float)in_stack_00000070 < 0.0);
    bVar22 = (byte)iVar10;
    bVar25 = (byte)((uint)iVar10 >> 8);
    bVar28 = (byte)((uint)iVar10 >> 0x10);
    bVar31 = (byte)((uint)iVar10 >> 0x18);
    iVar10 = -(uint)((float)(in_stack_00000070 >> 0x20) < 0.0);
    uVar6 = CONCAT17((byte)(in_stack_00000070 >> 0x38) &
                     ~((byte)((uint)iVar10 >> 0x18) | (byte)((uint)iVar34 >> 0x18)),
                     CONCAT16((byte)(in_stack_00000070 >> 0x30) &
                              ~((byte)((uint)iVar10 >> 0x10) | (byte)((uint)iVar34 >> 0x10)),
                              CONCAT15((byte)(in_stack_00000070 >> 0x28) &
                                       ~((byte)((uint)iVar10 >> 8) | (byte)((uint)iVar34 >> 8)),
                                       CONCAT14((byte)(in_stack_00000070 >> 0x20) &
                                                ~((byte)iVar10 | (byte)iVar34),
                                                CONCAT13((byte)(in_stack_00000070 >> 0x18) &
                                                         ~(bVar31 | (byte)((uint)iVar20 >> 0x18)),
                                                         CONCAT12((byte)(in_stack_00000070 >> 0x10)
                                                                  & ~(bVar28 | (byte)((uint)iVar20
                                                                                     >> 0x10)),
                                                                  CONCAT11((byte)(in_stack_00000070
                                                                                 >> 8) &
                                                                           ~(bVar25 | (byte)((uint)
                                                  iVar20 >> 8)),
                                                  (byte)in_stack_00000070 & ~(bVar22 | (byte)iVar20)
                                                  )))))));
  }
  else {
    if (DAT_0452ffe6 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452ffe6 = '\x01';
    }
    if ((*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) &&
       (thunk_FUN_01c1d1e8(), DAT_0452ffe6 == '\0')) {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452ffe6 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = CONCAT44(fVar11 - (float)(int)fVar11,fVar36 - (float)(int)fVar36);
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_023e3620(uVar6);
  fVar21 = (float)((ulong)uVar6 >> 0x20);
  FUN_023e3620(fVar21);
  fVar11 = (float)FUN_023e923c(uVar6);
  fVar36 = (float)CONCAT13(bVar31,CONCAT12(bVar28,CONCAT11(bVar25,bVar22)));
  if (DAT_0452ffe3 == '\0') {
    FUN_01c5d288(PTR_DAT_0422fa60);
    DAT_0452ffe3 = '\x01';
  }
  plVar9 = (long *)PTR_DAT_0422fa60;
  if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar23 = 0;
  uVar26 = 0;
  uVar29 = 0x80;
  uVar32 = 0x3f;
  fVar12 = 1.0 / SQRT(fVar36 * fVar36 + fVar11 * fVar11 + unaff_s8 * unaff_s8);
  fVar11 = fVar11 * fVar12;
  unaff_s8 = unaff_s8 * fVar12;
  fVar36 = fVar36 * fVar12;
  fStack0000000000000040 = fVar36 * fVar36;
  fVar12 = fStack0000000000000040 + fVar11 * fVar11 + unaff_s8 * unaff_s8;
  if ((fVar12 == 0.0) || (0x7f800000 < (uint)ABS(fVar12))) {
    fVar11 = (float)FUN_023e923c((float)uVar6 + DAT_00b92ffc);
    fVar36 = (float)CONCAT13(uVar32,CONCAT12(uVar29,CONCAT11(uVar26,uVar23)));
    if (DAT_0452ffe3 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452ffe3 = '\x01';
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    unaff_s8 = (float)uVar6;
    fStack0000000000000040 = unaff_s8 * unaff_s8;
    uVar23 = SUB41(fStack0000000000000040,0);
    uVar26 = (undefined1)((uint)fStack0000000000000040 >> 8);
    uVar29 = (undefined1)((uint)fStack0000000000000040 >> 0x10);
    uVar32 = (undefined1)((uint)fStack0000000000000040 >> 0x18);
    fStack0000000000000040 = fVar11 * fVar11 + fStack0000000000000040;
    fVar12 = 1.0 / SQRT(fVar36 * fVar36 + fStack0000000000000040);
    fVar11 = fVar11 * fVar12;
    unaff_s8 = unaff_s8 * fVar12;
    fVar36 = fVar36 * fVar12;
  }
  fVar13 = (float)FUN_023e923c(fVar21);
  fVar12 = (float)CONCAT13(uVar32,CONCAT12(uVar29,CONCAT11(uVar26,uVar23)));
  if (DAT_0452ffe3 == '\0') {
    FUN_01c5d288(PTR_DAT_0422fa60);
    DAT_0452ffe3 = '\x01';
  }
  if (*(int *)(*plVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  fStack000000000000003c =
       1.0 / SQRT(fVar12 * fVar12 +
                  fVar13 * fVar13 + fStack0000000000000040 * fStack0000000000000040);
  fStack0000000000000044 = fVar13 * fStack000000000000003c;
  fStack0000000000000040 = fStack0000000000000040 * fStack000000000000003c;
  uVar23 = SUB41(fStack0000000000000040,0);
  uVar26 = (undefined1)((uint)fStack0000000000000040 >> 8);
  uVar29 = (undefined1)((uint)fStack0000000000000040 >> 0x10);
  uVar32 = (undefined1)((uint)fStack0000000000000040 >> 0x18);
  fStack000000000000003c = fVar12 * fStack000000000000003c;
  fVar13 = fStack000000000000003c * fStack000000000000003c;
  fVar12 = fVar13 + fStack0000000000000044 * fStack0000000000000044 +
                    fStack0000000000000040 * fStack0000000000000040;
  if ((fVar12 == 0.0) || (0x7f800000 < (uint)ABS(fVar12))) {
    fVar12 = (float)FUN_023e923c(fVar21 + DAT_00b933cc);
    fVar21 = (float)CONCAT13(uVar32,CONCAT12(uVar29,CONCAT11(uVar26,uVar23)));
    if (DAT_0452ffe3 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452ffe3 = '\x01';
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fStack000000000000003c = 1.0 / SQRT(fVar21 * fVar21 + fVar12 * fVar12 + fVar13 * fVar13);
    fStack0000000000000044 = fVar12 * fStack000000000000003c;
    fStack0000000000000040 = fVar13 * fStack000000000000003c;
    fStack000000000000003c = fVar21 * fStack000000000000003c;
  }
  if (0 < unaff_w20) {
    fStack000000000000002c = -fVar11;
    fStack0000000000000024 = -fVar36;
    lVar8 = 0;
    fStack000000000000000c = (360.0 / (float)(int)in_stack_00000048) * DAT_00b931d0;
    do {
      uVar23 = SUB41(fStack0000000000000024,0);
      uVar26 = (undefined1)((uint)fStack0000000000000024 >> 8);
      uVar29 = (undefined1)((uint)fStack0000000000000024 >> 0x10);
      uVar32 = (undefined1)((uint)fStack0000000000000024 >> 0x18);
      iVar10 = (int)lVar8;
      puVar4 = (undefined8 *)(unaff_x19 + (long)(in_stack_00000058 + unaff_w24 + iVar10) * 0x20);
      uVar2 = *(undefined4 *)(puVar4 + 1);
      uVar7 = *puVar4;
      puVar1 = (undefined8 *)(unaff_x19 + (long)(in_stack_00000058 + unaff_w29 + iVar10) * 0x20);
      uVar3 = *(undefined4 *)(puVar1 + 1);
      uVar6 = *puVar1;
      fVar36 = -unaff_s8;
      uVar14 = FUN_03a4388c(fStack000000000000002c,0);
      if (DAT_0452ffe4 == '\0') {
        FUN_01c5d288(plVar9);
        DAT_0452ffe4 = '\x01';
      }
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar11 = fStack000000000000000c * (float)iVar10;
      dVar18 = cos((double)fVar11);
      if (DAT_0452ffe5 == '\0') {
        FUN_01c5d288(plVar9);
        DAT_0452ffe5 = '\x01';
      }
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      dVar19 = sin((double)fVar11);
      fVar12 = (float)dVar19 * 0.5 + 0.5;
      fVar11 = fVar12;
      uVar15 = FUN_03a42f88((float)dVar18 * 0.5 + 0.5,0);
      uVar24 = SUB41(fStack000000000000003c,0);
      uVar27 = (undefined1)((uint)fStack000000000000003c >> 8);
      uVar30 = (undefined1)((uint)fStack000000000000003c >> 0x10);
      uVar33 = (undefined1)((uint)fStack000000000000003c >> 0x18);
      fVar21 = fStack0000000000000040;
      uVar16 = FUN_03a4388c(fStack0000000000000044,0);
      if (DAT_0452ffe4 == '\0') {
        FUN_01c5d288(plVar9);
        DAT_0452ffe4 = '\x01';
      }
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (DAT_0452ffe5 == '\0') {
        FUN_01c5d288(plVar9);
        DAT_0452ffe5 = '\x01';
      }
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar17 = FUN_03a42f88(0.5 - (float)dVar18 * 0.5,0);
      *puVar4 = uVar7;
      *(undefined4 *)(puVar4 + 1) = uVar2;
      *(undefined4 *)((long)puVar4 + 0xc) = uVar14;
      lVar8 = lVar8 + 1;
      *(float *)(puVar4 + 2) = fVar36;
      *(uint *)((long)puVar4 + 0x14) = CONCAT13(uVar32,CONCAT12(uVar29,CONCAT11(uVar26,uVar23)));
      *(undefined4 *)(puVar4 + 3) = uVar15;
      *(float *)((long)puVar4 + 0x1c) = fVar11;
      *(undefined4 *)(puVar1 + 1) = uVar3;
      *puVar1 = uVar6;
      *(undefined4 *)((long)puVar1 + 0xc) = uVar16;
      *(float *)(puVar1 + 2) = fVar21;
      *(uint *)((long)puVar1 + 0x14) = CONCAT13(uVar33,CONCAT12(uVar30,CONCAT11(uVar27,uVar24)));
      *(undefined4 *)(puVar1 + 3) = uVar17;
      *(float *)((long)puVar1 + 0x1c) = fVar12;
      plVar9 = (long *)PTR_DAT_0422fa60;
    } while (in_stack_00000048 != lVar8);
  }
  return;
}


