/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$remove_OnAssemblyParsed
ENTRY_POINT: 06d7d7e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__remove_OnAssemblyParsed(void)

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
  long *unaff_x25;
  long *unaff_x26;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  ulong uVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
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
  
  fVar24 = in_stack_00000038;
  fVar17 = fStack0000000000000034;
  uVar4 = uStack0000000000000030;
  fVar37 = fStack000000000000002c;
  fVar15 = fStack0000000000000028;
  if (unaff_x25 != (long *)0x0) {
    lVar7 = *unaff_x25;
    fStack000000000000016c = (float)uStack0000000000000020;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    fStack0000000000000168 = fStack0000000000000024;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_06d7d864;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06d7d864:
    (*(code *)*puVar6)(&stack0x00000020);
    fVar33 = in_stack_00000038;
    uVar5 = uStack0000000000000030;
    fVar16 = fStack000000000000002c;
    fVar36 = fStack0000000000000028;
    fVar34 = fStack0000000000000024;
    uVar3 = uStack0000000000000020;
    fVar11 = (float)FUN_07466924(uVar4,0);
    fVar12 = fStack0000000000000168;
    fStack0000000000000168 = (float)FUN_07466bd4(fStack000000000000016c,0);
    fStack000000000000016c = fVar12;
    fVar21 = fStack0000000000000034;
    fVar12 = (float)FUN_07466924(uVar5,0);
    fVar13 = (float)FUN_07466bd4(uVar3,0);
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
      fVar14 = DAT_018b05d0;
      if ((fVar37 * pfVar8[3] +
           fVar15 * pfVar8[2] +
           fStack0000000000000168 * *pfVar8 + fStack000000000000016c * pfVar8[1] <= DAT_018b05d0) &&
         (fVar16 * pfVar8[3] + fVar36 * pfVar8[2] + fVar13 * *pfVar8 + fVar34 * pfVar8[1] <=
          DAT_018b05d0)) {
        fVar14 = *(float *)(unaff_x21 + 0xb8);
        fVar31 = *(float *)(unaff_x21 + 0xbc);
        fVar27 = *(float *)(unaff_x21 + 0xc0);
        fVar22 = *(float *)(unaff_x21 + 0xc4);
        fVar28 = fVar15 * fVar27;
        fVar23 = fStack0000000000000168 * fVar31 + fVar37 * fVar27 + fVar15 * fVar22;
        fVar32 = (fVar37 * fVar22 - fStack0000000000000168 * fVar14) -
                 fStack000000000000016c * fVar31;
        fVar35 = (fStack000000000000016c * fVar27 +
                 fVar37 * fVar14 + fStack0000000000000168 * fVar22) - fVar15 * fVar31;
        fVar22 = (fVar15 * fVar14 + fVar37 * fVar31 + fStack000000000000016c * fVar22) -
                 fStack0000000000000168 * fVar27;
        fVar27 = fVar23 - fStack000000000000016c * fVar14;
        fStack000000000000016c = DAT_018b05d0;
        fVar37 = fVar32 - fVar28;
        fStack0000000000000168 = fVar12;
        fVar15 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8);
        fVar14 = fStack000000000000016c;
        fVar12 = fStack0000000000000168;
        *unaff_x20 = (fVar28 * fVar22 + fVar15 * fVar37 + fVar32 * fVar35) - fVar23 * fVar27;
        unaff_x20[1] = (fVar15 * fVar27 + fVar23 * fVar37 + fVar32 * fVar22) - fVar28 * fVar35;
        unaff_x20[2] = (fVar23 * fVar35 + fVar28 * fVar37 + fVar32 * fVar27) - fVar15 * fVar22;
        unaff_x20[3] = ((fVar32 * fVar37 - fVar15 * fVar35) - fVar23 * fVar22) - fVar28 * fVar27;
        fVar15 = *(float *)(unaff_x21 + 0xb8);
        fVar28 = *(float *)(unaff_x21 + 0xbc);
        fVar23 = *(float *)(unaff_x21 + 0xc0);
        fVar37 = *(float *)(unaff_x21 + 0xc4);
        fVar27 = fVar36 * fVar23;
        fVar22 = fVar13 * fVar28 + fVar16 * fVar23 + fVar36 * fVar37;
        fVar31 = (fVar16 * fVar37 - fVar13 * fVar15) - fVar34 * fVar28;
        fVar32 = (fVar34 * fVar23 + fVar16 * fVar15 + fVar13 * fVar37) - fVar36 * fVar28;
        fVar37 = (fVar36 * fVar15 + fVar16 * fVar28 + fVar34 * fVar37) - fVar13 * fVar23;
        fVar34 = fVar22 - fVar34 * fVar15;
        fVar36 = fVar31 - fVar27;
        fVar15 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar1);
        *unaff_x19 = (fVar27 * fVar37 + fVar15 * fVar36 + fVar31 * fVar32) - fVar22 * fVar34;
        unaff_x19[1] = (fVar15 * fVar34 + fVar22 * fVar36 + fVar31 * fVar37) - fVar27 * fVar32;
        unaff_x19[2] = (fVar22 * fVar32 + fVar27 * fVar36 + fVar31 * fVar34) - fVar15 * fVar37;
        unaff_x19[3] = ((fVar31 * fVar36 - fVar15 * fVar32) - fVar22 * fVar37) - fVar27 * fVar34;
      }
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      puVar1 = PTR_DAT_08e68e18;
      fVar15 = DAT_018afcdc;
      pfVar8 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      fVar34 = *pfVar8;
      fVar36 = pfVar8[2];
      fVar37 = fVar17 - pfVar8[1];
      fVar37 = (fVar24 - fVar36) * (fVar24 - fVar36) +
               (fVar11 - fVar34) * (fVar11 - fVar34) + fVar37 * fVar37;
      if (DAT_018afcdc <= fVar37) {
        fVar13 = fVar12 - fVar34;
        fVar16 = fVar21 - pfVar8[1];
        fVar36 = fVar33 - fVar36;
        fVar34 = fVar36 * fVar36;
        fVar37 = fVar33;
        if (DAT_018afcdc <= fVar34 + fVar13 * fVar13 + fVar16 * fVar16) {
          *unaff_x23 = fVar11;
          unaff_x23[1] = fVar17;
          unaff_x23[2] = fVar24;
          *unaff_x22 = fVar12;
          unaff_x22[1] = fVar21;
          unaff_x22[2] = fVar33;
          return;
        }
      }
      if ((*(long *)(unaff_x21 + 0x68) != 0) &&
         (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar7 != 0)) {
        fVar17 = (float)FUN_085eb198(lVar7,0);
        if (DAT_0940fff5 == '\0') {
          FUN_03c8f898(PTR_DAT_08e68e18);
          DAT_0940fff5 = '\x01';
        }
        pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar36 = fVar36 - pfVar8[2];
        fVar24 = fVar36 * fVar36;
        if (fVar24 + (fVar17 - *pfVar8) * (fVar17 - *pfVar8) +
                     (fVar34 - pfVar8[1]) * (fVar34 - pfVar8[1]) < fVar15) {
          return;
        }
        if ((*(long *)(unaff_x21 + 0x68) != 0) &&
           (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar7 != 0)) {
          fVar17 = (float)FUN_085eb198(lVar7,0);
          if (DAT_0940fff5 == '\0') {
            FUN_03c8f898(PTR_DAT_08e68e18);
            DAT_0940fff5 = '\x01';
          }
          pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
          fVar36 = fVar36 - pfVar8[2];
          fVar34 = fVar36 * fVar36;
          if (fVar34 + (fVar17 - *pfVar8) * (fVar17 - *pfVar8) +
                       (fVar24 - pfVar8[1]) * (fVar24 - pfVar8[1]) < fVar15) {
            return;
          }
          if ((*(long *)(unaff_x21 + 0x68) != 0) &&
             (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar7 != 0)) {
            fVar15 = (float)FUN_085eb388(lVar7,0);
            if (DAT_0940fffc == '\0') {
              FUN_03c8f898(PTR_DAT_08e69f40);
              DAT_0940fffc = '\x01';
            }
            pfVar8 = *(float **)(*(long *)puVar2 + 0xb8);
            fVar17 = pfVar8[3];
            fVar36 = fVar36 * pfVar8[2];
            fVar37 = fVar37 * fVar17;
            if (fVar14 < fVar37 + fVar36 + fVar15 * *pfVar8 + fVar34 * pfVar8[1]) {
              return;
            }
            if ((*(long *)(unaff_x21 + 0x68) != 0) &&
               (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar7 != 0)) {
              fVar15 = (float)FUN_085eb388(lVar7,0);
              if (DAT_0940fffc == '\0') {
                FUN_03c8f898(PTR_DAT_08e69f40);
                DAT_0940fffc = '\x01';
              }
              pfVar8 = *(float **)(*(long *)puVar2 + 0xb8);
              uVar26 = (ulong)(uint)pfVar8[3];
              uVar29 = (ulong)(uint)(fVar36 * pfVar8[2]);
              fVar17 = fVar17 * pfVar8[3];
              uVar9 = (ulong)(uint)fVar17;
              if (fVar14 < fVar17 + fVar36 * pfVar8[2] + fVar15 * *pfVar8 + fVar37 * pfVar8[1]) {
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
                uVar18 = FUN_085eb198(lVar7,0);
                if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                   (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar7 != 0)) {
                  uVar25 = uVar9;
                  uVar30 = uVar29;
                  uVar19 = FUN_085eb388(lVar7,0);
                  if (*(int *)(*(long *)PTR_DAT_08e78410 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  FUN_085e9668(uVar18,uVar9,uVar29,uVar19,uVar25,uVar30,uVar26,&stack0x00000080,0);
                  if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                     (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar7 != 0)) {
                    uVar18 = FUN_085eb198(lVar7,0);
                    if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                       (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar7 != 0)) {
                      uVar26 = uVar9;
                      uVar25 = uVar29;
                      uVar20 = FUN_085eb388(lVar7,0);
                      FUN_085e9668(uVar18,uVar9,uVar29,uVar20,uVar26,uVar25,uVar19,&stack0x00000060,
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
                      fVar15 = *(float *)(unaff_x21 + 0xb8);
                      fVar16 = *(float *)(unaff_x21 + 0xbc);
                      fVar24 = *(float *)(unaff_x21 + 0xc0);
                      fVar36 = *(float *)(unaff_x21 + 0xc4);
                      fVar17 = fStack00000000000000d0 * fVar15;
                      fVar34 = fStack00000000000000d0 * fVar24 +
                               in_stack_000000d8 * fVar15 + fStack00000000000000cc * fVar36;
                      fVar37 = (in_stack_000000d8 * fVar36 - fStack00000000000000cc * fVar15) -
                               fStack00000000000000d0 * fVar16;
                      fVar33 = fVar34 - fStack00000000000000d4 * fVar16;
                      fVar12 = (fStack00000000000000d4 * fVar15 +
                               in_stack_000000d8 * fVar16 + fStack00000000000000d0 * fVar36) -
                               fStack00000000000000cc * fVar24;
                      fVar36 = (fStack00000000000000cc * fVar16 +
                               in_stack_000000d8 * fVar24 + fStack00000000000000d4 * fVar36) -
                               fVar17;
                      fVar24 = fVar37 - fStack00000000000000d4 * fVar24;
                      fVar15 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8)
                      ;
                      *unaff_x20 = (fVar17 * fVar12 + fVar15 * fVar24 + fVar34 * fVar33) -
                                   fVar37 * fVar36;
                      unaff_x20[1] = (fVar15 * fVar36 + fVar37 * fVar24 + fVar34 * fVar12) -
                                     fVar17 * fVar33;
                      unaff_x20[2] = (fVar37 * fVar33 + fVar17 * fVar24 + fVar34 * fVar36) -
                                     fVar15 * fVar12;
                      unaff_x20[3] = ((fVar34 * fVar24 - fVar15 * fVar33) - fVar37 * fVar12) -
                                     fVar17 * fVar36;
                      fVar15 = *(float *)(unaff_x21 + 0xb8);
                      fVar16 = *(float *)(unaff_x21 + 0xbc);
                      fVar24 = *(float *)(unaff_x21 + 0xc0);
                      fVar36 = *(float *)(unaff_x21 + 0xc4);
                      fVar17 = fStack00000000000000b0 * fVar15;
                      fVar34 = fStack00000000000000b0 * fVar24 +
                               in_stack_000000b8 * fVar15 + fStack00000000000000ac * fVar36;
                      fVar37 = (in_stack_000000b8 * fVar36 - fStack00000000000000ac * fVar15) -
                               fStack00000000000000b0 * fVar16;
                      fVar33 = fVar34 - fStack00000000000000b4 * fVar16;
                      fVar12 = (fStack00000000000000b4 * fVar15 +
                               in_stack_000000b8 * fVar16 + fStack00000000000000b0 * fVar36) -
                               fStack00000000000000ac * fVar24;
                      fVar36 = (fStack00000000000000ac * fVar16 +
                               in_stack_000000b8 * fVar24 + fStack00000000000000b4 * fVar36) -
                               fVar17;
                      fVar24 = fVar37 - fStack00000000000000b4 * fVar24;
                      fVar15 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar2);
                      *unaff_x19 = (fVar17 * fVar12 + fVar15 * fVar24 + fVar34 * fVar33) -
                                   fVar37 * fVar36;
                      unaff_x19[1] = (fVar15 * fVar36 + fVar37 * fVar24 + fVar34 * fVar12) -
                                     fVar17 * fVar33;
                      unaff_x19[2] = (fVar37 * fVar33 + fVar17 * fVar24 + fVar34 * fVar36) -
                                     fVar15 * fVar12;
                      unaff_x19[3] = ((fVar34 * fVar24 - fVar15 * fVar33) - fVar37 * fVar12) -
                                     fVar17 * fVar36;
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


