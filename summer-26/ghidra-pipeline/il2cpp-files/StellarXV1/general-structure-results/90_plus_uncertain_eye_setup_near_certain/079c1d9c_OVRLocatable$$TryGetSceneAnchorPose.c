/*
FUNCTION_NAME: OVRLocatable$$TryGetSceneAnchorPose
ENTRY_POINT: 079c1d9c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRLocatable__TryGetSceneAnchorPose(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  uint unaff_w19;
  long unaff_x20;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x25;
  undefined4 uVar16;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  puVar4 = PTR_DAT_092ee558;
  if (unaff_x25 == 0) {
OVRExtensions__FromFlippedZVector3f:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar1 = *(uint *)(unaff_x25 + 0x18);
  if ((int)unaff_w19 < (int)uVar1) {
    do {
      if (uVar1 <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      if (*(long *)(unaff_x20 + 0x10) == 0) goto OVRExtensions__FromFlippedZVector3f;
      plVar14 = *(long **)(unaff_x20 + 0x18);
      uVar2 = *(undefined4 *)(unaff_x20 + 0x20);
      uVar3 = *(undefined4 *)(unaff_x25 + (long)(int)unaff_w19 * 4 + 0x20);
      OVRPlugin_LayerDesc__ToString(&stack0x00000020 + 4,*(long *)(unaff_x20 + 0x10),uVar3,0);
      uVar9 = in_stack_00000038;
      uVar8 = uStack0000000000000034;
      uVar7 = uStack0000000000000030;
      uVar6 = in_stack_00000020._12_4_;
      uVar5 = in_stack_00000020._4_8_;
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (plVar14 == (long *)0x0))
      goto OVRExtensions__FromFlippedZVector3f;
      lVar11 = *plVar14;
      uVar16 = *(undefined4 *)(*(long *)(unaff_x20 + 0x10) + 0x3c);
      uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_079c1e54;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)puVar4,0);
LAB_079c1e54:
      uStack0000000000000048 = uVar6;
      in_stack_00000040 = uVar5;
      uStack0000000000000054 = uVar9;
      uStack000000000000004c = uVar7;
      uStack0000000000000050 = uVar8;
      (*(code *)*puVar10)(uVar16,plVar14,uVar2,uVar3,&stack0x00000040,uVar15,puVar10[1]);
      uVar1 = *(uint *)(unaff_x25 + 0x18);
      unaff_w19 = unaff_w19 + 1;
    } while ((int)unaff_w19 < (int)uVar1);
  }
  return;
}


