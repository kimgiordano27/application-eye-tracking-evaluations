/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$LoadAssembliesAsync
ENTRY_POINT: 06d7dc08
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__LoadAssembliesAsync(void)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  float *unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  float *unaff_x22;
  float *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar4;
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
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_s12;
  float unaff_s13;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
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
  
  if (DAT_0940fff5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fff5 = '\x01';
  }
  puVar1 = PTR_DAT_08e68e18;
  fVar5 = DAT_018afcdc;
  pfVar3 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  fVar9 = *pfVar3;
  fVar14 = pfVar3[2];
  fVar17 = fStack0000000000000010 - pfVar3[1];
  fVar17 = (fStack000000000000000c - fVar14) * (fStack000000000000000c - fVar14) +
           (fStack0000000000000014 - fVar9) * (fStack0000000000000014 - fVar9) + fVar17 * fVar17;
  if (DAT_018afcdc <= fVar17) {
    fVar10 = unaff_s13 - fVar9;
    fVar4 = in_stack_00000018 - pfVar3[1];
    fVar14 = fStack0000000000000008 - fVar14;
    fVar9 = fVar14 * fVar14;
    fVar17 = fStack0000000000000008;
    if (DAT_018afcdc <= fVar9 + fVar10 * fVar10 + fVar4 * fVar4) {
      *unaff_x23 = fStack0000000000000014;
      unaff_x23[1] = fStack0000000000000010;
      unaff_x23[2] = fStack000000000000000c;
      *unaff_x22 = unaff_s13;
      unaff_x22[1] = in_stack_00000018;
      unaff_x22[2] = fStack0000000000000008;
      return;
    }
  }
  if ((*(long *)(unaff_x21 + 0x68) != 0) &&
     (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar2 != 0)) {
    fVar4 = (float)FUN_085eb198(lVar2,0);
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar14 = fVar14 - pfVar3[2];
    fVar10 = fVar14 * fVar14;
    if (fVar10 + (fVar4 - *pfVar3) * (fVar4 - *pfVar3) + (fVar9 - pfVar3[1]) * (fVar9 - pfVar3[1]) <
        fVar5) {
      return;
    }
    if ((*(long *)(unaff_x21 + 0x68) != 0) &&
       (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
      fVar9 = (float)FUN_085eb198(lVar2,0);
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar14 = fVar14 - pfVar3[2];
      fVar4 = fVar14 * fVar14;
      if (fVar4 + (fVar9 - *pfVar3) * (fVar9 - *pfVar3) +
                  (fVar10 - pfVar3[1]) * (fVar10 - pfVar3[1]) < fVar5) {
        return;
      }
      if ((*(long *)(unaff_x21 + 0x68) != 0) &&
         (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar2 != 0)) {
        fVar5 = (float)FUN_085eb388(lVar2,0);
        if (*(char *)(unaff_x24 + 0xffc) == '\0') {
          FUN_03c8f898(PTR_DAT_08e69f40);
          *(undefined1 *)(unaff_x24 + 0xffc) = 1;
        }
        pfVar3 = *(float **)(*unaff_x25 + 0xb8);
        fVar9 = pfVar3[3];
        fVar14 = fVar14 * pfVar3[2];
        fVar17 = fVar17 * fVar9;
        if (unaff_s12 < fVar17 + fVar14 + fVar5 * *pfVar3 + fVar4 * pfVar3[1]) {
          return;
        }
        if ((*(long *)(unaff_x21 + 0x68) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
          fVar5 = (float)FUN_085eb388(lVar2,0);
          if (*(char *)(unaff_x24 + 0xffc) == '\0') {
            FUN_03c8f898(PTR_DAT_08e69f40);
            *(undefined1 *)(unaff_x24 + 0xffc) = 1;
          }
          pfVar3 = *(float **)(*unaff_x25 + 0xb8);
          uVar13 = (ulong)(uint)pfVar3[3];
          uVar15 = (ulong)(uint)(fVar14 * pfVar3[2]);
          fVar9 = fVar9 * pfVar3[3];
          uVar11 = (ulong)(uint)fVar9;
          if (unaff_s12 < fVar9 + fVar14 * pfVar3[2] + fVar5 * *pfVar3 + fVar17 * pfVar3[1]) {
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
             (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar2 != 0)) {
            uVar6 = FUN_085eb198(lVar2,0);
            if ((*(long *)(unaff_x21 + 0x68) != 0) &&
               (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar2 != 0)) {
              uVar12 = uVar11;
              uVar16 = uVar15;
              uVar7 = FUN_085eb388(lVar2,0);
              if (*(int *)(*(long *)PTR_DAT_08e78410 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              FUN_085e9668(uVar6,uVar11,uVar15,uVar7,uVar12,uVar16,uVar13,&stack0x00000080,0);
              if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                 (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
                uVar6 = FUN_085eb198(lVar2,0);
                if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                   (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
                  uVar13 = uVar11;
                  uVar12 = uVar15;
                  uVar8 = FUN_085eb388(lVar2,0);
                  FUN_085e9668(uVar6,uVar11,uVar15,uVar8,uVar13,uVar12,uVar7,&stack0x00000060,0);
                  OVRLocatable_TrackingSpacePose__ComputeWorldPosition
                            (&stack0x00000080,unaff_x21 + 0x8c,&stack0x000000c0,0);
                  OVRLocatable_TrackingSpacePose__ComputeWorldPosition
                            (&stack0x00000060,unaff_x21 + 0x70,&stack0x000000a0,0);
                  unaff_x23[2] = fStack00000000000000c8;
                  *(undefined8 *)unaff_x23 = in_stack_000000c0;
                  unaff_x22[2] = fStack00000000000000a8;
                  *(undefined8 *)unaff_x22 = in_stack_000000a0;
                  puVar1 = PTR_DAT_08e8deb8;
                  fVar5 = *(float *)(unaff_x21 + 0xb8);
                  fVar18 = *(float *)(unaff_x21 + 0xbc);
                  fVar14 = *(float *)(unaff_x21 + 0xc0);
                  fVar10 = *(float *)(unaff_x21 + 0xc4);
                  fVar9 = fStack00000000000000d0 * fVar5;
                  fVar4 = fStack00000000000000d0 * fVar14 +
                          in_stack_000000d8 * fVar5 + fStack00000000000000cc * fVar10;
                  fVar17 = (in_stack_000000d8 * fVar10 - fStack00000000000000cc * fVar5) -
                           fStack00000000000000d0 * fVar18;
                  fVar19 = fVar4 - fStack00000000000000d4 * fVar18;
                  fVar20 = (fStack00000000000000d4 * fVar5 +
                           in_stack_000000d8 * fVar18 + fStack00000000000000d0 * fVar10) -
                           fStack00000000000000cc * fVar14;
                  fVar10 = (fStack00000000000000cc * fVar18 +
                           in_stack_000000d8 * fVar14 + fStack00000000000000d4 * fVar10) - fVar9;
                  fVar14 = fVar17 - fStack00000000000000d4 * fVar14;
                  fVar5 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8);
                  *unaff_x20 = (fVar9 * fVar20 + fVar5 * fVar14 + fVar4 * fVar19) - fVar17 * fVar10;
                  unaff_x20[1] = (fVar5 * fVar10 + fVar17 * fVar14 + fVar4 * fVar20) -
                                 fVar9 * fVar19;
                  unaff_x20[2] = (fVar17 * fVar19 + fVar9 * fVar14 + fVar4 * fVar10) -
                                 fVar5 * fVar20;
                  unaff_x20[3] = ((fVar4 * fVar14 - fVar5 * fVar19) - fVar17 * fVar20) -
                                 fVar9 * fVar10;
                  fVar5 = *(float *)(unaff_x21 + 0xb8);
                  fVar18 = *(float *)(unaff_x21 + 0xbc);
                  fVar14 = *(float *)(unaff_x21 + 0xc0);
                  fVar10 = *(float *)(unaff_x21 + 0xc4);
                  fVar9 = fStack00000000000000b0 * fVar5;
                  fVar4 = fStack00000000000000b0 * fVar14 +
                          in_stack_000000b8 * fVar5 + fStack00000000000000ac * fVar10;
                  fVar17 = (in_stack_000000b8 * fVar10 - fStack00000000000000ac * fVar5) -
                           fStack00000000000000b0 * fVar18;
                  fVar19 = fVar4 - fStack00000000000000b4 * fVar18;
                  fVar20 = (fStack00000000000000b4 * fVar5 +
                           in_stack_000000b8 * fVar18 + fStack00000000000000b0 * fVar10) -
                           fStack00000000000000ac * fVar14;
                  fVar10 = (fStack00000000000000ac * fVar18 +
                           in_stack_000000b8 * fVar14 + fStack00000000000000b4 * fVar10) - fVar9;
                  fVar14 = fVar17 - fStack00000000000000b4 * fVar14;
                  fVar5 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar1);
                  *unaff_x19 = (fVar9 * fVar20 + fVar5 * fVar14 + fVar4 * fVar19) - fVar17 * fVar10;
                  unaff_x19[1] = (fVar5 * fVar10 + fVar17 * fVar14 + fVar4 * fVar20) -
                                 fVar9 * fVar19;
                  unaff_x19[2] = (fVar17 * fVar19 + fVar9 * fVar14 + fVar4 * fVar10) -
                                 fVar5 * fVar20;
                  unaff_x19[3] = ((fVar4 * fVar14 - fVar5 * fVar19) - fVar17 * fVar20) -
                                 fVar9 * fVar10;
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


