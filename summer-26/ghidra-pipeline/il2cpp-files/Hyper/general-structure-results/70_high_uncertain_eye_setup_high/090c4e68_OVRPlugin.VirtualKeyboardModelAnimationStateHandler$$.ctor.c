/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$.ctor
ENTRY_POINT: 090c4e68
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler___ctor
               (long param_1,float param_2,undefined8 param_3,undefined1 param_4 [16],
               undefined4 param_5)

{
  undefined8 *puVar1;
  float fVar2;
  bool in_ZR;
  long in_x9;
  long in_x10;
  undefined8 uVar3;
  uint in_w11;
  long lVar4;
  uint in_w13;
  uint in_w15;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  ulong uVar14;
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
  
  fVar13 = (float)param_3;
  *(bool *)(in_x10 + 0x20) = !in_ZR;
  lVar4 = *(long *)(param_1 + 0x68);
                    /* try { // try from 090c4e78 to 091c4ea3 has its CatchHandler @ 090c5088 */
  fVar2 = fVar13;
  if (fVar13 <= param_2) {
    fVar2 = param_2;
  }
  uVar14 = (ulong)(uint)fVar2;
  if (lVar4 != 0) {
    uVar8 = *(uint *)(lVar4 + 0x18);
                    /* try { // try from 090c4ed8 to 091c4ee7 has its CatchHandler @ 090c5078 */
                    /* try { // try from 090c4ef8 to 091c4eff has its CatchHandler @ 090c507c */
    if ((((((uVar8 == 0) || (*(float *)(lVar4 + 0x20) = fVar2, in_w11 == 1)) ||
          (*(undefined1 *)(in_x9 + 0x21) = 1, in_w13 == 1)) ||
         (((*(byte *)(in_x10 + 0x21) = (byte)(in_w15 >> 5) & 1, uVar8 == 1 ||
           (*(float *)(lVar4 + 0x24) = fVar13, in_w11 < 3)) ||
          ((*(undefined1 *)(in_x9 + 0x22) = 1, in_w13 < 3 ||
           ((*(byte *)(in_x10 + 0x22) = (byte)(in_w15 >> 4) & 1, uVar8 < 3 ||
            (*(float *)(lVar4 + 0x28) = param_2, in_w11 == 3)))))))) ||
        (*(undefined1 *)(in_x9 + 0x23) = 1, in_w13 == 3)) ||
       ((((*(undefined1 *)(in_x10 + 0x23) = 0, uVar8 == 3 ||
          (*(undefined4 *)(lVar4 + 0x2c) = 0, in_w11 < 5)) ||
         (*(undefined1 *)(in_x9 + 0x24) = 1, in_w13 < 5)) ||
        (*(undefined1 *)(in_x10 + 0x24) = 0, uVar8 < 5)))) {
LAB_090c5178:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    *(undefined4 *)(lVar4 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x90) = 2;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(unaff_x20 + 0x68);
    *(undefined8 *)(param_1 + 0x84) = uVar3;
    *(undefined8 *)(param_1 + 0x7c) = uVar12;
    *(undefined8 *)(param_1 + 0x74) = uVar11;
    lVar4 = *(long *)(unaff_x19 + 0x70);
    if (lVar4 != 0) {
      lVar5 = 0;
      lVar6 = 4;
      lVar7 = 0x20;
      while( true ) {
        uVar8 = (int)lVar6 - 4;
        if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar8) break;
        if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_090c5030;
        if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_090c5178;
        lVar4 = *(long *)(lVar4 + lVar6 * 8);
        if (lVar4 == 0) goto LAB_090c5030;
        lVar9 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x48);
        uVar10 = FUN_0a18a4e0(lVar4,0);
        if (lVar9 == 0) goto LAB_090c5030;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_090c5178;
        lVar9 = lVar9 + lVar5;
        *(undefined4 *)(lVar9 + 0x20) = uVar10;
        *(int *)(lVar9 + 0x24) = (int)param_3;
        *(int *)(lVar9 + 0x28) = (int)uVar14;
        *(undefined4 *)(lVar9 + 0x2c) = param_5;
        if ((*(long *)(unaff_x19 + 0x80) == 0) || (lVar4 = *(long *)(unaff_x19 + 0x70), lVar4 == 0))
        goto LAB_090c5030;
        if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_090c5178;
        lVar9 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x38);
        FUN_0904d3a8(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),
                     *(undefined8 *)(lVar4 + lVar6 * 8),0);
        if (lVar9 == 0) goto LAB_090c5030;
        lVar6 = lVar6 + 1;
        if (*(uint *)(lVar9 + 0x18) <= (int)lVar6 - 5U) goto LAB_090c5178;
        puVar1 = (undefined8 *)(lVar9 + lVar7);
        lVar7 = lVar7 + 0x1c;
        lVar5 = lVar5 + 0x10;
        *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
        puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
        puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *puVar1 = in_stack_00000000._4_8_;
        lVar4 = *(long *)(unaff_x19 + 0x70);
        if (lVar4 == 0) goto LAB_090c5030;
      }
      if (*(char *)(unaff_x19 + 0x60) == '\0') {
        lVar4 = *(long *)(unaff_x19 + 0x80);
        FUN_09038efc(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),0,0);
        if (lVar4 == 0) goto LAB_090c5030;
        *(ulong *)(lVar4 + 0x1c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *(undefined8 *)(lVar4 + 0x14) = in_stack_00000000._4_8_;
        *(ulong *)(lVar4 + 0x28) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        *(ulong *)(lVar4 + 0x20) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_090c5030;
        lVar4 = *(long *)(unaff_x19 + 0x80);
        uVar10 = FUN_0a18c388(*(long *)(unaff_x19 + 0x58),0);
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
        lVar4 = *(long *)(unaff_x19 + 0x80);
        uVar10 = FUN_0a18a948(*(long *)(unaff_x19 + 0x58),0);
      }
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x70) = uVar10;
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
          return;
        }
      }
    }
  }
LAB_090c5030:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


