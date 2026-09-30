/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$add_OnAssemblyParsed
ENTRY_POINT: 06d7d6f4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__add_OnAssemblyParsed(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  int *piVar10;
  float *unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  float *unaff_x22;
  float *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float in_stack_000000d8;
  char cStack00000000000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  char cStack0000000000000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  float fStack0000000000000168;
  float fStack000000000000016c;
  
  FUN_03c8f898(PTR_DAT_08e76f10);
  FUN_03c8f898(PTR_DAT_08e8deb0);
  FUN_03c8f898(PTR_DAT_08e8deb8);
  FUN_03c8f898(PTR_DAT_08e78410);
  *(undefined1 *)(unaff_x25 + 0x9ea) = 1;
  puVar2 = PTR_DAT_08e76f10;
  _cStack0000000000000100 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  _cStack00000000000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000c0 = 0;
  _fStack00000000000000c8 = 0;
  in_stack_000000d8 = 0.0;
  _fStack00000000000000d0 = 0;
  in_stack_000000a0 = 0;
  _fStack00000000000000a8 = 0;
  in_stack_000000b8 = 0.0;
  _fStack00000000000000b0 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  plVar11 = *(long **)(unaff_x21 + 0xa8);
  if (plVar11 == (long *)0x0) {
    return;
  }
  if (*(long *)(unaff_x21 + 0xb0) == 0) {
    return;
  }
  lVar7 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e76f10) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_06d7d7d4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e76f10,1);
LAB_06d7d7d4:
  (*(code *)*puVar6)(&stack0x00000020,plVar11,puVar6[1]);
  fVar25 = in_stack_00000038;
  fVar18 = fStack0000000000000034;
  uVar4 = uStack0000000000000030;
  fVar38 = fStack000000000000002c;
  fVar16 = fStack0000000000000028;
  plVar11 = *(long **)(unaff_x21 + 0xb0);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    fStack000000000000016c = (float)uStack0000000000000020;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    fStack0000000000000168 = fStack0000000000000024;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_06d7d864;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar2,1);
