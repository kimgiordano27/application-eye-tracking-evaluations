/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 073c54bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x22;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  float unaff_s8;
  float fVar17;
  float unaff_s9;
  float fVar18;
  float unaff_s10;
  float fVar19;
  float fVar20;
  float unaff_s12;
  float fVar21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  
  iVar2 = FUN_07101d98();
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    fVar9 = (float)iVar2;
    fVar12 = unaff_s8 * fVar9;
    fVar14 = unaff_s9 * fVar9;
    fVar21 = unaff_s12 * fVar12;
    fVar19 = unaff_s12 * fVar14;
    fVar10 = (float)FUN_085eb198(*(long *)(unaff_x19 + 0x128),0);
    if (DAT_0940fefb == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fefb = '\x01';
    }
    puVar1 = PTR_DAT_08e68e18;
    fVar21 = fStack00000000000000dc + fVar21;
    lVar4 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar19 = fStack00000000000000d8 + fVar19;
    fVar18 = *(float *)(lVar4 + 0x18);
    fVar20 = *(float *)(lVar4 + 0x1c);
    fVar17 = *(float *)(lVar4 + 0x20);
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + unaff_s12 * unaff_s10 * fVar9;
    if (DAT_09410ea2 == '\0') {
      fStack00000000000000d8 = fVar10;
      FUN_03c8f898(PTR_DAT_08e722b0);
      DAT_09410ea2 = '\x01';
      fVar10 = fStack00000000000000d8;
    }
    fVar9 = fVar17 * fVar17 + fVar18 * fVar18 + fVar20 * fVar20;
    fVar10 = fVar21 - fVar10;
    fVar12 = fVar19 - fVar12;
    fVar14 = in_stack_00000008._4_4_ - fVar14;
    if (**(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) <= fVar9) {
      fVar13 = fVar14 * fVar17 + fVar10 * fVar18 + fVar12 * fVar20;
      fVar10 = fVar10 - (fVar18 * fVar13) / fVar9;
      fVar12 = fVar12 - (fVar20 * fVar13) / fVar9;
      fVar14 = fVar14 - (fVar17 * fVar13) / fVar9;
    }
    fStack00000000000000dc = in_stack_00000008._4_4_;
    if (DAT_094100b4 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b4 = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar9 = SQRT(fVar14 * fVar14 + fVar10 * fVar10 + fVar12 * fVar12);
    if (fVar9 <= DAT_018b0528) {
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar10 = *pfVar5;
      fVar12 = pfVar5[1];
      fVar14 = pfVar5[2];
    }
    else {
      fVar10 = fVar10 / fVar9;
      fVar12 = fVar12 / fVar9;
      fVar14 = fVar14 / fVar9;
    }
    uVar15 = (ulong)(uint)fVar14;
    uVar6 = (ulong)(uint)fVar12;
    if (DAT_0940fefb == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fefb = '\x01';
    }
    lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    uVar16 = (ulong)*(uint *)(lVar4 + 0x18);
    uVar11 = FUN_085d28c8(fVar10,uVar6,uVar15,uVar16,*(undefined4 *)(lVar4 + 0x1c),
                          *(undefined4 *)(lVar4 + 0x20),0);
    plVar8 = *(long **)(unaff_x19 + 0x138);
    in_stack_00000050 = 0;
    uStack0000000000000058 = 0;
    uStack000000000000005c = 0;
    in_stack_00000068 = 0;
    uStack0000000000000060 = 0;
    uStack0000000000000064 = 0;
    FUN_085e9668(fVar21,fVar19,fStack00000000000000dc,uVar11,uVar6,uVar15,uVar16,&stack0x00000050,0)
    ;
    uStack0000000000000084 = CONCAT44(in_stack_00000068,uStack0000000000000064);
    uStack0000000000000078 = uStack0000000000000058;
    in_stack_00000070 = in_stack_00000050;
    uStack000000000000007c = uStack000000000000005c;
    uStack0000000000000080 = uStack0000000000000060;
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08eb23f0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_073c5798;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08eb23f0,2);
LAB_073c5798:
      (*(code *)*puVar3)(&stack0x00000010,plVar8,&stack0x00000070,puVar3[1]);
      *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000010;
      *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000024;
      *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


