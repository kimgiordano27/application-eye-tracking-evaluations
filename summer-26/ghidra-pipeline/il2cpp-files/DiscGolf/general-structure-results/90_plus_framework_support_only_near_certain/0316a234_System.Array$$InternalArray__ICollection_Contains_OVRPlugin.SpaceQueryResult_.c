/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0316a234
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>
          (undefined1 param_1 [16],undefined8 param_2,ulong param_3,long param_4)

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
  long lVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  char cVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  long lVar18;
  long lVar19;
  undefined8 *unaff_x19;
  float *pfVar20;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long *plVar21;
  int iVar22;
  byte bVar23;
  int iVar24;
  int iVar25;
  long unaff_x23;
  ulong unaff_x24;
  undefined4 *puVar26;
  undefined1 *unaff_x26;
  int unaff_w27;
  float *pfVar27;
  long *unaff_x28;
  undefined **unaff_x29;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  ulong uVar36;
  ulong uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined8 uVar41;
  float fVar42;
  uint uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  float unaff_s15;
  float fVar54;
  int iVar55;
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
  int iStack00000000000000d4;
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
  long in_stack_00000238;
  long in_stack_00000240;
  undefined4 in_stack_00000268;
  float in_stack_0000026c;
  float in_stack_00000270;
  float in_stack_00000278;
  float in_stack_0000027c;
  float in_stack_00000280;
  
  iStack00000000000000d4 = unaff_w27;
code_r0x0316a234:
  fVar38 = (float)param_3;
  fVar35 = (float)param_2;
  if (param_4 != 0) {
    if (2 < *(int *)(param_4 + 0x18)) {
      fStack0000000000000104 = (float)FUN_0409f2f4(param_4,*(int *)(param_4 + 0x18) + -1,*unaff_x19)
      ;
      lVar9 = *(long *)(unaff_x26 + 0x78);
      if (lVar9 == 0) goto LAB_03168190;
      fVar39 = fVar35;
      fVar45 = fVar38;
      fVar28 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,*unaff_x19);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fStack0000000000000104 = fStack0000000000000104 - fVar28;
      fVar35 = fVar35 - fVar39;
      fVar38 = fVar38 - fVar45;
      fStack00000000000000fc =
           SQRT(fVar38 * fVar38 + fStack0000000000000104 * fStack0000000000000104 + fVar35 * fVar35)
      ;
      if (fStack00000000000000fc <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(unaff_x28);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        pfVar20 = *(float **)(*unaff_x28 + 0xb8);
        fStack0000000000000104 = *pfVar20;
        fStack0000000000000100 = pfVar20[1];
        fStack00000000000000fc = pfVar20[2];
      }
      else {
        fStack0000000000000104 = fStack0000000000000104 / fStack00000000000000fc;
        fStack0000000000000100 = fVar35 / fStack00000000000000fc;
        fStack00000000000000fc = fVar38 / fStack00000000000000fc;
      }
    }
