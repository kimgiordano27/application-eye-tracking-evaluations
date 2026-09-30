/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 073df4cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetUseOverriddenExternalCameraStaticPose
          (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *unaff_x19;
  float *unaff_x22;
  undefined8 *unaff_x23;
  float fVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  float unaff_s8;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack000000000000002c;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  float in_stack_000000e8;
  float fStack00000000000000ec;
  
  fStack0000000000000018 = unaff_x22[2];
  fVar13 = unaff_x22[3];
  fVar17 = *unaff_x22;
  fVar16 = unaff_x22[1];
  fVar14 = unaff_x22[4];
  fVar15 = unaff_x22[5];
  fStack00000000000000ec = (float)FUN_073de418();
  uVar8 = *(undefined8 *)unaff_x22;
  fStack000000000000002c = unaff_x22[2];
  uVar9 = *(undefined8 *)(unaff_x22 + 3);
  fStack000000000000001c = unaff_x22[5];
  lVar2 = FUN_03c8f97c(*unaff_x23,1);
  if (DAT_09410538 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_09410538 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (lVar2 != 0) {
    iVar3 = (int)*(ulong *)(lVar2 + 0x18);
    if (iVar3 != 0) {
      fVar11 = param_3 * fVar15 + unaff_s8 * fVar13 + param_2 * fVar14;
      fVar6 = param_3 * (fStack0000000000000038 - fStack0000000000000018) +
              unaff_s8 * (in_stack_000000e8 - fVar17) + param_2 * (fStack000000000000003c - fVar16);
      fVar14 = (fStack0000000000000038 - fStack0000000000000018) * fVar15 +
               (in_stack_000000e8 - fVar17) * fVar13 + (fStack000000000000003c - fVar16) * fVar14;
      fVar13 = 1.0 / (fVar11 * fVar11 + -1.0);
      fVar16 = (fVar6 * fVar11 - fVar14) * fVar13;
      fVar13 = (fVar6 - fVar11 * fVar14) * fVar13;
      fVar14 = (float)uVar8 + (float)uVar9 * fVar16;
      fVar15 = (float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar9 >> 0x20) * fVar16;
      uVar7 = CONCAT44(fVar15,fVar14);
      fVar17 = fStack000000000000002c + fVar16 * fStack000000000000001c;
      fVar16 = (in_stack_000000e8 + unaff_s8 * fVar13) - fVar14;
      fVar6 = (fStack000000000000003c + param_2 * fVar13) - fVar15;
      fVar13 = (fStack0000000000000038 + param_3 * fVar13) - fVar17;
      fVar13 = SQRT(fVar13 * fVar13 + fVar16 * fVar16 + fVar6 * fVar6) - fStack00000000000000ec;
      *(float *)(lVar2 + 0x20) = fVar13;
      puVar1 = PTR_DAT_08e78410;
      if (1 < iVar3) {
        lVar4 = (*(ulong *)(lVar2 + 0x18) & 0xffffffff) - 1;
        pfVar5 = (float *)(lVar2 + 0x24);
        do {
          fVar16 = *pfVar5;
          if (*pfVar5 <= fVar13) {
            fVar16 = fVar13;
          }
          fVar13 = fVar16;
          lVar4 = lVar4 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar4 != 0);
      }
      if (fVar13 < fStack00000000000000ec) {
        fVar13 = SQRT(fStack00000000000000ec * fStack00000000000000ec - fVar13 * fVar13);
        uVar7 = CONCAT44(fVar15 - (float)((ulong)*(undefined8 *)(unaff_x22 + 3) >> 0x20) * fVar13,
                         fVar14 - (float)*(undefined8 *)(unaff_x22 + 3) * fVar13);
        fVar17 = fVar17 - fVar13 * unaff_x22[5];
      }
      uVar12 = (ulong)(uint)fVar17;
      uVar10 = uVar7 >> 0x20;
      uVar8 = FUN_073def24(uVar7,uVar10,uVar12);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_085e9668(uVar8,uVar10,uVar12,uStack0000000000000014,uStack0000000000000010,
                   uStack000000000000000c,uStack0000000000000008,&stack0x00000080,0);
      FUN_073df788(&stack0x00000040);
      unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *unaff_x19 = in_stack_00000040;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


