/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector4f>
ENTRY_POINT: 023e0ae0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector4f>(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  void *pvVar11;
  undefined8 uVar12;
  long *unaff_x24;
  undefined8 *unaff_x25;
  size_t __n;
  size_t unaff_x26;
  int unaff_w27;
  undefined8 *puVar13;
  void *pvVar14;
  undefined4 unaff_w28;
  long lVar15;
  void *pvVar16;
  long unaff_x29;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  int iVar22;
  double dVar21;
  undefined4 uVar23;
  ulong uVar24;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  undefined4 unaff_s8;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  
  uVar3 = FUN_032e935c();
  if ((uVar3 & 1) == 0) {
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar5 = thunk_FUN_01c496e0();
    uVar12 = thunk_FUN_01c273e8(Mono_Security_Cryptography_MD2Managed_TypeInfo);
    uVar4 = thunk_FUN_01c273e8(Mono_Security_Cryptography_MD2Managed_TypeInfo);
    FUN_0323fce4(uVar5,uVar12,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,*(undefined8 *)(unaff_x29 + -0x170));
  }
  auVar35 = (*(code *)**(undefined8 **)(*unaff_x24 + 0x40))(unaff_x29 + -0xc0);
  puVar2 = UnityEngine_UIElements_LongField_TypeInfo;
  uVar12 = unaff_x25[1];
  uVar5 = *unaff_x25;
  *(undefined8 *)(unaff_x29 + -0x90) = unaff_x25[2];
  *(undefined8 *)(unaff_x29 + -0x98) = uVar12;
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar5;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  *(undefined8 *)(unaff_x29 + -0x128) = *(undefined8 *)(unaff_x29 + -0x98);
  *(undefined8 *)(unaff_x29 + -0x130) = *(undefined8 *)(unaff_x29 + -0xa0);
  *(undefined8 *)(unaff_x29 + -0x120) = *(undefined8 *)(unaff_x29 + -0x90);
  FUN_03c6433c(auVar35._0_8_,auVar35._8_8_,unaff_x29 + -0x130,unaff_w27,
               *(undefined4 *)(unaff_x29 + -0x160),0);
  iVar22 = *(int *)(unaff_x29 + -0x140);
  iVar17 = 0;
  fVar28 = (float)((ulong)*(undefined8 *)(unaff_x29 + -0x150) >> 0x20);
  *(undefined8 *)(unaff_x29 + -0x158) = 0;
  *(ulong *)(unaff_x29 + -0x160) =
       CONCAT44(fVar28 - fVar28,fVar28 - (float)*(undefined8 *)(unaff_x29 + -0x150));
  *(int *)(unaff_x29 + -0x170) = unaff_w27;
  *(undefined4 *)(unaff_x29 + -0x13c) = unaff_w28;
  do {
    lVar15 = *unaff_x24;
    pvVar11 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
      pvVar11 = (void *)(unaff_x29 + -200);
    }
    memcpy(*(void **)(unaff_x29 + -0x138),pvVar11,unaff_x26);
    uVar5 = *(undefined8 *)(unaff_x29 + -0xb0);
    uVar12 = *(undefined8 *)(unaff_x29 + -0xa8);
    if (*(int *)(*(long *)UnityEngine_UIElements_LongField_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar15 = *unaff_x24;
    }
    puVar13 = *(undefined8 **)(lVar15 + 0x50);
    puVar9 = *(undefined8 **)(unaff_x29 + -0x138);
    uVar4 = *puVar13;
    if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar9;
    *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
    *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
    iVar1 = *(int *)(unaff_x29 + -0x13c);
    *(undefined8 *)(unaff_x29 + -0x60) = uVar5;
    *(undefined8 *)(unaff_x29 + -0x58) = uVar12;
    *(undefined4 *)(unaff_x29 + -0x70) = unaff_s8;
    *(int *)(unaff_x29 + -0x6c) = iVar1;
    *(int *)(unaff_x29 + -0x68) = unaff_w27;
    *(float *)(unaff_x29 + -100) =
         (float)*(undefined8 *)(unaff_x29 + -0x150) +
         (float)*(undefined8 *)(unaff_x29 + -0x160) * ((float)iVar17 / ((float)iVar22 + -1.0));
    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
    (*(code *)puVar13[2])(uVar4,puVar13,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
    iVar17 = iVar17 + 1;
    unaff_w27 = unaff_w27 + iVar1;
  } while (*(int *)(unaff_x29 + -0x140) != iVar17);
  if (*(int *)(unaff_x29 + -0x1b4) != 0) {
    lVar8 = *unaff_x24;
    lVar6 = *(long *)(lVar8 + 0x48);
    lVar15 = lVar6;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394(lVar6);
      lVar8 = *unaff_x24;
      lVar15 = *(long *)(lVar8 + 0x48);
    }
    lVar7 = *(long *)(unaff_x29 + -200);
    if (-1 < *(int *)(lVar15 + 0x28)) {
      lVar7 = unaff_x29 + -200;
    }
    FUN_01c5dc8c(lVar6,*(undefined8 *)(lVar8 + 0x58),*(undefined8 *)(unaff_x29 + -0x1d0),lVar7,0,
                 unaff_x29 + -0xa0);
    if (*(char *)(unaff_x29 + -0xa0) == '\0') {
      uVar3 = *(ulong *)(unaff_x29 + -0x150);
      uVar24 = NEON_fmov(0x3f800000,4);
      iVar26 = -(uint)((float)uVar24 < (float)uVar3);
      iVar27 = -(uint)((float)(uVar24 >> 0x20) < (float)(uVar3 >> 0x20));
      iVar17 = -(uint)(0x7f800000 < (uint)(uVar3 & 0x7fffffff7fffffff));
      iVar22 = -(uint)(0x7f800000 < (uint)((uVar3 & 0x7fffffff7fffffff) >> 0x20));
      uVar3 = uVar3 ^ (uVar3 ^ uVar24) &
                      CONCAT17((byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar22 >> 0x18),
                               CONCAT16((byte)((uint)iVar27 >> 0x10) | (byte)((uint)iVar22 >> 0x10),
                                        CONCAT15((byte)((uint)iVar27 >> 8) |
                                                 (byte)((uint)iVar22 >> 8),
                                                 CONCAT14((byte)iVar27 | (byte)iVar22,
                                                          CONCAT13((byte)((uint)iVar26 >> 0x18) |
                                                                   (byte)((uint)iVar17 >> 0x18),
                                                                   CONCAT12((byte)((uint)iVar26 >>
                                                                                  0x10) |
                                                                            (byte)((uint)iVar17 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((uint)
                                                  iVar26 >> 8) | (byte)((uint)iVar17 >> 8),
                                                  (byte)iVar26 | (byte)iVar17)))))));
      iVar17 = -(uint)(0x7f800000 < (uint)(uVar3 & 0x7fffffff7fffffff));
      iVar22 = -(uint)(0x7f800000 < (uint)((uVar3 & 0x7fffffff7fffffff) >> 0x20));
      iVar26 = -(uint)((float)uVar3 < 0.0);
      iVar27 = -(uint)((float)(uVar3 >> 0x20) < 0.0);
      uVar5 = CONCAT17((byte)(uVar3 >> 0x38) &
                       ~((byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar22 >> 0x18)),
                       CONCAT16((byte)(uVar3 >> 0x30) &
                                ~((byte)((uint)iVar27 >> 0x10) | (byte)((uint)iVar22 >> 0x10)),
                                CONCAT15((byte)(uVar3 >> 0x28) &
                                         ~((byte)((uint)iVar27 >> 8) | (byte)((uint)iVar22 >> 8)),
                                         CONCAT14((byte)(uVar3 >> 0x20) &
                                                  ~((byte)iVar27 | (byte)iVar22),
                                                  CONCAT13((byte)(uVar3 >> 0x18) &
                                                           ~((byte)((uint)iVar26 >> 0x18) |
                                                            (byte)((uint)iVar17 >> 0x18)),
                                                           CONCAT12((byte)(uVar3 >> 0x10) &
                                                                    ~((byte)((uint)iVar26 >> 0x10) |
                                                                     (byte)((uint)iVar17 >> 0x10)),
                                                                    CONCAT11((byte)(uVar3 >> 8) &
                                                                             ~((byte)((uint)iVar26
                                                                                     >> 8) |
                                                                              (byte)((uint)iVar17 >>
                                                                                    8)),
                                                                             (byte)uVar3 &
                                                                             ~((byte)iVar26 |
                                                                              (byte)iVar17))))))));
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
      fVar28 = (float)*(undefined8 *)(unaff_x29 + -0x150);
      fVar29 = (float)((ulong)*(undefined8 *)(unaff_x29 + -0x150) >> 0x20);
      uVar5 = CONCAT44(fVar29 - (float)(int)fVar29,fVar28 - (float)(int)fVar28);
    }
    lVar15 = *unaff_x24;
    *(undefined8 *)(unaff_x29 + -0x158) = 0;
    *(undefined8 *)(unaff_x29 + -0x160) = uVar5;
    iVar17 = *(int *)(unaff_x29 + -0x140);
    pvVar11 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
      pvVar11 = (void *)(unaff_x29 + -200);
    }
    *(int *)(unaff_x29 + -0x140) = *(int *)(unaff_x29 + -0x170) + iVar17 * iVar1;
    memcpy(*(void **)(unaff_x29 + -0x138),pvVar11,unaff_x26);
    uVar5 = *(undefined8 *)(unaff_x29 + -0xb0);
    uVar12 = *(undefined8 *)(unaff_x29 + -0xa8);
    if (*(int *)(*(long *)UnityEngine_UIElements_LongField_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar15 = *unaff_x24;
    }
    puVar13 = *(undefined8 **)(lVar15 + 0x50);
    iVar22 = *(int *)(*(long *)(lVar15 + 0x48) + 0x28);
    uVar4 = *puVar13;
    *(int *)(unaff_x29 + -0x150) = *(int *)(unaff_x29 + -0x170) + (iVar17 + 1) * iVar1;
    puVar9 = *(undefined8 **)(unaff_x29 + -0x138);
    if (-1 < iVar22) {
      puVar9 = (undefined8 *)*puVar9;
    }
    *(undefined8 *)(unaff_x29 + -0x60) = uVar5;
    *(undefined8 *)(unaff_x29 + -0x58) = uVar12;
    puVar10 = (undefined4 *)(unaff_x29 + -100);
    *(int *)(unaff_x29 + -0x6c) = iVar1;
    *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x140);
    *(int *)(unaff_x29 + -100) = (int)*(undefined8 *)(unaff_x29 + -0x160);
    *(undefined4 *)(unaff_x29 + -0x70) = unaff_s8;
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar9;
    *(undefined4 **)(unaff_x29 + -0x98) = puVar10;
    *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
    (*(code *)puVar13[2])(uVar4,puVar13,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
    lVar15 = *unaff_x24;
    puVar13 = *(undefined8 **)(unaff_x29 + -0x1c0);
    pvVar11 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
      pvVar11 = (void *)(unaff_x29 + -200);
    }
    memcpy(puVar13,pvVar11,unaff_x26);
    puVar9 = *(undefined8 **)(lVar15 + 0x50);
    uVar5 = *puVar9;
    if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
      puVar13 = (undefined8 *)*puVar13;
    }
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined4 *)(unaff_x29 + -0x70) = unaff_s8;
    *puVar10 = (int)((ulong)*(undefined8 *)(unaff_x29 + -0x160) >> 0x20);
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar13;
    *(undefined4 **)(unaff_x29 + -0x98) = puVar10;
    *(int *)(unaff_x29 + -0x6c) = iVar1;
    *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x150);
    *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
    (*(code *)puVar9[2])(uVar5,puVar9,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
    lVar15 = *unaff_x24;
    pvVar11 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
      pvVar11 = (void *)(unaff_x29 + -200);
    }
    puVar9 = *(undefined8 **)(unaff_x29 + -0x1d8);
    memcpy(puVar9,pvVar11,unaff_x26);
    puVar13 = *(undefined8 **)(lVar15 + 0x60);
    uVar5 = *puVar13;
    if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    __n = *(size_t *)(unaff_x29 + -0x1e0);
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar9;
    *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
    *(int *)(unaff_x29 + -100) = (int)*(undefined8 *)(unaff_x29 + -0x160);
    (*(code *)puVar13[2])(uVar5,puVar13,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
    fVar28 = *(float *)(unaff_x29 + -0x60);
    fVar29 = *(float *)(unaff_x29 + -0x5c);
    fVar30 = *(float *)(unaff_x29 + -0x58);
    if (DAT_0452ffe3 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452ffe3 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fVar18 = 1.0 / SQRT(fVar30 * fVar30 + fVar28 * fVar28 + fVar29 * fVar29);
    fVar28 = fVar28 * fVar18;
    fVar29 = fVar29 * fVar18;
    fVar30 = fVar30 * fVar18;
    fVar18 = fVar30 * fVar30 + fVar28 * fVar28 + fVar29 * fVar29;
    if ((fVar18 == 0.0) || (0x7f800000 < (uint)ABS(fVar18))) {
      lVar15 = *unaff_x24;
      pvVar11 = *(void **)(unaff_x29 + -200);
      if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
        pvVar11 = (void *)(unaff_x29 + -200);
      }
      puVar9 = *(undefined8 **)(unaff_x29 + -0x138);
      memcpy(puVar9,pvVar11,unaff_x26);
      fVar28 = DAT_00b92ffc;
      puVar13 = *(undefined8 **)(lVar15 + 0x60);
      uVar5 = *puVar13;
      if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      *(undefined8 **)(unaff_x29 + -0xa0) = puVar9;
      *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
      *(float *)(unaff_x29 + -100) = (float)*(undefined8 *)(unaff_x29 + -0x160) + fVar28;
      (*(code *)puVar13[2])(uVar5,puVar13,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
      fVar28 = *(float *)(unaff_x29 + -0x60);
      fVar29 = *(float *)(unaff_x29 + -0x5c);
      fVar30 = *(float *)(unaff_x29 + -0x58);
      if (DAT_0452ffe3 == '\0') {
        FUN_01c5d288(PTR_DAT_0422fa60);
        DAT_0452ffe3 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar18 = 1.0 / SQRT(fVar30 * fVar30 + fVar28 * fVar28 + fVar29 * fVar29);
      fVar28 = fVar28 * fVar18;
      fVar29 = fVar29 * fVar18;
      fVar30 = fVar30 * fVar18;
    }
    lVar15 = *unaff_x24;
    fVar18 = (float)((ulong)*(undefined8 *)(unaff_x29 + -0x160) >> 0x20);
    pvVar11 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
      pvVar11 = (void *)(unaff_x29 + -200);
    }
    puVar9 = *(undefined8 **)(unaff_x29 + -0x138);
    memcpy(puVar9,pvVar11,unaff_x26);
    puVar13 = *(undefined8 **)(lVar15 + 0x60);
    uVar5 = *puVar13;
    if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    *(float *)(unaff_x29 + -100) = fVar18;
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar9;
    *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
    (*(code *)puVar13[2])(uVar5,puVar13,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
    fVar31 = *(float *)(unaff_x29 + -0x60);
    fVar33 = *(float *)(unaff_x29 + -0x5c);
    fVar34 = *(float *)(unaff_x29 + -0x58);
    if (DAT_0452ffe3 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452ffe3 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fVar19 = 1.0 / SQRT(fVar34 * fVar34 + fVar31 * fVar31 + fVar33 * fVar33);
    fVar31 = fVar31 * fVar19;
    fVar33 = fVar33 * fVar19;
    fVar34 = fVar34 * fVar19;
    *(float *)(unaff_x29 + -0x160) = fVar31;
    fVar31 = fVar34 * fVar34 + fVar31 * fVar31 + fVar33 * fVar33;
    *(float *)(unaff_x29 + -0x170) = fVar33;
    if ((fVar31 == 0.0) || (0x7f800000 < (uint)ABS(fVar31))) {
      lVar15 = *unaff_x24;
      pvVar11 = *(void **)(unaff_x29 + -200);
      if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
        pvVar11 = (void *)(unaff_x29 + -200);
      }
      puVar9 = *(undefined8 **)(unaff_x29 + -0x138);
      memcpy(puVar9,pvVar11,unaff_x26);
      fVar31 = DAT_00b933cc;
      puVar13 = *(undefined8 **)(lVar15 + 0x60);
      uVar5 = *puVar13;
      if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      *(undefined8 **)(unaff_x29 + -0xa0) = puVar9;
      *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
      *(float *)(unaff_x29 + -100) = fVar18 + fVar31;
      (*(code *)puVar13[2])(uVar5,puVar13,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
      fVar18 = *(float *)(unaff_x29 + -0x60);
      fVar31 = *(float *)(unaff_x29 + -0x5c);
      fVar34 = *(float *)(unaff_x29 + -0x58);
      if (DAT_0452ffe3 == '\0') {
        FUN_01c5d288(PTR_DAT_0422fa60);
        DAT_0452ffe3 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar33 = 1.0 / SQRT(fVar34 * fVar34 + fVar18 * fVar18 + fVar31 * fVar31);
      *(float *)(unaff_x29 + -0x160) = fVar18 * fVar33;
      fVar34 = fVar34 * fVar33;
      *(float *)(unaff_x29 + -0x170) = fVar31 * fVar33;
    }
    pvVar14 = *(void **)(unaff_x29 + -0x168);
    pvVar11 = *(void **)(unaff_x29 + -0x1e8);
    if (0 < iVar1) {
      *(float *)(unaff_x29 + -0x138) = -fVar28;
      *(float *)(unaff_x29 + -0x1b4) = -fVar29;
      *(float *)(unaff_x29 + -0x1c0) = -fVar30;
      iVar17 = 0;
      lVar15 = unaff_x29 + -0x60;
      lVar6 = unaff_x29 + -0xa0;
      fVar28 = (360.0 / (float)iVar1) * DAT_00b931d0;
      do {
        puVar13 = *(undefined8 **)(*unaff_x24 + 0x68);
        uVar5 = *puVar13;
        iVar22 = *(int *)(unaff_x29 + -0x140) + iVar17;
        pvVar16 = *(void **)(unaff_x29 + -0x198);
        *(int *)(unaff_x29 + -0x60) = iVar22;
        *(long *)(unaff_x29 + -0xa0) = lVar15;
        *(void **)(unaff_x29 + -0x98) = pvVar16;
        (*(code *)puVar13[2])(uVar5,puVar13,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar16);
        memcpy(pvVar14,pvVar16,__n);
        puVar13 = *(undefined8 **)(*unaff_x24 + 0x68);
        uVar5 = *puVar13;
        iVar1 = *(int *)(unaff_x29 + -0x150) + iVar17;
        pvVar14 = *(void **)(unaff_x29 + -0x1a0);
        *(int *)(unaff_x29 + -0x60) = iVar1;
        *(long *)(unaff_x29 + -0xa0) = lVar15;
        *(void **)(unaff_x29 + -0x98) = pvVar14;
        (*(code *)puVar13[2])(uVar5,puVar13,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar14);
        memcpy(pvVar11,pvVar14,__n);
        uVar23 = *(undefined4 *)(unaff_x29 + -0x1b4);
        uVar25 = *(undefined4 *)(unaff_x29 + -0x1c0);
        uVar20 = FUN_03a4388c(*(undefined4 *)(unaff_x29 + -0x138),0);
        lVar7 = *unaff_x24;
        lVar8 = *(long *)(lVar7 + 0x70);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
          lVar7 = *unaff_x24;
        }
        puVar2 = PTR_DAT_0422fa60;
        uVar5 = *(undefined8 *)(lVar7 + 0x78);
        uVar12 = *(undefined8 *)(unaff_x29 + -0x168);
        *(undefined4 *)(unaff_x29 + -0xa0) = uVar20;
        *(undefined4 *)(unaff_x29 + -0x9c) = uVar23;
        *(undefined4 *)(unaff_x29 + -0x98) = uVar25;
        *(long *)(unaff_x29 + -0x60) = lVar6;
        FUN_01c5dc8c(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x178),uVar12,unaff_x29 + -0x60,
                     unaff_x29 + -0xa0);
        if (DAT_0452ffe4 == '\0') {
          FUN_01c5d288(puVar2);
          DAT_0452ffe4 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        dVar32 = (double)(fVar28 * (float)iVar17);
        dVar21 = cos(dVar32);
        if (DAT_0452ffe5 == '\0') {
          FUN_01c5d288(puVar2);
          DAT_0452ffe5 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        dVar32 = sin(dVar32);
        fVar30 = (float)dVar32 * 0.5 + 0.5;
        fVar29 = fVar30;
        uVar20 = FUN_03a42f88((float)dVar21 * 0.5 + 0.5,0);
        lVar7 = *unaff_x24;
        lVar8 = *(long *)(lVar7 + 0x70);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
          lVar7 = *unaff_x24;
        }
        uVar5 = *(undefined8 *)(lVar7 + 0x80);
        *(undefined4 *)(unaff_x29 + -0xa0) = uVar20;
        *(float *)(unaff_x29 + -0x9c) = fVar29;
        *(long *)(unaff_x29 + -0x60) = lVar6;
        FUN_01c5dc8c(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x180),uVar12,unaff_x29 + -0x60,
                     unaff_x29 + -0xa0);
        uVar23 = *(undefined4 *)(unaff_x29 + -0x170);
        fVar29 = fVar34;
        uVar20 = FUN_03a4388c(*(undefined4 *)(unaff_x29 + -0x160),0);
        lVar7 = *unaff_x24;
        lVar8 = *(long *)(lVar7 + 0x70);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
          lVar7 = *unaff_x24;
        }
        uVar5 = *(undefined8 *)(lVar7 + 0x78);
        *(undefined4 *)(unaff_x29 + -0xa0) = uVar20;
        *(undefined4 *)(unaff_x29 + -0x9c) = uVar23;
        *(float *)(unaff_x29 + -0x98) = fVar29;
        *(long *)(unaff_x29 + -0x60) = lVar6;
        FUN_01c5dc8c(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x188),pvVar11,unaff_x29 + -0x60,
                     unaff_x29 + -0xa0);
        if (DAT_0452ffe4 == '\0') {
          FUN_01c5d288(puVar2);
          DAT_0452ffe4 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (DAT_0452ffe5 == '\0') {
          FUN_01c5d288(puVar2);
          DAT_0452ffe5 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar20 = FUN_03a42f88(0.5 - (float)dVar21 * 0.5,0);
        lVar7 = *unaff_x24;
        lVar8 = *(long *)(lVar7 + 0x70);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
          lVar7 = *unaff_x24;
        }
        uVar5 = *(undefined8 *)(lVar7 + 0x80);
        *(undefined4 *)(unaff_x29 + -0xa0) = uVar20;
        *(float *)(unaff_x29 + -0x9c) = fVar30;
        *(long *)(unaff_x29 + -0x60) = lVar6;
        FUN_01c5dc8c(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -400),pvVar11,unaff_x29 + -0x60,
                     unaff_x29 + -0xa0);
        pvVar16 = *(void **)(unaff_x29 + -0x1a8);
        pvVar14 = *(void **)(unaff_x29 + -0x168);
        memcpy(pvVar16,pvVar14,__n);
        puVar13 = *(undefined8 **)(*unaff_x24 + 0x88);
        uVar5 = *puVar13;
        *(int *)(unaff_x29 + -0x60) = iVar22;
        *(long *)(unaff_x29 + -0xa0) = lVar15;
        *(void **)(unaff_x29 + -0x98) = pvVar16;
        (*(code *)puVar13[2])(uVar5,puVar13,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar16);
        pvVar16 = *(void **)(unaff_x29 + -0x1b0);
        memcpy(pvVar16,pvVar11,__n);
        puVar13 = *(undefined8 **)(*unaff_x24 + 0x88);
        uVar5 = *puVar13;
        *(int *)(unaff_x29 + -0x60) = iVar1;
        *(long *)(unaff_x29 + -0xa0) = lVar15;
        *(void **)(unaff_x29 + -0x98) = pvVar16;
        (*(code *)puVar13[2])(uVar5,puVar13,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar16);
        iVar17 = iVar17 + 1;
      } while (*(int *)(unaff_x29 + -0x13c) != iVar17);
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x1c8) + 0x28) == *(long *)(unaff_x29 + -0x50)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


