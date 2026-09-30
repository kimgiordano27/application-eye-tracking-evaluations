/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.RecordMostRecentFixedTime.__codegen__OnCreate_00000A5B$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 032693c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnCreate_00000A5B_PostfixBurstDelegate__Invoke
               (long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x28;
  undefined8 unaff_x29;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long in_stack_00000128;
  
  FUN_027b3d9c();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(unaff_x19 + 0x18);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(undefined4 *)(param_1 + 0x20) = unaff_w21;
    *(undefined4 *)(param_1 + 0x24) = unaff_w22;
    *(undefined4 *)(param_1 + 0x18) = uStack0000000000000018;
    *(undefined4 *)(param_1 + 0x1c) = uStack000000000000001c;
    *(undefined8 *)(param_1 + 0x30) = in_stack_00000118;
    *(undefined8 *)(param_1 + 0x28) = in_stack_00000110;
    *(undefined8 *)(param_1 + 0x38) = unaff_x29;
    *(undefined8 *)(param_1 + 0x40) = in_stack_00000010;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x38),0);
    *(undefined8 *)(param_1 + 0x48) = unaff_x23;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (unaff_x24 == 0) {
      uVar1 = *(undefined8 *)System_Xml_Bits_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      unaff_x24 = FUN_0277b678(uVar1,0);
    }
    *(long *)(param_1 + 0x50) = unaff_x24;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(param_1 + 0x50),unaff_x24);
    if (unaff_x20 != 0) {
      *(long *)(unaff_x20 + 0x10) = param_1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(unaff_x20 + 0x10),param_1);
      uVar1 = thunk_FUN_01a89e68(*(undefined8 *)
                                  Fusion_Photon_Realtime_Async_AuthenticationFailedException_TypeInfo
                                );
      FUN_021dd4e8();
      in_stack_00000060 = 0;
      in_stack_00000068 = 0;
      in_stack_00000108 = in_stack_00000100;
      FUN_02241190(&stack0x00000060,&stack0x00000108,
                   *(undefined8 *)UnityEngine_UIElements_BackgroundSize_TypeInfo);
      if (*(int *)(*(long *)PTR_DAT_03cd83a0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_031f85f0(uVar1);
      if (*(long *)(unaff_x28 + 0x28) == in_stack_00000128) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


