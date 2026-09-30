/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$BeginInvoke
ENTRY_POINT: 090c4dc4
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__BeginInvoke(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  float fVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x21;
  uint uVar14;
  long lVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  ulong uVar21;
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
  
                    /* try { // try from 090c4dc8 to 091c4dcb has its CatchHandler @ 090c51d8 */
  uVar8 = FUN_090c4a88();
  if (unaff_x21 != 0) {
    *(undefined8 *)(unaff_x21 + 0x98) = uVar8;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x98),uVar8);
    if ((param_1 == 0) || (lVar10 = *(long *)(unaff_x19 + 0x80), lVar10 == 0)) goto LAB_090c5030;
    *(undefined1 *)(lVar10 + 0x10) = *(undefined1 *)(param_1 + 0x10);
    cVar5 = *(char *)(param_1 + 0x11);
    *(char *)(lVar10 + 0x11) = cVar5;
    if (cVar5 != '\0') {
      uVar9 = FUN_0a177c0c();
      lVar10 = *(long *)(unaff_x19 + 0x80);
                    /* try { // try from 090c4e14 to 091c4e3b has its CatchHandler @ 090c508c */
      if ((uVar9 & 1) != 0) {
        if (lVar10 == 0) goto LAB_090c5030;
        uVar6 = *(undefined1 *)(param_1 + 0x12);
        *(undefined1 *)(lVar10 + 0x50) = 1;
        *(undefined1 *)(lVar10 + 0x12) = uVar6;
        lVar11 = *(long *)(lVar10 + 0x60);
        *(undefined1 *)(lVar10 + 0x94) = *(undefined1 *)(param_1 + 0x70);
        if (lVar11 == 0) goto LAB_090c5030;
        uVar14 = *(uint *)(lVar11 + 0x18);
        if (uVar14 != 0) {
          fVar20 = *(float *)(param_1 + 0x18);
          uVar9 = (ulong)(uint)fVar20;
          fVar16 = *(float *)(param_1 + 0x1c);
          uVar2 = *(uint *)(param_1 + 0x14);
          *(undefined1 *)(lVar11 + 0x20) = 1;
          lVar12 = *(long *)(lVar10 + 0x58);
          if (lVar12 == 0) goto LAB_090c5030;
          uVar3 = *(uint *)(lVar12 + 0x18);
          if (uVar3 == 0) goto LAB_090c5178;
          *(bool *)(lVar12 + 0x20) = (uVar2 & 0x30) != 0;
          lVar13 = *(long *)(lVar10 + 0x68);
          fVar7 = fVar20;
          if (fVar20 <= fVar16) {
            fVar7 = fVar16;
          }
          uVar21 = (ulong)(uint)fVar7;
          if (lVar13 == 0) goto LAB_090c5030;
          uVar4 = *(uint *)(lVar13 + 0x18);
          if ((((((uVar4 == 0) || (*(float *)(lVar13 + 0x20) = fVar7, uVar14 == 1)) ||
                (*(undefined1 *)(lVar11 + 0x21) = 1, uVar3 == 1)) ||
               (((*(byte *)(lVar12 + 0x21) = (byte)(uVar2 >> 5) & 1, uVar4 == 1 ||
                 (*(float *)(lVar13 + 0x24) = fVar20, uVar14 < 3)) ||
                ((*(undefined1 *)(lVar11 + 0x22) = 1, uVar3 < 3 ||
                 ((*(byte *)(lVar12 + 0x22) = (byte)(uVar2 >> 4) & 1, uVar4 < 3 ||
                  (*(float *)(lVar13 + 0x28) = fVar16, uVar14 == 3)))))))) ||
              (*(undefined1 *)(lVar11 + 0x23) = 1, uVar3 == 3)) ||
             ((((*(undefined1 *)(lVar12 + 0x23) = 0, uVar4 == 3 ||
                (*(undefined4 *)(lVar13 + 0x2c) = 0, uVar14 < 5)) ||
               (*(undefined1 *)(lVar11 + 0x24) = 1, uVar3 < 5)) ||
              (*(undefined1 *)(lVar12 + 0x24) = 0, uVar4 < 5)))) goto LAB_090c5178;
          *(undefined4 *)(lVar13 + 0x30) = 0;
          *(undefined4 *)(lVar10 + 0x90) = 2;
          uVar8 = *(undefined8 *)(param_1 + 0x60);
          uVar19 = *(undefined8 *)(param_1 + 0x58);
          uVar18 = *(undefined8 *)(param_1 + 0x50);
          *(undefined4 *)(lVar10 + 0x8c) = *(undefined4 *)(param_1 + 0x68);
          *(undefined8 *)(lVar10 + 0x84) = uVar8;
          *(undefined8 *)(lVar10 + 0x7c) = uVar19;
          *(undefined8 *)(lVar10 + 0x74) = uVar18;
          lVar10 = *(long *)(unaff_x19 + 0x70);
          if (lVar10 == 0) goto LAB_090c5030;
          lVar13 = 0;
          lVar11 = 4;
          lVar12 = 0x20;
          while( true ) {
            uVar14 = (int)lVar11 - 4;
            if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar14) break;
            if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_090c5030;
            if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_090c5178;
            lVar10 = *(long *)(lVar10 + lVar11 * 8);
            if (lVar10 == 0) goto LAB_090c5030;
            lVar15 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x48);
            uVar17 = FUN_0a18a4e0(lVar10,0);
            if (lVar15 == 0) goto LAB_090c5030;
            if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_090c5178;
            lVar15 = lVar15 + lVar13;
            *(undefined4 *)(lVar15 + 0x20) = uVar17;
            *(int *)(lVar15 + 0x24) = (int)uVar9;
            *(int *)(lVar15 + 0x28) = (int)uVar21;
            *(undefined4 *)(lVar15 + 0x2c) = in_s3;
            if ((*(long *)(unaff_x19 + 0x80) == 0) ||
               (lVar10 = *(long *)(unaff_x19 + 0x70), lVar10 == 0)) goto LAB_090c5030;
            if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_090c5178;
            lVar15 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x38);
            FUN_0904d3a8(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),
                         *(undefined8 *)(lVar10 + lVar11 * 8),0);
            if (lVar15 == 0) goto LAB_090c5030;
            lVar11 = lVar11 + 1;
            if (*(uint *)(lVar15 + 0x18) <= (int)lVar11 - 5U) goto LAB_090c5178;
            puVar1 = (undefined8 *)(lVar15 + lVar12);
            lVar12 = lVar12 + 0x1c;
            lVar13 = lVar13 + 0x10;
            *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
            puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
            puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
            *puVar1 = in_stack_00000000._4_8_;
            lVar10 = *(long *)(unaff_x19 + 0x70);
            if (lVar10 == 0) goto LAB_090c5030;
          }
          if (*(char *)(unaff_x19 + 0x60) == '\0') {
            lVar10 = *(long *)(unaff_x19 + 0x80);
            FUN_09038efc(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),0,0);
            if (lVar10 == 0) goto LAB_090c5030;
            *(ulong *)(lVar10 + 0x1c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
            *(undefined8 *)(lVar10 + 0x14) = in_stack_00000000._4_8_;
            *(ulong *)(lVar10 + 0x28) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
            *(ulong *)(lVar10 + 0x20) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
            if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_090c5030;
            lVar10 = *(long *)(unaff_x19 + 0x80);
            uVar17 = FUN_0a18c388(*(long *)(unaff_x19 + 0x58),0);
          }
          else {
            FUN_09038efc(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),1,0);
            in_stack_00000040 = in_stack_00000000._4_8_;
            uStack0000000000000054 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
            in_stack_00000020 = *(undefined8 *)(param_1 + 0x30);
            uStack0000000000000048 = in_stack_00000000._12_4_;
            uStack0000000000000034 = *(undefined8 *)(param_1 + 0x44);
            uStack000000000000004c = uStack0000000000000010;
            uStack0000000000000050 = uStack0000000000000014;
            uStack0000000000000028 = (undefined4)*(undefined8 *)(param_1 + 0x38);
            uStack000000000000002c = (undefined4)*(undefined8 *)(param_1 + 0x3c);
            uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20);
            if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_090c5030;
            FUN_09035ed4(&stack0x00000020,&stack0x00000040,*(long *)(unaff_x19 + 0x80) + 0x14,0);
            if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_090c5030;
            lVar10 = *(long *)(unaff_x19 + 0x80);
            uVar17 = FUN_0a18a948(*(long *)(unaff_x19 + 0x58),0);
          }
          if (lVar10 != 0) {
            *(undefined4 *)(lVar10 + 0x70) = uVar17;
            if (*(long *)(unaff_x19 + 0x80) != 0) {
              *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
              return;
            }
          }
          goto LAB_090c5030;
        }
        goto LAB_090c5178;
      }
      if (lVar10 == 0) goto LAB_090c5030;
    }
    lVar11 = *(long *)(lVar10 + 0x58);
    *(undefined1 *)(lVar10 + 0x12) = 0;
    *(undefined4 *)(lVar10 + 0x30) = 0;
    *(undefined4 *)(lVar10 + 0x90) = 0;
    *(undefined1 *)(lVar10 + 0x50) = 0;
    if (lVar11 != 0) {
      uVar14 = *(uint *)(lVar11 + 0x18);
      uVar9 = 0;
      while (uVar14 != uVar9) {
        *(undefined1 *)(lVar11 + 0x20 + uVar9) = 0;
        lVar12 = *(long *)(lVar10 + 0x60);
        if (lVar12 == 0) goto LAB_090c5030;
        if (*(uint *)(lVar12 + 0x18) <= uVar9) break;
        lVar12 = lVar12 + uVar9;
        uVar9 = uVar9 + 1;
        *(undefined1 *)(lVar12 + 0x20) = 0;
        if (uVar9 == 5) {
          return;
        }
      }
LAB_090c5178:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
  }
LAB_090c5030:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