LAB_0316a33c:
    uVar37 = unaff_x24;
    lVar9 = *(long *)(unaff_x26 + 0x28);
    if (lVar9 == 0) goto LAB_03168190;
    lVar18 = *(long *)(unaff_x26 + 0x20);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar18 == 0) goto LAB_03168190;
    fVar35 = 0.0;
    *(undefined4 *)(lVar18 + 0x18) = 0;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
    if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar37) ||
       (unaff_x24 = uVar37 + 1, *(uint *)(in_stack_00000170 + 0x18) <= unaff_x24))
    goto LAB_0316f2c4;
    lVar9 = in_stack_00000170 + uVar37 * 0xc;
    lVar18 = in_stack_00000170 + unaff_x24 * 0xc;
    fVar39 = *in_stack_000000d8;
    pfVar20 = (float *)(lVar9 + 0x20);
    fVar28 = *pfVar20;
    fVar38 = *(float *)(lVar9 + 0x24);
    fVar45 = *(float *)(lVar9 + 0x28);
    pfVar27 = (float *)(lVar18 + 0x20);
    fVar42 = *pfVar27;
    fVar52 = *(float *)(lVar18 + 0x24);
    fVar48 = *(float *)(lVar18 + 0x28);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
       lVar10 == 0)) goto LAB_03168190;
    fVar38 = fVar38 - fVar52;
    fVar45 = fVar45 - fVar48;
    uVar36 = (ulong)(uint)fVar45;
    uVar16 = (ulong)(uint)(fVar45 * fVar45);
    fVar39 = fVar39 + SQRT(fVar45 * fVar45 + (fVar28 - fVar42) * (fVar28 - fVar42) + fVar38 * fVar38
                          );
    iVar22 = (int)uVar37;
    if (*(int *)(lVar10 + 0x6c) == 0) {
      if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar37) ||
         (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)) goto LAB_0316f2c4;
      fVar28 = *pfVar20;
      fVar38 = *(float *)(lVar9 + 0x24);
      fVar42 = *pfVar27;
      fVar52 = *(float *)(lVar18 + 0x24);
      fVar45 = *(float *)(lVar9 + 0x28);
      fVar48 = *(float *)(lVar18 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (uVar37 < 2) {
        bVar7 = false;
      }
      else {
        if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
        lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar22 + -2,*unaff_x21);
        if (lVar10 == 0) goto LAB_03168190;
        if (*(int *)(lVar10 + 0x6c) == 1) {
          bVar7 = true;
        }
        else {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar22 + -2,*unaff_x21), lVar10 == 0
             )) goto LAB_03168190;
          bVar7 = *(int *)(lVar10 + 0x6c) == 2;
        }
      }
      fVar31 = 0.0;
      if (uVar37 == 1) {
        fVar31 = fStack0000000000000064;
      }
      fVar32 = fStack0000000000000068;
      if (uVar37 != *(int *)(in_stack_00000170 + 0x18) - 3) {
        fVar32 = 1.0;
      }
      if (fVar32 <= fVar31) {
        iStack0000000000000108 = 0;
      }
      else {
        fVar38 = fVar38 - fVar52;
        fVar45 = fVar45 - fVar48;
        fVar38 = DAT_010fcf10 /
                 SQRT(fVar45 * fVar45 + (fVar28 - fVar42) * (fVar28 - fVar42) + fVar38 * fVar38);
        do {
          uVar16 = *(ulong *)(in_stack_00000170 + 0x18);
          if (fVar38 + fVar31 <= 1.0) {
            bVar23 = 0;
          }
          else if (uVar37 == (int)uVar16 - 3) {
            bVar23 = *(byte *)(unaff_x23 + 0x84) ^ 1;
          }
          else {
            bVar23 = 0;
          }
          bVar8 = bVar23 != 0;
          fVar45 = 1.0;
          if (!bVar8) {
            fVar45 = fVar31;
          }
          if (((uVar16 & 0xffffffff) <= uVar37) || ((uVar16 & 0xffffffff) <= unaff_x24))
          goto LAB_0316f2c4;
          uVar49 = *(undefined4 *)(lVar9 + 0x24);
          uVar40 = *(undefined4 *)(lVar9 + 0x28);
          fVar28 = *pfVar20;
          FUN_04059a68(in_stack_000000c8,uVar37 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0a108);
          fVar48 = in_stack_0000026c;
          fVar52 = in_stack_00000270;
          fVar31 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,in_stack_00000270,fVar28,
                                       uVar49,uVar40);
          _fStack00000000000001c0 = CONCAT44(fVar48,fVar31);
          fVar28 = in_stack_00000160._4_4_;
          fVar42 = (float)in_stack_00000110;
          if (iStack0000000000000108 == 3) {
            iStack0000000000000108 = 0;
            fVar28 = fVar52;
            fVar42 = fVar31;
            fStack0000000000000128 = fVar48;
            fStack000000000000012c = fVar52;
            in_stack_00000130 = fVar31;
          }
          unaff_x29 = &PTR_FUN_06db4000;
          in_stack_000001c8 = fVar52;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar30 = in_stack_000001c8;
          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
          fVar51 = *pfVar27;
          fVar46 = *(float *)(lVar18 + 0x24);
          fVar33 = fStack00000000000001c0;
          fVar29 = fStack00000000000001c4;
          fVar54 = *(float *)(lVar18 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar10 = *(long *)(unaff_x26 + 0x20);
          if (lVar10 == 0) goto LAB_03168190;
          fVar29 = fVar29 - fVar46;
          iVar24 = *(int *)(lVar10 + 0x18);
          fVar30 = fVar30 - fVar54;
          fVar46 = fVar30 * fVar30;
          fVar33 = SQRT(fVar46 + (fVar33 - fVar51) * (fVar33 - fVar51) + fVar29 * fVar29);
          if (iVar24 < 1) {
            lVar10 = *(long *)(unaff_x26 + 0x78);
            if (lVar10 == 0) goto LAB_03168190;
            iVar24 = *(int *)(lVar10 + 0x18);
            if (0 < iVar24) goto LAB_0316b4d8;
          }
          else {
LAB_0316b4d8:
            fVar29 = (float)FUN_0409f2f4(lVar10,iVar24 + -1,*(undefined8 *)PTR_DAT_069fd088);
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
            plVar21 = (long *)PTR_DAT_069fb978;
            fStack00000000000000f8 = fStack00000000000000f8 - fVar29;
            fStack00000000000000f4 = fStack00000000000000f4 - fVar46;
            fStack00000000000000f0 = fStack00000000000000f0 - fVar30;
            fVar30 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                          fStack00000000000000f8 * fStack00000000000000f8 +
                          fStack00000000000000f4 * fStack00000000000000f4);
            if (fVar30 <= DAT_010fd13c) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              pfVar17 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
              fStack00000000000000f8 = *pfVar17;
              fStack00000000000000f4 = pfVar17[1];
              fStack00000000000000f0 = pfVar17[2];
              plVar21 = (long *)PTR_DAT_069fb978;
            }
            else {
              fStack00000000000000f8 = fStack00000000000000f8 / fVar30;
              fStack00000000000000f4 = fStack00000000000000f4 / fVar30;
              fStack00000000000000f0 = fStack00000000000000f0 / fVar30;
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
            }
            pfVar17 = *(float **)(*plVar21 + 0xb8);
            if (fStack00000000000000a4 <=
                (fStack00000000000000fc - pfVar17[2]) * (fStack00000000000000fc - pfVar17[2]) +
                (fStack0000000000000104 - *pfVar17) * (fStack0000000000000104 - *pfVar17) +
                (fStack0000000000000100 - pfVar17[1]) * (fStack0000000000000100 - pfVar17[1])) {
              if (DAT_06db4ece == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4ece = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              unaff_s15 = 0.0;
              fVar30 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                            fStack0000000000000100 * fStack0000000000000100 +
                            fStack0000000000000104 * fStack0000000000000104) *
                            (fStack00000000000000f0 * fStack00000000000000f0 +
                            fStack00000000000000f8 * fStack00000000000000f8 +
                            fStack00000000000000f4 * fStack00000000000000f4));
              if (DAT_010fcd14 <= fVar30) {
                fVar30 = (fStack00000000000000fc * fStack00000000000000f0 +
                         fStack0000000000000104 * fStack00000000000000f8 +
                         fStack0000000000000100 * fStack00000000000000f4) / fVar30;
                fVar29 = 1.0;
                if (fVar30 <= 1.0) {
                  fVar29 = fVar30;
                }
                fVar46 = -1.0;
                if (-1.0 <= fVar30) {
                  fVar46 = fVar29;
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                dVar34 = acos((double)fVar46);
                unaff_s15 = (float)dVar34 * DAT_010fcf40;
              }
              bVar8 = false;
              bVar5 = true;
              bVar6 = false;
              if (*(float *)(in_stack_00000148 + 0x80) < unaff_s15) {
                bVar8 = false;
                bVar5 = false;
                bVar6 = true;
                if (!NAN(fVar33)) {
                  bVar8 = fVar33 < 1.5;
                  bVar5 = fVar33 == 1.5;
                  bVar6 = false;
                }
              }
              bVar8 = bVar23 != 0 ||
                      (!bVar5 && bVar8 == bVar6) &&
                      1.0 <= SQRT((fStack000000000000012c - fVar52) *
                                  (fStack000000000000012c - fVar52) +
                                  (fStack0000000000000128 - fVar48) *
                                  (fStack0000000000000128 - fVar48) +
                                  (in_stack_00000130 - fVar31) * (in_stack_00000130 - fVar31));
            }
          }
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
            if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
            FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
          }
          bVar5 = bVar8;
          if (fVar32 < fVar38 + fVar45 + DAT_010fd060) {
            bVar6 = bVar8;
            if (fStack00000000000000a0 <= fVar33) {
              bVar6 = true;
            }
            if (bVar6 == false && (in_stack_000000c0._4_1_ & 1) == 0) {
              if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
              fVar45 = 1.0;
              _fStack00000000000001c0 = *(ulong *)pfVar27;
              in_stack_000001c8 = *(float *)(lVar18 + 0x28);
              bVar5 = true;
            }
          }
          if (fVar38 + fVar45 <= fVar32) {
            fVar48 = fStack00000000000001c0;
            fVar52 = fStack00000000000001c4;
          }
          else {
            if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
            _fStack00000000000001c0 = *(ulong *)pfVar27;
            fVar45 = 1.0;
            in_stack_000001c8 = *(float *)(lVar18 + 0x28);
            bVar5 = true;
            fVar48 = *pfVar27;
            fVar52 = *(float *)(lVar18 + 0x24);
          }
          fVar31 = in_stack_000001c8;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar30 = in_stack_000001c8;
          bVar6 = bVar5;
          if (fStack000000000000010c <
              SQRT((fStack000000000000012c - fVar31) * (fStack000000000000012c - fVar31) +
                   (in_stack_00000130 - fVar48) * (in_stack_00000130 - fVar48) +
                   (fStack0000000000000128 - fVar52) * (fStack0000000000000128 - fVar52))) {
            bVar6 = true;
          }
          bVar1 = bVar6;
          if (uVar37 != 1) {
            bVar1 = true;
          }
          if (bVar1 == false) {
            bVar6 = fVar45 == 0.0;
          }
          if (bVar6 == true) {
            fVar48 = fStack00000000000001c0;
            fVar52 = fStack00000000000001c4;
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              cVar13 = DAT_06db4c77;
            }
            else {
              cVar13 = '\x01';
            }
            fVar31 = in_stack_000001c8;
            uVar16 = _fStack00000000000001c0;
            in_stack_00000110 = _fStack00000000000001c0 & 0xffffffff;
            fVar48 = SQRT((fStack000000000000012c - fVar30) * (fStack000000000000012c - fVar30) +
                          (in_stack_00000130 - fVar48) * (in_stack_00000130 - fVar48) +
                          (fStack0000000000000128 - fVar52) * (fStack0000000000000128 - fVar52));
            in_stack_00000160._4_4_ = in_stack_000001c8;
            fStack00000000000001d4 = fVar48 + fStack00000000000001d4;
            *in_stack_000000d8 = fVar48 + *in_stack_000000d8;
            if (cVar13 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            in_stack_00000280 = in_stack_000001c8;
            lVar10 = *(long *)(in_stack_00000148 + 0x68);
            *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
            fVar42 = (float)uVar16 - fVar42;
            in_stack_00000130 = fStack00000000000001c0;
            fVar35 = fVar35 + SQRT(fVar42 * fVar42 + (fVar31 - fVar28) * (fVar31 - fVar28));
            fStack0000000000000128 = fStack00000000000001c4;
            fStack000000000000012c = in_stack_000001c8;
            if ((lVar10 == 0) ||
               (lVar10 = FUN_0400ff1c(lVar10,unaff_x20 & 0xffffffff,*unaff_x21), lVar10 == 0))
            goto LAB_03168190;
            if (*(float *)(lVar10 + 0x100) == 0.0) {
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *unaff_x21), lVar10 == 0)) goto LAB_03168190;
              if (*(float *)(lVar10 + 0x104) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *unaff_x21), lVar10 == 0)) goto LAB_03168190;
              if (*(float *)(lVar10 + 0x110) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *unaff_x21), lVar10 == 0)) goto LAB_03168190;
              if (*(float *)(lVar10 + 0x114) != 0.0) goto LAB_0316bb78;
              lVar10 = *in_stack_000000e0;
              if (lVar10 == 0) goto LAB_03168190;
              lVar11 = *(long *)(lVar10 + 0x10);
              lVar15 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_03168190;
              uVar43 = *(uint *)(lVar10 + 0x18);
              if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar43 + 1;
                *(undefined4 *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar10,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316bb78:
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              fVar28 = *in_stack_000000d8;
              uVar41 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *unaff_x21);
              FUN_0316f6a0(fVar28,fVar39,uVar41,uVar41,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x00000278,&stack0x00000214);
            }
            lVar10 = *in_stack_000000b8;
            if (fVar48 <= 5.0) {
              if (lVar10 == 0) goto LAB_03168190;
              lVar11 = *(long *)(lVar10 + 0x10);
              lVar15 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_03168190;
              uVar43 = *(uint *)(lVar10 + 0x18);
              fVar28 = (unaff_s15 / fVar48) * 5.0;
              if (*(uint *)(lVar11 + 0x18) <= uVar43) {
                lVar11 = *(long *)(lVar15 + 0x20);
                goto LAB_0316bcb0;
              }
              *(uint *)(lVar10 + 0x18) = uVar43 + 1;
              *(float *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = fVar28;
            }
            else {
              if (lVar10 == 0) goto LAB_03168190;
              lVar11 = *(long *)(lVar10 + 0x10);
              lVar15 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_03168190;
              uVar43 = *(uint *)(lVar10 + 0x18);
              if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar43 + 1;
                *(float *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = unaff_s15;
              }
              else {
                lVar11 = *(long *)(lVar15 + 0x20);
                fVar28 = unaff_s15;
LAB_0316bcb0:
                FUN_04059d64(fVar28,lVar10,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x70));
              }
            }
            if (bVar7) {
              lVar10 = *in_stack_000000b8;
              if (lVar10 == 0) goto LAB_03168190;
              iVar24 = *(int *)(lVar10 + 0x18);
              if (1 < iVar24) {
                FUN_04059a68(lVar10,iVar24 + -1,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_04059abc(lVar10,iVar24 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
              }
            }
            puVar2 = PTR_DAT_069fbee0;
            lVar10 = *(long *)(unaff_x26 + 0x20);
            if (lVar10 == 0) goto LAB_03168190;
            lVar11 = *(long *)(lVar10 + 0x10);
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar10 + 0x18);
            if (uVar43 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar43 * 0xc;
              *(uint *)(lVar10 + 0x18) = uVar43 + 1;
              *(float *)(lVar11 + 0x20) = in_stack_00000278;
              *(float *)(lVar11 + 0x24) = in_stack_0000027c;
              *(float *)(lVar11 + 0x28) = in_stack_00000280;
            }
            else {
              FUN_0409f624(lVar10,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
            }
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            lVar10 = *(long *)(unaff_x26 + 0x28);
            if (lVar10 == 0) goto LAB_03168190;
            lVar11 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar10 + 0x18);
            if (uVar43 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar43 + 1;
              *(float *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = fVar45;
            }
            else {
              FUN_04059d64(fVar45,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            if (bVar5 != false) {
              lVar10 = *(long *)(in_stack_00000148 + 0x2c8);
              if (lVar10 == 0) goto LAB_03168190;
              lVar11 = *(long *)(lVar10 + 0x10);
              lVar15 = *(long *)PTR_DAT_069fc3e0;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_03168190;
              uVar43 = *(uint *)(lVar10 + 0x18);
              if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar43 + 1;
                *(int *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = iStack00000000000000d4;
              }
              else {
                FUN_03fb3e1c(lVar10,iStack00000000000000d4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            bVar7 = false;
            fStack00000000000000fc = fStack00000000000000f0;
            fStack0000000000000100 = fStack00000000000000f4;
            iStack00000000000000d4 = iStack00000000000000d4 + 1;
            fStack0000000000000104 = fStack00000000000000f8;
            in_stack_000000c0._4_1_ = bVar8;
          }
          else {
            in_stack_00000110 = (ulong)(uint)fVar42;
            in_stack_00000160._4_4_ = fVar28;
          }
          fVar31 = fVar38 + fVar45;
          unaff_x23 = in_stack_00000148;
        } while (fVar31 < fVar32);
        iStack0000000000000108 = 0;
        unaff_x28 = (long *)PTR_DAT_069fb978;
      }
    }
    else {
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
         lVar10 == 0)) goto LAB_03168190;
      if (*(int *)(lVar10 + 0x6c) != 1) {
        if ((*(long *)(unaff_x23 + 0x68) == 0) ||
           (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
           lVar10 == 0)) goto LAB_03168190;
        if (*(int *)(lVar10 + 0x6c) != 2) {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
             lVar10 == 0)) goto LAB_03168190;
          if (*(int *)(lVar10 + 0x6c) == 3) {
            uStack00000000000001ac = 0;
            if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
            if (((long)(*(int *)(*(long *)(unaff_x23 + 0x68) + 0x18) + -2) < (long)uVar37) &&
               (*(char *)(unaff_x23 + 0x84) == '\0')) {
              uVar41 = *(undefined8 *)(unaff_x23 + 0x2e0);
              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar12 = FUN_0634eb94(uVar41,0,0);
              if ((uVar12 & 1) != 0) goto LAB_0316adcc;
              FUN_030fd644(&stack0x00000290,unaff_x23,uVar37 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            else {
LAB_0316adcc:
              FUN_030faa2c(&stack0x00000290,unaff_x23,uVar37 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21)
               , lVar10 == 0)) goto LAB_03168190;
            lVar11 = *(long *)(unaff_x26 + 0x28);
            *(undefined4 *)(lVar10 + 0x34) = uStack00000000000001ac;
            if (lVar11 == 0) goto LAB_03168190;
            fVar38 = 0.0;
            iVar24 = 0;
            puVar26 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
            while( true ) {
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar2 = PTR_DAT_069fbee0;
              unaff_x28 = (long *)PTR_DAT_069fb978;
              fVar45 = (float)uVar16;
              in_stack_00000160._4_4_ = (float)uVar36;
              iVar55 = *(int *)(lVar11 + 0x18);
              if (iVar55 <= iVar24) break;
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uStack00000000000001a0 =
                   FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar24,*(undefined8 *)PTR_DAT_069fd088);
              fStack00000000000001a4 = fVar45;
              fStack00000000000001a8 = in_stack_00000160._4_4_;
              if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                uVar16 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                if ((((uVar16 <= unaff_x20) || (uVar16 <= uVar37)) || (uVar16 <= unaff_x24)) ||
                   (uVar16 <= uVar37 + 2)) goto LAB_0316f2c4;
                if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                uVar40 = *puVar26;
                fVar45 = (float)puVar26[1];
                uVar49 = puVar26[2];
                fVar28 = *pfVar20;
                uVar53 = *(undefined4 *)(lVar9 + 0x24);
                uVar50 = *(undefined4 *)(lVar9 + 0x28);
                FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar24,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_0316f340(uVar40,fVar45,uVar49,fVar28,uVar53,uVar50);
                fStack00000000000001a4 = fVar45;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                in_stack_00000160._4_4_ = fStack00000000000001a8;
                FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar24,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                if (iVar24 != 0) goto LAB_0316af8c;
LAB_0316b04c:
                lVar10 = *in_stack_000000e0;
                if (lVar10 == 0) goto LAB_03168190;
                lVar11 = *(long *)(lVar10 + 0x10);
                lVar15 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_03168190;
                uVar43 = *(uint *)(lVar10 + 0x18);
                if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar43 + 1;
                  *(undefined4 *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar10,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
                if (iVar24 == 0) goto LAB_0316b04c;
LAB_0316af8c:
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff
                                          ,*(undefined8 *)PTR_DAT_06a0b440), lVar10 == 0))
                goto LAB_03168190;
                if (*(float *)(lVar10 + 0x100) == 0.0) {
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                            unaff_x20 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440),
                     lVar10 == 0)) goto LAB_03168190;
                  if (*(float *)(lVar10 + 0x104) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              unaff_x20 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440
                                             ), lVar10 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar10 + 0x110) == 0.0) {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                unaff_x20 & 0xffffffff,
                                                *(undefined8 *)PTR_DAT_06a0b440), lVar10 == 0))
                      goto LAB_03168190;
                      if (*(float *)(lVar10 + 0x114) == 0.0) goto LAB_0316b04c;
                    }
                  }
                }
                puVar2 = PTR_DAT_069fd088;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar28 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar24 + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar42 = fVar45;
                fVar48 = in_stack_00000160._4_4_;
                fVar52 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar24,
                                             *(undefined8 *)puVar2);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                fVar31 = *in_stack_000000d8;
                fVar38 = fVar38 + SQRT((in_stack_00000160._4_4_ - fVar48) *
                                       (in_stack_00000160._4_4_ - fVar48) +
                                       (fVar28 - fVar52) * (fVar28 - fVar52) +
                                       (fVar45 - fVar42) * (fVar45 - fVar42));
                uVar41 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                      *(undefined8 *)PTR_DAT_06a0b440);
                FUN_0316f6a0(fVar38 + fVar31,fVar39,uVar41,uVar41,&stack0x0000022c,&stack0x00000228,
                             &stack0x00000224,&stack0x00000218,&stack0x000001a0,&stack0x00000214);
              }
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uVar36 = (ulong)(uint)fStack00000000000001a8;
              uVar16 = (ulong)(uint)fStack00000000000001a4;
              FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar24,
                           *(undefined8 *)PTR_DAT_06a0b7d0);
              lVar11 = *(long *)(unaff_x26 + 0x28);
              iVar24 = iVar24 + 1;
              if (lVar11 == 0) goto LAB_03168190;
            }
            uVar16 = (ulong)(iVar55 - 1);
            if (iVar55 < 1) {
              if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
              lVar10 = *(long *)(unaff_x26 + 0x20);
              if (lVar10 == 0) goto LAB_03168190;
              lVar11 = *(long *)(lVar10 + 0x10);
              fVar38 = *pfVar27;
              uVar40 = *(undefined4 *)(lVar18 + 0x24);
              in_stack_00000160._4_4_ = *(float *)(lVar18 + 0x28);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_03168190;
              uVar43 = *(uint *)(lVar10 + 0x18);
              if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                lVar11 = lVar11 + (long)(int)uVar43 * 0xc;
                *(uint *)(lVar10 + 0x18) = uVar43 + 1;
                *(float *)(lVar11 + 0x20) = fVar38;
                *(undefined4 *)(lVar11 + 0x24) = uVar40;
                *(float *)(lVar11 + 0x28) = in_stack_00000160._4_4_;
              }
              else {
                FUN_0409f624(lVar10,*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
                uVar16 = extraout_x1_00;
              }
              fVar38 = fStack00000000000001d4;
              if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar37) ||
                 (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)) goto LAB_0316f2c4;
              uVar41 = *(undefined8 *)pfVar20;
              fVar39 = *(float *)(lVar9 + 0x28);
              uVar44 = *(undefined8 *)pfVar27;
              fVar45 = *(float *)(lVar18 + 0x28);
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48,uVar16);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar28 = (float)uVar41 - (float)uVar44;
              fVar42 = (float)((ulong)uVar41 >> 0x20) - (float)((ulong)uVar44 >> 0x20);
              fVar39 = fVar39 - fVar45;
              in_stack_0000027c = fVar39 * fVar39;
              fStack00000000000001d4 =
                   fVar38 + SQRT(in_stack_0000027c + fVar28 * fVar28 + fVar42 * fVar42);
