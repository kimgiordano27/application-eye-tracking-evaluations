/*
FUNCTION_NAME: Unity.XR.CoreUtils.TypeExtensions$$GetImplementationsOfInterface
ENTRY_POINT: 02464f98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Unity_XR_CoreUtils_TypeExtensions__GetImplementationsOfInterface(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined **in_x11;
  int unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  long unaff_x28;
  int unaff_w29;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  int iStack0000000000000010;
  uint uStack0000000000000014;
  uint in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  do {
    uStack0000000000000040 = in_stack_00000020;
    uStack0000000000000048 = in_stack_00000028;
    FUN_01323a14(unaff_x28,unaff_w24 + unaff_w20 + -1,&stack0x00000040,*(undefined8 *)in_x11[0x5e]);
    unaff_w20 = unaff_w20 + 1;
    uVar1 = uStack0000000000000014;
    if (unaff_w21 != unaff_w20) goto LAB_02464f48;
LAB_02464fc8:
    do {
      uStack0000000000000014 = uVar1;
      in_stack_00000018 = in_stack_00000018 + 1;
      if (in_stack_00000018 == uStack0000000000000008) {
        return;
      }
LAB_02464dfc:
      lVar5 = *(long *)(unaff_x22 + 0x168);
      if (lVar5 == 0) {
LAB_02464ff0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar5 + 0x18) <= in_stack_00000018) {
LAB_02465014:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar5 = lVar5 + (long)(int)in_stack_00000018 * 0x1c;
      unaff_w23 = 0;
      if (iStack0000000000000010 != 0) {
        unaff_w23 = *(int *)(lVar5 + 0x28) / iStack0000000000000010;
      }
      iVar2 = 8;
      if (*(char *)(lVar5 + 0x2c) != '\0') {
        iVar2 = 0x10;
      }
      if (unaff_w23 < iVar2) {
        return;
      }
      lVar5 = *(long *)(unaff_x22 + 0x178);
      if (lVar5 == 0) goto LAB_02464ff0;
      unaff_w24 = 0;
      while( true ) {
        if (*(int *)(lVar5 + 0x18) <= unaff_w24) goto LAB_02464fe4;
        FUN_0132138c(lVar5,unaff_w24,&stack0x00000040,
                     *(undefined8 *)Sirenix_Serialization_UInt16Serializer_var);
        in_stack_00000030 = uStack0000000000000040;
        in_stack_00000038 = uStack0000000000000048;
        iVar2 = FUN_02686d10(&stack0x00000030,0);
        iVar3 = FUN_02686d20(&stack0x00000030,0);
        unaff_w27 = FUN_02686cf0(&stack0x00000030,0);
        unaff_w26 = FUN_02686d00(&stack0x00000030,0);
        if (unaff_w23 <= iVar2) break;
        lVar5 = *(long *)(unaff_x22 + 0x178);
        unaff_w24 = unaff_w24 + 1;
        if (lVar5 == 0) goto LAB_02464ff0;
      }
      lVar5 = *(long *)(unaff_x22 + 0x168);
      if (lVar5 == 0) goto LAB_02464ff0;
      if (*(uint *)(lVar5 + 0x18) <= in_stack_00000018) goto LAB_02465014;
      lVar5 = lVar5 + (long)(int)in_stack_00000018 * 0x1c;
      *(int *)(lVar5 + 0x30) = unaff_w27;
      *(int *)(lVar5 + 0x34) = unaff_w26;
      *(int *)(lVar5 + 0x38) = unaff_w23;
      if (*(long *)(unaff_x22 + 0x178) == 0) goto LAB_02464ff0;
      FUN_01324ac8(*(long *)(unaff_x22 + 0x178),unaff_w24,
                   *(undefined8 *)VolumetricAudio_VA_AudioListener_TypeInfo);
      uVar1 = uStack0000000000000014 - 1;
      if ((int)(~in_stack_00000018 + uStack0000000000000008) < 1) goto LAB_02464fc8;
      unaff_w19 = unaff_w27 + iVar2;
      unaff_w29 = unaff_w26 + iVar3;
      unaff_w20 = 1;
      unaff_w21 = uStack0000000000000014;
      uStack0000000000000014 = uStack0000000000000014 - 1;
      unaff_w25 = unaff_w27;
LAB_02464f48:
      unaff_w27 = unaff_w27 + unaff_w23;
    } while ((unaff_w19 < unaff_w27 + unaff_w23) &&
            (unaff_w26 = unaff_w26 + unaff_w23, uVar1 = uStack0000000000000014,
            unaff_w27 = unaff_w25, unaff_w29 < unaff_w26 + unaff_w23));
    unaff_x28 = *(long *)(unaff_x22 + 0x178);
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    FUN_02686ec0(&stack0x00000020,unaff_w27,unaff_w26,unaff_w23,unaff_w23,0);
    if (unaff_x28 == 0) goto LAB_02464ff0;
    in_x11 = &Oculus_Platform_Models_ChallengeEntry_TypeInfo;
  } while( true );
LAB_02464fe4:
  lVar5 = *(long *)(unaff_x22 + 0x178);
  iStack0000000000000010 = iStack0000000000000010 << 1;
  if (lVar5 == 0) goto LAB_02464ff0;
  lVar6 = *(long *)Method_Obi_ObiNativeList<Vector3>_Swap__;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(lVar5 + 0x18) = 0;
  }
  else {
    iVar2 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    if (0 < iVar2) {
      FUN_0179519c(*(undefined8 *)(lVar5 + 0x10),0,iVar2,0);
    }
  }
  lVar5 = *(long *)(unaff_x22 + 0x178);
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  FUN_02686ec0(&stack0x00000040,0,0,uStack000000000000000c,uStack000000000000000c,0);
  if (lVar5 == 0) goto LAB_02464ff0;
  FUN_00cb5b34(lVar5,uStack0000000000000040,uStack0000000000000048,
               *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddvq_s16__);
  if ((int)uStack0000000000000008 < 1) {
    return;
  }
  in_stack_00000018 = 0;
  uStack0000000000000014 = uStack0000000000000008;
  goto LAB_02464dfc;
}


