/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$EndInvoke
ENTRY_POINT: 090c4e40
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__EndInvoke(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  long in_x9;
  long lVar5;
  undefined8 uVar6;
  uint in_w11;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  ulong uVar18;
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
  ulong uVar17;
  
  if (in_w11 == 0) {
LAB_090c5178:
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  fVar16 = *(float *)(unaff_x20 + 0x18);
  uVar17 = (ulong)(uint)fVar16;
  fVar12 = *(float *)(unaff_x20 + 0x1c);
  uVar10 = *(uint *)(unaff_x20 + 0x14);
  *(undefined1 *)(in_x9 + 0x20) = 1;
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 == 0) goto LAB_090c5030;
  uVar2 = *(uint *)(lVar5 + 0x18);
  if (uVar2 == 0) goto LAB_090c5178;
  *(bool *)(lVar5 + 0x20) = (uVar10 & 0x30) != 0;
  lVar7 = *(long *)(param_1 + 0x68);
  fVar4 = fVar16;
  if (fVar16 <= fVar12) {
    fVar4 = fVar12;
  }
  uVar18 = (ulong)(uint)fVar4;
  if (lVar7 == 0) goto LAB_090c5030;
  uVar3 = *(uint *)(lVar7 + 0x18);
  if ((((((uVar3 == 0) || (*(float *)(lVar7 + 0x20) = fVar4, in_w11 == 1)) ||
        (*(undefined1 *)(in_x9 + 0x21) = 1, uVar2 == 1)) ||
       (((*(byte *)(lVar5 + 0x21) = (byte)(uVar10 >> 5) & 1, uVar3 == 1 ||
         (*(float *)(lVar7 + 0x24) = fVar16, in_w11 < 3)) ||
        ((*(undefined1 *)(in_x9 + 0x22) = 1, uVar2 < 3 ||
         ((*(byte *)(lVar5 + 0x22) = (byte)(uVar10 >> 4) & 1, uVar3 < 3 ||
          (*(float *)(lVar7 + 0x28) = fVar12, in_w11 == 3)))))))) ||
      (*(undefined1 *)(in_x9 + 0x23) = 1, uVar2 == 3)) ||
     ((((*(undefined1 *)(lVar5 + 0x23) = 0, uVar3 == 3 ||
        (*(undefined4 *)(lVar7 + 0x2c) = 0, in_w11 < 5)) ||
       (*(undefined1 *)(in_x9 + 0x24) = 1, uVar2 < 5)) ||
      (*(undefined1 *)(lVar5 + 0x24) = 0, uVar3 < 5)))) goto LAB_090c5178;
  *(undefined4 *)(lVar7 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x90) = 2;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(unaff_x20 + 0x68);
  *(undefined8 *)(param_1 + 0x84) = uVar6;
  *(undefined8 *)(param_1 + 0x7c) = uVar15;
  *(undefined8 *)(param_1 + 0x74) = uVar14;
  lVar5 = *(long *)(unaff_x19 + 0x70);
  if (lVar5 == 0) goto LAB_090c5030;
  lVar8 = 0;
  lVar7 = 4;
  lVar9 = 0x20;
  while( true ) {
    uVar10 = (int)lVar7 - 4;
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar10) break;
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_090c5030;
    if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_090c5178;
    lVar5 = *(long *)(lVar5 + lVar7 * 8);
    if (lVar5 == 0) goto LAB_090c5030;
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x48);
    uVar13 = FUN_0a18a4e0(lVar5,0);
    if (lVar11 == 0) goto LAB_090c5030;
    if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_090c5178;
    lVar11 = lVar11 + lVar8;
    *(undefined4 *)(lVar11 + 0x20) = uVar13;
    *(int *)(lVar11 + 0x24) = (int)uVar17;
    *(int *)(lVar11 + 0x28) = (int)uVar18;
    *(undefined4 *)(lVar11 + 0x2c) = in_s3;
    if ((*(long *)(unaff_x19 + 0x80) == 0) || (lVar5 = *(long *)(unaff_x19 + 0x70), lVar5 == 0))
    goto LAB_090c5030;
    if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_090c5178;
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x38);
    FUN_0904d3a8(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),
                 *(undefined8 *)(lVar5 + lVar7 * 8),0);
    if (lVar11 == 0) goto LAB_090c5030;
    lVar7 = lVar7 + 1;
    if (*(uint *)(lVar11 + 0x18) <= (int)lVar7 - 5U) goto LAB_090c5178;
    puVar1 = (undefined8 *)(lVar11 + lVar9);
    lVar9 = lVar9 + 0x1c;
    lVar8 = lVar8 + 0x10;
    *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
    puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
    puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *puVar1 = in_stack_00000000._4_8_;
    lVar5 = *(long *)(unaff_x19 + 0x70);
    if (lVar5 == 0) goto LAB_090c5030;
  }
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    lVar5 = *(long *)(unaff_x19 + 0x80);
    FUN_09038efc(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),0,0);
    if (lVar5 == 0) goto LAB_090c5030;
    *(ulong *)(lVar5 + 0x1c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *(undefined8 *)(lVar5 + 0x14) = in_stack_00000000._4_8_;
    *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    *(ulong *)(lVar5 + 0x20) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_090c5030;
    lVar5 = *(long *)(unaff_x19 + 0x80);
    uVar13 = FUN_0a18c388(*(long *)(unaff_x19 + 0x58),0);
  }
  else {
    FUN_09038efc(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),1,0);
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
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_090c5030;
    FUN_09035ed4(&stack0x00000020,&stack0x00000040,*(long *)(unaff_x19 + 0x80) + 0x14,0);
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_090c5030;
    lVar5 = *(long *)(unaff_x19 + 0x80);
    uVar13 = FUN_0a18a948(*(long *)(unaff_x19 + 0x58),0);
  }
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x70) = uVar13;
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
      return;
    }
  }
LAB_090c5030:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


