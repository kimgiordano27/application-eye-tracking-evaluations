/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector4s>
ENTRY_POINT: 023e0c58
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


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector4s>
               (float param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  long lVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  undefined4 *puVar9;
  void *pvVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  int unaff_w22;
  long lVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x25;
  size_t __n;
  size_t unaff_x26;
  int unaff_w27;
  undefined8 *puVar13;
  void *pvVar14;
  void *pvVar15;
  long unaff_x29;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  int iVar22;
  ulong uVar20;
  double dVar21;
  undefined4 uVar23;
  ulong uVar24;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  undefined4 unaff_s8;
  float fVar28;
  float unaff_s9;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  
  while( true ) {
    iVar1 = *(int *)(in_x9 + -0x100);
    *(undefined8 *)(unaff_x29 + -0x60) = unaff_x21;
    *(undefined8 *)(unaff_x29 + -0x58) = unaff_x23;
    *(undefined4 *)(unaff_x29 + -0x70) = unaff_s8;
    *(int *)(unaff_x29 + -0x6c) = iVar1;
    *(int *)(unaff_x29 + -0x68) = unaff_w27;
    *(float *)(unaff_x29 + -100) = (float)param_2 + param_1;
    *(undefined8 *)(unaff_x29 + -0x78) = unaff_x25;
    (*(code *)param_4[2])(param_3,param_4,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
    unaff_w22 = unaff_w22 + 1;
    unaff_w27 = unaff_w27 + iVar1;
    if (*(int *)(unaff_x29 + -0x140) == unaff_w22) break;
    lVar12 = *unaff_x19;
    pvVar10 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
      pvVar10 = (void *)(unaff_x29 + -200);
    }
    memcpy(*(void **)(unaff_x29 + -0x138),pvVar10,unaff_x26);
    unaff_x21 = *(undefined8 *)(unaff_x29 + -0xb0);
    unaff_x23 = *(undefined8 *)(unaff_x29 + -0xa8);
    if (*(int *)(*(long *)UnityEngine_UIElements_LongField_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar12 = *unaff_x19;
    }
    param_4 = *(undefined8 **)(lVar12 + 0x50);
    puVar13 = *(undefined8 **)(unaff_x29 + -0x138);
    param_3 = *param_4;
    if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
      puVar13 = (undefined8 *)*puVar13;
    }
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar13;
    *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
    *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
    *(undefined8 *)(unaff_x29 + -0x80) = unaff_x20;
    in_x9 = unaff_x29 + -0x3c;
    param_1 = (float)*(undefined8 *)(unaff_x29 + -0x160) * ((float)unaff_w22 / unaff_s9);
    param_2 = *(undefined8 *)(unaff_x29 + -0x150);
  }
  if (*(int *)(unaff_x29 + -0x1b4) != 0) {
    lVar7 = *unaff_x19;
    lVar5 = *(long *)(lVar7 + 0x48);
    lVar12 = lVar5;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394(lVar5);
      lVar7 = *unaff_x19;
      lVar12 = *(long *)(lVar7 + 0x48);
    }
    lVar6 = *(long *)(unaff_x29 + -200);
    if (-1 < *(int *)(lVar12 + 0x28)) {
      lVar6 = unaff_x29 + -200;
    }
    FUN_01c5dc8c(lVar5,*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(unaff_x29 + -0x1d0),lVar6,0,
                 unaff_x29 + -0xa0);
    if (*(char *)(unaff_x29 + -0xa0) == '\0') {
      uVar20 = *(ulong *)(unaff_x29 + -0x150);
      uVar24 = NEON_fmov(0x3f800000,4);
      iVar26 = -(uint)((float)uVar24 < (float)uVar20);
      iVar27 = -(uint)((float)(uVar24 >> 0x20) < (float)(uVar20 >> 0x20));
      iVar16 = -(uint)(0x7f800000 < (uint)(uVar20 & 0x7fffffff7fffffff));
      iVar22 = -(uint)(0x7f800000 < (uint)((uVar20 & 0x7fffffff7fffffff) >> 0x20));
      uVar20 = uVar20 ^ (uVar20 ^ uVar24) &
                        CONCAT17((byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar22 >> 0x18),
                                 CONCAT16((byte)((uint)iVar27 >> 0x10) |
                                          (byte)((uint)iVar22 >> 0x10),
                                          CONCAT15((byte)((uint)iVar27 >> 8) |
                                                   (byte)((uint)iVar22 >> 8),
                                                   CONCAT14((byte)iVar27 | (byte)iVar22,
                                                            CONCAT13((byte)((uint)iVar26 >> 0x18) |
                                                                     (byte)((uint)iVar16 >> 0x18),
                                                                     CONCAT12((byte)((uint)iVar26 >>
                                                                                    0x10) |
                                                                              (byte)((uint)iVar16 >>
                                                                                    0x10),
                                                                              CONCAT11((byte)((uint)
                                                  iVar26 >> 8) | (byte)((uint)iVar16 >> 8),
                                                  (byte)iVar26 | (byte)iVar16)))))));
      iVar16 = -(uint)(0x7f800000 < (uint)(uVar20 & 0x7fffffff7fffffff));
      iVar22 = -(uint)(0x7f800000 < (uint)((uVar20 & 0x7fffffff7fffffff) >> 0x20));
      iVar26 = -(uint)((float)uVar20 < 0.0);
      iVar27 = -(uint)((float)(uVar20 >> 0x20) < 0.0);
      uVar4 = CONCAT17((byte)(uVar20 >> 0x38) &
                       ~((byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar22 >> 0x18)),
                       CONCAT16((byte)(uVar20 >> 0x30) &
                                ~((byte)((uint)iVar27 >> 0x10) | (byte)((uint)iVar22 >> 0x10)),
                                CONCAT15((byte)(uVar20 >> 0x28) &
                                         ~((byte)((uint)iVar27 >> 8) | (byte)((uint)iVar22 >> 8)),
                                         CONCAT14((byte)(uVar20 >> 0x20) &
                                                  ~((byte)iVar27 | (byte)iVar22),
                                                  CONCAT13((byte)(uVar20 >> 0x18) &
                                                           ~((byte)((uint)iVar26 >> 0x18) |
                                                            (byte)((uint)iVar16 >> 0x18)),
                                                           CONCAT12((byte)(uVar20 >> 0x10) &
                                                                    ~((byte)((uint)iVar26 >> 0x10) |
                                                                     (byte)((uint)iVar16 >> 0x10)),
                                                                    CONCAT11((byte)(uVar20 >> 8) &
                                                                             ~((byte)((uint)iVar26
                                                                                     >> 8) |
                                                                              (byte)((uint)iVar16 >>
                                                                                    8)),
                                                                             (byte)uVar20 &
                                                                             ~((byte)iVar26 |
                                                                              (byte)iVar16))))))));
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
      uVar4 = CONCAT44(fVar29 - (float)(int)fVar29,fVar28 - (float)(int)fVar28);
    }
    lVar12 = *unaff_x19;
    *(undefined8 *)(unaff_x29 + -0x158) = 0;
    *(undefined8 *)(unaff_x29 + -0x160) = uVar4;
    iVar16 = *(int *)(unaff_x29 + -0x140);
    pvVar10 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
      pvVar10 = (void *)(unaff_x29 + -200);
    }
    *(int *)(unaff_x29 + -0x140) = *(int *)(unaff_x29 + -0x170) + iVar16 * iVar1;
    memcpy(*(void **)(unaff_x29 + -0x138),pvVar10,unaff_x26);
    uVar4 = *(undefined8 *)(unaff_x29 + -0xb0);
    uVar11 = *(undefined8 *)(unaff_x29 + -0xa8);
    if (*(int *)(*(long *)UnityEngine_UIElements_LongField_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar12 = *unaff_x19;
    }
    puVar13 = *(undefined8 **)(lVar12 + 0x50);
    iVar22 = *(int *)(*(long *)(lVar12 + 0x48) + 0x28);
    uVar3 = *puVar13;
    *(int *)(unaff_x29 + -0x150) = *(int *)(unaff_x29 + -0x170) + (iVar16 + 1) * iVar1;
    puVar8 = *(undefined8 **)(unaff_x29 + -0x138);
    if (-1 < iVar22) {
      puVar8 = (undefined8 *)*puVar8;
    }
    *(undefined8 *)(unaff_x29 + -0x60) = uVar4;
    *(undefined8 *)(unaff_x29 + -0x58) = uVar11;
    puVar9 = (undefined4 *)(unaff_x29 + -100);
    *(int *)(unaff_x29 + -0x6c) = iVar1;
    *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x140);
    *(int *)(unaff_x29 + -100) = (int)*(undefined8 *)(unaff_x29 + -0x160);
    *(undefined4 *)(unaff_x29 + -0x70) = unaff_s8;
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar8;
    *(undefined4 **)(unaff_x29 + -0x98) = puVar9;
    *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
    (*(code *)puVar13[2])(uVar3,puVar13,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
    lVar12 = *unaff_x19;
    puVar13 = *(undefined8 **)(unaff_x29 + -0x1c0);
    pvVar10 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
      pvVar10 = (void *)(unaff_x29 + -200);
    }
    memcpy(puVar13,pvVar10,unaff_x26);
    puVar8 = *(undefined8 **)(lVar12 + 0x50);
    uVar4 = *puVar8;
    if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
      puVar13 = (undefined8 *)*puVar13;
    }
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined4 *)(unaff_x29 + -0x70) = unaff_s8;
    *puVar9 = (int)((ulong)*(undefined8 *)(unaff_x29 + -0x160) >> 0x20);
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar13;
    *(undefined4 **)(unaff_x29 + -0x98) = puVar9;
    *(int *)(unaff_x29 + -0x6c) = iVar1;
    *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x150);
    *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
    *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
    (*(code *)puVar8[2])(uVar4,puVar8,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
    lVar12 = *unaff_x19;
    pvVar10 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
      pvVar10 = (void *)(unaff_x29 + -200);
    }
    puVar8 = *(undefined8 **)(unaff_x29 + -0x1d8);
    memcpy(puVar8,pvVar10,unaff_x26);
    puVar13 = *(undefined8 **)(lVar12 + 0x60);
    uVar4 = *puVar13;
    if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    __n = *(size_t *)(unaff_x29 + -0x1e0);
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar8;
    *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
    *(int *)(unaff_x29 + -100) = (int)*(undefined8 *)(unaff_x29 + -0x160);
    (*(code *)puVar13[2])(uVar4,puVar13,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
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
    fVar17 = 1.0 / SQRT(fVar30 * fVar30 + fVar28 * fVar28 + fVar29 * fVar29);
    fVar28 = fVar28 * fVar17;
    fVar29 = fVar29 * fVar17;
    fVar30 = fVar30 * fVar17;
    fVar17 = fVar30 * fVar30 + fVar28 * fVar28 + fVar29 * fVar29;
    if ((fVar17 == 0.0) || (0x7f800000 < (uint)ABS(fVar17))) {
      lVar12 = *unaff_x19;
      pvVar10 = *(void **)(unaff_x29 + -200);
      if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
        pvVar10 = (void *)(unaff_x29 + -200);
      }
      puVar8 = *(undefined8 **)(unaff_x29 + -0x138);
      memcpy(puVar8,pvVar10,unaff_x26);
      fVar28 = DAT_00b92ffc;
      puVar13 = *(undefined8 **)(lVar12 + 0x60);
      uVar4 = *puVar13;
      if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
        puVar8 = (undefined8 *)*puVar8;
      }
      *(undefined8 **)(unaff_x29 + -0xa0) = puVar8;
      *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
      *(float *)(unaff_x29 + -100) = (float)*(undefined8 *)(unaff_x29 + -0x160) + fVar28;
      (*(code *)puVar13[2])(uVar4,puVar13,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
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
      fVar17 = 1.0 / SQRT(fVar30 * fVar30 + fVar28 * fVar28 + fVar29 * fVar29);
      fVar28 = fVar28 * fVar17;
      fVar29 = fVar29 * fVar17;
      fVar30 = fVar30 * fVar17;
    }
    lVar12 = *unaff_x19;
    fVar17 = (float)((ulong)*(undefined8 *)(unaff_x29 + -0x160) >> 0x20);
    pvVar10 = *(void **)(unaff_x29 + -200);
    if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
      pvVar10 = (void *)(unaff_x29 + -200);
    }
    puVar8 = *(undefined8 **)(unaff_x29 + -0x138);
    memcpy(puVar8,pvVar10,unaff_x26);
    puVar13 = *(undefined8 **)(lVar12 + 0x60);
    uVar4 = *puVar13;
    if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    *(float *)(unaff_x29 + -100) = fVar17;
    *(undefined8 **)(unaff_x29 + -0xa0) = puVar8;
    *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
    (*(code *)puVar13[2])(uVar4,puVar13,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
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
    fVar18 = 1.0 / SQRT(fVar34 * fVar34 + fVar31 * fVar31 + fVar33 * fVar33);
    fVar31 = fVar31 * fVar18;
    fVar33 = fVar33 * fVar18;
    fVar34 = fVar34 * fVar18;
    *(float *)(unaff_x29 + -0x160) = fVar31;
    fVar31 = fVar34 * fVar34 + fVar31 * fVar31 + fVar33 * fVar33;
    *(float *)(unaff_x29 + -0x170) = fVar33;
    if ((fVar31 == 0.0) || (0x7f800000 < (uint)ABS(fVar31))) {
      lVar12 = *unaff_x19;
      pvVar10 = *(void **)(unaff_x29 + -200);
      if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
        pvVar10 = (void *)(unaff_x29 + -200);
      }
      puVar8 = *(undefined8 **)(unaff_x29 + -0x138);
      memcpy(puVar8,pvVar10,unaff_x26);
      fVar31 = DAT_00b933cc;
      puVar13 = *(undefined8 **)(lVar12 + 0x60);
      uVar4 = *puVar13;
      if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
        puVar8 = (undefined8 *)*puVar8;
      }
      *(undefined8 **)(unaff_x29 + -0xa0) = puVar8;
      *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
      *(float *)(unaff_x29 + -100) = fVar17 + fVar31;
      (*(code *)puVar13[2])(uVar4,puVar13,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
      fVar17 = *(float *)(unaff_x29 + -0x60);
      fVar31 = *(float *)(unaff_x29 + -0x5c);
      fVar34 = *(float *)(unaff_x29 + -0x58);
      if (DAT_0452ffe3 == '\0') {
        FUN_01c5d288(PTR_DAT_0422fa60);
        DAT_0452ffe3 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar33 = 1.0 / SQRT(fVar34 * fVar34 + fVar17 * fVar17 + fVar31 * fVar31);
      *(float *)(unaff_x29 + -0x160) = fVar17 * fVar33;
      fVar34 = fVar34 * fVar33;
      *(float *)(unaff_x29 + -0x170) = fVar31 * fVar33;
    }
    pvVar14 = *(void **)(unaff_x29 + -0x168);
    pvVar10 = *(void **)(unaff_x29 + -0x1e8);
    if (0 < iVar1) {
      *(float *)(unaff_x29 + -0x138) = -fVar28;
      *(float *)(unaff_x29 + -0x1b4) = -fVar29;
      *(float *)(unaff_x29 + -0x1c0) = -fVar30;
      iVar16 = 0;
      lVar12 = unaff_x29 + -0x60;
      lVar5 = unaff_x29 + -0xa0;
      fVar28 = (360.0 / (float)iVar1) * DAT_00b931d0;
      do {
        puVar13 = *(undefined8 **)(*unaff_x19 + 0x68);
        uVar4 = *puVar13;
        iVar1 = *(int *)(unaff_x29 + -0x140) + iVar16;
        pvVar15 = *(void **)(unaff_x29 + -0x198);
        *(int *)(unaff_x29 + -0x60) = iVar1;
        *(long *)(unaff_x29 + -0xa0) = lVar12;
        *(void **)(unaff_x29 + -0x98) = pvVar15;
        (*(code *)puVar13[2])(uVar4,puVar13,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar15);
        memcpy(pvVar14,pvVar15,__n);
        puVar13 = *(undefined8 **)(*unaff_x19 + 0x68);
        uVar4 = *puVar13;
        iVar22 = *(int *)(unaff_x29 + -0x150) + iVar16;
        pvVar14 = *(void **)(unaff_x29 + -0x1a0);
        *(int *)(unaff_x29 + -0x60) = iVar22;
        *(long *)(unaff_x29 + -0xa0) = lVar12;
        *(void **)(unaff_x29 + -0x98) = pvVar14;
        (*(code *)puVar13[2])(uVar4,puVar13,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar14);
        memcpy(pvVar10,pvVar14,__n);
        uVar23 = *(undefined4 *)(unaff_x29 + -0x1b4);
        uVar25 = *(undefined4 *)(unaff_x29 + -0x1c0);
        uVar19 = FUN_03a4388c(*(undefined4 *)(unaff_x29 + -0x138),0);
        lVar6 = *unaff_x19;
        lVar7 = *(long *)(lVar6 + 0x70);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01c72394();
          lVar6 = *unaff_x19;
        }
        puVar2 = PTR_DAT_0422fa60;
        uVar4 = *(undefined8 *)(lVar6 + 0x78);
        uVar11 = *(undefined8 *)(unaff_x29 + -0x168);
        *(undefined4 *)(unaff_x29 + -0xa0) = uVar19;
        *(undefined4 *)(unaff_x29 + -0x9c) = uVar23;
        *(undefined4 *)(unaff_x29 + -0x98) = uVar25;
        *(long *)(unaff_x29 + -0x60) = lVar5;
        FUN_01c5dc8c(lVar7,uVar4,*(undefined8 *)(unaff_x29 + -0x178),uVar11,unaff_x29 + -0x60,
                     unaff_x29 + -0xa0);
        if (DAT_0452ffe4 == '\0') {
          FUN_01c5d288(puVar2);
          DAT_0452ffe4 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        dVar32 = (double)(fVar28 * (float)iVar16);
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
        uVar19 = FUN_03a42f88((float)dVar21 * 0.5 + 0.5,0);
        lVar6 = *unaff_x19;
        lVar7 = *(long *)(lVar6 + 0x70);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01c72394();
          lVar6 = *unaff_x19;
        }
        uVar4 = *(undefined8 *)(lVar6 + 0x80);
        *(undefined4 *)(unaff_x29 + -0xa0) = uVar19;
        *(float *)(unaff_x29 + -0x9c) = fVar29;
        *(long *)(unaff_x29 + -0x60) = lVar5;
        FUN_01c5dc8c(lVar7,uVar4,*(undefined8 *)(unaff_x29 + -0x180),uVar11,unaff_x29 + -0x60,
                     unaff_x29 + -0xa0);
        uVar23 = *(undefined4 *)(unaff_x29 + -0x170);
        fVar29 = fVar34;
        uVar19 = FUN_03a4388c(*(undefined4 *)(unaff_x29 + -0x160),0);
        lVar6 = *unaff_x19;
        lVar7 = *(long *)(lVar6 + 0x70);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01c72394();
          lVar6 = *unaff_x19;
        }
        uVar4 = *(undefined8 *)(lVar6 + 0x78);
        *(undefined4 *)(unaff_x29 + -0xa0) = uVar19;
        *(undefined4 *)(unaff_x29 + -0x9c) = uVar23;
        *(float *)(unaff_x29 + -0x98) = fVar29;
        *(long *)(unaff_x29 + -0x60) = lVar5;
        FUN_01c5dc8c(lVar7,uVar4,*(undefined8 *)(unaff_x29 + -0x188),pvVar10,unaff_x29 + -0x60,
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
        uVar19 = FUN_03a42f88(0.5 - (float)dVar21 * 0.5,0);
        lVar6 = *unaff_x19;
        lVar7 = *(long *)(lVar6 + 0x70);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01c72394();
          lVar6 = *unaff_x19;
        }
        uVar4 = *(undefined8 *)(lVar6 + 0x80);
        *(undefined4 *)(unaff_x29 + -0xa0) = uVar19;
        *(float *)(unaff_x29 + -0x9c) = fVar30;
        *(long *)(unaff_x29 + -0x60) = lVar5;
        FUN_01c5dc8c(lVar7,uVar4,*(undefined8 *)(unaff_x29 + -400),pvVar10,unaff_x29 + -0x60,
                     unaff_x29 + -0xa0);
        pvVar15 = *(void **)(unaff_x29 + -0x1a8);
        pvVar14 = *(void **)(unaff_x29 + -0x168);
        memcpy(pvVar15,pvVar14,__n);
        puVar13 = *(undefined8 **)(*unaff_x19 + 0x88);
        uVar4 = *puVar13;
        *(int *)(unaff_x29 + -0x60) = iVar1;
        *(long *)(unaff_x29 + -0xa0) = lVar12;
        *(void **)(unaff_x29 + -0x98) = pvVar15;
        (*(code *)puVar13[2])(uVar4,puVar13,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar15);
        pvVar15 = *(void **)(unaff_x29 + -0x1b0);
        memcpy(pvVar15,pvVar10,__n);
        puVar13 = *(undefined8 **)(*unaff_x19 + 0x88);
        uVar4 = *puVar13;
        *(int *)(unaff_x29 + -0x60) = iVar22;
        *(long *)(unaff_x29 + -0xa0) = lVar12;
        *(void **)(unaff_x29 + -0x98) = pvVar15;
        (*(code *)puVar13[2])(uVar4,puVar13,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar15);
        iVar16 = iVar16 + 1;
      } while (*(int *)(unaff_x29 + -0x13c) != iVar16);
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x1c8) + 0x28) == *(long *)(unaff_x29 + -0x50)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


