/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$get_Ready
ENTRY_POINT: 06d7d8dc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__get_Ready
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  float *pfVar4;
  float *unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  float *unaff_x22;
  float *unaff_x23;
  long unaff_x24;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar21;
  float unaff_s13;
  float unaff_s14;
  float fVar22;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
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
  
  fVar5 = (float)FUN_07466bd4(0);
  if (unaff_x24 != 0) {
    FUN_06d754f4(&stack0x00000020);
    in_stack_00000110 = in_stack_00000030;
    in_stack_00000108 = in_stack_00000028;
    _cStack0000000000000100 = in_stack_00000020;
    FUN_06d754f4(&stack0x00000020);
    in_stack_000000e8 = in_stack_00000028;
    _cStack00000000000000e0 = in_stack_00000020;
    uVar7 = _cStack00000000000000e0;
    in_stack_000000f0 = in_stack_00000030;
    if ((cStack0000000000000100 == '\0') ||
       (cStack00000000000000e0 = (char)in_stack_00000020, cStack00000000000000e0 == '\0')) {
      return;
    }
    _cStack00000000000000e0 = uVar7;
    if (DAT_0940fffc == '\0') {
      FUN_03c8f898(PTR_DAT_08e69f40);
      DAT_0940fffc = '\x01';
    }
    puVar1 = PTR_DAT_08e8deb8;
    puVar2 = PTR_DAT_08e69f40;
    pfVar4 = *(float **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
    fVar6 = DAT_018b05d0;
    if ((in_stack_00000018._4_4_ * pfVar4[3] +
         unaff_s14 * pfVar4[2] +
         fStack0000000000000168 * *pfVar4 + fStack000000000000016c * pfVar4[1] <= DAT_018b05d0) &&
       (unaff_s10 * pfVar4[3] + unaff_s9 * pfVar4[2] + fVar5 * *pfVar4 + unaff_s8 * pfVar4[1] <=
        DAT_018b05d0)) {
      fVar6 = *(float *)(unaff_x21 + 0xb8);
      fVar19 = *(float *)(unaff_x21 + 0xbc);
      fVar15 = *(float *)(unaff_x21 + 0xc0);
      fVar10 = *(float *)(unaff_x21 + 0xc4);
      fVar16 = unaff_s14 * fVar15;
      fVar11 = fStack0000000000000168 * fVar19 +
               in_stack_00000018._4_4_ * fVar15 + unaff_s14 * fVar10;
      fVar20 = (in_stack_00000018._4_4_ * fVar10 - fStack0000000000000168 * fVar6) -
               fStack000000000000016c * fVar19;
      fVar21 = (fStack000000000000016c * fVar15 +
               in_stack_00000018._4_4_ * fVar6 + fStack0000000000000168 * fVar10) -
               unaff_s14 * fVar19;
      fVar19 = (unaff_s14 * fVar6 +
               in_stack_00000018._4_4_ * fVar19 + fStack000000000000016c * fVar10) -
               fStack0000000000000168 * fVar15;
      fVar22 = fVar11 - fStack000000000000016c * fVar6;
      fStack000000000000016c = DAT_018b05d0;
      fVar15 = fVar20 - fVar16;
      fStack0000000000000168 = unaff_s13;
      fVar10 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8);
      fVar6 = fStack000000000000016c;
      unaff_s13 = fStack0000000000000168;
      *unaff_x20 = (fVar16 * fVar19 + fVar10 * fVar15 + fVar20 * fVar21) - fVar11 * fVar22;
      unaff_x20[1] = (fVar10 * fVar22 + fVar11 * fVar15 + fVar20 * fVar19) - fVar16 * fVar21;
      unaff_x20[2] = (fVar11 * fVar21 + fVar16 * fVar15 + fVar20 * fVar22) - fVar10 * fVar19;
      unaff_x20[3] = ((fVar20 * fVar15 - fVar10 * fVar21) - fVar11 * fVar19) - fVar16 * fVar22;
      fVar10 = *(float *)(unaff_x21 + 0xb8);
      fVar20 = *(float *)(unaff_x21 + 0xbc);
      fVar16 = *(float *)(unaff_x21 + 0xc0);
      fVar11 = *(float *)(unaff_x21 + 0xc4);
      fVar19 = unaff_s9 * fVar16;
      fVar15 = fVar5 * fVar20 + unaff_s10 * fVar16 + unaff_s9 * fVar11;
      fVar21 = (unaff_s10 * fVar11 - fVar5 * fVar10) - unaff_s8 * fVar20;
      fVar22 = (unaff_s8 * fVar16 + unaff_s10 * fVar10 + fVar5 * fVar11) - unaff_s9 * fVar20;
      fVar11 = (unaff_s9 * fVar10 + unaff_s10 * fVar20 + unaff_s8 * fVar11) - fVar5 * fVar16;
      fVar10 = fVar15 - unaff_s8 * fVar10;
      fVar16 = fVar21 - fVar19;
      fVar5 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar1);
      *unaff_x19 = (fVar19 * fVar11 + fVar5 * fVar16 + fVar21 * fVar22) - fVar15 * fVar10;
      unaff_x19[1] = (fVar5 * fVar10 + fVar15 * fVar16 + fVar21 * fVar11) - fVar19 * fVar22;
      unaff_x19[2] = (fVar15 * fVar22 + fVar19 * fVar16 + fVar21 * fVar10) - fVar5 * fVar11;
      unaff_x19[3] = ((fVar21 * fVar16 - fVar5 * fVar22) - fVar15 * fVar11) - fVar19 * fVar10;
    }
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    puVar1 = PTR_DAT_08e68e18;
    fVar5 = DAT_018afcdc;
    pfVar4 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar11 = *pfVar4;
    fVar15 = pfVar4[2];
    fVar10 = fStack0000000000000010 - pfVar4[1];
    fVar10 = (in_stack_00000008._4_4_ - fVar15) * (in_stack_00000008._4_4_ - fVar15) +
             (fStack0000000000000014 - fVar11) * (fStack0000000000000014 - fVar11) + fVar10 * fVar10
    ;
    if (DAT_018afcdc <= fVar10) {
      fVar19 = unaff_s13 - fVar11;
      fVar16 = unaff_s11 - pfVar4[1];
      fVar15 = param_3 - fVar15;
      fVar11 = fVar15 * fVar15;
      fVar10 = param_3;
      if (DAT_018afcdc <= fVar11 + fVar19 * fVar19 + fVar16 * fVar16) {
        *unaff_x23 = fStack0000000000000014;
        unaff_x23[1] = fStack0000000000000010;
        unaff_x23[2] = in_stack_00000008._4_4_;
        *unaff_x22 = unaff_s13;
        unaff_x22[1] = unaff_s11;
        unaff_x22[2] = param_3;
        return;
      }
    }
    if ((*(long *)(unaff_x21 + 0x68) != 0) &&
       (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar3 != 0)) {
      fVar16 = (float)FUN_085eb198(lVar3,0);
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar15 = fVar15 - pfVar4[2];
      fVar19 = fVar15 * fVar15;
      if (fVar19 + (fVar16 - *pfVar4) * (fVar16 - *pfVar4) +
                   (fVar11 - pfVar4[1]) * (fVar11 - pfVar4[1]) < fVar5) {
        return;
      }
      if ((*(long *)(unaff_x21 + 0x68) != 0) &&
         (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar3 != 0)) {
        fVar11 = (float)FUN_085eb198(lVar3,0);
        if (DAT_0940fff5 == '\0') {
          FUN_03c8f898(PTR_DAT_08e68e18);
          DAT_0940fff5 = '\x01';
        }
        pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar15 = fVar15 - pfVar4[2];
        fVar16 = fVar15 * fVar15;
        if (fVar16 + (fVar11 - *pfVar4) * (fVar11 - *pfVar4) +
                     (fVar19 - pfVar4[1]) * (fVar19 - pfVar4[1]) < fVar5) {
          return;
        }
        if ((*(long *)(unaff_x21 + 0x68) != 0) &&
           (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar3 != 0)) {
          fVar5 = (float)FUN_085eb388(lVar3,0);
          if (DAT_0940fffc == '\0') {
            FUN_03c8f898(PTR_DAT_08e69f40);
            DAT_0940fffc = '\x01';
          }
          pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
          fVar11 = pfVar4[3];
          fVar15 = fVar15 * pfVar4[2];
          fVar10 = fVar10 * fVar11;
          if (fVar6 < fVar10 + fVar15 + fVar5 * *pfVar4 + fVar16 * pfVar4[1]) {
            return;
          }
          if ((*(long *)(unaff_x21 + 0x68) != 0) &&
             (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar3 != 0)) {
            fVar5 = (float)FUN_085eb388(lVar3,0);
            if (DAT_0940fffc == '\0') {
              FUN_03c8f898(PTR_DAT_08e69f40);
              DAT_0940fffc = '\x01';
            }
            pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
            uVar14 = (ulong)(uint)pfVar4[3];
            uVar17 = (ulong)(uint)(fVar15 * pfVar4[2]);
            fVar11 = fVar11 * pfVar4[3];
            uVar12 = (ulong)(uint)fVar11;
            if (fVar6 < fVar11 + fVar15 * pfVar4[2] + fVar5 * *pfVar4 + fVar10 * pfVar4[1]) {
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
               (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar3 != 0)) {
              uVar7 = FUN_085eb198(lVar3,0);
              if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                 (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar3 != 0)) {
                uVar13 = uVar12;
                uVar18 = uVar17;
                uVar8 = FUN_085eb388(lVar3,0);
                if (*(int *)(*(long *)PTR_DAT_08e78410 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                FUN_085e9668(uVar7,uVar12,uVar17,uVar8,uVar13,uVar18,uVar14,&stack0x00000080,0);
                if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                   (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar3 != 0)) {
                  uVar7 = FUN_085eb198(lVar3,0);
                  if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                     (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar3 != 0)) {
                    uVar14 = uVar12;
                    uVar13 = uVar17;
                    uVar9 = FUN_085eb388(lVar3,0);
                    FUN_085e9668(uVar7,uVar12,uVar17,uVar9,uVar14,uVar13,uVar8,&stack0x00000060,0);
                    OVRLocatable_TrackingSpacePose__ComputeWorldPosition
                              (&stack0x00000080,unaff_x21 + 0x8c,&stack0x000000c0,0);
                    OVRLocatable_TrackingSpacePose__ComputeWorldPosition
                              (&stack0x00000060,unaff_x21 + 0x70,&stack0x000000a0,0);
                    unaff_x23[2] = fStack00000000000000c8;
                    *(undefined8 *)unaff_x23 = in_stack_000000c0;
                    unaff_x22[2] = fStack00000000000000a8;
                    *(undefined8 *)unaff_x22 = in_stack_000000a0;
                    puVar2 = PTR_DAT_08e8deb8;
                    fVar5 = *(float *)(unaff_x21 + 0xb8);
                    fVar19 = *(float *)(unaff_x21 + 0xbc);
                    fVar11 = *(float *)(unaff_x21 + 0xc0);
                    fVar16 = *(float *)(unaff_x21 + 0xc4);
                    fVar10 = fStack00000000000000d0 * fVar5;
                    fVar15 = fStack00000000000000d0 * fVar11 +
                             in_stack_000000d8 * fVar5 + fStack00000000000000cc * fVar16;
                    fVar6 = (in_stack_000000d8 * fVar16 - fStack00000000000000cc * fVar5) -
                            fStack00000000000000d0 * fVar19;
                    fVar20 = fVar15 - fStack00000000000000d4 * fVar19;
                    fVar21 = (fStack00000000000000d4 * fVar5 +
                             in_stack_000000d8 * fVar19 + fStack00000000000000d0 * fVar16) -
                             fStack00000000000000cc * fVar11;
                    fVar16 = (fStack00000000000000cc * fVar19 +
                             in_stack_000000d8 * fVar11 + fStack00000000000000d4 * fVar16) - fVar10;
                    fVar11 = fVar6 - fStack00000000000000d4 * fVar11;
                    fVar5 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8);
                    *unaff_x20 = (fVar10 * fVar21 + fVar5 * fVar11 + fVar15 * fVar20) -
                                 fVar6 * fVar16;
                    unaff_x20[1] = (fVar5 * fVar16 + fVar6 * fVar11 + fVar15 * fVar21) -
                                   fVar10 * fVar20;
                    unaff_x20[2] = (fVar6 * fVar20 + fVar10 * fVar11 + fVar15 * fVar16) -
                                   fVar5 * fVar21;
                    unaff_x20[3] = ((fVar15 * fVar11 - fVar5 * fVar20) - fVar6 * fVar21) -
                                   fVar10 * fVar16;
                    fVar5 = *(float *)(unaff_x21 + 0xb8);
                    fVar19 = *(float *)(unaff_x21 + 0xbc);
                    fVar11 = *(float *)(unaff_x21 + 0xc0);
                    fVar16 = *(float *)(unaff_x21 + 0xc4);
                    fVar10 = fStack00000000000000b0 * fVar5;
                    fVar15 = fStack00000000000000b0 * fVar11 +
                             in_stack_000000b8 * fVar5 + fStack00000000000000ac * fVar16;
                    fVar6 = (in_stack_000000b8 * fVar16 - fStack00000000000000ac * fVar5) -
                            fStack00000000000000b0 * fVar19;
                    fVar20 = fVar15 - fStack00000000000000b4 * fVar19;
                    fVar21 = (fStack00000000000000b4 * fVar5 +
                             in_stack_000000b8 * fVar19 + fStack00000000000000b0 * fVar16) -
                             fStack00000000000000ac * fVar11;
                    fVar16 = (fStack00000000000000ac * fVar19 +
                             in_stack_000000b8 * fVar11 + fStack00000000000000b4 * fVar16) - fVar10;
                    fVar11 = fVar6 - fStack00000000000000b4 * fVar11;
                    fVar5 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar2);
                    *unaff_x19 = (fVar10 * fVar21 + fVar5 * fVar11 + fVar15 * fVar20) -
                                 fVar6 * fVar16;
                    unaff_x19[1] = (fVar5 * fVar16 + fVar6 * fVar11 + fVar15 * fVar21) -
                                   fVar10 * fVar20;
                    unaff_x19[2] = (fVar6 * fVar20 + fVar10 * fVar11 + fVar15 * fVar16) -
                                   fVar5 * fVar21;
                    unaff_x19[3] = ((fVar15 * fVar11 - fVar5 * fVar20) - fVar6 * fVar21) -
                                   fVar10 * fVar16;
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
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


