/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$GetImmersiveDebuggerEnabled
ENTRY_POINT: 06d7d934
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled(undefined8 param_1)

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
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar20;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar21;
  float unaff_s15;
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
  float fStack0000000000000168;
  float fStack000000000000016c;
  
  _cStack0000000000000100 = param_1;
  FUN_06d754f4();
  in_stack_000000e8 = in_stack_00000028;
  _cStack00000000000000e0 = in_stack_00000020;
  uVar6 = _cStack00000000000000e0;
  in_stack_000000f0 = in_stack_00000030;
  if ((cStack0000000000000100 == '\0') ||
     (cStack00000000000000e0 = (char)in_stack_00000020, cStack00000000000000e0 == '\0')) {
    return;
  }
  _cStack00000000000000e0 = uVar6;
  if (DAT_0940fffc == '\0') {
    FUN_03c8f898(PTR_DAT_08e69f40);
    DAT_0940fffc = '\x01';
  }
  puVar1 = PTR_DAT_08e8deb8;
  puVar2 = PTR_DAT_08e69f40;
  pfVar4 = *(float **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
  fVar5 = DAT_018b05d0;
  if ((in_stack_00000018._4_4_ * pfVar4[3] +
       unaff_s14 * pfVar4[2] + fStack0000000000000168 * *pfVar4 + fStack000000000000016c * pfVar4[1]
       <= DAT_018b05d0) &&
     (unaff_s10 * pfVar4[3] + unaff_s8 * pfVar4[2] + unaff_s9 * *pfVar4 + unaff_s15 * pfVar4[1] <=
      DAT_018b05d0)) {
    fVar5 = *(float *)(unaff_x21 + 0xb8);
    fVar18 = *(float *)(unaff_x21 + 0xbc);
    fVar14 = *(float *)(unaff_x21 + 0xc0);
    fVar9 = *(float *)(unaff_x21 + 0xc4);
    fVar15 = unaff_s14 * fVar14;
    fVar10 = fStack0000000000000168 * fVar18 + in_stack_00000018._4_4_ * fVar14 + unaff_s14 * fVar9;
    fVar19 = (in_stack_00000018._4_4_ * fVar9 - fStack0000000000000168 * fVar5) -
             fStack000000000000016c * fVar18;
    fVar20 = (fStack000000000000016c * fVar14 +
             in_stack_00000018._4_4_ * fVar5 + fStack0000000000000168 * fVar9) - unaff_s14 * fVar18;
    fVar18 = (unaff_s14 * fVar5 + in_stack_00000018._4_4_ * fVar18 + fStack000000000000016c * fVar9)
             - fStack0000000000000168 * fVar14;
    fVar21 = fVar10 - fStack000000000000016c * fVar5;
    fStack000000000000016c = DAT_018b05d0;
    fVar14 = fVar19 - fVar15;
    fStack0000000000000168 = unaff_s13;
    fVar9 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8);
    fVar5 = fStack000000000000016c;
    unaff_s13 = fStack0000000000000168;
    *unaff_x20 = (fVar15 * fVar18 + fVar9 * fVar14 + fVar19 * fVar20) - fVar10 * fVar21;
    unaff_x20[1] = (fVar9 * fVar21 + fVar10 * fVar14 + fVar19 * fVar18) - fVar15 * fVar20;
    unaff_x20[2] = (fVar10 * fVar20 + fVar15 * fVar14 + fVar19 * fVar21) - fVar9 * fVar18;
    unaff_x20[3] = ((fVar19 * fVar14 - fVar9 * fVar20) - fVar10 * fVar18) - fVar15 * fVar21;
    fVar9 = *(float *)(unaff_x21 + 0xb8);
    fVar19 = *(float *)(unaff_x21 + 0xbc);
    fVar15 = *(float *)(unaff_x21 + 0xc0);
    fVar10 = *(float *)(unaff_x21 + 0xc4);
    fVar18 = unaff_s8 * fVar15;
    fVar14 = unaff_s9 * fVar19 + unaff_s10 * fVar15 + unaff_s8 * fVar10;
    fVar20 = (unaff_s10 * fVar10 - unaff_s9 * fVar9) - unaff_s15 * fVar19;
    fVar21 = (unaff_s15 * fVar15 + unaff_s10 * fVar9 + unaff_s9 * fVar10) - unaff_s8 * fVar19;
    fVar10 = (unaff_s8 * fVar9 + unaff_s10 * fVar19 + unaff_s15 * fVar10) - unaff_s9 * fVar15;
    fVar15 = fVar14 - unaff_s15 * fVar9;
    fVar19 = fVar20 - fVar18;
    fVar9 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar1);
    *unaff_x19 = (fVar18 * fVar10 + fVar9 * fVar19 + fVar20 * fVar21) - fVar14 * fVar15;
    unaff_x19[1] = (fVar9 * fVar15 + fVar14 * fVar19 + fVar20 * fVar10) - fVar18 * fVar21;
    unaff_x19[2] = (fVar14 * fVar21 + fVar18 * fVar19 + fVar20 * fVar15) - fVar9 * fVar10;
    unaff_x19[3] = ((fVar20 * fVar19 - fVar9 * fVar21) - fVar14 * fVar10) - fVar18 * fVar15;
  }
  if (DAT_0940fff5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fff5 = '\x01';
  }
  puVar1 = PTR_DAT_08e68e18;
  fVar9 = DAT_018afcdc;
  pfVar4 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  fVar14 = *pfVar4;
  fVar15 = pfVar4[2];
  fVar10 = fStack0000000000000010 - pfVar4[1];
  fVar10 = (in_stack_00000008._4_4_ - fVar15) * (in_stack_00000008._4_4_ - fVar15) +
           (fStack0000000000000014 - fVar14) * (fStack0000000000000014 - fVar14) + fVar10 * fVar10;
  if (DAT_018afcdc <= fVar10) {
    fVar19 = unaff_s13 - fVar14;
    fVar18 = unaff_s11 - pfVar4[1];
    fVar15 = unaff_s12 - fVar15;
    fVar14 = fVar15 * fVar15;
    fVar10 = unaff_s12;
    if (DAT_018afcdc <= fVar14 + fVar19 * fVar19 + fVar18 * fVar18) {
      *unaff_x23 = fStack0000000000000014;
      unaff_x23[1] = fStack0000000000000010;
      unaff_x23[2] = in_stack_00000008._4_4_;
      *unaff_x22 = unaff_s13;
      unaff_x22[1] = unaff_s11;
      unaff_x22[2] = unaff_s12;
      return;
    }
  }
  if ((*(long *)(unaff_x21 + 0x68) != 0) &&
     (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar3 != 0)) {
    fVar18 = (float)FUN_085eb198(lVar3,0);
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar15 = fVar15 - pfVar4[2];
    fVar19 = fVar15 * fVar15;
    if (fVar19 + (fVar18 - *pfVar4) * (fVar18 - *pfVar4) +
                 (fVar14 - pfVar4[1]) * (fVar14 - pfVar4[1]) < fVar9) {
      return;
    }
    if ((*(long *)(unaff_x21 + 0x68) != 0) &&
       (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar3 != 0)) {
      fVar14 = (float)FUN_085eb198(lVar3,0);
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar15 = fVar15 - pfVar4[2];
      fVar18 = fVar15 * fVar15;
      if (fVar18 + (fVar14 - *pfVar4) * (fVar14 - *pfVar4) +
                   (fVar19 - pfVar4[1]) * (fVar19 - pfVar4[1]) < fVar9) {
        return;
      }
      if ((*(long *)(unaff_x21 + 0x68) != 0) &&
         (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar3 != 0)) {
        fVar9 = (float)FUN_085eb388(lVar3,0);
        if (DAT_0940fffc == '\0') {
          FUN_03c8f898(PTR_DAT_08e69f40);
          DAT_0940fffc = '\x01';
        }
        pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
        fVar14 = pfVar4[3];
        fVar15 = fVar15 * pfVar4[2];
        fVar10 = fVar10 * fVar14;
        if (fVar5 < fVar10 + fVar15 + fVar9 * *pfVar4 + fVar18 * pfVar4[1]) {
          return;
        }
        if ((*(long *)(unaff_x21 + 0x68) != 0) &&
           (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar3 != 0)) {
          fVar9 = (float)FUN_085eb388(lVar3,0);
          if (DAT_0940fffc == '\0') {
            FUN_03c8f898(PTR_DAT_08e69f40);
            DAT_0940fffc = '\x01';
          }
          pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
          uVar13 = (ulong)(uint)pfVar4[3];
          uVar16 = (ulong)(uint)(fVar15 * pfVar4[2]);
          fVar14 = fVar14 * pfVar4[3];
          uVar11 = (ulong)(uint)fVar14;
          if (fVar5 < fVar14 + fVar15 * pfVar4[2] + fVar9 * *pfVar4 + fVar10 * pfVar4[1]) {
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
            uVar6 = FUN_085eb198(lVar3,0);
            if ((*(long *)(unaff_x21 + 0x68) != 0) &&
               (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar3 != 0)) {
              uVar12 = uVar11;
              uVar17 = uVar16;
              uVar7 = FUN_085eb388(lVar3,0);
              if (*(int *)(*(long *)PTR_DAT_08e78410 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              FUN_085e9668(uVar6,uVar11,uVar16,uVar7,uVar12,uVar17,uVar13,&stack0x00000080,0);
              if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                 (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar3 != 0)) {
                uVar6 = FUN_085eb198(lVar3,0);
                if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                   (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar3 != 0)) {
                  uVar13 = uVar11;
                  uVar12 = uVar16;
                  uVar8 = FUN_085eb388(lVar3,0);
                  FUN_085e9668(uVar6,uVar11,uVar16,uVar8,uVar13,uVar12,uVar7,&stack0x00000060,0);
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
                  fVar14 = *(float *)(unaff_x21 + 0xc0);
                  fVar18 = *(float *)(unaff_x21 + 0xc4);
                  fVar10 = fStack00000000000000d0 * fVar5;
                  fVar15 = fStack00000000000000d0 * fVar14 +
                           in_stack_000000d8 * fVar5 + fStack00000000000000cc * fVar18;
                  fVar9 = (in_stack_000000d8 * fVar18 - fStack00000000000000cc * fVar5) -
                          fStack00000000000000d0 * fVar19;
                  fVar20 = fVar15 - fStack00000000000000d4 * fVar19;
                  fVar21 = (fStack00000000000000d4 * fVar5 +
                           in_stack_000000d8 * fVar19 + fStack00000000000000d0 * fVar18) -
                           fStack00000000000000cc * fVar14;
                  fVar18 = (fStack00000000000000cc * fVar19 +
                           in_stack_000000d8 * fVar14 + fStack00000000000000d4 * fVar18) - fVar10;
                  fVar14 = fVar9 - fStack00000000000000d4 * fVar14;
                  fVar5 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8);
                  *unaff_x20 = (fVar10 * fVar21 + fVar5 * fVar14 + fVar15 * fVar20) - fVar9 * fVar18
                  ;
                  unaff_x20[1] = (fVar5 * fVar18 + fVar9 * fVar14 + fVar15 * fVar21) -
                                 fVar10 * fVar20;
                  unaff_x20[2] = (fVar9 * fVar20 + fVar10 * fVar14 + fVar15 * fVar18) -
                                 fVar5 * fVar21;
                  unaff_x20[3] = ((fVar15 * fVar14 - fVar5 * fVar20) - fVar9 * fVar21) -
                                 fVar10 * fVar18;
                  fVar5 = *(float *)(unaff_x21 + 0xb8);
                  fVar19 = *(float *)(unaff_x21 + 0xbc);
                  fVar14 = *(float *)(unaff_x21 + 0xc0);
                  fVar18 = *(float *)(unaff_x21 + 0xc4);
                  fVar10 = fStack00000000000000b0 * fVar5;
                  fVar15 = fStack00000000000000b0 * fVar14 +
                           in_stack_000000b8 * fVar5 + fStack00000000000000ac * fVar18;
                  fVar9 = (in_stack_000000b8 * fVar18 - fStack00000000000000ac * fVar5) -
                          fStack00000000000000b0 * fVar19;
                  fVar20 = fVar15 - fStack00000000000000b4 * fVar19;
                  fVar21 = (fStack00000000000000b4 * fVar5 +
                           in_stack_000000b8 * fVar19 + fStack00000000000000b0 * fVar18) -
                           fStack00000000000000ac * fVar14;
                  fVar18 = (fStack00000000000000ac * fVar19 +
                           in_stack_000000b8 * fVar14 + fStack00000000000000b4 * fVar18) - fVar10;
                  fVar14 = fVar9 - fStack00000000000000b4 * fVar14;
                  fVar5 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar2);
                  *unaff_x19 = (fVar10 * fVar21 + fVar5 * fVar14 + fVar15 * fVar20) - fVar9 * fVar18
                  ;
                  unaff_x19[1] = (fVar5 * fVar18 + fVar9 * fVar14 + fVar15 * fVar21) -
                                 fVar10 * fVar20;
                  unaff_x19[2] = (fVar9 * fVar20 + fVar10 * fVar14 + fVar15 * fVar18) -
                                 fVar5 * fVar21;
                  unaff_x19[3] = ((fVar15 * fVar14 - fVar5 * fVar20) - fVar9 * fVar21) -
                                 fVar10 * fVar18;
                  return;
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


