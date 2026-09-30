/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_transmit_enabled_set
ENTRY_POINT: 090068e0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_transmit_enabled_set
               (void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *unaff_x21;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09fbf408) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0900695c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_044822ac();
LAB_0900695c:
  lVar6 = (*(code *)*puVar2)();
  if (lVar6 != 0) {
    in_stack_00000008 = FUN_068a4fb0(lVar6,*(undefined8 *)PTR_DAT_09fbf080);
    uVar7 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf050);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_047b7034(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar3 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf048);
      uVar4 = FUN_04f491a0(uVar3,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_09fbf640);
      uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fbf650);
      FUN_0666a738(uVar5,uVar3,uVar4,*(undefined8 *)PTR_DAT_09fbf648);
      puVar1 = PTR_DAT_09fbf630;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_066f3a60(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


