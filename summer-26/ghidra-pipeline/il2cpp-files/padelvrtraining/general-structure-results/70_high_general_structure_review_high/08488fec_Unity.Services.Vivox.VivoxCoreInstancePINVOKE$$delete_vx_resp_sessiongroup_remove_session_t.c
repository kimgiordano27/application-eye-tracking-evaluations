/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_sessiongroup_remove_session_t
ENTRY_POINT: 08488fec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_sessiongroup_remove_session_t
               (void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  bVar1 = *(byte *)(**(long **)(in_x9 + 0x58) + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == **(long **)(in_x9 + 0x58)))
  {
    FUN_05a3a290(&stack0x00000008);
    puVar4 = PTR_DAT_0927e750;
    puVar3 = PTR_DAT_091b4098;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while( true ) {
      uVar6 = FUN_06daab3c(&stack0x00000020,*(undefined8 *)puVar3);
      uVar5 = in_stack_00000030;
      if ((uVar6 & 1) == 0) {
        FUN_06daab38(&stack0x00000020,*(undefined8 *)PTR_DAT_091b4090);
        return;
      }
      lVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar4);
      FUN_071bc31c(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
      thunk_FUN_03d1023c((undefined8 *)(lVar7 + 0x10),uVar5);
      if (unaff_x19 == 0) break;
      lVar9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
        plVar8 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
        *plVar8 = lVar7;
        thunk_FUN_03d1023c(plVar8,lVar7);
      }
      else {
        FUN_05a39734();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d8e4();
}


