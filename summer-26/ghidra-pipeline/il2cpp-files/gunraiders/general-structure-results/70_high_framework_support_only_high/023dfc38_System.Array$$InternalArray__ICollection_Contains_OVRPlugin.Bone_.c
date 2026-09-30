/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Bone>
ENTRY_POINT: 023dfc38
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Bone>(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int in_w9;
  int *piVar8;
  long unaff_x19;
  int iVar9;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long *plVar10;
  undefined8 *unaff_x26;
  long *unaff_x28;
  int unaff_w29;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar21;
  float fVar22;
  double dVar19;
  double dVar20;
  byte bVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  byte bVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  byte bVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  int iVar35;
  int iVar36;
  float unaff_s8;
  float fVar37;
  undefined1 auVar38 [16];
  float fStack000000000000000c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  int in_stack_00000050;
  int in_stack_00000058;
  ulong in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  
  if (in_w9 == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_032e04b8();
  uVar3 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
  uVar4 = FUN_032e935c(uVar2,uVar3,0);
  if ((uVar4 & 1) == 0) {
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar2 = thunk_FUN_01c496e0();
    uVar3 = thunk_FUN_01c273e8(Mono_Security_Cryptography_MD2Managed_TypeInfo);
    uVar6 = thunk_FUN_01c273e8(Mono_Security_Cryptography_MD2Managed_TypeInfo);
    FUN_0323fce4(uVar2,uVar3,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2);
  }
  auVar38 = FUN_021e2ecc(&stack0x00000120,*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x40));
  in_stack_000000f0 = unaff_x26[2];
  in_stack_000000e8 = unaff_x26[1];
  in_stack_000000e0 = *unaff_x26;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  in_stack_00000088 = in_stack_000000e8;
  in_stack_00000080 = in_stack_000000e0;
  in_stack_00000090 = in_stack_000000f0;
  FUN_03c6433c(auVar38._0_8_,auVar38._8_8_,&stack0x00000080,in_stack_00000058,unaff_w22,0);
  iVar9 = 0;
  fVar12 = (float)(in_stack_00000070 >> 0x20);
  bVar23 = (byte)(in_stack_00000070 >> 0x20);
  bVar26 = (byte)(in_stack_00000070 >> 0x28);
  bVar29 = (byte)(in_stack_00000070 >> 0x30);
  bVar32 = (byte)(in_stack_00000070 >> 0x38);
  fVar37 = (float)in_stack_00000070;
  do {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_023e3620(fVar37 + (fVar12 - fVar37) * ((float)iVar9 / ((float)unaff_w29 + -1.0)));
    iVar9 = iVar9 + 1;
  } while (unaff_w29 != iVar9);
  if (in_stack_00000050 != 0) {
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar7 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    iVar9 = (int)unaff_x20;
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)System_Runtime_Serialization_LongList_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023dfdd8;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498();
LAB_023dfdd8:
    uVar4 = (*(code *)*puVar5)();
    if ((uVar4 & 1) == 0) {
      uVar4 = NEON_fmov(0x3f800000,4);
      iVar35 = -(uint)((float)uVar4 < fVar37);
      iVar36 = -(uint)((float)(uVar4 >> 0x20) < fVar12);
      iVar11 = -(uint)(0x7f800000 < (uint)(in_stack_00000070 & 0x7fffffff7fffffff));
      iVar21 = -(uint)(0x7f800000 < (uint)((in_stack_00000070 & 0x7fffffff7fffffff) >> 0x20));
      in_stack_00000070 =
           in_stack_00000070 ^
           (in_stack_00000070 ^ uVar4) &
           CONCAT17((byte)((uint)iVar36 >> 0x18) | (byte)((uint)iVar21 >> 0x18),
                    CONCAT16((byte)((uint)iVar36 >> 0x10) | (byte)((uint)iVar21 >> 0x10),
                             CONCAT15((byte)((uint)iVar36 >> 8) | (byte)((uint)iVar21 >> 8),
                                      CONCAT14((byte)iVar36 | (byte)iVar21,
                                               CONCAT13((byte)((uint)iVar35 >> 0x18) |
                                                        (byte)((uint)iVar11 >> 0x18),
                                                        CONCAT12((byte)((uint)iVar35 >> 0x10) |
                                                                 (byte)((uint)iVar11 >> 0x10),
                                                                 CONCAT11((byte)((uint)iVar35 >> 8)
                                                                          | (byte)((uint)iVar11 >> 8
                                                                                  ),
                                                                          (byte)iVar35 |
                                                                          (byte)iVar11)))))));
      iVar21 = -(uint)(0x7f800000 < (uint)(in_stack_00000070 & 0x7fffffff7fffffff));
      iVar35 = -(uint)(0x7f800000 < (uint)((in_stack_00000070 & 0x7fffffff7fffffff) >> 0x20));
      iVar11 = -(uint)((float)in_stack_00000070 < 0.0);
      bVar23 = (byte)iVar11;
      bVar26 = (byte)((uint)iVar11 >> 8);
      bVar29 = (byte)((uint)iVar11 >> 0x10);
      bVar32 = (byte)((uint)iVar11 >> 0x18);
      iVar11 = -(uint)((float)(in_stack_00000070 >> 0x20) < 0.0);
      uVar2 = CONCAT17((byte)(in_stack_00000070 >> 0x38) &
                       ~((byte)((uint)iVar11 >> 0x18) | (byte)((uint)iVar35 >> 0x18)),
                       CONCAT16((byte)(in_stack_00000070 >> 0x30) &
                                ~((byte)((uint)iVar11 >> 0x10) | (byte)((uint)iVar35 >> 0x10)),
                                CONCAT15((byte)(in_stack_00000070 >> 0x28) &
                                         ~((byte)((uint)iVar11 >> 8) | (byte)((uint)iVar35 >> 8)),
                                         CONCAT14((byte)(in_stack_00000070 >> 0x20) &
                                                  ~((byte)iVar11 | (byte)iVar35),
                                                  CONCAT13((byte)(in_stack_00000070 >> 0x18) &
                                                           ~(bVar32 | (byte)((uint)iVar21 >> 0x18)),
                                                           CONCAT12((byte)(in_stack_00000070 >> 0x10
                                                                          ) & ~(bVar29 | (byte)((
                                                  uint)iVar21 >> 0x10)),
                                                  CONCAT11((byte)(in_stack_00000070 >> 8) &
                                                           ~(bVar26 | (byte)((uint)iVar21 >> 8)),
                                                           (byte)in_stack_00000070 &
                                                           ~(bVar23 | (byte)iVar21))))))));
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
      uVar2 = CONCAT44(fVar12 - (float)(int)fVar12,fVar37 - (float)(int)fVar37);
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_023e3620(uVar2);
    fVar22 = (float)((ulong)uVar2 >> 0x20);
    FUN_023e3620(fVar22);
    fVar12 = (float)FUN_023e923c(uVar2);
    fVar37 = (float)CONCAT13(bVar32,CONCAT12(bVar29,CONCAT11(bVar26,bVar23)));
    if (DAT_0452ffe3 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452ffe3 = '\x01';
    }
    plVar10 = (long *)PTR_DAT_0422fa60;
    if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar24 = 0;
    uVar27 = 0;
    uVar30 = 0x80;
    uVar33 = 0x3f;
    fVar13 = 1.0 / SQRT(fVar37 * fVar37 + fVar12 * fVar12 + unaff_s8 * unaff_s8);
    fVar12 = fVar12 * fVar13;
    unaff_s8 = unaff_s8 * fVar13;
    fVar37 = fVar37 * fVar13;
    fStack0000000000000040 = fVar37 * fVar37;
    fVar13 = fStack0000000000000040 + fVar12 * fVar12 + unaff_s8 * unaff_s8;
    if ((fVar13 == 0.0) || (0x7f800000 < (uint)ABS(fVar13))) {
      fVar12 = (float)FUN_023e923c((float)uVar2 + DAT_00b92ffc);
      fVar37 = (float)CONCAT13(uVar33,CONCAT12(uVar30,CONCAT11(uVar27,uVar24)));
      if (DAT_0452ffe3 == '\0') {
        FUN_01c5d288(PTR_DAT_0422fa60);
        DAT_0452ffe3 = '\x01';
      }
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      unaff_s8 = (float)uVar2;
      fStack0000000000000040 = unaff_s8 * unaff_s8;
      uVar24 = SUB41(fStack0000000000000040,0);
      uVar27 = (undefined1)((uint)fStack0000000000000040 >> 8);
      uVar30 = (undefined1)((uint)fStack0000000000000040 >> 0x10);
      uVar33 = (undefined1)((uint)fStack0000000000000040 >> 0x18);
      fStack0000000000000040 = fVar12 * fVar12 + fStack0000000000000040;
      fVar13 = 1.0 / SQRT(fVar37 * fVar37 + fStack0000000000000040);
      fVar12 = fVar12 * fVar13;
      unaff_s8 = unaff_s8 * fVar13;
      fVar37 = fVar37 * fVar13;
    }
    fVar14 = (float)FUN_023e923c(fVar22);
    fVar13 = (float)CONCAT13(uVar33,CONCAT12(uVar30,CONCAT11(uVar27,uVar24)));
    if (DAT_0452ffe3 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452ffe3 = '\x01';
    }
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fStack000000000000003c =
         1.0 / SQRT(fVar13 * fVar13 +
                    fVar14 * fVar14 + fStack0000000000000040 * fStack0000000000000040);
    fStack0000000000000044 = fVar14 * fStack000000000000003c;
    fStack0000000000000040 = fStack0000000000000040 * fStack000000000000003c;
    uVar24 = SUB41(fStack0000000000000040,0);
    uVar27 = (undefined1)((uint)fStack0000000000000040 >> 8);
    uVar30 = (undefined1)((uint)fStack0000000000000040 >> 0x10);
    uVar33 = (undefined1)((uint)fStack0000000000000040 >> 0x18);
    fStack000000000000003c = fVar13 * fStack000000000000003c;
    fVar14 = fStack000000000000003c * fStack000000000000003c;
    fVar13 = fVar14 + fStack0000000000000044 * fStack0000000000000044 +
                      fStack0000000000000040 * fStack0000000000000040;
    if ((fVar13 == 0.0) || (0x7f800000 < (uint)ABS(fVar13))) {
      fVar13 = (float)FUN_023e923c(fVar22 + DAT_00b933cc);
      fVar22 = (float)CONCAT13(uVar33,CONCAT12(uVar30,CONCAT11(uVar27,uVar24)));
      if (DAT_0452ffe3 == '\0') {
        FUN_01c5d288(PTR_DAT_0422fa60);
        DAT_0452ffe3 = '\x01';
      }
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fStack000000000000003c = 1.0 / SQRT(fVar22 * fVar22 + fVar13 * fVar13 + fVar14 * fVar14);
      fStack0000000000000044 = fVar13 * fStack000000000000003c;
      fStack0000000000000040 = fVar14 * fStack000000000000003c;
      fStack000000000000003c = fVar22 * fStack000000000000003c;
    }
    if (0 < iVar9) {
      fStack000000000000002c = -fVar12;
      fStack0000000000000024 = -fVar37;
      lVar7 = 0;
      fStack000000000000000c = (360.0 / (float)iVar9) * DAT_00b931d0;
      do {
        uVar24 = SUB41(fStack0000000000000024,0);
        uVar27 = (undefined1)((uint)fStack0000000000000024 >> 8);
        uVar30 = (undefined1)((uint)fStack0000000000000024 >> 0x10);
        uVar33 = (undefined1)((uint)fStack0000000000000024 >> 0x18);
        iVar11 = (int)lVar7;
        puVar5 = (undefined8 *)
                 (unaff_x19 + (long)(in_stack_00000058 + unaff_w29 * iVar9 + iVar11) * 0x20);
        in_stack_00000110 = *(undefined4 *)(puVar5 + 1);
        in_stack_00000108 = *puVar5;
        puVar1 = (undefined8 *)
                 (unaff_x19 + (long)(in_stack_00000058 + (unaff_w29 + 1) * iVar9 + iVar11) * 0x20);
        in_stack_00000100 = *(undefined4 *)(puVar1 + 1);
        in_stack_000000f8 = *puVar1;
        fVar37 = -unaff_s8;
        uVar15 = FUN_03a4388c(fStack000000000000002c,0);
        if (DAT_0452ffe4 == '\0') {
          FUN_01c5d288(plVar10);
          DAT_0452ffe4 = '\x01';
        }
        if (*(int *)(*plVar10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        fVar12 = fStack000000000000000c * (float)iVar11;
        dVar19 = cos((double)fVar12);
        if (DAT_0452ffe5 == '\0') {
          FUN_01c5d288(plVar10);
          DAT_0452ffe5 = '\x01';
        }
        if (*(int *)(*plVar10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        dVar20 = sin((double)fVar12);
        fVar13 = (float)dVar20 * 0.5 + 0.5;
        fVar12 = fVar13;
        uVar16 = FUN_03a42f88((float)dVar19 * 0.5 + 0.5,0);
        uVar25 = SUB41(fStack000000000000003c,0);
        uVar28 = (undefined1)((uint)fStack000000000000003c >> 8);
        uVar31 = (undefined1)((uint)fStack000000000000003c >> 0x10);
        uVar34 = (undefined1)((uint)fStack000000000000003c >> 0x18);
        fVar22 = fStack0000000000000040;
        uVar17 = FUN_03a4388c(fStack0000000000000044,0);
        if (DAT_0452ffe4 == '\0') {
          FUN_01c5d288(plVar10);
          DAT_0452ffe4 = '\x01';
        }
        if (*(int *)(*plVar10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (DAT_0452ffe5 == '\0') {
          FUN_01c5d288(plVar10);
          DAT_0452ffe5 = '\x01';
        }
        if (*(int *)(*plVar10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar18 = FUN_03a42f88(0.5 - (float)dVar19 * 0.5,0);
        *puVar5 = in_stack_00000108;
        *(undefined4 *)(puVar5 + 1) = in_stack_00000110;
        *(undefined4 *)((long)puVar5 + 0xc) = uVar15;
        lVar7 = lVar7 + 1;
        *(float *)(puVar5 + 2) = fVar37;
        *(uint *)((long)puVar5 + 0x14) = CONCAT13(uVar33,CONCAT12(uVar30,CONCAT11(uVar27,uVar24)));
        *(undefined4 *)(puVar5 + 3) = uVar16;
        *(float *)((long)puVar5 + 0x1c) = fVar12;
        *(undefined4 *)(puVar1 + 1) = in_stack_00000100;
        *puVar1 = in_stack_000000f8;
        *(undefined4 *)((long)puVar1 + 0xc) = uVar17;
        *(float *)(puVar1 + 2) = fVar22;
        *(uint *)((long)puVar1 + 0x14) = CONCAT13(uVar34,CONCAT12(uVar31,CONCAT11(uVar28,uVar25)));
        *(undefined4 *)(puVar1 + 3) = uVar18;
        *(float *)((long)puVar1 + 0x1c) = fVar13;
        plVar10 = (long *)PTR_DAT_0422fa60;
      } while (unaff_x20 != lVar7);
    }
  }
  return;
}


