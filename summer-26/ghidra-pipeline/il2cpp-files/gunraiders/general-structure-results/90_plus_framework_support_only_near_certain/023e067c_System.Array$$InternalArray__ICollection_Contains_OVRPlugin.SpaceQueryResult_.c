/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 023e067c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>(void)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long unaff_x19;
  undefined4 *puVar17;
  undefined8 unaff_x20;
  ulong uVar18;
  long *unaff_x24;
  int *unaff_x25;
  size_t __n;
  ulong __n_00;
  int unaff_w27;
  undefined8 *puVar19;
  void *pvVar20;
  void *pvVar21;
  long unaff_x29;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  int iVar27;
  double dVar26;
  undefined4 uVar28;
  undefined4 uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  
  lVar13 = *unaff_x24;
  if (lVar13 == 0) {
    FUN_01c723f0();
    lVar13 = *(long *)(unaff_x19 + 0x38);
  }
  lVar10 = *(long *)(lVar13 + 0x70);
  uVar18 = (ulong)*(uint *)(lVar10 + 0xfc);
  uVar12 = *(uint *)(*(long *)(lVar13 + 0x48) + 0xfc);
  __n_00 = (ulong)uVar12;
  if ((*(byte *)(*(long *)(lVar13 + 0x48) + 0x135) & 1) == 0) {
    lVar13 = FUN_01c72394();
    uVar12 = *(uint *)(lVar13 + 0xfc);
    lVar10 = *(long *)(*unaff_x24 + 0x70);
  }
  lVar15 = (long)&stack0x00000000 - ((ulong)(uVar12 + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x1d0) = lVar15;
  uVar3 = *(ushort *)(lVar10 + 0x135);
  lVar13 = lVar10;
  if ((uVar3 & 1) == 0) {
    lVar10 = FUN_01c72394(lVar10);
    uVar3 = *(ushort *)(*(long *)(*unaff_x24 + 0x70) + 0x135);
    lVar13 = *(long *)(*unaff_x24 + 0x70);
  }
  lVar15 = lVar15 - ((ulong)(*(int *)(lVar10 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x178) = lVar15;
  lVar10 = lVar13;
  if ((uVar3 & 1) == 0) {
    lVar13 = FUN_01c72394(lVar13);
    uVar3 = *(ushort *)(*(long *)(*unaff_x24 + 0x70) + 0x135);
    lVar10 = *(long *)(*unaff_x24 + 0x70);
  }
  lVar15 = lVar15 - ((ulong)(*(int *)(lVar13 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x180) = lVar15;
  lVar13 = lVar10;
  if ((uVar3 & 1) == 0) {
    lVar10 = FUN_01c72394(lVar10);
    uVar3 = *(ushort *)(*(long *)(*unaff_x24 + 0x70) + 0x135);
    lVar13 = *(long *)(*unaff_x24 + 0x70);
  }
  lVar15 = lVar15 - ((ulong)(*(int *)(lVar10 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x188) = lVar15;
  *(long *)(unaff_x29 + -0x170) = unaff_x19;
  if ((uVar3 & 1) == 0) {
    lVar13 = FUN_01c72394(lVar13);
  }
  lVar15 = lVar15 - ((ulong)(*(int *)(lVar13 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -400) = lVar15;
  uVar14 = __n_00 + 0xf & 0x1fffffff0;
  lVar15 = lVar15 - uVar14;
  *(long *)(unaff_x29 + -0x138) = lVar15;
  lVar15 = lVar15 - uVar14;
  *(long *)(unaff_x29 + -0x1c0) = lVar15;
  lVar15 = lVar15 - uVar14;
  uVar14 = uVar18 + 0xf & 0x1fffffff0;
  lVar13 = lVar15 - uVar14;
  *(long *)(unaff_x29 + -0x198) = lVar13;
  lVar13 = lVar13 - uVar14;
  *(long *)(unaff_x29 + -0x1a0) = lVar13;
  lVar13 = lVar13 - uVar14;
  *(long *)(unaff_x29 + -0x1a8) = lVar13;
  lVar13 = lVar13 - uVar14;
  *(long *)(unaff_x29 + -0x1b0) = lVar13;
  pvVar5 = (void *)(lVar13 - uVar14);
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(void **)(unaff_x29 + -0x168) = pvVar5;
  memset(pvVar5,0,uVar18);
  memset((void *)((long)pvVar5 - uVar14),0,uVar18);
  iVar1 = *unaff_x25;
  uVar25 = *(undefined8 *)(unaff_x25 + 3);
  iVar32 = unaff_x25[5];
  *(int *)(unaff_x29 + -0x140) = unaff_x25[1];
  *(undefined8 *)(unaff_x29 + -0x148) = 0;
  *(undefined8 *)(unaff_x29 + -0x150) = uVar25;
  puVar9 = UnityEngine_UIElements_LongField_TypeInfo;
  uVar6 = *(undefined8 *)unaff_x25;
  uVar25 = *(undefined8 *)(unaff_x25 + 4);
  bVar2 = *(byte *)(unaff_x25 + 2);
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x25 + 2);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x90) = uVar25;
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0x98);
  *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xa0);
  *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x90);
  FUN_03c64188(unaff_x29 + -0xf0,unaff_x29 + -0xcc,unaff_x29 + -0xd0,0);
  if (iVar1 < 3) {
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar6 = thunk_FUN_01c496e0();
    uVar25 = thunk_FUN_01c273e8(System_ComponentModel_LookupBindingPropertiesAttribute_TypeInfo);
    puVar9 = System_Data_LookupNode_TypeInfo;
  }
  else {
    if (1 < *(int *)(unaff_x29 + -0x140)) {
      iVar4 = (*(code *)**(undefined8 **)(*unaff_x24 + 8))(unaff_x29 + -0xb0);
      if (iVar4 < *(int *)(unaff_x29 + -0xcc)) {
        *(int *)(unaff_x29 + -0xa0) = *(int *)(unaff_x29 + -0xcc);
        puVar9 = PTR_DAT_0422fd80;
        uVar25 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
        uVar6 = thunk_FUN_01c49334(uVar25,unaff_x29 + -0xa0);
        lVar13 = *(long *)(unaff_x29 + -0x170);
        uVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 8))(unaff_x29 + -0xb0);
        *(undefined4 *)(unaff_x29 + -0x60) = uVar24;
        uVar25 = thunk_FUN_01c273e8(puVar9);
        uVar25 = thunk_FUN_01c49334(uVar25,unaff_x29 + -0x60);
        puVar9 = System_Security_Cryptography_MACTripleDES_TypeInfo;
LAB_023e1904:
        uVar8 = thunk_FUN_01c273e8(puVar9);
        uVar25 = FUN_031536d4(uVar8,uVar6,uVar25,0);
        thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
        uVar6 = thunk_FUN_01c496e0();
        FUN_03247e00(uVar6,uVar25,0);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar6,lVar13);
      }
      *(uint *)(unaff_x29 + -0x1b4) = (uint)bVar2;
      *(long *)(unaff_x29 + -0x1d8) = lVar15;
      iVar4 = (*(code *)**(undefined8 **)(*unaff_x24 + 0x20))(unaff_x29 + -0xc0);
      puVar9 = PTR_DAT_0422fb28;
      if (iVar4 < *(int *)(unaff_x29 + -0xd0)) {
        *(int *)(unaff_x29 + -0xa0) = *(int *)(unaff_x29 + -0xd0);
        puVar9 = PTR_DAT_0422fd80;
        uVar25 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
        uVar6 = thunk_FUN_01c49334(uVar25,unaff_x29 + -0xa0);
        lVar13 = *(long *)(unaff_x29 + -0x170);
        uVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x20))(unaff_x29 + -0xc0);
        *(undefined4 *)(unaff_x29 + -0x60) = uVar24;
        uVar25 = thunk_FUN_01c273e8(puVar9);
        uVar25 = thunk_FUN_01c49334(uVar25,unaff_x29 + -0x60);
        puVar9 = System_Runtime_Remoting_Messaging_MCMDictionary_TypeInfo;
        goto LAB_023e1904;
      }
      uVar25 = *(undefined8 *)(*unaff_x24 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar25 = FUN_032e04b8(uVar25,0);
      uVar6 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
      uVar7 = FUN_032e935c(uVar25,uVar6,0);
      lVar13 = *unaff_x24;
      *(ulong *)(unaff_x29 + -0x1e0) = uVar18;
      *(void **)(unaff_x29 + -0x1e8) = (void *)((long)pvVar5 - uVar14);
      *(undefined8 *)(unaff_x29 + -0x1c8) = unaff_x20;
      if ((uVar7 & 1) != 0) {
        auVar40 = (*(code *)**(undefined8 **)(lVar13 + 0x38))(unaff_x29 + -0xc0);
        puVar9 = UnityEngine_UIElements_LongField_TypeInfo;
        uVar6 = *(undefined8 *)(unaff_x25 + 2);
        uVar25 = *(undefined8 *)unaff_x25;
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x25 + 4);
        *(undefined8 *)(unaff_x29 + -0x98) = uVar6;
        *(undefined8 *)(unaff_x29 + -0xa0) = uVar25;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0x90);
        *(undefined8 *)(unaff_x29 + -0x108) = *(undefined8 *)(unaff_x29 + -0x98);
        *(undefined8 *)(unaff_x29 + -0x110) = *(undefined8 *)(unaff_x29 + -0xa0);
        FUN_03c641cc(auVar40._0_8_,auVar40._8_8_,unaff_x29 + -0x110,unaff_w27,
                     *(undefined4 *)(unaff_x29 + -0x160),0);
LAB_023e0b64:
        iVar27 = *(int *)(unaff_x29 + -0x140);
        iVar4 = 0;
        fVar33 = (float)((ulong)*(undefined8 *)(unaff_x29 + -0x150) >> 0x20);
        *(undefined8 *)(unaff_x29 + -0x158) = 0;
        *(ulong *)(unaff_x29 + -0x160) =
             CONCAT44(fVar33 - fVar33,fVar33 - (float)*(undefined8 *)(unaff_x29 + -0x150));
        *(int *)(unaff_x29 + -0x170) = unaff_w27;
        *(int *)(unaff_x29 + -0x13c) = iVar1;
        do {
          lVar13 = *unaff_x24;
          pvVar5 = *(void **)(unaff_x29 + -200);
          if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -200);
          }
          memcpy(*(void **)(unaff_x29 + -0x138),pvVar5,__n_00);
          uVar25 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar6 = *(undefined8 *)(unaff_x29 + -0xa8);
          if (*(int *)(*(long *)UnityEngine_UIElements_LongField_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar13 = *unaff_x24;
          }
          puVar19 = *(undefined8 **)(lVar13 + 0x50);
          puVar16 = *(undefined8 **)(unaff_x29 + -0x138);
          uVar8 = *puVar19;
          if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
            puVar16 = (undefined8 *)*puVar16;
          }
          *(undefined8 **)(unaff_x29 + -0xa0) = puVar16;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
          iVar1 = *(int *)(unaff_x29 + -0x13c);
          *(undefined8 *)(unaff_x29 + -0x60) = uVar25;
          *(undefined8 *)(unaff_x29 + -0x58) = uVar6;
          *(int *)(unaff_x29 + -0x70) = iVar32;
          *(int *)(unaff_x29 + -0x6c) = iVar1;
          *(int *)(unaff_x29 + -0x68) = unaff_w27;
          *(float *)(unaff_x29 + -100) =
               (float)*(undefined8 *)(unaff_x29 + -0x150) +
               (float)*(undefined8 *)(unaff_x29 + -0x160) * ((float)iVar4 / ((float)iVar27 + -1.0));
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
          (*(code *)puVar19[2])(uVar8,puVar19,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
          iVar4 = iVar4 + 1;
          unaff_w27 = unaff_w27 + iVar1;
        } while (*(int *)(unaff_x29 + -0x140) != iVar4);
        if (*(int *)(unaff_x29 + -0x1b4) != 0) {
          lVar15 = *unaff_x24;
          lVar10 = *(long *)(lVar15 + 0x48);
          lVar13 = lVar10;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394(lVar10);
            lVar15 = *unaff_x24;
            lVar13 = *(long *)(lVar15 + 0x48);
          }
          lVar11 = *(long *)(unaff_x29 + -200);
          if (-1 < *(int *)(lVar13 + 0x28)) {
            lVar11 = unaff_x29 + -200;
          }
          FUN_01c5dc8c(lVar10,*(undefined8 *)(lVar15 + 0x58),*(undefined8 *)(unaff_x29 + -0x1d0),
                       lVar11,0,unaff_x29 + -0xa0);
          if (*(char *)(unaff_x29 + -0xa0) == '\0') {
            uVar18 = *(ulong *)(unaff_x29 + -0x150);
            uVar14 = NEON_fmov(0x3f800000,4);
            iVar30 = -(uint)((float)uVar14 < (float)uVar18);
            iVar31 = -(uint)((float)(uVar14 >> 0x20) < (float)(uVar18 >> 0x20));
            iVar4 = -(uint)(0x7f800000 < (uint)(uVar18 & 0x7fffffff7fffffff));
            iVar27 = -(uint)(0x7f800000 < (uint)((uVar18 & 0x7fffffff7fffffff) >> 0x20));
            uVar18 = uVar18 ^ (uVar18 ^ uVar14) &
                              CONCAT17((byte)((uint)iVar31 >> 0x18) | (byte)((uint)iVar27 >> 0x18),
                                       CONCAT16((byte)((uint)iVar31 >> 0x10) |
                                                (byte)((uint)iVar27 >> 0x10),
                                                CONCAT15((byte)((uint)iVar31 >> 8) |
                                                         (byte)((uint)iVar27 >> 8),
                                                         CONCAT14((byte)iVar31 | (byte)iVar27,
                                                                  CONCAT13((byte)((uint)iVar30 >>
                                                                                 0x18) |
                                                                           (byte)((uint)iVar4 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((uint)
                                                  iVar30 >> 0x10) | (byte)((uint)iVar4 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar30 >> 8) |
                                                           (byte)((uint)iVar4 >> 8),
                                                           (byte)iVar30 | (byte)iVar4)))))));
            iVar4 = -(uint)(0x7f800000 < (uint)(uVar18 & 0x7fffffff7fffffff));
            iVar27 = -(uint)(0x7f800000 < (uint)((uVar18 & 0x7fffffff7fffffff) >> 0x20));
            iVar30 = -(uint)((float)uVar18 < 0.0);
            iVar31 = -(uint)((float)(uVar18 >> 0x20) < 0.0);
            uVar25 = CONCAT17((byte)(uVar18 >> 0x38) &
                              ~((byte)((uint)iVar31 >> 0x18) | (byte)((uint)iVar27 >> 0x18)),
                              CONCAT16((byte)(uVar18 >> 0x30) &
                                       ~((byte)((uint)iVar31 >> 0x10) | (byte)((uint)iVar27 >> 0x10)
                                        ),CONCAT15((byte)(uVar18 >> 0x28) &
                                                   ~((byte)((uint)iVar31 >> 8) |
                                                    (byte)((uint)iVar27 >> 8)),
                                                   CONCAT14((byte)(uVar18 >> 0x20) &
                                                            ~((byte)iVar31 | (byte)iVar27),
                                                            CONCAT13((byte)(uVar18 >> 0x18) &
                                                                     ~((byte)((uint)iVar30 >> 0x18)
                                                                      | (byte)((uint)iVar4 >> 0x18))
                                                                     ,CONCAT12((byte)(uVar18 >> 0x10
                                                                                     ) & ~((byte)((
                                                  uint)iVar30 >> 0x10) | (byte)((uint)iVar4 >> 0x10)
                                                  ),CONCAT11((byte)(uVar18 >> 8) &
                                                             ~((byte)((uint)iVar30 >> 8) |
                                                              (byte)((uint)iVar4 >> 8)),
                                                             (byte)uVar18 &
                                                             ~((byte)iVar30 | (byte)iVar4))))))));
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
            fVar33 = (float)*(undefined8 *)(unaff_x29 + -0x150);
            fVar34 = (float)((ulong)*(undefined8 *)(unaff_x29 + -0x150) >> 0x20);
            uVar25 = CONCAT44(fVar34 - (float)(int)fVar34,fVar33 - (float)(int)fVar33);
          }
          lVar13 = *unaff_x24;
          *(undefined8 *)(unaff_x29 + -0x158) = 0;
          *(undefined8 *)(unaff_x29 + -0x160) = uVar25;
          iVar4 = *(int *)(unaff_x29 + -0x140);
          pvVar5 = *(void **)(unaff_x29 + -200);
          if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -200);
          }
          *(int *)(unaff_x29 + -0x140) = *(int *)(unaff_x29 + -0x170) + iVar4 * iVar1;
          memcpy(*(void **)(unaff_x29 + -0x138),pvVar5,__n_00);
          uVar25 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar6 = *(undefined8 *)(unaff_x29 + -0xa8);
          if (*(int *)(*(long *)UnityEngine_UIElements_LongField_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar13 = *unaff_x24;
          }
          puVar19 = *(undefined8 **)(lVar13 + 0x50);
          iVar27 = *(int *)(*(long *)(lVar13 + 0x48) + 0x28);
          uVar8 = *puVar19;
          *(int *)(unaff_x29 + -0x150) = *(int *)(unaff_x29 + -0x170) + (iVar4 + 1) * iVar1;
          puVar16 = *(undefined8 **)(unaff_x29 + -0x138);
          if (-1 < iVar27) {
            puVar16 = (undefined8 *)*puVar16;
          }
          *(undefined8 *)(unaff_x29 + -0x60) = uVar25;
          *(undefined8 *)(unaff_x29 + -0x58) = uVar6;
          puVar17 = (undefined4 *)(unaff_x29 + -100);
          *(int *)(unaff_x29 + -0x6c) = iVar1;
          *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x140);
          *(int *)(unaff_x29 + -100) = (int)*(undefined8 *)(unaff_x29 + -0x160);
          *(int *)(unaff_x29 + -0x70) = iVar32;
          *(undefined8 **)(unaff_x29 + -0xa0) = puVar16;
          *(undefined4 **)(unaff_x29 + -0x98) = puVar17;
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
          (*(code *)puVar19[2])(uVar8,puVar19,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
          lVar13 = *unaff_x24;
          puVar19 = *(undefined8 **)(unaff_x29 + -0x1c0);
          pvVar5 = *(void **)(unaff_x29 + -200);
          if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -200);
          }
          memcpy(puVar19,pvVar5,__n_00);
          puVar16 = *(undefined8 **)(lVar13 + 0x50);
          uVar25 = *puVar16;
          if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
            puVar19 = (undefined8 *)*puVar19;
          }
          *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0xb0);
          *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0xa8);
          *(int *)(unaff_x29 + -0x70) = iVar32;
          *puVar17 = (int)((ulong)*(undefined8 *)(unaff_x29 + -0x160) >> 0x20);
          *(undefined8 **)(unaff_x29 + -0xa0) = puVar19;
          *(undefined4 **)(unaff_x29 + -0x98) = puVar17;
          *(int *)(unaff_x29 + -0x6c) = iVar1;
          *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x150);
          *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x60;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x68;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x6c;
          *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
          (*(code *)puVar16[2])(uVar25,puVar16,0,unaff_x29 + -0xa0,unaff_x29 + -0x70);
          lVar13 = *unaff_x24;
          pvVar5 = *(void **)(unaff_x29 + -200);
          if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -200);
          }
          puVar16 = *(undefined8 **)(unaff_x29 + -0x1d8);
          memcpy(puVar16,pvVar5,__n_00);
          puVar19 = *(undefined8 **)(lVar13 + 0x60);
          uVar25 = *puVar19;
          if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
            puVar16 = (undefined8 *)*puVar16;
          }
          __n = *(size_t *)(unaff_x29 + -0x1e0);
          *(undefined8 **)(unaff_x29 + -0xa0) = puVar16;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
          *(int *)(unaff_x29 + -100) = (int)*(undefined8 *)(unaff_x29 + -0x160);
          (*(code *)puVar19[2])(uVar25,puVar19,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
          fVar33 = *(float *)(unaff_x29 + -0x60);
          fVar34 = *(float *)(unaff_x29 + -0x5c);
          fVar35 = *(float *)(unaff_x29 + -0x58);
          if (DAT_0452ffe3 == '\0') {
            FUN_01c5d288(PTR_DAT_0422fa60);
            DAT_0452ffe3 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          fVar22 = 1.0 / SQRT(fVar35 * fVar35 + fVar33 * fVar33 + fVar34 * fVar34);
          fVar33 = fVar33 * fVar22;
          fVar34 = fVar34 * fVar22;
          fVar35 = fVar35 * fVar22;
          fVar22 = fVar35 * fVar35 + fVar33 * fVar33 + fVar34 * fVar34;
          if ((fVar22 == 0.0) || (0x7f800000 < (uint)ABS(fVar22))) {
            lVar13 = *unaff_x24;
            pvVar5 = *(void **)(unaff_x29 + -200);
            if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
              pvVar5 = (void *)(unaff_x29 + -200);
            }
            puVar16 = *(undefined8 **)(unaff_x29 + -0x138);
            memcpy(puVar16,pvVar5,__n_00);
            fVar33 = DAT_00b92ffc;
            puVar19 = *(undefined8 **)(lVar13 + 0x60);
            uVar25 = *puVar19;
            if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
              puVar16 = (undefined8 *)*puVar16;
            }
            *(undefined8 **)(unaff_x29 + -0xa0) = puVar16;
            *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
            *(float *)(unaff_x29 + -100) = (float)*(undefined8 *)(unaff_x29 + -0x160) + fVar33;
            (*(code *)puVar19[2])(uVar25,puVar19,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
            fVar33 = *(float *)(unaff_x29 + -0x60);
            fVar34 = *(float *)(unaff_x29 + -0x5c);
            fVar35 = *(float *)(unaff_x29 + -0x58);
            if (DAT_0452ffe3 == '\0') {
              FUN_01c5d288(PTR_DAT_0422fa60);
              DAT_0452ffe3 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar22 = 1.0 / SQRT(fVar35 * fVar35 + fVar33 * fVar33 + fVar34 * fVar34);
            fVar33 = fVar33 * fVar22;
            fVar34 = fVar34 * fVar22;
            fVar35 = fVar35 * fVar22;
          }
          lVar13 = *unaff_x24;
          fVar22 = (float)((ulong)*(undefined8 *)(unaff_x29 + -0x160) >> 0x20);
          pvVar5 = *(void **)(unaff_x29 + -200);
          if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -200);
          }
          puVar16 = *(undefined8 **)(unaff_x29 + -0x138);
          memcpy(puVar16,pvVar5,__n_00);
          puVar19 = *(undefined8 **)(lVar13 + 0x60);
          uVar25 = *puVar19;
          if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
            puVar16 = (undefined8 *)*puVar16;
          }
          *(float *)(unaff_x29 + -100) = fVar22;
          *(undefined8 **)(unaff_x29 + -0xa0) = puVar16;
          *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
          (*(code *)puVar19[2])(uVar25,puVar19,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
          fVar36 = *(float *)(unaff_x29 + -0x60);
          fVar38 = *(float *)(unaff_x29 + -0x5c);
          fVar39 = *(float *)(unaff_x29 + -0x58);
          if (DAT_0452ffe3 == '\0') {
            FUN_01c5d288(PTR_DAT_0422fa60);
            DAT_0452ffe3 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          fVar23 = 1.0 / SQRT(fVar39 * fVar39 + fVar36 * fVar36 + fVar38 * fVar38);
          fVar36 = fVar36 * fVar23;
          fVar38 = fVar38 * fVar23;
          fVar39 = fVar39 * fVar23;
          *(float *)(unaff_x29 + -0x160) = fVar36;
          fVar36 = fVar39 * fVar39 + fVar36 * fVar36 + fVar38 * fVar38;
          *(float *)(unaff_x29 + -0x170) = fVar38;
          if ((fVar36 == 0.0) || (0x7f800000 < (uint)ABS(fVar36))) {
            lVar13 = *unaff_x24;
            pvVar5 = *(void **)(unaff_x29 + -200);
            if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
              pvVar5 = (void *)(unaff_x29 + -200);
            }
            puVar16 = *(undefined8 **)(unaff_x29 + -0x138);
            memcpy(puVar16,pvVar5,__n_00);
            fVar36 = DAT_00b933cc;
            puVar19 = *(undefined8 **)(lVar13 + 0x60);
            uVar25 = *puVar19;
            if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
              puVar16 = (undefined8 *)*puVar16;
            }
            *(undefined8 **)(unaff_x29 + -0xa0) = puVar16;
            *(long *)(unaff_x29 + -0x98) = unaff_x29 + -100;
            *(float *)(unaff_x29 + -100) = fVar22 + fVar36;
            (*(code *)puVar19[2])(uVar25,puVar19,0,unaff_x29 + -0xa0,unaff_x29 + -0x60);
            fVar22 = *(float *)(unaff_x29 + -0x60);
            fVar36 = *(float *)(unaff_x29 + -0x5c);
            fVar39 = *(float *)(unaff_x29 + -0x58);
            if (DAT_0452ffe3 == '\0') {
              FUN_01c5d288(PTR_DAT_0422fa60);
              DAT_0452ffe3 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            fVar38 = 1.0 / SQRT(fVar39 * fVar39 + fVar22 * fVar22 + fVar36 * fVar36);
            *(float *)(unaff_x29 + -0x160) = fVar22 * fVar38;
            fVar39 = fVar39 * fVar38;
            *(float *)(unaff_x29 + -0x170) = fVar36 * fVar38;
          }
          pvVar20 = *(void **)(unaff_x29 + -0x168);
          pvVar5 = *(void **)(unaff_x29 + -0x1e8);
          if (0 < iVar1) {
            *(float *)(unaff_x29 + -0x138) = -fVar33;
            *(float *)(unaff_x29 + -0x1b4) = -fVar34;
            *(float *)(unaff_x29 + -0x1c0) = -fVar35;
            iVar32 = 0;
            lVar13 = unaff_x29 + -0x60;
            lVar10 = unaff_x29 + -0xa0;
            fVar33 = (360.0 / (float)iVar1) * DAT_00b931d0;
            do {
              puVar19 = *(undefined8 **)(*unaff_x24 + 0x68);
              uVar25 = *puVar19;
              iVar1 = *(int *)(unaff_x29 + -0x140) + iVar32;
              pvVar21 = *(void **)(unaff_x29 + -0x198);
              *(int *)(unaff_x29 + -0x60) = iVar1;
              *(long *)(unaff_x29 + -0xa0) = lVar13;
              *(void **)(unaff_x29 + -0x98) = pvVar21;
              (*(code *)puVar19[2])(uVar25,puVar19,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar21);
              memcpy(pvVar20,pvVar21,__n);
              puVar19 = *(undefined8 **)(*unaff_x24 + 0x68);
              uVar25 = *puVar19;
              iVar4 = *(int *)(unaff_x29 + -0x150) + iVar32;
              pvVar20 = *(void **)(unaff_x29 + -0x1a0);
              *(int *)(unaff_x29 + -0x60) = iVar4;
              *(long *)(unaff_x29 + -0xa0) = lVar13;
              *(void **)(unaff_x29 + -0x98) = pvVar20;
              (*(code *)puVar19[2])(uVar25,puVar19,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar20);
              memcpy(pvVar5,pvVar20,__n);
              uVar28 = *(undefined4 *)(unaff_x29 + -0x1b4);
              uVar29 = *(undefined4 *)(unaff_x29 + -0x1c0);
              uVar24 = FUN_03a4388c(*(undefined4 *)(unaff_x29 + -0x138),0);
              lVar11 = *unaff_x24;
              lVar15 = *(long *)(lVar11 + 0x70);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = FUN_01c72394();
                lVar11 = *unaff_x24;
              }
              puVar9 = PTR_DAT_0422fa60;
              uVar25 = *(undefined8 *)(lVar11 + 0x78);
              uVar6 = *(undefined8 *)(unaff_x29 + -0x168);
              *(undefined4 *)(unaff_x29 + -0xa0) = uVar24;
              *(undefined4 *)(unaff_x29 + -0x9c) = uVar28;
              *(undefined4 *)(unaff_x29 + -0x98) = uVar29;
              *(long *)(unaff_x29 + -0x60) = lVar10;
              FUN_01c5dc8c(lVar15,uVar25,*(undefined8 *)(unaff_x29 + -0x178),uVar6,unaff_x29 + -0x60
                           ,unaff_x29 + -0xa0);
              if (DAT_0452ffe4 == '\0') {
                FUN_01c5d288(puVar9);
                DAT_0452ffe4 = '\x01';
              }
              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              dVar37 = (double)(fVar33 * (float)iVar32);
              dVar26 = cos(dVar37);
              if (DAT_0452ffe5 == '\0') {
                FUN_01c5d288(puVar9);
                DAT_0452ffe5 = '\x01';
              }
              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              dVar37 = sin(dVar37);
              fVar35 = (float)dVar37 * 0.5 + 0.5;
              fVar34 = fVar35;
              uVar24 = FUN_03a42f88((float)dVar26 * 0.5 + 0.5,0);
              lVar11 = *unaff_x24;
              lVar15 = *(long *)(lVar11 + 0x70);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = FUN_01c72394();
                lVar11 = *unaff_x24;
              }
              uVar25 = *(undefined8 *)(lVar11 + 0x80);
              *(undefined4 *)(unaff_x29 + -0xa0) = uVar24;
              *(float *)(unaff_x29 + -0x9c) = fVar34;
              *(long *)(unaff_x29 + -0x60) = lVar10;
              FUN_01c5dc8c(lVar15,uVar25,*(undefined8 *)(unaff_x29 + -0x180),uVar6,unaff_x29 + -0x60
                           ,unaff_x29 + -0xa0);
              uVar28 = *(undefined4 *)(unaff_x29 + -0x170);
              fVar34 = fVar39;
              uVar24 = FUN_03a4388c(*(undefined4 *)(unaff_x29 + -0x160),0);
              lVar11 = *unaff_x24;
              lVar15 = *(long *)(lVar11 + 0x70);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = FUN_01c72394();
                lVar11 = *unaff_x24;
              }
              uVar25 = *(undefined8 *)(lVar11 + 0x78);
              *(undefined4 *)(unaff_x29 + -0xa0) = uVar24;
              *(undefined4 *)(unaff_x29 + -0x9c) = uVar28;
              *(float *)(unaff_x29 + -0x98) = fVar34;
              *(long *)(unaff_x29 + -0x60) = lVar10;
              FUN_01c5dc8c(lVar15,uVar25,*(undefined8 *)(unaff_x29 + -0x188),pvVar5,
                           unaff_x29 + -0x60,unaff_x29 + -0xa0);
              if (DAT_0452ffe4 == '\0') {
                FUN_01c5d288(puVar9);
                DAT_0452ffe4 = '\x01';
              }
              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              if (DAT_0452ffe5 == '\0') {
                FUN_01c5d288(puVar9);
                DAT_0452ffe5 = '\x01';
              }
              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar24 = FUN_03a42f88(0.5 - (float)dVar26 * 0.5,0);
              lVar11 = *unaff_x24;
              lVar15 = *(long *)(lVar11 + 0x70);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = FUN_01c72394();
                lVar11 = *unaff_x24;
              }
              uVar25 = *(undefined8 *)(lVar11 + 0x80);
              *(undefined4 *)(unaff_x29 + -0xa0) = uVar24;
              *(float *)(unaff_x29 + -0x9c) = fVar35;
              *(long *)(unaff_x29 + -0x60) = lVar10;
              FUN_01c5dc8c(lVar15,uVar25,*(undefined8 *)(unaff_x29 + -400),pvVar5,unaff_x29 + -0x60,
                           unaff_x29 + -0xa0);
              pvVar21 = *(void **)(unaff_x29 + -0x1a8);
              pvVar20 = *(void **)(unaff_x29 + -0x168);
              memcpy(pvVar21,pvVar20,__n);
              puVar19 = *(undefined8 **)(*unaff_x24 + 0x88);
              uVar25 = *puVar19;
              *(int *)(unaff_x29 + -0x60) = iVar1;
              *(long *)(unaff_x29 + -0xa0) = lVar13;
              *(void **)(unaff_x29 + -0x98) = pvVar21;
              (*(code *)puVar19[2])(uVar25,puVar19,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar21);
              pvVar21 = *(void **)(unaff_x29 + -0x1b0);
              memcpy(pvVar21,pvVar5,__n);
              puVar19 = *(undefined8 **)(*unaff_x24 + 0x88);
              uVar25 = *puVar19;
              *(int *)(unaff_x29 + -0x60) = iVar4;
              *(long *)(unaff_x29 + -0xa0) = lVar13;
              *(void **)(unaff_x29 + -0x98) = pvVar21;
              (*(code *)puVar19[2])(uVar25,puVar19,unaff_x29 + -0xb0,unaff_x29 + -0xa0,pvVar21);
              iVar32 = iVar32 + 1;
            } while (*(int *)(unaff_x29 + -0x13c) != iVar32);
          }
        }
        if (*(long *)(*(long *)(unaff_x29 + -0x1c8) + 0x28) == *(long *)(unaff_x29 + -0x50)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar25 = *(undefined8 *)(lVar13 + 0x30);
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar25 = FUN_032e04b8(uVar25,0);
      uVar6 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
      uVar18 = FUN_032e935c(uVar25,uVar6,0);
      if ((uVar18 & 1) != 0) {
        auVar40 = (*(code *)**(undefined8 **)(*unaff_x24 + 0x40))(unaff_x29 + -0xc0);
        puVar9 = UnityEngine_UIElements_LongField_TypeInfo;
        uVar6 = *(undefined8 *)(unaff_x25 + 2);
        uVar25 = *(undefined8 *)unaff_x25;
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x25 + 4);
        *(undefined8 *)(unaff_x29 + -0x98) = uVar6;
        *(undefined8 *)(unaff_x29 + -0xa0) = uVar25;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        *(undefined8 *)(unaff_x29 + -0x128) = *(undefined8 *)(unaff_x29 + -0x98);
        *(undefined8 *)(unaff_x29 + -0x130) = *(undefined8 *)(unaff_x29 + -0xa0);
        *(undefined8 *)(unaff_x29 + -0x120) = *(undefined8 *)(unaff_x29 + -0x90);
        FUN_03c6433c(auVar40._0_8_,auVar40._8_8_,unaff_x29 + -0x130,unaff_w27,
                     *(undefined4 *)(unaff_x29 + -0x160),0);
        goto LAB_023e0b64;
      }
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar6 = thunk_FUN_01c496e0();
      uVar25 = thunk_FUN_01c273e8(Mono_Security_Cryptography_MD2Managed_TypeInfo);
      uVar8 = thunk_FUN_01c273e8(Mono_Security_Cryptography_MD2Managed_TypeInfo);
      FUN_0323fce4(uVar6,uVar25,uVar8,0);
      goto LAB_023e198c;
    }
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar6 = thunk_FUN_01c496e0();
    uVar25 = thunk_FUN_01c273e8(System_Linq_Expressions_LoopExpression_TypeInfo);
    puVar9 = LostTarget_TypeInfo;
  }
  uVar8 = thunk_FUN_01c273e8(puVar9);
  FUN_03243400(uVar6,uVar25,uVar8,0);
LAB_023e198c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar6,*(undefined8 *)(unaff_x29 + -0x170));
}


