/*
FUNCTION_NAME: Unity.Entities.ScratchpadAllocator.Try_00000F17$BurstDirectCall$$Constructor
ENTRY_POINT: 0309f158
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8
Unity_Entities_ScratchpadAllocator_Try_00000F17_BurstDirectCall__Constructor
          (long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if ((DAT_0412b575 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_UI_IMeshModifier_var);
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate_var);
    FUN_01ab69ac(
                Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                );
    DAT_0412b575 = 1;
  }
  if (((param_1 != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
     (FUN_02215a88(*(long *)(param_1 + 0x30),param_2,&stack0x00000018,
                   *(undefined8 *)
                    Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                  ), in_stack_00000018 != 0)) {
    iVar1 = *(int *)(in_stack_00000018 + 0x10);
    if (iVar1 < 0) {
LAB_0309f250:
      uVar6 = FUN_039a3b9c(0);
      return uVar6;
    }
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) <= iVar1) goto LAB_0309f250;
      FUN_02215a88(lVar4,iVar1,&stack0x00000018,
                   *(undefined8 *)
                    Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate_var);
      lVar4 = in_stack_00000018;
      if (in_stack_00000018 != 0) {
        uVar5 = FUN_0309fae8(*(undefined4 *)(in_stack_00000018 + 0x14));
        uVar2 = FUN_0309fc70(*(undefined4 *)(lVar4 + 0x18));
        uVar3 = FUN_0309fc70(*(undefined4 *)(lVar4 + 0x1c));
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        FUN_039a3b88(&stack0x00000008,uVar2,uVar3,uVar5 & 0xffffffff,uVar5 >> 0x20 & 1,0);
        return in_stack_00000008;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


