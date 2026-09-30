/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector2f>
ENTRY_POINT: 023e07fc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector2f>(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined8 unaff_x20;
  size_t unaff_x21;
  long *unaff_x24;
  int *unaff_x25;
  size_t __n;
  size_t unaff_x26;
  int unaff_w27;
  undefined8 *puVar16;
  void *pvVar17;
  void *pvVar18;
  long unaff_x29;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  int iVar24;
  double dVar23;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  
  uVar12 = unaff_x26 + 0xf & 0x1fffffff0;
  *(ulong *)(unaff_x29 + -0x138) = (long)&stack0x00000000 - uVar12;
  lVar9 = ((long)&stack0x00000000 - uVar12) - uVar12;
  *(long *)(unaff_x29 + -0x1c0) = lVar9;
  lVar9 = lVar9 - uVar12;
  uVar12 = unaff_x21 + 0xf & 0x1fffffff0;
  lVar10 = lVar9 - uVar12;
  *(long *)(unaff_x29 + -0x198) = lVar10;
  lVar10 = lVar10 - uVar12;
  *(long *)(unaff_x29 + -0x1a0) = lVar10;
  lVar10 = lVar10 - uVar12;
  *(long *)(unaff_x29 + -0x1a8) = lVar10;
  lVar10 = lVar10 - uVar12;
  *(long *)(unaff_x29 + -0x1b0) = lVar10;
  pvVar4 = (void *)(lVar10 - uVar12);
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(void **)(unaff_x29 + -0x168) = pvVar4;
  memset(pvVar4,0,unaff_x21);
  memset((void *)((long)pvVar4 - uVar12),0,unaff_x21);
  iVar1 = *unaff_x25;
  uVar22 = *(undefined8 *)(unaff_x25 + 3);
  iVar29 = unaff_x25[5];
  *(int *)(unaff_x29 + -0x140) = unaff_x25[1];
  *(undefined8 *)(unaff_x29 + -0x148) = 0;
  *(undefined8 *)(unaff_x29 + -0x150) = uVar22;
  puVar8 = UnityEngine_UIElements_LongField_TypeInfo;
  uVar5 = *(undefined8 *)unaff_x25;
  uVar22 = *(undefined8 *)(unaff_x25 + 4);
  bVar2 = *(byte *)(unaff_x25 + 2);
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x25 + 2);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x90) = uVar22;
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0x98);
  *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xa0);
  *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x90);
  FUN_03c64188(unaff_x29 + -0xf0,unaff_x29 + -0xcc,unaff_x29 + -0xd0,0);
  if (iVar1 < 3) {
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar5 = thunk_FUN_01c496e0();
    uVar22 = thunk_FUN_01c273e8(System_ComponentModel_LookupBindingPropertiesAttribute_TypeInfo);
    puVar8 = System_Data_LookupNode_TypeInfo;
  }
  else {
    if (1 < *(int *)(unaff_x29 + -0x140)) {
      iVar3 = (*(code *)**(undefined8 **)(*unaff_x24 + 8))(unaff_x29 + -0xb0);
      if (iVar3 < *(int *)(unaff_x29 + -0xcc)) {
        *(int *)(unaff_x29 + -0xa0) = *(int *)(unaff_x29 + -0xcc);
        puVar8 = PTR_DAT_0422fd80;
        uVar22 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
        uVar5 = thunk_FUN_01c49334(uVar22,unaff_x29 + -0xa0);
        lVar9 = *(long *)(unaff_x29 + -0x170);
        uVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 8))(unaff_x29 + -0xb0);
        *(undefined4 *)(unaff_x29 + -0x60) = uVar21;
        uVar22 = thunk_FUN_01c273e8(puVar8);
        uVar22 = thunk_FUN_01c49334(uVar22,unaff_x29 + -0x60);
        puVar8 = System_Security_Cryptography_MACTripleDES_TypeInfo;
LAB_023e1904:
        uVar7 = thunk_FUN_01c273e8(puVar8);
        uVar22 = FUN_031536d4(uVar7,uVar5,uVar22,0);
        thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
        uVar5 = thunk_FUN_01c496e0();
        FUN_03247e00(uVar5,uVar22,0);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar5,lVar9);
      }
      *(uint *)(unaff_x29 + -0x1b4) = (uint)bVar2;
      *(long *)(unaff_x29 + -0x1d8) = lVar9;
      iVar3 = (*(code *)**(undefined8 **)(*unaff_x24 + 0x20))(unaff_x29 + -0xc0);
      puVar8 = PTR_DAT_0422fb28;
      if (iVar3 < *(int *)(unaff_x29 + -0xd0)) {
        *(int *)(unaff_x29 + -0xa0) = *(int *)(unaff_x29 + -0xd0);
        puVar8 = PTR_DAT_0422fd80;
        uVar22 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
        uVar5 = thunk_FUN_01c49334(uVar22,unaff_x29 + -0xa0);
        lVar9 = *(long *)(unaff_x29 + -0x170);
        uVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 0x20))(unaff_x29 + -0xc0);
        *(undefined4 *)(unaff_x29 + -0x60) = uVar21;
        uVar22 = thunk_FUN_01c273e8(puVar8);
        uVar22 = thunk_FUN_01c49334(uVar22,unaff_x29 + -0x60);
        puVar8 = System_Runtime_Remoting_Messaging_MCMDictionary_TypeInfo;
        goto LAB_023e1904;
      }
      uVar22 = *(undefined8 *)(*unaff_x24 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar22 = FUN_032e04b8(uVar22,0);
      uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
      uVar6 = FUN_032e935c(uVar22,uVar5,0);
      lVar9 = *unaff_x24;
      *(size_t *)(unaff_x29 + -0x1e0) = unaff_x21;
      *(void **)(unaff_x29 + -0x1e8) = (void *)((long)pvVar4 - uVar12);
      *(undefined8 *)(unaff_x29 + -0x1c8) = unaff_x20;
      if ((uVar6 & 1) != 0) {
        auVar37 = (*(code *)**(undefined8 **)(lVar9 + 0x38))(unaff_x29 + -0xc0);
        puVar8 = UnityEngine_UIElements_LongField_TypeInfo;
        uVar5 = *(undefined8 *)(unaff_x25 + 2);
        uVar22 = *(undefined8 *)unaff_x25;
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x25 + 4);
        *(undefined8 *)(unaff_x29 + -0x98) = uVar5;
        *(undefined8 *)(unaff_x29 + -0xa0) = uVar22;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0x90);
        *(undefined8 *)(unaff_x29 + -0x108) = *(undefined8 *)(unaff_x29 + -0x98);
        *(undefined8 *)(unaff_x29 + -0x110) = *(undefined8 *)(unaff_x29 + -0xa0);
        FUN_03c641cc(auVar37._0_8_,auVar37._8_8_,unaff_x29 + -0x110,unaff_w27,
                     *(undefined4 *)(unaff_x29 + -0x160),0);
