/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SyncMrcFrame
ENTRY_POINT: 04f84bb8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SyncMrcFrame(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  undefined1 in_w9;
  long lVar6;
  undefined1 in_w10;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  ulong uVar19;
  undefined4 in_s3;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  ulong uVar18;
  
  *(undefined1 *)(param_1 + 0x50) = in_w10;
  *(undefined1 *)(param_1 + 0x12) = in_w9;
  lVar6 = *(long *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(unaff_x20 + 0x70);
  if (lVar6 == 0) goto LAB_04f84dc4;
  uVar11 = *(uint *)(lVar6 + 0x18);
  if (uVar11 == 0) {
LAB_04f84f0c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  fVar17 = *(float *)(unaff_x20 + 0x18);
  uVar18 = (ulong)(uint)fVar17;
  fVar13 = *(float *)(unaff_x20 + 0x1c);
  uVar2 = *(uint *)(unaff_x20 + 0x14);
  *(undefined1 *)(lVar6 + 0x20) = 1;
  lVar7 = *(long *)(param_1 + 0x58);
  if (lVar7 == 0) goto LAB_04f84dc4;
  uVar3 = *(uint *)(lVar7 + 0x18);
  if (uVar3 == 0) goto LAB_04f84f0c;
  *(bool *)(lVar7 + 0x20) = (uVar2 & 0x30) != 0;
  lVar9 = *(long *)(param_1 + 0x68);
  fVar5 = fVar17;
  if (fVar17 <= fVar13) {
    fVar5 = fVar13;
  }
  uVar19 = (ulong)(uint)fVar5;
  if (lVar9 == 0) goto LAB_04f84dc4;
  uVar4 = *(uint *)(lVar9 + 0x18);
  if ((((((uVar4 == 0) || (*(float *)(lVar9 + 0x20) = fVar5, uVar11 == 1)) ||
        (*(undefined1 *)(lVar6 + 0x21) = 1, uVar3 == 1)) ||
       (((*(byte *)(lVar7 + 0x21) = (byte)(uVar2 >> 5) & 1, uVar4 == 1 ||
         (*(float *)(lVar9 + 0x24) = fVar17, uVar11 < 3)) ||
        ((*(undefined1 *)(lVar6 + 0x22) = 1, uVar3 < 3 ||
         ((*(byte *)(lVar7 + 0x22) = (byte)(uVar2 >> 4) & 1, uVar4 < 3 ||
          (*(float *)(lVar9 + 0x28) = fVar13, uVar11 == 3)))))))) ||
      (*(undefined1 *)(lVar6 + 0x23) = 1, uVar3 == 3)) ||
     ((((*(undefined1 *)(lVar7 + 0x23) = 0, uVar4 == 3 ||
        (*(undefined4 *)(lVar9 + 0x2c) = 0, uVar11 < 5)) ||
       (*(undefined1 *)(lVar6 + 0x24) = 1, uVar3 < 5)) ||
      (*(undefined1 *)(lVar7 + 0x24) = 0, uVar4 < 5)))) goto LAB_04f84f0c;
  *(undefined4 *)(lVar9 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x90) = 2;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(unaff_x20 + 0x68);
  *(undefined8 *)(param_1 + 0x84) = uVar8;
  *(undefined8 *)(param_1 + 0x7c) = uVar16;
  *(undefined8 *)(param_1 + 0x74) = uVar15;
  lVar6 = *(long *)(unaff_x19 + 0x70);
  if (lVar6 == 0) goto LAB_04f84dc4;
  lVar10 = 0;
  lVar7 = 4;
  lVar9 = 0x20;
  while( true ) {
    uVar11 = (int)lVar7 - 4;
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar11) break;
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_04f84dc4;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_04f84f0c;
    lVar6 = *(long *)(lVar6 + lVar7 * 8);
    if (lVar6 == 0) goto LAB_04f84dc4;
    lVar12 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x48);
    uVar14 = FUN_05c9c2ec(lVar6,0);
    if (lVar12 == 0) goto LAB_04f84dc4;
    if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_04f84f0c;
    lVar12 = lVar12 + lVar10;
    *(undefined4 *)(lVar12 + 0x20) = uVar14;
    *(int *)(lVar12 + 0x24) = (int)uVar18;
    *(int *)(lVar12 + 0x28) = (int)uVar19;
    *(undefined4 *)(lVar12 + 0x2c) = in_s3;
    if ((*(long *)(unaff_x19 + 0x80) == 0) || (lVar6 = *(long *)(unaff_x19 + 0x70), lVar6 == 0))
    goto LAB_04f84dc4;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_04f84f0c;
    lVar12 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x38);
    FUN_04f0d180(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),
                 *(undefined8 *)(lVar6 + lVar7 * 8),0);
    if (lVar12 == 0) goto LAB_04f84dc4;
    lVar7 = lVar7 + 1;
    if (*(uint *)(lVar12 + 0x18) <= (int)lVar7 - 5U) goto LAB_04f84f0c;
    puVar1 = (undefined8 *)(lVar12 + lVar9);
    lVar9 = lVar9 + 0x1c;
    lVar10 = lVar10 + 0x10;
    *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
    puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
    puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *puVar1 = in_stack_00000000._4_8_;
    lVar6 = *(long *)(unaff_x19 + 0x70);
    if (lVar6 == 0) goto LAB_04f84dc4;
  }
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    lVar6 = *(long *)(unaff_x19 + 0x80);
    FUN_04ef8cd4(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),0,0);
    if (lVar6 == 0) goto LAB_04f84dc4;
    *(ulong *)(lVar6 + 0x1c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *(undefined8 *)(lVar6 + 0x14) = in_stack_00000000._4_8_;
    *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    *(ulong *)(lVar6 + 0x20) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_04f84dc4;
    lVar6 = *(long *)(unaff_x19 + 0x80);
    uVar14 = FUN_05c9e358(*(long *)(unaff_x19 + 0x58),0);
  }
  else {
    FUN_04ef8cd4(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),1,0);
    in_stack_00000040 = in_stack_00000000._4_8_;
    uStack0000000000000054 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack0000000000000048 = in_stack_00000000._12_4_;
    uStack0000000000000034 = *(undefined8 *)(unaff_x20 + 0x44);
    uStack000000000000004c = uStack0000000000000010;
    uStack0000000000000050 = uStack0000000000000014;
    uStack0000000000000028 = (undefined4)*(undefined8 *)(unaff_x20 + 0x38);
    uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x20 + 0x3c);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x3c) >> 0x20);
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_04f84dc4;
    FUN_04ef5cac(&stack0x00000020,&stack0x00000040,*(long *)(unaff_x19 + 0x80) + 0x14,0);
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_04f84dc4;
    lVar6 = *(long *)(unaff_x19 + 0x80);
    uVar14 = UnityEngine_UIElements_BackgroundPosition_PropertyBag_KeywordProperty__get_IsReadOnly
                       (*(long *)(unaff_x19 + 0x58),0);
  }
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x70) = uVar14;
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
      return;
    }
  }
LAB_04f84dc4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


