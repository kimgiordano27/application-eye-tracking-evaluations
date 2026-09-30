/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<CheckIfRetrievingAnchorServiceHung>d__23$$MoveNext
ENTRY_POINT: 06389428
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__23__MoveNext
               (undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar7;
  ulong uVar8;
  undefined1 unaff_w22;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  uint uStack0000000000000078;
  int iStack000000000000007c;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0xa22) = unaff_w22;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  fVar9 = *(float *)(unaff_x20 + 0x1c);
  auVar13 = FUN_06388f90(unaff_s10 - fVar9,unaff_s9 - fVar9,unaff_s8 - fVar9,
                         *(undefined4 *)(unaff_x20 + 0x18));
  uVar8 = auVar13._0_8_;
  fVar9 = *(float *)(unaff_x20 + 0x1c);
  auVar14 = FUN_06388f90(unaff_s10 + fVar9,unaff_s9 + fVar9,unaff_s8 + fVar9,
                         *(undefined4 *)(unaff_x20 + 0x18));
  if (auVar14._0_4_ < auVar13._0_4_) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if (lVar4 == 0) goto LAB_06389750;
  }
  else {
    iStack000000000000007c = -1;
    uVar6 = uVar8 >> 0x20;
    fVar9 = DAT_012ed8fc;
    do {
      if (auVar13._4_4_ <= auVar14._4_4_) {
        uVar7 = uVar6;
        do {
          uStack0000000000000078 = (uint)uVar7;
          if (auVar13._8_4_ <= auVar14._8_4_) {
            uVar7 = auVar13._8_8_ & 0xffffffff;
            uVar1 = uStack0000000000000078 & 0x3ff;
            do {
              if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_06389750;
              uVar2 = (uint)uVar8 & 0x3ff | uVar1 << 10 | ((uint)uVar7 & 0x3ff) << 0x14;
              iVar3 = FUN_05e6da60(*(long *)(unaff_x20 + 0x10),uVar2,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(DAT_083e4900 + 0x20) + 0xc0) + 0x108));
              if (-1 < iVar3) {
                if ((*(long *)(unaff_x20 + 0x10) == 0) ||
                   (lVar4 = FUN_05e6d2dc(*(long *)(unaff_x20 + 0x10),uVar2,DAT_083e4908), lVar4 == 0
                   )) goto LAB_06389750;
                in_stack_00000040 = 0;
                in_stack_00000048 = 0;
                in_stack_00000038 = 0;
                FUN_05fd5ad4(&stack0x00000038,lVar4,
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_083f6818 + 0x20) + 0xc0) + 0x138));
                in_stack_00000058 = in_stack_00000040;
                in_stack_00000050 = in_stack_00000038;
                in_stack_00000060 = in_stack_00000048;
                while (uVar5 = FUN_05fd5b44(&stack0x00000050,DAT_083e8040),
                      lVar4 = in_stack_00000060, (uVar5 & 1) != 0) {
                  if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_033d1d3c();
                  }
                  if (*(int *)(in_stack_00000060 + 0x10) != unaff_w19) {
                    fVar10 = *(float *)(in_stack_00000060 + 0x14);
                    fVar11 = *(float *)(in_stack_00000060 + 0x18);
                    fVar12 = *(float *)(in_stack_00000060 + 0x1c);
                    if (DAT_086d90cb == '\0') {
                      FUN_0335b6c8(&DAT_083ce8b0,1);
                      DataMemoryBarrier(2,3);
                      DAT_086d90cb = '\x01';
                    }
                    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                      FUN_033b9870();
                    }
                    fVar10 = unaff_s10 - fVar10;
                    fVar11 = unaff_s9 - fVar11;
                    fVar12 = unaff_s8 - fVar12;
                    fVar10 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
                    if (fVar10 < fVar9) {
                      iStack000000000000007c = *(int *)(lVar4 + 0x10);
                      fVar9 = fVar10;
                    }
                  }
                }
              }
              uVar2 = (uint)uVar7 + 1;
              uVar7 = (ulong)uVar2;
            } while ((int)uVar2 <= auVar14._8_4_);
          }
          uVar7 = (ulong)(uStack0000000000000078 + 1);
        } while ((int)(uStack0000000000000078 + 1) <= auVar14._4_4_);
      }
      uVar1 = (uint)uVar8 + 1;
      uVar8 = (ulong)uVar1;
    } while ((int)uVar1 <= auVar14._0_4_);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if (lVar4 == 0) goto LAB_06389750;
    if (-1 < iStack000000000000007c) {
      FUN_05cac994(lVar4,unaff_w19,iStack000000000000007c,1,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083e1b10 + 0x20) + 0xc0) + 0x110));
      if (*(long *)(unaff_x20 + 0x28) != 0) {
        FUN_05ce3be4(fVar9,*(long *)(unaff_x20 + 0x28),unaff_w19,1,
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083e1dd8 + 0x20) + 0xc0) + 0x110));
        return;
      }
      goto LAB_06389750;
    }
  }
  iVar3 = FUN_05cac5a8(lVar4,unaff_w19,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083e1ad8 + 0x20) + 0xc0) + 0x108));
  if (iVar3 < 0) {
    return;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    FUN_05cad404(*(long *)(unaff_x20 + 0x20),unaff_w19,DAT_083e1ae8);
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      FUN_05ce4648(*(long *)(unaff_x20 + 0x28),unaff_w19,DAT_083e1db0);
      return;
    }
  }
LAB_06389750:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


