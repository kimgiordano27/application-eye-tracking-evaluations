/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector2f>
ENTRY_POINT: 0316a3b4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector2f>(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  byte bVar12;
  uint in_w8;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  float *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long unaff_x23;
  ulong unaff_x24;
  undefined4 *puVar22;
  undefined1 *unaff_x26;
  long unaff_x27;
  float *pfVar23;
  long *unaff_x28;
  undefined **unaff_x29;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  double dVar29;
  float fVar32;
  ulong uVar33;
  undefined4 uVar34;
  float unaff_s8;
  undefined4 uVar35;
  float unaff_s9;
  undefined8 uVar36;
  float fVar37;
  uint uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float unaff_s12;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float unaff_s15;
  float fVar46;
  int iVar47;
  undefined8 in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int iStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  long *in_stack_00000090;
  long in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  float *in_stack_000000d8;
  long *in_stack_000000e0;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  int iStack0000000000000108;
  float fStack000000000000010c;
  ulong in_stack_00000110;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float in_stack_00000130;
  long in_stack_00000148;
  undefined8 in_stack_00000160;
  ulong in_stack_00000168;
  long in_stack_00000170;
  undefined4 uStack00000000000001a0;
  float fStack00000000000001a4;
  float fStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  float in_stack_000001b8;
  float fStack00000000000001c0;
  float fStack00000000000001c4;
  float in_stack_000001c8;
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  float in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000240;
  undefined4 in_stack_00000268;
  float in_stack_0000026c;
  float in_stack_00000270;
  float in_stack_00000278;
  float in_stack_0000027c;
  float in_stack_00000280;
  
code_r0x0316a3b4:
  fVar40 = unaff_x19[2];
  pfVar23 = (float *)(unaff_x27 + 0x20);
  fVar37 = *pfVar23;
  fVar45 = *(float *)(unaff_x27 + 0x24);
  fVar43 = *(float *)(unaff_x27 + 0x28);
  if (in_w8 == 0) {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06db4c77 = 1;
  }
  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if ((*(long *)(unaff_x23 + 0x68) == 0) ||
     (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
     lVar9 == 0)) goto LAB_03168190;
  fVar45 = unaff_s12 - fVar45;
  fVar40 = fVar40 - fVar43;
  uVar33 = (ulong)(uint)fVar40;
  uVar15 = (ulong)(uint)(fVar40 * fVar40);
  fVar45 = unaff_s8 +
           SQRT(fVar40 * fVar40 + (unaff_s9 - fVar37) * (unaff_s9 - fVar37) + fVar45 * fVar45);
  iVar19 = (int)unaff_x24;
  if (*(int *)(lVar9 + 0x6c) == 0) {
    if ((*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) ||
       (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168)) goto LAB_0316f2c4;
    fVar43 = *unaff_x19;
    fVar40 = unaff_x19[1];
    fVar30 = *pfVar23;
    fVar32 = *(float *)(unaff_x27 + 0x24);
    fVar37 = unaff_x19[2];
    fVar31 = *(float *)(unaff_x27 + 0x28);
    if (DAT_06db4c77 == 0) {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = 1;
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (unaff_x24 < 2) {
      bVar7 = false;
    }
    else {
      if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
      lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar19 + -2,*unaff_x21);
      if (lVar9 == 0) goto LAB_03168190;
      if (*(int *)(lVar9 + 0x6c) == 1) {
        bVar7 = true;
      }
      else {
        if ((*(long *)(unaff_x23 + 0x68) == 0) ||
           (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar19 + -2,*unaff_x21), lVar9 == 0))
        goto LAB_03168190;
        bVar7 = *(int *)(lVar9 + 0x6c) == 2;
      }
    }
    fVar24 = 0.0;
    if (unaff_x24 == 1) {
      fVar24 = fStack0000000000000064;
    }
    fVar26 = fStack0000000000000068;
    if (unaff_x24 != *(int *)(in_stack_00000170 + 0x18) - 3) {
      fVar26 = 1.0;
    }
    if (fVar26 <= fVar24) {
      iStack0000000000000108 = 0;
    }
    else {
      fVar40 = fVar40 - fVar32;
      fVar37 = fVar37 - fVar31;
      fVar40 = DAT_010fcf10 /
               SQRT(fVar37 * fVar37 + (fVar43 - fVar30) * (fVar43 - fVar30) + fVar40 * fVar40);
      do {
        uVar15 = *(ulong *)(in_stack_00000170 + 0x18);
        if (fVar40 + fVar24 <= 1.0) {
          bVar12 = 0;
        }
        else if (unaff_x24 == (int)uVar15 - 3) {
          bVar12 = *(byte *)(unaff_x23 + 0x84) ^ 1;
        }
        else {
          bVar12 = 0;
        }
        bVar8 = bVar12 != 0;
        fVar37 = 1.0;
        if (!bVar8) {
          fVar37 = fVar24;
        }
        if (((uVar15 & 0xffffffff) <= unaff_x24) || ((uVar15 & 0xffffffff) <= in_stack_00000168))
        goto LAB_0316f2c4;
        fVar30 = unaff_x19[1];
        fVar43 = unaff_x19[2];
        fVar24 = *unaff_x19;
        FUN_04059a68(in_stack_000000c8,unaff_x24 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0a108);
        fVar31 = in_stack_0000026c;
        fVar32 = in_stack_00000270;
        fVar24 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,in_stack_00000270,fVar24,
                                     fVar30,fVar43);
        _fStack00000000000001c0 = CONCAT44(fVar31,fVar24);
        fVar43 = in_stack_00000160._4_4_;
        fVar30 = (float)in_stack_00000110;
        if (iStack0000000000000108 == 3) {
          iStack0000000000000108 = 0;
          fVar43 = fVar32;
          fVar30 = fVar24;
          fStack0000000000000128 = fVar31;
          fStack000000000000012c = fVar32;
          in_stack_00000130 = fVar24;
        }
        unaff_x29 = &PTR_FUN_06db4000;
        in_stack_000001c8 = fVar32;
        if (DAT_06db4c77 == 0) {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = 1;
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar27 = in_stack_000001c8;
        if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
        fVar44 = *pfVar23;
        fVar41 = *(float *)(unaff_x27 + 0x24);
        fVar25 = fStack00000000000001c0;
        fVar28 = fStack00000000000001c4;
        fVar46 = *(float *)(unaff_x27 + 0x28);
        if (DAT_06db4c77 == 0) {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = 1;
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar9 = *(long *)(unaff_x26 + 0x20);
        if (lVar9 == 0) goto LAB_03168190;
        fVar28 = fVar28 - fVar41;
        iVar20 = *(int *)(lVar9 + 0x18);
        fVar27 = fVar27 - fVar46;
        fVar41 = fVar27 * fVar27;
        fVar25 = SQRT(fVar41 + (fVar25 - fVar44) * (fVar25 - fVar44) + fVar28 * fVar28);
        if (iVar20 < 1) {
          lVar9 = *(long *)(unaff_x26 + 0x78);
          if (lVar9 == 0) goto LAB_03168190;
          iVar20 = *(int *)(lVar9 + 0x18);
          if (0 < iVar20) goto LAB_0316b4d8;
        }
        else {
LAB_0316b4d8:
          fVar28 = (float)FUN_0409f2f4(lVar9,iVar20 + -1,*(undefined8 *)PTR_DAT_069fd088);
          fStack00000000000000f0 = in_stack_000001c8;
          fStack00000000000000f8 = fStack00000000000001c0;
          fStack00000000000000f4 = fStack00000000000001c4;
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          plVar18 = (long *)PTR_DAT_069fb978;
          fStack00000000000000f8 = fStack00000000000000f8 - fVar28;
          fStack00000000000000f4 = fStack00000000000000f4 - fVar41;
          fStack00000000000000f0 = fStack00000000000000f0 - fVar27;
          fVar27 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                        fStack00000000000000f8 * fStack00000000000000f8 +
                        fStack00000000000000f4 * fStack00000000000000f4);
          if (fVar27 <= DAT_010fd13c) {
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(PTR_DAT_069fb978);
              DAT_06db4c71 = '\x01';
            }
            pfVar16 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
            fStack00000000000000f8 = *pfVar16;
            fStack00000000000000f4 = pfVar16[1];
            fStack00000000000000f0 = pfVar16[2];
            plVar18 = (long *)PTR_DAT_069fb978;
          }
          else {
            fStack00000000000000f8 = fStack00000000000000f8 / fVar27;
            fStack00000000000000f4 = fStack00000000000000f4 / fVar27;
            fStack00000000000000f0 = fStack00000000000000f0 / fVar27;
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(PTR_DAT_069fb978);
              DAT_06db4c71 = '\x01';
            }
          }
          pfVar16 = *(float **)(*plVar18 + 0xb8);
          if (fStack00000000000000a4 <=
              (fStack00000000000000fc - pfVar16[2]) * (fStack00000000000000fc - pfVar16[2]) +
              (fStack0000000000000104 - *pfVar16) * (fStack0000000000000104 - *pfVar16) +
              (fStack0000000000000100 - pfVar16[1]) * (fStack0000000000000100 - pfVar16[1])) {
            if (DAT_06db4ece == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4ece = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            unaff_s15 = 0.0;
            fVar27 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                          fStack0000000000000100 * fStack0000000000000100 +
                          fStack0000000000000104 * fStack0000000000000104) *
                          (fStack00000000000000f0 * fStack00000000000000f0 +
                          fStack00000000000000f8 * fStack00000000000000f8 +
                          fStack00000000000000f4 * fStack00000000000000f4));
            if (DAT_010fcd14 <= fVar27) {
              fVar27 = (fStack00000000000000fc * fStack00000000000000f0 +
                       fStack0000000000000104 * fStack00000000000000f8 +
                       fStack0000000000000100 * fStack00000000000000f4) / fVar27;
              fVar28 = 1.0;
              if (fVar27 <= 1.0) {
                fVar28 = fVar27;
              }
              fVar41 = -1.0;
              if (-1.0 <= fVar27) {
                fVar41 = fVar28;
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              dVar29 = acos((double)fVar41);
              unaff_s15 = (float)dVar29 * DAT_010fcf40;
            }
            bVar8 = false;
            bVar5 = true;
            bVar6 = false;
            if (*(float *)(in_stack_00000148 + 0x80) < unaff_s15) {
              bVar8 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar25)) {
                bVar8 = fVar25 < 1.5;
                bVar5 = fVar25 == 1.5;
                bVar6 = false;
              }
            }
            bVar8 = bVar12 != 0 ||
                    (!bVar5 && bVar8 == bVar6) &&
                    1.0 <= SQRT((fStack000000000000012c - fVar32) *
                                (fStack000000000000012c - fVar32) +
                                (fStack0000000000000128 - fVar31) *
                                (fStack0000000000000128 - fVar31) +
                                (in_stack_00000130 - fVar24) * (in_stack_00000130 - fVar24));
          }
        }
        unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
        if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
          if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
          FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
        }
        bVar5 = bVar8;
        if (fVar26 < fVar40 + fVar37 + DAT_010fd060) {
          bVar6 = bVar8;
          if (fStack00000000000000a0 <= fVar25) {
            bVar6 = true;
          }
          if (bVar6 == false && (in_stack_000000c0._4_1_ & 1) == 0) {
            if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
            fVar37 = 1.0;
            _fStack00000000000001c0 = *(ulong *)pfVar23;
            in_stack_000001c8 = *(float *)(unaff_x27 + 0x28);
            bVar5 = true;
          }
        }
        if (fVar40 + fVar37 <= fVar26) {
          fVar31 = fStack00000000000001c0;
          fVar32 = fStack00000000000001c4;
        }
        else {
          if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
          _fStack00000000000001c0 = *(ulong *)pfVar23;
          fVar37 = 1.0;
          in_stack_000001c8 = *(float *)(unaff_x27 + 0x28);
          bVar5 = true;
          fVar31 = *pfVar23;
          fVar32 = *(float *)(unaff_x27 + 0x24);
        }
        fVar24 = in_stack_000001c8;
        if (DAT_06db4c77 == 0) {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = 1;
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar27 = in_stack_000001c8;
        bVar6 = bVar5;
        if (fStack000000000000010c <
            SQRT((fStack000000000000012c - fVar24) * (fStack000000000000012c - fVar24) +
                 (in_stack_00000130 - fVar31) * (in_stack_00000130 - fVar31) +
                 (fStack0000000000000128 - fVar32) * (fStack0000000000000128 - fVar32))) {
          bVar6 = true;
        }
        bVar1 = bVar6;
        if (unaff_x24 != 1) {
          bVar1 = true;
        }
        if (bVar1 == false) {
          bVar6 = fVar37 == 0.0;
        }
        if (bVar6 == true) {
          fVar31 = fStack00000000000001c0;
          fVar32 = fStack00000000000001c4;
          if (DAT_06db4c77 == 0) {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = 1;
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            bVar12 = DAT_06db4c77;
          }
          else {
            bVar12 = 1;
          }
          fVar24 = in_stack_000001c8;
          uVar15 = _fStack00000000000001c0;
          in_stack_00000110 = _fStack00000000000001c0 & 0xffffffff;
          fVar31 = SQRT((fStack000000000000012c - fVar27) * (fStack000000000000012c - fVar27) +
                        (in_stack_00000130 - fVar31) * (in_stack_00000130 - fVar31) +
                        (fStack0000000000000128 - fVar32) * (fStack0000000000000128 - fVar32));
          in_stack_00000160._4_4_ = in_stack_000001c8;
          fStack00000000000001d4 = fVar31 + fStack00000000000001d4;
          *in_stack_000000d8 = fVar31 + *in_stack_000000d8;
          if (bVar12 == 0) {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = 1;
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          in_stack_00000280 = in_stack_000001c8;
          lVar9 = *(long *)(in_stack_00000148 + 0x68);
          *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
          fVar30 = (float)uVar15 - fVar30;
          in_stack_00000130 = fStack00000000000001c0;
          in_stack_00000230 =
               in_stack_00000230 + SQRT(fVar30 * fVar30 + (fVar24 - fVar43) * (fVar24 - fVar43));
          fStack0000000000000128 = fStack00000000000001c4;
          fStack000000000000012c = in_stack_000001c8;
          if ((lVar9 == 0) ||
             (lVar9 = FUN_0400ff1c(lVar9,unaff_x20 & 0xffffffff,*unaff_x21), lVar9 == 0))
          goto LAB_03168190;
          if (*(float *)(lVar9 + 0x100) == 0.0) {
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                     *unaff_x21), lVar9 == 0)) goto LAB_03168190;
            if (*(float *)(lVar9 + 0x104) != 0.0) goto LAB_0316bb78;
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                     *unaff_x21), lVar9 == 0)) goto LAB_03168190;
            if (*(float *)(lVar9 + 0x110) != 0.0) goto LAB_0316bb78;
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                     *unaff_x21), lVar9 == 0)) goto LAB_03168190;
            if (*(float *)(lVar9 + 0x114) != 0.0) goto LAB_0316bb78;
            lVar9 = *in_stack_000000e0;
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar38 = *(uint *)(lVar9 + 0x18);
            if (uVar38 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar38 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
LAB_0316bb78:
            if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
            fVar43 = *in_stack_000000d8;
            uVar36 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                  *unaff_x21);
            FUN_0316f6a0(fVar43,fVar45,uVar36,uVar36,&stack0x0000022c,&stack0x00000228,
                         &stack0x00000224,&stack0x00000218,&stack0x00000278,&stack0x00000214);
          }
          lVar9 = *in_stack_000000b8;
          if (fVar31 <= 5.0) {
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar38 = *(uint *)(lVar9 + 0x18);
            fVar43 = (unaff_s15 / fVar31) * 5.0;
            if (*(uint *)(lVar10 + 0x18) <= uVar38) {
              lVar10 = *(long *)(lVar14 + 0x20);
              goto LAB_0316bcb0;
            }
            *(uint *)(lVar9 + 0x18) = uVar38 + 1;
            *(float *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = fVar43;
          }
          else {
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar38 = *(uint *)(lVar9 + 0x18);
            if (uVar38 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar38 + 1;
              *(float *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = unaff_s15;
            }
            else {
              lVar10 = *(long *)(lVar14 + 0x20);
              fVar43 = unaff_s15;
LAB_0316bcb0:
              FUN_04059d64(fVar43,lVar9,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x70));
            }
          }
          if (bVar7) {
            lVar9 = *in_stack_000000b8;
            if (lVar9 == 0) goto LAB_03168190;
            iVar20 = *(int *)(lVar9 + 0x18);
            if (1 < iVar20) {
              FUN_04059a68(lVar9,iVar20 + -1,*(undefined8 *)PTR_DAT_06a0a108);
              FUN_04059abc(lVar9,iVar20 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
            }
          }
          puVar2 = PTR_DAT_069fbee0;
          lVar9 = *(long *)(unaff_x26 + 0x20);
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar9 + 0x18);
          if (uVar38 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar38 * 0xc;
            *(uint *)(lVar9 + 0x18) = uVar38 + 1;
            *(float *)(lVar10 + 0x20) = in_stack_00000278;
            *(float *)(lVar10 + 0x24) = in_stack_0000027c;
            *(float *)(lVar10 + 0x28) = in_stack_00000280;
          }
          else {
            FUN_0409f624(lVar9,*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
          }
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          lVar9 = *(long *)(unaff_x26 + 0x28);
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar9 + 0x18);
          if (uVar38 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar38 + 1;
            *(float *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = fVar37;
          }
          else {
            FUN_04059d64(fVar37,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          if (bVar5 != false) {
            lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar38 = *(uint *)(lVar9 + 0x18);
            if (uVar38 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar38 + 1;
              *(int *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = in_stack_000000d0._4_4_;
            }
            else {
              FUN_03fb3e1c(lVar9,in_stack_000000d0._4_4_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          bVar7 = false;
          fStack00000000000000fc = fStack00000000000000f0;
          fStack0000000000000100 = fStack00000000000000f4;
          in_stack_000000d0._4_4_ = in_stack_000000d0._4_4_ + 1;
          fStack0000000000000104 = fStack00000000000000f8;
          in_stack_000000c0._4_1_ = bVar8;
        }
        else {
          in_stack_00000110 = (ulong)(uint)fVar30;
          in_stack_00000160._4_4_ = fVar43;
        }
        fVar24 = fVar40 + fVar37;
        unaff_x23 = in_stack_00000148;
      } while (fVar24 < fVar26);
      iStack0000000000000108 = 0;
      unaff_x28 = (long *)PTR_DAT_069fb978;
    }
  }
  else {
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
       lVar9 == 0)) goto LAB_03168190;
    if (*(int *)(lVar9 + 0x6c) != 1) {
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
         lVar9 == 0)) goto LAB_03168190;
      if (*(int *)(lVar9 + 0x6c) != 2) {
        if ((*(long *)(unaff_x23 + 0x68) == 0) ||
           (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
           lVar9 == 0)) goto LAB_03168190;
        if (*(int *)(lVar9 + 0x6c) == 3) {
          uStack00000000000001ac = 0;
          if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
          if (((long)(*(int *)(*(long *)(unaff_x23 + 0x68) + 0x18) + -2) < (long)unaff_x24) &&
             (*(char *)(unaff_x23 + 0x84) == '\0')) {
            uVar36 = *(undefined8 *)(unaff_x23 + 0x2e0);
            if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar11 = FUN_0634eb94(uVar36,0,0);
            if ((uVar11 & 1) != 0) goto LAB_0316adcc;
            FUN_030fd644(&stack0x00000290,unaff_x23,unaff_x24 & 0xffffffff,&stack0x00000238,
                         &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
          }
          else {
LAB_0316adcc:
            FUN_030faa2c(&stack0x00000290,unaff_x23,unaff_x24 & 0xffffffff,&stack0x00000238,
                         &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
          }
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
             lVar9 == 0)) goto LAB_03168190;
          lVar10 = *(long *)(unaff_x26 + 0x28);
          *(undefined4 *)(lVar9 + 0x34) = uStack00000000000001ac;
          if (lVar10 == 0) goto LAB_03168190;
          fVar40 = 0.0;
          iVar20 = 0;
          puVar22 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
          while( true ) {
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            puVar2 = PTR_DAT_069fbee0;
            unaff_x28 = (long *)PTR_DAT_069fb978;
            fVar37 = (float)uVar15;
            in_stack_00000160._4_4_ = (float)uVar33;
            iVar47 = *(int *)(lVar10 + 0x18);
            if (iVar47 <= iVar20) break;
            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
            uStack00000000000001a0 =
                 FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar20,*(undefined8 *)PTR_DAT_069fd088);
            fStack00000000000001a4 = fVar37;
            fStack00000000000001a8 = in_stack_00000160._4_4_;
            if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
              uVar15 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
              if ((((uVar15 <= unaff_x20) || (uVar15 <= unaff_x24)) || (uVar15 <= in_stack_00000168)
                  ) || (uVar15 <= unaff_x24 + 2)) goto LAB_0316f2c4;
              if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
              uVar35 = *puVar22;
              fVar37 = (float)puVar22[1];
              uVar34 = puVar22[2];
              fVar43 = *unaff_x19;
              fVar30 = unaff_x19[1];
              fVar31 = unaff_x19[2];
              FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar20,*(undefined8 *)PTR_DAT_06a0a108);
              FUN_0316f340(uVar35,fVar37,uVar34,fVar43,fVar30,fVar31);
              fStack00000000000001a4 = fVar37;
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              in_stack_00000160._4_4_ = fStack00000000000001a8;
              FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar20,
                           *(undefined8 *)PTR_DAT_06a0b7d0);
              if (iVar20 != 0) goto LAB_0316af8c;
LAB_0316b04c:
              lVar9 = *in_stack_000000e0;
              if (lVar9 == 0) goto LAB_03168190;
              lVar10 = *(long *)(lVar9 + 0x10);
              lVar14 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_03168190;
              uVar38 = *(uint *)(lVar9 + 0x18);
              if (uVar38 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar38 + 1;
                *(undefined4 *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar9,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
              FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
              if (iVar20 == 0) goto LAB_0316b04c;
LAB_0316af8c:
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                       *(undefined8 *)PTR_DAT_06a0b440), lVar9 == 0))
              goto LAB_03168190;
              if (*(float *)(lVar9 + 0x100) == 0.0) {
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                         *(undefined8 *)PTR_DAT_06a0b440), lVar9 == 0))
                goto LAB_03168190;
                if (*(float *)(lVar9 + 0x104) == 0.0) {
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                           unaff_x20 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440),
                     lVar9 == 0)) goto LAB_03168190;
                  if (*(float *)(lVar9 + 0x110) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                             unaff_x20 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440)
                       , lVar9 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar9 + 0x114) == 0.0) goto LAB_0316b04c;
                  }
                }
              }
              puVar2 = PTR_DAT_069fd088;
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              fVar43 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar20 + -1,
                                           *(undefined8 *)PTR_DAT_069fd088);
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              fVar30 = fVar37;
              fVar31 = in_stack_00000160._4_4_;
              fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar20,*(undefined8 *)puVar2)
              ;
              if (DAT_06db4c77 == 0) {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c77 = 1;
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              fVar24 = *in_stack_000000d8;
              fVar40 = fVar40 + SQRT((in_stack_00000160._4_4_ - fVar31) *
                                     (in_stack_00000160._4_4_ - fVar31) +
                                     (fVar43 - fVar32) * (fVar43 - fVar32) +
                                     (fVar37 - fVar30) * (fVar37 - fVar30));
              uVar36 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *(undefined8 *)PTR_DAT_06a0b440);
              FUN_0316f6a0(fVar40 + fVar24,fVar45,uVar36,uVar36,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x000001a0,&stack0x00000214);
            }
            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
            uVar33 = (ulong)(uint)fStack00000000000001a8;
            uVar15 = (ulong)(uint)fStack00000000000001a4;
            FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar20,
                         *(undefined8 *)PTR_DAT_06a0b7d0);
            lVar10 = *(long *)(unaff_x26 + 0x28);
            iVar20 = iVar20 + 1;
            if (lVar10 == 0) goto LAB_03168190;
          }
          uVar15 = (ulong)(iVar47 - 1);
          if (iVar47 < 1) {
            if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
            lVar9 = *(long *)(unaff_x26 + 0x20);
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            fVar45 = *pfVar23;
            uVar35 = *(undefined4 *)(unaff_x27 + 0x24);
            in_stack_00000160._4_4_ = *(float *)(unaff_x27 + 0x28);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar38 = *(uint *)(lVar9 + 0x18);
            if (uVar38 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + (long)(int)uVar38 * 0xc;
              *(uint *)(lVar9 + 0x18) = uVar38 + 1;
              *(float *)(lVar10 + 0x20) = fVar45;
              *(undefined4 *)(lVar10 + 0x24) = uVar35;
              *(float *)(lVar10 + 0x28) = in_stack_00000160._4_4_;
            }
            else {
              FUN_0409f624(lVar9,*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
              uVar15 = extraout_x1_00;
            }
            fVar45 = fStack00000000000001d4;
            if ((*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) ||
               (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168)) goto LAB_0316f2c4;
            uVar36 = *(undefined8 *)unaff_x19;
            fVar40 = unaff_x19[2];
            uVar39 = *(undefined8 *)pfVar23;
            fVar37 = *(float *)(unaff_x27 + 0x28);
            if (DAT_06db4c77 == 0) {
              FUN_02d965b8(PTR_DAT_069fbb48,uVar15);
              DAT_06db4c77 = 1;
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar43 = (float)uVar36 - (float)uVar39;
            fVar30 = (float)((ulong)uVar36 >> 0x20) - (float)((ulong)uVar39 >> 0x20);
            fVar40 = fVar40 - fVar37;
            in_stack_0000027c = fVar40 * fVar40;
            fStack00000000000001d4 =
                 fVar45 + SQRT(in_stack_0000027c + fVar43 * fVar43 + fVar30 * fVar30);
LAB_0316d2dc:
            lVar9 = *(long *)(unaff_x26 + 0x28);
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar38 = *(uint *)(lVar9 + 0x18);
            if (uVar38 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar38 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = 0x3f800000;
            }
            else {
              FUN_04059d64(0x3f800000,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            lVar9 = *in_stack_000000e0;
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar38 = *(uint *)(lVar9 + 0x18);
            if (uVar38 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar38 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            fVar45 = (float)FUN_04059a68(lVar10,uVar15,*(undefined8 *)PTR_DAT_06a0a108);
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            puVar2 = PTR_DAT_069fd088;
            unaff_x28 = (long *)PTR_DAT_069fb978;
            fVar40 = 1.0;
            if (fVar45 <= 1.0) {
              lVar9 = *(long *)(unaff_x26 + 0x20);
              if (lVar9 == 0) goto LAB_03168190;
              fVar45 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                           *(undefined8 *)PTR_DAT_069fd088);
              if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
              fVar40 = fVar40 - *(float *)(unaff_x27 + 0x24);
              in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - *(float *)(unaff_x27 + 0x28);
              in_stack_0000027c = fStack00000000000000a4;
              if (fStack00000000000000a4 <=
                  in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                  (fVar45 - *pfVar23) * (fVar45 - *pfVar23) + fVar40 * fVar40) {
                lVar9 = *(long *)(unaff_x26 + 0x20);
                if (lVar9 == 0) goto LAB_03168190;
                fVar45 = fStack00000000000000a4;
                fVar40 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2
                                            );
                if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
                fVar37 = *pfVar23;
                fVar30 = *(float *)(unaff_x27 + 0x24);
                fVar43 = *(float *)(unaff_x27 + 0x28);
                if (DAT_06db4c77 == 0) {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = 1;
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                puVar3 = PTR_DAT_069fbee0;
                fVar45 = fVar45 - fVar30;
                lVar9 = *(long *)(unaff_x26 + 0x20);
                in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar43;
                if (in_stack_000000b0 <=
                    SQRT(in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                         (fVar40 - fVar37) * (fVar40 - fVar37) + fVar45 * fVar45)) {
                  if (in_stack_00000168 < *(uint *)(in_stack_00000170 + 0x18)) {
                    if (lVar9 == 0) goto LAB_03168190;
                    lVar10 = *(long *)(lVar9 + 0x10);
                    fVar45 = *pfVar23;
                    fVar40 = *(float *)(unaff_x27 + 0x24);
                    in_stack_00000160._4_4_ = *(float *)(unaff_x27 + 0x28);
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar10 == 0) goto LAB_03168190;
                    uVar38 = *(uint *)(lVar9 + 0x18);
                    if (uVar38 < *(uint *)(lVar10 + 0x18)) {
                      lVar10 = lVar10 + (long)(int)uVar38 * 0xc;
                      *(uint *)(lVar9 + 0x18) = uVar38 + 1;
                      *(float *)(lVar10 + 0x20) = fVar45;
                      *(float *)(lVar10 + 0x24) = fVar40;
                      *(float *)(lVar10 + 0x28) = in_stack_00000160._4_4_;
                    }
                    else {
                      FUN_0409f624(lVar9,*(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) +
                                          0x70));
                    }
                    fVar45 = fStack00000000000001d4;
                    lVar9 = *(long *)(unaff_x26 + 0x20);
                    if (lVar9 == 0) goto LAB_03168190;
                    fVar37 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                 *(undefined8 *)puVar2);
                    if (in_stack_00000168 < *(uint *)(in_stack_00000170 + 0x18)) {
                      fVar43 = *pfVar23;
                      fVar31 = *(float *)(unaff_x27 + 0x24);
                      fVar30 = *(float *)(unaff_x27 + 0x28);
                      if (DAT_06db4c77 == 0) {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = 1;
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar40 = fVar40 - fVar31;
                      in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar30;
                      in_stack_0000027c = in_stack_00000160._4_4_ * in_stack_00000160._4_4_;
                      fStack00000000000001d4 =
                           fVar45 + SQRT(in_stack_0000027c +
                                         (fVar37 - fVar43) * (fVar37 - fVar43) + fVar40 * fVar40);
                      goto LAB_0316d2dc;
                    }
                  }
                  goto LAB_0316f2c4;
                }
                if (lVar9 == 0) goto LAB_03168190;
                if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
                in_stack_00000160._4_4_ = *(float *)(unaff_x27 + 0x28);
                in_stack_0000027c = *(float *)(unaff_x27 + 0x24);
                FUN_0409f350(*pfVar23,lVar9,*(int *)(lVar9 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                lVar9 = *(long *)(unaff_x26 + 0x28);
                if (lVar9 == 0) goto LAB_03168190;
                FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b5c0);
              }
            }
            else {
              lVar9 = *(long *)(unaff_x26 + 0x28);
              if (lVar9 == 0) goto LAB_03168190;
              FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,
                           *(undefined8 *)PTR_DAT_06a0b5c0);
              lVar9 = *(long *)(unaff_x26 + 0x20);
              if (lVar9 == 0) goto LAB_03168190;
              if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
              in_stack_00000160._4_4_ = *(float *)(unaff_x27 + 0x28);
              in_stack_0000027c = *(float *)(unaff_x27 + 0x24);
              FUN_0409f350(*pfVar23,lVar9,*(int *)(lVar9 + 0x18) + -1,
                           *(undefined8 *)PTR_DAT_06a0b7d0);
            }
          }
          lVar9 = *(long *)(unaff_x26 + 0x20);
          if (lVar9 == 0) goto LAB_03168190;
          iVar20 = *(int *)(lVar9 + 0x18);
          in_stack_00000110 = FUN_0409f2f4(lVar9,iVar20 + -1,*(undefined8 *)PTR_DAT_069fd088);
          puVar2 = PTR_DAT_069fd088;
          lVar9 = *(long *)(unaff_x26 + 0x20);
          in_stack_00000278 = (float)in_stack_00000110;
          if (lVar9 == 0) goto LAB_03168190;
          fVar45 = in_stack_00000160._4_4_;
          if (1 < *(int *)(lVar9 + 0x18)) {
            fStack0000000000000088 = in_stack_0000027c;
            fStack000000000000008c =
                 (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                     *(undefined8 *)PTR_DAT_069fd088);
            lVar9 = *(long *)(unaff_x26 + 0x20);
            if (lVar9 == 0) goto LAB_03168190;
            fVar40 = fStack0000000000000088;
            fVar37 = fVar45;
            fVar43 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fStack000000000000008c = fStack000000000000008c - fVar43;
            fStack0000000000000088 = fStack0000000000000088 - fVar40;
            fVar45 = fVar45 - fVar37;
            in_stack_00000080._4_4_ =
                 SQRT(fVar45 * fVar45 +
                      fStack000000000000008c * fStack000000000000008c +
                      fStack0000000000000088 * fStack0000000000000088);
            if (in_stack_00000080._4_4_ <= DAT_010fd13c) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(unaff_x28);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              pfVar23 = *(float **)(*unaff_x28 + 0xb8);
              fStack000000000000008c = *pfVar23;
              fStack0000000000000088 = pfVar23[1];
              in_stack_00000080._4_4_ = pfVar23[2];
            }
            else {
              fStack000000000000008c = fStack000000000000008c / in_stack_00000080._4_4_;
              fStack0000000000000088 = fStack0000000000000088 / in_stack_00000080._4_4_;
              in_stack_00000080._4_4_ = fVar45 / in_stack_00000080._4_4_;
            }
          }
          lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
          *(float *)(in_stack_00000148 + 0x2c0) =
               *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069fc3e0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar9 + 0x18);
          in_stack_000000d0._4_4_ = iVar20 + in_stack_000000d0._4_4_;
          fVar40 = fStack00000000000001d4;
          if (uVar38 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar38 + 1;
            *(int *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = in_stack_000000d0._4_4_;
          }
          else {
            FUN_03fb3e1c(lVar9,in_stack_000000d0._4_4_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
          iVar20 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
          in_stack_00000280 = in_stack_00000160._4_4_;
          if (0 < iVar20) {
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar19 + -2,*unaff_x21);
            if ((lVar9 != 0) && (lVar10 = *in_stack_00000090, lVar10 != 0)) {
              iVar47 = *(int *)(lVar9 + 0xbc);
              fVar37 = (float)FUN_04059a68(lVar10,*(int *)(lVar10 + 0x18) + -1,
                                           *(undefined8 *)PTR_DAT_06a0a108);
              lVar9 = *in_stack_00000090;
              if (lVar9 != 0) {
                if (1 < *(int *)(lVar9 + 0x18)) {
                  fVar40 = (float)FUN_04059a68(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                               *(undefined8 *)PTR_DAT_06a0a108);
                  fVar40 = fVar37 - fVar40;
                  fVar37 = fVar40;
                }
                puVar2 = PTR_DAT_069fd088;
                lVar9 = *(long *)(unaff_x26 + 0x78);
                if (lVar9 != 0) {
                  fVar43 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                               *(undefined8 *)PTR_DAT_069fd088);
                  if (*(long *)(unaff_x26 + 0x20) != 0) {
                    fVar30 = fVar40;
                    fVar31 = fVar45;
                    fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,*(undefined8 *)puVar2
                                                );
                    if (DAT_06db4c75 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fbb48);
                      DAT_06db4c75 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    fVar40 = fVar40 - fVar30;
                    uVar15 = (ulong)(uint)DAT_010fd13c;
                    fVar45 = SQRT((fVar45 - fVar31) * (fVar45 - fVar31) +
                                  (fVar43 - fVar32) * (fVar43 - fVar32) + fVar40 * fVar40);
                    if (fVar45 <= DAT_010fd13c) {
                      if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                        FUN_02d965b8(unaff_x28);
                        *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                      }
                      fVar40 = *(float *)(*(long *)(*unaff_x28 + 0xb8) + 4);
                    }
                    else {
                      fVar40 = fVar40 / fVar45;
                    }
                    puVar2 = PTR_DAT_069fd088;
                    lVar9 = *(long *)(unaff_x26 + 0x78);
                    if (lVar9 != 0) {
                      FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088
                                  );
                      lVar9 = *(long *)(unaff_x26 + 0x78);
                      if (lVar9 != 0) {
                        fVar30 = fVar45;
                        fVar43 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                     *(undefined8 *)puVar2);
                        if (*(long *)(unaff_x26 + 0x78) != 0) {
                          uVar33 = (ulong)(uint)(float)iVar47;
                          fVar31 = (float)iVar20 - (float)iVar47;
                          if (1.0 <= fVar31) {
                            fVar32 = 0.0;
                            iVar47 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                            iVar20 = 2;
                            iVar21 = -2;
                            do {
                              fVar24 = (float)uVar33;
                              if ((iVar20 - iVar47) + -1 < 0) {
                                lVar9 = *(long *)(unaff_x26 + 0x78);
                                if (lVar9 == 0) goto LAB_03168190;
                                fVar26 = (float)uVar15;
                                fVar27 = (float)FUN_0409f2f4(lVar9,iVar21 + *(int *)(lVar9 + 0x18),
                                                             *(undefined8 *)PTR_DAT_069fd088);
                                if (DAT_06db4c77 == 0) {
                                  FUN_02d965b8(PTR_DAT_069fbb48);
                                  DAT_06db4c77 = 1;
                                }
                                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                }
                                lVar9 = *(long *)(unaff_x26 + 0x78);
                                if (lVar9 == 0) goto LAB_03168190;
                                fVar25 = fVar26 - (float)uVar15;
                                fVar32 = fVar32 + SQRT(fVar25 * fVar25 +
                                                       (fVar27 - fVar43) * (fVar27 - fVar43) +
                                                       (fVar24 - fVar30) * (fVar24 - fVar30));
                                fVar45 = (fVar37 / fVar31) * fVar40 + fVar45;
                                fVar43 = 1.0;
                                if (SQRT(fVar32 / fVar37) <= 1.0) {
                                  fVar43 = SQRT(fVar32 / fVar37);
                                }
                                fVar30 = fVar45 + (fVar24 - fVar45) * fVar43;
                                uVar33 = (ulong)(uint)fVar30;
                                FUN_0409f350(fVar27,uVar33,fVar26,lVar9,
                                             iVar21 + *(int *)(lVar9 + 0x18),
                                             *(undefined8 *)PTR_DAT_06a0b7d0);
                                uVar15 = (ulong)(uint)fVar26;
                                fVar43 = fVar27;
                              }
                              fVar24 = (float)iVar20;
                              iVar20 = iVar20 + 1;
                              iVar21 = iVar21 + -1;
                            } while (fVar24 <= fVar31);
                            iStack0000000000000108 = 3;
                            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                            unaff_x23 = in_stack_00000148;
                          }
                          else {
                            iStack0000000000000108 = 3;
                            unaff_x23 = in_stack_00000148;
                          }
                          goto LAB_0316c620;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_03168190;
          }
          iStack0000000000000108 = 3;
          unaff_x23 = in_stack_00000148;
        }
        else {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
             puVar2 = PTR_DAT_069fd088, lVar9 == 0)) goto LAB_03168190;
          if (*(int *)(lVar9 + 0x6c) != 4) goto LAB_0316c620;
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
             lVar9 == 0)) goto LAB_03168190;
          fStack00000000000001d4 = 0.0;
          *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar9 + 0x1d8);
          lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
          FUN_040594d0(lVar9,*(undefined8 *)PTR_DAT_069ff180);
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar9 + 0x18);
          if (uVar38 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar38 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
            ;
          }
          lVar10 = *(long *)(unaff_x26 + 0x20);
          if (lVar10 == 0) goto LAB_03168190;
          iVar20 = 1;
          while( true ) {
            fVar45 = fStack00000000000001d4;
            fVar37 = (float)uVar33;
            fVar40 = (float)uVar15;
            if (*(int *)(lVar10 + 0x18) <= iVar20) break;
            fVar43 = (float)FUN_0409f2f4(lVar10,iVar20 + -1,*(undefined8 *)puVar2);
            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
            fVar30 = fVar40;
            fVar31 = fVar37;
            fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar20,*(undefined8 *)puVar2);
            if (DAT_06db4c77 == 0) {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = 1;
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar37 = fVar37 - fVar31;
            uVar33 = (ulong)(uint)fVar37;
            lVar10 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            uVar15 = (ulong)(uint)(fVar37 * fVar37);
            fStack00000000000001d4 =
                 fVar45 + SQRT(fVar37 * fVar37 +
                               (fVar43 - fVar32) * (fVar43 - fVar32) +
                               (fVar40 - fVar30) * (fVar40 - fVar30));
            if (lVar10 == 0) goto LAB_03168190;
            uVar38 = *(uint *)(lVar9 + 0x18);
            if (uVar38 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar38 + 1;
              *(float *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = fStack00000000000001d4;
            }
            else {
              FUN_04059d64(lVar9,*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 + 0x20) + 0xc0) +
                                  0x70));
            }
            lVar10 = *(long *)(unaff_x26 + 0x20);
            iVar20 = iVar20 + 1;
            if (lVar10 == 0) goto LAB_03168190;
          }
          lVar10 = *(long *)(unaff_x26 + 0x28);
          *in_stack_000000d8 = *in_stack_000000d8 + fStack00000000000001d4;
          if (lVar10 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar17 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar10 + 0x18);
          if (uVar38 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar38 + 1;
            *(undefined4 *)(lVar14 + (long)(int)uVar38 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                        );
          }
          lVar10 = *in_stack_000000e0;
          if (lVar10 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar17 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar10 + 0x18);
          if (uVar38 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar38 + 1;
            *(undefined4 *)(lVar14 + (long)(int)uVar38 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                        );
          }
          lVar10 = *(long *)(unaff_x26 + 0x20);
          if (lVar10 == 0) goto LAB_03168190;
          iVar20 = 0;
          while (iVar20 < *(int *)(lVar10 + 0x18)) {
            lVar10 = *(long *)(unaff_x26 + 0x28);
            fVar45 = (float)FUN_04059a68(lVar9,iVar20,*(undefined8 *)PTR_DAT_06a0a108);
            if (lVar10 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar17 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar38 = *(uint *)(lVar10 + 0x18);
            if (uVar38 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar38 + 1;
              *(float *)(lVar14 + (long)(int)uVar38 * 4 + 0x20) = fVar45 / fStack00000000000001d4;
            }
            else {
              FUN_04059d64(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                          );
            }
            lVar10 = *in_stack_000000e0;
            if (lVar10 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar17 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar38 = *(uint *)(lVar10 + 0x18);
            if (uVar38 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar38 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar38 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar10,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            lVar10 = *(long *)(unaff_x26 + 0x20);
            iVar20 = iVar20 + 1;
            if (lVar10 == 0) goto LAB_03168190;
          }
          iStack0000000000000108 = 4;
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          unaff_x23 = in_stack_00000148;
        }
        goto LAB_0316c620;
      }
    }
    uVar38 = *(uint *)(in_stack_00000170 + 0x18);
    in_stack_00000160._4_4_ = in_stack_00000280;
    if (unaff_x24 == 1) {
      if ((ulong)uVar38 < 2) goto LAB_0316f2c4;
      in_stack_00000160._4_4_ = unaff_x19[2];
      *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)unaff_x19;
    }
    if (uVar38 <= in_stack_00000168) goto LAB_0316f2c4;
    fVar40 = *(float *)(unaff_x27 + 0x28);
    uVar36 = *(undefined8 *)pfVar23;
    uVar39 = *(undefined8 *)unaff_x19;
    fVar37 = unaff_x19[2];
    if (DAT_06db4c75 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c75 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar43 = (float)uVar36 - (float)uVar39;
    fVar30 = (float)((ulong)uVar36 >> 0x20) - (float)((ulong)uVar39 >> 0x20);
    fVar40 = fVar40 - fVar37;
    fVar37 = SQRT(fVar40 * fVar40 + fVar43 * fVar43 + fVar30 * fVar30);
    uVar15 = (ulong)(uint)fVar37;
    if (fVar37 <= DAT_010fd13c) {
      if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
        FUN_02d965b8(unaff_x28);
        *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
      }
      uVar36 = **(undefined8 **)(*unaff_x28 + 0xb8);
      fVar40 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
    }
    else {
      fVar40 = fVar40 / fVar37;
      uVar36 = CONCAT44(fVar30 / fVar37,fVar43 / fVar37);
    }
    if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
    fVar37 = *(float *)(unaff_x27 + 0x28);
    uVar39 = *(undefined8 *)pfVar23;
    uVar42 = *(undefined8 *)unaff_x19;
    fVar43 = unaff_x19[2];
    if (DAT_06db4c77 == 0) {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = 1;
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar30 = (float)uVar39 - (float)uVar42;
    fVar31 = (float)((ulong)uVar39 >> 0x20) - (float)((ulong)uVar42 >> 0x20);
    fVar37 = fVar37 - fVar43;
    fStack00000000000001d4 = SQRT(fVar37 * fVar37 + fVar30 * fVar30 + fVar31 * fVar31);
    if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
    in_stack_00000110 = (ulong)(uint)in_stack_00000278;
    fVar43 = *pfVar23;
    fVar37 = *(float *)(unaff_x27 + 0x28);
    if (DAT_06db4c77 == 0) {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = 1;
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar37 = fVar37 - in_stack_00000160._4_4_;
    in_stack_00000230 =
         in_stack_00000230 +
         SQRT((fVar43 - in_stack_00000278) * (fVar43 - in_stack_00000278) + fVar37 * fVar37);
    fVar37 = 0.0;
    if (unaff_x24 != 1) {
      fVar37 = fStack000000000000010c;
    }
    uVar11 = (ulong)(uint)fVar37;
    uVar33 = uVar11;
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
    FUN_040594d0(lVar9,*(undefined8 *)PTR_DAT_069ff180);
    if (fVar37 < fStack00000000000001d4 - fStack000000000000010c) {
      fVar37 = *(float *)((ulong)&stack0x00000278 | 4);
      do {
        if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
        uVar39 = *(undefined8 *)pfVar23;
        fVar43 = *(float *)(unaff_x27 + 0x28);
        if (DAT_06db4c77 == 0) {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = 1;
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar24 = (float)uVar11;
        fVar30 = (float)uVar36 * fVar24 + in_stack_00000278;
        fVar31 = (float)((ulong)uVar36 >> 0x20) * fVar24 + fVar37;
        uVar42 = CONCAT44(fVar31,fVar30);
        fVar32 = fVar40 * fVar24 + in_stack_00000160._4_4_;
        fVar30 = fVar30 - (float)uVar39;
        fVar31 = fVar31 - (float)((ulong)uVar39 >> 0x20);
        fVar43 = fVar32 - fVar43;
        fVar43 = SQRT(fVar43 * fVar43 + fVar30 * fVar30 + fVar31 * fVar31);
        uVar15 = (ulong)(uint)fVar43;
        if (in_stack_000000b0 < fVar43) {
          _uStack00000000000001b0 = uVar42;
          in_stack_000001b8 = fVar32;
          if (*(char *)(unaff_x23 + 0x5d6) != '\0') {
            if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_03168190;
            FUN_03199614(*(long *)(unaff_x23 + 0x20),&stack0x000001b0,0);
          }
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
             lVar10 == 0)) goto LAB_03168190;
          if (*(float *)(lVar10 + 0x100) == 0.0) {
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21)
               , lVar10 == 0)) goto LAB_03168190;
            if (*(float *)(lVar10 + 0x104) != 0.0) goto LAB_0316a920;
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21)
               , lVar10 == 0)) goto LAB_03168190;
            if (*(float *)(lVar10 + 0x110) != 0.0) goto LAB_0316a920;
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21)
               , lVar10 == 0)) goto LAB_03168190;
            if (*(float *)(lVar10 + 0x114) != 0.0) goto LAB_0316a920;
            lVar10 = *in_stack_000000e0;
            if (lVar10 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar17 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar38 = *(uint *)(lVar10 + 0x18);
            if (uVar38 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar38 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar38 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar10,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
LAB_0316a920:
            if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
            fVar43 = *in_stack_000000d8;
            uVar39 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21);
            FUN_0316f6a0(fVar24 + fVar43,fVar45,uVar39,uVar39,&stack0x0000022c,&stack0x00000228,
                         &stack0x00000224,&stack0x00000218,&stack0x000001b0,&stack0x00000214);
          }
          puVar2 = PTR_DAT_069fbee0;
          lVar10 = *(long *)(unaff_x26 + 0x20);
          if (lVar10 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar10 + 0x10);
          uVar15 = (ulong)(uint)in_stack_000001b8;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar10 + 0x18);
          if (uVar38 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar38 * 0xc;
            *(uint *)(lVar10 + 0x18) = uVar38 + 1;
            *(undefined4 *)(lVar14 + 0x20) = uStack00000000000001b0;
            *(undefined4 *)(lVar14 + 0x24) = uStack00000000000001b4;
            *(float *)(lVar14 + 0x28) = in_stack_000001b8;
          }
          else {
            FUN_0409f624(lVar10,*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar9 + 0x18);
          if (uVar38 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar38 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = *in_stack_000000b8;
          if (lVar10 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar17 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar10 + 0x18);
          if (uVar38 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar38 + 1;
            *(undefined4 *)(lVar14 + (long)(int)uVar38 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                        );
          }
          lVar10 = *(long *)(unaff_x26 + 0x28);
          if (lVar10 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar17 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar10 + 0x18);
          if (uVar38 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar38 + 1;
            *(float *)(lVar14 + (long)(int)uVar38 * 4 + 0x20) = fVar24 / fStack00000000000001d4;
          }
          else {
            FUN_04059d64(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar33 = (ulong)(uint)fStack000000000000010c;
        uVar11 = (ulong)(uint)(fVar24 + fStack000000000000010c);
      } while (fVar24 + fStack000000000000010c < fStack00000000000001d4 - fStack000000000000010c);
    }
    fStack000000000000012c = (float)uVar15;
    fStack0000000000000128 = (float)uVar33;
    if (*(char *)(unaff_x23 + 0x5d6) == '\0') {
      if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
      lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                            *(undefined8 *)PTR_DAT_06a0b440);
      fStack000000000000012c = (float)uVar15;
      fStack0000000000000128 = (float)uVar33;
      if (lVar10 == 0) goto LAB_03168190;
      if (*(int *)(lVar10 + 0x6c) == 1) {
        if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
        iVar20 = 0;
        puVar22 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
        lVar10 = *(long *)(unaff_x26 + 0x28);
        while( true ) {
          fStack000000000000012c = (float)uVar15;
          fStack0000000000000128 = (float)uVar33;
          if (*(int *)(lVar10 + 0x18) <= iVar20) break;
          uVar15 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
          if ((((uVar15 <= unaff_x20) || (uVar15 <= unaff_x24)) || (uVar15 <= in_stack_00000168)) ||
             (uVar15 <= unaff_x24 + 2)) goto LAB_0316f2c4;
          uVar35 = *puVar22;
          fVar45 = (float)puVar22[1];
          uVar38 = puVar22[2];
          fVar40 = *unaff_x19;
          fVar37 = unaff_x19[1];
          fVar43 = unaff_x19[2];
          FUN_04059a68(lVar10,iVar20,*(undefined8 *)PTR_DAT_06a0a108);
          FUN_0316f340(uVar35,fVar45,uVar38,fVar40,fVar37,fVar43);
          unaff_x26 = &stack0x00000218;
          if (((in_stack_00000238 == 0) ||
              (uVar35 = FUN_0409f2f4(in_stack_00000238,iVar20,*(undefined8 *)PTR_DAT_069fd088),
              lVar9 == 0)) ||
             (fVar40 = (float)FUN_04059a68(lVar9,iVar20,*(undefined8 *)PTR_DAT_06a0a108),
             in_stack_00000238 == 0)) goto LAB_03168190;
          uVar33 = (ulong)(uint)(fVar45 + fVar40);
          uVar15 = (ulong)uVar38;
          FUN_0409f350(uVar35,in_stack_00000238,iVar20,*(undefined8 *)PTR_DAT_06a0b7d0);
          iVar20 = iVar20 + 1;
          lVar10 = in_stack_00000240;
          if (in_stack_00000240 == 0) goto LAB_03168190;
        }
      }
    }
    puVar2 = PTR_DAT_069fbee0;
    lVar9 = *(long *)(unaff_x26 + 0x20);
    if (lVar9 == 0) goto LAB_03168190;
    if (*(int *)(lVar9 + 0x18) == 0) {
      if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar10 = *(long *)(lVar9 + 0x10);
      fVar45 = *pfVar23;
      uVar35 = *(undefined4 *)(unaff_x27 + 0x24);
      uVar34 = *(undefined4 *)(unaff_x27 + 0x28);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_03168190;
      if (*(int *)(lVar10 + 0x18) == 0) {
        FUN_0409f624(lVar9,*(undefined8 *)
                            (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
      }
      else {
        *(undefined4 *)(lVar9 + 0x18) = 1;
        *(float *)(lVar10 + 0x20) = fVar45;
        *(undefined4 *)(lVar10 + 0x24) = uVar35;
        *(undefined4 *)(lVar10 + 0x28) = uVar34;
      }
      if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
      fVar40 = *pfVar23;
      fVar45 = *(float *)(unaff_x27 + 0x24);
      fStack000000000000012c = *(float *)(unaff_x27 + 0x28);
      if (DAT_06db4c77 == 0) {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = 1;
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar45 = in_stack_0000027c - fVar45;
      lVar9 = *(long *)(unaff_x26 + 0x28);
      fStack000000000000012c = in_stack_00000160._4_4_ - fStack000000000000012c;
      fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
      fStack00000000000001d4 =
           SQRT(fStack0000000000000128 +
                (in_stack_00000278 - fVar40) * (in_stack_00000278 - fVar40) + fVar45 * fVar45);
      if (lVar9 == 0) goto LAB_03168190;
      lVar10 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)PTR_DAT_069ff178;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_03168190;
      uVar38 = *(uint *)(lVar9 + 0x18);
      if (uVar38 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar38 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = 0x3f800000;
      }
      else {
        FUN_04059d64(0x3f800000,lVar9,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *in_stack_000000e0;
      if (lVar9 == 0) goto LAB_03168190;
      lVar10 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)PTR_DAT_069ff178;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_03168190;
      uVar38 = *(uint *)(lVar9 + 0x18);
      if (uVar38 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar38 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = 0;
      }
      else {
        FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *in_stack_000000b8;
      if (lVar9 == 0) goto LAB_03168190;
      lVar10 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)PTR_DAT_069ff178;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_03168190;
      uVar38 = *(uint *)(lVar9 + 0x18);
      if (uVar38 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar38 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = 0;
      }
      else {
        FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
    unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
    puVar2 = PTR_DAT_069fd088;
    unaff_x28 = (long *)PTR_DAT_069fb978;
    lVar9 = *(long *)(unaff_x26 + 0x20);
    if (lVar9 == 0) goto LAB_03168190;
    unaff_x29 = &PTR_FUN_06db4000;
    if (0 < *(int *)(lVar9 + 0x18)) {
      fVar45 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088
                                  );
      if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
      fVar40 = fStack0000000000000128 - *(float *)(unaff_x27 + 0x24);
      fStack000000000000012c = fStack000000000000012c - *(float *)(unaff_x27 + 0x28);
      fStack0000000000000128 = fStack00000000000000a4;
      if (fStack00000000000000a4 <=
          fStack000000000000012c * fStack000000000000012c +
          (fVar45 - *pfVar23) * (fVar45 - *pfVar23) + fVar40 * fVar40) {
        lVar9 = *(long *)(unaff_x26 + 0x20);
        if (lVar9 == 0) goto LAB_03168190;
        fVar45 = fStack00000000000000a4;
        fVar40 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
        if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
        fVar37 = *pfVar23;
        fVar30 = *(float *)(unaff_x27 + 0x24);
        fVar43 = *(float *)(unaff_x27 + 0x28);
        if (DAT_06db4c77 == 0) {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = 1;
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        puVar3 = PTR_DAT_069fbee0;
        fVar45 = fVar45 - fVar30;
        lVar9 = *(long *)(unaff_x26 + 0x20);
        fStack000000000000012c = fStack000000000000012c - fVar43;
        if (in_stack_000000b0 <=
            SQRT(fStack000000000000012c * fStack000000000000012c +
                 (fVar40 - fVar37) * (fVar40 - fVar37) + fVar45 * fVar45)) {
          if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          fVar45 = *pfVar23;
          fVar40 = *(float *)(unaff_x27 + 0x24);
          fStack000000000000012c = *(float *)(unaff_x27 + 0x28);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar9 + 0x18);
          if (uVar38 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar38 * 0xc;
            *(uint *)(lVar9 + 0x18) = uVar38 + 1;
            *(float *)(lVar10 + 0x20) = fVar45;
            *(float *)(lVar10 + 0x24) = fVar40;
            *(float *)(lVar10 + 0x28) = fStack000000000000012c;
          }
          else {
            FUN_0409f624(lVar9,*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
          }
          fVar45 = fStack00000000000001d4;
          lVar9 = *(long *)(unaff_x26 + 0x20);
          if (lVar9 == 0) goto LAB_03168190;
          fVar37 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
          if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
          fVar43 = *pfVar23;
          fVar31 = *(float *)(unaff_x27 + 0x24);
          fVar30 = *(float *)(unaff_x27 + 0x28);
          if (DAT_06db4c77 == 0) {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = 1;
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar40 = fVar40 - fVar31;
          lVar9 = *(long *)(unaff_x26 + 0x28);
          fStack000000000000012c = fStack000000000000012c - fVar30;
          fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
          fStack00000000000001d4 =
               fVar45 + SQRT(fStack0000000000000128 +
                             (fVar37 - fVar43) * (fVar37 - fVar43) + fVar40 * fVar40);
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar9 + 0x18);
          if (uVar38 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar38 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = 0x3f800000;
          }
          else {
            FUN_04059d64(0x3f800000,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = *in_stack_000000e0;
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar38 = *(uint *)(lVar9 + 0x18);
          if (uVar38 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar38 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
            ;
          }
        }
        else {
          if (lVar9 == 0) goto LAB_03168190;
          if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
          fStack000000000000012c = *(float *)(unaff_x27 + 0x28);
          fStack0000000000000128 = *(float *)(unaff_x27 + 0x24);
          FUN_0409f350(*pfVar23,lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_06a0b7d0);
          lVar9 = *(long *)(unaff_x26 + 0x28);
          if (lVar9 == 0) goto LAB_03168190;
          FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_06a0b5c0)
          ;
        }
      }
    }
    lVar9 = *(long *)(unaff_x26 + 0x20);
    if (lVar9 == 0) goto LAB_03168190;
    iVar20 = *(int *)(lVar9 + 0x18);
    in_stack_00000278 = (float)FUN_0409f2f4(lVar9,iVar20 + -1,*(undefined8 *)PTR_DAT_069fd088);
    lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
    *(float *)(in_stack_00000148 + 0x2c0) =
         *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
    if (lVar9 == 0) goto LAB_03168190;
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar14 = *(long *)PTR_DAT_069fc3e0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_03168190;
    uVar38 = *(uint *)(lVar9 + 0x18);
    in_stack_000000d0._4_4_ = iVar20 + in_stack_000000d0._4_4_;
    if (uVar38 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar38 + 1;
      *(int *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = in_stack_000000d0._4_4_;
    }
    else {
      FUN_03fb3e1c(lVar9,in_stack_000000d0._4_4_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
       (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
       lVar9 == 0)) goto LAB_03168190;
    iStack0000000000000108 = *(int *)(lVar9 + 0x6c);
    unaff_x23 = in_stack_00000148;
    in_stack_0000027c = fStack0000000000000128;
    in_stack_00000280 = fStack000000000000012c;
    in_stack_00000130 = in_stack_00000278;
  }
LAB_0316c620:
  if ((*(long *)(unaff_x23 + 0x68) == 0) ||
     (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
     fVar45 = fStack00000000000001d4, lVar9 == 0)) goto LAB_03168190;
  if (*(char *)(lVar9 + 0xb8) != '\0') {
    if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
    uVar36 = *(undefined8 *)(unaff_x23 + 0x20);
    uVar39 = *(undefined8 *)(unaff_x26 + 0x28);
    uVar35 = *(undefined4 *)(unaff_x23 + 0x128);
    lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x24 & 0xffffffff,
                         *(undefined8 *)PTR_DAT_06a0b440);
    if (lVar9 == 0) goto LAB_03168190;
    FUN_031098f4(uVar35,uStack000000000000006c,fVar45,uVar36,&stack0x00000238,uVar39,
                 &stack0x00000248,*(undefined1 *)(lVar9 + 0xb8),*(undefined8 *)(unaff_x26 + 0x78),
                 in_stack_00000070,in_stack_000000e0);
    unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
    unaff_x23 = in_stack_00000148;
  }
  if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
  FUN_0409f858(*(long *)(unaff_x26 + 0x78),*(undefined8 *)(unaff_x26 + 0x20),
               *(undefined8 *)PTR_DAT_06a0b3a0);
  if (*in_stack_00000078 == 0) goto LAB_03168190;
  FUN_04059f70(*in_stack_00000078,*(undefined8 *)(unaff_x26 + 0x28),*(undefined8 *)PTR_DAT_06a0b3d8)
  ;
  fVar40 = fStack0000000000000088;
  fVar45 = in_stack_00000080._4_4_;
  FUN_0316fb80(fStack000000000000008c,unaff_x23,extraout_x1,unaff_x24 & 0xffffffff,in_stack_00000170
               ,&stack0x00000268,0,*(undefined8 *)(unaff_x26 + 0x78));
  if (iVar19 + 3 < *(int *)(in_stack_00000170 + 0x18)) {
    FUN_0317018c(unaff_x23,*(undefined8 *)(unaff_x23 + 0x68),unaff_x24 & 0xffffffff,
                 in_stack_00000170,&stack0x00000258,0);
  }
  puVar3 = PTR_DAT_069ff178;
  puVar2 = PTR_DAT_069fd088;
  lVar9 = *in_stack_00000090;
  if (lVar9 == 0) goto LAB_03168190;
  lVar10 = *(long *)(lVar9 + 0x10);
  fVar37 = *in_stack_000000d8;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_03168190;
  uVar38 = *(uint *)(lVar9 + 0x18);
  if (uVar38 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(lVar9 + 0x18) = uVar38 + 1;
    *(float *)(lVar10 + (long)(int)uVar38 * 4 + 0x20) = fVar37;
  }
  else {
    FUN_04059d64(lVar9,*(undefined8 *)(*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
  }
  if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
    lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
    lVar14 = *(long *)(unaff_x26 + 0x78);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    fVar37 = (float)FUN_0409f2f4(lVar14,*(int *)(lVar14 + 0x18) + -1,*(undefined8 *)puVar2);
    lVar14 = *(long *)(unaff_x26 + 0x78);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    fVar43 = fVar40;
    fVar30 = fVar45;
    fVar31 = (float)FUN_0409f2f4(lVar14,*(int *)(lVar14 + 0x18) + -2,*(undefined8 *)puVar2);
    if (DAT_06db4c75 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c75 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar37 = fVar37 - fVar31;
    fVar40 = fVar40 - fVar43;
    fVar45 = fVar45 - fVar30;
    fVar43 = SQRT(fVar45 * fVar45 + fVar37 * fVar37 + fVar40 * fVar40);
    if (fVar43 <= DAT_010fd13c) {
      if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
        FUN_02d965b8(unaff_x28);
        *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
      }
      pfVar23 = *(float **)(*unaff_x28 + 0xb8);
      fVar37 = *pfVar23;
      fVar40 = pfVar23[1];
      fVar45 = pfVar23[2];
    }
    else {
      fVar37 = fVar37 / fVar43;
      fVar40 = fVar40 / fVar43;
      fVar45 = fVar45 / fVar43;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(float *)(lVar10 + 0x94) = fVar37;
    *(float *)(lVar10 + 0x98) = fVar40;
    *(float *)(lVar10 + 0x9c) = fVar45;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(float *)(lVar9 + 0x88) = fVar37;
    *(float *)(lVar9 + 0x8c) = fVar40;
    *(float *)(lVar9 + 0x90) = fVar45;
    unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
    unaff_x23 = in_stack_00000148;
  }
  if (unaff_x24 < 2) {
    if (unaff_x24 == 1) {
      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
      lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
      if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar37 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar2);
      if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar43 = fVar40;
      fVar30 = fVar45;
      fVar31 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar37 = fVar37 - fVar31;
      fVar40 = fVar40 - fVar43;
      fVar45 = fVar45 - fVar30;
      fVar43 = SQRT(fVar45 * fVar45 + fVar37 * fVar37 + fVar40 * fVar40);
      if (fVar43 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(unaff_x28);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        pfVar23 = *(float **)(*unaff_x28 + 0xb8);
        fVar37 = *pfVar23;
        fVar40 = pfVar23[1];
        fVar45 = pfVar23[2];
      }
      else {
        fVar37 = fVar37 / fVar43;
        fVar40 = fVar40 / fVar43;
        fVar45 = fVar45 / fVar43;
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar10 + 0x94) = fVar37;
      *(float *)(lVar10 + 0x98) = fVar40;
      *(float *)(lVar10 + 0x9c) = fVar45;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar9 + 0x88) = fVar37;
      *(float *)(lVar9 + 0x8c) = fVar40;
      *(float *)(lVar9 + 0x90) = fVar45;
    }
  }
  else if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
    if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar19 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
    puVar2 = PTR_DAT_069fd088;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(lVar9 + 0xbc) + 1 < iVar19) {
      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar9 + 0x6c) != 3) {
        lVar10 = *(long *)(unaff_x26 + 0x78);
        lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar30 = (float)FUN_0409f2f4(lVar10,*(int *)(lVar9 + 0xbc) + 1,*(undefined8 *)puVar2);
        lVar10 = *(long *)(unaff_x26 + 0x78);
        fVar37 = fVar40;
        fVar43 = fVar45;
        lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar31 = (float)FUN_0409f2f4(lVar10,*(undefined4 *)(lVar9 + 0xbc),*(undefined8 *)puVar2);
        lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar32 = DAT_010fd13c;
        fVar30 = fVar30 - fVar31;
        fVar31 = fVar40 - fVar37;
        fVar43 = fVar45 - fVar43;
        fVar45 = SQRT(fVar43 * fVar43 + fVar30 * fVar30 + fVar31 * fVar31);
        if (fVar45 <= DAT_010fd13c) {
          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
            FUN_02d965b8(unaff_x28);
            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
          }
          pfVar23 = *(float **)(*unaff_x28 + 0xb8);
          fVar24 = *pfVar23;
          fVar31 = pfVar23[1];
          fVar45 = pfVar23[2];
        }
        else {
          fVar24 = fVar30 / fVar45;
          fVar31 = fVar31 / fVar45;
          fVar45 = fVar43 / fVar45;
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar9 + 0x88) = fVar24;
        *(float *)(lVar9 + 0x8c) = fVar31;
        uVar36 = *unaff_x21;
        *(float *)(lVar9 + 0x90) = fVar45;
        uVar38 = *(uint *)(in_stack_00000098 + 0x18);
        lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar36);
        if (unaff_x24 != uVar38) {
          fVar40 = fVar37;
        }
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar40 = fVar40 - fVar37;
        fVar37 = SQRT(fVar43 * fVar43 + fVar30 * fVar30 + fVar40 * fVar40);
        if (fVar37 <= fVar32) {
          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
            FUN_02d965b8(unaff_x28);
            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
          }
          uVar36 = **(undefined8 **)(*unaff_x28 + 0xb8);
          fVar43 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
        }
        else {
          fVar43 = fVar43 / fVar37;
          uVar36 = CONCAT44(fVar40 / fVar37,fVar30 / fVar37);
          fVar45 = fVar30;
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar9 + 0x94) = uVar36;
        *(float *)(lVar9 + 0x9c) = fVar43;
      }
    }
  }
  if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
    lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
    if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_03168190;
    uVar36 = *(undefined8 *)(lVar10 + 0x48);
    *(undefined4 *)(lVar9 + 0x5c) = *(undefined4 *)(lVar10 + 0x50);
    *(undefined8 *)(lVar9 + 0x54) = uVar36;
  }
  if ((long)(*(int *)(in_stack_00000170 + 0x18) + -2) <= (long)in_stack_00000168) {
    if (*(char *)(unaff_x23 + 0x84) == '\0') {
      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
      if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
      uVar36 = *unaff_x21;
      *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar36);
      if (lVar9 == 0) goto LAB_03168190;
      uVar36 = *unaff_x21;
      *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
      lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar36);
      if (lVar9 == 0) goto LAB_03168190;
      uVar36 = *unaff_x21;
      *(undefined4 *)(lVar9 + 0xbc) = 0;
      lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar36);
      if (lVar9 == 0) goto LAB_03168190;
      *(undefined4 *)(lVar9 + 0xc0) = 0;
      if (2 < *(int *)(in_stack_00000098 + 0x18)) {
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21);
        fVar45 = *in_stack_000000d8;
        lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21);
        if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_03168190;
        uVar36 = *unaff_x21;
        *(float *)(lVar9 + 200) = fVar45 - *(float *)(lVar10 + 0xc0);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,uVar36);
        if (lVar9 == 0) goto LAB_03168190;
        fVar45 = *(float *)(lVar9 + 200);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21);
        lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21);
        if (1000.0 <= fVar45) {
          if (lVar10 == 0) goto LAB_03168190;
          fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
          uVar36 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
          uVar36 = FUN_05362cb4(uVar36,*(undefined8 *)PTR_DAT_06a0c488,0);
        }
        else {
          if (lVar10 == 0) goto LAB_03168190;
          uVar36 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
          uVar36 = FUN_05362cb4(uVar36,*(undefined8 *)PTR_DAT_06a0c4f0,0);
        }
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0xd0) = uVar36;
          LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar36);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
          ;
          if (lVar9 != 0) {
            fVar40 = *(float *)(lVar9 + 0x4c);
            lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                 *unaff_x21);
            if (lVar9 != 0) {
              fVar37 = *(float *)(lVar9 + 0x4c);
              fVar45 = fVar40 - fVar37;
              if (DAT_06db4ece == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4ece = '\x01';
              }
              puVar2 = PTR_DAT_069fbb48;
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar30 = 0.0;
              fVar43 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar45 * fVar45) * DAT_010fd194
                           );
              fVar45 = DAT_010fcd14;
              if (DAT_010fcd14 <= fVar43) {
                fVar45 = -1.0;
                fVar43 = (in_stack_00000230 * 0.0 + ABS(fVar40 - fVar37) * 50.0 + 0.0) / fVar43;
                fVar40 = 1.0;
                if (fVar43 <= 1.0) {
                  fVar40 = fVar43;
                }
                fVar37 = -1.0;
                if (-1.0 <= fVar43) {
                  fVar37 = fVar40;
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  fVar45 = -1.0;
                  thunk_FUN_02df485c();
                }
                dVar29 = acos((double)fVar37);
                fVar30 = (float)dVar29 * DAT_010fcf40;
              }
              fVar30 = 90.0 - fVar30;
              lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                   *unaff_x21);
              if (fVar30 <= 10.0) {
                uVar36 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
              }
              else {
                dVar29 = modf((double)fVar30,(double *)&stack0x00000298);
                if (0.0 <= fVar30) {
                  if (dVar29 == 0.5) {
                    dVar29 = *(double *)(unaff_x26 + 0x80);
                    fVar45 = 1.0;
                    goto LAB_0316e5fc;
                  }
                  fStack00000000000001d0 = (float)(int)(fVar30 + 0.5);
                }
                else if (dVar29 == -0.5) {
                  dVar29 = *(double *)(unaff_x26 + 0x80);
                  fVar45 = -1.0;
LAB_0316e5fc:
                  fStack00000000000001d0 = (float)dVar29;
                  if (((long)dVar29 & 1U) != 0) {
                    fStack00000000000001d0 = (float)dVar29 + fVar45;
                  }
                }
                else {
                  fStack00000000000001d0 = (float)(int)(fVar30 + -0.5);
                }
                uVar36 = FUN_054fabf8(&stack0x000001d0,0);
              }
              if (lVar9 != 0) {
                *(undefined8 *)(lVar9 + 0xd8) = uVar36;
                LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar36);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                if (lVar9 != 0) {
                  fVar40 = *(float *)(lVar9 + 0x4c);
                  lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                       *unaff_x21);
                  if (lVar9 != 0) {
                    fVar37 = *(float *)(lVar9 + 0x4c);
                    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                         *unaff_x21);
                    if (lVar9 != 0) {
                      fVar43 = *(float *)(lVar9 + 0x48);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2
                                           ,*unaff_x21);
                      if (lVar9 != 0) {
                        fVar30 = *(float *)(lVar9 + 0x50);
                        lVar9 = FUN_0400ff1c(in_stack_00000098,
                                             *(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
                        if (lVar9 != 0) {
                          fVar31 = *(float *)(lVar9 + 0x48);
                          lVar9 = FUN_0400ff1c(in_stack_00000098,
                                               *(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
                          if (lVar9 != 0) {
                            fVar32 = *(float *)(lVar9 + 0x50);
                            if (DAT_06db4c77 == 0) {
                              FUN_02d965b8(PTR_DAT_069fbb48);
                              DAT_06db4c77 = 1;
                            }
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            fVar30 = fVar30 - fVar32;
                            fVar43 = fVar43 - fVar31;
                            lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                 *(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
                            ;
                            fStack00000000000001d0 =
                                 (ABS(fVar40 - fVar37) / SQRT(fVar43 * fVar43 + fVar30 * fVar30)) *
                                 100.0;
                            uVar36 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0
                                                 );
                            if (lVar9 != 0) goto LAB_0316ea58;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_03168190;
      }
    }
    else {
      lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
      if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
      uVar36 = *unaff_x21;
      *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
      lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar36);
      if (lVar9 == 0) goto LAB_03168190;
      *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
      if (2 < *(int *)(in_stack_00000098 + 0x18)) {
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        fVar45 = *in_stack_000000d8;
        lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_03168190;
        uVar36 = *unaff_x21;
        *(float *)(lVar9 + 200) = fVar45 - *(float *)(lVar10 + 0xc0);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar36);
        if (lVar9 == 0) goto LAB_03168190;
        fVar45 = *(float *)(lVar9 + 200);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        if (1000.0 <= fVar45) {
          if (lVar10 == 0) goto LAB_03168190;
          fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
          uVar36 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
          uVar36 = FUN_05362cb4(uVar36,*(undefined8 *)PTR_DAT_06a0c488,0);
        }
        else {
          if (lVar10 == 0) goto LAB_03168190;
          uVar36 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
          uVar36 = FUN_05362cb4(uVar36,*(undefined8 *)PTR_DAT_06a0c4f0,0);
        }
        if (lVar9 == 0) goto LAB_03168190;
        *(undefined8 *)(lVar9 + 0xd0) = uVar36;
        LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar36);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        fVar40 = *(float *)(lVar9 + 0x4c);
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        fVar37 = *(float *)(lVar9 + 0x4c);
        fVar45 = fVar40 - fVar37;
        if (DAT_06db4ece == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4ece = '\x01';
        }
        puVar2 = PTR_DAT_069fbb48;
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar30 = 0.0;
        fVar43 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar45 * fVar45) * DAT_010fd194);
        fVar45 = DAT_010fcd14;
        if (DAT_010fcd14 <= fVar43) {
          fVar45 = -1.0;
          fVar43 = (in_stack_00000230 * 0.0 + ABS(fVar40 - fVar37) * 50.0 + 0.0) / fVar43;
          fVar40 = 1.0;
          if (fVar43 <= 1.0) {
            fVar40 = fVar43;
          }
          fVar37 = -1.0;
          if (-1.0 <= fVar43) {
            fVar37 = fVar40;
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            fVar45 = -1.0;
            thunk_FUN_02df485c();
          }
          dVar29 = acos((double)fVar37);
          fVar30 = (float)dVar29 * DAT_010fcf40;
        }
        fVar30 = 90.0 - fVar30;
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        if (fVar30 <= 10.0) {
          uVar36 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
        }
        else {
          dVar29 = modf((double)fVar30,(double *)&stack0x00000298);
          if (0.0 <= fVar30) {
            if (dVar29 == 0.5) {
              dVar29 = *(double *)(unaff_x26 + 0x80);
              fVar45 = 1.0;
              goto LAB_0316e5d0;
            }
            fStack00000000000001d0 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar29 == -0.5) {
            dVar29 = *(double *)(unaff_x26 + 0x80);
            fVar45 = -1.0;
LAB_0316e5d0:
            fStack00000000000001d0 = (float)dVar29;
            if (((long)dVar29 & 1U) != 0) {
              fStack00000000000001d0 = (float)dVar29 + fVar45;
            }
          }
          else {
            fStack00000000000001d0 = (float)(int)(fVar30 + -0.5);
          }
          uVar36 = FUN_054fabf8(&stack0x000001d0,0);
        }
        if (lVar9 == 0) goto LAB_03168190;
        *(undefined8 *)(lVar9 + 0xd8) = uVar36;
        LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar36);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        fVar40 = *(float *)(lVar9 + 0x4c);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        fVar37 = *(float *)(lVar9 + 0x4c);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        fVar43 = *(float *)(lVar9 + 0x48);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        fVar30 = *(float *)(lVar9 + 0x50);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        fVar31 = *(float *)(lVar9 + 0x48);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        fVar32 = *(float *)(lVar9 + 0x50);
        if (DAT_06db4c77 == 0) {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = 1;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar30 = fVar30 - fVar32;
        fVar43 = fVar43 - fVar31;
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        fStack00000000000001d0 =
             (ABS(fVar40 - fVar37) / SQRT(fVar43 * fVar43 + fVar30 * fVar30)) * 100.0;
        uVar36 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
        if (lVar9 == 0) goto LAB_03168190;
LAB_0316ea58:
        *(undefined8 *)(lVar9 + 0xe0) = uVar36;
        LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar36);
      }
    }
    fVar40 = 1000.0;
    if (1000.0 <= *in_stack_000000d8) {
      fVar40 = 1000.0;
      fStack00000000000001d0 = *in_stack_000000d8 / 1000.0;
      uVar36 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      puVar13 = (undefined8 *)PTR_DAT_06a0c488;
    }
    else {
      uVar36 = FUN_054fad00(in_stack_000000d8,*(undefined8 *)PTR_DAT_06a0c498,0);
      puVar13 = (undefined8 *)PTR_DAT_06a0c4f0;
    }
    uVar36 = FUN_05362cb4(uVar36,*puVar13,0);
    *(undefined8 *)(unaff_x23 + 0x2d0) = uVar36;
    LeanTween__value(unaff_x23 + 0x2d0,uVar36);
    if (*(int *)(in_stack_00000098 + 0x18) == 2) {
      lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
      if (lVar9 == 0) goto LAB_03168190;
      fVar37 = *(float *)(lVar9 + 200);
      lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
      lVar10 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
      if (1000.0 <= fVar37) {
        if (lVar10 == 0) goto LAB_03168190;
        fVar40 = 1000.0;
        fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
        uVar36 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        uVar36 = FUN_05362cb4(uVar36,*(undefined8 *)PTR_DAT_06a0c488,0);
      }
      else {
        if (lVar10 == 0) goto LAB_03168190;
        uVar36 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        uVar36 = FUN_05362cb4(uVar36,*(undefined8 *)PTR_DAT_06a0c4f0,0);
      }
      if (lVar9 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar9 + 0xd0) = uVar36;
      LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar36);
    }
    if (*(char *)(unaff_x23 + 0x84) == '\0') {
      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
      if (lVar9 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
      LeanTween__value();
    }
    puVar3 = PTR_DAT_06a0b440;
    puVar2 = PTR_DAT_069fd088;
    fVar37 = fVar40;
    if (iStack0000000000000058 == 0) goto LAB_0316ee54;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar43 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)PTR_DAT_069fd088);
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_06a0b7d0;
    puVar3 = PTR_DAT_069fbb48;
    if (lVar9 == 0) goto LAB_03168190;
    lVar10 = *(long *)(unaff_x26 + 0x78);
    fVar37 = *(float *)(lVar9 + 200) * 0.5;
    fVar30 = 5.0;
    if (fVar37 <= 5.0) {
      fVar30 = fVar37;
    }
    if (lVar10 == 0) goto LAB_03168190;
    uVar33 = (ulong)(uint)fStack0000000000000054;
    iVar19 = 1;
    fVar43 = fStack0000000000000050 * 10.0 + fVar43;
    uVar15 = (ulong)(uint)fVar43;
    fVar31 = fStack0000000000000054 * 10.0 + fVar45;
    fVar32 = 0.0;
    goto LAB_0316ecc4;
  }
  unaff_x20 = in_stack_00000168 - 1;
  fStack00000000000001d4 = 0.0;
  lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
  if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
  uVar36 = *unaff_x21;
  *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
  lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar36);
  if (lVar9 == 0) goto LAB_03168190;
  *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
  if (1 < in_stack_00000168) {
    if (in_stack_00000168 == 2) {
      lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
      if (lVar9 == 0) goto LAB_03168190;
      iVar19 = 0;
      fVar45 = *in_stack_000000d8;
    }
    else {
      iVar19 = (int)in_stack_00000168 + -2;
      lVar9 = FUN_0400ff1c(in_stack_00000098,iVar19,*unaff_x21);
      fVar45 = *in_stack_000000d8;
      lVar10 = FUN_0400ff1c(in_stack_00000098,iVar19,*unaff_x21);
      if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_03168190;
      fVar45 = fVar45 - *(float *)(lVar10 + 0xc0);
    }
    puVar2 = PTR_DAT_06a0b440;
    *(float *)(lVar9 + 200) = fVar45;
    lVar9 = FUN_0400ff1c(in_stack_00000098,iVar19,*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_03168190;
    fVar45 = *(float *)(lVar9 + 200);
    lVar9 = FUN_0400ff1c(in_stack_00000098,iVar19,*(undefined8 *)puVar2);
    lVar10 = FUN_0400ff1c(in_stack_00000098,iVar19,*(undefined8 *)puVar2);
    if (1000.0 <= fVar45) {
      if (lVar10 == 0) goto LAB_03168190;
      fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
      uVar36 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      puVar13 = (undefined8 *)PTR_DAT_06a0c488;
    }
    else {
      if (lVar10 == 0) goto LAB_03168190;
      uVar36 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      puVar13 = (undefined8 *)PTR_DAT_06a0c4f0;
    }
    uVar36 = FUN_05362cb4(uVar36,*puVar13,0);
    if (lVar9 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar9 + 0xd0) = uVar36;
    LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar36);
    puVar2 = PTR_DAT_06a0b440;
    lVar9 = FUN_0400ff1c(in_stack_00000098,iVar19,*(undefined8 *)PTR_DAT_06a0b440);
    if (lVar9 == 0) goto LAB_03168190;
    fVar45 = *(float *)(lVar9 + 0x4c);
    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_03168190;
    fVar40 = *(float *)(lVar9 + 0x4c);
    if (DAT_06db4ece == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4ece = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar37 = fVar45 - fVar40;
    fVar30 = 0.0;
    fVar43 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar37 * fVar37) * DAT_010fd194);
    fVar37 = DAT_010fcd14;
    if (DAT_010fcd14 <= fVar43) {
      fVar37 = -1.0;
      fVar43 = (in_stack_00000230 * 0.0 + ABS(fVar45 - fVar40) * 50.0 + 0.0) / fVar43;
      fVar45 = 1.0;
      if (fVar43 <= 1.0) {
        fVar45 = fVar43;
      }
      fVar40 = -1.0;
      if (-1.0 <= fVar43) {
        fVar40 = fVar45;
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        fVar37 = -1.0;
        thunk_FUN_02df485c();
      }
      dVar29 = acos((double)fVar40);
      fVar30 = (float)dVar29 * DAT_010fcf40;
    }
    fVar30 = 90.0 - fVar30;
    lVar9 = FUN_0400ff1c(in_stack_00000098,iVar19,*(undefined8 *)puVar2);
    if (fVar30 <= 10.0) {
      uVar36 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
      puVar13 = (undefined8 *)PTR_DAT_069fd088;
    }
    else {
      dVar29 = modf((double)fVar30,(double *)&stack0x00000298);
      puVar13 = (undefined8 *)PTR_DAT_069fd088;
      if (0.0 <= fVar30) {
        if (dVar29 == 0.5) {
          dVar29 = *(double *)(unaff_x26 + 0x80);
          fVar45 = 1.0;
          goto LAB_0316a098;
        }
        fStack00000000000001d0 = (float)(int)(fVar30 + 0.5);
      }
      else if (dVar29 == -0.5) {
        dVar29 = *(double *)(unaff_x26 + 0x80);
        fVar45 = -1.0;
LAB_0316a098:
        fStack00000000000001d0 = (float)dVar29;
        if (((long)dVar29 & 1U) != 0) {
          fStack00000000000001d0 = (float)dVar29 + fVar45;
        }
      }
      else {
        fStack00000000000001d0 = (float)(int)(fVar30 + -0.5);
      }
      uVar36 = FUN_054fabf8(&stack0x000001d0,0);
    }
    if (lVar9 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar9 + 0xd8) = uVar36;
    LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar36);
    unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
    lVar9 = FUN_0400ff1c(in_stack_00000098,iVar19,*(undefined8 *)PTR_DAT_06a0b440);
    if (lVar9 == 0) goto LAB_03168190;
    fVar45 = *(float *)(lVar9 + 0x4c);
    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
    if (lVar9 == 0) goto LAB_03168190;
    fVar40 = *(float *)(lVar9 + 0x4c);
    lVar9 = FUN_0400ff1c(in_stack_00000098,iVar19,*unaff_x21);
    if (lVar9 == 0) goto LAB_03168190;
    fVar43 = *(float *)(lVar9 + 0x48);
    lVar9 = FUN_0400ff1c(in_stack_00000098,iVar19,*unaff_x21);
    if (lVar9 == 0) goto LAB_03168190;
    fVar30 = *(float *)(lVar9 + 0x50);
    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
    if (lVar9 == 0) goto LAB_03168190;
    fVar31 = *(float *)(lVar9 + 0x48);
    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
    if (lVar9 == 0) goto LAB_03168190;
    fVar32 = *(float *)(lVar9 + 0x50);
    if (DAT_06db4c77 == 0) {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = 1;
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar30 = fVar30 - fVar32;
    fVar43 = fVar43 - fVar31;
    lVar9 = FUN_0400ff1c(in_stack_00000098,iVar19,*unaff_x21);
    fVar31 = 100.0;
    fStack00000000000001d0 =
         (ABS(fVar45 - fVar40) / SQRT(fVar43 * fVar43 + fVar30 * fVar30)) * 100.0;
    uVar36 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
    if (lVar9 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar9 + 0xe0) = uVar36;
    LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar36);
    lVar9 = *(long *)(unaff_x26 + 0x78);
    if (lVar9 == 0) goto LAB_03168190;
    unaff_x23 = in_stack_00000148;
    if (2 < *(int *)(lVar9 + 0x18)) {
      fStack0000000000000104 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*puVar13);
      lVar9 = *(long *)(unaff_x26 + 0x78);
      if (lVar9 == 0) goto LAB_03168190;
      fVar45 = fVar31;
      fVar40 = fVar37;
      fVar43 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,*puVar13);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fStack0000000000000104 = fStack0000000000000104 - fVar43;
      fVar31 = fVar31 - fVar45;
      fVar37 = fVar37 - fVar40;
      fStack00000000000000fc =
           SQRT(fVar37 * fVar37 + fStack0000000000000104 * fStack0000000000000104 + fVar31 * fVar31)
      ;
      if (fStack00000000000000fc <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(unaff_x28);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        pfVar23 = *(float **)(*unaff_x28 + 0xb8);
        fStack0000000000000104 = *pfVar23;
        fStack0000000000000100 = pfVar23[1];
        fStack00000000000000fc = pfVar23[2];
      }
      else {
        fStack0000000000000104 = fStack0000000000000104 / fStack00000000000000fc;
        fStack0000000000000100 = fVar31 / fStack00000000000000fc;
        fStack00000000000000fc = fVar37 / fStack00000000000000fc;
      }
    }
  }
  lVar9 = *(long *)(unaff_x26 + 0x28);
  if (lVar9 == 0) goto LAB_03168190;
  lVar10 = *(long *)(unaff_x26 + 0x20);
  *(undefined4 *)(lVar9 + 0x18) = 0;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_03168190;
  in_stack_00000230 = 0.0;
  *(undefined4 *)(lVar10 + 0x18) = 0;
  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
  if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
     (uVar15 = in_stack_00000168 + 1, *(uint *)(in_stack_00000170 + 0x18) <= uVar15))
  goto LAB_0316f2c4;
  lVar9 = in_stack_00000170 + in_stack_00000168 * 0xc;
  unaff_x27 = in_stack_00000170 + uVar15 * 0xc;
  unaff_s8 = *in_stack_000000d8;
  unaff_x19 = (float *)(lVar9 + 0x20);
  unaff_s9 = *unaff_x19;
  unaff_s12 = *(float *)(lVar9 + 0x24);
  in_w8 = (uint)DAT_06db4c77;
  unaff_x24 = in_stack_00000168;
  in_stack_00000168 = uVar15;
  goto code_r0x0316a3b4;
  while( true ) {
    fVar26 = fVar37;
    fVar27 = fVar45;
    fVar25 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar19,*(undefined8 *)puVar2);
    if (DAT_06db4c77 == 0) {
      FUN_02d965b8(puVar3);
      DAT_06db4c77 = 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar26 = fVar37 - fVar26;
    fVar45 = fVar45 - fVar27;
    fVar37 = fVar45 * fVar45;
    fVar32 = fVar32 + SQRT(fVar37 + (fVar24 - fVar25) * (fVar24 - fVar25) + fVar26 * fVar26);
    if (fVar30 < fVar32) goto LAB_0316ee54;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar35 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar19,*(undefined8 *)puVar2);
    fVar37 = (float)FUN_031765b0(uVar35,fVar37,fVar45,fVar43,fVar40,fVar31,0);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    fVar26 = fVar45;
    fVar27 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar19,*(undefined8 *)puVar2);
    fVar25 = fVar32 / fVar30;
    fVar24 = 1.0;
    if (fVar25 <= 1.0) {
      fVar24 = fVar25;
    }
    uVar15 = (ulong)(uint)fVar24;
    fVar28 = 0.0;
    if (0.0 <= fVar25) {
      fVar28 = fVar24;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar19,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar33 = (ulong)(uint)(fVar45 + fVar28 * (fVar26 - fVar45));
    FUN_0409f350(fVar37 + fVar28 * (fVar27 - fVar37),*(long *)(unaff_x26 + 0x78),iVar19,
                 *(undefined8 *)puVar4);
    lVar10 = *(long *)(unaff_x26 + 0x78);
    iVar19 = iVar19 + 1;
    if (lVar10 == 0) break;
LAB_0316ecc4:
    fVar45 = (float)uVar33;
    fVar37 = (float)uVar15;
    if (*(int *)(lVar10 + 0x18) <= iVar19) goto LAB_0316ee54;
    fVar24 = (float)FUN_0409f2f4(lVar10,iVar19 + -1,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
  }
  goto LAB_03168190;
LAB_0316ee54:
  puVar2 = PTR_DAT_069fd088;
  if (in_stack_00000048._4_4_ != 0) {
    lVar9 = *(long *)(unaff_x26 + 0x78);
    if (lVar9 == 0) goto LAB_03168190;
    fVar40 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
    puVar3 = PTR_DAT_06a0b440;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar43 = fVar37;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                         *(undefined8 *)puVar3);
    puVar4 = PTR_DAT_06a0b7d0;
    puVar3 = PTR_DAT_069fbb48;
    if (lVar9 == 0) goto LAB_03168190;
    fVar31 = *(float *)(lVar9 + 200) * 0.5;
    fVar30 = 5.0;
    if (fVar31 <= 5.0) {
      fVar30 = fVar31;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar19 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar19 + -2) {
      fVar31 = 0.0;
      iVar19 = iVar19 + -1;
      uVar15 = (ulong)(uint)fVar40;
      uVar33 = (ulong)(uint)fVar45;
      do {
        fVar24 = (float)uVar15;
        fVar32 = (float)uVar33;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar26 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar19,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar19 = iVar19 + -1;
        fVar27 = fVar32;
        fVar25 = fVar24;
        fVar28 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar19,*(undefined8 *)puVar2);
        if (DAT_06db4c77 == 0) {
          FUN_02d965b8(puVar3);
          DAT_06db4c77 = 1;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar31 = fVar31 + SQRT((fVar24 - fVar25) * (fVar24 - fVar25) +
                               (fVar26 - fVar28) * (fVar26 - fVar28) +
                               (fVar32 - fVar27) * (fVar32 - fVar27));
        if (fVar30 < fVar31) break;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar19,*(undefined8 *)puVar2);
        fVar32 = fVar45;
        fVar24 = (float)FUN_031765b0(fVar40,fVar37,fVar45,fStack0000000000000060 * 10.0 + fVar40,
                                     fVar43,fStack000000000000005c * 10.0 + fVar45,0);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar27 = fVar32;
        fVar25 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar19,*(undefined8 *)puVar2);
        fVar28 = fVar31 / fVar30;
        fVar26 = 1.0;
        if (fVar28 <= 1.0) {
          fVar26 = fVar28;
        }
        uVar33 = (ulong)(uint)fVar26;
        fVar41 = 0.0;
        if (0.0 <= fVar28) {
          fVar41 = fVar26;
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar19,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar15 = (ulong)(uint)(fVar32 + fVar41 * (fVar27 - fVar32));
        FUN_0409f350(fVar24 + fVar41 * (fVar25 - fVar24),*(long *)(unaff_x26 + 0x78),iVar19,
                     *(undefined8 *)puVar4);
      } while (1 < iVar19);
    }
  }
  puVar2 = PTR_DAT_06a0b440;
  lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar10 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
  if (lVar10 != 0) {
    fVar45 = *(float *)(lVar10 + 0x94);
    lVar10 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
    if (lVar10 != 0) {
      fVar40 = *(float *)(lVar10 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar3 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar37 = DAT_010fd13c;
      fVar43 = SQRT(fVar45 * fVar45 + fVar40 * fVar40);
      if (fVar43 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar36 = **(undefined8 **)(*unaff_x28 + 0xb8);
        fVar40 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
      }
      else {
        fVar40 = fVar40 / fVar43;
        uVar36 = CONCAT44(0.0 / fVar43,fVar45 / fVar43);
      }
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x94) = uVar36;
        uVar36 = *(undefined8 *)puVar2;
        *(float *)(lVar9 + 0x9c) = fVar40;
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar36);
        lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                              *(undefined8 *)puVar2);
        if (lVar10 != 0) {
          fVar45 = *(float *)(lVar10 + 0x94);
          lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                *(undefined8 *)puVar2);
          if (lVar10 != 0) {
            fVar40 = *(float *)(lVar10 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar43 = SQRT(fVar45 * fVar45 + fVar40 * fVar40);
            if (fVar43 <= fVar37) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              uVar36 = **(undefined8 **)(*unaff_x28 + 0xb8);
              fVar40 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
            }
            else {
              fVar40 = fVar40 / fVar43;
              uVar36 = CONCAT44(0.0 / fVar43,fVar45 / fVar43);
            }
            if (lVar9 != 0) {
              uVar39 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar9 + 0x94) = uVar36;
              *(float *)(lVar9 + 0x9c) = fVar40;
              return uVar39;
            }
          }
        }
      }
    }
  }
LAB_03168190:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


