/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryDimensions
ENTRY_POINT: 05bed9cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryDimensions
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong in_x9;
  long lVar3;
  uint unaff_w20;
  long unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uStack0000000000000000;
  undefined1 in_stack_00000010 [16];
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  
  uStack0000000000000000 = param_2;
  if ((in_x9 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f13a0);
    *(undefined1 *)(unaff_x23 + 0xd9a) = 1;
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  uStack000000000000003c = 0;
  uVar1 = 1 << (ulong)(unaff_w20 & 0x1f);
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = 0;
  if ((*(uint *)(param_3 + 0x40) & uVar1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_070f13a0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_069e53e4(&stack0x00000010 + 4,0);
    in_stack_00000038 = in_stack_00000010._12_4_;
    in_stack_00000030 = in_stack_00000010._4_8_;
    uStack0000000000000044 = (undefined4)in_stack_00000028;
    in_stack_00000048 = (undefined4)((ulong)in_stack_00000028 >> 0x20);
    uStack000000000000003c = uStack0000000000000020;
    in_stack_00000040 = uStack0000000000000024;
    FUN_05bee628(param_3,unaff_w20,&stack0x00000030);
    lVar2 = *(long *)(param_3 + 0x10);
    if ((lVar2 == 0) || (lVar3 = *(long *)(param_3 + 0x20), lVar3 == 0)) goto LAB_05bedb54;
    if ((*(int *)(lVar2 + 0x18) == 0) || (*(uint *)(lVar3 + 0x18) <= unaff_w20)) goto LAB_05bedb58;
    FUN_05b5ed20(lVar2 + 0x20,&stack0x00000030,lVar3 + (long)(int)unaff_w20 * 0x1c + 0x20,0);
    lVar2 = *(long *)(param_3 + 0x20);
    if (lVar2 == 0) goto LAB_05bedb54;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_05bedb58;
    lVar2 = lVar2 + (long)(int)unaff_w20 * 0x1c;
    fVar7 = (float)uStack0000000000000000;
    *(ulong *)(lVar2 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20) * fVar7,
                  (float)*(undefined8 *)(lVar2 + 0x20) * fVar7);
    *(float *)(lVar2 + 0x28) = *(float *)(lVar2 + 0x28) * fVar7;
    lVar2 = *(long *)(param_3 + 0x20);
    if (lVar2 == 0) goto LAB_05bedb54;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_05bedb58;
    FUN_05b64400(lVar2 + (long)(int)unaff_w20 * 0x1c + 0x20);
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) & (uVar1 ^ 0xffffffff);
  }
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 != 0) {
    if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)unaff_w20 * 0x1c;
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      uVar6 = *(undefined8 *)(lVar2 + 0x34);
      uVar5 = *(undefined8 *)(lVar2 + 0x2c);
      param_1[1] = *(undefined8 *)(lVar2 + 0x28);
      *param_1 = uVar4;
      *(undefined8 *)((long)param_1 + 0x14) = uVar6;
      *(undefined8 *)((long)param_1 + 0xc) = uVar5;
      return;
    }
LAB_05bedb58:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_05bedb54:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


