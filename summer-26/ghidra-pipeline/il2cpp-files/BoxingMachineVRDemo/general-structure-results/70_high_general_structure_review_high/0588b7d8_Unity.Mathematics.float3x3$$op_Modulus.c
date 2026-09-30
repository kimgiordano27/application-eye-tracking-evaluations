/*
FUNCTION_NAME: Unity.Mathematics.float3x3$$op_Modulus
ENTRY_POINT: 0588b7d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Unity_Mathematics_float3x3__op_Modulus(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar5;
  long unaff_x24;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long in_stack_00000018;
  
  FUN_02d6084c(Unity_VisualScripting_FullSerializer_fsSerializer_TypeInfo);
  FUN_02d6084c(
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_BurstDirectCall_TypeInfo
              );
  FUN_02d6084c(OVR_OpenVR_IVROverlay__GetOverlayErrorNameFromEnum_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0x84f) = 1;
  in_stack_00000018 = 0;
  uVar3 = thunk_FUN_02d9d534(*unaff_x19);
  Unity_Mathematics_math__mul(uVar3,0);
  in_stack_00000018 = FUN_0585deb4(uVar3,0);
  in_stack_00000018 = FUN_058653fc(&stack0x00000018);
  if (in_stack_00000018 != 0) {
    *(undefined8 *)(in_stack_00000018 + 0x80) = unaff_x22;
    thunk_FUN_02dd37b4();
    lVar2 = in_stack_00000018;
    FUN_0583c144();
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      thunk_FUN_02dd37b4(lVar2 + 0x20,0);
      lVar2 = in_stack_00000018;
      FUN_0583c144();
      uVar4 = FUN_0583c56c(0,0,0);
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0x40);
        *puVar5 = uVar4;
        thunk_FUN_02dd37b4(puVar5,uVar4);
        lVar2 = in_stack_00000018;
        FUN_0583c144();
        uVar4 = FUN_0583c56c(0,0,0);
        if (lVar2 != 0) {
          puVar5 = (undefined8 *)(lVar2 + 0x50);
          *puVar5 = uVar4;
          thunk_FUN_02dd37b4(puVar5,uVar4);
          if (in_stack_00000018 != 0) {
            *(undefined8 *)(in_stack_00000018 + 0x58) = unaff_x21;
            *(undefined8 *)(in_stack_00000018 + 0x60) = unaff_x20;
            thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x58),0);
            puVar1 = PTR_DAT_067683e8;
            if (in_stack_00000018 != 0) {
              FUN_0585bbd0(in_stack_00000018,1,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar4 = _DAT_0120b8a0;
              if (in_stack_00000018 != 0) {
                *(undefined8 *)(in_stack_00000018 + 0x18) = _UNK_0120b8a8;
                *(undefined8 *)(in_stack_00000018 + 0x10) = uVar4;
                auVar6 = FUN_0584b064(0,0);
                auVar7 = FUN_0584b064(1,0);
                if (in_stack_00000018 != 0) {
                  *(undefined1 (*) [16])(in_stack_00000018 + 200) = auVar7;
                  *(undefined1 (*) [16])(in_stack_00000018 + 0xb8) = auVar6;
                  Unity_Mathematics_uint4__set_wzx(in_stack_00000018,1,0);
                  return uVar3;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