LAB_023e0b64:
        iVar24 = *(int *)(unaff_x29 + -0x140);
        iVar3 = 0;
        fVar30 = (float)((ulong)*(undefined8 *)(unaff_x29 + -0x150) >> 0x20);
        *(undefined8 *)(unaff_x29 + -0x158) = 0;
        *(ulong *)(unaff_x29 + -0x160) =
             CONCAT44(fVar30 - fVar30,fVar30 - (float)*(undefined8 *)(unaff_x29 + -0x150));
        *(int *)(unaff_x29 + -0x170) = unaff_w27;
        *(int *)(unaff_x29 + -0x13c) = iVar1;
        do {
          lVar9 = *unaff_x24;
          pvVar4 = *(void **)(unaff_x29 + -200);
          if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
            pvVar4 = (void *)(unaff_x29 + -200);
          }
          memcpy(*(void **)(unaff_x29 + -0x138),pvVar4,unaff_x26);
          uVar22 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar5 = *(undefined8 *)(unaff_x29 + -0xa8);
          if (*(int *)(*(long *)UnityEngine_UIElements_LongField_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *unaff_x24;
          }
          puVar16 = *(undefined8 **)(lVar9 + 0x50);
          puVar14 = *(undefined8 **)(unaff_x29 + -0x138);
          uVar7 = *puVar16;
          if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
            puVar14 = (undefined8 *)*puVar14;
          }
          *(undefined8 **)(unaff_x29 + -0xa0) = puVar14;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
          iVar1 = *(int *)(unaff_x29 + -0x13c);
          *(undefined8 *)(unaff_x29 + -0x60) = uVar22;
          *(undefined8 *)(unaff_x29 + -0x58) = uVar5;
          *(int *)(unaff_x29 + -0x70) = iVar29;
          *(int *)(unaff_x29 + -0x6c) = iVar1;
          *(int *)(unaff_x29 + -0x68) = unaff_w27;
          *(float *)(unaff_x29 + -100) =
               (float)*(undefined8 *)(unaff_x29 + -0x150) +
               (float)*(undefined8 *)(unaff_x29 + -0x160) * ((float)iVar3 / ((float)iVar24 + -1.0));
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
          (*(code *)puVar16[2])(uVar7,puVar16,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
          iVar3 = iVar3 + 1;
          unaff_w27 = unaff_w27 + iVar1;
        } while (*(int *)(unaff_x29 + -0x140) != iVar3);
        if (*(int *)(unaff_x29 + -0x1b4) != 0) {
          lVar13 = *unaff_x24;
          lVar10 = *(long *)(lVar13 + 0x48);
          lVar9 = lVar10;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394(lVar10);
            lVar13 = *unaff_x24;
            lVar9 = *(long *)(lVar13 + 0x48);
          }
          lVar11 = *(long *)(unaff_x29 + -200);
          if (-1 < *(int *)(lVar9 + 0x28)) {
            lVar11 = unaff_x29 + -200;
          }
          FUN_01c5dc8c(lVar10,*(undefined8 *)(lVar13 + 0x58),*(undefined8 *)(unaff_x29 + -0x1d0),
                       lVar11,0,unaff_x29 + -0xa0);
          if (*(char *)(unaff_x29 + -0xa0) == '\0') {
            uVar12 = *(ulong *)(unaff_x29 + -0x150);
            uVar6 = NEON_fmov(0x3f800000,4);
            iVar27 = -(uint)((float)uVar6 < (float)uVar12);
            iVar28 = -(uint)((float)(uVar6 >> 0x20) < (float)(uVar12 >> 0x20));
            iVar3 = -(uint)(0x7f800000 < (uint)(uVar12 & 0x7fffffff7fffffff));
            iVar24 = -(uint)(0x7f800000 < (uint)((uVar12 & 0x7fffffff7fffffff) >> 0x20));
            uVar12 = uVar12 ^ (uVar12 ^ uVar6) &
                              CONCAT17((byte)((uint)iVar28 >> 0x18) | (byte)((uint)iVar24 >> 0x18),
                                       CONCAT16((byte)((uint)iVar28 >> 0x10) |
                                                (byte)((uint)iVar24 >> 0x10),
                                                CONCAT15((byte)((uint)iVar28 >> 8) |
                                                         (byte)((uint)iVar24 >> 8),
                                                         CONCAT14((byte)iVar28 | (byte)iVar24,
                                                                  CONCAT13((byte)((uint)iVar27 >>
                                                                                 0x18) |
                                                                           (byte)((uint)iVar3 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((uint)
                                                  iVar27 >> 0x10) | (byte)((uint)iVar3 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar27 >> 8) |
                                                           (byte)((uint)iVar3 >> 8),
                                                           (byte)iVar27 | (byte)iVar3)))))));
            iVar3 = -(uint)(0x7f800000 < (uint)(uVar12 & 0x7fffffff7fffffff));
            iVar24 = -(uint)(0x7f800000 < (uint)((uVar12 & 0x7fffffff7fffffff) >> 0x20));
            iVar27 = -(uint)((float)uVar12 < 0.0);
            iVar28 = -(uint)((float)(uVar12 >> 0x20) < 0.0);
            uVar22 = CONCAT17((byte)(uVar12 >> 0x38) &
                              ~((byte)((uint)iVar28 >> 0x18) | (byte)((uint)iVar24 >> 0x18)),
                              CONCAT16((byte)(uVar12 >> 0x30) &
                                       ~((byte)((uint)iVar28 >> 0x10) | (byte)((uint)iVar24 >> 0x10)
                                        ),CONCAT15((byte)(uVar12 >> 0x28) &
                                                   ~((byte)((uint)iVar28 >> 8) |
                                                    (byte)((uint)iVar24 >> 8)),
                                                   CONCAT14((byte)(uVar12 >> 0x20) &
                                                            ~((byte)iVar28 | (byte)iVar24),
                                                            CONCAT13((byte)(uVar12 >> 0x18) &
                                                                     ~((byte)((uint)iVar27 >> 0x18)
                                                                      | (byte)((uint)iVar3 >> 0x18))
                                                                     ,CONCAT12((byte)(uVar12 >> 0x10
                                                                                     ) & ~((byte)((
                                                  uint)iVar27 >> 0x10) | (byte)((uint)iVar3 >> 0x10)
                                                  ),CONCAT11((byte)(uVar12 >> 8) &
                                                             ~((byte)((uint)iVar27 >> 8) |
                                                              (byte)((uint)iVar3 >> 8)),
                                                             (byte)uVar12 &
                                                             ~((byte)iVar27 | (byte)iVar3))))))));
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
            fVar30 = (float)*(undefined8 *)(unaff_x29 + -0x150);
            fVar31 = (float)((ulong)*(undefined8 *)(unaff_x29 + -0x150) >> 0x20);
            uVar22 = CONCAT44(fVar31 - (float)(int)fVar31,fVar30 - (float)(int)fVar30);
          }
          lVar9 = *unaff_x24;
          *(undefined8 *)(unaff_x29 + -0x158) = 0;
          *(undefined8 *)(unaff_x29 + -0x160) = uVar22;
          iVar3 = *(int *)(unaff_x29 + -0x140);
          pvVar4 = *(void **)(unaff_x29 + -200);
          if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
            pvVar4 = (void *)(unaff_x29 + -200);
          }
          *(int *)(unaff_x29 + -0x140) = *(int *)(unaff_x29 + -0x170) + iVar3 * iVar1;
          memcpy(*(void **)(unaff_x29 + -0x138),pvVar4,unaff_x26);
          uVar22 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar5 = *(undefined8 *)(unaff_x29 + -0xa8);
          if (*(int *)(*(long *)UnityEngine_UIElements_LongField_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *unaff_x24;
          }
          puVar16 = *(undefined8 **)(lVar9 + 0x50);
          iVar24 = *(int *)(*(long *)(lVar9 + 0x48) + 0x28);
          uVar7 = *puVar16;
          *(int *)(unaff_x29 + -0x150) = *(int *)(unaff_x29 + -0x170) + (iVar3 + 1) * iVar1;
          puVar14 = *(undefined8 **)(unaff_x29 + -0x138);
          if (-1 < iVar24) {
            puVar14 = (undefined8 *)*puVar14;
          }
          *(undefined8 *)(unaff_x29 + -0x60) = uVar22;
          *(undefined8 *)(unaff_x29 + -0x58) = uVar5;
          puVar15 = (undefined4 *)(unaff_x29 + -100);
          *(int *)(unaff_x29 + -0x6c) = iVar1;
          *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x140);
          *(int *)(unaff_x29 + -100) = (int)*(undefined8 *)(unaff_x29 + -0x160);
          *(int *)(unaff_x29 + -0x70) = iVar29;
          *(undefined8 **)(unaff_x29 + -0xa0) = puVar14;
          *(undefined4 **)(unaff_x29 + -0x98) = puVar15;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
          (*(code *)puVar16[2])(uVar7,puVar16,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
          lVar9 = *unaff_x24;
          puVar16 = *(undefined8 **)(unaff_x29 + -0x1c0);
          pvVar4 = *(void **)(unaff_x29 + -200);
          if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
            pvVar4 = (void *)(unaff_x29 + -200);
          }
          memcpy(puVar16,pvVar4,unaff_x26);
          puVar14 = *(undefined8 **)(lVar9 + 0x50);
          uVar22 = *puVar14;
          if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
            puVar16 = (undefined8 *)*puVar16;
          }
          *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0xb0);
          *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0xa8);
          *(int *)(unaff_x29 + -0x70) = iVar29;
          *puVar15 = (int)((ulong)*(undefined8 *)(unaff_x29 + -0x160) >> 0x20);
          *(undefined8 **)(unaff_x29 + -0xa0) = puVar16;
          *(undefined4 **)(unaff_x29 + -0x98) = puVar15;
          *(int *)(unaff_x29 + -0x6c) = iVar1;
          *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x150);
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
          (*(code *)puVar14[2])(uVar22,puVar14,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
          lVar9 = *unaff_x24;
          pvVar4 = *(void **)(unaff_x29 + -200);
          if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
            pvVar4 = (void *)(unaff_x29 + -200);
          }
          puVar14 = *(undefined8 **)(unaff_x29 + -0x1d8);
          memcpy(puVar14,pvVar4,unaff_x26);
          puVar16 = *(undefined8 **)(lVar9 + 0x60);
          uVar22 = *puVar16;
          if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
            puVar14 = (undefined8 *)*puVar14;
          }
          __n = *(size_t *)(unaff_x29 + -0x1e0);
          *(undefined8 **)(unaff_x29 + -0xa0) = puVar14;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
          *(int *)(unaff_x29 + -100) = (int)*(undefined8 *)(unaff_x29 + -0x160);
          (*(code *)puVar16[2])(uVar22,puVar16,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
          fVar30 = *(float *)(unaff_x29 + -0x60);
          fVar31 = *(float *)(unaff_x29 + -0x5c);
          fVar32 = *(float *)(unaff_x29 + -0x58);
          if (DAT_0452ffe3 == '\0') {
            FUN_01c5d288(PTR_DAT_0422fa60);
            DAT_0452ffe3 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          fVar19 = 1.0 / SQRT(fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31);
          fVar30 = fVar30 * fVar19;
          fVar31 = fVar31 * fVar19;
          fVar32 = fVar32 * fVar19;
          fVar19 = fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31;
          if ((fVar19 == 0.0) || (0x7f800000 < (uint)ABS(fVar19))) {
            lVar9 = *unaff_x24;
            pvVar4 = *(void **)(unaff_x29 + -200);
            if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
              pvVar4 = (void *)(unaff_x29 + -200);
            }
            puVar14 = *(undefined8 **)(unaff_x29 + -0x138);
            memcpy(puVar14,pvVar4,unaff_x26);
            fVar30 = DAT_00b92ffc;
            puVar16 = *(undefined8 **)(lVar9 + 0x60);
            uVar22 = *puVar16;
            if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
              puVar14 = (undefined8 *)*puVar14;
            }
            *(undefined8 **)(unaff_x29 + -0xa0) = puVar14;
            *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
            *(float *)(unaff_x29 + -100) = (float)*(undefined8 *)(unaff_x29 + -0x160) + fVar30;
            (*(code *)puVar16[2])(uVar22,puVar16,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
            fVar30 = *(float *)(unaff_x29 + -0x60);
            fVar31 = *(float *)(unaff_x29 + -0x5c);
            fVar32 = *(float *)(unaff_x29 + -0x58);
            if (DAT_0452ffe3 == '\0') {
              FUN_01c5d288(PTR_DAT_0422fa60);
              DAT_0452ffe3 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar19 = 1.0 / SQRT(fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31);
            fVar30 = fVar30 * fVar19;
            fVar31 = fVar31 * fVar19;
            fVar32 = fVar32 * fVar19;
          }
          lVar9 = *unaff_x24;
          fVar19 = (float)((ulong)*(undefined8 *)(unaff_x29 + -0x160) >> 0x20);
          pvVar4 = *(void **)(unaff_x29 + -200);
          if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
            pvVar4 = (void *)(unaff_x29 + -200);
          }
          puVar14 = *(undefined8 **)(unaff_x29 + -0x138);
          memcpy(puVar14,pvVar4,unaff_x26);
          puVar16 = *(undefined8 **)(lVar9 + 0x60);
          uVar22 = *puVar16;
          if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
            puVar14 = (undefined8 *)*puVar14;
          }
          *(float *)(unaff_x29 + -100) = fVar19;
          *(undefined8 **)(unaff_x29 + -0xa0) = puVar14;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
          (*(code *)puVar16[2])(uVar22,puVar16,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
          fVar33 = *(float *)(unaff_x29 + -0x60);
          fVar35 = *(float *)(unaff_x29 + -0x5c);
          fVar36 = *(float *)(unaff_x29 + -0x58);
          if (DAT_0452ffe3 == '\0') {
            FUN_01c5d288(PTR_DAT_0422fa60);
            DAT_0452ffe3 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          fVar20 = 1.0 / SQRT(fVar36 * fVar36 + fVar33 * fVar33 + fVar35 * fVar35);
          fVar33 = fVar33 * fVar20;
          fVar35 = fVar35 * fVar20;
          fVar36 = fVar36 * fVar20;
          *(float *)(unaff_x29 + -0x160) = fVar33;
          fVar33 = fVar36 * fVar36 + fVar33 * fVar33 + fVar35 * fVar35;
          *(float *)(unaff_x29 + -0x170) = fVar35;
          if ((fVar33 == 0.0) || (0x7f800000 < (uint)ABS(fVar33))) {
            lVar9 = *unaff_x24;
            pvVar4 = *(void **)(unaff_x29 + -200);
            if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
              pvVar4 = (void *)(unaff_x29 + -200);
            }
            puVar14 = *(undefined8 **)(unaff_x29 + -0x138);
            memcpy(puVar14,pvVar4,unaff_x26);
            fVar33 = DAT_00b933cc;
            puVar16 = *(undefined8 **)(lVar9 + 0x60);
            uVar22 = *puVar16;
            if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
              puVar14 = (undefined8 *)*puVar14;
            }
            *(undefined8 **)(unaff_x29 + -0xa0) = puVar14;
            *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
            *(float *)(unaff_x29 + -100) = fVar19 + fVar33;
            (*(code *)puVar16[2])(uVar22,puVar16,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
            fVar19 = *(float *)(unaff_x29 + -0x60);
            fVar33 = *(float *)(unaff_x29 + -0x5c);
            fVar36 = *(float *)(unaff_x29 + -0x58);
            if (DAT_0452ffe3 == '\0') {
              FUN_01c5d288(PTR_DAT_0422fa60);
              DAT_0452ffe3 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar35 = 1.0 / SQRT(fVar36 * fVar36 + fVar19 * fVar19 + fVar33 * fVar33);
            *(float *)(unaff_x29 + -0x160) = fVar19 * fVar35;
            fVar36 = fVar36 * fVar35;
            *(float *)(unaff_x29 + -0x170) = fVar33 * fVar35;
          }
          pvVar17 = *(void **)(unaff_x29 + -0x168);
          pvVar4 = *(void **)(unaff_x29 + -0x1e8);
          if (0 < iVar1) {
            *(float *)(unaff_x29 + -0x138) = -fVar30;
            *(float *)(unaff_x29 + -0x1b4) = -fVar31;
            *(float *)(unaff_x29 + -0x1c0) = -fVar32;
            iVar29 = 0;
            lVar9 = unaff_x29 + -0x60;
            lVar10 = unaff_x29 + -0xa0;
            fVar30 = (360.0 / (float)iVar1) * DAT_00b931d0;
            do {
              puVar16 = *(undefined8 **)(*unaff_x24 + 0x68);
              uVar22 = *puVar16;
              iVar1 = *(int *)(unaff_x29 + -0x140) + iVar29;
              pvVar18 = *(void **)(unaff_x29 + -0x198);
              *(int *)(unaff_x29 + -0x60) = iVar1;
              *(long *)(unaff_x29 + -0xa0) = lVar9;
              *(void **)(unaff_x29 + -0x98) = pvVar18;
              (*(code *)puVar16[2])(uVar22,puVar16,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar18);
              memcpy(pvVar17,pvVar18,__n);
              puVar16 = *(undefined8 **)(*unaff_x24 + 0x68);
              uVar22 = *puVar16;
              iVar3 = *(int *)(unaff_x29 + -0x150) + iVar29;
              pvVar17 = *(void **)(unaff_x29 + -0x1a0);
              *(int *)(unaff_x29 + -0x60) = iVar3;
              *(long *)(unaff_x29 + -0xa0) = lVar9;
              *(void **)(unaff_x29 + -0x98) = pvVar17;
              (*(code *)puVar16[2])(uVar22,puVar16,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar17);
              memcpy(pvVar4,pvVar17,__n);
              uVar25 = *(undefined4 *)(unaff_x29 + -0x1b4);
              uVar26 = *(undefined4 *)(unaff_x29 + -0x1c0);
              uVar21 = FUN_03a4388c(*(undefined4 *)(unaff_x29 + -0x138),0);
              lVar11 = *unaff_x24;
              lVar13 = *(long *)(lVar11 + 0x70);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = FUN_01c72394();
                lVar11 = *unaff_x24;
              }
              puVar8 = PTR_DAT_0422fa60;
              uVar22 = *(undefined8 *)(lVar11 + 0x78);
              uVar5 = *(undefined8 *)(unaff_x29 + -0x168);
              *(undefined4 *)(unaff_x29 + -0xa0) = uVar21;
              *(undefined4 *)(unaff_x29 + -0x9c) = uVar25;
              *(undefined4 *)(unaff_x29 + -0x98) = uVar26;
              *(long *)(unaff_x29 + -0x60) = lVar10;
              FUN_01c5dc8c(lVar13,uVar22,*(undefined8 *)(unaff_x29 + -0x178),uVar5,unaff_x29 + -0x60
                           ,unaff_x29 + -0xa0);
              if (DAT_0452ffe4 == '\0') {
                FUN_01c5d288(puVar8);
                DAT_0452ffe4 = '\x01';
              }
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              dVar34 = (double)(fVar30 * (float)iVar29);
              dVar23 = cos(dVar34);
              if (DAT_0452ffe5 == '\0') {
                FUN_01c5d288(puVar8);
                DAT_0452ffe5 = '\x01';
              }
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              dVar34 = sin(dVar34);
              fVar32 = (float)dVar34 * 0.5 + 0.5;
              fVar31 = fVar32;
              uVar21 = FUN_03a42f88((float)dVar23 * 0.5 + 0.5,0);
              lVar11 = *unaff_x24;
              lVar13 = *(long *)(lVar11 + 0x70);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = FUN_01c72394();
                lVar11 = *unaff_x24;
              }
              uVar22 = *(undefined8 *)(lVar11 + 0x80);
              *(undefined4 *)(unaff_x29 + -0xa0) = uVar21;
              *(float *)(unaff_x29 + -0x9c) = fVar31;
              *(long *)(unaff_x29 + -0x60) = lVar10;
              FUN_01c5dc8c(lVar13,uVar22,*(undefined8 *)(unaff_x29 + -0x180),uVar5,unaff_x29 + -0x60
                           ,unaff_x29 + -0xa0);
              uVar25 = *(undefined4 *)(unaff_x29 + -0x170);
              fVar31 = fVar36;
              uVar21 = FUN_03a4388c(*(undefined4 *)(unaff_x29 + -0x160),0);
              lVar11 = *unaff_x24;
              lVar13 = *(long *)(lVar11 + 0x70);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = FUN_01c72394();
                lVar11 = *unaff_x24;
              }
              uVar22 = *(undefined8 *)(lVar11 + 0x78);
              *(undefined4 *)(unaff_x29 + -0xa0) = uVar21;
              *(undefined4 *)(unaff_x29 + -0x9c) = uVar25;
              *(float *)(unaff_x29 + -0x98) = fVar31;
              *(long *)(unaff_x29 + -0x60) = lVar10;
              FUN_01c5dc8c(lVar13,uVar22,*(undefined8 *)(unaff_x29 + -0x188),pvVar4,
                           unaff_x29 + -0x60,unaff_x29 + -0xa0);
              if (DAT_0452ffe4 == '\0') {
                FUN_01c5d288(puVar8);
                DAT_0452ffe4 = '\x01';
              }
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              if (DAT_0452ffe5 == '\0') {
                FUN_01c5d288(puVar8);
                DAT_0452ffe5 = '\x01';
              }
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar21 = FUN_03a42f88(0.5 - (float)dVar23 * 0.5,0);
              lVar11 = *unaff_x24;
              lVar13 = *(long *)(lVar11 + 0x70);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = FUN_01c72394();
                lVar11 = *unaff_x24;
              }
              uVar22 = *(undefined8 *)(lVar11 + 0x80);
              *(undefined4 *)(unaff_x29 + -0xa0) = uVar21;
              *(float *)(unaff_x29 + -0x9c) = fVar32;
              *(long *)(unaff_x29 + -0x60) = lVar10;
              FUN_01c5dc8c(lVar13,uVar22,*(undefined8 *)(unaff_x29 + -400),pvVar4,unaff_x29 + -0x60,
                           unaff_x29 + -0xa0);
              pvVar18 = *(void **)(unaff_x29 + -0x1a8);
              pvVar17 = *(void **)(unaff_x29 + -0x168);
              memcpy(pvVar18,pvVar17,__n);
              puVar16 = *(undefined8 **)(*unaff_x24 + 0x88);
              uVar22 = *puVar16;
              *(int *)(unaff_x29 + -0x60) = iVar1;
              *(long *)(unaff_x29 + -0xa0) = lVar9;
              *(void **)(unaff_x29 + -0x98) = pvVar18;
              (*(code *)puVar16[2])(uVar22,puVar16,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar18);
              pvVar18 = *(void **)(unaff_x29 + -0x1b0);
              memcpy(pvVar18,pvVar4,__n);
              puVar16 = *(undefined8 **)(*unaff_x24 + 0x88);
              uVar22 = *puVar16;
              *(int *)(unaff_x29 + -0x60) = iVar3;
              *(long *)(unaff_x29 + -0xa0) = lVar9;
              *(void **)(unaff_x29 + -0x98) = pvVar18;
              (*(code *)puVar16[2])(uVar22,puVar16,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar18);
              iVar29 = iVar29 + 1;
            } while (*(int *)(unaff_x29 + -0x13c) != iVar29);
          }
        }
        if (*(long *)(*(long *)(unaff_x29 + -0x1c8) + 0x28) == *(long *)(unaff_x29 + -0x50)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar22 = *(undefined8 *)(lVar9 + 0x30);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar22 = FUN_032e04b8(uVar22,0);
      uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
      uVar12 = FUN_032e935c(uVar22,uVar5,0);
      if ((uVar12 & 1) != 0) {
        auVar37 = (*(code *)**(undefined8 **)(*unaff_x24 + 0x40))(unaff_x29 + -0xc0);
        puVar8 = UnityEngine_UIElements_LongField_TypeInfo;
        uVar5 = *(undefined8 *)(unaff_x25 + 2);
        uVar22 = *(undefined8 *)unaff_x25;
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x25 + 4);
        *(undefined8 *)(unaff_x29 + -0x98) = uVar5;
        *(undefined8 *)(unaff_x29 + -0xa0) = uVar22;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        *(undefined8 *)(unaff_x29 + -0x128) = *(undefined8 *)(unaff_x29 + -0x98);
        *(undefined8 *)(unaff_x29 + -0x130) = *(undefined8 *)(unaff_x29 + -0xa0);
        *(undefined8 *)(unaff_x29 + -0x120) = *(undefined8 *)(unaff_x29 + -0x90);
        FUN_03c6433c(auVar37._0_8_,auVar37._8_8_,unaff_x29 + -0x130,unaff_w27,
                     *(undefined4 *)(unaff_x29 + -0x160),0);
        goto LAB_023e0b64;
      }
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar5 = thunk_FUN_01c496e0();
      uVar22 = thunk_FUN_01c273e8(Mono_Security_Cryptography_MD2Managed_TypeInfo);
      uVar7 = thunk_FUN_01c273e8(Mono_Security_Cryptography_MD2Managed_TypeInfo);
      FUN_0323fce4(uVar5,uVar22,uVar7,0);
      goto LAB_023e198c;
    }
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar5 = thunk_FUN_01c496e0();
    uVar22 = thunk_FUN_01c273e8(System_Linq_Expressions_LoopExpression_TypeInfo);
    puVar8 = LostTarget_TypeInfo;
  }
  uVar7 = thunk_FUN_01c273e8(puVar8);
  FUN_03243400(uVar5,uVar22,uVar7,0);
LAB_023e198c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar5,*(undefined8 *)(unaff_x29 + -0x170));
}


