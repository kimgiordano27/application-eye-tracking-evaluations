/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_sessiongroup_handle_set
ENTRY_POINT: 0854c9c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_sessiongroup_handle_set
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  lVar4 = *in_x9;
  *(long *)(unaff_x23 + 0x158) = param_2._8_8_;
  *(long *)(unaff_x23 + 0x150) = param_2._0_8_;
  *(long *)(unaff_x23 + 0x168) = param_3._8_8_;
  *(long *)(unaff_x23 + 0x160) = param_3._0_8_;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  *(undefined8 *)(unaff_x23 + 0x68) = *(undefined8 *)(unaff_x23 + 0x158);
  *(undefined8 *)(unaff_x23 + 0x60) = *(undefined8 *)(unaff_x23 + 0x150);
  *(long *)(unaff_x23 + 0x78) = SUB168(*(undefined1 (*) [16])(unaff_x23 + 0x160),8);
  *(long *)(unaff_x23 + 0x70) = SUB168(*(undefined1 (*) [16])(unaff_x23 + 0x160),0);
  in_stack_00000130 = uVar5;
  uVar5 = FUN_08449f30(&stack0x00000110,0);
  *unaff_x22 = uVar5;
  thunk_FUN_040ec700();
  lVar4 = *(long *)(unaff_x20 + 0x1a0);
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xc0);
    uVar5 = *(undefined8 *)(lVar4 + 0xb8);
    uVar3 = *(undefined8 *)(lVar4 + 200);
    uVar7 = *(undefined8 *)(lVar4 + 0xd0);
    uVar8 = *(undefined8 *)(lVar4 + 0xe0);
    uVar6 = *(undefined8 *)(lVar4 + 0xd8);
    *(undefined8 *)(unaff_x23 + 0x188) = uVar2;
    *(undefined8 *)(unaff_x23 + 0x180) = uVar5;
    *(undefined8 *)(unaff_x23 + 0x198) = uVar7;
    *(undefined8 *)(unaff_x23 + 400) = uVar3;
    *(undefined8 *)(unaff_x23 + 0x1a8) = uVar8;
    *(undefined8 *)(unaff_x23 + 0x1a0) = uVar6;
    auVar9 = *(undefined1 (*) [16])(unaff_x23 + 0x180);
    *(undefined8 *)(unaff_x23 + 0x188) = uVar2;
    *(undefined8 *)(unaff_x23 + 0x180) = uVar5;
    *(undefined8 *)(unaff_x23 + 0x188) = uVar2;
    *(undefined8 *)(unaff_x23 + 0x180) = uVar5;
    *(undefined8 *)(unaff_x23 + 0x188) = uVar2;
    *(undefined8 *)(unaff_x23 + 0x180) = uVar5;
    *(undefined8 *)(unaff_x23 + 0x188) = uVar2;
    *(undefined8 *)(unaff_x23 + 0x180) = uVar5;
    FUN_089af740(&stack0x00000230,0);
    lVar4 = *(long *)(unaff_x20 + 0x1a0);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0xb8);
      uVar2 = *(undefined8 *)(lVar4 + 200);
      uVar3 = *(undefined8 *)(lVar4 + 0xd0);
      uVar6 = *(undefined8 *)(lVar4 + 0xe0);
      uVar7 = *(undefined8 *)(lVar4 + 0xd8);
      *(undefined8 *)(unaff_x23 + 0x188) = *(undefined8 *)(lVar4 + 0xc0);
      *(undefined8 *)(unaff_x23 + 0x180) = uVar5;
      *(undefined8 *)(unaff_x23 + 0x198) = uVar3;
      *(undefined8 *)(unaff_x23 + 400) = uVar2;
      *(undefined8 *)(unaff_x23 + 0x1a8) = uVar6;
      *(undefined8 *)(unaff_x23 + 0x1a0) = uVar7;
      if (unaff_x21 != 0) {
        auVar1._4_4_ = in_stack_00000234;
        auVar1._0_4_ = auVar9._0_4_;
        auVar1._8_4_ = in_stack_00000238;
        auVar1._12_4_ = in_stack_0000023c;
        NEON_rev64(auVar1,4);
        auVar9 = FUN_084701c4();
        *(undefined1 (*) [16])(unaff_x19 + 200) = auVar9;
        auVar9 = FUN_084701c4();
        *(undefined1 (*) [16])(unaff_x19 + 0xe0) = auVar9;
        if (*(long *)(unaff_x20 + 0x1a0) != 0) {
          *(undefined1 *)(unaff_x19 + 0xf0) = *(undefined1 *)(*(long *)(unaff_x20 + 0x1a0) + 0x22);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