LAB_0316d2dc:
              lVar9 = *(long *)(unaff_x26 + 0x28);
              if (lVar9 == 0) goto LAB_03168190;
              lVar18 = *(long *)(lVar9 + 0x10);
              lVar10 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_03168190;
              uVar43 = *(uint *)(lVar9 + 0x18);
              if (uVar43 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                *(undefined4 *)(lVar18 + (long)(int)uVar43 * 4 + 0x20) = 0x3f800000;
              }
              else {
                FUN_04059d64(0x3f800000,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              lVar9 = *in_stack_000000e0;
              if (lVar9 == 0) goto LAB_03168190;
              lVar18 = *(long *)(lVar9 + 0x10);
              lVar10 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_03168190;
              uVar43 = *(uint *)(lVar9 + 0x18);
              if (uVar43 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                *(undefined4 *)(lVar18 + (long)(int)uVar43 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar9,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              fVar38 = (float)FUN_04059a68(lVar11,uVar16,*(undefined8 *)PTR_DAT_06a0a108);
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar2 = PTR_DAT_069fd088;
              unaff_x28 = (long *)PTR_DAT_069fb978;
              fVar39 = 1.0;
              if (fVar38 <= 1.0) {
                lVar9 = *(long *)(unaff_x26 + 0x20);
                if (lVar9 == 0) goto LAB_03168190;
                fVar38 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                fVar39 = fVar39 - *(float *)(lVar18 + 0x24);
                in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - *(float *)(lVar18 + 0x28);
                in_stack_0000027c = fStack00000000000000a4;
                if (fStack00000000000000a4 <=
                    in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                    (fVar38 - *pfVar27) * (fVar38 - *pfVar27) + fVar39 * fVar39) {
                  lVar9 = *(long *)(unaff_x26 + 0x20);
                  if (lVar9 == 0) goto LAB_03168190;
                  fVar38 = fStack00000000000000a4;
                  fVar39 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                               *(undefined8 *)puVar2);
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                  fVar45 = *pfVar27;
                  fVar42 = *(float *)(lVar18 + 0x24);
                  fVar28 = *(float *)(lVar18 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  puVar3 = PTR_DAT_069fbee0;
                  fVar38 = fVar38 - fVar42;
                  lVar9 = *(long *)(unaff_x26 + 0x20);
                  in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar28;
                  if (in_stack_000000b0 <=
                      SQRT(in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                           (fVar39 - fVar45) * (fVar39 - fVar45) + fVar38 * fVar38)) {
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                    if (lVar9 != 0) {
                      lVar10 = *(long *)(lVar9 + 0x10);
                      fVar38 = *pfVar27;
                      fVar39 = *(float *)(lVar18 + 0x24);
                      in_stack_00000160._4_4_ = *(float *)(lVar18 + 0x28);
                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                      if (lVar10 != 0) {
                        uVar43 = *(uint *)(lVar9 + 0x18);
                        if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                          lVar10 = lVar10 + (long)(int)uVar43 * 0xc;
                          *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                          *(float *)(lVar10 + 0x20) = fVar38;
                          *(float *)(lVar10 + 0x24) = fVar39;
                          *(float *)(lVar10 + 0x28) = in_stack_00000160._4_4_;
                        }
                        else {
                          FUN_0409f624(lVar9,*(undefined8 *)
                                              (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) +
                                              0x70));
                        }
                        fVar38 = fStack00000000000001d4;
                        lVar9 = *(long *)(unaff_x26 + 0x20);
                        if (lVar9 != 0) {
                          fVar45 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                       *(undefined8 *)puVar2);
                          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                          fVar28 = *pfVar27;
                          fVar48 = *(float *)(lVar18 + 0x24);
                          fVar42 = *(float *)(lVar18 + 0x28);
                          if (DAT_06db4c77 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c77 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar39 = fVar39 - fVar48;
                          in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar42;
                          in_stack_0000027c = in_stack_00000160._4_4_ * in_stack_00000160._4_4_;
                          fStack00000000000001d4 =
                               fVar38 + SQRT(in_stack_0000027c +
                                             (fVar45 - fVar28) * (fVar45 - fVar28) + fVar39 * fVar39
                                            );
                          goto LAB_0316d2dc;
                        }
                      }
                    }
                    goto LAB_03168190;
                  }
                  if (lVar9 == 0) goto LAB_03168190;
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                  in_stack_00000160._4_4_ = *(float *)(lVar18 + 0x28);
                  in_stack_0000027c = *(float *)(lVar18 + 0x24);
                  FUN_0409f350(*pfVar27,lVar9,*(int *)(lVar9 + 0x18) + -1,
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
                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                in_stack_00000160._4_4_ = *(float *)(lVar18 + 0x28);
                in_stack_0000027c = *(float *)(lVar18 + 0x24);
                FUN_0409f350(*pfVar27,lVar9,*(int *)(lVar9 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
              }
            }
            lVar9 = *(long *)(unaff_x26 + 0x20);
            if (lVar9 == 0) goto LAB_03168190;
            iVar24 = *(int *)(lVar9 + 0x18);
            in_stack_00000110 = FUN_0409f2f4(lVar9,iVar24 + -1,*(undefined8 *)PTR_DAT_069fd088);
            puVar2 = PTR_DAT_069fd088;
            lVar9 = *(long *)(unaff_x26 + 0x20);
            in_stack_00000278 = (float)in_stack_00000110;
            if (lVar9 == 0) goto LAB_03168190;
            fVar38 = in_stack_00000160._4_4_;
            if (1 < *(int *)(lVar9 + 0x18)) {
              fStack0000000000000088 = in_stack_0000027c;
              fStack000000000000008c =
                   (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                       *(undefined8 *)PTR_DAT_069fd088);
              lVar9 = *(long *)(unaff_x26 + 0x20);
              if (lVar9 == 0) goto LAB_03168190;
              fVar39 = fStack0000000000000088;
              fVar45 = fVar38;
              fVar28 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fStack000000000000008c = fStack000000000000008c - fVar28;
              fStack0000000000000088 = fStack0000000000000088 - fVar39;
              fVar38 = fVar38 - fVar45;
              in_stack_00000080._4_4_ =
                   SQRT(fVar38 * fVar38 +
                        fStack000000000000008c * fStack000000000000008c +
                        fStack0000000000000088 * fStack0000000000000088);
              if (in_stack_00000080._4_4_ <= DAT_010fd13c) {
                if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                  FUN_02d965b8(unaff_x28);
                  *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                }
                pfVar20 = *(float **)(*unaff_x28 + 0xb8);
                fStack000000000000008c = *pfVar20;
                fStack0000000000000088 = pfVar20[1];
                in_stack_00000080._4_4_ = pfVar20[2];
              }
              else {
                fStack000000000000008c = fStack000000000000008c / in_stack_00000080._4_4_;
                fStack0000000000000088 = fStack0000000000000088 / in_stack_00000080._4_4_;
                in_stack_00000080._4_4_ = fVar38 / in_stack_00000080._4_4_;
              }
            }
            lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
            *(float *)(in_stack_00000148 + 0x2c0) =
                 *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
            if (lVar9 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar9 + 0x10);
            lVar10 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar9 + 0x18);
            iStack00000000000000d4 = iVar24 + iStack00000000000000d4;
            fVar39 = fStack00000000000001d4;
            if (uVar43 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar43 + 1;
              *(int *)(lVar18 + (long)(int)uVar43 * 4 + 0x20) = iStack00000000000000d4;
            }
            else {
              FUN_03fb3e1c(lVar9,iStack00000000000000d4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            iVar24 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
            in_stack_00000280 = in_stack_00000160._4_4_;
            if (0 < iVar24) {
              lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22 + -2,*unaff_x21);
              if ((lVar9 != 0) && (lVar18 = *in_stack_00000090, lVar18 != 0)) {
                iVar55 = *(int *)(lVar9 + 0xbc);
                fVar45 = (float)FUN_04059a68(lVar18,*(int *)(lVar18 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_06a0a108);
                lVar9 = *in_stack_00000090;
                if (lVar9 != 0) {
                  if (1 < *(int *)(lVar9 + 0x18)) {
                    fVar39 = (float)FUN_04059a68(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                                 *(undefined8 *)PTR_DAT_06a0a108);
                    fVar39 = fVar45 - fVar39;
                    fVar45 = fVar39;
                  }
                  puVar2 = PTR_DAT_069fd088;
                  lVar9 = *(long *)(unaff_x26 + 0x78);
                  if (lVar9 != 0) {
                    fVar28 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                 *(undefined8 *)PTR_DAT_069fd088);
                    if (*(long *)(unaff_x26 + 0x20) != 0) {
                      fVar42 = fVar39;
                      fVar48 = fVar38;
                      fVar52 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,
                                                   *(undefined8 *)puVar2);
                      if (DAT_06db4c75 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c75 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar39 = fVar39 - fVar42;
                      uVar16 = (ulong)(uint)DAT_010fd13c;
                      fVar38 = SQRT((fVar38 - fVar48) * (fVar38 - fVar48) +
                                    (fVar28 - fVar52) * (fVar28 - fVar52) + fVar39 * fVar39);
                      if (fVar38 <= DAT_010fd13c) {
                        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                          FUN_02d965b8(unaff_x28);
                          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                        }
                        fVar39 = *(float *)(*(long *)(*unaff_x28 + 0xb8) + 4);
                      }
                      else {
                        fVar39 = fVar39 / fVar38;
                      }
                      puVar2 = PTR_DAT_069fd088;
                      lVar9 = *(long *)(unaff_x26 + 0x78);
                      if (lVar9 != 0) {
                        FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088);
                        lVar9 = *(long *)(unaff_x26 + 0x78);
                        if (lVar9 != 0) {
                          fVar42 = fVar38;
                          fVar28 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                       *(undefined8 *)puVar2);
                          if (*(long *)(unaff_x26 + 0x78) != 0) {
                            uVar36 = (ulong)(uint)(float)iVar55;
                            fVar48 = (float)iVar24 - (float)iVar55;
                            if (1.0 <= fVar48) {
                              fVar52 = 0.0;
                              iVar55 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                              iVar24 = 2;
                              iVar25 = -2;
                              do {
                                fVar31 = (float)uVar36;
                                if ((iVar24 - iVar55) + -1 < 0) {
                                  lVar9 = *(long *)(unaff_x26 + 0x78);
                                  if (lVar9 == 0) goto LAB_03168190;
                                  fVar32 = (float)uVar16;
                                  fVar30 = (float)FUN_0409f2f4(lVar9,iVar25 + *(int *)(lVar9 + 0x18)
                                                               ,*(undefined8 *)PTR_DAT_069fd088);
                                  if (DAT_06db4c77 == '\0') {
                                    FUN_02d965b8(PTR_DAT_069fbb48);
                                    DAT_06db4c77 = '\x01';
                                  }
                                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                  }
                                  lVar9 = *(long *)(unaff_x26 + 0x78);
                                  if (lVar9 == 0) goto LAB_03168190;
                                  fVar33 = fVar32 - (float)uVar16;
                                  fVar52 = fVar52 + SQRT(fVar33 * fVar33 +
                                                         (fVar30 - fVar28) * (fVar30 - fVar28) +
                                                         (fVar31 - fVar42) * (fVar31 - fVar42));
                                  fVar38 = (fVar45 / fVar48) * fVar39 + fVar38;
                                  fVar28 = 1.0;
                                  if (SQRT(fVar52 / fVar45) <= 1.0) {
                                    fVar28 = SQRT(fVar52 / fVar45);
                                  }
                                  fVar42 = fVar38 + (fVar31 - fVar38) * fVar28;
                                  uVar36 = (ulong)(uint)fVar42;
                                  FUN_0409f350(fVar30,uVar36,fVar32,lVar9,
                                               iVar25 + *(int *)(lVar9 + 0x18),
                                               *(undefined8 *)PTR_DAT_06a0b7d0);
                                  uVar16 = (ulong)(uint)fVar32;
                                  fVar28 = fVar30;
                                }
                                fVar31 = (float)iVar24;
                                iVar24 = iVar24 + 1;
                                iVar25 = iVar25 + -1;
                              } while (fVar31 <= fVar48);
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
            lVar18 = *(long *)(lVar9 + 0x10);
            lVar10 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar9 + 0x18);
            if (uVar43 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar43 + 1;
              *(undefined4 *)(lVar18 + (long)(int)uVar43 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            lVar18 = *(long *)(unaff_x26 + 0x20);
            if (lVar18 == 0) goto LAB_03168190;
            iVar24 = 1;
            while( true ) {
              fVar38 = fStack00000000000001d4;
              fVar45 = (float)uVar36;
              fVar39 = (float)uVar16;
              if (*(int *)(lVar18 + 0x18) <= iVar24) break;
              fVar28 = (float)FUN_0409f2f4(lVar18,iVar24 + -1,*(undefined8 *)puVar2);
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              fVar42 = fVar39;
              fVar48 = fVar45;
              fVar52 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar24,*(undefined8 *)puVar2)
              ;
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar45 = fVar45 - fVar48;
              uVar36 = (ulong)(uint)fVar45;
              lVar18 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              uVar16 = (ulong)(uint)(fVar45 * fVar45);
              fStack00000000000001d4 =
                   fVar38 + SQRT(fVar45 * fVar45 +
                                 (fVar28 - fVar52) * (fVar28 - fVar52) +
                                 (fVar39 - fVar42) * (fVar39 - fVar42));
              if (lVar18 == 0) goto LAB_03168190;
              uVar43 = *(uint *)(lVar9 + 0x18);
              if (uVar43 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                *(float *)(lVar18 + (long)(int)uVar43 * 4 + 0x20) = fStack00000000000001d4;
              }
              else {
                FUN_04059d64(lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 + 0x20) + 0xc0) +
                                    0x70));
              }
              lVar18 = *(long *)(unaff_x26 + 0x20);
              iVar24 = iVar24 + 1;
              if (lVar18 == 0) goto LAB_03168190;
            }
            lVar18 = *(long *)(unaff_x26 + 0x28);
            *in_stack_000000d8 = *in_stack_000000d8 + fStack00000000000001d4;
            if (lVar18 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar18 + 0x10);
            lVar11 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar18 + 0x18);
            if (uVar43 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar18 + 0x18) = uVar43 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar18,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            lVar18 = *in_stack_000000e0;
            if (lVar18 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar18 + 0x10);
            lVar11 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar18 + 0x18);
            if (uVar43 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar18 + 0x18) = uVar43 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar18,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            lVar18 = *(long *)(unaff_x26 + 0x20);
            if (lVar18 == 0) goto LAB_03168190;
            iVar24 = 0;
            while (iVar24 < *(int *)(lVar18 + 0x18)) {
              lVar18 = *(long *)(unaff_x26 + 0x28);
              fVar38 = (float)FUN_04059a68(lVar9,iVar24,*(undefined8 *)PTR_DAT_06a0a108);
              if (lVar18 == 0) goto LAB_03168190;
              lVar10 = *(long *)(lVar18 + 0x10);
              lVar11 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_03168190;
              uVar43 = *(uint *)(lVar18 + 0x18);
              if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar18 + 0x18) = uVar43 + 1;
                *(float *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = fVar38 / fStack00000000000001d4;
              }
              else {
                FUN_04059d64(lVar18,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              lVar18 = *in_stack_000000e0;
              if (lVar18 == 0) goto LAB_03168190;
              lVar10 = *(long *)(lVar18 + 0x10);
              lVar11 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_03168190;
              uVar43 = *(uint *)(lVar18 + 0x18);
              if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar18 + 0x18) = uVar43 + 1;
                *(undefined4 *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar18,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              lVar18 = *(long *)(unaff_x26 + 0x20);
              iVar24 = iVar24 + 1;
              if (lVar18 == 0) goto LAB_03168190;
            }
            iStack0000000000000108 = 4;
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            unaff_x23 = in_stack_00000148;
          }
          goto LAB_0316c620;
        }
      }
      uVar43 = *(uint *)(in_stack_00000170 + 0x18);
      in_stack_00000160._4_4_ = in_stack_00000280;
      if (uVar37 == 1) {
        if ((ulong)uVar43 < 2) goto LAB_0316f2c4;
        in_stack_00000160._4_4_ = *(float *)(lVar9 + 0x28);
        *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)pfVar20;
      }
      if (uVar43 <= unaff_x24) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      fVar38 = *(float *)(lVar18 + 0x28);
      uVar41 = *(undefined8 *)pfVar27;
      uVar44 = *(undefined8 *)pfVar20;
      fVar35 = *(float *)(lVar9 + 0x28);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar45 = (float)uVar41 - (float)uVar44;
      fVar28 = (float)((ulong)uVar41 >> 0x20) - (float)((ulong)uVar44 >> 0x20);
      fVar38 = fVar38 - fVar35;
      fVar35 = SQRT(fVar38 * fVar38 + fVar45 * fVar45 + fVar28 * fVar28);
      uVar16 = (ulong)(uint)fVar35;
      if (fVar35 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(unaff_x28);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar41 = **(undefined8 **)(*unaff_x28 + 0xb8);
        fVar38 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
      }
      else {
        fVar38 = fVar38 / fVar35;
        uVar41 = CONCAT44(fVar28 / fVar35,fVar45 / fVar35);
      }
      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
      fVar35 = *(float *)(lVar18 + 0x28);
      uVar44 = *(undefined8 *)pfVar27;
      uVar47 = *(undefined8 *)pfVar20;
      fVar45 = *(float *)(lVar9 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar28 = (float)uVar44 - (float)uVar47;
      fVar42 = (float)((ulong)uVar44 >> 0x20) - (float)((ulong)uVar47 >> 0x20);
      fVar35 = fVar35 - fVar45;
      fStack00000000000001d4 = SQRT(fVar35 * fVar35 + fVar28 * fVar28 + fVar42 * fVar42);
      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
      in_stack_00000110 = (ulong)(uint)in_stack_00000278;
      fVar45 = *pfVar27;
      fVar35 = *(float *)(lVar18 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar35 = fVar35 - in_stack_00000160._4_4_;
      fVar35 = SQRT((fVar45 - in_stack_00000278) * (fVar45 - in_stack_00000278) + fVar35 * fVar35) +
               0.0;
      fVar45 = 0.0;
      if (uVar37 != 1) {
        fVar45 = fStack000000000000010c;
      }
      uVar12 = (ulong)(uint)fVar45;
      uVar36 = uVar12;
      lVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
      FUN_040594d0(lVar10,*(undefined8 *)PTR_DAT_069ff180);
      if (fVar45 < fStack00000000000001d4 - fStack000000000000010c) {
        fVar45 = *(float *)((ulong)&stack0x00000278 | 4);
        do {
          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
          uVar44 = *(undefined8 *)pfVar27;
          fVar28 = *(float *)(lVar18 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar31 = (float)uVar12;
          fVar42 = (float)uVar41 * fVar31 + in_stack_00000278;
          fVar48 = (float)((ulong)uVar41 >> 0x20) * fVar31 + fVar45;
          uVar47 = CONCAT44(fVar48,fVar42);
          fVar52 = fVar38 * fVar31 + in_stack_00000160._4_4_;
          fVar42 = fVar42 - (float)uVar44;
          fVar48 = fVar48 - (float)((ulong)uVar44 >> 0x20);
          fVar28 = fVar52 - fVar28;
          fVar28 = SQRT(fVar28 * fVar28 + fVar42 * fVar42 + fVar48 * fVar48);
          uVar16 = (ulong)(uint)fVar28;
          if (in_stack_000000b0 < fVar28) {
            _uStack00000000000001b0 = uVar47;
            in_stack_000001b8 = fVar52;
            if (*(char *)(unaff_x23 + 0x5d6) != '\0') {
              if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_03168190;
              FUN_03199614(*(long *)(unaff_x23 + 0x20),&stack0x000001b0,0);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21)
               , lVar11 == 0)) goto LAB_03168190;
            if (*(float *)(lVar11 + 0x100) == 0.0) {
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,
                                        *unaff_x21), lVar11 == 0)) goto LAB_03168190;
              if (*(float *)(lVar11 + 0x104) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,
                                        *unaff_x21), lVar11 == 0)) goto LAB_03168190;
              if (*(float *)(lVar11 + 0x110) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,
                                        *unaff_x21), lVar11 == 0)) goto LAB_03168190;
              if (*(float *)(lVar11 + 0x114) != 0.0) goto LAB_0316a920;
              lVar11 = *in_stack_000000e0;
              if (lVar11 == 0) goto LAB_03168190;
              lVar15 = *(long *)(lVar11 + 0x10);
              lVar19 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_03168190;
              uVar43 = *(uint *)(lVar11 + 0x18);
              if (uVar43 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                *(undefined4 *)(lVar15 + (long)(int)uVar43 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar11,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316a920:
              if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
              fVar28 = *in_stack_000000d8;
              uVar44 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21);
              FUN_0316f6a0(fVar31 + fVar28,fVar39,uVar44,uVar44,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x000001b0,&stack0x00000214);
            }
            puVar2 = PTR_DAT_069fbee0;
            lVar11 = *(long *)(unaff_x26 + 0x20);
            if (lVar11 == 0) goto LAB_03168190;
            lVar15 = *(long *)(lVar11 + 0x10);
            uVar16 = (ulong)(uint)in_stack_000001b8;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar11 + 0x18);
            if (uVar43 < *(uint *)(lVar15 + 0x18)) {
              lVar15 = lVar15 + (long)(int)uVar43 * 0xc;
              *(uint *)(lVar11 + 0x18) = uVar43 + 1;
              *(undefined4 *)(lVar15 + 0x20) = uStack00000000000001b0;
              *(undefined4 *)(lVar15 + 0x24) = uStack00000000000001b4;
              *(float *)(lVar15 + 0x28) = in_stack_000001b8;
            }
            else {
              FUN_0409f624(lVar11,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar10 == 0) goto LAB_03168190;
            lVar11 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar10 + 0x18);
            if (uVar43 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar43 + 1;
              *(undefined4 *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                          );
            }
            lVar11 = *in_stack_000000b8;
            if (lVar11 == 0) goto LAB_03168190;
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar19 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar11 + 0x18);
            if (uVar43 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar43 + 1;
              *(undefined4 *)(lVar15 + (long)(int)uVar43 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar11,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *(long *)(unaff_x26 + 0x28);
            if (lVar11 == 0) goto LAB_03168190;
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar19 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar11 + 0x18);
            if (uVar43 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar43 + 1;
              *(float *)(lVar15 + (long)(int)uVar43 * 4 + 0x20) = fVar31 / fStack00000000000001d4;
            }
            else {
              FUN_04059d64(lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70)
                          );
            }
          }
          uVar36 = (ulong)(uint)fStack000000000000010c;
          uVar12 = (ulong)(uint)(fVar31 + fStack000000000000010c);
        } while (fVar31 + fStack000000000000010c < fStack00000000000001d4 - fStack000000000000010c);
      }
      fStack000000000000012c = (float)uVar16;
      fStack0000000000000128 = (float)uVar36;
      if (*(char *)(unaff_x23 + 0x5d6) == '\0') {
        if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
        lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                              *(undefined8 *)PTR_DAT_06a0b440);
        fStack000000000000012c = (float)uVar16;
        fStack0000000000000128 = (float)uVar36;
        if (lVar11 == 0) goto LAB_03168190;
        if (*(int *)(lVar11 + 0x6c) == 1) {
          if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
          iVar24 = 0;
          puVar26 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
          lVar11 = *(long *)(unaff_x26 + 0x28);
          while( true ) {
            fStack000000000000012c = (float)uVar16;
            fStack0000000000000128 = (float)uVar36;
            if (*(int *)(lVar11 + 0x18) <= iVar24) break;
            uVar16 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
            if ((((uVar16 <= unaff_x20) || (uVar16 <= uVar37)) || (uVar16 <= unaff_x24)) ||
               (uVar16 <= uVar37 + 2)) goto LAB_0316f2c4;
            uVar40 = *puVar26;
            fVar38 = (float)puVar26[1];
            uVar43 = puVar26[2];
            fVar39 = *pfVar20;
            uVar49 = *(undefined4 *)(lVar9 + 0x24);
            uVar53 = *(undefined4 *)(lVar9 + 0x28);
            FUN_04059a68(lVar11,iVar24,*(undefined8 *)PTR_DAT_06a0a108);
            FUN_0316f340(uVar40,fVar38,uVar43,fVar39,uVar49,uVar53);
            unaff_x26 = &stack0x00000218;
            if (((in_stack_00000238 == 0) ||
                (uVar40 = FUN_0409f2f4(in_stack_00000238,iVar24,*(undefined8 *)PTR_DAT_069fd088),
                lVar10 == 0)) ||
               (fVar39 = (float)FUN_04059a68(lVar10,iVar24,*(undefined8 *)PTR_DAT_06a0a108),
               in_stack_00000238 == 0)) goto LAB_03168190;
            uVar36 = (ulong)(uint)(fVar38 + fVar39);
            uVar16 = (ulong)uVar43;
            FUN_0409f350(uVar40,in_stack_00000238,iVar24,*(undefined8 *)PTR_DAT_06a0b7d0);
            iVar24 = iVar24 + 1;
            lVar11 = in_stack_00000240;
            if (in_stack_00000240 == 0) goto LAB_03168190;
          }
        }
      }
      puVar2 = PTR_DAT_069fbee0;
      lVar9 = *(long *)(unaff_x26 + 0x20);
      if (lVar9 == 0) goto LAB_03168190;
      if (*(int *)(lVar9 + 0x18) == 0) {
        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
        lVar10 = *(long *)(lVar9 + 0x10);
        fVar38 = *pfVar27;
        uVar40 = *(undefined4 *)(lVar18 + 0x24);
        uVar49 = *(undefined4 *)(lVar18 + 0x28);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_03168190;
        if (*(int *)(lVar10 + 0x18) == 0) {
          FUN_0409f624(lVar9,*(undefined8 *)
                              (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar9 + 0x18) = 1;
          *(float *)(lVar10 + 0x20) = fVar38;
          *(undefined4 *)(lVar10 + 0x24) = uVar40;
          *(undefined4 *)(lVar10 + 0x28) = uVar49;
        }
        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
        fVar39 = *pfVar27;
        fVar38 = *(float *)(lVar18 + 0x24);
        fStack000000000000012c = *(float *)(lVar18 + 0x28);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar38 = in_stack_0000027c - fVar38;
        lVar9 = *(long *)(unaff_x26 + 0x28);
        fStack000000000000012c = in_stack_00000160._4_4_ - fStack000000000000012c;
        fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
        fStack00000000000001d4 =
             SQRT(fStack0000000000000128 +
                  (in_stack_00000278 - fVar39) * (in_stack_00000278 - fVar39) + fVar38 * fVar38);
        if (lVar9 == 0) goto LAB_03168190;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_03168190;
        uVar43 = *(uint *)(lVar9 + 0x18);
        if (uVar43 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar43 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = 0x3f800000;
        }
        else {
          FUN_04059d64(0x3f800000,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = *in_stack_000000e0;
        if (lVar9 == 0) goto LAB_03168190;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_03168190;
        uVar43 = *(uint *)(lVar9 + 0x18);
        if (uVar43 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar43 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = 0;
        }
        else {
          FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = *in_stack_000000b8;
        if (lVar9 == 0) goto LAB_03168190;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_03168190;
        uVar43 = *(uint *)(lVar9 + 0x18);
        if (uVar43 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar43 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = 0;
        }
        else {
          FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      puVar2 = PTR_DAT_069fd088;
      unaff_x28 = (long *)PTR_DAT_069fb978;
      lVar9 = *(long *)(unaff_x26 + 0x20);
      if (lVar9 == 0) goto LAB_03168190;
      unaff_x29 = &PTR_FUN_06db4000;
      if (0 < *(int *)(lVar9 + 0x18)) {
        fVar38 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088);
        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
        fVar39 = fStack0000000000000128 - *(float *)(lVar18 + 0x24);
        fStack000000000000012c = fStack000000000000012c - *(float *)(lVar18 + 0x28);
        fStack0000000000000128 = fStack00000000000000a4;
        if (fStack00000000000000a4 <=
            fStack000000000000012c * fStack000000000000012c +
            (fVar38 - *pfVar27) * (fVar38 - *pfVar27) + fVar39 * fVar39) {
          lVar9 = *(long *)(unaff_x26 + 0x20);
          if (lVar9 == 0) goto LAB_03168190;
          fVar38 = fStack00000000000000a4;
          fVar39 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
          fVar45 = *pfVar27;
          fVar42 = *(float *)(lVar18 + 0x24);
          fVar28 = *(float *)(lVar18 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          puVar3 = PTR_DAT_069fbee0;
          fVar38 = fVar38 - fVar42;
          lVar9 = *(long *)(unaff_x26 + 0x20);
          fStack000000000000012c = fStack000000000000012c - fVar28;
          if (in_stack_000000b0 <=
              SQRT(fStack000000000000012c * fStack000000000000012c +
                   (fVar39 - fVar45) * (fVar39 - fVar45) + fVar38 * fVar38)) {
            if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            fVar38 = *pfVar27;
            fVar39 = *(float *)(lVar18 + 0x24);
            fStack000000000000012c = *(float *)(lVar18 + 0x28);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar9 + 0x18);
            if (uVar43 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + (long)(int)uVar43 * 0xc;
              *(uint *)(lVar9 + 0x18) = uVar43 + 1;
              *(float *)(lVar10 + 0x20) = fVar38;
              *(float *)(lVar10 + 0x24) = fVar39;
              *(float *)(lVar10 + 0x28) = fStack000000000000012c;
            }
            else {
              FUN_0409f624(lVar9,*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
            }
            fVar38 = fStack00000000000001d4;
            lVar9 = *(long *)(unaff_x26 + 0x20);
            if (lVar9 == 0) goto LAB_03168190;
            fVar45 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
            if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
            fVar28 = *pfVar27;
            fVar48 = *(float *)(lVar18 + 0x24);
            fVar42 = *(float *)(lVar18 + 0x28);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar39 = fVar39 - fVar48;
            lVar9 = *(long *)(unaff_x26 + 0x28);
            fStack000000000000012c = fStack000000000000012c - fVar42;
            fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
            fStack00000000000001d4 =
                 fVar38 + SQRT(fStack0000000000000128 +
                               (fVar45 - fVar28) * (fVar45 - fVar28) + fVar39 * fVar39);
            if (lVar9 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar9 + 0x10);
            lVar10 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar9 + 0x18);
            if (uVar43 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar43 + 1;
              *(undefined4 *)(lVar18 + (long)(int)uVar43 * 4 + 0x20) = 0x3f800000;
            }
            else {
              FUN_04059d64(0x3f800000,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            lVar9 = *in_stack_000000e0;
            if (lVar9 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar9 + 0x10);
            lVar10 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar43 = *(uint *)(lVar9 + 0x18);
            if (uVar43 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar43 + 1;
              *(undefined4 *)(lVar18 + (long)(int)uVar43 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            if (lVar9 == 0) goto LAB_03168190;
            if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
            fStack000000000000012c = *(float *)(lVar18 + 0x28);
            fStack0000000000000128 = *(float *)(lVar18 + 0x24);
            FUN_0409f350(*pfVar27,lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_06a0b7d0)
            ;
            lVar9 = *(long *)(unaff_x26 + 0x28);
            if (lVar9 == 0) goto LAB_03168190;
            FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,
                         *(undefined8 *)PTR_DAT_06a0b5c0);
          }
        }
      }
      lVar9 = *(long *)(unaff_x26 + 0x20);
      if (lVar9 == 0) goto LAB_03168190;
      iVar24 = *(int *)(lVar9 + 0x18);
      in_stack_00000278 = (float)FUN_0409f2f4(lVar9,iVar24 + -1,*(undefined8 *)PTR_DAT_069fd088);
      lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
      *(float *)(in_stack_00000148 + 0x2c0) =
           *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
      if (lVar9 == 0) goto LAB_03168190;
      lVar18 = *(long *)(lVar9 + 0x10);
      lVar10 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_03168190;
      uVar43 = *(uint *)(lVar9 + 0x18);
      iStack00000000000000d4 = iVar24 + iStack00000000000000d4;
      if (uVar43 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar43 + 1;
        *(int *)(lVar18 + (long)(int)uVar43 * 4 + 0x20) = iStack00000000000000d4;
      }
      else {
        FUN_03fb3e1c(lVar9,iStack00000000000000d4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
         (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21
                              ), lVar9 == 0)) goto LAB_03168190;
      iStack0000000000000108 = *(int *)(lVar9 + 0x6c);
      unaff_x23 = in_stack_00000148;
      in_stack_0000027c = fStack0000000000000128;
      in_stack_00000280 = fStack000000000000012c;
      in_stack_00000130 = in_stack_00000278;
    }
LAB_0316c620:
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
       fVar38 = fStack00000000000001d4, lVar9 == 0)) goto LAB_03168190;
    if (*(char *)(lVar9 + 0xb8) != '\0') {
      if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
      uVar41 = *(undefined8 *)(unaff_x23 + 0x20);
      uVar44 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar40 = *(undefined4 *)(unaff_x23 + 0x128);
      lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar37 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_06a0b440);
      if (lVar9 == 0) goto LAB_03168190;
      FUN_031098f4(uVar40,uStack000000000000006c,fVar38,uVar41,&stack0x00000238,uVar44,
                   &stack0x00000248,*(undefined1 *)(lVar9 + 0xb8),*(undefined8 *)(unaff_x26 + 0x78),
                   in_stack_00000070,in_stack_000000e0);
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      unaff_x23 = in_stack_00000148;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    FUN_0409f858(*(long *)(unaff_x26 + 0x78),*(undefined8 *)(unaff_x26 + 0x20),
                 *(undefined8 *)PTR_DAT_06a0b3a0);
    if (*in_stack_00000078 == 0) goto LAB_03168190;
    FUN_04059f70(*in_stack_00000078,*(undefined8 *)(unaff_x26 + 0x28),
                 *(undefined8 *)PTR_DAT_06a0b3d8);
    fVar39 = fStack0000000000000088;
    fVar38 = in_stack_00000080._4_4_;
    FUN_0316fb80(fStack000000000000008c,unaff_x23,extraout_x1,uVar37 & 0xffffffff,in_stack_00000170,
                 &stack0x00000268,0,*(undefined8 *)(unaff_x26 + 0x78));
    if (iVar22 + 3 < *(int *)(in_stack_00000170 + 0x18)) {
      FUN_0317018c(unaff_x23,*(undefined8 *)(unaff_x23 + 0x68),uVar37 & 0xffffffff,in_stack_00000170
                   ,&stack0x00000258,0);
    }
    puVar3 = PTR_DAT_069ff178;
    puVar2 = PTR_DAT_069fd088;
    lVar9 = *in_stack_00000090;
    if (lVar9 == 0) goto LAB_03168190;
    lVar18 = *(long *)(lVar9 + 0x10);
    fVar45 = *in_stack_000000d8;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar18 == 0) goto LAB_03168190;
    uVar43 = *(uint *)(lVar9 + 0x18);
    if (uVar43 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar43 + 1;
      *(float *)(lVar18 + (long)(int)uVar43 * 4 + 0x20) = fVar45;
    }
    else {
      FUN_04059d64(lVar9,*(undefined8 *)(*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70)
                  );
    }
    if ((long)uVar37 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar9 = FUN_0400ff1c(in_stack_00000098,uVar37 & 0xffffffff,*unaff_x21);
      lVar18 = FUN_0400ff1c(in_stack_00000098,uVar37 & 0xffffffff,*unaff_x21);
      lVar10 = *(long *)(unaff_x26 + 0x78);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar45 = (float)FUN_0409f2f4(lVar10,*(int *)(lVar10 + 0x18) + -1,*(undefined8 *)puVar2);
      lVar10 = *(long *)(unaff_x26 + 0x78);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar28 = fVar39;
      fVar42 = fVar38;
      fVar48 = (float)FUN_0409f2f4(lVar10,*(int *)(lVar10 + 0x18) + -2,*(undefined8 *)puVar2);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar45 = fVar45 - fVar48;
      fVar39 = fVar39 - fVar28;
      fVar38 = fVar38 - fVar42;
      fVar28 = SQRT(fVar38 * fVar38 + fVar45 * fVar45 + fVar39 * fVar39);
      if (fVar28 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(unaff_x28);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        pfVar20 = *(float **)(*unaff_x28 + 0xb8);
        fVar45 = *pfVar20;
        fVar39 = pfVar20[1];
        fVar38 = pfVar20[2];
      }
      else {
        fVar45 = fVar45 / fVar28;
        fVar39 = fVar39 / fVar28;
        fVar38 = fVar38 / fVar28;
      }
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar18 + 0x94) = fVar45;
      *(float *)(lVar18 + 0x98) = fVar39;
      *(float *)(lVar18 + 0x9c) = fVar38;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar9 + 0x88) = fVar45;
      *(float *)(lVar9 + 0x8c) = fVar39;
      *(float *)(lVar9 + 0x90) = fVar38;
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      unaff_x23 = in_stack_00000148;
    }
    if (uVar37 < 2) {
      if (uVar37 == 1) {
        lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
        lVar18 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar45 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar28 = fVar39;
        fVar42 = fVar38;
        fVar48 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar45 = fVar45 - fVar48;
        fVar39 = fVar39 - fVar28;
        fVar38 = fVar38 - fVar42;
        fVar28 = SQRT(fVar38 * fVar38 + fVar45 * fVar45 + fVar39 * fVar39);
        if (fVar28 <= DAT_010fd13c) {
          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
            FUN_02d965b8(unaff_x28);
            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
          }
          pfVar20 = *(float **)(*unaff_x28 + 0xb8);
          fVar45 = *pfVar20;
          fVar39 = pfVar20[1];
          fVar38 = pfVar20[2];
        }
        else {
          fVar45 = fVar45 / fVar28;
          fVar39 = fVar39 / fVar28;
          fVar38 = fVar38 / fVar28;
        }
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar18 + 0x94) = fVar45;
        *(float *)(lVar18 + 0x98) = fVar39;
        *(float *)(lVar18 + 0x9c) = fVar38;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar9 + 0x88) = fVar45;
        *(float *)(lVar9 + 0x8c) = fVar39;
        *(float *)(lVar9 + 0x90) = fVar38;
      }
    }
    else if ((long)uVar37 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar22 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
      puVar2 = PTR_DAT_069fd088;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar9 + 0xbc) + 1 < iVar22) {
        lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(int *)(lVar9 + 0x6c) != 3) {
          lVar18 = *(long *)(unaff_x26 + 0x78);
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar42 = (float)FUN_0409f2f4(lVar18,*(int *)(lVar9 + 0xbc) + 1,*(undefined8 *)puVar2);
          lVar18 = *(long *)(unaff_x26 + 0x78);
          fVar45 = fVar39;
          fVar28 = fVar38;
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar48 = (float)FUN_0409f2f4(lVar18,*(undefined4 *)(lVar9 + 0xbc),*(undefined8 *)puVar2);
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar52 = DAT_010fd13c;
          fVar42 = fVar42 - fVar48;
          fVar48 = fVar39 - fVar45;
          fVar28 = fVar38 - fVar28;
          fVar38 = SQRT(fVar28 * fVar28 + fVar42 * fVar42 + fVar48 * fVar48);
          if (fVar38 <= DAT_010fd13c) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(unaff_x28);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            pfVar20 = *(float **)(*unaff_x28 + 0xb8);
            fVar31 = *pfVar20;
            fVar48 = pfVar20[1];
            fVar38 = pfVar20[2];
          }
          else {
            fVar31 = fVar42 / fVar38;
            fVar48 = fVar48 / fVar38;
            fVar38 = fVar28 / fVar38;
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(float *)(lVar9 + 0x88) = fVar31;
          *(float *)(lVar9 + 0x8c) = fVar48;
          uVar41 = *unaff_x21;
          *(float *)(lVar9 + 0x90) = fVar38;
          uVar43 = *(uint *)(in_stack_00000098 + 0x18);
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar41);
          if (uVar37 != uVar43) {
            fVar39 = fVar45;
          }
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar39 = fVar39 - fVar45;
          fVar45 = SQRT(fVar28 * fVar28 + fVar42 * fVar42 + fVar39 * fVar39);
          if (fVar45 <= fVar52) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(unaff_x28);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            uVar41 = **(undefined8 **)(*unaff_x28 + 0xb8);
            fVar28 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
          }
          else {
            fVar28 = fVar28 / fVar45;
            uVar41 = CONCAT44(fVar39 / fVar45,fVar42 / fVar45);
            fVar38 = fVar42;
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(undefined8 *)(lVar9 + 0x94) = uVar41;
          *(float *)(lVar9 + 0x9c) = fVar28;
        }
      }
    }
    if ((long)uVar37 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar9 = FUN_0400ff1c(in_stack_00000098,uVar37 & 0xffffffff,*unaff_x21);
      lVar18 = FUN_0400ff1c(in_stack_00000098,uVar37 & 0xffffffff,*unaff_x21);
      if ((lVar18 == 0) || (lVar9 == 0)) goto LAB_03168190;
      uVar41 = *(undefined8 *)(lVar18 + 0x48);
      *(undefined4 *)(lVar9 + 0x5c) = *(undefined4 *)(lVar18 + 0x50);
      *(undefined8 *)(lVar9 + 0x54) = uVar41;
    }
    if ((long)(*(int *)(in_stack_00000170 + 0x18) + -2) <= (long)unaff_x24) {
      if (*(char *)(unaff_x23 + 0x84) == '\0') {
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
        uVar41 = *unaff_x21;
        *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar41);
        if (lVar9 == 0) goto LAB_03168190;
        uVar41 = *unaff_x21;
        *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar41);
        if (lVar9 == 0) goto LAB_03168190;
        uVar41 = *unaff_x21;
        *(undefined4 *)(lVar9 + 0xbc) = 0;
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar41);
        if (lVar9 == 0) goto LAB_03168190;
        *(undefined4 *)(lVar9 + 0xc0) = 0;
        if (2 < *(int *)(in_stack_00000098 + 0x18)) {
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
          ;
          fVar38 = *in_stack_000000d8;
          lVar18 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21
                               );
          if ((lVar18 == 0) || (lVar9 == 0)) goto LAB_03168190;
          uVar41 = *unaff_x21;
          *(float *)(lVar9 + 200) = fVar38 - *(float *)(lVar18 + 0xc0);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,uVar41);
          if (lVar9 == 0) goto LAB_03168190;
          fVar38 = *(float *)(lVar9 + 200);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
          ;
          lVar18 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21
                               );
          if (1000.0 <= fVar38) {
            if (lVar18 == 0) goto LAB_03168190;
            fStack00000000000001d0 = *(float *)(lVar18 + 200) / 1000.0;
            uVar41 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
            uVar41 = FUN_05362cb4(uVar41,*(undefined8 *)PTR_DAT_06a0c488,0);
          }
          else {
            if (lVar18 == 0) goto LAB_03168190;
            uVar41 = FUN_054fad00(lVar18 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
            uVar41 = FUN_05362cb4(uVar41,*(undefined8 *)PTR_DAT_06a0c4f0,0);
          }
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0xd0) = uVar41;
            LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar41);
            lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                 *unaff_x21);
            if (lVar9 != 0) {
              fVar39 = *(float *)(lVar9 + 0x4c);
              lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                   *unaff_x21);
              if (lVar9 != 0) {
                fVar45 = *(float *)(lVar9 + 0x4c);
                fVar38 = fVar39 - fVar45;
                if (DAT_06db4ece == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4ece = '\x01';
                }
                puVar2 = PTR_DAT_069fbb48;
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar42 = 0.0;
                fVar28 = SQRT((fVar35 * fVar35 + fVar38 * fVar38) * DAT_010fd194);
                fVar38 = DAT_010fcd14;
                if (DAT_010fcd14 <= fVar28) {
                  fVar38 = -1.0;
                  fVar28 = (fVar35 * 0.0 + ABS(fVar39 - fVar45) * 50.0 + 0.0) / fVar28;
                  fVar35 = 1.0;
                  if (fVar28 <= 1.0) {
                    fVar35 = fVar28;
                  }
                  fVar39 = -1.0;
                  if (-1.0 <= fVar28) {
                    fVar39 = fVar35;
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    fVar38 = -1.0;
                    thunk_FUN_02df485c();
                  }
                  dVar34 = acos((double)fVar39);
                  fVar42 = (float)dVar34 * DAT_010fcf40;
                }
                fVar42 = 90.0 - fVar42;
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                if (fVar42 <= 10.0) {
                  uVar41 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
                }
                else {
                  dVar34 = modf((double)fVar42,(double *)&stack0x00000298);
                  if (0.0 <= fVar42) {
                    if (dVar34 == 0.5) {
                      dVar34 = *(double *)(unaff_x26 + 0x80);
                      fVar38 = 1.0;
                      goto LAB_0316e5fc;
                    }
                    fStack00000000000001d0 = (float)(int)(fVar42 + 0.5);
                  }
                  else if (dVar34 == -0.5) {
                    dVar34 = *(double *)(unaff_x26 + 0x80);
                    fVar38 = -1.0;
LAB_0316e5fc:
                    fStack00000000000001d0 = (float)dVar34;
                    if (((long)dVar34 & 1U) != 0) {
                      fStack00000000000001d0 = (float)dVar34 + fVar38;
                    }
                  }
                  else {
                    fStack00000000000001d0 = (float)(int)(fVar42 + -0.5);
                  }
                  uVar41 = FUN_054fabf8(&stack0x000001d0,0);
                }
                if (lVar9 != 0) {
                  *(undefined8 *)(lVar9 + 0xd8) = uVar41;
                  LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar41);
                  lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                       *unaff_x21);
                  if (lVar9 != 0) {
                    fVar35 = *(float *)(lVar9 + 0x4c);
                    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                         *unaff_x21);
                    if (lVar9 != 0) {
                      fVar39 = *(float *)(lVar9 + 0x4c);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2
                                           ,*unaff_x21);
                      if (lVar9 != 0) {
                        fVar45 = *(float *)(lVar9 + 0x48);
                        lVar9 = FUN_0400ff1c(in_stack_00000098,
                                             *(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21);
                        if (lVar9 != 0) {
                          fVar28 = *(float *)(lVar9 + 0x50);
                          lVar9 = FUN_0400ff1c(in_stack_00000098,
                                               *(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
                          if (lVar9 != 0) {
                            fVar42 = *(float *)(lVar9 + 0x48);
                            lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                 *(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
                            ;
                            if (lVar9 != 0) {
                              fVar48 = *(float *)(lVar9 + 0x50);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar28 = fVar28 - fVar48;
                              fVar45 = fVar45 - fVar42;
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -2,
                                                   *unaff_x21);
                              fStack00000000000001d0 =
                                   (ABS(fVar35 - fVar39) / SQRT(fVar45 * fVar45 + fVar28 * fVar28))
                                   * 100.0;
                              uVar41 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498
                                                    ,0);
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
        uVar41 = *unaff_x21;
        *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar41);
        if (lVar9 == 0) goto LAB_03168190;
        *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
        if (2 < *(int *)(in_stack_00000098 + 0x18)) {
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          fVar38 = *in_stack_000000d8;
          lVar18 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21
                               );
          if ((lVar18 == 0) || (lVar9 == 0)) goto LAB_03168190;
          uVar41 = *unaff_x21;
          *(float *)(lVar9 + 200) = fVar38 - *(float *)(lVar18 + 0xc0);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar41);
          if (lVar9 == 0) goto LAB_03168190;
          fVar38 = *(float *)(lVar9 + 200);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          lVar18 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21
                               );
          if (1000.0 <= fVar38) {
            if (lVar18 == 0) goto LAB_03168190;
            fStack00000000000001d0 = *(float *)(lVar18 + 200) / 1000.0;
            uVar41 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
            uVar41 = FUN_05362cb4(uVar41,*(undefined8 *)PTR_DAT_06a0c488,0);
          }
          else {
            if (lVar18 == 0) goto LAB_03168190;
            uVar41 = FUN_054fad00(lVar18 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
            uVar41 = FUN_05362cb4(uVar41,*(undefined8 *)PTR_DAT_06a0c4f0,0);
          }
          if (lVar9 == 0) goto LAB_03168190;
          *(undefined8 *)(lVar9 + 0xd0) = uVar41;
          LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar41);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar39 = *(float *)(lVar9 + 0x4c);
          lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
          if (lVar9 == 0) goto LAB_03168190;
          fVar45 = *(float *)(lVar9 + 0x4c);
          fVar38 = fVar39 - fVar45;
          if (DAT_06db4ece == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4ece = '\x01';
          }
          puVar2 = PTR_DAT_069fbb48;
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar42 = 0.0;
          fVar28 = SQRT((fVar35 * fVar35 + fVar38 * fVar38) * DAT_010fd194);
          fVar38 = DAT_010fcd14;
          if (DAT_010fcd14 <= fVar28) {
            fVar38 = -1.0;
            fVar28 = (fVar35 * 0.0 + ABS(fVar39 - fVar45) * 50.0 + 0.0) / fVar28;
            fVar35 = 1.0;
            if (fVar28 <= 1.0) {
              fVar35 = fVar28;
            }
            fVar39 = -1.0;
            if (-1.0 <= fVar28) {
              fVar39 = fVar35;
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              fVar38 = -1.0;
              thunk_FUN_02df485c();
            }
            dVar34 = acos((double)fVar39);
            fVar42 = (float)dVar34 * DAT_010fcf40;
          }
          fVar42 = 90.0 - fVar42;
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          if (fVar42 <= 10.0) {
            uVar41 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
          }
          else {
            dVar34 = modf((double)fVar42,(double *)&stack0x00000298);
            if (0.0 <= fVar42) {
              if (dVar34 == 0.5) {
                dVar34 = *(double *)(unaff_x26 + 0x80);
                fVar38 = 1.0;
                goto LAB_0316e5d0;
              }
              fStack00000000000001d0 = (float)(int)(fVar42 + 0.5);
            }
            else if (dVar34 == -0.5) {
              dVar34 = *(double *)(unaff_x26 + 0x80);
              fVar38 = -1.0;
LAB_0316e5d0:
              fStack00000000000001d0 = (float)dVar34;
              if (((long)dVar34 & 1U) != 0) {
                fStack00000000000001d0 = (float)dVar34 + fVar38;
              }
            }
            else {
              fStack00000000000001d0 = (float)(int)(fVar42 + -0.5);
            }
            uVar41 = FUN_054fabf8(&stack0x000001d0,0);
          }
          if (lVar9 == 0) goto LAB_03168190;
          *(undefined8 *)(lVar9 + 0xd8) = uVar41;
          LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar41);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar35 = *(float *)(lVar9 + 0x4c);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar39 = *(float *)(lVar9 + 0x4c);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar45 = *(float *)(lVar9 + 0x48);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar28 = *(float *)(lVar9 + 0x50);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar42 = *(float *)(lVar9 + 0x48);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar48 = *(float *)(lVar9 + 0x50);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar28 = fVar28 - fVar48;
          fVar45 = fVar45 - fVar42;
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          fStack00000000000001d0 =
               (ABS(fVar35 - fVar39) / SQRT(fVar45 * fVar45 + fVar28 * fVar28)) * 100.0;
          uVar41 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
          if (lVar9 == 0) goto LAB_03168190;
LAB_0316ea58:
          *(undefined8 *)(lVar9 + 0xe0) = uVar41;
          LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar41);
        }
      }
      fVar35 = 1000.0;
      if (1000.0 <= *in_stack_000000d8) {
        fVar35 = 1000.0;
        fStack00000000000001d0 = *in_stack_000000d8 / 1000.0;
        uVar41 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        puVar14 = (undefined8 *)PTR_DAT_06a0c488;
      }
      else {
        uVar41 = FUN_054fad00(in_stack_000000d8,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar14 = (undefined8 *)PTR_DAT_06a0c4f0;
      }
      uVar41 = FUN_05362cb4(uVar41,*puVar14,0);
      *(undefined8 *)(unaff_x23 + 0x2d0) = uVar41;
      LeanTween__value(unaff_x23 + 0x2d0,uVar41);
      if (*(int *)(in_stack_00000098 + 0x18) == 2) {
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        fVar39 = *(float *)(lVar9 + 200);
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        lVar18 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if (1000.0 <= fVar39) {
          if (lVar18 == 0) goto LAB_03168190;
          fVar35 = 1000.0;
          fStack00000000000001d0 = *(float *)(lVar18 + 200) / 1000.0;
          uVar41 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
          uVar41 = FUN_05362cb4(uVar41,*(undefined8 *)PTR_DAT_06a0c488,0);
        }
        else {
          if (lVar18 == 0) goto LAB_03168190;
          uVar41 = FUN_054fad00(lVar18 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
          uVar41 = FUN_05362cb4(uVar41,*(undefined8 *)PTR_DAT_06a0c4f0,0);
        }
        if (lVar9 == 0) goto LAB_03168190;
        *(undefined8 *)(lVar9 + 0xd0) = uVar41;
        LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar41);
      }
      if (*(char *)(unaff_x23 + 0x84) == '\0') {
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
        LeanTween__value();
      }
      puVar3 = PTR_DAT_06a0b440;
      puVar2 = PTR_DAT_069fd088;
      fVar39 = fVar35;
      if (iStack0000000000000058 == 0) goto LAB_0316ee54;
      if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
      fVar45 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)PTR_DAT_069fd088);
      if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
      FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
      lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar3);
      puVar4 = PTR_DAT_06a0b7d0;
      puVar3 = PTR_DAT_069fbb48;
      if (lVar9 == 0) goto LAB_03168190;
      lVar18 = *(long *)(unaff_x26 + 0x78);
      fVar39 = *(float *)(lVar9 + 200) * 0.5;
      fVar28 = 5.0;
      if (fVar39 <= 5.0) {
        fVar28 = fVar39;
      }
      if (lVar18 == 0) goto LAB_03168190;
      uVar16 = (ulong)(uint)fStack0000000000000054;
      iVar22 = 1;
      fVar45 = fStack0000000000000050 * 10.0 + fVar45;
      uVar37 = (ulong)(uint)fVar45;
      fVar42 = fStack0000000000000054 * 10.0 + fVar38;
      fVar48 = 0.0;
      goto LAB_0316ecc4;
    }
    fStack00000000000001d4 = 0.0;
    lVar9 = FUN_0400ff1c(in_stack_00000098,uVar37 & 0xffffffff,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
    uVar41 = *unaff_x21;
    *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar9 = FUN_0400ff1c(in_stack_00000098,uVar37 & 0xffffffff,uVar41);
    if (lVar9 == 0) goto LAB_03168190;
    *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
    unaff_x20 = uVar37;
    if (1 < unaff_x24) goto code_r0x03169d90;
    goto LAB_0316a33c;
  }
  goto LAB_03168190;
  while( true ) {
    fVar31 = fVar39;
    fVar32 = fVar38;
    fVar30 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar22,*(undefined8 *)puVar2);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(puVar3);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar31 = fVar39 - fVar31;
    fVar38 = fVar38 - fVar32;
    fVar39 = fVar38 * fVar38;
    fVar48 = fVar48 + SQRT(fVar39 + (fVar52 - fVar30) * (fVar52 - fVar30) + fVar31 * fVar31);
    if (fVar28 < fVar48) goto LAB_0316ee54;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar40 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar22,*(undefined8 *)puVar2);
    fVar39 = (float)FUN_031765b0(uVar40,fVar39,fVar38,fVar45,fVar35,fVar42,0);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    fVar31 = fVar38;
    fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar22,*(undefined8 *)puVar2);
    fVar30 = fVar48 / fVar28;
    fVar52 = 1.0;
    if (fVar30 <= 1.0) {
      fVar52 = fVar30;
    }
    uVar37 = (ulong)(uint)fVar52;
    fVar33 = 0.0;
    if (0.0 <= fVar30) {
      fVar33 = fVar52;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar22,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar16 = (ulong)(uint)(fVar38 + fVar33 * (fVar31 - fVar38));
    FUN_0409f350(fVar39 + fVar33 * (fVar32 - fVar39),*(long *)(unaff_x26 + 0x78),iVar22,
                 *(undefined8 *)puVar4);
    lVar18 = *(long *)(unaff_x26 + 0x78);
    iVar22 = iVar22 + 1;
    if (lVar18 == 0) break;
LAB_0316ecc4:
    fVar38 = (float)uVar16;
    fVar39 = (float)uVar37;
    if (*(int *)(lVar18 + 0x18) <= iVar22) goto LAB_0316ee54;
    fVar52 = (float)FUN_0409f2f4(lVar18,iVar22 + -1,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
  }
  goto LAB_03168190;
code_r0x03169d90:
  if (unaff_x24 == 2) {
    lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
    if (lVar9 == 0) goto LAB_03168190;
    iVar22 = 0;
    fVar38 = *in_stack_000000d8;
  }
  else {
    iVar22 = (int)unaff_x24 + -2;
    lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*unaff_x21);
    fVar38 = *in_stack_000000d8;
    lVar18 = FUN_0400ff1c(in_stack_00000098,iVar22,*unaff_x21);
    if ((lVar18 == 0) || (lVar9 == 0)) goto LAB_03168190;
    fVar38 = fVar38 - *(float *)(lVar18 + 0xc0);
  }
  puVar2 = PTR_DAT_06a0b440;
  *(float *)(lVar9 + 200) = fVar38;
  lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)puVar2);
  if (lVar9 == 0) goto LAB_03168190;
  fVar38 = *(float *)(lVar9 + 200);
  lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)puVar2);
  lVar18 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)puVar2);
  if (1000.0 <= fVar38) {
    if (lVar18 == 0) goto LAB_03168190;
    fStack00000000000001d0 = *(float *)(lVar18 + 200) / 1000.0;
    uVar41 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
    puVar14 = (undefined8 *)PTR_DAT_06a0c488;
  }
  else {
    if (lVar18 == 0) goto LAB_03168190;
    uVar41 = FUN_054fad00(lVar18 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
    puVar14 = (undefined8 *)PTR_DAT_06a0c4f0;
  }
  uVar41 = FUN_05362cb4(uVar41,*puVar14,0);
  if (lVar9 == 0) goto LAB_03168190;
  *(undefined8 *)(lVar9 + 0xd0) = uVar41;
  LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar41);
  puVar2 = PTR_DAT_06a0b440;
  lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)PTR_DAT_06a0b440);
  if (lVar9 == 0) goto LAB_03168190;
  fVar38 = *(float *)(lVar9 + 0x4c);
  lVar9 = FUN_0400ff1c(in_stack_00000098,uVar37 & 0xffffffff,*(undefined8 *)puVar2);
  if (lVar9 == 0) goto LAB_03168190;
  fVar39 = *(float *)(lVar9 + 0x4c);
  if (DAT_06db4ece == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06db4ece = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  fVar45 = fVar38 - fVar39;
  param_3 = (ulong)(uint)DAT_010fcd14;
  fVar28 = 0.0;
  fVar45 = SQRT((fVar35 * fVar35 + fVar45 * fVar45) * DAT_010fd194);
  if (DAT_010fcd14 <= fVar45) {
    param_3 = 0xbf800000;
    fVar45 = (fVar35 * 0.0 + ABS(fVar38 - fVar39) * 50.0 + 0.0) / fVar45;
    fVar35 = 1.0;
    if (fVar45 <= 1.0) {
      fVar35 = fVar45;
    }
    fVar38 = -1.0;
    if (-1.0 <= fVar45) {
      fVar38 = fVar35;
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    dVar34 = acos((double)fVar38);
    fVar28 = (float)dVar34 * DAT_010fcf40;
  }
  fVar28 = 90.0 - fVar28;
  lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)puVar2);
  if (fVar28 <= 10.0) {
    uVar41 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
    unaff_x19 = (undefined8 *)PTR_DAT_069fd088;
    goto joined_r0x0316a074;
  }
  dVar34 = modf((double)fVar28,(double *)&stack0x00000298);
  unaff_x19 = (undefined8 *)PTR_DAT_069fd088;
  if (0.0 <= fVar28) {
    if (dVar34 == 0.5) {
      dVar34 = *(double *)(unaff_x26 + 0x80);
      fVar35 = 1.0;
      goto LAB_0316a098;
    }
    fStack00000000000001d0 = (float)(int)(fVar28 + 0.5);
  }
  else if (dVar34 == -0.5) {
    dVar34 = *(double *)(unaff_x26 + 0x80);
    fVar35 = -1.0;
LAB_0316a098:
    fStack00000000000001d0 = (float)dVar34;
    if (((long)dVar34 & 1U) != 0) {
      fStack00000000000001d0 = (float)dVar34 + fVar35;
    }
  }
  else {
    fStack00000000000001d0 = (float)(int)(fVar28 + -0.5);
  }
  uVar41 = FUN_054fabf8(&stack0x000001d0,0);
