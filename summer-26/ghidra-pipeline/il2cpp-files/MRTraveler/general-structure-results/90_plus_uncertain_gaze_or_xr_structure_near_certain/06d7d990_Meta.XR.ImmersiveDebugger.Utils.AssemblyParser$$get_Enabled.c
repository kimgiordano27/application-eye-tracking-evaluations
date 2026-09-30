/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$get_Enabled
ENTRY_POINT: 06d7d990
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


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__get_Enabled(void)

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
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar19;
  float unaff_s13;
  float unaff_s14;
  float fVar20;
  float unaff_s15;
  float in_s21;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
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
  float fStack0000000000000168;
  float fStack000000000000016c;
  
  puVar1 = PTR_DAT_08e8deb8;
  pfVar3 = *(float **)(*unaff_x25 + 0xb8);
  fVar4 = DAT_018b05d0;
  if ((fStack000000000000001c * pfVar3[3] +
       unaff_s14 * pfVar3[2] + in_s21 * *pfVar3 + fStack000000000000016c * pfVar3[1] <= DAT_018b05d0
      ) && (unaff_s10 * pfVar3[3] +
            unaff_s8 * pfVar3[2] + unaff_s9 * *pfVar3 + unaff_s15 * pfVar3[1] <= DAT_018b05d0)) {
    fVar4 = *(float *)(unaff_x21 + 0xb8);
    fVar17 = *(float *)(unaff_x21 + 0xbc);
    fVar13 = *(float *)(unaff_x21 + 0xc0);
    fVar8 = *(float *)(unaff_x21 + 0xc4);
    fVar14 = unaff_s14 * fVar13;
    fVar9 = in_s21 * fVar17 + fStack000000000000001c * fVar13 + unaff_s14 * fVar8;
    fVar18 = (fStack000000000000001c * fVar8 - in_s21 * fVar4) - fStack000000000000016c * fVar17;
    fVar19 = (fStack000000000000016c * fVar13 + fStack000000000000001c * fVar4 + in_s21 * fVar8) -
             unaff_s14 * fVar17;
    fVar17 = (unaff_s14 * fVar4 + fStack000000000000001c * fVar17 + fStack000000000000016c * fVar8)
             - in_s21 * fVar13;
    fVar20 = fVar9 - fStack000000000000016c * fVar4;
    fStack000000000000016c = DAT_018b05d0;
    fVar13 = fVar18 - fVar14;
    fStack0000000000000168 = unaff_s13;
    fVar8 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8);
    fVar4 = fStack000000000000016c;
    unaff_s13 = fStack0000000000000168;
    *unaff_x20 = (fVar14 * fVar17 + fVar8 * fVar13 + fVar18 * fVar19) - fVar9 * fVar20;
    unaff_x20[1] = (fVar8 * fVar20 + fVar9 * fVar13 + fVar18 * fVar17) - fVar14 * fVar19;
    unaff_x20[2] = (fVar9 * fVar19 + fVar14 * fVar13 + fVar18 * fVar20) - fVar8 * fVar17;
    unaff_x20[3] = ((fVar18 * fVar13 - fVar8 * fVar19) - fVar9 * fVar17) - fVar14 * fVar20;
    fVar8 = *(float *)(unaff_x21 + 0xb8);
    fVar18 = *(float *)(unaff_x21 + 0xbc);
    fVar14 = *(float *)(unaff_x21 + 0xc0);
    fVar9 = *(float *)(unaff_x21 + 0xc4);
    fVar17 = unaff_s8 * fVar14;
    fVar13 = unaff_s9 * fVar18 + unaff_s10 * fVar14 + unaff_s8 * fVar9;
    fVar19 = (unaff_s10 * fVar9 - unaff_s9 * fVar8) - unaff_s15 * fVar18;
    fVar20 = (unaff_s15 * fVar14 + unaff_s10 * fVar8 + unaff_s9 * fVar9) - unaff_s8 * fVar18;
    fVar9 = (unaff_s8 * fVar8 + unaff_s10 * fVar18 + unaff_s15 * fVar9) - unaff_s9 * fVar14;
    fVar14 = fVar13 - unaff_s15 * fVar8;
    fVar18 = fVar19 - fVar17;
    fVar8 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar1);
    *unaff_x19 = (fVar17 * fVar9 + fVar8 * fVar18 + fVar19 * fVar20) - fVar13 * fVar14;
    unaff_x19[1] = (fVar8 * fVar14 + fVar13 * fVar18 + fVar19 * fVar9) - fVar17 * fVar20;
    unaff_x19[2] = (fVar13 * fVar20 + fVar17 * fVar18 + fVar19 * fVar14) - fVar8 * fVar9;
    unaff_x19[3] = ((fVar19 * fVar18 - fVar8 * fVar20) - fVar13 * fVar9) - fVar17 * fVar14;
  }
  if (DAT_0940fff5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fff5 = '\x01';
  }
  puVar1 = PTR_DAT_08e68e18;
  fVar8 = DAT_018afcdc;
  pfVar3 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  fVar13 = *pfVar3;
  fVar14 = pfVar3[2];
  fVar9 = fStack0000000000000010 - pfVar3[1];
  fVar9 = (fStack000000000000000c - fVar14) * (fStack000000000000000c - fVar14) +
          (fStack0000000000000014 - fVar13) * (fStack0000000000000014 - fVar13) + fVar9 * fVar9;
  if (DAT_018afcdc <= fVar9) {
    fVar18 = unaff_s13 - fVar13;
    fVar17 = fStack0000000000000018 - pfVar3[1];
    fVar14 = fStack0000000000000008 - fVar14;
    fVar13 = fVar14 * fVar14;
    fVar9 = fStack0000000000000008;
    if (DAT_018afcdc <= fVar13 + fVar18 * fVar18 + fVar17 * fVar17) {
      *unaff_x23 = fStack0000000000000014;
      unaff_x23[1] = fStack0000000000000010;
      unaff_x23[2] = fStack000000000000000c;
      *unaff_x22 = unaff_s13;
      unaff_x22[1] = fStack0000000000000018;
      unaff_x22[2] = fStack0000000000000008;
      return;
    }
  }
  if ((*(long *)(unaff_x21 + 0x68) != 0) &&
     (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar2 != 0)) {
    fVar17 = (float)FUN_085eb198(lVar2,0);
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar14 = fVar14 - pfVar3[2];
    fVar18 = fVar14 * fVar14;
    if (fVar18 + (fVar17 - *pfVar3) * (fVar17 - *pfVar3) +
                 (fVar13 - pfVar3[1]) * (fVar13 - pfVar3[1]) < fVar8) {
      return;
    }
    if ((*(long *)(unaff_x21 + 0x68) != 0) &&
       (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
      fVar13 = (float)FUN_085eb198(lVar2,0);
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar14 = fVar14 - pfVar3[2];
      fVar17 = fVar14 * fVar14;
      if (fVar17 + (fVar13 - *pfVar3) * (fVar13 - *pfVar3) +
                   (fVar18 - pfVar3[1]) * (fVar18 - pfVar3[1]) < fVar8) {
        return;
      }
      if ((*(long *)(unaff_x21 + 0x68) != 0) &&
         (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar2 != 0)) {
        fVar8 = (float)FUN_085eb388(lVar2,0);
        if (*(char *)(unaff_x24 + 0xffc) == '\0') {
          FUN_03c8f898(PTR_DAT_08e69f40);
          *(undefined1 *)(unaff_x24 + 0xffc) = 1;
        }
        pfVar3 = *(float **)(*unaff_x25 + 0xb8);
        fVar13 = pfVar3[3];
        fVar14 = fVar14 * pfVar3[2];
        fVar9 = fVar9 * fVar13;
        if (fVar4 < fVar9 + fVar14 + fVar8 * *pfVar3 + fVar17 * pfVar3[1]) {
          return;
        }
        if ((*(long *)(unaff_x21 + 0x68) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
          fVar8 = (float)FUN_085eb388(lVar2,0);
          if (*(char *)(unaff_x24 + 0xffc) == '\0') {
            FUN_03c8f898(PTR_DAT_08e69f40);
            *(undefined1 *)(unaff_x24 + 0xffc) = 1;
          }
          pfVar3 = *(float **)(*unaff_x25 + 0xb8);
          uVar12 = (ulong)(uint)pfVar3[3];
          uVar15 = (ulong)(uint)(fVar14 * pfVar3[2]);
          fVar13 = fVar13 * pfVar3[3];
          uVar10 = (ulong)(uint)fVar13;
          if (fVar4 < fVar13 + fVar14 * pfVar3[2] + fVar8 * *pfVar3 + fVar9 * pfVar3[1]) {
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
            uVar5 = FUN_085eb198(lVar2,0);
            if ((*(long *)(unaff_x21 + 0x68) != 0) &&
               (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar2 != 0)) {
              uVar11 = uVar10;
              uVar16 = uVar15;
              uVar6 = FUN_085eb388(lVar2,0);
              if (*(int *)(*(long *)PTR_DAT_08e78410 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              FUN_085e9668(uVar5,uVar10,uVar15,uVar6,uVar11,uVar16,uVar12,&stack0x00000080,0);
              if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                 (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
                uVar5 = FUN_085eb198(lVar2,0);
                if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                   (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
                  uVar12 = uVar10;
                  uVar11 = uVar15;
                  uVar7 = FUN_085eb388(lVar2,0);
                  FUN_085e9668(uVar5,uVar10,uVar15,uVar7,uVar12,uVar11,uVar6,&stack0x00000060,0);
                  OVRLocatable_TrackingSpacePose__ComputeWorldPosition
                            (&stack0x00000080,unaff_x21 + 0x8c,&stack0x000000c0,0);
                  OVRLocatable_TrackingSpacePose__ComputeWorldPosition
                            (&stack0x00000060,unaff_x21 + 0x70,&stack0x000000a0,0);
                  unaff_x23[2] = fStack00000000000000c8;
                  *(undefined8 *)unaff_x23 = in_stack_000000c0;
                  unaff_x22[2] = fStack00000000000000a8;
                  *(undefined8 *)unaff_x22 = in_stack_000000a0;
                  puVar1 = PTR_DAT_08e8deb8;
                  fVar4 = *(float *)(unaff_x21 + 0xb8);
                  fVar18 = *(float *)(unaff_x21 + 0xbc);
                  fVar13 = *(float *)(unaff_x21 + 0xc0);
                  fVar17 = *(float *)(unaff_x21 + 0xc4);
                  fVar9 = fStack00000000000000d0 * fVar4;
                  fVar14 = fStack00000000000000d0 * fVar13 +
                           in_stack_000000d8 * fVar4 + fStack00000000000000cc * fVar17;
                  fVar8 = (in_stack_000000d8 * fVar17 - fStack00000000000000cc * fVar4) -
                          fStack00000000000000d0 * fVar18;
                  fVar19 = fVar14 - fStack00000000000000d4 * fVar18;
                  fVar20 = (fStack00000000000000d4 * fVar4 +
                           in_stack_000000d8 * fVar18 + fStack00000000000000d0 * fVar17) -
                           fStack00000000000000cc * fVar13;
                  fVar17 = (fStack00000000000000cc * fVar18 +
                           in_stack_000000d8 * fVar13 + fStack00000000000000d4 * fVar17) - fVar9;
                  fVar13 = fVar8 - fStack00000000000000d4 * fVar13;
                  fVar4 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8);
                  *unaff_x20 = (fVar9 * fVar20 + fVar4 * fVar13 + fVar14 * fVar19) - fVar8 * fVar17;
                  unaff_x20[1] = (fVar4 * fVar17 + fVar8 * fVar13 + fVar14 * fVar20) -
                                 fVar9 * fVar19;
                  unaff_x20[2] = (fVar8 * fVar19 + fVar9 * fVar13 + fVar14 * fVar17) -
                                 fVar4 * fVar20;
                  unaff_x20[3] = ((fVar14 * fVar13 - fVar4 * fVar19) - fVar8 * fVar20) -
                                 fVar9 * fVar17;
                  fVar4 = *(float *)(unaff_x21 + 0xb8);
                  fVar18 = *(float *)(unaff_x21 + 0xbc);
                  fVar13 = *(float *)(unaff_x21 + 0xc0);
                  fVar17 = *(float *)(unaff_x21 + 0xc4);
                  fVar9 = fStack00000000000000b0 * fVar4;
                  fVar14 = fStack00000000000000b0 * fVar13 +
                           in_stack_000000b8 * fVar4 + fStack00000000000000ac * fVar17;
                  fVar8 = (in_stack_000000b8 * fVar17 - fStack00000000000000ac * fVar4) -
                          fStack00000000000000b0 * fVar18;
                  fVar19 = fVar14 - fStack00000000000000b4 * fVar18;
                  fVar20 = (fStack00000000000000b4 * fVar4 +
                           in_stack_000000b8 * fVar18 + fStack00000000000000b0 * fVar17) -
                           fStack00000000000000ac * fVar13;
                  fVar17 = (fStack00000000000000ac * fVar18 +
                           in_stack_000000b8 * fVar13 + fStack00000000000000b4 * fVar17) - fVar9;
                  fVar13 = fVar8 - fStack00000000000000b4 * fVar13;
                  fVar4 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar1);
                  *unaff_x19 = (fVar9 * fVar20 + fVar4 * fVar13 + fVar14 * fVar19) - fVar8 * fVar17;
                  unaff_x19[1] = (fVar4 * fVar17 + fVar8 * fVar13 + fVar14 * fVar20) -
                                 fVar9 * fVar19;
                  unaff_x19[2] = (fVar8 * fVar19 + fVar9 * fVar13 + fVar14 * fVar17) -
                                 fVar4 * fVar20;
                  unaff_x19[3] = ((fVar14 * fVar13 - fVar4 * fVar19) - fVar8 * fVar20) -
                                 fVar9 * fVar17;
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


