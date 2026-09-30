/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_sessiongroup_handle_get
ENTRY_POINT: 0854ca58
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_sessiongroup_handle_get
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined4 in_stack_00000000;
  
  FUN_089af740();
  lVar4 = *(long *)(unaff_x20 + 0x1a0);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0xb8);
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    uVar6 = *(undefined8 *)(lVar4 + 0xe0);
    uVar5 = *(undefined8 *)(lVar4 + 0xd8);
    *(undefined8 *)(unaff_x23 + 0x188) = *(undefined8 *)(lVar4 + 0xc0);
    *(undefined8 *)(unaff_x23 + 0x180) = uVar1;
    *(undefined8 *)(unaff_x23 + 0x198) = uVar3;
    *(undefined8 *)(unaff_x23 + 400) = uVar2;
    *(undefined8 *)(unaff_x23 + 0x1a8) = uVar6;
    *(undefined8 *)(unaff_x23 + 0x1a0) = uVar5;
    if (unaff_x21 != 0) {
      auVar7._4_4_ = unaff_w24;
      auVar7._0_4_ = in_stack_00000000;
      auVar7._8_4_ = unaff_w25;
      auVar7._12_4_ = unaff_w22;
      NEON_rev64(auVar7,4);
      auVar7 = FUN_084701c4();
      *(undefined1 (*) [16])(unaff_x19 + 200) = auVar7;
      auVar7 = FUN_084701c4();
      *(undefined1 (*) [16])(unaff_x19 + 0xe0) = auVar7;
      if (*(long *)(unaff_x20 + 0x1a0) != 0) {
        *(undefined1 *)(unaff_x19 + 0xf0) = *(undefined1 *)(*(long *)(unaff_x20 + 0x1a0) + 0x22);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


