/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetHandNodePoseStateLatency
ENTRY_POINT: 0740e34c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_18_0__ovrp_GetHandNodePoseStateLatency(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  uint uVar9;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  
  FUN_03c8f898(PTR_DAT_08eb6578);
  FUN_03c8f898(PTR_DAT_08eb6580);
  *(undefined1 *)(unaff_x19 + 0xa6b) = 1;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if ((unaff_x20 != 0) && (iVar4 = FUN_06ac9e48(), iVar4 != 0)) {
    uVar5 = FUN_06ac9e48();
    lVar6 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08eb6580,uVar5);
    FUN_06aca58c(&stack0x00000050);
    puVar2 = PTR_DAT_08eb6568;
    puVar1 = PTR_DAT_08eb6558;
    uVar9 = 0;
    while( true ) {
      uVar7 = FUN_04ab8bf8(&stack0x00000050,*(undefined8 *)puVar1);
      uVar3 = in_stack_00000060;
      if ((uVar7 & 1) == 0) {
        FUN_04ab8d00(&stack0x00000050,*(undefined8 *)PTR_DAT_08eb6550);
        return lVar6;
      }
      in_stack_00000028 = *(undefined8 *)puVar2;
      in_stack_00000030 = 0xffffffffffffffff;
      in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,(int)in_stack_00000060);
      in_stack_00000028 = FUN_07138048(&stack0x00000028,0);
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      thunk_FUN_03d233cc(&stack0x00000028);
      in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,1);
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,(uint)((uVar3 & 0xff00000000) != 0));
      in_stack_00000038 = 0;
      thunk_FUN_03d233cc(&stack0x00000038,0);
      in_stack_00000048 = 0;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar8 = lVar6 + (long)(int)uVar9 * 0x28;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000030;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_00000028;
      *(undefined8 *)(lVar8 + 0x38) = in_stack_00000040;
      *(undefined8 *)(lVar8 + 0x30) = in_stack_00000038;
      thunk_FUN_03d233cc(lVar8 + 0x20,0);
      uVar9 = uVar9 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  return 0;
}


