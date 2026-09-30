/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 023dfab4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_BodyJointLocation>(void)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long *plVar14;
  uint uVar15;
  uint *unaff_x26;
  undefined8 uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  ulong uVar25;
  int iVar28;
  float fVar29;
  double dVar26;
  double dVar27;
  byte bVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  byte bVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  int iVar42;
  int iVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  float fStack000000000000000c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  int iStack0000000000000118;
  int iStack000000000000011c;
  int in_stack_00000128;
  
  FUN_01c723f0();
  puVar10 = UnityEngine_UIElements_LongField_TypeInfo;
  _iStack0000000000000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000f8 = 0;
  uVar25 = *(ulong *)(unaff_x26 + 3);
  in_stack_000000f0 = *(undefined8 *)(unaff_x26 + 4);
  fVar44 = (float)unaff_x26[5];
  in_stack_000000e8 = *(undefined8 *)(unaff_x26 + 2);
  in_stack_000000e0 = *(undefined8 *)unaff_x26;
  uVar2 = *unaff_x26;
  uVar3 = unaff_x26[1];
  uVar4 = unaff_x26[2];
  if (*(int *)(*(long *)UnityEngine_UIElements_LongField_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  in_stack_000000c8 = in_stack_000000e8;
  in_stack_000000c0 = in_stack_000000e0;
  in_stack_000000d0 = in_stack_000000f0;
  FUN_03c64188(&stack0x000000c0,(long)&stack0x00000118 + 4,&stack0x00000118,0);
  puVar6 = PTR_DAT_0422fd80;
  puVar5 = PTR_DAT_0422fb28;
  if ((int)uVar2 < 3) {
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar7 = thunk_FUN_01c496e0();
    uVar16 = thunk_FUN_01c273e8(System_ComponentModel_LookupBindingPropertiesAttribute_TypeInfo);
    puVar10 = System_Data_LookupNode_TypeInfo;
  }
  else {
    if (1 < (int)uVar3) {
      if (unaff_w25 < iStack000000000000011c) {
        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,iStack000000000000011c);
        uVar16 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
        uVar7 = thunk_FUN_01c49334(uVar16,&stack0x000000e0);
        in_stack_000000b8._4_4_ = unaff_w25;
        uVar16 = thunk_FUN_01c273e8(puVar6);
        uVar16 = thunk_FUN_01c49334(uVar16,(long)&stack0x000000b8 + 4);
        puVar10 = System_Security_Cryptography_MACTripleDES_TypeInfo;
      }
      else {
        if (iStack0000000000000118 <= in_stack_00000128) {
          uVar16 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x30);
          if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar16 = FUN_032e04b8(uVar16,0);
          uVar7 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
          uVar8 = FUN_032e935c(uVar16,uVar7,0);
          if ((uVar8 & 1) != 0) {
            auVar46 = FUN_021e2e90(&stack0x00000120,
                                   *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
            in_stack_000000f0 = *(undefined8 *)(unaff_x26 + 4);
            in_stack_000000e8 = *(undefined8 *)(unaff_x26 + 2);
            in_stack_000000e0 = *(undefined8 *)unaff_x26;
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            in_stack_000000a8 = in_stack_000000e8;
            in_stack_000000a0 = in_stack_000000e0;
            in_stack_000000b0 = in_stack_000000f0;
            FUN_03c641cc(auVar46._0_8_,auVar46._8_8_,&stack0x000000a0,unaff_w24,unaff_w22,0);
LAB_023dfce4:
            uVar15 = 0;
            fVar18 = (float)(uVar25 >> 0x20);
            bVar30 = (byte)(uVar25 >> 0x20);
            bVar33 = (byte)(uVar25 >> 0x28);
            bVar36 = (byte)(uVar25 >> 0x30);
            bVar39 = (byte)(uVar25 >> 0x38);
            fVar45 = (float)uVar25;
            do {
              if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              FUN_023e3620(fVar45 + (fVar18 - fVar45) *
                                    ((float)(int)uVar15 / ((float)(int)uVar3 + -1.0)),fVar44);
              uVar15 = uVar15 + 1;
            } while (uVar3 != uVar15);
            if ((char)uVar4 != '\0') {
              if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar12 = *unaff_x23;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar8 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)System_Runtime_Serialization_LongList_TypeInfo) {
                    puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_023dfdd8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 != 0);
              }
              puVar9 = (undefined8 *)FUN_01c72498();
LAB_023dfdd8:
              uVar8 = (*(code *)*puVar9)();
              if ((uVar8 & 1) == 0) {
                uVar8 = NEON_fmov(0x3f800000,4);
                iVar42 = -(uint)((float)uVar8 < fVar45);
                iVar43 = -(uint)((float)(uVar8 >> 0x20) < fVar18);
                iVar17 = -(uint)(0x7f800000 < (uint)(uVar25 & 0x7fffffff7fffffff));
                iVar28 = -(uint)(0x7f800000 < (uint)((uVar25 & 0x7fffffff7fffffff) >> 0x20));
                uVar25 = uVar25 ^ (uVar25 ^ uVar8) &
                                  CONCAT17((byte)((uint)iVar43 >> 0x18) |
                                           (byte)((uint)iVar28 >> 0x18),
                                           CONCAT16((byte)((uint)iVar43 >> 0x10) |
                                                    (byte)((uint)iVar28 >> 0x10),
                                                    CONCAT15((byte)((uint)iVar43 >> 8) |
                                                             (byte)((uint)iVar28 >> 8),
                                                             CONCAT14((byte)iVar43 | (byte)iVar28,
                                                                      CONCAT13((byte)((uint)iVar42
                                                                                     >> 0x18) |
                                                                               (byte)((uint)iVar17
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((uint
                                                  )iVar42 >> 0x10) | (byte)((uint)iVar17 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar42 >> 8) |
                                                           (byte)((uint)iVar17 >> 8),
                                                           (byte)iVar42 | (byte)iVar17)))))));
                iVar28 = -(uint)(0x7f800000 < (uint)(uVar25 & 0x7fffffff7fffffff));
                iVar42 = -(uint)(0x7f800000 < (uint)((uVar25 & 0x7fffffff7fffffff) >> 0x20));
                iVar17 = -(uint)((float)uVar25 < 0.0);
                bVar30 = (byte)iVar17;
                bVar33 = (byte)((uint)iVar17 >> 8);
                bVar36 = (byte)((uint)iVar17 >> 0x10);
                bVar39 = (byte)((uint)iVar17 >> 0x18);
                iVar17 = -(uint)((float)(uVar25 >> 0x20) < 0.0);
                uVar16 = CONCAT17((byte)(uVar25 >> 0x38) &
                                  ~((byte)((uint)iVar17 >> 0x18) | (byte)((uint)iVar42 >> 0x18)),
                                  CONCAT16((byte)(uVar25 >> 0x30) &
                                           ~((byte)((uint)iVar17 >> 0x10) |
                                            (byte)((uint)iVar42 >> 0x10)),
                                           CONCAT15((byte)(uVar25 >> 0x28) &
                                                    ~((byte)((uint)iVar17 >> 8) |
                                                     (byte)((uint)iVar42 >> 8)),
                                                    CONCAT14((byte)(uVar25 >> 0x20) &
                                                             ~((byte)iVar17 | (byte)iVar42),
                                                             CONCAT13((byte)(uVar25 >> 0x18) &
                                                                      ~(bVar39 | (byte)((uint)iVar28
                                                                                       >> 0x18)),
                                                                      CONCAT12((byte)(uVar25 >> 0x10
                                                                                     ) & ~(bVar36 | 
                                                  (byte)((uint)iVar28 >> 0x10)),
                                                  CONCAT11((byte)(uVar25 >> 8) &
                                                           ~(bVar33 | (byte)((uint)iVar28 >> 8)),
                                                           (byte)uVar25 & ~(bVar30 | (byte)iVar28)))
                                                  )))));
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
                uVar16 = CONCAT44(fVar18 - (float)(int)fVar18,fVar45 - (float)(int)fVar45);
              }
              if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              FUN_023e3620(uVar16,fVar44);
              fVar29 = (float)((ulong)uVar16 >> 0x20);
              FUN_023e3620(fVar29);
              fVar18 = (float)FUN_023e923c(uVar16);
              fVar45 = (float)CONCAT13(bVar39,CONCAT12(bVar36,CONCAT11(bVar33,bVar30)));
              if (DAT_0452ffe3 == '\0') {
                FUN_01c5d288(PTR_DAT_0422fa60);
                DAT_0452ffe3 = '\x01';
              }
              plVar14 = (long *)PTR_DAT_0422fa60;
              if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar31 = 0;
              uVar34 = 0;
              uVar37 = 0x80;
              uVar40 = 0x3f;
              fVar19 = 1.0 / SQRT(fVar45 * fVar45 + fVar18 * fVar18 + fVar44 * fVar44);
              fVar18 = fVar18 * fVar19;
              fVar44 = fVar44 * fVar19;
              fVar45 = fVar45 * fVar19;
              fStack0000000000000040 = fVar45 * fVar45;
              fVar19 = fStack0000000000000040 + fVar18 * fVar18 + fVar44 * fVar44;
              if ((fVar19 == 0.0) || (0x7f800000 < (uint)ABS(fVar19))) {
                fVar18 = (float)FUN_023e923c((float)uVar16 + DAT_00b92ffc);
                fVar45 = (float)CONCAT13(uVar40,CONCAT12(uVar37,CONCAT11(uVar34,uVar31)));
                if (DAT_0452ffe3 == '\0') {
                  FUN_01c5d288(PTR_DAT_0422fa60);
                  DAT_0452ffe3 = '\x01';
                }
                if (*(int *)(*plVar14 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                fVar44 = (float)uVar16;
                fStack0000000000000040 = fVar44 * fVar44;
                uVar31 = SUB41(fStack0000000000000040,0);
                uVar34 = (undefined1)((uint)fStack0000000000000040 >> 8);
                uVar37 = (undefined1)((uint)fStack0000000000000040 >> 0x10);
                uVar40 = (undefined1)((uint)fStack0000000000000040 >> 0x18);
                fStack0000000000000040 = fVar18 * fVar18 + fStack0000000000000040;
                fVar19 = 1.0 / SQRT(fVar45 * fVar45 + fStack0000000000000040);
                fVar18 = fVar18 * fVar19;
                fVar44 = fVar44 * fVar19;
                fVar45 = fVar45 * fVar19;
              }
              fVar20 = (float)FUN_023e923c(fVar29);
              fVar19 = (float)CONCAT13(uVar40,CONCAT12(uVar37,CONCAT11(uVar34,uVar31)));
              if (DAT_0452ffe3 == '\0') {
                FUN_01c5d288(PTR_DAT_0422fa60);
                DAT_0452ffe3 = '\x01';
              }
              if (*(int *)(*plVar14 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              fStack000000000000003c =
                   1.0 / SQRT(fVar19 * fVar19 +
                              fVar20 * fVar20 + fStack0000000000000040 * fStack0000000000000040);
              fStack0000000000000044 = fVar20 * fStack000000000000003c;
              fStack0000000000000040 = fStack0000000000000040 * fStack000000000000003c;
              uVar31 = SUB41(fStack0000000000000040,0);
              uVar34 = (undefined1)((uint)fStack0000000000000040 >> 8);
              uVar37 = (undefined1)((uint)fStack0000000000000040 >> 0x10);
              uVar40 = (undefined1)((uint)fStack0000000000000040 >> 0x18);
              fStack000000000000003c = fVar19 * fStack000000000000003c;
              fVar20 = fStack000000000000003c * fStack000000000000003c;
              fVar19 = fVar20 + fStack0000000000000044 * fStack0000000000000044 +
                                fStack0000000000000040 * fStack0000000000000040;
              if ((fVar19 == 0.0) || (0x7f800000 < (uint)ABS(fVar19))) {
                fVar19 = (float)FUN_023e923c(fVar29 + DAT_00b933cc);
                fVar29 = (float)CONCAT13(uVar40,CONCAT12(uVar37,CONCAT11(uVar34,uVar31)));
                if (DAT_0452ffe3 == '\0') {
                  FUN_01c5d288(PTR_DAT_0422fa60);
                  DAT_0452ffe3 = '\x01';
                }
                if (*(int *)(*plVar14 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                fStack000000000000003c =
                     1.0 / SQRT(fVar29 * fVar29 + fVar19 * fVar19 + fVar20 * fVar20);
                fStack0000000000000044 = fVar19 * fStack000000000000003c;
                fStack0000000000000040 = fVar20 * fStack000000000000003c;
                fStack000000000000003c = fVar29 * fStack000000000000003c;
              }
              if (0 < (int)uVar2) {
                fStack000000000000002c = -fVar18;
                fStack0000000000000024 = -fVar45;
                uVar25 = 0;
                fStack000000000000000c = (360.0 / (float)(int)uVar2) * DAT_00b931d0;
                do {
                  uVar31 = SUB41(fStack0000000000000024,0);
                  uVar34 = (undefined1)((uint)fStack0000000000000024 >> 8);
                  uVar37 = (undefined1)((uint)fStack0000000000000024 >> 0x10);
                  uVar40 = (undefined1)((uint)fStack0000000000000024 >> 0x18);
                  iVar17 = (int)uVar25;
                  puVar9 = (undefined8 *)
                           (unaff_x19 + (long)(int)(unaff_w24 + uVar3 * uVar2 + iVar17) * 0x20);
                  in_stack_00000110 = *(undefined4 *)(puVar9 + 1);
                  in_stack_00000108 = *puVar9;
                  puVar1 = (undefined8 *)
                           (unaff_x19 + (long)(int)(unaff_w24 + (uVar3 + 1) * uVar2 + iVar17) * 0x20
                           );
                  in_stack_00000100 = *(undefined4 *)(puVar1 + 1);
                  in_stack_000000f8 = *puVar1;
                  fVar45 = -fVar44;
                  uVar21 = FUN_03a4388c(fStack000000000000002c,0);
                  if (DAT_0452ffe4 == '\0') {
                    FUN_01c5d288(plVar14);
                    DAT_0452ffe4 = '\x01';
                  }
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  fVar18 = fStack000000000000000c * (float)iVar17;
                  dVar26 = cos((double)fVar18);
                  if (DAT_0452ffe5 == '\0') {
                    FUN_01c5d288(plVar14);
                    DAT_0452ffe5 = '\x01';
                  }
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  dVar27 = sin((double)fVar18);
                  fVar19 = (float)dVar27 * 0.5 + 0.5;
                  fVar18 = fVar19;
                  uVar22 = FUN_03a42f88((float)dVar26 * 0.5 + 0.5,0);
                  uVar32 = SUB41(fStack000000000000003c,0);
                  uVar35 = (undefined1)((uint)fStack000000000000003c >> 8);
                  uVar38 = (undefined1)((uint)fStack000000000000003c >> 0x10);
                  uVar41 = (undefined1)((uint)fStack000000000000003c >> 0x18);
                  fVar29 = fStack0000000000000040;
                  uVar23 = FUN_03a4388c(fStack0000000000000044,0);
                  if (DAT_0452ffe4 == '\0') {
                    FUN_01c5d288(plVar14);
                    DAT_0452ffe4 = '\x01';
                  }
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  if (DAT_0452ffe5 == '\0') {
                    FUN_01c5d288(plVar14);
                    DAT_0452ffe5 = '\x01';
                  }
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar24 = FUN_03a42f88(0.5 - (float)dVar26 * 0.5,0);
                  *puVar9 = in_stack_00000108;
                  *(undefined4 *)(puVar9 + 1) = in_stack_00000110;
                  *(undefined4 *)((long)puVar9 + 0xc) = uVar21;
                  uVar25 = uVar25 + 1;
                  *(float *)(puVar9 + 2) = fVar45;
                  *(uint *)((long)puVar9 + 0x14) =
                       CONCAT13(uVar40,CONCAT12(uVar37,CONCAT11(uVar34,uVar31)));
                  *(undefined4 *)(puVar9 + 3) = uVar22;
                  *(float *)((long)puVar9 + 0x1c) = fVar18;
                  *(undefined4 *)(puVar1 + 1) = in_stack_00000100;
                  *puVar1 = in_stack_000000f8;
                  *(undefined4 *)((long)puVar1 + 0xc) = uVar23;
                  *(float *)(puVar1 + 2) = fVar29;
                  *(uint *)((long)puVar1 + 0x14) =
                       CONCAT13(uVar41,CONCAT12(uVar38,CONCAT11(uVar35,uVar32)));
                  *(undefined4 *)(puVar1 + 3) = uVar24;
                  *(float *)((long)puVar1 + 0x1c) = fVar19;
                  plVar14 = (long *)PTR_DAT_0422fa60;
                } while (uVar2 != uVar25);
              }
            }
            return;
          }
          uVar16 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x30);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar16 = FUN_032e04b8(uVar16,0);
          uVar7 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
          uVar8 = FUN_032e935c(uVar16,uVar7,0);
          if ((uVar8 & 1) != 0) {
            auVar46 = FUN_021e2ecc(&stack0x00000120,
                                   *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x40));
            in_stack_000000f0 = *(undefined8 *)(unaff_x26 + 4);
            in_stack_000000e8 = *(undefined8 *)(unaff_x26 + 2);
            in_stack_000000e0 = *(undefined8 *)unaff_x26;
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            in_stack_00000088 = in_stack_000000e8;
            in_stack_00000080 = in_stack_000000e0;
            in_stack_00000090 = in_stack_000000f0;
            FUN_03c6433c(auVar46._0_8_,auVar46._8_8_,&stack0x00000080,unaff_w24,unaff_w22,0);
            goto LAB_023dfce4;
          }
          thunk_FUN_01c273e8(PTR_DAT_04231770);
          uVar7 = thunk_FUN_01c496e0();
          uVar16 = thunk_FUN_01c273e8(Mono_Security_Cryptography_MD2Managed_TypeInfo);
          uVar11 = thunk_FUN_01c273e8(Mono_Security_Cryptography_MD2Managed_TypeInfo);
          FUN_0323fce4(uVar7,uVar16,uVar11,0);
          goto LAB_023e05dc;
        }
        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,iStack0000000000000118);
        uVar16 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
        uVar7 = thunk_FUN_01c49334(uVar16,&stack0x000000e0);
        in_stack_000000b8._4_4_ = in_stack_00000128;
        uVar16 = thunk_FUN_01c273e8(puVar6);
        uVar16 = thunk_FUN_01c49334(uVar16,(long)&stack0x000000b8 + 4);
        puVar10 = System_Runtime_Remoting_Messaging_MCMDictionary_TypeInfo;
      }
      uVar11 = thunk_FUN_01c273e8(puVar10);
      uVar16 = FUN_031536d4(uVar11,uVar7,uVar16,0);
      thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
      uVar7 = thunk_FUN_01c496e0();
      FUN_03247e00(uVar7,uVar16,0);
      goto LAB_023e05dc;
    }
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar7 = thunk_FUN_01c496e0();
    uVar16 = thunk_FUN_01c273e8(System_Linq_Expressions_LoopExpression_TypeInfo);
    puVar10 = LostTarget_TypeInfo;
  }
  uVar11 = thunk_FUN_01c273e8(puVar10);
  FUN_03243400(uVar7,uVar16,uVar11,0);
LAB_023e05dc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar7);
}