LAB_06d7d864:
    (*(code *)*puVar6)(&stack0x00000020,plVar11,puVar6[1]);
    fVar34 = in_stack_00000038;
    uVar5 = uStack0000000000000030;
    fVar17 = fStack000000000000002c;
    fVar37 = fStack0000000000000028;
    fVar35 = fStack0000000000000024;
    uVar3 = uStack0000000000000020;
    fVar12 = (float)FUN_07466924(uVar4,0);
    fVar13 = fStack0000000000000168;
    fStack0000000000000168 = (float)FUN_07466bd4(fStack000000000000016c,0);
    fStack000000000000016c = fVar13;
    fVar22 = fStack0000000000000034;
    fVar13 = (float)FUN_07466924(uVar5,0);
    fVar14 = (float)FUN_07466bd4(uVar3,0);
    if (unaff_x24 != 0) {
      FUN_06d754f4(&stack0x00000020);
      in_stack_00000108 = CONCAT44(fStack000000000000002c,fStack0000000000000028);
      _cStack0000000000000100 = CONCAT44(fStack0000000000000024,uStack0000000000000020);
      in_stack_00000110 = uStack0000000000000030;
      FUN_06d754f4(&stack0x00000020);
      in_stack_000000e8 = CONCAT44(fStack000000000000002c,fStack0000000000000028);
      in_stack_000000f0 = uStack0000000000000030;
      if ((cStack0000000000000100 == '\0') ||
         (cStack00000000000000e0 = (char)uStack0000000000000020, cStack00000000000000e0 == '\0')) {
        return;
      }
      _cStack00000000000000e0 = CONCAT44(fStack0000000000000024,uStack0000000000000020);
      if (DAT_0940fffc == '\0') {
        FUN_03c8f898(PTR_DAT_08e69f40);
        DAT_0940fffc = '\x01';
      }
      puVar1 = PTR_DAT_08e8deb8;
      puVar2 = PTR_DAT_08e69f40;
      pfVar8 = *(float **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
      fVar15 = DAT_018b05d0;
      if ((fVar38 * pfVar8[3] +
           fVar16 * pfVar8[2] +
           fStack0000000000000168 * *pfVar8 + fStack000000000000016c * pfVar8[1] <= DAT_018b05d0) &&
         (fVar17 * pfVar8[3] + fVar37 * pfVar8[2] + fVar14 * *pfVar8 + fVar35 * pfVar8[1] <=
          DAT_018b05d0)) {
        fVar15 = *(float *)(unaff_x21 + 0xb8);
        fVar32 = *(float *)(unaff_x21 + 0xbc);
        fVar28 = *(float *)(unaff_x21 + 0xc0);
        fVar23 = *(float *)(unaff_x21 + 0xc4);
        fVar29 = fVar16 * fVar28;
        fVar24 = fStack0000000000000168 * fVar32 + fVar38 * fVar28 + fVar16 * fVar23;
        fVar33 = (fVar38 * fVar23 - fStack0000000000000168 * fVar15) -
                 fStack000000000000016c * fVar32;
        fVar36 = (fStack000000000000016c * fVar28 +
                 fVar38 * fVar15 + fStack0000000000000168 * fVar23) - fVar16 * fVar32;
        fVar23 = (fVar16 * fVar15 + fVar38 * fVar32 + fStack000000000000016c * fVar23) -
                 fStack0000000000000168 * fVar28;
        fVar28 = fVar24 - fStack000000000000016c * fVar15;
        fStack000000000000016c = DAT_018b05d0;
        fVar38 = fVar33 - fVar29;
        fStack0000000000000168 = fVar13;
        fVar16 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8);
        fVar15 = fStack000000000000016c;
        fVar13 = fStack0000000000000168;
        *unaff_x20 = (fVar29 * fVar23 + fVar16 * fVar38 + fVar33 * fVar36) - fVar24 * fVar28;
        unaff_x20[1] = (fVar16 * fVar28 + fVar24 * fVar38 + fVar33 * fVar23) - fVar29 * fVar36;
        unaff_x20[2] = (fVar24 * fVar36 + fVar29 * fVar38 + fVar33 * fVar28) - fVar16 * fVar23;
        unaff_x20[3] = ((fVar33 * fVar38 - fVar16 * fVar36) - fVar24 * fVar23) - fVar29 * fVar28;
        fVar16 = *(float *)(unaff_x21 + 0xb8);
        fVar29 = *(float *)(unaff_x21 + 0xbc);
        fVar24 = *(float *)(unaff_x21 + 0xc0);
        fVar38 = *(float *)(unaff_x21 + 0xc4);
        fVar28 = fVar37 * fVar24;
        fVar23 = fVar14 * fVar29 + fVar17 * fVar24 + fVar37 * fVar38;
        fVar32 = (fVar17 * fVar38 - fVar14 * fVar16) - fVar35 * fVar29;
        fVar33 = (fVar35 * fVar24 + fVar17 * fVar16 + fVar14 * fVar38) - fVar37 * fVar29;
        fVar38 = (fVar37 * fVar16 + fVar17 * fVar29 + fVar35 * fVar38) - fVar14 * fVar24;
        fVar35 = fVar23 - fVar35 * fVar16;
        fVar37 = fVar32 - fVar28;
        fVar16 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar1);
        *unaff_x19 = (fVar28 * fVar38 + fVar16 * fVar37 + fVar32 * fVar33) - fVar23 * fVar35;
        unaff_x19[1] = (fVar16 * fVar35 + fVar23 * fVar37 + fVar32 * fVar38) - fVar28 * fVar33;
        unaff_x19[2] = (fVar23 * fVar33 + fVar28 * fVar37 + fVar32 * fVar35) - fVar16 * fVar38;
        unaff_x19[3] = ((fVar32 * fVar37 - fVar16 * fVar33) - fVar23 * fVar38) - fVar28 * fVar35;
      }
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      puVar1 = PTR_DAT_08e68e18;
      fVar16 = DAT_018afcdc;
      pfVar8 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      fVar35 = *pfVar8;
      fVar37 = pfVar8[2];
      fVar38 = fVar18 - pfVar8[1];
      fVar38 = (fVar25 - fVar37) * (fVar25 - fVar37) +
               (fVar12 - fVar35) * (fVar12 - fVar35) + fVar38 * fVar38;
      if (DAT_018afcdc <= fVar38) {
        fVar14 = fVar13 - fVar35;
        fVar17 = fVar22 - pfVar8[1];
        fVar37 = fVar34 - fVar37;
        fVar35 = fVar37 * fVar37;
        fVar38 = fVar34;
        if (DAT_018afcdc <= fVar35 + fVar14 * fVar14 + fVar17 * fVar17) {
          *unaff_x23 = fVar12;
          unaff_x23[1] = fVar18;
          unaff_x23[2] = fVar25;
          *unaff_x22 = fVar13;
          unaff_x22[1] = fVar22;
          unaff_x22[2] = fVar34;
          return;
        }
      }
      if ((*(long *)(unaff_x21 + 0x68) != 0) &&
         (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar7 != 0)) {
        fVar18 = (float)FUN_085eb198(lVar7,0);
        if (DAT_0940fff5 == '\0') {
          FUN_03c8f898(PTR_DAT_08e68e18);
          DAT_0940fff5 = '\x01';
        }
        pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar37 = fVar37 - pfVar8[2];
        fVar25 = fVar37 * fVar37;
        if (fVar25 + (fVar18 - *pfVar8) * (fVar18 - *pfVar8) +
                     (fVar35 - pfVar8[1]) * (fVar35 - pfVar8[1]) < fVar16) {
          return;
        }
        if ((*(long *)(unaff_x21 + 0x68) != 0) &&
           (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar7 != 0)) {
          fVar18 = (float)FUN_085eb198(lVar7,0);
          if (DAT_0940fff5 == '\0') {
            FUN_03c8f898(PTR_DAT_08e68e18);
            DAT_0940fff5 = '\x01';
          }
          pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
          fVar37 = fVar37 - pfVar8[2];
          fVar35 = fVar37 * fVar37;
          if (fVar35 + (fVar18 - *pfVar8) * (fVar18 - *pfVar8) +
                       (fVar25 - pfVar8[1]) * (fVar25 - pfVar8[1]) < fVar16) {
            return;
          }
          if ((*(long *)(unaff_x21 + 0x68) != 0) &&
             (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar7 != 0)) {
            fVar16 = (float)FUN_085eb388(lVar7,0);
            if (DAT_0940fffc == '\0') {
              FUN_03c8f898(PTR_DAT_08e69f40);
              DAT_0940fffc = '\x01';
            }
            pfVar8 = *(float **)(*(long *)puVar2 + 0xb8);
            fVar18 = pfVar8[3];
            fVar37 = fVar37 * pfVar8[2];
            fVar38 = fVar38 * fVar18;
            if (fVar15 < fVar38 + fVar37 + fVar16 * *pfVar8 + fVar35 * pfVar8[1]) {
              return;
            }
            if ((*(long *)(unaff_x21 + 0x68) != 0) &&
               (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar7 != 0)) {
              fVar16 = (float)FUN_085eb388(lVar7,0);
              if (DAT_0940fffc == '\0') {
                FUN_03c8f898(PTR_DAT_08e69f40);
                DAT_0940fffc = '\x01';
              }
              pfVar8 = *(float **)(*(long *)puVar2 + 0xb8);
              uVar27 = (ulong)(uint)pfVar8[3];
              uVar30 = (ulong)(uint)(fVar37 * pfVar8[2]);
              fVar18 = fVar18 * pfVar8[3];
              uVar9 = (ulong)(uint)fVar18;
              if (fVar15 < fVar18 + fVar37 * pfVar8[2] + fVar16 * *pfVar8 + fVar38 * pfVar8[1]) {
                return;
              }
              in_stack_000000c0 = 0;
              _fStack00000000000000c8 = 0;
              in_stack_000000d8 = 0.0;
              _fStack00000000000000d0 = 0;
              _fStack00000000000000a8 = 0;
              _fStack00000000000000b0 = 0;
              in_stack_000000a0 = 0;
              in_stack_000000b8 = 0.0;
              if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                 (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar7 != 0)) {
                uVar19 = FUN_085eb198(lVar7,0);
                if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                   (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar7 != 0)) {
                  uVar26 = uVar9;
                  uVar31 = uVar30;
                  uVar20 = FUN_085eb388(lVar7,0);
                  if (*(int *)(*(long *)PTR_DAT_08e78410 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  FUN_085e9668(uVar19,uVar9,uVar30,uVar20,uVar26,uVar31,uVar27,&stack0x00000080,0);
                  if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                     (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar7 != 0)) {
                    uVar19 = FUN_085eb198(lVar7,0);
                    if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                       (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar7 != 0)) {
                      uVar27 = uVar9;
                      uVar26 = uVar30;
                      uVar21 = FUN_085eb388(lVar7,0);
                      FUN_085e9668(uVar19,uVar9,uVar30,uVar21,uVar27,uVar26,uVar20,&stack0x00000060,
                                   0);
                      OVRLocatable_TrackingSpacePose__ComputeWorldPosition
                                (&stack0x00000080,unaff_x21 + 0x8c,&stack0x000000c0,0);
                      OVRLocatable_TrackingSpacePose__ComputeWorldPosition
                                (&stack0x00000060,unaff_x21 + 0x70,&stack0x000000a0,0);
                      unaff_x23[2] = fStack00000000000000c8;
                      *(undefined8 *)unaff_x23 = in_stack_000000c0;
                      unaff_x22[2] = fStack00000000000000a8;
                      *(undefined8 *)unaff_x22 = in_stack_000000a0;
                      puVar2 = PTR_DAT_08e8deb8;
                      fVar16 = *(float *)(unaff_x21 + 0xb8);
                      fVar17 = *(float *)(unaff_x21 + 0xbc);
                      fVar25 = *(float *)(unaff_x21 + 0xc0);
                      fVar37 = *(float *)(unaff_x21 + 0xc4);
                      fVar18 = fStack00000000000000d0 * fVar16;
                      fVar35 = fStack00000000000000d0 * fVar25 +
                               in_stack_000000d8 * fVar16 + fStack00000000000000cc * fVar37;
                      fVar38 = (in_stack_000000d8 * fVar37 - fStack00000000000000cc * fVar16) -
                               fStack00000000000000d0 * fVar17;
                      fVar34 = fVar35 - fStack00000000000000d4 * fVar17;
                      fVar13 = (fStack00000000000000d4 * fVar16 +
                               in_stack_000000d8 * fVar17 + fStack00000000000000d0 * fVar37) -
                               fStack00000000000000cc * fVar25;
                      fVar37 = (fStack00000000000000cc * fVar17 +
                               in_stack_000000d8 * fVar25 + fStack00000000000000d4 * fVar37) -
                               fVar18;
                      fVar25 = fVar38 - fStack00000000000000d4 * fVar25;
                      fVar16 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8)
                      ;
                      *unaff_x20 = (fVar18 * fVar13 + fVar16 * fVar25 + fVar35 * fVar34) -
                                   fVar38 * fVar37;
                      unaff_x20[1] = (fVar16 * fVar37 + fVar38 * fVar25 + fVar35 * fVar13) -
                                     fVar18 * fVar34;
                      unaff_x20[2] = (fVar38 * fVar34 + fVar18 * fVar25 + fVar35 * fVar37) -
                                     fVar16 * fVar13;
                      unaff_x20[3] = ((fVar35 * fVar25 - fVar16 * fVar34) - fVar38 * fVar13) -
                                     fVar18 * fVar37;
                      fVar16 = *(float *)(unaff_x21 + 0xb8);
                      fVar17 = *(float *)(unaff_x21 + 0xbc);
                      fVar25 = *(float *)(unaff_x21 + 0xc0);
                      fVar37 = *(float *)(unaff_x21 + 0xc4);
                      fVar18 = fStack00000000000000b0 * fVar16;
                      fVar35 = fStack00000000000000b0 * fVar25 +
                               in_stack_000000b8 * fVar16 + fStack00000000000000ac * fVar37;
                      fVar38 = (in_stack_000000b8 * fVar37 - fStack00000000000000ac * fVar16) -
                               fStack00000000000000b0 * fVar17;
                      fVar34 = fVar35 - fStack00000000000000b4 * fVar17;
                      fVar13 = (fStack00000000000000b4 * fVar16 +
                               in_stack_000000b8 * fVar17 + fStack00000000000000b0 * fVar37) -
                               fStack00000000000000ac * fVar25;
                      fVar37 = (fStack00000000000000ac * fVar17 +
                               in_stack_000000b8 * fVar25 + fStack00000000000000b4 * fVar37) -
                               fVar18;
                      fVar25 = fVar38 - fStack00000000000000b4 * fVar25;
                      fVar16 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar2);
                      *unaff_x19 = (fVar18 * fVar13 + fVar16 * fVar25 + fVar35 * fVar34) -
                                   fVar38 * fVar37;
                      unaff_x19[1] = (fVar16 * fVar37 + fVar38 * fVar25 + fVar35 * fVar13) -
                                     fVar18 * fVar34;
                      unaff_x19[2] = (fVar38 * fVar34 + fVar18 * fVar25 + fVar35 * fVar37) -
                                     fVar16 * fVar13;
                      unaff_x19[3] = ((fVar35 * fVar25 - fVar16 * fVar34) - fVar38 * fVar13) -
                                     fVar18 * fVar37;
                      return;
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
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


