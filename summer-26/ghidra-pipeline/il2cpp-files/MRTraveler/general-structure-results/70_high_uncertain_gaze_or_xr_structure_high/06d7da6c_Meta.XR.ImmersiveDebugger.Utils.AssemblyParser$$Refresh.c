/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$Refresh
ENTRY_POINT: 06d7da6c
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


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Refresh
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined1 param_7 [16],float param_8)

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
  undefined8 *unaff_x26;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float unaff_s8;
  float fVar18;
  float unaff_s9;
  float fVar19;
  float unaff_s10;
  float unaff_s12;
  float fVar20;
  float unaff_s13;
  float unaff_s15;
  float in_s16;
  float in_s19;
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
  float fStack0000000000000168;
  float fStack000000000000016c;
  
  param_4 = in_s16 - param_4;
  param_5 = param_5 - param_8;
  param_6 = param_6 - in_s19;
  param_1 = param_2 - param_1;
  fVar20 = param_4 - param_3;
  fStack0000000000000168 = unaff_s13;
  fStack000000000000016c = unaff_s12;
  fVar4 = (float)FUN_056ba0fc();
  *unaff_x20 = (param_3 * param_6 + fVar4 * fVar20 + param_4 * param_5) - param_2 * param_1;
  unaff_x20[1] = (fVar4 * param_1 + param_2 * fVar20 + param_4 * param_6) - param_3 * param_5;
  unaff_x20[2] = (param_2 * param_5 + param_3 * fVar20 + param_4 * param_1) - fVar4 * param_6;
  unaff_x20[3] = ((param_4 * fVar20 - fVar4 * param_5) - param_2 * param_6) - param_3 * param_1;
  fVar4 = *(float *)(unaff_x21 + 0xb8);
  fVar16 = *(float *)(unaff_x21 + 0xbc);
  fVar12 = *(float *)(unaff_x21 + 0xc0);
  fVar20 = *(float *)(unaff_x21 + 0xc4);
  fVar13 = unaff_s8 * fVar12;
  fVar8 = unaff_s9 * fVar16 + unaff_s10 * fVar12 + unaff_s8 * fVar20;
  fVar17 = (unaff_s10 * fVar20 - unaff_s9 * fVar4) - unaff_s15 * fVar16;
  fVar18 = (unaff_s15 * fVar12 + unaff_s10 * fVar4 + unaff_s9 * fVar20) - unaff_s8 * fVar16;
  fVar20 = (unaff_s8 * fVar4 + unaff_s10 * fVar16 + unaff_s15 * fVar20) - unaff_s9 * fVar12;
  fVar12 = fVar8 - unaff_s15 * fVar4;
  fVar16 = fVar17 - fVar13;
  fVar4 = (float)FUN_056ba0fc(&stack0x000000e0,*unaff_x26);
  *unaff_x19 = (fVar13 * fVar20 + fVar4 * fVar16 + fVar17 * fVar18) - fVar8 * fVar12;
  unaff_x19[1] = (fVar4 * fVar12 + fVar8 * fVar16 + fVar17 * fVar20) - fVar13 * fVar18;
  unaff_x19[2] = (fVar8 * fVar18 + fVar13 * fVar16 + fVar17 * fVar12) - fVar4 * fVar20;
  unaff_x19[3] = ((fVar17 * fVar16 - fVar4 * fVar18) - fVar8 * fVar20) - fVar13 * fVar12;
  if (DAT_0940fff5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fff5 = '\x01';
  }
  puVar1 = PTR_DAT_08e68e18;
  fVar4 = DAT_018afcdc;
  pfVar3 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  fVar8 = *pfVar3;
  fVar12 = pfVar3[2];
  fVar20 = fStack0000000000000010 - pfVar3[1];
  fVar20 = (fStack000000000000000c - fVar12) * (fStack000000000000000c - fVar12) +
           (fStack0000000000000014 - fVar8) * (fStack0000000000000014 - fVar8) + fVar20 * fVar20;
  if (DAT_018afcdc <= fVar20) {
    fVar16 = fStack0000000000000168 - fVar8;
    fVar13 = in_stack_00000018 - pfVar3[1];
    fVar12 = fStack0000000000000008 - fVar12;
    fVar8 = fVar12 * fVar12;
    fVar20 = fStack0000000000000008;
    if (DAT_018afcdc <= fVar8 + fVar16 * fVar16 + fVar13 * fVar13) {
      *unaff_x23 = fStack0000000000000014;
      unaff_x23[1] = fStack0000000000000010;
      unaff_x23[2] = fStack000000000000000c;
      *unaff_x22 = fStack0000000000000168;
      unaff_x22[1] = in_stack_00000018;
      unaff_x22[2] = fStack0000000000000008;
      return;
    }
  }
  if ((*(long *)(unaff_x21 + 0x68) != 0) &&
     (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar2 != 0)) {
    fVar13 = (float)FUN_085eb198(lVar2,0);
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar12 = fVar12 - pfVar3[2];
    fVar16 = fVar12 * fVar12;
    if (fVar16 + (fVar13 - *pfVar3) * (fVar13 - *pfVar3) + (fVar8 - pfVar3[1]) * (fVar8 - pfVar3[1])
        < fVar4) {
      return;
    }
    if ((*(long *)(unaff_x21 + 0x68) != 0) &&
       (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
      fVar8 = (float)FUN_085eb198(lVar2,0);
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar12 = fVar12 - pfVar3[2];
      fVar13 = fVar12 * fVar12;
      if (fVar13 + (fVar8 - *pfVar3) * (fVar8 - *pfVar3) +
                   (fVar16 - pfVar3[1]) * (fVar16 - pfVar3[1]) < fVar4) {
        return;
      }
      if ((*(long *)(unaff_x21 + 0x68) != 0) &&
         (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x68), lVar2 != 0)) {
        fVar4 = (float)FUN_085eb388(lVar2,0);
        if (*(char *)(unaff_x24 + 0xffc) == '\0') {
          FUN_03c8f898(PTR_DAT_08e69f40);
          *(undefined1 *)(unaff_x24 + 0xffc) = 1;
        }
        pfVar3 = *(float **)(*unaff_x25 + 0xb8);
        fVar8 = pfVar3[3];
        fVar12 = fVar12 * pfVar3[2];
        fVar20 = fVar20 * fVar8;
        if (fStack000000000000016c < fVar20 + fVar12 + fVar4 * *pfVar3 + fVar13 * pfVar3[1]) {
          return;
        }
        if ((*(long *)(unaff_x21 + 0x68) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
          fVar4 = (float)FUN_085eb388(lVar2,0);
          if (*(char *)(unaff_x24 + 0xffc) == '\0') {
            FUN_03c8f898(PTR_DAT_08e69f40);
            *(undefined1 *)(unaff_x24 + 0xffc) = 1;
          }
          pfVar3 = *(float **)(*unaff_x25 + 0xb8);
          uVar11 = (ulong)(uint)pfVar3[3];
          uVar14 = (ulong)(uint)(fVar12 * pfVar3[2]);
          fVar8 = fVar8 * pfVar3[3];
          uVar9 = (ulong)(uint)fVar8;
          if (fStack000000000000016c <
              fVar8 + fVar12 * pfVar3[2] + fVar4 * *pfVar3 + fVar20 * pfVar3[1]) {
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
              uVar10 = uVar9;
              uVar15 = uVar14;
              uVar6 = FUN_085eb388(lVar2,0);
              if (*(int *)(*(long *)PTR_DAT_08e78410 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              FUN_085e9668(uVar5,uVar9,uVar14,uVar6,uVar10,uVar15,uVar11,&stack0x00000080,0);
              if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                 (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
                uVar5 = FUN_085eb198(lVar2,0);
                if ((*(long *)(unaff_x21 + 0x68) != 0) &&
                   (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x68) + 0x78), lVar2 != 0)) {
                  uVar11 = uVar9;
                  uVar10 = uVar14;
                  uVar7 = FUN_085eb388(lVar2,0);
                  FUN_085e9668(uVar5,uVar9,uVar14,uVar7,uVar11,uVar10,uVar6,&stack0x00000060,0);
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
                  fVar17 = *(float *)(unaff_x21 + 0xbc);
                  fVar12 = *(float *)(unaff_x21 + 0xc0);
                  fVar16 = *(float *)(unaff_x21 + 0xc4);
                  fVar8 = fStack00000000000000d0 * fVar4;
                  fVar13 = fStack00000000000000d0 * fVar12 +
                           in_stack_000000d8 * fVar4 + fStack00000000000000cc * fVar16;
                  fVar20 = (in_stack_000000d8 * fVar16 - fStack00000000000000cc * fVar4) -
                           fStack00000000000000d0 * fVar17;
                  fVar18 = fVar13 - fStack00000000000000d4 * fVar17;
                  fVar19 = (fStack00000000000000d4 * fVar4 +
                           in_stack_000000d8 * fVar17 + fStack00000000000000d0 * fVar16) -
                           fStack00000000000000cc * fVar12;
                  fVar16 = (fStack00000000000000cc * fVar17 +
                           in_stack_000000d8 * fVar12 + fStack00000000000000d4 * fVar16) - fVar8;
                  fVar12 = fVar20 - fStack00000000000000d4 * fVar12;
                  fVar4 = (float)FUN_056ba0fc(&stack0x00000100,*(undefined8 *)PTR_DAT_08e8deb8);
                  *unaff_x20 = (fVar8 * fVar19 + fVar4 * fVar12 + fVar13 * fVar18) - fVar20 * fVar16
                  ;
                  unaff_x20[1] = (fVar4 * fVar16 + fVar20 * fVar12 + fVar13 * fVar19) -
                                 fVar8 * fVar18;
                  unaff_x20[2] = (fVar20 * fVar18 + fVar8 * fVar12 + fVar13 * fVar16) -
                                 fVar4 * fVar19;
                  unaff_x20[3] = ((fVar13 * fVar12 - fVar4 * fVar18) - fVar20 * fVar19) -
                                 fVar8 * fVar16;
                  fVar4 = *(float *)(unaff_x21 + 0xb8);
                  fVar17 = *(float *)(unaff_x21 + 0xbc);
                  fVar12 = *(float *)(unaff_x21 + 0xc0);
                  fVar16 = *(float *)(unaff_x21 + 0xc4);
                  fVar8 = fStack00000000000000b0 * fVar4;
                  fVar13 = fStack00000000000000b0 * fVar12 +
                           in_stack_000000b8 * fVar4 + fStack00000000000000ac * fVar16;
                  fVar20 = (in_stack_000000b8 * fVar16 - fStack00000000000000ac * fVar4) -
                           fStack00000000000000b0 * fVar17;
                  fVar18 = fVar13 - fStack00000000000000b4 * fVar17;
                  fVar19 = (fStack00000000000000b4 * fVar4 +
                           in_stack_000000b8 * fVar17 + fStack00000000000000b0 * fVar16) -
                           fStack00000000000000ac * fVar12;
                  fVar16 = (fStack00000000000000ac * fVar17 +
                           in_stack_000000b8 * fVar12 + fStack00000000000000b4 * fVar16) - fVar8;
                  fVar12 = fVar20 - fStack00000000000000b4 * fVar12;
                  fVar4 = (float)FUN_056ba0fc(&stack0x000000e0,*(undefined8 *)puVar1);
                  *unaff_x19 = (fVar8 * fVar19 + fVar4 * fVar12 + fVar13 * fVar18) - fVar20 * fVar16
                  ;
                  unaff_x19[1] = (fVar4 * fVar16 + fVar20 * fVar12 + fVar13 * fVar19) -
                                 fVar8 * fVar18;
                  unaff_x19[2] = (fVar20 * fVar18 + fVar8 * fVar12 + fVar13 * fVar16) -
                                 fVar4 * fVar19;
                  unaff_x19[3] = ((fVar13 * fVar12 - fVar4 * fVar18) - fVar20 * fVar19) -
                                 fVar8 * fVar16;
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


