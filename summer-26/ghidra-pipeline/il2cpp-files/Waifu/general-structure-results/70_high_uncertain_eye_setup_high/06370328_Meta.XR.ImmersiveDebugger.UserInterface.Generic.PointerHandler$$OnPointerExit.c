/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.PointerHandler$$OnPointerExit
ENTRY_POINT: 06370328
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_UserInterface_Generic_PointerHandler__OnPointerExit(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar11;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebce0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee0f8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee100,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cf7d8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x976) = unaff_w21;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (((*(long *)(unaff_x19 + 0x10) != 0) &&
      (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20), lVar6 != 0)) &&
     (*(long *)(unaff_x19 + 0x68) != 0)) {
    iVar1 = *(int *)(lVar6 + 0x14);
    fVar11 = *(float *)(lVar6 + 0x1c);
    FUN_06078c24();
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000050 = 0;
    iVar5 = 0;
    while( true ) {
      do {
        uVar4 = FUN_06078c90(&stack0x00000030,DAT_083e8fb0);
        uVar3 = in_stack_00000048;
        uVar8 = in_stack_00000040;
        if ((uVar4 & 1) == 0) {
          if (3 < iVar5) {
            iVar5 = 4;
          }
          return iVar5;
        }
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar4 = FUN_07a119fc(uVar3,0,0);
      } while ((int)uVar8 < 1 || (uVar4 & 1) != 0);
      if (*(long *)(unaff_x19 + 0x18) == 0) break;
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x10);
      uVar8 = uVar8 & 0xffffffff;
      uVar2 = *(uint *)(lVar6 + uVar8 * 0xfc + 0x30);
      if ((iVar1 == 1) && ((uVar2 >> 7 & 1) == 0)) {
        iVar7 = 1;
      }
      else {
        lVar6 = lVar6 + uVar8 * 0xfc;
        fVar9 = fVar11 * *(float *)(lVar6 + 0x7c);
        if ((uVar2 & 0x100) != 0) {
          fVar9 = 0.0;
        }
        fVar10 = unaff_s9;
        if ((uVar2 & 0x80) == 0) {
          fVar10 = unaff_s10;
        }
        fVar9 = (*(float *)(lVar6 + 0x80) + fVar10 * fVar9) / unaff_s8;
        iVar7 = -0x80000000;
        if (fVar9 != INFINITY) {
          iVar7 = (int)fVar9;
        }
      }
      if (((uVar2 & 0x30000) != 0 && (uVar2 & 0x80) == 0) && iVar7 < 2) {
        iVar7 = 1;
      }
      if (iVar5 <= iVar7) {
        iVar5 = iVar7;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


