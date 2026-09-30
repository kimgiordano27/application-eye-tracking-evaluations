/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.RecordMostRecentFixedTime.__codegen__OnCreate_00000A5B$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 03269320
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnCreate_00000A5B_PostfixBurstDelegate___ctor
               (undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined8 unaff_x23;
  long unaff_x24;
  long *unaff_x27;
  long unaff_x28;
  undefined8 unaff_x29;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack00000000000000a8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long in_stack_00000128;
  
  in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,uStack0000000000000018);
  uStack00000000000000a8 = param_2;
  in_stack_00000100 = FUN_01f8a924(&stack0x000000a8,*param_1,&stack0x00000060);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uStack00000000000000a8 =
       FUN_01f8a924(&stack0x00000100,*(undefined8 *)UnityEngine_UIElements_UIR_Allocator2D_TypeInfo,
                    &stack0x00000060,*(undefined8 *)UniGLTF_BlendShape_TypeInfo);
  in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,unaff_w22);
  in_stack_00000100 =
       FUN_01f8a924(&stack0x000000a8,
                    *(undefined8 *)_Common_Gameplay_Support_Scripts_InteractiveItem_BlinkFX_TypeInfo
                    ,&stack0x00000060,*(undefined8 *)VRM_BlendShapeBinding_TypeInfo);
  lVar1 = thunk_FUN_01a89e68(*(undefined8 *)System_Collections_Specialized_BitVector32_TypeInfo);
  FUN_027b3d9c(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(unaff_x19 + 0x18);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(undefined4 *)(lVar1 + 0x20) = unaff_w21;
    *(undefined4 *)(lVar1 + 0x24) = unaff_w22;
    *(undefined4 *)(lVar1 + 0x18) = uStack0000000000000018;
    *(undefined4 *)(lVar1 + 0x1c) = uStack000000000000001c;
    *(undefined8 *)(lVar1 + 0x30) = in_stack_00000118;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000110;
    *(undefined8 *)(lVar1 + 0x38) = unaff_x29;
    *(undefined8 *)(lVar1 + 0x40) = in_stack_00000010;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar1 + 0x38),0);
    *(undefined8 *)(lVar1 + 0x48) = unaff_x23;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (unaff_x24 == 0) {
      uVar2 = *(undefined8 *)System_Xml_Bits_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      unaff_x24 = FUN_0277b678(uVar2,0);
    }
    *(long *)(lVar1 + 0x50) = unaff_x24;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(lVar1 + 0x50),unaff_x24);
    if (unaff_x20 != 0) {
      *(long *)(unaff_x20 + 0x10) = lVar1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(unaff_x20 + 0x10),lVar1);
      uVar2 = thunk_FUN_01a89e68(*(undefined8 *)
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
      FUN_031f85f0(uVar2);
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


