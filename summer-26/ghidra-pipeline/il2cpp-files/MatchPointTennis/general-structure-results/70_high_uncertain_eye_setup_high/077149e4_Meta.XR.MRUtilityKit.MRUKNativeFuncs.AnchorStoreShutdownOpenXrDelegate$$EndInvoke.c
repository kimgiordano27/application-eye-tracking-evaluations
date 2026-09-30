/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreShutdownOpenXrDelegate$$EndInvoke
ENTRY_POINT: 077149e4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate__EndInvoke
               (float param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong uVar7;
  ulong uVar10;
  
  fVar6 = (float)param_2;
  fVar9 = (float)param_3;
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      uVar7 = param_2;
      uVar10 = param_3;
      fVar4 = (float)FUN_09539d64(*(long *)(unaff_x20 + 0x20),0);
      fVar5 = (float)uVar7;
      fVar8 = (float)uVar10;
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      if (1 < (int)uVar2) {
        lVar3 = 5;
        uVar13 = uVar7;
        uVar14 = uVar10;
        fVar11 = param_1;
        fVar12 = fVar4;
        do {
          if (uVar2 <= (int)lVar3 - 4U)
          goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate__BeginInvoke;
          lVar1 = *(long *)(unaff_x20 + lVar3 * 8);
          if (lVar1 == 0) goto LAB_07714b84;
          param_1 = (float)FUN_09539d64(lVar1,0);
          fVar4 = param_1;
          if (fVar12 <= param_1) {
            fVar4 = fVar12;
          }
          fVar6 = (float)uVar7;
          uVar2 = *(uint *)(unaff_x20 + 0x18);
          fVar5 = fVar6;
          if ((float)uVar13 <= fVar6) {
            fVar5 = (float)uVar13;
          }
          uVar13 = (ulong)(uint)fVar5;
          fVar9 = (float)uVar10;
          fVar8 = fVar9;
          if ((float)uVar14 <= fVar9) {
            fVar8 = (float)uVar14;
          }
          uVar14 = (ulong)(uint)fVar8;
          lVar3 = lVar3 + 1;
          if (param_1 <= fVar11) {
            param_1 = fVar11;
          }
          if (fVar6 <= (float)param_2) {
            fVar6 = (float)param_2;
          }
          param_2 = (ulong)(uint)fVar6;
          if (fVar9 <= (float)param_3) {
            fVar9 = (float)param_3;
          }
          param_3 = (ulong)(uint)fVar9;
          fVar11 = param_1;
          fVar12 = fVar4;
        } while ((int)lVar3 + -4 < (int)uVar2);
      }
      if (unaff_x19 != 0) {
        fStack0000000000000004 = fVar9 - fVar8;
        fVar11 = (fVar5 + fVar6) * 0.5;
        FUN_094daefc(&stack0x000000a0);
        in_stack_00000088 = *(undefined8 *)(unaff_x21 + 0x68);
        in_stack_00000080 = *(undefined8 *)(unaff_x21 + 0x60);
        in_stack_00000068 = *(undefined8 *)(unaff_x21 + 0x48);
        in_stack_00000060 = *(undefined8 *)(unaff_x21 + 0x40);
        in_stack_00000078 = *(undefined8 *)(unaff_x21 + 0x58);
        in_stack_00000070 = *(undefined8 *)(unaff_x21 + 0x50);
        *(undefined8 *)(unaff_x21 + 0xa8) = in_stack_00000088;
        *(undefined8 *)(unaff_x21 + 0xa0) = in_stack_00000080;
        *(undefined8 *)(unaff_x21 + 0xb8) = *(undefined8 *)(unaff_x21 + 0x78);
        *(undefined8 *)(unaff_x21 + 0xb0) = *(undefined8 *)(unaff_x21 + 0x70);
        *(undefined8 *)(unaff_x21 + 0x88) = in_stack_00000068;
        *(undefined8 *)(unaff_x21 + 0x80) = in_stack_00000060;
        *(undefined8 *)(unaff_x21 + 0x98) = in_stack_00000078;
        *(undefined8 *)(unaff_x21 + 0x90) = in_stack_00000070;
        *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(unaff_x21 + 0x78);
        *(undefined8 *)(unaff_x21 + 0x30) = *(undefined8 *)(unaff_x21 + 0x70);
        FUN_09513430((fVar4 + param_1) * 0.5,fVar11,(fVar8 + fVar9) * 0.5,0,&stack0x00000060,0);
        in_stack_00000048 = *(undefined8 *)(unaff_x21 + 0xa8);
        in_stack_00000040 = *(undefined8 *)(unaff_x21 + 0xa0);
        in_stack_00000058 = *(undefined8 *)(unaff_x21 + 0xb8);
        in_stack_00000050 = *(undefined8 *)(unaff_x21 + 0xb0);
        in_stack_00000028 = *(undefined8 *)(unaff_x21 + 0x88);
        in_stack_00000020 = *(undefined8 *)(unaff_x21 + 0x80);
        in_stack_00000038 = *(undefined8 *)(unaff_x21 + 0x98);
        in_stack_00000030 = *(undefined8 *)(unaff_x21 + 0x90);
        fVar9 = fStack0000000000000004;
        fStack0000000000000014 =
             (float)FUN_09513430(param_1 - fVar4,fVar6 - fVar5,fStack0000000000000004,0,
                                 &stack0x00000020,0);
        fStack0000000000000014 = fStack0000000000000014 * 0.5;
        fStack000000000000001c = fVar9 * 0.5;
        fStack000000000000000c = fVar11;
        FUN_094d96a4();
        return;
      }
    }
LAB_07714b84:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate__BeginInvoke:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