joined_r0x0316a074:
  if (lVar9 == 0) goto LAB_03168190;
  *(undefined8 *)(lVar9 + 0xd8) = uVar41;
  LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar41);
  unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
  lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)PTR_DAT_06a0b440);
  if (lVar9 == 0) goto LAB_03168190;
  fVar35 = *(float *)(lVar9 + 0x4c);
  lVar9 = FUN_0400ff1c(in_stack_00000098,uVar37 & 0xffffffff,*unaff_x21);
  if (lVar9 == 0) goto LAB_03168190;
  fVar38 = *(float *)(lVar9 + 0x4c);
  lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*unaff_x21);
  if (lVar9 == 0) goto LAB_03168190;
  fVar39 = *(float *)(lVar9 + 0x48);
  lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*unaff_x21);
  if (lVar9 == 0) goto LAB_03168190;
  fVar45 = *(float *)(lVar9 + 0x50);
  lVar9 = FUN_0400ff1c(in_stack_00000098,uVar37 & 0xffffffff,*unaff_x21);
  if (lVar9 == 0) goto LAB_03168190;
  fVar28 = *(float *)(lVar9 + 0x48);
  lVar9 = FUN_0400ff1c(in_stack_00000098,uVar37 & 0xffffffff,*unaff_x21);
  if (lVar9 == 0) goto LAB_03168190;
  fVar42 = *(float *)(lVar9 + 0x50);
  if (DAT_06db4c77 == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06db4c77 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  fVar45 = fVar45 - fVar42;
  fVar39 = fVar39 - fVar28;
  lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*unaff_x21);
  param_2 = 0x42c80000;
  fStack00000000000001d0 = (ABS(fVar35 - fVar38) / SQRT(fVar39 * fVar39 + fVar45 * fVar45)) * 100.0;
  uVar41 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
  if (lVar9 == 0) goto LAB_03168190;
  *(undefined8 *)(lVar9 + 0xe0) = uVar41;
  LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar41);
  param_4 = *(long *)(unaff_x26 + 0x78);
  unaff_x23 = in_stack_00000148;
  goto code_r0x0316a234;
LAB_0316ee54:
  puVar2 = PTR_DAT_069fd088;
  if (in_stack_00000048._4_4_ != 0) {
    lVar9 = *(long *)(unaff_x26 + 0x78);
    if (lVar9 == 0) goto LAB_03168190;
    fVar35 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
    puVar3 = PTR_DAT_06a0b440;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar45 = fVar39;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                         *(undefined8 *)puVar3);
    puVar4 = PTR_DAT_06a0b7d0;
    puVar3 = PTR_DAT_069fbb48;
    if (lVar9 == 0) goto LAB_03168190;
    fVar42 = *(float *)(lVar9 + 200) * 0.5;
    fVar28 = 5.0;
    if (fVar42 <= 5.0) {
      fVar28 = fVar42;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar22 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar22 + -2) {
      fVar42 = 0.0;
      iVar22 = iVar22 + -1;
      uVar37 = (ulong)(uint)fVar35;
      uVar16 = (ulong)(uint)fVar38;
      do {
        fVar52 = (float)uVar37;
        fVar48 = (float)uVar16;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar31 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar22,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar22 = iVar22 + -1;
        fVar32 = fVar48;
        fVar30 = fVar52;
        fVar33 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar22,*(undefined8 *)puVar2);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar3);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar42 = fVar42 + SQRT((fVar52 - fVar30) * (fVar52 - fVar30) +
                               (fVar31 - fVar33) * (fVar31 - fVar33) +
                               (fVar48 - fVar32) * (fVar48 - fVar32));
        if (fVar28 < fVar42) break;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar22,*(undefined8 *)puVar2);
        fVar48 = fVar38;
        fVar52 = (float)FUN_031765b0(fVar35,fVar39,fVar38,fStack0000000000000060 * 10.0 + fVar35,
                                     fVar45,fStack000000000000005c * 10.0 + fVar38,0);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar32 = fVar48;
        fVar30 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar22,*(undefined8 *)puVar2);
        fVar33 = fVar42 / fVar28;
        fVar31 = 1.0;
        if (fVar33 <= 1.0) {
          fVar31 = fVar33;
        }
        uVar16 = (ulong)(uint)fVar31;
        fVar29 = 0.0;
        if (0.0 <= fVar33) {
          fVar29 = fVar31;
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar22,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar37 = (ulong)(uint)(fVar48 + fVar29 * (fVar32 - fVar48));
        FUN_0409f350(fVar52 + fVar29 * (fVar30 - fVar52),*(long *)(unaff_x26 + 0x78),iVar22,
                     *(undefined8 *)puVar4);
      } while (1 < iVar22);
    }
  }
  puVar2 = PTR_DAT_06a0b440;
  lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar18 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
  if (lVar18 != 0) {
    fVar35 = *(float *)(lVar18 + 0x94);
    lVar18 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
    if (lVar18 != 0) {
      fVar38 = *(float *)(lVar18 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar3 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar39 = DAT_010fd13c;
      fVar45 = SQRT(fVar35 * fVar35 + fVar38 * fVar38);
      if (fVar45 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar41 = **(undefined8 **)(*unaff_x28 + 0xb8);
        fVar38 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
      }
      else {
        fVar38 = fVar38 / fVar45;
        uVar41 = CONCAT44(0.0 / fVar45,fVar35 / fVar45);
      }
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x94) = uVar41;
        uVar41 = *(undefined8 *)puVar2;
        *(float *)(lVar9 + 0x9c) = fVar38;
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar41);
        lVar18 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                              *(undefined8 *)puVar2);
        if (lVar18 != 0) {
          fVar35 = *(float *)(lVar18 + 0x94);
          lVar18 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                *(undefined8 *)puVar2);
          if (lVar18 != 0) {
            fVar38 = *(float *)(lVar18 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar45 = SQRT(fVar35 * fVar35 + fVar38 * fVar38);
            if (fVar45 <= fVar39) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              uVar41 = **(undefined8 **)(*unaff_x28 + 0xb8);
              fVar38 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
            }
            else {
              fVar38 = fVar38 / fVar45;
              uVar41 = CONCAT44(0.0 / fVar45,fVar35 / fVar45);
            }
            if (lVar9 != 0) {
              uVar44 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar9 + 0x94) = uVar41;
              *(float *)(lVar9 + 0x9c) = fVar38;
              return uVar44;
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


